// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetFirstPersonViewBounds @ 14487c5b0

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

FFirstPersonViewBounds * __thiscall
FFirstPersonSceneExtensionRenderer::GetFirstPersonViewBounds
          (FFirstPersonSceneExtensionRenderer *this,FFirstPersonViewBounds *__return_storage_ptr__,
          FViewInfo *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FFirstPersonViewBounds *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar2 = param_1->SceneRendererPrimaryViewId;
  if ((-1 < (int)uVar2) && ((int)uVar2 < (this->ViewBoundsArray).ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar2 < (this->ViewBoundsArray).ArrayNum) {
      uVar8 = ~uVar2 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FFirstPersonViewBounds *)(*pcVar4)();
        return pFVar7;
      }
    }
    pFVar3 = (this->ViewBoundsArray).AllocatorInstance.Data;
    lVar9 = (longlong)(int)uVar2 * 0x78;
    dVar5 = *(double *)(pFVar3 + lVar9 + 8);
    (__return_storage_ptr__->FirstPersonBounds).Origin.field0_0x0._s_0.X =
         *(double *)(pFVar3 + lVar9);
    (__return_storage_ptr__->FirstPersonBounds).Origin.field0_0x0._s_0.Y = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x10 + 8);
    (__return_storage_ptr__->FirstPersonBounds).Origin.field0_0x0._s_0.Z =
         *(double *)(pFVar3 + lVar9 + 0x10);
    (__return_storage_ptr__->FirstPersonBounds).BoxExtent.field0_0x0._s_0.X = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x20 + 8);
    (__return_storage_ptr__->FirstPersonBounds).BoxExtent.field0_0x0._s_0.Y =
         *(double *)(pFVar3 + lVar9 + 0x20);
    (__return_storage_ptr__->FirstPersonBounds).BoxExtent.field0_0x0._s_0.Z = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x30 + 8);
    (__return_storage_ptr__->FirstPersonBounds).SphereRadius = *(double *)(pFVar3 + lVar9 + 0x30);
    (__return_storage_ptr__->WorldSpaceRepresentationBounds).Origin.field0_0x0._s_0.X = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x40 + 8);
    (__return_storage_ptr__->WorldSpaceRepresentationBounds).Origin.field0_0x0._s_0.Y =
         *(double *)(pFVar3 + lVar9 + 0x40);
    (__return_storage_ptr__->WorldSpaceRepresentationBounds).Origin.field0_0x0._s_0.Z = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x50 + 8);
    (__return_storage_ptr__->WorldSpaceRepresentationBounds).BoxExtent.field0_0x0._s_0.X =
         *(double *)(pFVar3 + lVar9 + 0x50);
    (__return_storage_ptr__->WorldSpaceRepresentationBounds).BoxExtent.field0_0x0._s_0.Y = dVar5;
    dVar5 = *(double *)(pFVar3 + lVar9 + 0x60 + 8);
    (__return_storage_ptr__->WorldSpaceRepresentationBounds).BoxExtent.field0_0x0._s_0.Z =
         *(double *)(pFVar3 + lVar9 + 0x60);
    (__return_storage_ptr__->WorldSpaceRepresentationBounds).SphereRadius = dVar5;
    *(undefined8 *)&__return_storage_ptr__->field_0x70 = *(undefined8 *)(pFVar3 + lVar9 + 0x70);
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  __return_storage_ptr__->bHasFirstPersonPrimitives = 0;
  __return_storage_ptr__->bHasFirstPersonWorldSpaceRepresentationPrimitives = 0;
  (__return_storage_ptr__->FirstPersonBounds).Origin.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->FirstPersonBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->FirstPersonBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->FirstPersonBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->FirstPersonBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->FirstPersonBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->FirstPersonBounds).SphereRadius = 0.0;
  (__return_storage_ptr__->WorldSpaceRepresentationBounds).Origin.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->WorldSpaceRepresentationBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->WorldSpaceRepresentationBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->WorldSpaceRepresentationBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->WorldSpaceRepresentationBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->WorldSpaceRepresentationBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->WorldSpaceRepresentationBounds).SphereRadius = 0.0;
  return __return_storage_ptr__;
}

// UpdateViewData @ 1448b1780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FFirstPersonSceneExtensionRenderer::UpdateViewData
          (FFirstPersonSceneExtensionRenderer *this,FRDGBuilder *param_1,
          FRendererViewDataManager *param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FFirstPersonSceneExtension *pFVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  FFirstPersonSceneExtensionRenderer *pFVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  TVector<double>_u_0 *pTVar25;
  double dVar26;
  ulonglong uVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  TBoxSphereBounds<double,double> *this_00;
  FScriptContainerElement *pFVar30;
  uint uVar31;
  int iVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  double dVar35;
  double dVar42;
  undefined1 auVar36 [16];
  double dVar43;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  double dVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  double dVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 local_388;
  undefined1 local_387 [3];
  uint local_384;
  double local_380;
  double dStack_378;
  FScriptContainerElement *local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338;
  undefined4 local_337;
  undefined2 local_333;
  undefined1 local_331;
  uint local_330;
  uint local_32c;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  FScriptContainerElement *local_2f0;
  FFirstPersonSceneExtensionRenderer *local_2e8;
  double local_2d8;
  double local_2c8;
  longlong local_2b8;
  double local_2b0;
  FScriptContainerElement *local_2a8;
  FFirstPersonSceneExtension *local_2a0;
  TVector<double>_u_0 local_298;
  double dStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268;
  TVector<double>_u_0 local_260;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined1 local_228 [16];
  TVector<double>_u_0 local_218;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  TVector<double>_u_0 local_1e0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  TVector<double>_u_0 local_170;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  TBoxSphereBounds<double,double> local_138;
  TBoxSphereBounds<double,double> local_100 [3];
  
  pFVar4 = this->SceneExtension;
  local_278 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  uVar52 = 0;
  uVar53 = 0;
  local_268 = 0.0;
  iVar3 = (pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum;
  pFVar30 = (pFVar4->WorldSpaceRepresentationPrimitives).AllocatorInstance.Data;
  local_298._s_0.X = 0.0;
  local_298._s_0.Y = 0.0;
  local_298._s_0.Z = 0.0;
  dStack_280 = 0.0;
  pFVar28 = pFVar30 + (longlong)iVar3 * 8;
  local_2e8 = this;
  while( true ) {
    if ((pFVar4->WorldSpaceRepresentationPrimitives).ArrayNum != iVar3) {
      local_388 = 0;
      `TCheckedPointerIterator<FPrimitiveSceneInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_388);
    }
    if (pFVar30 == pFVar28) break;
    lVar34 = *(longlong *)(*(longlong *)pFVar30 + 8);
    local_218._s_0.X = *(double *)(lVar34 + 400);
    local_218._s_0.Y = *(double *)(lVar34 + 0x198);
    local_218._s_0.Z = *(double *)(lVar34 + 0x1a0);
    uStack_200 = *(undefined8 *)(lVar34 + 0x1a8);
    local_1f8 = *(undefined8 *)(lVar34 + 0x1b0);
    uStack_1f0 = *(undefined8 *)(lVar34 + 0x1b8);
    local_1e8 = *(undefined8 *)(lVar34 + 0x1c0);
    if ((double)CONCAT44(uVar53,uVar52) == 0.0) {
      pTVar25 = &local_1e0;
      local_1e0._s_0.X = *(double *)(lVar34 + 400);
      local_1e0._s_0.Y = *(double *)(lVar34 + 0x198);
      local_1e0._s_0.Z = *(double *)(lVar34 + 0x1a0);
      uStack_1c8 = *(undefined8 *)(lVar34 + 0x1a8);
      local_1c0 = *(undefined8 *)(lVar34 + 0x1b0);
      uStack_1b8 = *(undefined8 *)(lVar34 + 0x1b8);
      local_1b0 = *(undefined8 *)(lVar34 + 0x1c0);
    }
    else {
      pTVar25 = (TVector<double>_u_0 *)
                UE::Math::TBoxSphereBounds<double,double>::operator+
                          ((TBoxSphereBounds<double,double> *)&local_298._s_0,&local_138,
                           (TBoxSphereBounds<double,double> *)&local_218._s_0);
    }
    local_298._s_0.Z = (pTVar25->_s_0).Z;
    dStack_280 = (((TVector<double> *)(pTVar25->XYZ + 3))->field0_0x0)._s_0.X;
    pFVar30 = pFVar30 + 8;
    local_298._s_0.X = (((TVector<double> *)&(pTVar25->_s_0).X)->field0_0x0)._s_0.X;
    local_298._s_0.Y = (pTVar25->_s_0).Y;
    local_268 = *(double *)(pTVar25 + 2);
    local_278 = *(undefined4 *)(pTVar25->XYZ + 4);
    uStack_274 = *(undefined4 *)((longlong)pTVar25->XYZ + 0x24);
    uStack_270 = *(undefined4 *)(pTVar25->XYZ + 5);
    uStack_26c = *(undefined4 *)((longlong)pTVar25->XYZ + 0x2c);
    uVar52 = SUB84(local_268,0);
    uVar53 = (undefined4)((ulonglong)local_268 >> 0x20);
  }
  uVar24 = param_2->SceneRendererPrimaryViews->ArrayNum;
  local_2f0 = (param_2->SceneRendererPrimaryViews->AllocatorInstance).Data;
  local_384 = uVar24;
  if (((int)uVar24 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar22)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar28 = (FScriptContainerElement *)&this->ViewBoundsArray;
  local_370 = pFVar28;
  if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
  }
  piVar1 = &(this->ViewBoundsArray).ArrayMax;
  (this->ViewBoundsArray).ArrayNum = 0;
  if ((this->ViewBoundsArray).ArrayMax < (int)uVar24) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,uVar24,(ForAnyElementType *)pFVar28,0,piVar1);
  }
  iVar32 = 0;
  if (0 < (int)uVar24) {
    pFVar30 = local_2f0;
    do {
      if ((iVar32 < 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((iVar32 != *(int *)(*(longlong *)pFVar30 + 0x28e4)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("ViewIndex == Views[ViewIndex]->SceneRendererPrimaryViewId",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\FirstPersonSceneExtension.cpp"
                              ,99,L""), bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar23 = ((TArray<FFirstPersonViewBounds,TSizedDefaultAllocator<32>_> *)pFVar28)->ArrayNum;
      if (iVar23 == *piVar1) {
        iVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x878,(ForAnyElementType *)pFVar28,piVar1);
      }
      ((TArray<FFirstPersonViewBounds,TSizedDefaultAllocator<32>_> *)pFVar28)->ArrayNum = iVar23 + 1
      ;
      pFVar28 = (((TArray<FFirstPersonViewBounds,TSizedDefaultAllocator<32>_> *)pFVar28)->
                AllocatorInstance).Data + (longlong)iVar23 * 0x78;
      DefaultConstructItems<FFirstPersonViewBounds,int>(pFVar28,1);
      iVar32 = iVar32 + 1;
      *(undefined8 *)pFVar28 = 0;
      *(undefined8 *)(pFVar28 + 8) = 0;
      *(undefined8 *)(pFVar28 + 0x10) = 0;
      *(undefined8 *)(pFVar28 + 0x18) = 0;
      *(undefined8 *)(pFVar28 + 0x20) = 0;
      pFVar30 = pFVar30 + 8;
      *(undefined8 *)(pFVar28 + 0x28) = 0;
      *(undefined8 *)(pFVar28 + 0x30) = 0;
      *(uint *)(pFVar28 + 0x70) = *(uint *)(pFVar28 + 0x70) & 0xfffffffc | -(uint)(iVar3 != 0) & 2;
      *(double *)(pFVar28 + 0x38) = local_298._s_0.X;
      *(double *)(pFVar28 + 0x40) = local_298._s_0.Y;
      *(double *)(pFVar28 + 0x48) = local_298._s_0.Z;
      *(double *)(pFVar28 + 0x50) = dStack_280;
      *(ulonglong *)(pFVar28 + 0x58) = CONCAT44(uStack_274,local_278);
      *(ulonglong *)(pFVar28 + 0x60) = CONCAT44(uStack_26c,uStack_270);
      *(double *)(pFVar28 + 0x68) = local_268;
      pFVar28 = local_370;
      this = local_2e8;
    } while (iVar32 < (int)uVar24);
  }
  local_2a0 = this->SceneExtension;
  local_32c = (local_2a0->FirstPersonPrimitives).ArrayNum;
  uVar27 = (ulonglong)(int)local_32c;
  pFVar30 = (local_2a0->FirstPersonPrimitives).AllocatorInstance.Data;
  pFVar28 = pFVar30 + uVar27 * 8;
  local_2a8 = pFVar28;
  do {
    local_370 = pFVar30;
    if ((local_2a0->FirstPersonPrimitives).ArrayNum != (int)uVar27) {
      local_387[0] = 0;
      `TCheckedPointerIterator<FPrimitiveSceneInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_387);
    }
    if (pFVar30 == pFVar28) {
      return;
    }
    uVar31 = 0;
    lVar34 = *(longlong *)(*(longlong *)pFVar30 + 8);
    iVar3 = *(int *)(*(longlong *)pFVar30 + 0x188);
    local_318 = *(double *)(lVar34 + 0x1a0);
    dStack_310 = *(double *)*(undefined1 (*) [16])(lVar34 + 0x1a8);
    auVar2 = *(undefined1 (*) [16])(lVar34 + 400);
    local_308 = *(double *)(lVar34 + 0x1b0);
    auVar55 = *(undefined1 (*) [16])(lVar34 + 0x1a8);
    dStack_300 = *(double *)(lVar34 + 0x1b8);
    local_2f8 = *(double *)(lVar34 + 0x1c0);
    local_328 = auVar2;
    if (0 < (int)uVar24) {
      bVar7 = (byte)iVar3 & 0x1f;
      local_330 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      iVar32 = iVar3;
      if (iVar3 < 0) {
        iVar32 = iVar3 + 0x1f;
      }
      lVar34 = 0;
      local_2b8 = (longlong)(iVar32 >> 5);
      dVar13 = auVar2._0_8_;
      pFVar33 = local_2f0;
      local_2d8 = dVar13;
      local_2c8 = dStack_310;
      do {
        lVar5 = *(longlong *)pFVar33;
        local_380 = (double)lVar5;
        if ((iVar3 < 0) || (dVar26 = (double)lVar5, *(int *)(lVar5 + 0x1c68) <= iVar3)) {
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L"");
          if (bVar22) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          auVar55._8_8_ = local_308;
          auVar55._0_8_ = dStack_310;
          dVar26 = local_380;
        }
        pFVar21 = local_2e8;
        lVar29 = lVar5 + 0x1c50;
        if (*(longlong *)(lVar5 + 0x1c60) != 0) {
          lVar29 = *(longlong *)(lVar5 + 0x1c60);
        }
        if ((*(uint *)(lVar29 + local_2b8 * 4) & local_330) != 0) {
          dVar16 = *(double *)((longlong)dVar26 + 0xb30);
          dVar45 = *(double *)((longlong)dVar26 + 0xb38);
          dVar44 = auVar55._0_8_;
          dVar35 = *(double *)((longlong)dVar26 + 0xb50);
          dVar50 = *(double *)((longlong)dVar26 + 0xb58);
          dVar17 = *(double *)((longlong)dVar26 + 0xb70);
          dVar51 = *(double *)((longlong)dVar26 + 0xb78);
          dVar18 = *(double *)((longlong)dVar26 + 0xb40);
          dVar19 = *(double *)((longlong)dVar26 + 0xb60);
          dVar20 = *(double *)((longlong)dVar26 + 0xb80);
          dVar42 = auVar55._8_8_;
          auVar36._8_4_ = auVar55._8_4_;
          auVar36._0_8_ = dVar42;
          auVar36._12_4_ = auVar55._12_4_;
          dVar43 = auVar36._8_8_ * dVar50;
          dVar12 = dVar42 * *(double *)((longlong)dVar26 + 0xb68);
          auVar37._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar42 * dVar35) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar42 * dVar35,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar37._8_4_ = SUB84(dVar43,0) & _UNK_15061cc88;
          auVar37._12_4_ = (uint)((ulonglong)dVar43 >> 0x20) & _UNK_15061cc8c;
          dVar14 = auVar2._8_8_;
          auVar38._8_4_ = SUB84(dStack_300,0);
          auVar38._0_8_ = dStack_300;
          auVar38._12_4_ = (int)((ulonglong)dStack_300 >> 0x20);
          dVar43 = auVar38._8_8_ * dVar51;
          dVar49 = dVar44 * *(double *)((longlong)dVar26 + 0xb48);
          auVar39._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dStack_300 * dVar17) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dStack_300 * dVar17,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar39._8_4_ = SUB84(dVar43,0) & _UNK_15061cc88;
          auVar39._12_4_ = (uint)((ulonglong)dVar43 >> 0x20) & _UNK_15061cc8c;
          dVar43 = auVar37._0_8_ +
                   (double)CONCAT44((uint)((ulonglong)(dVar44 * dVar16) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar44 * dVar16,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar39._0_8_;
          dVar10 = auVar37._8_8_ +
                   (double)CONCAT44((uint)((ulonglong)(dVar44 * dVar45) >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar44 * dVar45,0) & _UNK_15061cc88) + auVar39._8_8_;
          uVar52 = SUB84(dVar10,0);
          uVar53 = (undefined4)((ulonglong)dVar10 >> 0x20);
          auVar8._8_4_ = uVar52;
          auVar8._0_8_ = dVar43;
          auVar8._12_4_ = uVar53;
          local_190._8_4_ = uVar52;
          local_190._0_8_ = dVar43;
          local_190._12_4_ = uVar53;
          auVar46._0_8_ =
               (double)CONCAT44((uint)((ulonglong)(dVar44 * dVar18) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar44 * dVar18,0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar46._8_4_ = SUB84(dVar49,0) & _UNK_15061cc88;
          auVar46._12_4_ = (uint)((ulonglong)dVar49 >> 0x20) & _UNK_15061cc8c;
          dVar10 = dStack_300 * *(double *)((longlong)dVar26 + 0xb88);
          auVar40._8_4_ = SUB84(local_318,0);
          auVar40._0_8_ = local_318;
          auVar40._12_4_ = (int)((ulonglong)local_318 >> 0x20);
          local_180 = (double)CONCAT44((uint)((ulonglong)(dVar42 * dVar19) >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar42 * dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) + auVar46._0_8_
                      + (double)CONCAT44((uint)((ulonglong)(dStack_300 * dVar20) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dStack_300 * dVar20,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          dVar10 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar12,0) & _UNK_15061cc88) + auVar46._8_8_ +
                   (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                                    SUB84(dVar10,0) & _UNK_15061cc88);
          local_228._8_4_ = SUB84(dVar10,0);
          local_228._0_8_ = local_180;
          local_228._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          dVar12 = dVar14 * dVar35 + dVar13 * dVar16 + local_318 * dVar17 +
                   *(double *)((longlong)dVar26 + 0xb90);
          dVar42 = dVar14 * dVar50 + dVar13 * dVar45 + auVar40._8_8_ * dVar51 +
                   *(double *)((longlong)dVar26 + 0xb98);
          auVar54._0_8_ = dVar35 * dVar35 + dVar16 * dVar16 + dVar17 * dVar17;
          auVar54._8_8_ = dVar50 * dVar50 + dVar45 * dVar45 + dVar51 * dVar51;
          auVar9._8_4_ = SUB84(auVar54._8_8_,0);
          auVar9._0_8_ = auVar54._8_8_;
          auVar9._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
          auVar55 = maxpd(auVar54,auVar9);
          dStack_378 = auVar8._8_8_;
          dVar10 = dVar19 * dVar19 + dVar18 * dVar18 + dVar20 * dVar20;
          local_198 = dVar14 * dVar19 + dVar13 * dVar18 + local_318 * dVar20 +
                      *(double *)((longlong)dVar26 + 0xba0);
          local_1a8._8_4_ = SUB84(dVar42,0);
          local_1a8._0_8_ = dVar12;
          local_1a8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          auVar11._8_4_ = SUB84(dVar10,0);
          auVar11._0_8_ = dVar10;
          auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          auVar55 = maxpd(auVar55,auVar11);
          local_337 = 0;
          local_333 = 0;
          local_331 = 0;
          local_2b0 = SQRT(local_180 * local_180 + dVar43 * dVar43 + dStack_378 * dStack_378);
          local_338 = 1;
          dVar10 = dVar12 - dVar43;
          auVar15._4_8_ = auVar55._8_8_;
          auVar15._0_4_ = (int)((ulonglong)dVar43 >> 0x20);
          auVar56._0_8_ = auVar15._0_8_ << 0x20;
          auVar56._8_4_ = uVar52;
          auVar56._12_4_ = uVar53;
          dVar26 = SQRT(auVar55._0_8_) * local_2f8;
          if (dVar26 <= local_2b0) {
            local_2b0 = dVar26;
          }
          dVar45 = local_198 + local_180;
          dVar50 = dVar42 - auVar56._8_8_;
          local_178 = local_2b0;
          dVar35 = local_198 - local_180;
          dVar26 = dVar42 + auVar56._8_8_;
          dVar16 = dVar45;
          if (dVar35 <= dVar45) {
            dVar16 = dVar35;
          }
          dVar43 = dVar12 + dVar43;
          dVar17 = dVar26;
          if (dVar50 <= dVar26) {
            dVar17 = dVar50;
          }
          if (dVar26 <= dVar50) {
            dVar26 = dVar50;
          }
          dVar50 = dVar14 - local_308;
          if (dVar45 <= dVar35) {
            dVar45 = dVar35;
          }
          local_380 = local_318 - dStack_300;
          dVar35 = dVar43;
          if (dVar43 <= dVar10) {
            dVar35 = dVar10;
          }
          if (dVar10 <= dVar43) {
            dVar43 = dVar10;
          }
          dVar10 = local_2d8 - local_2c8;
          dVar51 = dVar50;
          if (dVar50 <= dVar26) {
            dVar51 = dVar26;
          }
          if (dVar17 <= dVar50) {
            dVar50 = dVar17;
          }
          dStack_350 = local_2d8 + local_2c8;
          dStack_340 = local_318 + dStack_300;
          dVar26 = dVar10;
          if (dVar10 <= dVar35) {
            dVar26 = dVar35;
          }
          if (dVar43 <= dVar10) {
            dVar10 = dVar43;
          }
          local_348 = dVar14 + local_308;
          dVar43 = local_380;
          if (local_380 <= dVar45) {
            dVar43 = dVar45;
          }
          if (dVar16 <= local_380) {
            local_380 = dVar16;
          }
          local_368 = dStack_350;
          if (dVar10 <= dStack_350) {
            local_368 = dVar10;
          }
          dStack_360 = local_348;
          if (dVar50 <= local_348) {
            dStack_360 = dVar50;
          }
          local_358 = dStack_340;
          if (local_380 <= dStack_340) {
            local_358 = local_380;
          }
          if (dStack_340 <= dVar43) {
            dStack_340 = dVar43;
          }
          if (local_348 <= dVar51) {
            local_348 = dVar51;
          }
          if (dStack_350 <= dVar26) {
            dStack_350 = dVar26;
          }
          dVar26 = local_348 - dStack_360;
          dVar10 = dStack_350 - local_368;
          dVar43 = dStack_340 - local_358;
          uVar24 = 0;
          if ((int)uVar31 < (local_2e8->ViewBoundsArray).ArrayNum) {
            uVar24 = ~uVar31 >> 0x1f;
          }
          local_240 = dVar26 * __real_3fe0000000000000;
          dStack_248 = dVar10 * __real_3fe0000000000000;
          local_260._s_0.X = dStack_248 + local_368;
          local_260._s_0.Y = local_240 + dStack_360;
          dStack_238 = dVar43 * __real_3fe0000000000000;
          auVar47._8_4_ = auVar2._8_4_;
          auVar47._0_8_ = dVar14;
          auVar47._12_4_ = auVar2._12_4_;
          auVar48._8_8_ = auVar47._8_8_;
          local_260._s_0.Z = local_358 + dStack_238;
          auVar48._0_8_ = (dVar14 - local_260._s_0.Y) * (dVar14 - local_260._s_0.Y);
          auVar41._0_8_ =
               (local_2d8 - local_260._s_0.X) * (local_2d8 - local_260._s_0.X) + auVar48._0_8_ +
               (local_318 - local_260._s_0.Z) * (local_318 - local_260._s_0.Z);
          auVar41._8_8_ = 0;
          auVar55 = sqrtpd(auVar48,auVar41);
          local_230 = auVar55._0_8_ + local_2f8;
          dVar12 = SQRT((dVar12 - local_260._s_0.X) * (dVar12 - local_260._s_0.X) +
                        (dVar42 - local_260._s_0.Y) * (dVar42 - local_260._s_0.Y) +
                        (local_198 - local_260._s_0.Z) * (local_198 - local_260._s_0.Z)) + local_2b0
          ;
          if (local_230 <= dVar12) {
            local_230 = dVar12;
          }
          dVar26 = SQRT((dVar26 * dVar26 + dVar10 * dVar10 + dVar43 * dVar43) *
                        __real_3fd0000000000000);
          if (dVar26 <= local_230) {
            local_230 = dVar26;
          }
          if ((uVar24 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_00 = (TBoxSphereBounds<double,double> *)
                    ((pFVar21->ViewBoundsArray).AllocatorInstance.Data + lVar34);
          if (this_00->SphereRadius == 0.0) {
            pTVar25 = &local_170;
            local_170._s_0.X = local_260._s_0.X;
            local_170._s_0.Y = local_260._s_0.Y;
            local_170._s_0.Z = local_260._s_0.Z;
            dStack_158 = dStack_248;
            local_150 = local_240;
            dStack_148 = dStack_238;
            local_140 = local_230;
          }
          else {
            pTVar25 = (TVector<double>_u_0 *)
                      UE::Math::TBoxSphereBounds<double,double>::operator+
                                (this_00,local_100,
                                 (TBoxSphereBounds<double,double> *)&local_260._s_0);
          }
          dVar43 = (((TVector<double> *)&(pTVar25->_s_0).X)->field0_0x0)._s_0.X;
          dVar10 = (pTVar25->_s_0).Y;
          dVar12 = (pTVar25->_s_0).Z;
          dVar42 = (((TVector<double> *)(pTVar25->XYZ + 3))->field0_0x0)._s_0.X;
          dVar14 = pTVar25->XYZ[4];
          dVar16 = pTVar25->XYZ[5];
          dVar26 = pTVar25->XYZ[6];
          *(uint *)&this_00[2].Origin.field0_0x0 = *(uint *)&this_00[2].Origin.field0_0x0 | 1;
          (this_00->Origin).field0_0x0._s_0.X = dVar43;
          (this_00->Origin).field0_0x0._s_0.Y = dVar10;
          (this_00->Origin).field0_0x0._s_0.Z = dVar12;
          (this_00->BoxExtent).field0_0x0._s_0.X = dVar42;
          (this_00->BoxExtent).field0_0x0._s_0.Y = dVar14;
          (this_00->BoxExtent).field0_0x0._s_0.Z = dVar16;
          this_00->SphereRadius = dVar26;
        }
        auVar55._8_8_ = local_308;
        auVar55._0_8_ = dStack_310;
        uVar31 = uVar31 + 1;
        pFVar33 = pFVar33 + 8;
        lVar34 = lVar34 + 0x78;
        pFVar30 = local_370;
        pFVar28 = local_2a8;
        uVar24 = local_384;
      } while ((int)uVar31 < (int)local_384);
    }
    pFVar30 = pFVar30 + 8;
    uVar27 = (ulonglong)local_32c;
  } while( true );
}

