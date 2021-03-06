// HAXWindow.h
// Created by Rob Rix on 2011-01-06
// Copyright 2011 Rob Rix

#import "HAXElement.h"

@interface HAXWindow : HAXElement

@property (nonatomic, assign) CGPoint originCarbon;
@property (nonatomic, assign, readonly) CGPoint originCocoa;

@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGRect frameCarbon;
@property (nonatomic, assign, readonly) CGRect frameCocoa;

@property (nonatomic, readonly) NSString *title;

@property (nonatomic, readonly) NSScreen *screen;

@property (nonatomic, readonly) NSArray *views;

-(BOOL)isFullscreen;
-(BOOL)isFullscreenWithEpsilon: (unsigned int) epsilon;
-(bool)raise;
-(bool)close;

@end
