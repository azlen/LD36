package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.math.FlxMath;

class MenuState extends FlxState
{
	private var _btnPlay:FlxButton;
	override public function create():Void
	{
		var _background:FlxSprite = new FlxSprite(-1920*(1-0.5625)/2, -1200*(1-0.5625)/2);
		_background.loadGraphic('assets/images/menuscreen.png');
		_background.scale.set(0.5625, 0.5625);
		add(_background);

		// Add play button
		_btnPlay = new FlxButton(975*0.5625, 810*0.5625, "", clickPlay);
		_btnPlay.loadGraphic('assets/images/playbtn.png');
		_btnPlay.onOver.callback = onOver;
		_btnPlay.onOut.callback = onOut;
		_btnPlay.onOver.sound = FlxG.sound.load("assets/sounds/playbtn_hover.wav");
		_btnPlay.onDown.sound = FlxG.sound.load("assets/sounds/playbtn_click.wav");
		_btnPlay.scale.set(0.5625, 0.5625);
		add(_btnPlay);

		// Antialiasing
		FlxG.camera.antialiasing = true;

		// Use system cursor (for now at least)
		FlxG.mouse.useSystemCursor = true;

		// Super create!
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}

	private function clickPlay():Void
	{
		FlxG.switchState(new PlayState());
	}
	private function onOver():Void
	{
		_btnPlay.loadGraphic('assets/images/playbtn_hover.png');
	}
	private function onOut():Void
	{
		_btnPlay.loadGraphic('assets/images/playbtn.png');
	}
}
