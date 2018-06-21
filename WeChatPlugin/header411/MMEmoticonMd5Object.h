//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMEmoticonMd5Object : NSObject
{
    unsigned int status;
    NSString *md5;
    NSString *cdnUrl;
    NSString *designerId;
    NSString *thumbImgUrl;
    NSString *encryptUrl;
    NSString *aesKey;
    NSString *productId;
}

+ (unsigned int)StatusValueFailed;
+ (unsigned int)StatusValueComplete;
+ (unsigned int)StatusValueUnComplete;
+ (void)initialize;
+ (void)_initPBTableOfMMEmoticonMd5Object;
@property(retain, nonatomic) NSString *productId; // @synthesize productId;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey;
@property(retain, nonatomic) NSString *encryptUrl; // @synthesize encryptUrl;
@property(retain, nonatomic) NSString *thumbImgUrl; // @synthesize thumbImgUrl;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end
