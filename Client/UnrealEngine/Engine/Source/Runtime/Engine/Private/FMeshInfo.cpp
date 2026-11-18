// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FMeshInfo @ 1483e1b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMeshInfo * __thiscall
Nanite::FSceneProxy::FMeshInfo::FMeshInfo(FMeshInfo *this,FStaticMeshSceneProxyDesc *param_1)

{
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ELightmapType EVar4;
  UStaticMeshComponent *this_00;
  FStaticMeshComponentLODInfo *pFVar5;
  FMeshMapBuildData *pFVar6;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  pTVar1 = &this->IrrelevantLights;
  this->_padding_ = 0;
  this->_padding_ = 0;
  piVar2 = &(this->IrrelevantLights).ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMeshInfo_FSceneProxy_Nanite__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->IrrelevantLights).ArrayNum = 0;
  *piVar2 = 0;
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_Nanite.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Nanite.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  this_00 = FStaticMeshSceneProxyDesc::GetUStaticMeshComponent(param_1);
  if (this_00 != (UStaticMeshComponent *)0x0) {
    EVar4 = UPrimitiveComponent::GetLightmapType((UPrimitiveComponent *)this_00);
    if (EVar4 == ForceVolumetric) {
      *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
    }
    else if (0 < (param_1->LODData).ArrayNum) {
      pFVar5 = TArrayView<FStaticMeshComponentLODInfo,int>::operator[](&param_1->LODData,0);
      pFVar6 = UStaticMeshComponent::GetMeshMapBuildData(this_00,pFVar5,true);
      if (pFVar6 != (FMeshMapBuildData *)0x0) {
        this->_padding_ = (longlong)(pFVar6->LightMap).Reference;
        this->_padding_ = (longlong)(pFVar6->ShadowMap).Reference;
        this->_padding_ = (longlong)pFVar6->ResourceCluster;
        *(undefined1 *)&this->_padding_ = 1;
        if (pTVar1 != &pFVar6->IrrelevantLights) {
          iVar3 = (pFVar6->IrrelevantLights).ArrayNum;
          _Src = (pFVar6->IrrelevantLights).AllocatorInstance.Data;
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
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// GetInteraction @ 1484088e0

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
Nanite::FSceneProxy::FMeshInfo::GetInteraction(FMeshInfo *this,FLightSceneProxy *param_1)

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

