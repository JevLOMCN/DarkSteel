// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// CheckLight @ 1457ddbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FVirtualShadowMapVisualizeLightSearch::CheckLight
          (FVirtualShadowMapVisualizeLightSearch *this,FLightSceneProxy *param_1,int param_2)

{
  FScriptContainerElement *_Src;
  ULightComponent *pUVar1;
  ForAnyElementType FVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FVirtualShadowMapVisualizationData *pFVar6;
  size_t sVar7;
  ULightComponent *pUVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  FString local_28;
  
  local_28.Data.ArrayNum = (param_1->OwnerNameOrLabel).Data.ArrayNum;
  lVar9 = (longlong)local_28.Data.ArrayNum;
  pUVar8 = (ULightComponent *)0x0;
  uVar5 = 0;
  _Src = (param_1->OwnerNameOrLabel).Data.AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  }
  if ((GDumpVSMLightNames != false) && (3 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pUVar1 = param_1->LightComponent;
  pFVar6 = GetVirtualShadowMapVisualizationData();
  iVar4 = pFVar6->SelectAdjacentVisualizeLight;
  if ((GVirtualShadowMapVisualizeByLightId == false) && (iVar4 == 0)) {
    GVirtualShadowMapVisualizeByLightId = false;
  }
  else {
    GVirtualShadowMapVisualizeByLightId = true;
  }
  if ((param_1->bSelected == 0) ||
     (pUVar1 == (ULightComponent *)GVirtualShadowMapLastSelectedVisualizeLightId)) {
    if (GVirtualShadowMapVisualizeByLightId == false) goto LAB_1457ddcc4;
    if (this->FoundProxy != (FLightSceneProxy *)0x0) {
      pUVar8 = this->FoundProxy->LightComponent;
    }
    if (((-1 < iVar4) || (GVirtualShadowMapVisualizeLightId <= pUVar1)) || (pUVar1 <= pUVar8)) {
      if (iVar4 < 1) {
        if ((iVar4 != 0) || (pUVar1 != (ULightComponent *)GVirtualShadowMapVisualizeLightId))
        goto LAB_1457dddd9;
      }
      else if ((pUVar1 <= GVirtualShadowMapVisualizeLightId) ||
              ((pUVar8 <= pUVar1 && (pUVar8 != (ULightComponent *)0x0)))) goto LAB_1457dddd9;
    }
  }
  else {
    GVirtualShadowMapVisualizeByLightId = false;
    GVirtualShadowMapLastSelectedVisualizeLightId = (ulong64)pUVar1;
LAB_1457ddcc4:
    iVar4 = GVirtualShadowMapVisualizeLightName.Data.ArrayNum;
    if (local_28.Data.ArrayNum == iVar4) {
      if (1 < local_28.Data.ArrayNum) {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                           (wchar_t *)
                           GVirtualShadowMapVisualizeLightName.Data.AllocatorInstance.Data);
        iVar4 = GVirtualShadowMapVisualizeLightName.Data.ArrayNum;
        bVar11 = iVar3 == 0;
        goto LAB_1457ddd5e;
      }
      uVar10 = 4;
LAB_1457dddb7:
      uVar5 = 2;
    }
    else {
      bVar11 = local_28.Data.ArrayNum + iVar4 == 1;
LAB_1457ddd5e:
      FVar2.Data = GVirtualShadowMapVisualizeLightName.Data.AllocatorInstance.Data;
      uVar10 = (uint)bVar11 * 4;
      if (bVar11 != false) goto LAB_1457dddb7;
      if ((1 < iVar4) &&
         (GVirtualShadowMapVisualizeLightName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0)) {
        sVar7 = wcslen((wchar_t *)GVirtualShadowMapVisualizeLightName.Data.AllocatorInstance.Data);
        iVar4 = ::FString::Find(&local_28,(wchar_t *)FVar2.Data,(int)sVar7,IgnoreCase,FromStart,-1);
        if (iVar4 != -1) goto LAB_1457dddb7;
      }
    }
    uVar5 = param_1->bSelected | uVar10 | uVar5;
    if (uVar5 <= (this->FoundKey).Packed) goto LAB_1457dddd9;
    (this->FoundKey).Packed = uVar5;
  }
  this->FoundVirtualShadowMapId = param_2;
  this->FoundProxy = param_1;
LAB_1457dddd9:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ChooseLight @ 1457dde10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FVirtualShadowMapVisualizeLightSearch::ChooseLight(FVirtualShadowMapVisualizeLightSearch *this)

{
  int iVar1;
  FVirtualShadowMapVisualizationData *pFVar2;
  
  pFVar2 = GetVirtualShadowMapVisualizationData();
  iVar1 = pFVar2->SelectAdjacentVisualizeLight;
  pFVar2 = GetVirtualShadowMapVisualizationData();
  pFVar2->SelectAdjacentVisualizeLight = 0;
  if (this->FoundProxy != (FLightSceneProxy *)0x0) {
    GVirtualShadowMapVisualizeLightId = (ulong64)this->FoundProxy->LightComponent;
    return;
  }
  if (iVar1 != 0) {
    GVirtualShadowMapVisualizeLightId = 0;
  }
  return;
}

// GetLightName @ 1457f4ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FString * __thiscall
FVirtualShadowMapVisualizeLightSearch::GetLightName
          (FVirtualShadowMapVisualizeLightSearch *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->FoundProxy->OwnerNameOrLabel);
  return __return_storage_ptr__;
}

