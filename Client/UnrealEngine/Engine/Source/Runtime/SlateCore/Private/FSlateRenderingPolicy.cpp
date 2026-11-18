// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// GetFontCache @ 14250d670

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateFontCache,1> * __thiscall
FSlateRenderingPolicy::GetFontCache
          (FSlateRenderingPolicy *this,TSharedRef<FSlateFontCache,1> *__return_storage_ptr__)

{
  FSlateFontServices *pFVar1;
  code *pcVar2;
  bool bVar3;
  ESlateTextureAtlasThreadId EVar4;
  TSharedRef<FSlateFontCache,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar1 = (this->FontServices).Object;
  EVar4 = GetCurrentSlateTextureAtlasThreadId();
  if (EVar4 == Unknown) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtlasThreadId != ESlateTextureAtlasThreadId::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\SlateRenderer.cpp"
                       ,0x2d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FSlateFontCache,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if (EVar4 == Game) {
    __return_storage_ptr__->Object = (pFVar1->GameThreadFontCache).Object;
    pTVar6 = (pFVar1->GameThreadFontCache).SharedReferenceCount.ReferenceController;
  }
  else {
    __return_storage_ptr__->Object = (pFVar1->RenderThreadFontCache).Object;
    pTVar6 = (pFVar1->RenderThreadFontCache).SharedReferenceCount.ReferenceController;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFontServices @ 14250d790

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateFontServices,1> * __thiscall
FSlateRenderingPolicy::GetFontServices
          (FSlateRenderingPolicy *this,TSharedRef<FSlateFontServices,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->FontServices).Object;
  pTVar1 = (this->FontServices).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

