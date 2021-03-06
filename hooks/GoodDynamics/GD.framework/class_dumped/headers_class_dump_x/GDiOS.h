/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSDictionary;

@interface GDiOS : _CATransform3DMakeScale
{
    id <GDiOSDelegate> delegate;
    NSDictionary *launchOptions;
}

+ (BOOL)isUsingDataPlan;
+ (void)setSecondaryBrandingColor:(id)fp8;
+ (void)setPrimaryBrandingColor:(id)fp8;
+ (id)allocWithZone:(struct _NSZone *)fp8;
+ (id)sharedInstance;
+ (id)checkIfAppExists:(struct AppDetail *)fp8 inArray:(id)fp12;
+ (BOOL)isInitialized;
+ (void)initializeWithClassNameConformingToUIApplicationDelegate:(id)fp8;
+ (void)initializeWithClassConformingToUIApplicationDelegate:(Class)fp8;
+ (void)initialise;
+ (void)nowInitialize;
+ (void)load;
- (void)setLaunchOptions:(id)fp8;
- (id)launchOptions;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)init;
- (void)configureUIWithLogo:(id)fp8 bundle:(id)fp12 color:(id)fp16;
- (void)configureUIWithLogo:(id)fp8 bundle:(id)fp12 colorTheme:(int)fp16;
- (void)configureUIWithBlockedMessage:(id)fp8;
- (void)configureUIWithWipedMessage:(id)fp8;
- (BOOL)setUIAutoRotationForPortrait:(BOOL)fp8 andPortraitUpsideDown:(BOOL)fp12 andLandscapeRight:(BOOL)fp16 andLandscapeLeft:(BOOL)fp20;
- (BOOL)showPreferenceUI:(id)fp8;
- (id)getWindow;
- (id)getVersion;
- (id)getServiceProvidersFor:(id)fp8 andVersion:(id)fp12 andType:(int)fp16;
- (id)getServiceProviders;
- (id)getApplicationDetailsForService:(id)fp8 andVersion:(id)fp12 andType:(int)fp16;
- (id)getApplicationDetailsForService:(id)fp8 andVersion:(id)fp12;
- (id)getApplicationPolicyString;
- (id)getApplicationPolicy;
- (id)getApplicationConfig;
- (BOOL)isActivated;
- (void)programmaticAuthorize:(id)fp8 withAccessKey:(id)fp12;
- (void)authorize:(id)fp8 andVersion:(id)fp12 withDelegate:(id)fp16;
- (void)authorize:(id)fp8;
- (void)authorize;
- (void)authorize:(id)fp8 andVersion:(id)fp12;

@end

