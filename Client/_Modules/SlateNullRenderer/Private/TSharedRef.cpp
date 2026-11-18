// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 3

// TSharedRef<FSlateFontAtlas,1><FSlateFontAtlasNull> @ 146c85270

TSharedRef<FSlateFontAtlas,1> * __thiscall
TSharedRef<FSlateFontAtlas,1>::TSharedRef<FSlateFontAtlas,1><FSlateFontAtlasNull>
          (TSharedRef<FSlateFontAtlas,1> *this,TRawPtrProxy<FSlateFontAtlasNull> *param_1)

{
  FSlateFontAtlasNull *pFVar1;
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
         ___7__TReferenceControllerWithDeleter_VFSlateFontAtlasNull__U__DefaultDeleter_VFSlateFontAtlasNull___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateFontAtlasNull *)0x0) {
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

// TSharedRef<ISlateFontAtlasFactory,1><FSlateNullFontAtlasFactory> @ 146c85310

TSharedRef<ISlateFontAtlasFactory,1> * __thiscall
TSharedRef<ISlateFontAtlasFactory,1>::
TSharedRef<ISlateFontAtlasFactory,1><FSlateNullFontAtlasFactory>
          (TSharedRef<ISlateFontAtlasFactory,1> *this,
          TRawPtrProxy<FSlateNullFontAtlasFactory> *param_1)

{
  FSlateNullFontAtlasFactory *pFVar1;
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
         ___7__TReferenceControllerWithDeleter_VFSlateNullFontAtlasFactory__U__DefaultDeleter_VFSlateNullFontAtlasFactory___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateNullFontAtlasFactory *)0x0) {
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

// TSharedRef<FSlateRenderer,1><FSlateNullRenderer> @ 146c853b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateRenderer,1> * __thiscall
TSharedRef<FSlateRenderer,1>::TSharedRef<FSlateRenderer,1><FSlateNullRenderer>
          (TSharedRef<FSlateRenderer,1> *this,TRawPtrProxy<FSlateNullRenderer> *param_1)

{
  FSlateNullRenderer *pFVar1;
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
         ___7__TReferenceControllerWithDeleter_VFSlateNullRenderer__U__DefaultDeleter_VFSlateNullRenderer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FSlateNullRenderer *)0x0) {
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

