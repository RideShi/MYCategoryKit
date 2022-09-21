//
//  UIImage+UIImageExtras.h
//  test
//
//  Created by hufangyao1 on 2022/8/18.
//  Copyright © 2022 hufangyao1. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (UIImageExtras)

- (UIImage *) scaleProportionalToSize1: (CGSize)size1;
- (UIImage *) scaleProportionalToSize: (CGSize)size;


@end

NS_ASSUME_NONNULL_END
