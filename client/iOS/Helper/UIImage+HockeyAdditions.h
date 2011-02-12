//
//  UIImage+HockeyAdditions.h
//  HockeyDemo
//
//  Created by Peter Steinberger on 10.01.11.
//  Copyright 2011 Peter Steinberger. All rights reserved.
//

@interface UIImage (HockeyAdditions)

- (UIImage *)bw_roundedCornerImage:(NSInteger)cornerSize borderSize:(NSInteger)borderSize;
- (UIImage *)bw_imageToFitSize:(CGSize)fitSize honorScaleFactor:(BOOL)honorScaleFactor;
- (UIImage *)bw_reflectedImageWithHeight:(NSUInteger)height fromAlpha:(float)fromAlpha toAlpha:(float)toAlpha;

- (id)bw_initWithContentsOfResolutionIndependentFile:(NSString *)path;
+ (UIImage*)bw_imageWithContentsOfResolutionIndependentFile:(NSString *)path;
+ (UIImage *)bw_imageNamed:(NSString *)imageName bundle:(NSString *)bundleName;

@end