//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWCollectionViewCell.h"

@class MMAvatarImageView, NSButton, NSTrackingArea, WCContactData;

__attribute__((visibility("hidden")))
@interface SessionSelectedAvatarCell : JNWCollectionViewCell
{
    WCContactData *_contact;
    MMAvatarImageView *_avatarImageView;
    NSButton *_removeButton;
    NSTrackingArea *_trackingArea;
    CDUnknownBlockType _didClickRemoveButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didClickRemoveButtonBlock; // @synthesize didClickRemoveButtonBlock=_didClickRemoveButtonBlock;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) MMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setupWitchContact:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

