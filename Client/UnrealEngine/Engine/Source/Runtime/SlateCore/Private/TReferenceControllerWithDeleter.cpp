// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 17

// DestroyObject @ 14243af10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateDynamicImageBrush,SharedPointerInternals::DefaultDeleter<FSlateDynamicImageBrush>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateDynamicImageBrush,SharedPointerInternals::DefaultDeleter<FSlateDynamicImageBrush>,1>
                *this)

{
  FSlateDynamicImageBrush *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateDynamicImageBrush *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014243af21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14243af30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateAccessibleMessageHandler,SharedPointerInternals::DefaultDeleter<FSlateAccessibleMessageHandler>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateAccessibleMessageHandler,SharedPointerInternals::DefaultDeleter<FSlateAccessibleMessageHandler>,1>
                *this)

{
  FSlateAccessibleMessageHandler *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateAccessibleMessageHandler *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014243af41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142485410

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSdfGlyphFontAtlasData,SharedPointerInternals::DefaultDeleter<FSdfGlyphFontAtlasData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSdfGlyphFontAtlasData,SharedPointerInternals::DefaultDeleter<FSdfGlyphFontAtlasData>,1>
                *this)

{
  ::operator_delete(this->Object,0x28);
  return;
}

// DestroyObject @ 142485430

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FShapedGlyphFontAtlasData,SharedPointerInternals::DefaultDeleter<FShapedGlyphFontAtlasData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FShapedGlyphFontAtlasData,SharedPointerInternals::DefaultDeleter<FShapedGlyphFontAtlasData>,1>
                *this)

{
  ::operator_delete(this->Object,0x10);
  return;
}

// DestroyObject @ 142485450

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontMeasureCache,SharedPointerInternals::DefaultDeleter<FSlateFontMeasureCache>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateFontMeasureCache,SharedPointerInternals::DefaultDeleter<FSlateFontMeasureCache>,1>
                *this)

{
  FLRUStringCache *this_00;
  ForElementType<FSetElementId> FVar1;
  
  this_00 = &this->Object->MeasureCache;
  if (this_00 != (FLRUStringCache *)0x0) {
    FLRUStringCache::Empty(this_00);
    (this_00->LookupSet).HashSize = 0;
    FVar1 = (this_00->LookupSet).Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FLRUStringCache::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FLRUStringCache::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FLRUStringCache::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x68);
    return;
  }
  return;
}

// DestroyObject @ 1424854b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLegacySlateFontInfoCache,SharedPointerInternals::DefaultDeleter<FLegacySlateFontInfoCache>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLegacySlateFontInfoCache,SharedPointerInternals::DefaultDeleter<FLegacySlateFontInfoCache>,1>
                *this)

{
  FLegacySlateFontInfoCache *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLegacySlateFontInfoCache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424854c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1424854d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateFontMeasure,SharedPointerInternals::DefaultDeleter<FSlateFontMeasure>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateFontMeasure,SharedPointerInternals::DefaultDeleter<FSlateFontMeasure>,1>
                *this)

{
  FSlateFontMeasure *this_00;
  void *pvVar1;
  
  this_00 = this->Object;
  if (this_00 != (FSlateFontMeasure *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this_00->FontCache).SharedReferenceCount.ReferenceController);
    *(undefined4 *)&(this_00->FontToMeasureCache).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->FontToMeasureCache).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FSlateFontKey,TSharedPtr<FSlateFontMeasureCache,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x60);
    return;
  }
  return;
}

// DestroyObject @ 142507b30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FExternalDragOperation,SharedPointerInternals::DefaultDeleter<FExternalDragOperation>,1>
::DestroyObject(TReferenceControllerWithDeleter<FExternalDragOperation,SharedPointerInternals::DefaultDeleter<FExternalDragOperation>,1>
                *this)

{
  FExternalDragOperation *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FExternalDragOperation *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142507b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142507b50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateSharedHandleData,SharedPointerInternals::DefaultDeleter<FSlateSharedHandleData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateSharedHandleData,SharedPointerInternals::DefaultDeleter<FSlateSharedHandleData>,1>
                *this)

{
  ::operator_delete(this->Object,8);
  return;
}

// DestroyObject @ 142507b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidgetPath,SharedPointerInternals::DefaultDeleter<FWidgetPath>,1>::
DestroyObject(TReferenceControllerWithDeleter<FWidgetPath,SharedPointerInternals::DefaultDeleter<FWidgetPath>,1>
              *this)

{
  FWidgetPath *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FWidgetPath *)0x0) {
    FWidgetPath::~FWidgetPath(this_00);
    ::operator_delete(this_00,0x160);
    return;
  }
  return;
}

// DestroyObject @ 14257c920

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLinearColor,SharedPointerInternals::DefaultDeleter<FLinearColor>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLinearColor,SharedPointerInternals::DefaultDeleter<FLinearColor>,1>
                *this)

{
  ::operator_delete(this->Object,0x10);
  return;
}

// DestroyObject @ 14257c940

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextBlockStyle,SharedPointerInternals::DefaultDeleter<FTextBlockStyle>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextBlockStyle,SharedPointerInternals::DefaultDeleter<FTextBlockStyle>,1>
                *this)

{
  FTextBlockStyle *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextBlockStyle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014257c951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14257c960

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateCoreStyle,SharedPointerInternals::DefaultDeleter<FSlateCoreStyle>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateCoreStyle,SharedPointerInternals::DefaultDeleter<FSlateCoreStyle>,1>
                *this)

{
  FSlateCoreStyle *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateCoreStyle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014257c971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14257c980

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStarshipCoreStyle::FStyle,SharedPointerInternals::DefaultDeleter<FStarshipCoreStyle::FStyle>,1>
::DestroyObject(TReferenceControllerWithDeleter<FStarshipCoreStyle::FStyle,SharedPointerInternals::DefaultDeleter<FStarshipCoreStyle::FStyle>,1>
                *this)

{
  FStyle *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStyle *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014257c991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14257c9a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUMGStyleSet,SharedPointerInternals::DefaultDeleter<FUMGStyleSet>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUMGStyleSet,SharedPointerInternals::DefaultDeleter<FUMGStyleSet>,1>
                *this)

{
  FUMGStyleSet *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUMGStyleSet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014257c9b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1425da5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOverlayPopupLayer,SharedPointerInternals::DefaultDeleter<FOverlayPopupLayer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FOverlayPopupLayer,SharedPointerInternals::DefaultDeleter<FOverlayPopupLayer>,1>
                *this)

{
  FOverlayPopupLayer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FOverlayPopupLayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425da5d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1425da5e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateAccessibleWidget,SharedPointerInternals::DefaultDeleter<FSlateAccessibleWidget>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateAccessibleWidget,SharedPointerInternals::DefaultDeleter<FSlateAccessibleWidget>,1>
                *this)

{
  FSlateAccessibleWidget *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateAccessibleWidget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425da5f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

