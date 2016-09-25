/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportExpandGapOperation : FCOperation {
    FCFeedViewportBookmark * _bookmark;
    BOOL  _cachedOnly;
    FCCloudContext * _context;
    unsigned int  _desiredHeadlineCount;
    id /* block */  _expandGapCompletionHandler;
    FCFeedDescriptor * _feedDescriptor;
    <FCFeedElement> * _gapElement;
    unsigned int  _gapExpansionDirection;
    int  _gapExpansionPolicy;
    BOOL  _offlineMode;
    FCFeedViewportDiff * _resultDiff;
    FCFeedViewport * _resultViewport;
    FCFeedViewport * _viewport;
}

@property (nonatomic, copy) FCFeedViewportBookmark *bookmark;
@property (nonatomic) BOOL cachedOnly;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic) unsigned int desiredHeadlineCount;
@property (nonatomic, copy) id /* block */ expandGapCompletionHandler;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, copy) <FCFeedElement> *gapElement;
@property (nonatomic) unsigned int gapExpansionDirection;
@property (nonatomic) int gapExpansionPolicy;
@property BOOL offlineMode;
@property (nonatomic, retain) FCFeedViewportDiff *resultDiff;
@property (nonatomic, retain) FCFeedViewport *resultViewport;
@property (nonatomic, retain) FCFeedViewport *viewport;

- (void).cxx_destruct;
- (id)_groupEmitterWithIdentifier:(id)arg1;
- (id)bookmark;
- (BOOL)cachedOnly;
- (id)context;
- (unsigned int)desiredHeadlineCount;
- (id /* block */)expandGapCompletionHandler;
- (id)feedDescriptor;
- (id)gapElement;
- (unsigned int)gapExpansionDirection;
- (int)gapExpansionPolicy;
- (id)init;
- (BOOL)offlineMode;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultDiff;
- (id)resultViewport;
- (void)setBookmark:(id)arg1;
- (void)setCachedOnly:(BOOL)arg1;
- (void)setContext:(id)arg1;
- (void)setDesiredHeadlineCount:(unsigned int)arg1;
- (void)setExpandGapCompletionHandler:(id /* block */)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setGapElement:(id)arg1;
- (void)setGapExpansionDirection:(unsigned int)arg1;
- (void)setGapExpansionPolicy:(int)arg1;
- (void)setOfflineMode:(BOOL)arg1;
- (void)setResultDiff:(id)arg1;
- (void)setResultViewport:(id)arg1;
- (void)setViewport:(id)arg1;
- (BOOL)validateOperation;
- (id)viewport;

@end