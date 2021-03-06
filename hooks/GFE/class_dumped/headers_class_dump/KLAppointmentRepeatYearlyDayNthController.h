//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "GUFontSizeAwareViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITextFieldDelegate.h"

@class AppointmentWrapper;

@interface KLAppointmentRepeatYearlyDayNthController : GUFontSizeAwareViewController <UIActionSheetDelegate, UITextFieldDelegate>
{
    AppointmentWrapper *appWrapper;
    AppointmentWrapper *appWrapperTmp;
    AppointmentWrapper *appWrapperTmpLoc;
    int theMonth;
    int theWeekday;
    int theWeekdayOrdinal;
    BOOL isFirst;
    BOOL isSecond;
    BOOL isThird;
    BOOL isFourth;
    BOOL isLast;
    BOOL isDay;
    BOOL isWeekday;
    BOOL isWeekendday;
    BOOL isSunday;
    BOOL isMonday;
    BOOL isTuesday;
    BOOL isWednesday;
    BOOL isThursday;
    BOOL isFriday;
    BOOL isSaturday;
}

@property(nonatomic) BOOL isSaturday; // @synthesize isSaturday;
@property(nonatomic) BOOL isFriday; // @synthesize isFriday;
@property(nonatomic) BOOL isThursday; // @synthesize isThursday;
@property(nonatomic) BOOL isWednesday; // @synthesize isWednesday;
@property(nonatomic) BOOL isTuesday; // @synthesize isTuesday;
@property(nonatomic) BOOL isMonday; // @synthesize isMonday;
@property(nonatomic) BOOL isSunday; // @synthesize isSunday;
@property(nonatomic) BOOL isWeekendday; // @synthesize isWeekendday;
@property(nonatomic) BOOL isWeekday; // @synthesize isWeekday;
@property(nonatomic) BOOL isDay; // @synthesize isDay;
@property(nonatomic) BOOL isLast; // @synthesize isLast;
@property(nonatomic) BOOL isFourth; // @synthesize isFourth;
@property(nonatomic) BOOL isThird; // @synthesize isThird;
@property(nonatomic) BOOL isSecond; // @synthesize isSecond;
@property(nonatomic) BOOL isFirst; // @synthesize isFirst;
@property(nonatomic) int theWeekdayOrdinal; // @synthesize theWeekdayOrdinal;
@property(nonatomic) int theWeekday; // @synthesize theWeekday;
@property(nonatomic) int theMonth; // @synthesize theMonth;
@property(retain, nonatomic) AppointmentWrapper *appWrapperTmpLoc; // @synthesize appWrapperTmpLoc;
@property(retain, nonatomic) AppointmentWrapper *appWrapperTmp; // @synthesize appWrapperTmp;
@property(retain, nonatomic) AppointmentWrapper *appWrapper; // @synthesize appWrapper;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)timerReloadData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)displayMonths:(int)arg1 cell:(id)arg2;
- (void)displayDays:(int)arg1 cell:(id)arg2;
- (void)displayDayOrdninals:(int)arg1 cell:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)checkValues;
- (void)dealloc;
- (void)done;
- (id)init;

@end

