//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GDProxy : NSObject
{
    Class _classToProxy;
    SEL _methodToProxy;
    Class _replacementClass;
    SEL _replacementMethod;
    Class _classContainingOrig;
    SEL _methodContainingOrig;
}

@property SEL methodContainingOrig; // @synthesize methodContainingOrig=_methodContainingOrig;
@property Class classContainingOrig; // @synthesize classContainingOrig=_classContainingOrig;
@property SEL replacementMethod; // @synthesize replacementMethod=_replacementMethod;
@property Class replacementClass; // @synthesize replacementClass=_replacementClass;
@property SEL methodToProxy; // @synthesize methodToProxy=_methodToProxy;
@property Class classToProxy; // @synthesize classToProxy=_classToProxy;

@end
