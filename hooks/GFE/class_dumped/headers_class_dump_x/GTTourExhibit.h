/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class NSString, UIImage;

@interface GTTourExhibit : _ABAddressBookAddRecord
{
    UIImage *image;
    NSString *title;
    NSString *text;
}

+ (id)exhibitWithIdentifier:(id)fp8;
- (void)setText:(id)fp8;
- (id)text;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setImage:(id)fp8;
- (id)image;
- (void)dealloc;

@end

