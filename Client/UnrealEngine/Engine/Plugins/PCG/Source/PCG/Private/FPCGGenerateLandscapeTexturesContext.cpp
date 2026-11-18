// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ~FPCGGenerateLandscapeTexturesContext @ 149b58970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGGenerateLandscapeTexturesContext::~FPCGGenerateLandscapeTexturesContext
          (FPCGGenerateLandscapeTexturesContext *this)

{
  FLandscapeGrassWeightExporter *pFVar1;
  FScriptContainerElement *pFVar2;
  IPooledRenderTarget *pIVar3;
  
  this->_padding_ = (longlong)&___7FPCGGenerateLandscapeTexturesContext__6B_;
  pFVar1 = this->LandscapeGrassWeightExporter;
  if (pFVar1 != (FLandscapeGrassWeightExporter *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->TexturesToStream).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LandscapeComponents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SelectedGrassTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->GrassMapHandle).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->HeightHandle).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar2 = (this->GrassMapTextureDatas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPCGContext::~FPCGContext((FPCGContext *)this);
  return;
}

// AddExtraStructReferencedObjects @ 149b66a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGGenerateLandscapeTexturesContext::AddExtraStructReferencedObjects
          (FPCGGenerateLandscapeTexturesContext *this,FReferenceCollector *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((this->HeightTextureData).field0_0x0.DebugPtr != (UPCGTextureData *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->HeightTextureData,0,0);
  }
  pFVar3 = (this->GrassMapTextureDatas).AllocatorInstance.Data;
  iVar2 = (this->GrassMapTextureDatas).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GrassMapTextureDatas).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGTextureData>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (this->TexturesToStream).AllocatorInstance.Data;
  iVar2 = (this->TexturesToStream).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->TexturesToStream).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(longlong *)pFVar3 != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar3,0,0);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

