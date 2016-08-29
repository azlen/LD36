package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_achafont_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_metamorphous_regular_ttf);
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		
		#end
		
		#if flash
		
		className.set ("assets/Achafont.eot", __ASSET__assets_achafont_eot);
		type.set ("assets/Achafont.eot", AssetType.BINARY);
		className.set ("assets/Achafont.svg", __ASSET__assets_achafont_svg);
		type.set ("assets/Achafont.svg", AssetType.TEXT);
		className.set ("assets/Achafont.ttf", __ASSET__assets_achafont_ttf);
		type.set ("assets/Achafont.ttf", AssetType.FONT);
		className.set ("assets/Achafont.woff", __ASSET__assets_achafont_woff);
		type.set ("assets/Achafont.woff", AssetType.BINARY);
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		className.set ("assets/images/children/child1.png", __ASSET__assets_images_children_child1_png);
		type.set ("assets/images/children/child1.png", AssetType.IMAGE);
		className.set ("assets/images/children/child2.png", __ASSET__assets_images_children_child2_png);
		type.set ("assets/images/children/child2.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud1.png", __ASSET__assets_images_clouds_cloud1_png);
		type.set ("assets/images/clouds/cloud1.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud10.png", __ASSET__assets_images_clouds_cloud10_png);
		type.set ("assets/images/clouds/cloud10.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud11.png", __ASSET__assets_images_clouds_cloud11_png);
		type.set ("assets/images/clouds/cloud11.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud2.png", __ASSET__assets_images_clouds_cloud2_png);
		type.set ("assets/images/clouds/cloud2.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud3.png", __ASSET__assets_images_clouds_cloud3_png);
		type.set ("assets/images/clouds/cloud3.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud4.png", __ASSET__assets_images_clouds_cloud4_png);
		type.set ("assets/images/clouds/cloud4.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud5.png", __ASSET__assets_images_clouds_cloud5_png);
		type.set ("assets/images/clouds/cloud5.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud6.png", __ASSET__assets_images_clouds_cloud6_png);
		type.set ("assets/images/clouds/cloud6.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud7.png", __ASSET__assets_images_clouds_cloud7_png);
		type.set ("assets/images/clouds/cloud7.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud8.png", __ASSET__assets_images_clouds_cloud8_png);
		type.set ("assets/images/clouds/cloud8.png", AssetType.IMAGE);
		className.set ("assets/images/clouds/cloud9.png", __ASSET__assets_images_clouds_cloud9_png);
		type.set ("assets/images/clouds/cloud9.png", AssetType.IMAGE);
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		className.set ("assets/images/menuscreen.png", __ASSET__assets_images_menuscreen_png);
		type.set ("assets/images/menuscreen.png", AssetType.IMAGE);
		className.set ("assets/images/moon.png", __ASSET__assets_images_moon_png);
		type.set ("assets/images/moon.png", AssetType.IMAGE);
		className.set ("assets/images/playbtn.png", __ASSET__assets_images_playbtn_png);
		type.set ("assets/images/playbtn.png", AssetType.IMAGE);
		className.set ("assets/images/playbtn_hover.png", __ASSET__assets_images_playbtn_hover_png);
		type.set ("assets/images/playbtn_hover.png", AssetType.IMAGE);
		className.set ("assets/images/playbutton.png", __ASSET__assets_images_playbutton_png);
		type.set ("assets/images/playbutton.png", AssetType.IMAGE);
		className.set ("assets/images/player.png", __ASSET__assets_images_player_png);
		type.set ("assets/images/player.png", AssetType.IMAGE);
		className.set ("assets/images/player_old.png", __ASSET__assets_images_player_old_png);
		type.set ("assets/images/player_old.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree1.png", __ASSET__assets_images_trees_tree1_png);
		type.set ("assets/images/trees/tree1.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree2.png", __ASSET__assets_images_trees_tree2_png);
		type.set ("assets/images/trees/tree2.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree3.png", __ASSET__assets_images_trees_tree3_png);
		type.set ("assets/images/trees/tree3.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree4.png", __ASSET__assets_images_trees_tree4_png);
		type.set ("assets/images/trees/tree4.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree5.png", __ASSET__assets_images_trees_tree5_png);
		type.set ("assets/images/trees/tree5.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree6.png", __ASSET__assets_images_trees_tree6_png);
		type.set ("assets/images/trees/tree6.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree7.png", __ASSET__assets_images_trees_tree7_png);
		type.set ("assets/images/trees/tree7.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree8.png", __ASSET__assets_images_trees_tree8_png);
		type.set ("assets/images/trees/tree8.png", AssetType.IMAGE);
		className.set ("assets/images/trees/tree9.png", __ASSET__assets_images_trees_tree9_png);
		type.set ("assets/images/trees/tree9.png", AssetType.IMAGE);
		className.set ("assets/Metamorphous-Regular.eot", __ASSET__assets_metamorphous_regular_eot);
		type.set ("assets/Metamorphous-Regular.eot", AssetType.BINARY);
		className.set ("assets/Metamorphous-Regular.svg", __ASSET__assets_metamorphous_regular_svg);
		type.set ("assets/Metamorphous-Regular.svg", AssetType.TEXT);
		className.set ("assets/Metamorphous-Regular.ttf", __ASSET__assets_metamorphous_regular_ttf);
		type.set ("assets/Metamorphous-Regular.ttf", AssetType.FONT);
		className.set ("assets/Metamorphous-Regular.woff", __ASSET__assets_metamorphous_regular_woff);
		type.set ("assets/Metamorphous-Regular.woff", AssetType.BINARY);
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		className.set ("assets/sounds/child.wav", __ASSET__assets_sounds_child_wav);
		type.set ("assets/sounds/child.wav", AssetType.SOUND);
		className.set ("assets/sounds/playbtn_click.wav", __ASSET__assets_sounds_playbtn_click_wav);
		type.set ("assets/sounds/playbtn_click.wav", AssetType.SOUND);
		className.set ("assets/sounds/playbtn_hover.wav", __ASSET__assets_sounds_playbtn_hover_wav);
		type.set ("assets/sounds/playbtn_hover.wav", AssetType.SOUND);
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/Achafont.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/Achafont.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/Achafont.ttf";
		className.set (id, __ASSET__assets_achafont_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/Achafont.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/children/child1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/children/child2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud10.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud11.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud6.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud7.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud8.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/clouds/cloud9.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/images/menuscreen.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/moon.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/playbtn.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/playbtn_hover.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/playbutton.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/player.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/player_old.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree1.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree2.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree3.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree4.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree5.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree6.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree7.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree8.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/images/trees/tree9.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "assets/Metamorphous-Regular.eot";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/Metamorphous-Regular.svg";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/Metamorphous-Regular.ttf";
		className.set (id, __ASSET__assets_metamorphous_regular_ttf);
		
		type.set (id, AssetType.FONT);
		id = "assets/Metamorphous-Regular.woff";
		path.set (id, id);
		
		type.set (id, AssetType.BINARY);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/child.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/playbtn_click.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/playbtn_hover.wav";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		
		type.set (id, AssetType.TEXT);
		id = "flixel/sounds/beep.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/sounds/flixel.ogg";
		path.set (id, id);
		
		type.set (id, AssetType.SOUND);
		id = "flixel/fonts/nokiafc22.ttf";
		className.set (id, __ASSET__flixel_fonts_nokiafc22_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/fonts/monsterrat.ttf";
		className.set (id, __ASSET__flixel_fonts_monsterrat_ttf);
		
		type.set (id, AssetType.FONT);
		id = "flixel/images/ui/button.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/Achafont.eot", __ASSET__assets_achafont_eot);
		type.set ("assets/Achafont.eot", AssetType.BINARY);
		
		className.set ("assets/Achafont.svg", __ASSET__assets_achafont_svg);
		type.set ("assets/Achafont.svg", AssetType.TEXT);
		
		className.set ("assets/Achafont.ttf", __ASSET__assets_achafont_ttf);
		type.set ("assets/Achafont.ttf", AssetType.FONT);
		
		className.set ("assets/Achafont.woff", __ASSET__assets_achafont_woff);
		type.set ("assets/Achafont.woff", AssetType.BINARY);
		
		className.set ("assets/data/data-goes-here.txt", __ASSET__assets_data_data_goes_here_txt);
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/children/child1.png", __ASSET__assets_images_children_child1_png);
		type.set ("assets/images/children/child1.png", AssetType.IMAGE);
		
		className.set ("assets/images/children/child2.png", __ASSET__assets_images_children_child2_png);
		type.set ("assets/images/children/child2.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud1.png", __ASSET__assets_images_clouds_cloud1_png);
		type.set ("assets/images/clouds/cloud1.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud10.png", __ASSET__assets_images_clouds_cloud10_png);
		type.set ("assets/images/clouds/cloud10.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud11.png", __ASSET__assets_images_clouds_cloud11_png);
		type.set ("assets/images/clouds/cloud11.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud2.png", __ASSET__assets_images_clouds_cloud2_png);
		type.set ("assets/images/clouds/cloud2.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud3.png", __ASSET__assets_images_clouds_cloud3_png);
		type.set ("assets/images/clouds/cloud3.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud4.png", __ASSET__assets_images_clouds_cloud4_png);
		type.set ("assets/images/clouds/cloud4.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud5.png", __ASSET__assets_images_clouds_cloud5_png);
		type.set ("assets/images/clouds/cloud5.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud6.png", __ASSET__assets_images_clouds_cloud6_png);
		type.set ("assets/images/clouds/cloud6.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud7.png", __ASSET__assets_images_clouds_cloud7_png);
		type.set ("assets/images/clouds/cloud7.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud8.png", __ASSET__assets_images_clouds_cloud8_png);
		type.set ("assets/images/clouds/cloud8.png", AssetType.IMAGE);
		
		className.set ("assets/images/clouds/cloud9.png", __ASSET__assets_images_clouds_cloud9_png);
		type.set ("assets/images/clouds/cloud9.png", AssetType.IMAGE);
		
		className.set ("assets/images/images-go-here.txt", __ASSET__assets_images_images_go_here_txt);
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		
		className.set ("assets/images/menuscreen.png", __ASSET__assets_images_menuscreen_png);
		type.set ("assets/images/menuscreen.png", AssetType.IMAGE);
		
		className.set ("assets/images/moon.png", __ASSET__assets_images_moon_png);
		type.set ("assets/images/moon.png", AssetType.IMAGE);
		
		className.set ("assets/images/playbtn.png", __ASSET__assets_images_playbtn_png);
		type.set ("assets/images/playbtn.png", AssetType.IMAGE);
		
		className.set ("assets/images/playbtn_hover.png", __ASSET__assets_images_playbtn_hover_png);
		type.set ("assets/images/playbtn_hover.png", AssetType.IMAGE);
		
		className.set ("assets/images/playbutton.png", __ASSET__assets_images_playbutton_png);
		type.set ("assets/images/playbutton.png", AssetType.IMAGE);
		
		className.set ("assets/images/player.png", __ASSET__assets_images_player_png);
		type.set ("assets/images/player.png", AssetType.IMAGE);
		
		className.set ("assets/images/player_old.png", __ASSET__assets_images_player_old_png);
		type.set ("assets/images/player_old.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree1.png", __ASSET__assets_images_trees_tree1_png);
		type.set ("assets/images/trees/tree1.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree2.png", __ASSET__assets_images_trees_tree2_png);
		type.set ("assets/images/trees/tree2.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree3.png", __ASSET__assets_images_trees_tree3_png);
		type.set ("assets/images/trees/tree3.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree4.png", __ASSET__assets_images_trees_tree4_png);
		type.set ("assets/images/trees/tree4.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree5.png", __ASSET__assets_images_trees_tree5_png);
		type.set ("assets/images/trees/tree5.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree6.png", __ASSET__assets_images_trees_tree6_png);
		type.set ("assets/images/trees/tree6.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree7.png", __ASSET__assets_images_trees_tree7_png);
		type.set ("assets/images/trees/tree7.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree8.png", __ASSET__assets_images_trees_tree8_png);
		type.set ("assets/images/trees/tree8.png", AssetType.IMAGE);
		
		className.set ("assets/images/trees/tree9.png", __ASSET__assets_images_trees_tree9_png);
		type.set ("assets/images/trees/tree9.png", AssetType.IMAGE);
		
		className.set ("assets/Metamorphous-Regular.eot", __ASSET__assets_metamorphous_regular_eot);
		type.set ("assets/Metamorphous-Regular.eot", AssetType.BINARY);
		
		className.set ("assets/Metamorphous-Regular.svg", __ASSET__assets_metamorphous_regular_svg);
		type.set ("assets/Metamorphous-Regular.svg", AssetType.TEXT);
		
		className.set ("assets/Metamorphous-Regular.ttf", __ASSET__assets_metamorphous_regular_ttf);
		type.set ("assets/Metamorphous-Regular.ttf", AssetType.FONT);
		
		className.set ("assets/Metamorphous-Regular.woff", __ASSET__assets_metamorphous_regular_woff);
		type.set ("assets/Metamorphous-Regular.woff", AssetType.BINARY);
		
		className.set ("assets/music/music-goes-here.txt", __ASSET__assets_music_music_goes_here_txt);
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		
		className.set ("assets/sounds/child.wav", __ASSET__assets_sounds_child_wav);
		type.set ("assets/sounds/child.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/playbtn_click.wav", __ASSET__assets_sounds_playbtn_click_wav);
		type.set ("assets/sounds/playbtn_click.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/playbtn_hover.wav", __ASSET__assets_sounds_playbtn_hover_wav);
		type.set ("assets/sounds/playbtn_hover.wav", AssetType.SOUND);
		
		className.set ("assets/sounds/sounds-go-here.txt", __ASSET__assets_sounds_sounds_go_here_txt);
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		
		className.set ("flixel/sounds/beep.ogg", __ASSET__flixel_sounds_beep_ogg);
		type.set ("flixel/sounds/beep.ogg", AssetType.SOUND);
		
		className.set ("flixel/sounds/flixel.ogg", __ASSET__flixel_sounds_flixel_ogg);
		type.set ("flixel/sounds/flixel.ogg", AssetType.SOUND);
		
		className.set ("flixel/fonts/nokiafc22.ttf", __ASSET__flixel_fonts_nokiafc22_ttf);
		type.set ("flixel/fonts/nokiafc22.ttf", AssetType.FONT);
		
		className.set ("flixel/fonts/monsterrat.ttf", __ASSET__flixel_fonts_monsterrat_ttf);
		type.set ("flixel/fonts/monsterrat.ttf", AssetType.FONT);
		
		className.set ("flixel/images/ui/button.png", __ASSET__flixel_images_ui_button_png);
		type.set ("flixel/images/ui/button.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes = loader.bytes;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (event.currentTarget.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest ();
			var future = request.load (path.get (id) + "?" + Assets.cache.version);
			future.onProgress (function (progress) promise.progress (progress));
			future.onError (function (msg) promise.error (msg));
			future.onComplete (function (bytes) promise.complete (bytes.getString (0, bytes.length)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_achafont_eot extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_achafont_svg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_achafont_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_achafont_woff extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_children_child1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_children_child2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud10_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud11_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_clouds_cloud9_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_menuscreen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_moon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playbtn_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playbtn_hover_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_playbutton_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_player_old_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree8_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_images_trees_tree9_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_metamorphous_regular_eot extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_metamorphous_regular_svg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_metamorphous_regular_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_metamorphous_regular_woff extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_child_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_playbtn_click_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_playbtn_hover_wav extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5



@:keep #if display private #end class __ASSET__assets_achafont_ttf extends lime.text.Font { public function new () { super (); name = "A Charming Font"; } } 


































@:keep #if display private #end class __ASSET__assets_metamorphous_regular_ttf extends lime.text.Font { public function new () { super (); name = "Metamorphous"; } } 








@:keep #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { super (); name = "Nokia Cellphone FC Small"; } } 
@:keep #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { super (); name = "Monsterrat"; } } 



#else



#if (windows || mac || linux || cpp)


@:file("assets/Achafont.eot") #if display private #end class __ASSET__assets_achafont_eot extends lime.utils.Bytes {}
@:file("assets/Achafont.svg") #if display private #end class __ASSET__assets_achafont_svg extends lime.utils.Bytes {}
@:font("assets/Achafont.ttf") #if display private #end class __ASSET__assets_achafont_ttf extends lime.text.Font {}
@:file("assets/Achafont.woff") #if display private #end class __ASSET__assets_achafont_woff extends lime.utils.Bytes {}
@:file("assets/data/data-goes-here.txt") #if display private #end class __ASSET__assets_data_data_goes_here_txt extends lime.utils.Bytes {}
@:image("assets/images/children/child1.png") #if display private #end class __ASSET__assets_images_children_child1_png extends lime.graphics.Image {}
@:image("assets/images/children/child2.png") #if display private #end class __ASSET__assets_images_children_child2_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud1.png") #if display private #end class __ASSET__assets_images_clouds_cloud1_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud10.png") #if display private #end class __ASSET__assets_images_clouds_cloud10_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud11.png") #if display private #end class __ASSET__assets_images_clouds_cloud11_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud2.png") #if display private #end class __ASSET__assets_images_clouds_cloud2_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud3.png") #if display private #end class __ASSET__assets_images_clouds_cloud3_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud4.png") #if display private #end class __ASSET__assets_images_clouds_cloud4_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud5.png") #if display private #end class __ASSET__assets_images_clouds_cloud5_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud6.png") #if display private #end class __ASSET__assets_images_clouds_cloud6_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud7.png") #if display private #end class __ASSET__assets_images_clouds_cloud7_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud8.png") #if display private #end class __ASSET__assets_images_clouds_cloud8_png extends lime.graphics.Image {}
@:image("assets/images/clouds/cloud9.png") #if display private #end class __ASSET__assets_images_clouds_cloud9_png extends lime.graphics.Image {}
@:file("assets/images/images-go-here.txt") #if display private #end class __ASSET__assets_images_images_go_here_txt extends lime.utils.Bytes {}
@:image("assets/images/menuscreen.png") #if display private #end class __ASSET__assets_images_menuscreen_png extends lime.graphics.Image {}
@:image("assets/images/moon.png") #if display private #end class __ASSET__assets_images_moon_png extends lime.graphics.Image {}
@:image("assets/images/playbtn.png") #if display private #end class __ASSET__assets_images_playbtn_png extends lime.graphics.Image {}
@:image("assets/images/playbtn_hover.png") #if display private #end class __ASSET__assets_images_playbtn_hover_png extends lime.graphics.Image {}
@:image("assets/images/playbutton.png") #if display private #end class __ASSET__assets_images_playbutton_png extends lime.graphics.Image {}
@:image("assets/images/player.png") #if display private #end class __ASSET__assets_images_player_png extends lime.graphics.Image {}
@:image("assets/images/player_old.png") #if display private #end class __ASSET__assets_images_player_old_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree1.png") #if display private #end class __ASSET__assets_images_trees_tree1_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree2.png") #if display private #end class __ASSET__assets_images_trees_tree2_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree3.png") #if display private #end class __ASSET__assets_images_trees_tree3_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree4.png") #if display private #end class __ASSET__assets_images_trees_tree4_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree5.png") #if display private #end class __ASSET__assets_images_trees_tree5_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree6.png") #if display private #end class __ASSET__assets_images_trees_tree6_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree7.png") #if display private #end class __ASSET__assets_images_trees_tree7_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree8.png") #if display private #end class __ASSET__assets_images_trees_tree8_png extends lime.graphics.Image {}
@:image("assets/images/trees/tree9.png") #if display private #end class __ASSET__assets_images_trees_tree9_png extends lime.graphics.Image {}
@:file("assets/Metamorphous-Regular.eot") #if display private #end class __ASSET__assets_metamorphous_regular_eot extends lime.utils.Bytes {}
@:file("assets/Metamorphous-Regular.svg") #if display private #end class __ASSET__assets_metamorphous_regular_svg extends lime.utils.Bytes {}
@:font("assets/Metamorphous-Regular.ttf") #if display private #end class __ASSET__assets_metamorphous_regular_ttf extends lime.text.Font {}
@:file("assets/Metamorphous-Regular.woff") #if display private #end class __ASSET__assets_metamorphous_regular_woff extends lime.utils.Bytes {}
@:file("assets/music/music-goes-here.txt") #if display private #end class __ASSET__assets_music_music_goes_here_txt extends lime.utils.Bytes {}
@:file("assets/sounds/child.wav") #if display private #end class __ASSET__assets_sounds_child_wav extends lime.utils.Bytes {}
@:file("assets/sounds/playbtn_click.wav") #if display private #end class __ASSET__assets_sounds_playbtn_click_wav extends lime.utils.Bytes {}
@:file("assets/sounds/playbtn_hover.wav") #if display private #end class __ASSET__assets_sounds_playbtn_hover_wav extends lime.utils.Bytes {}
@:file("assets/sounds/sounds-go-here.txt") #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends lime.utils.Bytes {}
@:file("/usr/local/lib/haxe/lib/flixel/4,1,1/assets/sounds/beep.ogg") #if display private #end class __ASSET__flixel_sounds_beep_ogg extends lime.utils.Bytes {}
@:file("/usr/local/lib/haxe/lib/flixel/4,1,1/assets/sounds/flixel.ogg") #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends lime.utils.Bytes {}
@:font("/usr/local/lib/haxe/lib/flixel/4,1,1/assets/fonts/nokiafc22.ttf") #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:font("/usr/local/lib/haxe/lib/flixel/4,1,1/assets/fonts/monsterrat.ttf") #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:image("/usr/local/lib/haxe/lib/flixel/4,1,1/assets/images/ui/button.png") #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}



#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_achafont_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_achafont_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__assets_metamorphous_regular_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_metamorphous_regular_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_nokiafc22_ttf (); src = font.src; name = font.name; super (); }}
@:keep #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__flixel_fonts_monsterrat_ttf (); src = font.src; name = font.name; super (); }}

#end

#end