// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FInitDesc @ 1458cb900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitDesc * __thiscall
RuntimeVirtualTexture::FRenderGraphSetup::FInitDesc::FInitDesc
          (FInitDesc *this,FRenderPageBatchDesc *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TIntPoint<int>_u_0 TVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FInitDesc *pFVar7;
  IPooledRenderTarget *local_38;
  IPooledRenderTarget *local_30;
  IPooledRenderTarget *local_28 [2];
  
  this->PageCount = 1;
  (this->OutputTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTargets).ArrayNum = 0;
  (this->OutputTargets).ArrayMax = 0;
  this->bClearTextures = false;
  this->bIsThumbnails = false;
  if (param_1->SceneRenderer != (ISceneRenderer *)0x0) {
    lVar6 = (**(code **)((longlong)*param_1->SceneRenderer + 8))();
    if (lVar6 != 0) goto LAB_1458cb963;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("InDesc.SceneRenderer != nullptr && InDesc.SceneRenderer->GetScene() != nullptr"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\RuntimeVirtualTextureRender.cpp"
                     ,0x3d8,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FInitDesc *)(*pcVar2)();
    return pFVar7;
  }
LAB_1458cb963:
  lVar6 = (**(code **)((longlong)*param_1->SceneRenderer + 8))();
  this->FeatureLevel = *(Type *)(lVar6 + 8);
  this->MaterialType = param_1->MaterialType;
  this->PageCount = param_1->NumPageDescs;
  TVar3._s_0.Y = *(int *)((longlong)&param_1->PageDescs[0].DestRect[0].field0_0x0 + 0xc) -
                 *(int *)((longlong)&param_1->PageDescs[0].DestRect[0].field0_0x0 + 4);
  TVar3._s_0.X = *(int *)((longlong)&param_1->PageDescs[0].DestRect[0].field0_0x0 + 8) -
                 *(int *)&param_1->PageDescs[0].DestRect[0].field0_0x0;
  (this->TextureSize).field0_0x0 = TVar3;
  local_38 = param_1->Targets[0].PooledRenderTarget;
  if (local_38 != (IPooledRenderTarget *)0x0) {
    (**(code **)(local_38->_padding_ + 0x30))();
  }
  pFVar1 = (this->OutputTargets).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)(this->OutputTargets).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FInitDesc *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar5 = (this->OutputTargets).ArrayNum;
  if (iVar5 == (this->OutputTargets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OutputTargets).AllocatorInstance,
                       &(this->OutputTargets).ArrayMax);
  }
  (this->OutputTargets).ArrayNum = iVar5 + 1;
  pFVar1 = (this->OutputTargets).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + (longlong)iVar5 * 8) = 0;
  *(IPooledRenderTarget **)(pFVar1 + (longlong)iVar5 * 8) = local_38;
  local_30 = param_1->Targets[1].PooledRenderTarget;
  local_38 = (IPooledRenderTarget *)0x0;
  if (local_30 != (IPooledRenderTarget *)0x0) {
    (**(code **)(local_30->_padding_ + 0x30))();
  }
  pFVar1 = (this->OutputTargets).AllocatorInstance.Data;
  if ((pFVar1 <= (FScriptContainerElement *)&local_30) &&
     ((FScriptContainerElement *)&local_30 < pFVar1 + (longlong)(this->OutputTargets).ArrayMax * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FInitDesc *)(*pcVar2)();
      return pFVar7;
    }
  }
  iVar5 = (this->OutputTargets).ArrayNum;
  if (iVar5 == (this->OutputTargets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OutputTargets).AllocatorInstance,
                       &(this->OutputTargets).ArrayMax);
  }
  (this->OutputTargets).ArrayNum = iVar5 + 1;
  pFVar1 = (this->OutputTargets).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + (longlong)iVar5 * 8) = 0;
  *(IPooledRenderTarget **)(pFVar1 + (longlong)iVar5 * 8) = local_30;
  local_28[0] = param_1->Targets[2].PooledRenderTarget;
  local_30 = (IPooledRenderTarget *)0x0;
  if (local_28[0] != (IPooledRenderTarget *)0x0) {
    (**(code **)(local_28[0]->_padding_ + 0x30))();
  }
  pFVar1 = (this->OutputTargets).AllocatorInstance.Data;
  if (pFVar1 <= (FScriptContainerElement *)local_28) {
    if ((FScriptContainerElement *)local_28 < pFVar1 + (longlong)(this->OutputTargets).ArrayMax * 8)
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FInitDesc *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  iVar5 = (this->OutputTargets).ArrayNum;
  if (iVar5 == (this->OutputTargets).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->OutputTargets).AllocatorInstance,
                       &(this->OutputTargets).ArrayMax);
  }
  (this->OutputTargets).ArrayNum = iVar5 + 1;
  pFVar1 = (this->OutputTargets).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + (longlong)iVar5 * 8) = 0;
  *(IPooledRenderTarget **)(pFVar1 + (longlong)iVar5 * 8) = local_28[0];
  this->bClearTextures = param_1->bClearTextures;
  this->bIsThumbnails = param_1->bIsThumbnails;
  return this;
}

