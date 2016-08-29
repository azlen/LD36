package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/Achafont.ttf", "assets/Achafont.ttf");
			type.set ("assets/Achafont.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/children/child1.png", "assets/images/children/child1.png");
			type.set ("assets/images/children/child1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/children/child2.png", "assets/images/children/child2.png");
			type.set ("assets/images/children/child2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud1.png", "assets/images/clouds/cloud1.png");
			type.set ("assets/images/clouds/cloud1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud10.png", "assets/images/clouds/cloud10.png");
			type.set ("assets/images/clouds/cloud10.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud11.png", "assets/images/clouds/cloud11.png");
			type.set ("assets/images/clouds/cloud11.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud2.png", "assets/images/clouds/cloud2.png");
			type.set ("assets/images/clouds/cloud2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud3.png", "assets/images/clouds/cloud3.png");
			type.set ("assets/images/clouds/cloud3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud4.png", "assets/images/clouds/cloud4.png");
			type.set ("assets/images/clouds/cloud4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud5.png", "assets/images/clouds/cloud5.png");
			type.set ("assets/images/clouds/cloud5.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud6.png", "assets/images/clouds/cloud6.png");
			type.set ("assets/images/clouds/cloud6.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud7.png", "assets/images/clouds/cloud7.png");
			type.set ("assets/images/clouds/cloud7.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud8.png", "assets/images/clouds/cloud8.png");
			type.set ("assets/images/clouds/cloud8.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/clouds/cloud9.png", "assets/images/clouds/cloud9.png");
			type.set ("assets/images/clouds/cloud9.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/menuscreen.png", "assets/images/menuscreen.png");
			type.set ("assets/images/menuscreen.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/moon.png", "assets/images/moon.png");
			type.set ("assets/images/moon.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/playbtn.png", "assets/images/playbtn.png");
			type.set ("assets/images/playbtn.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/playbtn_hover.png", "assets/images/playbtn_hover.png");
			type.set ("assets/images/playbtn_hover.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/playbutton.png", "assets/images/playbutton.png");
			type.set ("assets/images/playbutton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player_old.png", "assets/images/player_old.png");
			type.set ("assets/images/player_old.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree1.png", "assets/images/trees/tree1.png");
			type.set ("assets/images/trees/tree1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree2.png", "assets/images/trees/tree2.png");
			type.set ("assets/images/trees/tree2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree3.png", "assets/images/trees/tree3.png");
			type.set ("assets/images/trees/tree3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree4.png", "assets/images/trees/tree4.png");
			type.set ("assets/images/trees/tree4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree5.png", "assets/images/trees/tree5.png");
			type.set ("assets/images/trees/tree5.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree6.png", "assets/images/trees/tree6.png");
			type.set ("assets/images/trees/tree6.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree7.png", "assets/images/trees/tree7.png");
			type.set ("assets/images/trees/tree7.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree8.png", "assets/images/trees/tree8.png");
			type.set ("assets/images/trees/tree8.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/trees/tree9.png", "assets/images/trees/tree9.png");
			type.set ("assets/images/trees/tree9.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Metamorphous-Regular.ttf", "assets/Metamorphous-Regular.ttf");
			type.set ("assets/Metamorphous-Regular.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/playbtn_click.wav", "assets/sounds/playbtn_click.wav");
			type.set ("assets/sounds/playbtn_click.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/playbtn_hover.wav", "assets/sounds/playbtn_hover.wav");
			type.set ("assets/sounds/playbtn_hover.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
