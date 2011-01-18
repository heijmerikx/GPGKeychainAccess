/*
 Copyright © Roman Zechmeister, 2011
 
 Dieses Programm ist freie Software. Sie können es unter den Bedingungen 
 der GNU General Public License, wie von der Free Software Foundation 
 veröffentlicht, weitergeben und/oder modifizieren, entweder gemäß 
 Version 3 der Lizenz oder (nach Ihrer Option) jeder späteren Version.
 
 Die Veröffentlichung dieses Programms erfolgt in der Hoffnung, daß es Ihnen 
 von Nutzen sein wird, aber ohne irgendeine Garantie, sogar ohne die implizite 
 Garantie der Marktreife oder der Verwendbarkeit für einen bestimmten Zweck. 
 Details finden Sie in der GNU General Public License.
 
 Sie sollten ein Exemplar der GNU General Public License zusammen mit diesem 
 Programm erhalten haben. Falls nicht, siehe <http://www.gnu.org/licenses/>.
*/

#import <Sparkle/Sparkle.h>

@interface PreferencesController : NSWindowController {
	NSWindow *window;
	IBOutlet NSToolbar *toolbar;
	IBOutlet NSView *keyserverPreferencesView;
	IBOutlet NSView *updatesPreferencesView;
	NSView *view;
}

@property (assign) IBOutlet NSWindow *window;
@property (readonly) IBOutlet NSArray *keyservers;


+ (id)sharedInstance;
- (IBAction)showPreferences:(id)sender;
- (IBAction)selectTab:(NSToolbarItem *)sender;

@end
