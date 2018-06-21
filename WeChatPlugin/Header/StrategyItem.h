//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface StrategyItem : PBGeneratedMessage
{
    unsigned int hasLogType:1;
    unsigned int hasEnalbe:1;
    unsigned int hasCycle:1;
    unsigned int hasExtInfo:1;
    unsigned int logType;
    unsigned int enalbe;
    unsigned int cycle;
    NSString *extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(nonatomic, setter=SetCycle:) unsigned int cycle; // @synthesize cycle;
@property(readonly, nonatomic) BOOL hasCycle; // @synthesize hasCycle;
@property(nonatomic, setter=SetEnalbe:) unsigned int enalbe; // @synthesize enalbe;
@property(readonly, nonatomic) BOOL hasEnalbe; // @synthesize hasEnalbe;
@property(nonatomic, setter=SetLogType:) unsigned int logType; // @synthesize logType;
@property(readonly, nonatomic) BOOL hasLogType; // @synthesize hasLogType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
