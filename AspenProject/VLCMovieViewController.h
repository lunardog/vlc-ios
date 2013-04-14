//
//  VLCDetailViewController.h
//  AspenProject
//
//  Created by Felix Paul Kühne on 27.02.13.
//  Copyright (c) 2013 VideoLAN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VLCMovieViewController : UIViewController <VLCMediaPlayerDelegate, UIActionSheetDelegate>
{
    VLCMediaPlayer *_mediaPlayer;

    BOOL _controlsHidden;

    UIActionSheet *_subtitleActionSheet;
    UIActionSheet *_audiotrackActionSheet;
}

@property (nonatomic, retain) IBOutlet UIView *movieView;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *backButton;
@property (nonatomic, retain) IBOutlet UISlider *positionSlider;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *timeDisplay;
@property (nonatomic, retain) IBOutlet UIButton *playPauseButton;
@property (nonatomic, retain) IBOutlet UIButton *bwdButton;
@property (nonatomic, retain) IBOutlet UIButton *fwdButton;
@property (nonatomic, retain) IBOutlet UIButton *subtitleSwitcherButton;
@property (nonatomic, retain) IBOutlet UIButton *audioSwitcherButton;
@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;
@property (nonatomic, retain) IBOutlet UIView *controllerPanel;

@property (nonatomic, retain) IBOutlet UIView *playingExternallyView;
@property (nonatomic, retain) IBOutlet UILabel *playingExternallyTitle;
@property (nonatomic, retain) IBOutlet UILabel *playingExternallyDescription;

@property (nonatomic, retain) MLFile *mediaItem;

- (IBAction)closePlayback:(id)sender;
- (IBAction)positionSliderAction:(id)sender;

- (IBAction)play:(id)sender;
- (IBAction)backward:(id)sender;
- (IBAction)forward:(id)sender;
- (IBAction)switchAudioTrack:(id)sender;
- (IBAction)switchSubtitleTrack:(id)sender;

@end
