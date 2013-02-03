/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UILabel;

@interface _UILabeledPushButton : UIThreePartButton {
    UILabel *_textLabel;
}

+ (void)_initializeSafeCategory;

- (void)_drawImageAndTextPartInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)drawTitleAtPoint:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2;
- (float)labelFontSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelFontSize:(float)arg1;

@end