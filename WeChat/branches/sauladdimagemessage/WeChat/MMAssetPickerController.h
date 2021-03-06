//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MMAssetPickerController : UIViewController

- (void)OnBack:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnPreview:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)addOutterSelectInfo;
- (void)adjustSubviewRects;
- (void)adjustTableViewInitOffset;
- (id)assetsForIndexPath:(id)arg1;
- (id)backupImageToJPEGWithImage:(id)arg1 andImageData:(id)arg2;

- (void)didReceiveMemoryWarning;
- (void)fixOffset;
- (id)getHeaderView;
- (id)init;
- (void)initBottomBar;
- (void)initData;
- (id)initForJustReturnMMAsset:(_Bool)arg1 withAdjustRevertIndex:(unsigned long long)arg2;
- (void)initTableView;
- (void)initView;
- (_Bool)isSelected:(id)arg1;

- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onSelectedInfoChange;
- (void)prepareOnlyPhotos;
- (void)preparePhotos:(_Bool)arg1;
- (void)preparePhotosAndVideos;
- (void)preparePreview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)prepareSend;
- (id)previewAssetInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewAssetTotal;
- (void)previewGif:(id)arg1;
- (void)previewImage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)previewImageOfSelected;
- (void)previewVideo:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)processingImageAtIndex:(id)arg1;
- (void)reloadBottomBar;
- (void)reloadPhotoView;
- (void)reloadSelectedDisplayView;
- (void)sendImage;
- (void)sendImageByOriginal:(_Bool)arg1;
- (void)sendVideoWithURL:(id)arg1;
- (void)startPopUpAnimation:(id)arg1 originScale:(double)arg2;
- (void)stopLoadingAfterSent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;

@end

