//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class NSArray, UILabel, UITextField, UIView, UIWebView;

@interface DeviceIDViewController : UIViewController <UITextFieldDelegate>
{
    UIView *currentView;
    UIWebView *uiWebView;
    UIView *viewForm;
    UILabel *instructionText;
    UILabel *instructionText2;
    UILabel *deviceID1;
    UILabel *deviceID2;
    UITextField *_tfPasswordA;
    UITextField *_tfPasswordB;
    UITextField *_tfPasswordC;
    UITextField *_tfPasswordD;
    BOOL _fieldAutoChanged;
    NSArray *_tfUnlockCodeEntries;
}

- (void)dealloc;
- (void)dismiss:(id)arg1;
- (void)ShowMessage:(id)arg1 withMsg:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)GxSecurityUnlock:(const char *)arg1;
- (void)authenticate:(id)arg1;
- (void)showEnterUnlockCodeScreen;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)positionViewsForOrientation:(int)arg1;
- (float)getCenteredXAxisForView:(id)arg1 inFrame:(struct CGRect)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)back:(id)arg1;
- (id)getDefaultAutomationScreenName;

@end
