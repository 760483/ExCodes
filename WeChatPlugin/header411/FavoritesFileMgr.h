//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString, WCFavoritesDB;

@interface FavoritesFileMgr : MMService <MMService>
{
    WCFavoritesDB *_FavDB;
}

- (void).cxx_destruct;
- (BOOL)decFileRetainCountByMd5:(id)arg1 IsThumb:(BOOL)arg2 ItemLocalId:(unsigned int)arg3 DataFmt:(id)arg4;
- (BOOL)incFileRetainCountByMd5:(id)arg1 andItemLocalId:(unsigned int)arg2;
- (void)initDB:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
