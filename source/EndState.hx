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


class EndState extends FlxState
{
	override public function create():Void
	{
		var _gameover:FlxText = new FlxText(40, 100, 1000);
		_gameover.text = "Game Over";
		_gameover.scrollFactor.set(0, 0);
		_gameover.setFormat('assets/Metamorphous-Regular.ttf', 100, 0xFF000000, "center");
		add(_gameover);
		
		var _gameover2:FlxText = new FlxText(40, 300, 1000);
		_gameover2.text = "Delicious! you captured " + Std.string(Reg.children) + " children.";
		_gameover2.scrollFactor.set(0, 0);
		_gameover2.setFormat('assets/Metamorphous-Regular.ttf', 32, 0xFF000000, "center");
		add(_gameover2);

		var _menuBtn:FlxButton = new FlxButton(540 - 20, 810*0.5625, "Menu", clickMenu);
		//_menuBtn.loadGraphic('assets/images/playbtn.png');
		//_menuBtn.onOver.callback = onOver;
		//_menuBtn.onOut.callback = onOut;
		_menuBtn.onOver.sound = FlxG.sound.load("assets/sounds/playbtn_hover.wav");
		_menuBtn.onDown.sound = FlxG.sound.load("assets/sounds/playbtn_click.wav");
		//_menuBtn.scale.set(0.5625, 0.5625);
		add(_menuBtn);

		FlxG.camera.bgColor = 0xFF537d82;
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
	private function clickMenu():Void
	{
		FlxG.switchState(new MenuState());
	}
}