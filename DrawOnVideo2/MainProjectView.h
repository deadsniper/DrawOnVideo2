//
//  MainProjectView.h
//  DrawOnVideo
//
//  Created by Harel Avikasis on 02/04/13.
//  Copyright (c) 2013 Harel Avikasis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <QuartzCore/QuartzCore.h>
#import "PSPushPopPressView.h"
#import "ImageViewWithTime.h"
//#import <AVFoundation/AVFoundation.h>



//#import "ViewController.h"


@interface MainProjectView : UIViewController <PSPushPopPressViewDelegate,UIActionSheetDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>{
    IBOutlet UIScrollView *scroller;
    NSURL *videoUrl;
    NSURL *videoUrl2;
    UIViewController *viewController;
    
    
    
    MPMoviePlayerController *player;
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
    NSMutableArray *drawArray;
    UIImage *thumbnail;
    
    NSUInteger *activeCount_;
    
    UIScrollView *thumbnailScrollView;
    
    
    BOOL isThereSavedData;
    
    
    
    PSPushPopPressView *pushPopPressView_;
    PSPushPopPressView *pushPopPressVideoView_;

}
- (IBAction)addVideo:(id)sender;
- (IBAction)pauseVideo:(id)sender;
- (IBAction)undoButton:(id)sender;
- (IBAction)resetButton:(id)sender;


- (void)playerThumbnailImageRequestDidFinish:(NSNotification*)notification;
- (void)handleTapFrom:(UITapGestureRecognizer *)recognizer;
- (ImageViewWithTime *)makeThumbnailImageViewFromImage:(UIImage *)image andTimeCode:(NSNumber *)timecode;



//-(IBAction)onTimeSliderChange:(UISlider *)sender;
//- (IBAction)newVideo:(id)sender;
- (IBAction)save:(id)sender;

@property (nonatomic, retain) UIViewController *viewController;

@property (weak, nonatomic) IBOutlet UIView *videoView;
@property (weak, nonatomic) IBOutlet UIImageView *drawView;
@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;
@property MPMoviePlayerController *player;

@property (nonatomic, retain) IBOutlet UIScrollView *thumbnailScrollView;
//@property (weak, nonatomic) IBOutlet UIScrollView *thumbnailScrollView;

//@property (strong, nonatomic) AVPlayer *player;

//@property (nonatomic, weak) IBOutlet UILabel *currentTime;
//@property (nonatomic, weak) IBOutlet UIView *timeView;



@property BOOL newVid;
@property NSURL  *videoUrl;
@property NSURL  *videoUrl2;
@property BOOL isThereSavedData;


//- (BOOL) startMediaBrowserFromViewController: (UIViewController*) controller
//                               usingDelegate: (id <UIImagePickerControllerDelegate,
//                                               UINavigationControllerDelegate>) delegate;


@end
