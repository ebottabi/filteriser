/*

DESCRIPTION
Use these UIImage additions to render the filters you want to use. Use the python tool to extract
the polynomial values that are used in the sampleFilter method.


See http://www.weemoapps.com/creating-retro-and-analog-image-filters-in-mobile-apps 
for the theory behind this method.

AUTHOR
email: vassilis@weemoapps.com
twitter: @weemoapps

LICENSE
Do whatever you want, but please mention this code in your code if you modify it.

VERSION
0.1
*/

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate,
UINavigationControllerDelegate, UIPopoverControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *originalImageView;
@property (weak, nonatomic) IBOutlet UIImageView *filteredImageView;
@end
