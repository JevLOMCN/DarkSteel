// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FNiagaraSceneProxyDesc @ 149022960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraSceneProxyDesc * __thiscall
FNiagaraSceneProxyDesc::FNiagaraSceneProxyDesc
          (FNiagaraSceneProxyDesc *this,UNiagaraComponent *param_1)

{
  FSharedReferencer<1> *this_00;
  TSharedPtr<FNiagaraSystemInstanceController_const_,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemInstanceController *local_18;
  FSharedReferencer<1> local_10;
  
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc
            ((FPrimitiveSceneProxyDesc *)this,(UPrimitiveComponent *)param_1);
  pTVar1 = &this->SystemInstanceController;
  this->_padding_ = (longlong)&___7FNiagaraSceneProxyDesc__6B_;
  this_00 = &(this->SystemInstanceController).SharedReferenceCount;
  this_00->ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar1->Object = (FNiagaraSystemInstanceController *)0x0;
  this->SystemAsset = (UNiagaraSystem *)(param_1->Asset).field0_0x0;
  this->OcclusionQueryMode = param_1->OcclusionQueryMode;
  local_18 = (param_1->SystemInstanceController).Object;
  pTVar2 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_10.ReferenceController = pTVar2;
  if (pTVar1 != (TSharedPtr<FNiagaraSystemInstanceController_const_,1> *)&local_18) {
    pTVar1->Object = local_18;
    local_18 = (FNiagaraSystemInstanceController *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return this;
}

// FNiagaraSceneProxyDesc @ 149022a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraSceneProxyDesc * __thiscall
FNiagaraSceneProxyDesc::FNiagaraSceneProxyDesc(FNiagaraSceneProxyDesc *this)

{
  FPrimitiveSceneProxyDesc::FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  this->_padding_ = (longlong)&___7FNiagaraSceneProxyDesc__6B_;
  (this->SystemInstanceController).Object = (FNiagaraSystemInstanceController *)0x0;
  (this->SystemInstanceController).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SystemAsset = (UNiagaraSystem *)0x0;
  this->OcclusionQueryMode = Default;
  return this;
}

// ~FNiagaraSceneProxyDesc @ 149026090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraSceneProxyDesc::~FNiagaraSceneProxyDesc(FNiagaraSceneProxyDesc *this)

{
  this->_padding_ = (longlong)&___7FNiagaraSceneProxyDesc__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SystemInstanceController).SharedReferenceCount.ReferenceController);
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)this);
  return;
}

