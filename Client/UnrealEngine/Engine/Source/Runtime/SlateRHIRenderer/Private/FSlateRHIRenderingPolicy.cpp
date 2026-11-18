// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 5

// FSlateRHIRenderingPolicy @ 145fe70d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateRHIRenderingPolicy * __thiscall
FSlateRHIRenderingPolicy::FSlateRHIRenderingPolicy
          (FSlateRHIRenderingPolicy *this,TSharedRef<FSlateFontServices,1> *param_1,
          TSharedRef<FSlateRHIResourceManager,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FSlateRenderingPolicy__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateRHIRenderingPolicy__6B_;
  (this->ResourceManager).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ResourceManager).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// AddSceneAt @ 145fef770

void __thiscall
FSlateRHIRenderingPolicy::AddSceneAt
          (FSlateRHIRenderingPolicy *this,FSceneInterface *param_1,int param_2)

{
  FSlateRHIResourceManager::AddSceneAt((this->ResourceManager).Object,param_1,param_2);
  return;
}

// ClearScenes @ 145ff73a0

void __thiscall FSlateRHIRenderingPolicy::ClearScenes(FSlateRHIRenderingPolicy *this)

{
  int *piVar1;
  FSlateRHIResourceManager *pFVar2;
  
  pFVar2 = (this->ResourceManager).Object;
  piVar1 = &(pFVar2->ActiveScenes).ArrayMax;
  (pFVar2->ActiveScenes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(pFVar2->ActiveScenes).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetResourceManager @ 14600dc80

TSharedRef<FSlateShaderResourceManager,1> * __thiscall
FSlateRHIRenderingPolicy::GetResourceManager
          (FSlateRHIRenderingPolicy *this,
          TSharedRef<FSlateShaderResourceManager,1> *__return_storage_ptr__)

{
  FSlateRHIResourceManager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateShaderResourceManager *pFVar3;
  
  pFVar1 = (this->ResourceManager).Object;
  pFVar3 = (FSlateShaderResourceManager *)&pFVar1->_padding_;
  if (pFVar1 == (FSlateRHIResourceManager *)0x0) {
    pFVar3 = (FSlateShaderResourceManager *)0x0;
  }
  __return_storage_ptr__->Object = pFVar3;
  pTVar2 = (this->ResourceManager).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsVertexColorInLinearSpace @ 14601b8b0

bool __thiscall FSlateRHIRenderingPolicy::IsVertexColorInLinearSpace(FSlateRHIRenderingPolicy *this)

{
  return false;
}

