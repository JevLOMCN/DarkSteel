// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// FLandscapeLCI @ 145f79ca0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLandscapeLCI * __thiscall
FLandscapeComponentSceneProxy::FLandscapeLCI::FLandscapeLCI
          (FLandscapeLCI *this,ULandscapeComponent *param_1,Type param_2,bool param_3)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ELightmapType EVar4;
  FMeshMapBuildData *pFVar5;
  
  pTVar1 = &this->IrrelevantLights;
  *(undefined4 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  piVar2 = &(this->IrrelevantLights).ArrayMax;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLandscapeLCI_FLandscapeComponentSceneProxy__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->IrrelevantLights).ArrayNum = 0;
  *piVar2 = 0;
  EVar4 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)param_1);
  if (EVar4 == ForceVolumetric) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  pFVar5 = ULandscapeComponent::GetMeshMapBuildData(param_1);
  if (pFVar5 != (FMeshMapBuildData *)0x0) {
    this->_padding_ = (longlong)(pFVar5->LightMap).Reference;
    this->_padding_ = (longlong)(pFVar5->ShadowMap).Reference;
    this->_padding_ = (longlong)pFVar5->ResourceCluster;
    if ((2 < (int)param_2) && (!param_3)) {
      *(undefined1 *)&this->_padding_ = 1;
    }
    if (pTVar1 != &pFVar5->IrrelevantLights) {
      iVar3 = (pFVar5->IrrelevantLights).ArrayNum;
      _Src = (pFVar5->IrrelevantLights).AllocatorInstance.Data;
      (this->IrrelevantLights).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
        }
      }
    }
  }
  return this;
}

// GetInteraction @ 145f92490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightInteraction __thiscall
FLandscapeComponentSceneProxy::FLandscapeLCI::GetInteraction
          (FLandscapeLCI *this,FLightSceneProxy *param_1)

{
  ELightInteractionType EVar1;
  FLightSceneProxy *in_R8;
  
  EVar1 = FLightCacheInterface::GetStaticInteraction
                    ((FLightCacheInterface *)this,in_R8,&this->IrrelevantLights);
  if (EVar1 != LIT_MAX) {
    *(ELightInteractionType *)&param_1->_padding_ = EVar1;
    return (FLightInteraction)(ELightInteractionType)param_1;
  }
  *(undefined4 *)&param_1->_padding_ = 2;
  return (FLightInteraction)(ELightInteractionType)param_1;
}

