/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray, MPAlternateTracks, MPQueueFeeder, NSString, NSURL, NSData, NSArray;

@interface MPAVItem : AVItem {
    unsigned int _advancedDuringPlayback : 1;
    unsigned int _handledFinishTime : 1;
    unsigned int _hasPlayedThisSession : 1;
    unsigned int _wasCountedAsSkipped : 1;
    unsigned int _useCachedPlayableDuration : 1;
    unsigned int _watchingAttributes : 1;
    unsigned int _videoDisabled : 1;
    unsigned int _lyricsAvailable : 1;
    unsigned int _delayedInvalidateCachedPlayedDurationScheduled : 1;
    unsigned int _isStreamable : 2;
    MPAlternateTracks *_alternateTracks;
    NSMutableArray *_artworkTimeMarkers;
    double _cachedDuration;
    double _cachedPlayableDuration;
    NSMutableArray *_chapterTimeMarkers;
    float _defaultPlaybackRate;
    MPQueueFeeder *_feeder;
    unsigned int _type;
    NSMutableArray *_urlTimeMarkers;
    NSString *_videoID;
}

@property(retain,readonly) NSString * album;
@property(retain,readonly) NSString * albumArtist;
@property(readonly) unsigned int albumTrackCount;
@property(readonly) unsigned int albumTrackNumber;
@property(retain,readonly) MPAlternateTracks * alternateTracks;
@property(retain,readonly) NSString * artist;
@property(retain,readonly) NSData * artworkImageData;
@property(retain,readonly) NSString * artworkMIMEType;
@property(retain,readonly) NSArray * artworkTimeMarkers;
@property(retain,readonly) NSArray * chapterTimeMarkers;
@property(retain,readonly) NSString * composer;
@property(readonly) unsigned int countForQueueFeeder;
@property(readonly) double currentTimeDisplayOverride;
@property float defaultPlaybackRate;
@property(readonly) unsigned int discCount;
@property(readonly) unsigned int discNumber;
@property(retain,readonly) NSString * displayableText;
@property(readonly) BOOL displayableTextLoaded;
@property(readonly) double durationFromExternalMetadata;
@property(readonly) double durationIfAvailable;
@property(readonly) BOOL durationIsValid;
@property(readonly) BOOL externalProtectionEnabled;
@property MPQueueFeeder * feeder;
@property(retain,readonly) NSString * genre;
@property(readonly) BOOL hasDataForItemArtwork;
@property(readonly) BOOL hasDisplayableText;
@property BOOL hasPlayedThisSession;
@property(readonly) unsigned int indexInQueueFeeder;
@property(retain,readonly) NSString * lyrics;
@property(retain,readonly) NSString * mainTitle;
@property(readonly) unsigned long long persistentID;
@property(readonly) double playableDuration;
@property(readonly) double playableDurationIfAvailable;
@property double playbackCheckpointCurrentTime;
@property(retain,readonly) NSURL * podcastURL;
@property(readonly) NSURL * protectedContentSupportStorageURL;
@property(readonly) BOOL requiresExternalProtection;
@property(getter=isStreamable,readonly) BOOL streamable;
@property(readonly) double timeOfSeekableEnd;
@property(readonly) double timeOfSeekableStart;
@property(readonly) unsigned int type;
@property(retain,readonly) NSArray * urlTimeMarkers;
@property(readonly) BOOL useEmbeddedChapterData;
@property(readonly) float userRating;
@property(getter=isVideoDisabled) BOOL videoDisabled;
@property(copy) NSString * videoID;
@property(readonly) BOOL wantsSubtitles;

+ (unsigned int)defaultScaleMode;
+ (void)setDefaultScaleMode:(unsigned int)arg1;

- (void)_blockingloadTimeMarkersForMarkerType:(int)arg1;
- (void)_checkAllowsBlockingDurationCall;
- (void)_commonInit;
- (void)_delayedInvalidateCachedPlayedDuration;
- (double)_durationFromExternalMetadataIfAvailable;
- (BOOL)_insertEmbeddedTimeMarkerWithInfo:(id)arg1 markerType:(int)arg2;
- (void)_itemAttributeAvailableNotification:(id)arg1;
- (id*)_ivarAddrForMarkerType:(int)arg1;
- (id)_mutableTimeMarkersForMarkerType:(int)arg1;
- (id)_newBlockingLoadedTimeMarkersForMarkerType:(int)arg1;
- (void)_realoadEmbeddedTimeMarkers;
- (void)_releaseAllTimeMarkers;
- (void)_updateForNaturalSizeChange;
- (id)album;
- (id)albumArtist;
- (unsigned int)albumTrackCount;
- (unsigned int)albumTrackNumber;
- (BOOL)allowAutoChangingScaleModeToFill;
- (id)alternateTracks;
- (unsigned int)alternatesCountForTypes:(unsigned int)arg1;
- (id)artist;
- (id)artworkImageData;
- (id)artworkMIMEType;
- (id)artworkTimeMarkerForTime:(double)arg1;
- (id)artworkTimeMarkers;
- (double)avDuration;
- (id)blockForDirectAVControllerNotificationReferencingItem:(id)arg1;
- (id)blockingAttributeForKey:(id)arg1;
- (id)chapterTimeMarkerForTime:(double)arg1;
- (id)chapterTimeMarkers;
- (id)composer;
- (unsigned int)countForQueueFeeder;
- (double)currentTimeDisplayOverride;
- (void)dealloc;
- (float)defaultPlaybackRate;
- (unsigned int)discCount;
- (unsigned int)discNumber;
- (id)displayableText;
- (BOOL)displayableTextLoaded;
- (double)duration;
- (double)durationFromExternalMetadata;
- (double)durationIfAvailable;
- (BOOL)durationIsValid;
- (BOOL)externalProtectionEnabled;
- (id)feeder;
- (void)flushNowPlayingCaches;
- (id)formatDetailsForTracks;
- (id)genre;
- (BOOL)hasAlternatesForTypes:(unsigned int)arg1;
- (BOOL)hasDataForItemArtwork;
- (BOOL)hasDisplayableText;
- (BOOL)hasPlayedThisSession;
- (id)imageCacheRequestWithSize:(struct CGSize { float x1; float x2; })arg1 time:(double)arg2;
- (unsigned int)indexInQueueFeeder;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (BOOL)insertEmbeddedTimeMarkerWithInfo:(id)arg1 markerType:(int)arg2;
- (BOOL)isPlaceholderForItem:(id)arg1;
- (BOOL)isStreamable;
- (BOOL)isSupportedDefaultPlaybackSpeed:(unsigned int)arg1;
- (BOOL)isVideoDisabled;
- (void)loadFakeURLTimeMarkersIfNecessary;
- (id)localizedPositionInPlaylistString;
- (id)lyrics;
- (id)mainTitle;
- (id)newTimeMarkerWithInfo:(id)arg1 markerType:(int)arg2;
- (id)newURLTimeMarkersByFakingWithChapterMarkers:(id)arg1;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned long long)persistentID;
- (double)playableDuration;
- (double)playableDurationIfAvailable;
- (double)playbackCheckpointCurrentTime;
- (float)playbackRateForLevel:(unsigned int)arg1 direction:(int)arg2 paused:(BOOL)arg3;
- (id)podcastURL;
- (void)postDurationDidChange;
- (id)protectedContentSupportStorageURL;
- (BOOL)requiresExternalProtection;
- (void)resetBookkeeping;
- (float)scanIntervalForLevel:(unsigned int)arg1 paused:(BOOL)arg2;
- (void)setAlternateAudioTrackID:(unsigned int)arg1;
- (void)setDefaultPlaybackRate:(float)arg1;
- (void)setFeeder:(id)arg1;
- (void)setHasPlayedThisSession:(BOOL)arg1;
- (void)setOverrideDuration:(double)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (void)setSubtitleTrackID:(unsigned int)arg1;
- (void)setUserAdvancedDuringPlayback:(BOOL)arg1;
- (void)setUserEnabledSubtitles:(BOOL)arg1;
- (void)setUserSkippedPlayback:(BOOL)arg1;
- (void)setVideoDisabled:(BOOL)arg1;
- (void)setVideoID:(id)arg1;
- (void)setupPlaybackInfo;
- (double)timeOfSeekableEnd;
- (double)timeOfSeekableStart;
- (id)titlesForTime:(double)arg1;
- (unsigned int)type;
- (void)updateAttributesForDefaultsChange:(id)arg1;
- (id)urlTimeMarkerForTime:(double)arg1;
- (id)urlTimeMarkers;
- (BOOL)useAsyncEmbeddedChapterDataLoading;
- (BOOL)useBlockingEmbeddedChapterDataLoading;
- (BOOL)useEmbeddedChapterData;
- (float)userRating;
- (BOOL)userSkippedPlayback;
- (id)videoID;
- (BOOL)wantsSubtitles;

@end