/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class ContactPerson, NSString;

@interface ContactKeyword : _ABAddressBookAddRecord
{
    NSString *keyword;
    ContactPerson *contactPerson;
}

- (void)setContactPerson:(id)fp8;
- (id)contactPerson;
- (void)setKeyword:(id)fp8;
- (id)keyword;
- (void)dump;
- (void)dealloc;
- (int)compareWord:(id)fp8;
- (id)initWithKeyword:(id)fp8 contact:(id)fp12;

@end

