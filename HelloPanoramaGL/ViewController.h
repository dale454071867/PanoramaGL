

#import <UIKit/UIKit.h>
#import "PLView.h"
#import "PLJSONLoader.h"

@interface ViewController : UIViewController <PLViewDelegate>
{
@private
    PLView *plView;
    UISegmentedControl *segmentedControl; //分段控制
}

@property(nonatomic, retain) IBOutlet UISegmentedControl *segmentedControl;

-(void)selectPanorama:(NSInteger)index;

-(IBAction)segmentedControlIndexChanged:(id)sender;

@end
