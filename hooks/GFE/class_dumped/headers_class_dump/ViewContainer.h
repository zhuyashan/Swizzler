//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIView.h"

@class UIScrollView;

@interface ViewContainer : UIView
{
    BOOL shouldSetSize;
    float currentScale;
    UIScrollView *scrollView;
}

@property(nonatomic) UIScrollView *scrollView; // @synthesize scrollView;
- (void)updateCurrentScale:(float)arg1;
- (void)updateUiWhenRotation:(int)arg1;
- (void)doLayoutWhenAddSubviews;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

