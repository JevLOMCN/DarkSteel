// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// HasStage @ 14477a250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FDecalVisibilityTaskData::HasStage
          (FDecalVisibilityTaskData *this,int param_1,EDecalRenderStage param_2)

{
  FDecalVisibilityViewPacket *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  
  uVar5 = 0;
  if (param_1 < (this->ViewPackets).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->ViewPackets).AllocatorInstance.Data;
  if (*(int *)&pFVar1[param_1].RelevantDecalsMap.field_0x8 !=
      *(int *)&pFVar1[param_1].RelevantDecalsMap.field_0x34) {
    puVar7 = *(undefined1 **)&pFVar1[param_1].RelevantDecalsMap.field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &pFVar1[param_1].RelevantDecalsMap.field_0x38;
    }
    iVar6 = *(int *)(puVar7 + ((ulonglong)
                               (*(int *)&pFVar1[param_1].RelevantDecalsMap.field_0x48 - 1) &
                              (ulonglong)param_2) * 4);
    if (iVar6 != -1) {
      do {
        if (*(EDecalRenderStage *)
             (*(longlong *)&pFVar1[param_1].RelevantDecalsMap + (longlong)iVar6 * 0x28) == param_2)
        goto LAB_14477a30c;
        iVar6 = *(int *)(*(longlong *)&pFVar1[param_1].RelevantDecalsMap + 0x20 +
                        (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  iVar6 = -1;
LAB_14477a30c:
  return iVar6 != -1;
}

// FDecalVisibilityTaskData @ 1447f2ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FDecalVisibilityTaskData * __thiscall
FDecalVisibilityTaskData::FDecalVisibilityTaskData
          (FDecalVisibilityTaskData *this,FScene *param_1,TArrayView<FViewInfo_const_,int> *param_2,
          bool param_3,bool param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FViewInfo *pFVar4;
  FViewInfo *pFVar5;
  
  piVar1 = &(this->ViewPackets).ArrayMax;
  uVar2 = param_2->ArrayNum;
  this->bGBufferEnabled = param_4;
  this->bDBufferEnabled = param_3;
  (this->ViewPackets).AllocatorInstance.Data = (FDecalVisibilityViewPacket *)0x0;
  (this->ViewPackets).ArrayNum = 0;
  *piVar1 = 0;
  if (-1 < (int)uVar2) {
    if (0 < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_>
                (0x88,8,uVar2,&(this->ViewPackets).AllocatorInstance,0,piVar1);
    }
    pFVar5 = param_2->DataPtr;
    pFVar4 = pFVar5 + (int)uVar2;
    for (; pFVar5 != pFVar4; pFVar5 = pFVar5 + 1) {
      iVar3 = (this->ViewPackets).ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FDecalVisibilityViewPacket>_>
                          (0x888,&(this->ViewPackets).AllocatorInstance,piVar1);
      }
      (this->ViewPackets).ArrayNum = iVar3 + 1;
      FDecalVisibilityViewPacket::FDecalVisibilityViewPacket
                ((this->ViewPackets).AllocatorInstance.Data + iVar3,this,param_1,pFVar5);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Launch @ 14481d0e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FDecalVisibilityTaskData * __cdecl
FDecalVisibilityTaskData::Launch
          (FRDGBuilder *param_1,FScene *param_2,TArrayView<FViewInfo_const_,int> *param_3)

{
  undefined1 *puVar1;
  FSceneViewFamily *this;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FDecalVisibilityTaskData *pFVar5;
  EShaderPlatform EVar6;
  FStaticShaderPlatform FVar7;
  bool local_res18 [8];
  bool local_res20 [8];
  
  if ((param_3->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDecalVisibilityTaskData *)(*pcVar2)();
    return pFVar5;
  }
  this = (FSceneViewFamily *)param_3->DataPtr->_padding_;
  bVar3 = AreDecalsEnabled(this);
  if ((bVar3) && ((this->EngineShowFlags).PathTracing == 0)) {
    if (((this->EngineShowFlags).RayTracingDebug != 0) &&
       (bVar3 = HasRaytracingDebugViewModeRaytracedOverlay(this), bVar3)) {
      return (FDecalVisibilityTaskData *)0x0;
    }
    TVar4 = FSceneViewFamily::GetFeatureLevel(this);
    FVar7.Platform = SP_NumPlatforms;
    if (TVar4 == Num) {
      EVar6 = SP_NumPlatforms;
    }
    else {
      EVar6 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar4];
    }
    local_res20[0] = IsDBufferEnabled(this,EVar6);
    TVar4 = FSceneViewFamily::GetFeatureLevel(this);
    if (TVar4 != Num) {
      FVar7.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar4];
    }
    local_res18[0] = IsUsingGBuffers(FVar7);
    pFVar5 = FRDGAllocator::
             Alloc<FDecalVisibilityTaskData,FScene_const_&,TArrayView<FViewInfo_const_,int>_&,bool_const_&,bool_const_&>
                       ((FRDGAllocator *)&param_1->_padding_,param_2,param_3,local_res20,local_res18
                       );
    return pFVar5;
  }
  return (FDecalVisibilityTaskData *)0x0;
}

