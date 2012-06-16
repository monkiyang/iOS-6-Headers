/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "UIView.h"

@class SBBatteryReflectionView, UIImage, UIImageView, UILabel;

@interface SBBatteryChargingView : UIView
{
    int _type;
    UIImageView *_topBatteryView;
    SBBatteryReflectionView *_bottomBatteryView;
    UIImage *_lastBatteryImage;
    UILabel *_percentLabel;
    int _lastBatteryIndex;
    int _lastBatteryPercentage;
    unsigned int _showReflection:1;
}

+ (int)redChargeIndexForType:(int)arg1;
+ (float)batteryHeightForType:(int)arg1;
+ (struct CGSize)defaultSizeForType:(int)arg1;
- (void)_batteryStatusChanged:(id)arg1;
- (id)_imageFormatString;
- (int)_currentBatteryIndex;
- (void)setShowsReflection:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end
