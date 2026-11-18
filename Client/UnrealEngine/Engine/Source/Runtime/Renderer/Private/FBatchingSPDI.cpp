// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// DrawMesh @ 1452bb360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FBatchingSPDI::DrawMesh(FBatchingSPDI *this,FMeshBatch *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FStaticMeshBatchRelevance *this_00;
  Type TVar3;
  undefined4 uVar4;
  FPrimitiveSceneProxy *pFVar5;
  FPrimitiveSceneInfo *pFVar6;
  HHitProxy *pHVar7;
  longlong *plVar8;
  code *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  uchar uVar12;
  uint uVar13;
  FStaticMeshBatch *this_01;
  FMaterial *pFVar14;
  ushort *puVar15;
  longlong lVar16;
  FStaticMeshBatch *this_02;
  uint uVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  FHitProxyId FVar20;
  bool local_78;
  bool local_77;
  bool local_76;
  undefined1 local_75;
  bool local_74;
  bool local_73;
  ushort local_72;
  ForAnyElementType local_70;
  uint local_68;
  int local_64;
  undefined1 local_60 [2];
  undefined1 local_5e [6];
  undefined4 local_58;
  undefined4 uStack_54;
  FMaterial *local_50;
  FPrimitiveSceneProxy *local_48;
  
  this_01 = (FStaticMeshBatch *)0x0;
  bVar11 = FMeshBatch::HasAnyDrawCalls(param_1);
  if (bVar11) {
    pFVar5 = this->PrimitiveSceneInfo->Proxy;
    TVar3 = *(Type *)&this->PrimitiveSceneInfo->Scene->field_0x8;
    local_48 = pFVar5;
    bVar11 = FMeshBatch::Validate(param_1,pFVar5,TVar3);
    if (bVar11) {
      pFVar6 = this->PrimitiveSceneInfo;
      piVar1 = &(pFVar6->StaticMeshes).ArrayMax;
      uVar13 = (pFVar6->StaticMeshes).ArrayNum;
      if (uVar13 == *piVar1) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8f0,&(pFVar6->StaticMeshes).AllocatorInstance,piVar1);
      }
      (pFVar6->StaticMeshes).ArrayNum = uVar13 + 1;
      uVar17 = 0;
      if ((int)uVar13 < (int)(uVar13 + 1)) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_02 = (FStaticMeshBatch *)
                ((pFVar6->StaticMeshes).AllocatorInstance.Data + (longlong)(int)uVar13 * 0xf0);
      if (this_02 != (FStaticMeshBatch *)0x0) {
        pHVar7 = (this->CurrentHitProxy).Reference;
        if (pHVar7 == (HHitProxy *)0x0) {
          FVar20.Index = -1;
        }
        else {
          FVar20.Index = (pHVar7->Id).Index;
        }
        this_01 = FStaticMeshBatch::FStaticMeshBatch
                            (this_02,this->PrimitiveSceneInfo,param_1,FVar20);
      }
      FMeshBatch::PreparePrimitiveUniformBuffer((FMeshBatch *)this_01,pFVar5,TVar3);
      bVar11 = SupportsCachingMeshDrawCommands((FMeshBatch *)this_01,TVar3);
      if ((!bVar11) || (local_76 = true, pFVar5->bCastVolumetricTranslucentShadow != 0)) {
        local_76 = false;
      }
      pFVar14 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                          (param_1->MaterialRenderProxy,TVar3);
      local_50 = pFVar14;
      local_73 = (bool)(**(code **)(pFVar14->_padding_ + 0x368))(pFVar14);
      puVar15 = (ushort *)(**(code **)(pFVar14->_padding_ + 0x280))(pFVar14,local_60);
      local_72 = *puVar15 >> 10 & 0xff01;
      puVar15 = (ushort *)(**(code **)(pFVar14->_padding_ + 0x280))(pFVar14,local_5e);
      local_58 = 1;
      uStack_54 = 4;
      local_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,2,0,&local_70,2,&local_64);
      uVar13 = local_68;
      *(ulonglong *)local_70.Data = CONCAT44(uStack_54,local_58);
      uVar18 = (ulonglong)(int)local_68;
      pFVar2 = local_70.Data + uVar18 * 4;
      FVar19.Data = local_70.Data;
      while( true ) {
        if ((uint)uVar18 != uVar13) {
          local_75 = 0;
          `TCheckedPointerIterator<enum_EMaterialShadingModel_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_75);
          uVar18 = (ulonglong)local_68;
        }
        if (FVar19.Data == pFVar2) goto LAB_1452bb5ff;
        if ((*puVar15 >> ((byte)*FVar19.Data & 0x1f) & 1) != 0) break;
        FVar19.Data = FVar19.Data + 4;
      }
      bVar11 = FMaterial::MaterialUsesAnisotropy_RenderThread(local_50);
      local_77 = true;
      if (!bVar11) {
LAB_1452bb5ff:
        local_77 = false;
      }
      if (local_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data);
      }
      local_74 = SupportsNaniteRendering
                           ((FVertexFactory *)this_01->_padding_,local_48,
                            param_1->MaterialRenderProxy,TVar3);
      plVar8 = (longlong *)this_01->_padding_;
      lVar16 = (**(code **)(*plVar8 + 0x30))(plVar8);
      if (((*(byte *)(lVar16 + 0x38) & 0x80) == 0) || (local_78 = true, (char)plVar8[0x27] == -1)) {
        local_78 = false;
      }
      uVar12 = '\0';
      bVar11 = FMeshBatch::IsDecal(param_1,TVar3);
      if (bVar11) {
        uVar12 = DecalRendering::GetDecalRenderTargetModeMask(local_50,TVar3);
      }
      pFVar6 = this->PrimitiveSceneInfo;
      piVar1 = &(pFVar6->StaticMeshRelevances).ArrayMax;
      uVar13 = (pFVar6->StaticMeshRelevances).ArrayNum;
      if (uVar13 == *piVar1) {
        uVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pFVar6->StaticMeshRelevances).AllocatorInstance,piVar1);
      }
      (pFVar6->StaticMeshRelevances).ArrayNum = uVar13 + 1;
      uVar17 = 0;
      if ((int)uVar13 < (int)(uVar13 + 1)) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = (FStaticMeshBatchRelevance *)
                ((pFVar6->StaticMeshRelevances).AllocatorInstance.Data +
                (longlong)(int)uVar13 * 0x18);
      if (this_00 != (FStaticMeshBatchRelevance *)0x0) {
        FStaticMeshBatchRelevance::FStaticMeshBatchRelevance
                  (this_00,this_01,param_2,local_76,local_73,SUB21(local_72,0),local_77,local_74,
                   local_78,param_1->bUseForWaterInfoTextureDepth,
                   param_1->bUseForLumenSurfaceCacheCapture,uVar12,TVar3);
      }
    }
  }
  return;
}

// ReserveMemoryForMeshes @ 1452d27b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FBatchingSPDI::ReserveMemoryForMeshes(FBatchingSPDI *this,int param_1)

{
  uint uVar1;
  int iVar2;
  FPrimitiveSceneInfo *pFVar3;
  
  pFVar3 = this->PrimitiveSceneInfo;
  iVar2 = (pFVar3->StaticMeshRelevances).ArrayNum;
  uVar1 = iVar2 + param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((pFVar3->StaticMeshRelevances).ArrayMax < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&(pFVar3->StaticMeshRelevances).AllocatorInstance,iVar2,
               &(pFVar3->StaticMeshRelevances).ArrayMax);
  }
  pFVar3 = this->PrimitiveSceneInfo;
  iVar2 = (pFVar3->StaticMeshes).ArrayNum;
  uVar1 = iVar2 + param_1;
  if (-1 < (int)uVar1) {
    if ((pFVar3->StaticMeshes).ArrayMax < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,8,uVar1,&(pFVar3->StaticMeshes).AllocatorInstance,iVar2,
                 &(pFVar3->StaticMeshes).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// SetHitProxy @ 1452d3480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FBatchingSPDI::SetHitProxy(FBatchingSPDI *this,HHitProxy *param_1)

{
  longlong *plVar1;
  HHitProxy *pHVar2;
  
  pHVar2 = (this->CurrentHitProxy).Reference;
  if (pHVar2 != param_1) {
    (this->CurrentHitProxy).Reference = param_1;
    if (param_1 != (HHitProxy *)0x0) {
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    }
    if (pHVar2 != (HHitProxy *)0x0) {
      plVar1 = &pHVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001452d34ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pHVar2->_padding_)(pHVar2,1);
        return;
      }
    }
  }
  return;
}

