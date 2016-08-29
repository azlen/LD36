package;

import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.math.FlxMath;
import flixel.math.FlxVelocity;
import flixel.util.FlxCollision;

class Player extends FlxSprite
{
	public var speed:Float = 200;
	var _up:Bool = false;
 	var _down:Bool = false;
 	var _left:Bool = false;
 	var _right:Bool = false;

 	var _vy:Int = 0;
 	var _vx:Int = 0;
 	var _vv:Int = 0;

	public function new(?X:Float=0, ?Y:Float=0)
	{
		// Super!
		super(X, Y);

		loadGraphic("assets/images/player.png");
		scale.set(0.5, 0.5);
		updateHitbox();

		// Create our place holder sprite
		//makeGraphic(48, 32, FlxColor.BLUE);

		// Adding some drag, because why not?
		drag.x = drag.y = 1600;
		angularDrag = 1600;

		// Maximum velocities and angular rotations
		//maxVelocity.x = 1000;
		//maxVelocity.y = 1000;
		maxAngular = 1000;
 	}

 	override public function update(elapsed:Float):Void
 	{
 		// Collide player with ground
 		//FlxG.collide(this, Reg.state._ground);

		// Move player
		movement();

		// Update!
		super.update(elapsed);
 	}

	private function movement():Void
	{
		_up = FlxG.keys.anyPressed([UP, W]);
		_down = FlxG.keys.anyPressed([DOWN, S]);
		_left = FlxG.keys.anyPressed([LEFT, A]);
		_right = FlxG.keys.anyPressed([RIGHT, D]);

		acceleration.y = 200;

		if(_up)
			acceleration.y = -500;
			//_vy += -200;
			

		//if(!isTouching())
		//{
		
		//}

		if(angle > 180)
			angle = angle - 360;
		else if(angle < -180)
			angle = angle + 360;

		if(y > 200)
		{
			acceleration.y = FlxMath.minInt(Std.int(acceleration.y), 0);
			velocity.y = FlxMath.minInt(Std.int(velocity.y), 0);
			velocity.x = 0;
			angularAcceleration = 0;
			angularVelocity = 0;
			y = 201;
		}
		else
		{
			if(_right)
				angularAcceleration = speed;
			else if(_left)
				angularAcceleration = -speed;
			else
				angularAcceleration = 0;

			angle += angle / 100;
			_vv = FlxMath.maxInt(FlxMath.minInt(Std.int(_vv + angle/10), 100), -100);

			var temp = FlxVelocity.velocityFromAngle(angle, _vv);
			velocity.x += temp.x / 3;
			velocity.y += temp.y / 10;

			velocity.x = FlxMath.maxInt(FlxMath.minInt(Std.int(velocity.x), 500), -500);
		}

		//angularVelocity = angle;

		//velocity.x += angle;
	}	
}