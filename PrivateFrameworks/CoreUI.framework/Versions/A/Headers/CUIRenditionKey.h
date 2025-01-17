#import <Foundation/Foundation.h>
#import <CoreThemeDefinition/CDStructures.h>

@interface CUIRenditionKey: NSObject <NSCopying, NSCoding> {
    struct _renditionkeytoken _stackKey[22];
    struct _renditionkeytoken *_key;
    unsigned short _highwaterKeyCount;
}

+ (id)renditionKeyWithKeyList:(const struct _renditionkeytoken *)arg1;
+ (id)renditionKey;
+ (void)initialize;
- (id)descriptionBasedOnKeyFormat:(const struct _renditionkeyfmt *)arg1;
- (id)nameOfAttributeName:(int)arg1;
- (id)description;
@property(nonatomic) long long themeGlyphWeight;
@property(nonatomic) long long themeGlyphSize;
@property(nonatomic) long long themeDeploymentTarget;
@property(nonatomic) long long themeDisplayGamut;
@property(nonatomic) long long themeLocalization;

@property(nonatomic) long long themeAppearance;

@property(nonatomic) long long themeIdentifier;
@property(nonatomic) long long themeGraphicsClass;
@property(nonatomic) long long themeMemoryClass;
@property(nonatomic) long long themeSizeClassVertical;
@property(nonatomic) long long themeSizeClassHorizontal;
@property(nonatomic) long long themeSubtype;
@property(nonatomic) long long themeIdiom;
@property(nonatomic) long long themeScale;
@property(nonatomic) long long themeLayer;
@property(nonatomic) long long themePresentationState;
@property(nonatomic) long long themePreviousState;
@property(nonatomic) long long themeState;
@property(nonatomic) long long themeDimension2;
@property(nonatomic) long long themeDimension1;
@property(nonatomic) long long themePreviousValue;
@property(nonatomic) long long themeValue;
@property(nonatomic) long long themeDirection;
@property(nonatomic) long long themeSize;
@property(nonatomic) long long themePart;
@property(nonatomic) long long themeElement;
- (id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeValue:(long long)arg5 themeDimension1:(long long)arg6 themeDimension2:(long long)arg7 themeState:(long long)arg8 themePresentationState:(long long)arg9 themeLayer:(long long)arg10 themeScale:(long long)arg11 themeIdentifier:(long long)arg12;
- (const struct _renditionkeytoken *)keyList;
- (void)removeValueForKeyTokenIdentifier:(long long)arg1;
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken *)arg1;
- (void)setValuesFromKeyList:(const struct _renditionkeytoken *)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken *)arg1;
- (id)init;
- (void)_expandKeyIfNecessaryForCount:(long long)arg1;

@end

