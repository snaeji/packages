// Copyright 2013 The Flutter Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

@import GoogleMaps;
@import UIKit;

#import "FGMAssetProvider.h"
#import "google_maps_flutter_pigeon_messages.g.h"

NS_ASSUME_NONNULL_BEGIN

/// Creates a UIImage from Pigeon bitmap.
///
/// Pass YES for downsampleToScreenScale when the image is rendered at a fixed point size
/// (markers, pin glyphs): bitmaps carrying more pixels than the screen can display at that
/// size are resampled down to the screen's pixel density, capping the texture the Maps SDK
/// rasterizes from them. Pass NO when the image can render larger than its point size
/// (ground overlays, which scale with map zoom), where the extra pixels preserve detail.
UIImage *_Nullable FGMIconFromBitmap(FGMPlatformBitmap *platformBitmap,
                                     NSObject<FGMAssetProvider> *assetProvider,
                                     CGFloat screenScale, BOOL downsampleToScreenScale);
/// Returns a BOOL indicating whether image is considered scalable with the given scale factor from
/// size.
BOOL FGMIsScalableWithScaleFactorFromSize(CGSize originalSize, CGSize targetSize);

NS_ASSUME_NONNULL_END
