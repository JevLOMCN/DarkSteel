// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// IsTranslucentIncluded @ 14481d020

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FCustomRenderPassBase::IsTranslucentIncluded(FCustomRenderPassBase *this)

{
  if ((this->bSceneColorWithTranslucent != false) &&
     (((this->RenderOutput == SceneColorAndAlpha ||
       ((this->RenderOutput - SceneColorAndDepth & 0xfd) == 0)) ||
      (this->bSceneColorIsUserSceneTexture != false)))) {
    return true;
  }
  return false;
}

// ~FCustomRenderPassBase @ 145478f80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::~FCustomRenderPassBase(FCustomRenderPassBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FCustomRenderPassBase__6B_;
  pFVar1 = (this->RenderCaptureFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->UserDatas).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UserDatas).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<ICustomRenderPassUserData,TDefaultDelete<ICustomRenderPassUserData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserDatas);
  pFVar1 = (this->Views).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ICustomRenderPass__6B_;
  return;
}

// OnBeginPass @ 1454ad400

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::OnBeginPass(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
  return;
}

// OnEndPass @ 1454ad410

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::OnEndPass(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
  return;
}

// OnPostRender @ 1454ad440

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCustomRenderPassBase::OnPostRender(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
  return;
}

// OnPreRender @ 1454ad450

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FCustomRenderPassBase::OnPreRender(FCustomRenderPassBase *this,FRDGBuilder *param_1)

{
  return;
}

