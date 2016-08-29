package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;
import flixel.FlxCamera;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxRandom;
import flixel.math.FlxPoint;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.math.FlxRect;


class PlayState extends FlxState
{
	public var _ground:FlxSprite;
	public var _random:FlxRandom;
	private var _timer:FlxText;
	private var _player:Player;
	private var _moon:FlxSprite;
	private var _children:Array<FlxSprite> = [];

	override public function create():Void
	{
		// Make variables accessible to other classes?
		Reg.state = this;
		Reg.children = 0;
		Reg.timer = Reg.totalTime = 60 * 2;

		var _gradient:FlxSprite = FlxGradient.createGradientFlxSprite(1080, 675, [0xFF103e4d, 0xFF2d244a]);
		_gradient.scrollFactor.set(0, 0);
		add(_gradient);

		_timer = new FlxText(40, 20, 1000);
		_timer.text = "5:00";
		_timer.scrollFactor.set(0, 0);
		_timer.setFormat('assets/Metamorphous-Regular.ttf', 42, 0xFF000000, "left");
		add(_timer);

		_random = new FlxRandom();

		_moon = new FlxSprite(800, 40);
		_moon.loadGraphic('assets/images/moon.png');
		_moon.scale.set(0.7, 0.7);
		_moon.scrollFactor.set(0.018, 0.3);
		add(_moon);

		//var _clouds:FlxSpriteGroup = new FlxSpriteGroup(0, 0);
		for(i in 0...1200)
		{
			var _cloud:FlxSprite = new FlxSprite(i * 100, _random.int(-100, 100));
			var _n:Int = _random.int(1, 11, []);
			_cloud.loadGraphic('assets/images/clouds/cloud' + Std.string(_n) + '.png');
			var _scale:Float = _random.float(0.35, 0.65);
			_cloud.scale.set(_scale, _scale);
			_cloud.alpha = _random.float(0.2, 0.5);
			_cloud.scrollFactor.set(_random.float(0.2, 0.7), _random.float(0.2, 0.7));
			_cloud.flipX = [false, true][_random.int(0, 1)];
			add(_cloud);
		}
		//add(_clouds);

		_ground = new FlxSprite(0, 340);
		_ground.makeGraphic(9900, 999, 0x00000000, true);
		var vertices:Array<FlxPoint> = new Array<FlxPoint>();
		//vertices[0] = new FlxPoint(100, 100);
		//vertices[1] = new FlxPoint(0, 100);
		for(i in 0...99)
		{
			vertices[i] = new FlxPoint(9800 - i * 100, 200);
		}
		for(i in 0...99)
		{
			vertices[i + 99] = new FlxPoint(i * 100, _random.int(0, 60));
		}
		_ground.drawPolygon(vertices, 0xFF000000, {color: 0x00000000, thickness: 0});
		//_ground.solid = _ground.immovable = true;
		add(_ground);

		var _ground2:FlxSprite = new FlxSprite(0, 390);
		_ground2.makeGraphic(100000, 999, 0xFF000000);
		add(_ground2);

		var _trees:FlxSpriteGroup = new FlxSpriteGroup(0, 0);
		var _last:Int = 0;
		for(i in 0...2000)
		{
			if(_random.int(1,5) == 1)
				continue;
			var _tree:FlxSprite = new FlxSprite(i * 200, -530);
			var _n:Int = _random.int(1, 9, [_last]);
			_last = _n;
			_tree.loadGraphic('assets/images/trees/tree' + Std.string(_n) + '.png');
			_tree.scale.set(0.5625, 0.5625);
			_tree.flipX = [false, true][_random.int(0, 1)];
			_trees.add(_tree);
		}
		add(_trees);

		for(i in 0...1000)
		{
			if(_random.int(1,5) == 1)
				continue;
			var _tree:FlxSprite = new FlxSprite(i * 100, -370);
			var _n:Int = _random.int(1, 9, [_last]);
			_last = _n;
			_tree.loadGraphic('assets/images/trees/tree' + Std.string(_n) + '.png');
			_tree.alpha = 0.5;
			_tree.scrollFactor.set(_random.float(0.4, 0.6), 0.9);
			_tree.flipX = [false, true][_random.int(0, 1)];
			_tree.scale.set(0.3, 0.3);
			add(_tree);
		}


		// Create player
		_player = new Player(20, 20);
		add(_player);

		// CHILDREN
		for(i in 0...20)
		{
			if(_random.int(1,3) < 3)
				continue;
			var _child:FlxSprite = new FlxSprite(1080 + i * 1300, 200);
			var _n:Int = _random.int(1, 2, [_last]);
			_last = _n;
			_child.loadGraphic('assets/images/children/child' + Std.string(_n) + '.png');
			_child.flipX = [false, true][_random.int(0, 1)];
			_child.scale.set(0.3, 0.3);
			_children[i] = _child;
			_child.updateHitbox();
			add(_child);
		}

		// Camera should follow the player
		FlxG.camera.follow(_player, FlxCameraFollowStyle.PLATFORMER, 1);
		FlxG.camera.setScrollBoundsRect(0, -1000, 100000, 1500, true);
		// FlxG.camera.minScrollX = 0;
		// FlxG.camera.maxScrollY = 500;
		FlxG.camera.antialiasing = true;
		FlxG.camera.bgColor = 0xFF2d244a;

		// Super create!
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		//_ground.offset.x = FlxG.camera.scroll.x;
		//_ground.makeGraphic(300, 40, 0xFFFF0000);

		Reg.timer -= elapsed;
		if(Reg.timer < 0)
		{
			Reg.timer = 0;
			// end game?
		}
		var _seconds = Std.string(Std.int(Reg.timer % 60));
		if(_seconds.length == 1) _seconds = '0' + _seconds;
		_timer.text = Std.string(Std.int(Reg.timer / 60)) + ':' + _seconds;

		_moon.y = 40 + (1 - Reg.timer / Reg.totalTime) * 200;

		for(i in 0...(_children.length - 1))
		{
			//if(_player.overlaps(_children[i]))
			if(FlxG.overlap(_player, _children[i]))
			{
				trace('KILL');
				var _temp:FlxSprite = _children[i];
				_children.remove(_temp);
				_temp.destroy();

				Reg.children += 1;
			}
		}

		super.update(elapsed);
	}
}
