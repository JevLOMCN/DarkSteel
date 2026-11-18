// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 4

// CreateSlateNullRenderer @ 146c84c70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateRenderer,1> * __thiscall
FSlateNullRendererModule::CreateSlateNullRenderer
          (FSlateNullRendererModule *this,TSharedRef<FSlateRenderer,1> *__return_storage_ptr__)

{
  FSlateShaderResourceManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlateFontCache *pFVar4;
  FSlateFontCache *pFVar5;
  TSharedRef<ISlateFontAtlasFactory,1> *pTVar6;
  FSlateFontServices *this_00;
  TSharedRef<FSlateRenderer,1> *pTVar7;
  FSlateDrawBuffer *this_01;
  FSlateFontCache *pFVar8;
  atomic<int> *paVar9;
  TRawPtrProxy<FSlateNullFontAtlasFactory> TVar10;
  TRawPtrProxy<FSlateNullFontAtlasFactory> local_res8;
  TRawPtrProxy<FSlateFontCache> local_res10;
  TRawPtrProxy<FSlateFontServices> local_res18;
  TRawPtrProxy<FSlateNullShaderResourceManager> local_res20;
  TRawPtrProxy<FSlateNullRenderer> local_98;
  TSharedRef<FSlateFontServices,1> local_90;
  TSharedRef<FSlateFontCache,1> local_78;
  TSharedRef<FSlateFontCache,1> local_68;
  TSharedRef<FSlateFontCache,1> local_58;
  TSharedRef<ISlateFontAtlasFactory,1> local_48;
  
  pFVar8 = (FSlateFontCache *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  if ((this->SlateFontServices).Object == (FSlateFontServices *)0x0) {
    pFVar4 = ::operator_new(0x278);
    local_res10.Object = pFVar8;
    if (pFVar4 != (FSlateFontCache *)0x0) {
      pFVar5 = ::operator_new(0x10);
      local_res8.Object = (FSlateNullFontAtlasFactory *)pFVar8;
      if (pFVar5 != (FSlateFontCache *)0x0) {
        *(undefined4 *)&pFVar5->_padding_ = 0x800;
        pFVar5->_padding_ = (longlong)&___7FSlateNullFontAtlasFactory__6B_;
        local_res8.Object = (FSlateNullFontAtlasFactory *)pFVar5;
      }
      pTVar6 = TSharedRef<ISlateFontAtlasFactory,1>::
               TSharedRef<ISlateFontAtlasFactory,1><FSlateNullFontAtlasFactory>
                         (&local_48,&local_res8);
      local_res10.Object = FSlateFontCache::FSlateFontCache(pFVar4,pTVar6,Game);
    }
    TSharedRef<FSlateFontCache,1>::TSharedRef<FSlateFontCache,1><FSlateFontCache>
              (&local_78,&local_res10);
    this_00 = ::operator_new(0x60);
    local_res18.Object = (FSlateFontServices *)pFVar8;
    if (this_00 != (FSlateFontServices *)0x0) {
      local_68.Object = local_78.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        paVar9 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar9 = &(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      local_58.Object = local_78.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar9 = (atomic<int>)((int)*paVar9 + 1);
        UNLOCK();
      }
      local_res18.Object = FSlateFontServices::FSlateFontServices(this_00,&local_58,&local_68);
    }
    TSharedPtr<FSlateFontServices,1>::operator=<FSlateFontServices>
              (&this->SlateFontServices,&local_res18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  if ((this->ResourceManager).Object == (FSlateShaderResourceManager *)0x0) {
    pFVar4 = ::operator_new(0x60);
    local_res20.Object = (FSlateNullShaderResourceManager *)pFVar8;
    if (pFVar4 != (FSlateFontCache *)0x0) {
      pFVar4->_padding_ = (longlong)&___7ISlateAtlasProvider__6B_;
      FSlateShaderResourceManager::FSlateShaderResourceManager
                ((FSlateShaderResourceManager *)&pFVar4->_padding_);
      pFVar4->_padding_ =
           (longlong)&FSlateNullShaderResourceManager::_vftable__for__ISlateAtlasProvider__;
      pFVar4->_padding_ =
           (longlong)&FSlateNullShaderResourceManager::_vftable__for__FSlateShaderResourceManager__;
      local_res20.Object = (FSlateNullShaderResourceManager *)pFVar4;
    }
    TSharedPtr<FSlateShaderResourceManager,1>::operator=<FSlateNullShaderResourceManager>
              (&this->ResourceManager,&local_res20);
  }
  pFVar5 = ::operator_new(0x180);
  TVar10.Object = local_res8.Object;
  pFVar4 = pFVar8;
  if (pFVar5 != (FSlateFontCache *)0x0) {
    if (((this->ResourceManager).Object == (FSlateShaderResourceManager *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<FSlateRenderer,1> *)(*pcVar2)();
      return pTVar7;
    }
    TVar10.Object =
         (FSlateNullFontAtlasFactory *)
         (this->ResourceManager).SharedReferenceCount.ReferenceController;
    pFVar1 = (this->ResourceManager).Object;
    if ((FSlateFontCache *)TVar10.Object != (FSlateFontCache *)0x0) {
      LOCK();
      *(int *)&((FSlateFontCache *)TVar10.Object)->_padding_ =
           (int)((FSlateFontCache *)TVar10.Object)->_padding_ + 1;
      UNLOCK();
    }
    if ((pFVar1 == (FSlateShaderResourceManager *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<FSlateRenderer,1> *)(*pcVar2)();
      return pTVar7;
    }
    if (((this->SlateFontServices).Object == (FSlateFontServices *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<FSlateRenderer,1> *)(*pcVar2)();
      return pTVar7;
    }
    local_90.SharedReferenceCount.ReferenceController =
         (this->SlateFontServices).SharedReferenceCount.ReferenceController;
    local_90.Object = (this->SlateFontServices).Object;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_90.Object == (FSlateFontServices *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedRef<FSlateRenderer,1> *)(*pcVar2)();
      return pTVar7;
    }
    FSlateRenderer::FSlateRenderer((FSlateRenderer *)pFVar5,&local_90);
    pFVar5->_padding_ = (longlong)&___7FSlateNullRenderer__6B_;
    *(FSlateShaderResourceManager **)&(pFVar5->SdfGlyphToAtlasData).field_0x40 = pFVar1;
    *(FSlateNullFontAtlasFactory **)&(pFVar5->SdfGlyphToAtlasData).field_0x48 = TVar10.Object;
    if ((FSlateFontCache *)TVar10.Object != (FSlateFontCache *)0x0) {
      LOCK();
      *(int *)&((FSlateFontCache *)TVar10.Object)->_padding_ =
           (int)((FSlateFontCache *)TVar10.Object)->_padding_ + 1;
      UNLOCK();
    }
    this_01 = ::operator_new(0x68);
    if (this_01 != (FSlateDrawBuffer *)0x0) {
      pFVar8 = (FSlateFontCache *)FSlateDrawBuffer::FSlateDrawBuffer(this_01);
    }
    *(FSlateFontCache **)&pFVar5->SdfTaskToAtlasData = pFVar8;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&(pFVar5->SdfTaskToAtlasData).field_0x8,4000);
    pFVar8 = pFVar5;
    pFVar4 = (FSlateFontCache *)&DAT_00000003;
  }
  local_98.Object = (FSlateNullRenderer *)pFVar8;
  TSharedRef<FSlateRenderer,1>::TSharedRef<FSlateRenderer,1><FSlateNullRenderer>
            (__return_storage_ptr__,&local_98);
  if (((ulonglong)pFVar4 & 2) != 0) {
    pFVar4 = (FSlateFontCache *)(ulonglong)((uint)pFVar4 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
  }
  if (((ulonglong)pFVar4 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar10.Object);
  }
  return __return_storage_ptr__;
}

// CreateSlateFontAtlasFactory @ 146c84ff0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<ISlateFontAtlasFactory,1> * __thiscall
FSlateNullRendererModule::CreateSlateFontAtlasFactory
          (FSlateNullRendererModule *this,
          TSharedRef<ISlateFontAtlasFactory,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FSlateNullFontAtlasFactory> local_res10 [3];
  
  local_res10[0].Object = ::operator_new(0x10);
  if (local_res10[0].Object != (FSlateNullFontAtlasFactory *)0x0) {
    (local_res10[0].Object)->AtlasSize = 0x800;
    (local_res10[0].Object)->_padding_ = (longlong)&___7FSlateNullFontAtlasFactory__6B_;
  }
  TSharedRef<ISlateFontAtlasFactory,1>::
  TSharedRef<ISlateFontAtlasFactory,1><FSlateNullFontAtlasFactory>
            (__return_storage_ptr__,local_res10);
  return __return_storage_ptr__;
}

// StartupModule @ 146c85040

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateNullRendererModule::StartupModule(FSlateNullRendererModule *this)

{
  return;
}

// ShutdownModule @ 146c85050

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateNullRendererModule::ShutdownModule(FSlateNullRendererModule *this)

{
  return;
}

