#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, VENSeparatorType) {
    VENSeparatorTypeStraight,
    VENSeparatorTypeJagged,
    VENSeparatorTypeNone
};

typedef NS_ENUM(NSUInteger, VENSeparatorPosition) {
    VENSeparatorPositionTop,
    VENSeparatorPositionBottom
};

@interface VENSeparatorView : UIView

@property (nonatomic, assign) VENSeparatorType topSeparatorType;
@property (nonatomic, assign) VENSeparatorType bottomSeparatorType;

@property (nonatomic, assign) NSUInteger jaggedEdgeVerticalVertexDistance;
@property (nonatomic, assign) NSUInteger jaggedEdgeHorizontalVertexDistance;

@property (nonatomic, assign) CGFloat borderWidth;

@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, strong) UIColor *fillColor;

/**
 * Initializes a view with the given separator types.
 
 @param frame The frame of the separator view. This should usually just be set to the frame of its superview.
 @param topLineSeparatorType The type of separator at the top of the separator view.
 @param bottomLineSeparatorType The type of separator at the bottom of the separator view.
 */
- (instancetype)initWithFrame:(CGRect)frame
         topLineSeparatorType:(VENSeparatorType)topLineSeparatorType
      bottomLineSeparatorType:(VENSeparatorType)bottomLineSeparatorType;

/**
 * Sets the top and bottom separator types of the reciever

 @param topLineSeparatorType The type of separator at the top of the separator view.
 @param bottomLineSeparatorType The type of separator at the bottom of the separator view.

 */
- (void)setTopLineSeparatorType:(VENSeparatorType)topLineSeparatorType
        bottomLineSeparatorType:(VENSeparatorType)bottomLineSeparatorType;


@end