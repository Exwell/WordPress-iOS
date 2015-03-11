@interface UIImageView (Gravatar)

- (NSURL *)blavatarURLForHost:(NSString *)host;
- (NSURL *)blavatarURLForHost:(NSString *)host withSize:(NSInteger)size;
- (void)setImageWithGravatarEmail:(NSString *)emailAddress;
- (void)setImageWithGravatarEmail:(NSString *)emailAddress fallbackImage:(UIImage *)fallbackImage;
- (void)setImageWithBlavatarUrl:(NSString *)blavatarUrl;
- (void)setImageWithBlavatarUrl:(NSString *)blavatarUrl isWPcom:(BOOL)wpcom;
- (void)setImageWithBlavatarUrl:(NSString *)blavatarUrl placeholderImage:(UIImage *)placeholderImage;

@end
