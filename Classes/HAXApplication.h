// HAXApplication.h
// Created by Rob Rix on 2011-01-06
// Copyright 2011 Monochrome Industries

#import <Haxcessibility/HAXElement.h>

@class HAXWindow;

@interface HAXApplication : HAXElement

@property (nonatomic, readonly) HAXWindow *focusedWindow;

@end