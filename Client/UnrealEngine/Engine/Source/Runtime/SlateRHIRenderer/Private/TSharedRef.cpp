// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 6

// TSharedRef<FSlateTextureData,1><FSlateTextureData> @ 145fd6e70

TSharedRef<FSlateTextureData,1> * __thiscall
TSharedRef<FSlateTextureData,1>::TSharedRef<FSlateTextureData,1><FSlateTextureData>
          (TSharedRef<FSlateTextureData,1> *this,TRawPtrProxy<FSlateTextureData> *param_1)

{
  FSlateTextureData *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateTextureData,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFSlateTextureData__U__DefaultDeleter_UFSlateTextureData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateTextureData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateTextureData,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateFontAtlas,1><FSlateFontAtlasRHI> @ 145fd7010

TSharedRef<FSlateFontAtlas,1> * __thiscall
TSharedRef<FSlateFontAtlas,1>::TSharedRef<FSlateFontAtlas,1><FSlateFontAtlasRHI>
          (TSharedRef<FSlateFontAtlas,1> *this,TRawPtrProxy<FSlateFontAtlasRHI> *param_1)

{
  FSlateFontAtlasRHI *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateFontAtlas,1> *pTVar5;
  
  this->Object = (FSlateFontAtlas *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateFontAtlasRHI__U__DefaultDeleter_VFSlateFontAtlasRHI___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateFontAtlasRHI *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateFontAtlas,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateFontCache,1><FSlateFontCache> @ 145fd70b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateFontCache,1> * __thiscall
TSharedRef<FSlateFontCache,1>::TSharedRef<FSlateFontCache,1><FSlateFontCache>
          (TSharedRef<FSlateFontCache,1> *this,TRawPtrProxy<FSlateFontCache> *param_1)

{
  FSlateFontCache *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateFontCache,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateFontCache__U__DefaultDeleter_VFSlateFontCache___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateFontCache *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateFontCache,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<ISlateFontAtlasFactory,1><FSlateRHIFontAtlasFactory> @ 145fd7150

TSharedRef<ISlateFontAtlasFactory,1> * __thiscall
TSharedRef<ISlateFontAtlasFactory,1>::
TSharedRef<ISlateFontAtlasFactory,1><FSlateRHIFontAtlasFactory>
          (TSharedRef<ISlateFontAtlasFactory,1> *this,
          TRawPtrProxy<FSlateRHIFontAtlasFactory> *param_1)

{
  FSlateRHIFontAtlasFactory *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<ISlateFontAtlasFactory,1> *pTVar5;
  
  this->Object = (ISlateFontAtlasFactory *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateRHIFontAtlasFactory__U__DefaultDeleter_VFSlateRHIFontAtlasFactory___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateRHIFontAtlasFactory *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<ISlateFontAtlasFactory,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<FSlateRenderer,1><FSlateRHIRenderer> @ 145fd71f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateRenderer,1> * __thiscall
TSharedRef<FSlateRenderer,1>::TSharedRef<FSlateRenderer,1><FSlateRHIRenderer>
          (TSharedRef<FSlateRenderer,1> *this,TRawPtrProxy<FSlateRHIRenderer> *param_1)

{
  FSlateRHIRenderer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateRenderer,1> *pTVar5;
  
  this->Object = (FSlateRenderer *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateRHIRenderer__U__DefaultDeleter_VFSlateRHIRenderer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateRHIRenderer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateRenderer,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<ISlateUpdatableInstanceBuffer,1><FSlateUpdatableInstanceBuffer> @ 145fd7300

TSharedRef<ISlateUpdatableInstanceBuffer,1> * __thiscall
TSharedRef<ISlateUpdatableInstanceBuffer,1>::
TSharedRef<ISlateUpdatableInstanceBuffer,1><FSlateUpdatableInstanceBuffer>
          (TSharedRef<ISlateUpdatableInstanceBuffer,1> *this,
          TRawPtrProxy<FSlateUpdatableInstanceBuffer> *param_1)

{
  FSlateUpdatableInstanceBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<ISlateUpdatableInstanceBuffer,1> *pTVar5;
  
  this->Object = (ISlateUpdatableInstanceBuffer *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateUpdatableInstanceBuffer__U__DefaultDeleter_VFSlateUpdatableInstanceBuffer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateUpdatableInstanceBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<ISlateUpdatableInstanceBuffer,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

