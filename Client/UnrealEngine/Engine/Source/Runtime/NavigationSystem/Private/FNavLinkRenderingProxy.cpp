// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 10

// FNavLinkRenderingProxy @ 146dd40e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNavLinkRenderingProxy * __thiscall
FNavLinkRenderingProxy::FNavLinkRenderingProxy
          (FNavLinkRenderingProxy *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  USceneComponent *pUVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UClass *pUVar9;
  TTransform<double> *pTVar10;
  FNavLinkRenderingProxy *pFVar11;
  UClass *pUVar12;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  AActor *this_00;
  uint uVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  void *local_b8;
  undefined8 local_b0;
  TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FNavigationLink,TSizedDefaultAllocator<32>_> local_98;
  TTransform<double> local_88;
  
  pUVar17 = (UClass *)0x0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this,param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FNavLinkRenderingProxy__6B_;
  (this->OffMeshPointLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffMeshPointLinks).ArrayNum = 0;
  (this->OffMeshPointLinks).ArrayMax = 0;
  (this->OffMeshSegmentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OffMeshSegmentLinks).ArrayNum = 0;
  (this->OffMeshSegmentLinks).ArrayMax = 0;
  this->LinkOwnerActor = *(AActor **)&param_1->field_0xa8;
  pUVar9 = Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
  pUVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar9);
  this_00 = this->LinkOwnerActor;
  this->LinkOwnerHost = (INavLinkHostInterface *)pUVar9;
  if (pUVar9 == (UClass *)0x0) {
    pUVar9 = pUVar17;
    if (this_00 != (AActor *)0x0) {
      pUVar9 = Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
      pUVar9 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar9);
      this_00 = this->LinkOwnerActor;
    }
    this->LinkOwnerHost = (INavLinkHostInterface *)pUVar9;
  }
  if ((this_00 != (AActor *)0x0) && (pUVar9 != (UClass *)0x0)) {
    pUVar2 = (this_00->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      pTVar10 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar10 = &pUVar2->ComponentToWorld;
    }
    local_88.Rotation.XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
    local_88.Rotation.XY.m128d_f64[1] = (pTVar10->Rotation).XY.m128d_f64[1];
    local_88.Rotation.ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0];
    local_88.Rotation.ZW.m128d_f64[1] = (pTVar10->Rotation).ZW.m128d_f64[1];
    local_88.Translation.XY.m128d_f64[0] = (pTVar10->Translation).XY.m128d_f64[0];
    local_88.Translation.XY.m128d_f64[1] = (pTVar10->Translation).XY.m128d_f64[1];
    local_88.Translation.ZW.m128d_f64[0] = (pTVar10->Translation).ZW.m128d_f64[0];
    local_88.Translation.ZW.m128d_f64[1] = (pTVar10->Translation).ZW.m128d_f64[1];
    local_88.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar10->Scale3D).XY.m128d_f64;
    local_88.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar10->Scale3D).XY.m128d_f64 + 4);
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar10->Scale3D).XY.m128d_f64 + 1);
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar10->Scale3D).XY.m128d_f64 + 0xc);
    local_88.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar10->Scale3D).ZW.m128d_f64;
    local_88.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar10->Scale3D).ZW.m128d_f64 + 4);
    local_88.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar10->Scale3D).ZW.m128d_f64 + 1);
    local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(pTVar10->Scale3D).ZW.m128d_f64 + 0xc);
    local_b8 = (void *)0x0;
    local_b0 = 0;
    (**(code **)(pUVar9->_padding_ + 0x10))(local_88.Scale3D.XY.m128d_f64[0]._0_4_,&local_b8);
    pUVar9 = pUVar17;
    pUVar18 = pUVar17;
    if (0 < (int)local_b0) {
      do {
        uVar15 = (uint)pUVar9;
        uVar16 = ~uVar15 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar15 < (int)local_b0) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FNavLinkRenderingProxy *)(*pcVar4)();
          return pFVar11;
        }
        pvVar5 = local_b8;
        lVar3 = *(longlong *)((longlong)local_b8 + (longlong)pUVar18);
        if ((lVar3 != 0) &&
           (pUVar9 = Z_Construct_UClass_UNavLinkDefinition_NoRegister(), pUVar9 != (UClass *)0x0)) {
          iVar1 = (int)pUVar9->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar9->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar6) && (*(longlong *)((longlong)pvVar5 + (longlong)pUVar18) != 0)) {
            uVar8 = 0;
            if ((int)uVar15 < (int)local_b0) {
              uVar8 = uVar16;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FNavLinkRenderingProxy *)(*pcVar4)();
              return pFVar11;
            }
            pvVar5 = local_b8;
            lVar3 = *(longlong *)((longlong)local_b8 + (longlong)pUVar18);
            pUVar9 = pUVar17;
            if ((lVar3 != 0) &&
               (pUVar12 = Z_Construct_UClass_UNavLinkDefinition_NoRegister(),
               pUVar12 != (UClass *)0x0)) {
              iVar1 = (int)pUVar12->_padding_;
              if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar12->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                pUVar9 = *(UClass **)((longlong)pvVar5 + (longlong)pUVar18);
              }
            }
            pTVar13 = UNavLinkDefinition::GetLinksDefinition(pUVar9);
            StorePointLinks(this,&local_88,pTVar13);
            uVar8 = 0;
            if ((int)uVar15 < (int)local_b0) {
              uVar8 = uVar16;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FNavLinkRenderingProxy *)(*pcVar4)();
              return pFVar11;
            }
            pvVar5 = local_b8;
            lVar3 = *(longlong *)((longlong)local_b8 + (longlong)pUVar18);
            pUVar9 = pUVar17;
            if ((lVar3 != 0) &&
               (pUVar12 = Z_Construct_UClass_UNavLinkDefinition_NoRegister(),
               pUVar12 != (UClass *)0x0)) {
              iVar1 = (int)pUVar12->_padding_;
              if ((*(int *)(lVar3 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar12->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                pUVar9 = *(UClass **)((longlong)pvVar5 + (longlong)pUVar18);
              }
            }
            pTVar14 = UNavLinkDefinition::GetSegmentLinksDefinition(pUVar9);
            StoreSegmentLinks(this,&local_88,pTVar14);
          }
        }
        pUVar9 = (UClass *)(ulonglong)(uVar15 + 1);
        pUVar18 = (UClass *)&pUVar18->_padding_;
      } while ((int)(uVar15 + 1) < (int)local_b0);
    }
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    cVar7 = (**(code **)((longlong)*this->LinkOwnerHost + 0x18))
                      (this->LinkOwnerHost,&local_98,&local_a8);
    if (cVar7 != '\0') {
      StorePointLinks(this,&local_88,&local_98);
      StoreSegmentLinks(this,&local_88,&local_a8);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return this;
}

// DrawLinks @ 146df0980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FNavLinkRenderingProxy::DrawLinks
          (FPrimitiveDrawInterface *param_1,
          TArray<FNavLinkRenderingProxy::FNavLinkDrawing,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing,TSizedDefaultAllocator<32>_>
          *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,FMaterialRenderProxy *param_5,
          uint param_6)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FLinearColor_u_0 *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  TVector<double>_u_0 *pTVar21;
  longlong lVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM11 [16];
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  longlong local_res20;
  float local_658 [2];
  longlong local_650;
  FLinearColor_u_0 local_648;
  FLinearColor_u_0 local_638;
  FLinearColor_u_0 local_628;
  FLinearColor_u_0 local_618;
  FLinearColor_u_0 local_608;
  FLinearColor_u_0 local_5f8;
  FLinearColor_u_0 local_5e8;
  FLinearColor_u_0 local_5d8;
  FLinearColor_u_0 local_5c8;
  FLinearColor_u_0 local_5b8;
  FLinearColor_u_0 local_5a8;
  FLinearColor_u_0 local_598;
  FLinearColor_u_0 local_588;
  FLinearColor_u_0 local_578;
  FLinearColor_u_0 local_568;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 local_540;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_510;
  TVector<double>_u_0 local_4f8;
  TVector<double>_u_0 local_4e0;
  TVector<double>_u_0 local_4c8;
  TVector<double>_u_0 local_4b0;
  TVector<double>_u_0 local_498;
  TVector<double>_u_0 local_480;
  TVector<double>_u_0 local_468;
  TVector<double>_u_0 local_450;
  TVector<double>_u_0 local_438;
  TVector<double>_u_0 local_420;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3c0;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_390;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_360;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  TVector<double>_u_0 local_300;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0 [3];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  if (param_4->ArrayNum == 0) {
    local_658[0] = FNavigationSystem::FallbackAgentHeight * __real_3f000000;
    pFVar18 = (param_4->AllocatorInstance).Data;
    if (((pFVar18 <= (FScriptContainerElement *)local_658) &&
        ((FScriptContainerElement *)local_658 < pFVar18 + (longlong)param_4->ArrayMax * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar14 = param_4->ArrayNum;
    if (iVar14 == param_4->ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    param_4->ArrayNum = iVar14 + 1;
    *(float *)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_658[0];
  }
  dVar29 = __real_3fa47ae14ccccccd;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  fVar9 = __real_3b808081;
  dVar8 = _UNK_15061cbc8;
  dVar7 = ___xmm_3ff00000000000000000000000000000;
  dVar6 = __real_3ff0000000000000;
  iVar14 = param_2->ArrayNum;
  uVar20 = 0;
  uVar35 = (undefined4)__real_41efffffffe00000;
  uVar36 = (undefined4)((ulonglong)__real_41efffffffe00000 >> 0x20);
  if (0 < iVar14) {
    unaff_XMM11 = ZEXT416(__real_3ecccccd);
    local_650 = 0;
    do {
      lVar22 = local_650;
      uVar19 = 0;
      if ((int)uVar20 < iVar14) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar18 = (param_2->AllocatorInstance).Data + lVar22;
      if ((*(uint *)(pFVar18 + 0x40) & param_6) != 0) {
        dVar28 = *(double *)&pFVar18[0x18].field_0x0 - *(double *)&pFVar18->field_0x0;
        auVar31._8_8_ = 0;
        auVar31._0_8_ =
             dVar28 * dVar28 +
             (*(double *)(pFVar18 + 0x20) - *(double *)(pFVar18 + 8)) *
             (*(double *)(pFVar18 + 0x20) - *(double *)(pFVar18 + 8)) +
             (*(double *)(pFVar18 + 0x28) - *(double *)(pFVar18 + 0x10)) *
             (*(double *)(pFVar18 + 0x28) - *(double *)(pFVar18 + 0x10));
        auVar31 = sqrtpd(unaff_XMM10,auVar31);
        auVar32._8_8_ = auVar31._8_8_;
        dVar28 = auVar31._0_8_ * dVar29;
        if (dVar28 <= __real_4020000000000000) {
          dVar28 = __real_4020000000000000;
        }
        auVar32._0_8_ = dVar28;
        if (((dVar28 < 0.0) ||
            ((double)CONCAT44(uVar36,uVar35) <= dVar28 && dVar28 != (double)CONCAT44(uVar36,uVar35))
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RealSegments >= 0 && RealSegments <= (FVector::FReal)TNumericLimits<uint32>::Max()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkRenderingComponent.cpp"
                                      ,0x15b,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_648._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
        local_648._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
        local_648._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
        local_648._s_0.A = (float)(byte)pFVar18[0x37] * fVar9;
        FPrimitiveSceneProxy::DrawArc
                  (param_1,(TVector<double> *)pFVar18,(TVector<double> *)(pFVar18 + 0x18),
                   unaff_XMM11._0_4_,(uint)(longlong)dVar28,(FLinearColor *)&local_648._s_0,'\0',
                   __real_40600000,false);
        fVar34 = __real_40600000;
        fVar10 = __real_41f00000;
        dVar28 = *(double *)&pFVar18->field_0x0;
        dVar1 = *(double *)(pFVar18 + 8);
        dVar30 = *(double *)&pFVar18[0x18].field_0x0 - dVar28;
        dVar25 = *(double *)(pFVar18 + 0x20) - dVar1;
        dVar2 = *(double *)(pFVar18 + 0x10);
        iVar14 = *(int *)&pFVar18[0x30].field_0x0;
        dVar24 = *(double *)(pFVar18 + 0x28) - dVar2;
        auVar26._0_8_ = dVar25 * dVar25 + dVar30 * dVar30 + dVar24 * dVar24;
        auVar26._8_8_ = 0;
        auVar31 = sqrtpd(auVar32,auVar26);
        unaff_XMM10._8_8_ = auVar31._8_8_;
        unaff_XMM10._0_8_ = auVar31._0_8_ * ___real_3ff553f7c0000000;
        pFVar17 = pFVar18;
        if (iVar14 == 0) {
LAB_146df0e15:
          local_528._s_0.Z = dVar2 + unaff_XMM10._0_8_;
          local_618._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_618._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_618._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          local_618._s_0.A = (float)(byte)pFVar18[0x37] * fVar9;
          local_528._s_0.X = dVar28;
          local_528._s_0.Y = dVar1;
          FPrimitiveSceneProxy::DrawArrowHead
                    (param_1,(TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)&local_528._s_0,
                     __real_41f00000,(FLinearColor *)&local_618._s_0,'\0',__real_40600000,false);
          pTVar21 = &local_510;
          unaff_XMM10._0_8_ = unaff_XMM10._0_8_ + *(double *)(pFVar18 + 0x28);
          local_608._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_608._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_608._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          local_510._s_0.X = (double)*(undefined8 *)&pFVar18[0x18].field_0x0;
          local_510._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x20);
          pFVar16 = &local_608;
          local_608._s_0.A = (float)(byte)pFVar18[0x37] * fVar9;
          local_510._s_0.Z = unaff_XMM10._0_8_;
        }
        else if (iVar14 == 1) {
          local_540._s_0.Z = dVar2 + unaff_XMM10._0_8_;
          pTVar21 = &local_540;
          local_628._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_628._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_628._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          pFVar16 = &local_628;
          local_628._s_0.A = (float)(byte)pFVar18[0x37] * fVar9;
          pFVar17 = pFVar18 + 0x18;
          local_540._s_0.X = dVar28;
          local_540._s_0.Y = dVar1;
        }
        else {
          if (iVar14 != 2) goto LAB_146df0e15;
          local_558._s_0.Z = *(double *)(pFVar18 + 0x28) + unaff_XMM10._0_8_;
          pTVar21 = &local_558;
          local_638._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_638._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_638._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          pFVar16 = &local_638;
          local_638._s_0.A = (float)(byte)pFVar18[0x37] * fVar9;
          local_558._s_0.X = *(double *)&pFVar18[0x18].field_0x0;
          local_558._s_0.Y = *(double *)(pFVar18 + 0x20);
        }
        FPrimitiveSceneProxy::DrawArrowHead
                  (param_1,(TVector<double> *)pFVar17,(TVector<double> *)&pTVar21->_s_0,fVar10,
                   (FLinearColor *)&pFVar16->_s_0,'\0',fVar34,false);
        if (__real_00000000 <= *(float *)(pFVar18 + 0x3c)) {
          local_3a8._s_0.X = 0.0;
          local_3a8._s_0.Y = 0.0;
          local_3a8._s_0.Z = dVar6;
          local_390._s_0.Z = 0.0;
          local_378._s_0.Z = 0.0;
          local_390._s_0.X = dVar7;
          local_390._s_0.Y = dVar8;
          local_378._s_0.X = dVar11;
          local_378._s_0.Y = dVar12;
          DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x18),
                       (TVector<double> *)&local_378._s_0,(TVector<double> *)&local_390._s_0,
                       (TVector<double> *)&local_3a8._s_0,(double)*(float *)(pFVar18 + 0x38),
                       (double)*(float *)(pFVar18 + 0x3c),10,param_5,'\0');
          local_360._s_0.X = 0.0;
          local_360._s_0.Y = 0.0;
          local_360._s_0.Z = dVar6;
          local_348._s_0.Z = 0.0;
          local_330._s_0.Z = 0.0;
          local_348._s_0.X = dVar7;
          local_348._s_0.Y = dVar8;
          local_330._s_0.X = dVar11;
          local_330._s_0.Y = dVar12;
          DrawCylinder(param_1,(TVector<double> *)pFVar18,(TVector<double> *)&local_330._s_0,
                       (TVector<double> *)&local_348._s_0,(TVector<double> *)&local_360._s_0,
                       (double)*(float *)(pFVar18 + 0x38),(double)*(float *)(pFVar18 + 0x3c),10,
                       param_5,'\0');
        }
        else {
          iVar14 = param_4->ArrayNum;
          uVar19 = 0;
          if (0 < iVar14) {
            lVar22 = 0;
            do {
              uVar15 = 0;
              if ((int)uVar19 < iVar14) {
                uVar15 = ~uVar19 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_438._s_0.X = 0.0;
              local_438._s_0.Y = 0.0;
              local_438._s_0.Z = dVar6;
              local_420._s_0.Z = 0.0;
              local_408._s_0.Z = 0.0;
              local_420._s_0.X = dVar7;
              local_420._s_0.Y = dVar8;
              local_408._s_0.X = dVar11;
              local_408._s_0.Y = dVar12;
              DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x18),
                           (TVector<double> *)&local_408._s_0,(TVector<double> *)&local_420._s_0,
                           (TVector<double> *)&local_438._s_0,(double)*(float *)(pFVar18 + 0x38),
                           (double)*(float *)((param_4->AllocatorInstance).Data + lVar22),10,param_5
                           ,'\0');
              uVar15 = 0;
              if ((int)uVar19 < param_4->ArrayNum) {
                uVar15 = ~uVar19 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_3f0._s_0.X = 0.0;
              local_3f0._s_0.Y = 0.0;
              local_3f0._s_0.Z = dVar6;
              local_3d8._s_0.Z = 0.0;
              local_3c0._s_0.Z = 0.0;
              local_3d8._s_0.X = dVar7;
              local_3d8._s_0.Y = dVar8;
              local_3c0._s_0.X = dVar11;
              local_3c0._s_0.Y = dVar12;
              DrawCylinder(param_1,(TVector<double> *)pFVar18,(TVector<double> *)&local_3c0._s_0,
                           (TVector<double> *)&local_3d8._s_0,(TVector<double> *)&local_3f0._s_0,
                           (double)*(float *)(pFVar18 + 0x38),
                           (double)*(float *)((param_4->AllocatorInstance).Data + lVar22),10,param_5
                           ,'\0');
              iVar14 = param_4->ArrayNum;
              uVar19 = uVar19 + 1;
              lVar22 = lVar22 + 4;
            } while ((int)uVar19 < iVar14);
          }
        }
        unaff_XMM11 = ZEXT416(__real_3ecccccd);
        uVar35 = (undefined4)__real_41efffffffe00000;
        uVar36 = (undefined4)((ulonglong)__real_41efffffffe00000 >> 0x20);
      }
      uVar20 = uVar20 + 1;
      iVar14 = param_2->ArrayNum;
      local_650 = local_650 + 0x48;
    } while ((int)uVar20 < iVar14);
  }
  fVar10 = __real_40600000;
  uVar20 = 0;
  iVar14 = param_3->ArrayNum;
  if (0 < iVar14) {
    local_res20 = 0;
    fVar34 = __real_3e800000;
    do {
      uVar19 = 0;
      if ((int)uVar20 < iVar14) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar18 = (param_3->AllocatorInstance).Data + local_res20;
      if ((*(uint *)(pFVar18 + 0x70) & param_6) != 0) {
        dVar29 = (((TVector<double>_u_0 *)&pFVar18[0x30].field_0x0)->_s_0).X -
                 (((TVector<double>_u_0 *)&pFVar18->field_0x0)->_s_0).X;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar29 * dVar29 +
                       (*(double *)(pFVar18 + 0x38) - *(double *)(pFVar18 + 8)) *
                       (*(double *)(pFVar18 + 0x38) - *(double *)(pFVar18 + 8)) +
                       (*(double *)(pFVar18 + 0x40) - *(double *)(pFVar18 + 0x10)) *
                       (*(double *)(pFVar18 + 0x40) - *(double *)(pFVar18 + 0x10));
        auVar31 = sqrtpd(unaff_XMM11,auVar4);
        dVar29 = (((TVector<double>_u_0 *)&pFVar18[0x48].field_0x0)->_s_0).X -
                 (((TVector<double>_u_0 *)&pFVar18[0x18].field_0x0)->_s_0).X;
        dVar28 = auVar31._0_8_ * __real_3f9999999999999a;
        if (dVar28 <= __real_4020000000000000) {
          dVar28 = __real_4020000000000000;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar29 * dVar29 +
                       (*(double *)(pFVar18 + 0x50) - *(double *)(pFVar18 + 0x20)) *
                       (*(double *)(pFVar18 + 0x50) - *(double *)(pFVar18 + 0x20)) +
                       (*(double *)(pFVar18 + 0x58) - *(double *)(pFVar18 + 0x28)) *
                       (*(double *)(pFVar18 + 0x58) - *(double *)(pFVar18 + 0x28));
        auVar31 = sqrtpd(unaff_XMM10,auVar5);
        auVar33._8_8_ = auVar31._8_8_;
        dVar29 = auVar31._0_8_ * __real_3f9999999999999a;
        if (dVar29 <= __real_4020000000000000) {
          dVar29 = __real_4020000000000000;
        }
        auVar33._0_8_ = dVar29;
        if (((dVar28 < 0.0) ||
            ((double)CONCAT44(uVar36,uVar35) <= dVar28 && dVar28 != (double)CONCAT44(uVar36,uVar35))
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RealSegmentsStart >= 0 && RealSegmentsStart <= (FVector::FReal)TNumericLimits<uint32>::Max()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkRenderingComponent.cpp"
                                      ,0x18a,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((dVar29 < 0.0) ||
            ((double)CONCAT44(uVar36,uVar35) <= dVar29 && dVar29 != (double)CONCAT44(uVar36,uVar35))
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RealSegmentsEnd >= 0 && RealSegmentsEnd <= (FVector::FReal)TNumericLimits<uint32>::Max()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkRenderingComponent.cpp"
                                      ,0x18b,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_5f8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
        local_5f8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
        local_5f8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
        local_5f8._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
        FPrimitiveSceneProxy::DrawArc
                  (param_1,(TVector<double> *)pFVar18,(TVector<double> *)(pFVar18 + 0x30),fVar34,
                   (uint)(longlong)dVar28,(FLinearColor *)&local_5f8._s_0,'\0',fVar10,false);
        local_5e8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
        local_5e8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
        local_5e8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
        local_5e8._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
        FPrimitiveSceneProxy::DrawArc
                  (param_1,(TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)(pFVar18 + 0x48),
                   fVar34,(uint)(longlong)dVar29,(FLinearColor *)&local_5e8._s_0,'\0',fVar10,false);
        fVar34 = __real_41f00000;
        dVar29 = (((TVector<double>_u_0 *)&pFVar18[0x30].field_0x0)->_s_0).X;
        dVar28 = (((TVector<double>_u_0 *)&pFVar18->field_0x0)->_s_0).X;
        dVar1 = *(double *)(pFVar18 + 8);
        dVar30 = dVar29 - dVar28;
        dVar25 = *(double *)(pFVar18 + 0x38) - dVar1;
        dVar2 = *(double *)(pFVar18 + 0x10);
        iVar14 = *(int *)&pFVar18[0x60].field_0x0;
        dVar24 = *(double *)(pFVar18 + 0x40) - dVar2;
        auVar27._0_8_ = dVar25 * dVar25 + dVar30 * dVar30 + dVar24 * dVar24;
        auVar27._8_8_ = 0;
        auVar31 = sqrtpd(auVar33,auVar27);
        unaff_XMM10._8_8_ = auVar31._8_8_;
        dVar30 = auVar31._0_8_ * ___real_3ff553f7c0000000;
        if (iVar14 == 0) {
LAB_146df17c2:
          local_598._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_598._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_598._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_498._s_0.Z = dVar30 + dVar2;
          local_598._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
          local_498._s_0.X = dVar28;
          local_498._s_0.Y = dVar1;
          FPrimitiveSceneProxy::DrawArrowHead
                    (param_1,(TVector<double> *)(pFVar18 + 0x30),(TVector<double> *)&local_498._s_0,
                     __real_41f00000,(FLinearColor *)&local_598._s_0,'\0',fVar10,false);
          local_588._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_588._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_588._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_480._s_0.X = (((TVector<double>_u_0 *)&pFVar18[0x18].field_0x0)->_s_0).X;
          local_480._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x20);
          local_480._s_0.Z = dVar30 + *(double *)(pFVar18 + 0x28);
          local_588._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
          FPrimitiveSceneProxy::DrawArrowHead
                    (param_1,(TVector<double> *)(pFVar18 + 0x48),(TVector<double> *)&local_480._s_0,
                     fVar34,(FLinearColor *)&local_588._s_0,'\0',fVar10,false);
          local_578._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_578._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_578._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_468._s_0.X = (((TVector<double>_u_0 *)&pFVar18[0x30].field_0x0)->_s_0).X;
          local_468._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x38);
          local_468._s_0.Z = dVar30 + *(double *)(pFVar18 + 0x40);
          local_578._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
          FPrimitiveSceneProxy::DrawArrowHead
                    (param_1,(TVector<double> *)pFVar18,(TVector<double> *)&local_468._s_0,fVar34,
                     (FLinearColor *)&local_578._s_0,'\0',fVar10,false);
          dVar30 = dVar30 + *(double *)(pFVar18 + 0x58);
          pTVar21 = &local_450;
          local_568._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_568._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_568._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_450._s_0.X = (((TVector<double>_u_0 *)&pFVar18[0x48].field_0x0)->_s_0).X;
          local_450._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x50);
          pFVar16 = &local_568;
          local_568._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
          local_450._s_0.Z = dVar30;
LAB_146df19f2:
          pFVar17 = pFVar18 + 0x18;
        }
        else {
          if (iVar14 != 1) {
            if (iVar14 != 2) goto LAB_146df17c2;
            local_5d8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
            local_5d8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
            local_5d8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
            local_4f8._s_0.Z = dVar30 + *(double *)(pFVar18 + 0x40);
            local_5d8._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
            local_4f8._s_0.X = dVar29;
            local_4f8._s_0.Y = *(double *)(pFVar18 + 0x38);
            FPrimitiveSceneProxy::DrawArrowHead
                      (param_1,(TVector<double> *)pFVar18,(TVector<double> *)&local_4f8._s_0,
                       __real_41f00000,(FLinearColor *)&local_5d8._s_0,'\0',fVar10,false);
            dVar30 = dVar30 + *(double *)(pFVar18 + 0x58);
            pTVar21 = &local_4e0;
            local_5c8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
            local_5c8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
            local_5c8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
            local_4e0._s_0.X = (((TVector<double>_u_0 *)&pFVar18[0x48].field_0x0)->_s_0).X;
            local_4e0._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x50);
            pFVar16 = &local_5c8;
            local_5c8._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
            local_4e0._s_0.Z = dVar30;
            goto LAB_146df19f2;
          }
          local_5b8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_5b8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_5b8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_4c8._s_0.Z = dVar30 + dVar2;
          local_5b8._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
          local_4c8._s_0.X = dVar28;
          local_4c8._s_0.Y = dVar1;
          FPrimitiveSceneProxy::DrawArrowHead
                    (param_1,(TVector<double> *)(pFVar18 + 0x30),(TVector<double> *)&local_4c8._s_0,
                     __real_41f00000,(FLinearColor *)&local_5b8._s_0,'\0',fVar10,false);
          dVar30 = dVar30 + *(double *)(pFVar18 + 0x28);
          pTVar21 = &local_4b0;
          pFVar17 = pFVar18 + 0x48;
          local_5a8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_5a8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_5a8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_4b0._s_0.X = (((TVector<double>_u_0 *)&pFVar18[0x18].field_0x0)->_s_0).X;
          local_4b0._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x20);
          local_5a8._s_0.A = (float)(byte)pFVar18[0x67] * fVar9;
          pFVar16 = &local_5a8;
          local_4b0._s_0.Z = dVar30;
        }
        unaff_XMM11 = ZEXT416((uint)fVar34);
        unaff_XMM10._0_8_ = dVar30;
        FPrimitiveSceneProxy::DrawArrowHead
                  (param_1,(TVector<double> *)pFVar17,(TVector<double> *)&pTVar21->_s_0,fVar34,
                   (FLinearColor *)&pFVar16->_s_0,'\0',fVar10,false);
        if (__real_00000000 <= *(float *)(pFVar18 + 0x6c)) {
          local_1f8._s_0.X = 0.0;
          local_1f8._s_0.Y = 0.0;
          local_1f8._s_0.Z = dVar6;
          local_1e0._s_0.Z = 0.0;
          local_1c8._s_0.Z = 0.0;
          local_1e0._s_0.X = dVar7;
          local_1e0._s_0.Y = dVar8;
          local_1c8._s_0.X = dVar11;
          local_1c8._s_0.Y = dVar12;
          DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x30),
                       (TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_1e0._s_0,
                       (TVector<double> *)&local_1f8._s_0,(double)*(float *)(pFVar18 + 0x68),
                       (double)*(float *)(pFVar18 + 0x6c),10,param_5,'\0');
          local_1b0._s_0.X = 0.0;
          local_1b0._s_0.Y = 0.0;
          local_1b0._s_0.Z = dVar6;
          local_198._s_0.Z = 0.0;
          local_180._s_0.Z = 0.0;
          local_198._s_0.X = dVar7;
          local_198._s_0.Y = dVar8;
          local_180._s_0.X = dVar11;
          local_180._s_0.Y = dVar12;
          DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x48),
                       (TVector<double> *)&local_180._s_0,(TVector<double> *)&local_198._s_0,
                       (TVector<double> *)&local_1b0._s_0,(double)*(float *)(pFVar18 + 0x68),
                       (double)*(float *)(pFVar18 + 0x6c),10,param_5,'\0');
          local_168._s_0.X = 0.0;
          local_168._s_0.Y = 0.0;
          local_168._s_0.Z = dVar6;
          local_150._s_0.Z = 0.0;
          local_138._s_0.Z = 0.0;
          local_150._s_0.X = dVar7;
          local_150._s_0.Y = dVar8;
          local_138._s_0.X = dVar11;
          local_138._s_0.Y = dVar12;
          DrawCylinder(param_1,(TVector<double> *)pFVar18,(TVector<double> *)&local_138._s_0,
                       (TVector<double> *)&local_150._s_0,(TVector<double> *)&local_168._s_0,
                       (double)*(float *)(pFVar18 + 0x68),(double)*(float *)(pFVar18 + 0x6c),10,
                       param_5,'\0');
          local_120._s_0.X = 0.0;
          local_120._s_0.Y = 0.0;
          local_120._s_0.Z = dVar6;
          local_108._s_0.Z = 0.0;
          local_f0[0]._s_0.Z = 0.0;
          local_108._s_0.X = dVar7;
          local_108._s_0.Y = dVar8;
          local_f0[0]._s_0.X = dVar11;
          local_f0[0]._s_0.Y = dVar12;
          DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x18),
                       (TVector<double> *)&local_f0[0]._s_0,(TVector<double> *)&local_108._s_0,
                       (TVector<double> *)&local_120._s_0,(double)*(float *)(pFVar18 + 0x68),
                       (double)*(float *)(pFVar18 + 0x6c),10,param_5,'\0');
          fVar34 = __real_3e800000;
        }
        else {
          iVar14 = param_4->ArrayNum;
          uVar19 = 0;
          fVar34 = __real_3e800000;
          if (0 < iVar14) {
            lVar22 = 0;
            do {
              uVar23 = ~uVar19 >> 0x1f;
              uVar15 = 0;
              if ((int)uVar19 < iVar14) {
                uVar15 = uVar23;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_318._s_0.X = 0.0;
              local_318._s_0.Y = 0.0;
              local_318._s_0.Z = dVar6;
              local_300._s_0.Z = 0.0;
              local_2e8._s_0.Z = 0.0;
              local_300._s_0.X = dVar7;
              local_300._s_0.Y = dVar8;
              local_2e8._s_0.X = dVar11;
              local_2e8._s_0.Y = dVar12;
              DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x30),
                           (TVector<double> *)&local_2e8._s_0,(TVector<double> *)&local_300._s_0,
                           (TVector<double> *)&local_318._s_0,(double)*(float *)(pFVar18 + 0x68),
                           (double)*(float *)((param_4->AllocatorInstance).Data + lVar22),10,param_5
                           ,'\0');
              uVar15 = 0;
              if ((int)uVar19 < param_4->ArrayNum) {
                uVar15 = uVar23;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_2d0._s_0.X = 0.0;
              local_2d0._s_0.Y = 0.0;
              local_2d0._s_0.Z = dVar6;
              local_2b8._s_0.Z = 0.0;
              local_2a0._s_0.Z = 0.0;
              local_2b8._s_0.X = dVar7;
              local_2b8._s_0.Y = dVar8;
              local_2a0._s_0.X = dVar11;
              local_2a0._s_0.Y = dVar12;
              DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x48),
                           (TVector<double> *)&local_2a0._s_0,(TVector<double> *)&local_2b8._s_0,
                           (TVector<double> *)&local_2d0._s_0,(double)*(float *)(pFVar18 + 0x68),
                           (double)*(float *)((param_4->AllocatorInstance).Data + lVar22),10,param_5
                           ,'\0');
              uVar15 = 0;
              if ((int)uVar19 < param_4->ArrayNum) {
                uVar15 = uVar23;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_288._s_0.X = 0.0;
              local_288._s_0.Y = 0.0;
              local_288._s_0.Z = dVar6;
              local_270._s_0.Z = 0.0;
              local_258._s_0.Z = 0.0;
              local_270._s_0.X = dVar7;
              local_270._s_0.Y = dVar8;
              local_258._s_0.X = dVar11;
              local_258._s_0.Y = dVar12;
              DrawCylinder(param_1,(TVector<double> *)pFVar18,(TVector<double> *)&local_258._s_0,
                           (TVector<double> *)&local_270._s_0,(TVector<double> *)&local_288._s_0,
                           (double)*(float *)(pFVar18 + 0x68),
                           (double)*(float *)((param_4->AllocatorInstance).Data + lVar22),10,param_5
                           ,'\0');
              uVar15 = 0;
              if ((int)uVar19 < param_4->ArrayNum) {
                uVar15 = uVar23;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_240._s_0.X = 0.0;
              local_240._s_0.Y = 0.0;
              local_240._s_0.Z = dVar6;
              local_228._s_0.Z = 0.0;
              local_210._s_0.Z = 0.0;
              local_228._s_0.X = dVar7;
              local_228._s_0.Y = dVar8;
              local_210._s_0.X = dVar11;
              local_210._s_0.Y = dVar12;
              DrawCylinder(param_1,(TVector<double> *)(pFVar18 + 0x18),
                           (TVector<double> *)&local_210._s_0,(TVector<double> *)&local_228._s_0,
                           (TVector<double> *)&local_240._s_0,(double)*(float *)(pFVar18 + 0x68),
                           (double)*(float *)((param_4->AllocatorInstance).Data + lVar22),10,param_5
                           ,'\0');
              iVar14 = param_4->ArrayNum;
              uVar19 = uVar19 + 1;
              lVar22 = lVar22 + 4;
              fVar34 = __real_3e800000;
            } while ((int)uVar19 < iVar14);
          }
        }
      }
      uVar20 = uVar20 + 1;
      local_res20 = local_res20 + 0x78;
      uVar35 = (undefined4)__real_41efffffffe00000;
      uVar36 = (undefined4)((ulonglong)__real_41efffffffe00000 >> 0x20);
      iVar14 = param_3->ArrayNum;
    } while ((int)uVar20 < iVar14);
  }
  return;
}

// GetAllocatedSize @ 146e000e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FNavLinkRenderingProxy::GetAllocatedSize(FNavLinkRenderingProxy *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = ((longlong)(this->OffMeshSegmentLinks).ArrayMax * 0x1e +
           (longlong)(this->OffMeshPointLinks).ArrayMax * 0x12 +
          (longlong)*(int *)((longlong)&this->_padding_ + 4)) * 4;
  if (uVar4 != (uVar4 & 0xffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)uVar4;
}

// GetDynamicMeshElements @ 146e025e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNavLinkRenderingProxy::GetDynamicMeshElements
          (FNavLinkRenderingProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  FColoredMaterialRenderProxy *pFVar8;
  byte bVar9;
  UNavigationSystemBase *pUVar10;
  UNavigationSystemBase *pUVar11;
  FObjectPtr_u_0 *this_00;
  UNavigationSystemBase *pUVar12;
  UNavigationSystemBase *pUVar13;
  uint uVar14;
  UNavigationSystemBase *pUVar15;
  uint uVar16;
  float local_68 [2];
  FMaterialRenderProxy *local_60;
  TArray<float,TSizedDefaultAllocator<32>_> local_58 [2];
  
  if (this->LinkOwnerActor == (AActor *)0x0) {
    return;
  }
  pUVar6 = AActor::GetWorld(this->LinkOwnerActor);
  if (pUVar6 == (UWorld *)0x0) {
    return;
  }
  pUVar6 = AActor::GetWorld(this->LinkOwnerActor);
  pUVar10 = (UNavigationSystemBase *)0x0;
  if (pUVar6 == (UWorld *)0x0) {
    local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58[0].ArrayNum = 0;
    local_58[0].ArrayMax = 0;
    uVar4 = 0;
    goto LAB_146e02877;
  }
  pUVar11 = (pUVar6->NavigationSystem).field0_0x0.DebugPtr;
  if (pUVar11 == (UNavigationSystemBase *)0x0) {
LAB_146e0268f:
    pUVar11 = pUVar10;
  }
  else {
    pUVar7 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar11->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar11->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar7->_padding_)) goto LAB_146e0268f;
  }
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  uVar4 = 0;
  if (pUVar11 != (UNavigationSystemBase *)0x0) {
    uVar4 = *(uint *)&pUVar11[5].field_0x20;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (0 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&local_58[0].AllocatorInstance,0,&local_58[0].ArrayMax);
    }
    uVar4 = 0;
    if (0 < *(int *)&pUVar11[5].field_0x20) {
      uVar16 = 1;
      pUVar12 = pUVar10;
      pUVar13 = pUVar10;
      pUVar15 = pUVar10;
      do {
        uVar14 = (uint)pUVar15;
        uVar4 = 0;
        if ((int)uVar14 < *(int *)&pUVar11[5].field_0x20) {
          uVar4 = ~uVar14 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(&pUVar13->field_0x0 + *(longlong *)&pUVar11[5].field_0x18);
        if (this_00->Handle != (UObject *)0x0) {
          pUVar7 = ARecastNavMesh::StaticClass();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
          if ((bVar3) && (pUVar1 = this_00->Handle, pUVar1 != (UObject *)0x0)) {
            bVar9 = pUVar1[0x15].field_0x10 & 1;
            if (bVar9 != 0) {
              pUVar12 = (UNavigationSystemBase *)(ulonglong)((uint)pUVar12 | uVar16);
            }
            local_68[0] = *(float *)&pUVar1[0x23].field_0x8;
            if ((0.0 < local_68[0]) && (bVar9 != 0)) {
              if ((local_58[0].AllocatorInstance.Data <= (FScriptContainerElement *)local_68) &&
                 (((FScriptContainerElement *)local_68 <
                   local_58[0].AllocatorInstance.Data + (longlong)local_58[0].ArrayMax * 4 &&
                  (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar3)))) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar5 = local_58[0].ArrayNum;
              if (local_58[0].ArrayNum == local_58[0].ArrayMax) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_58[0].AllocatorInstance,&local_58[0].ArrayMax);
              }
              local_58[0].ArrayNum = iVar5 + 1;
              *(float *)(local_58[0].AllocatorInstance.Data + (longlong)iVar5 * 4) = local_68[0];
            }
          }
        }
        uVar4 = (uint)pUVar12;
        pUVar15 = (UNavigationSystemBase *)(ulonglong)(uVar14 + 1);
        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        pUVar13 = (UNavigationSystemBase *)&pUVar13->field_0x8;
      } while ((int)(uVar14 + 1) < *(int *)&pUVar11[5].field_0x20);
    }
  }
LAB_146e02877:
  local_60 = (FMaterialRenderProxy *)
             (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ + 0x310))();
  pFVar8 = FMeshElementCollector::
           AllocateOneFrameResource<FColoredMaterialRenderProxy,FMaterialRenderProxy_*,FColor_const_&>
                     (param_4,&local_60,&RadiusColor);
  if (0 < param_1->ArrayNum) {
    do {
      uVar16 = (uint)pUVar10;
      if ((param_3 >> (uVar16 & 0x1f) & 1) != 0) {
        GetLinkMeshes(&this->OffMeshPointLinks,&this->OffMeshSegmentLinks,local_58,
                      (FMaterialRenderProxy *)pFVar8,uVar16,param_4,uVar4);
      }
      pUVar10 = (UNavigationSystemBase *)(ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < param_1->ArrayNum);
  }
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return;
}

// GetLinkMeshes @ 146e05fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FNavLinkRenderingProxy::GetLinkMeshes
          (TArray<FNavLinkRenderingProxy::FNavLinkDrawing,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing,TSizedDefaultAllocator<32>_>
          *param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3,FMaterialRenderProxy *param_4,
          int param_5,FMeshElementCollector *param_6,uint param_7)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FPrimitiveDrawInterface *pFVar15;
  FLinearColor_u_0 *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  TVector<double>_u_0 *pTVar21;
  uint uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM11 [16];
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  longlong local_res18;
  float local_670 [2];
  longlong local_668;
  longlong local_660;
  FLinearColor_u_0 local_658;
  FLinearColor_u_0 local_648;
  FLinearColor_u_0 local_638;
  FLinearColor_u_0 local_628;
  FLinearColor_u_0 local_618;
  FLinearColor_u_0 local_608;
  FLinearColor_u_0 local_5f8;
  FLinearColor_u_0 local_5e8;
  FLinearColor_u_0 local_5d8;
  FLinearColor_u_0 local_5c8;
  FLinearColor_u_0 local_5b8;
  FLinearColor_u_0 local_5a8;
  FLinearColor_u_0 local_598;
  FLinearColor_u_0 local_588;
  FLinearColor_u_0 local_578;
  TVector<double>_u_0 local_568;
  TVector<double>_u_0 local_550;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_520;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4f0;
  TVector<double>_u_0 local_4d8;
  TVector<double>_u_0 local_4c0;
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_490;
  TVector<double>_u_0 local_478;
  TVector<double>_u_0 local_460;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_430;
  TVector<double>_u_0 local_418;
  TVector<double>_u_0 local_400;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3d0;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_3a0;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_370;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_310;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2e0;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2b0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100 [3];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  if (param_3->ArrayNum == 0) {
    local_670[0] = FNavigationSystem::FallbackAgentHeight * __real_3f000000;
    pFVar18 = (param_3->AllocatorInstance).Data;
    if (((pFVar18 <= (FScriptContainerElement *)local_670) &&
        ((FScriptContainerElement *)local_670 < pFVar18 + (longlong)param_3->ArrayMax * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar13 = param_3->ArrayNum;
    if (iVar13 == param_3->ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar13 + 1;
    *(float *)((param_3->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_670[0];
  }
  pFVar15 = FMeshElementCollector::GetPDI(param_6,param_5);
  dVar30 = __real_3fa47ae14ccccccd;
  dVar11 = _UNK_150689518;
  dVar10 = ___xmm_00000000000000003ff0000000000000;
  fVar8 = __real_3b808081;
  dVar7 = _UNK_15061cbc8;
  dVar6 = ___xmm_3ff00000000000000000000000000000;
  dVar5 = __real_3ff0000000000000;
  iVar13 = param_1->ArrayNum;
  uVar20 = 0;
  uVar36 = (undefined4)__real_41efffffffe00000;
  uVar37 = (undefined4)((ulonglong)__real_41efffffffe00000 >> 0x20);
  if (0 < iVar13) {
    unaff_XMM11 = ZEXT416(__real_3ecccccd);
    local_660 = 0;
    do {
      lVar23 = local_660;
      uVar19 = 0;
      if ((int)uVar20 < iVar13) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (param_1->AllocatorInstance).Data + lVar23;
      if ((*(uint *)(pFVar18 + 0x40) & param_7) != 0) {
        dVar29 = *(double *)&pFVar18[0x18].field_0x0 - *(double *)&pFVar18->field_0x0;
        auVar32._8_8_ = 0;
        auVar32._0_8_ =
             dVar29 * dVar29 +
             (*(double *)(pFVar18 + 0x20) - *(double *)(pFVar18 + 8)) *
             (*(double *)(pFVar18 + 0x20) - *(double *)(pFVar18 + 8)) +
             (*(double *)(pFVar18 + 0x28) - *(double *)(pFVar18 + 0x10)) *
             (*(double *)(pFVar18 + 0x28) - *(double *)(pFVar18 + 0x10));
        auVar32 = sqrtpd(unaff_XMM10,auVar32);
        auVar33._8_8_ = auVar32._8_8_;
        dVar29 = auVar32._0_8_ * dVar30;
        if (dVar29 <= __real_4020000000000000) {
          dVar29 = __real_4020000000000000;
        }
        auVar33._0_8_ = dVar29;
        if (((dVar29 < 0.0) ||
            ((double)CONCAT44(uVar37,uVar36) <= dVar29 && dVar29 != (double)CONCAT44(uVar37,uVar36))
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RealSegments >= 0 && RealSegments <= (FVector::FReal)TNumericLimits<uint32>::Max()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkRenderingComponent.cpp"
                                      ,0xe9,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_658._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
        local_658._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
        local_658._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
        local_658._s_0.A = (float)(byte)pFVar18[0x37] * fVar8;
        FPrimitiveSceneProxy::DrawArc
                  (pFVar15,(TVector<double> *)pFVar18,(TVector<double> *)(pFVar18 + 0x18),
                   unaff_XMM11._0_4_,(uint)(longlong)dVar29,(FLinearColor *)&local_658._s_0,'\0',
                   __real_40600000,false);
        fVar35 = __real_40600000;
        fVar9 = __real_41f00000;
        dVar29 = *(double *)&pFVar18->field_0x0;
        dVar1 = *(double *)(pFVar18 + 8);
        dVar25 = *(double *)&pFVar18[0x18].field_0x0 - dVar29;
        dVar26 = *(double *)(pFVar18 + 0x20) - dVar1;
        dVar31 = *(double *)(pFVar18 + 0x10);
        iVar13 = *(int *)&pFVar18[0x30].field_0x0;
        dVar24 = *(double *)(pFVar18 + 0x28) - dVar31;
        auVar27._0_8_ = dVar26 * dVar26 + dVar25 * dVar25 + dVar24 * dVar24;
        auVar27._8_8_ = 0;
        auVar32 = sqrtpd(auVar33,auVar27);
        unaff_XMM10._8_8_ = auVar32._8_8_;
        unaff_XMM10._0_8_ = auVar32._0_8_ * ___real_3ff553f7c0000000;
        pFVar17 = pFVar18;
        if (iVar13 == 0) {
LAB_146e06465:
          local_538._s_0.Z = dVar31 + unaff_XMM10._0_8_;
          local_628._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_628._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_628._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          local_628._s_0.A = (float)(byte)pFVar18[0x37] * fVar8;
          local_538._s_0.X = dVar29;
          local_538._s_0.Y = dVar1;
          FPrimitiveSceneProxy::DrawArrowHead
                    (pFVar15,(TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)&local_538._s_0,
                     __real_41f00000,(FLinearColor *)&local_628._s_0,'\0',__real_40600000,false);
          unaff_XMM10._0_8_ = unaff_XMM10._0_8_ + *(double *)(pFVar18 + 0x28);
          pTVar21 = &local_520;
          local_618._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_618._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_618._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          local_520._s_0.X = (double)*(undefined8 *)&pFVar18[0x18].field_0x0;
          local_520._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x20);
          pFVar16 = &local_618;
          local_618._s_0.A = (float)(byte)pFVar18[0x37] * fVar8;
          local_520._s_0.Z = unaff_XMM10._0_8_;
        }
        else if (iVar13 == 1) {
          local_550._s_0.Z = dVar31 + unaff_XMM10._0_8_;
          pTVar21 = &local_550;
          local_638._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_638._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_638._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          pFVar16 = &local_638;
          local_638._s_0.A = (float)(byte)pFVar18[0x37] * fVar8;
          pFVar17 = pFVar18 + 0x18;
          local_550._s_0.X = dVar29;
          local_550._s_0.Y = dVar1;
        }
        else {
          if (iVar13 != 2) goto LAB_146e06465;
          local_568._s_0.Z = *(double *)(pFVar18 + 0x28) + unaff_XMM10._0_8_;
          pTVar21 = &local_568;
          local_648._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x36]];
          local_648._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x35]];
          local_648._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x34]];
          pFVar16 = &local_648;
          local_648._s_0.A = (float)(byte)pFVar18[0x37] * fVar8;
          local_568._s_0.X = *(double *)&pFVar18[0x18].field_0x0;
          local_568._s_0.Y = *(double *)(pFVar18 + 0x20);
        }
        FPrimitiveSceneProxy::DrawArrowHead
                  (pFVar15,(TVector<double> *)pFVar17,(TVector<double> *)&pTVar21->_s_0,fVar9,
                   (FLinearColor *)&pFVar16->_s_0,'\0',fVar35,false);
        if (__real_00000000 <= *(float *)(pFVar18 + 0x3c)) {
          local_3b8._s_0.X = 0.0;
          local_3b8._s_0.Y = 0.0;
          local_3b8._s_0.Z = dVar5;
          local_3a0._s_0.Z = 0.0;
          local_388._s_0.Z = 0.0;
          local_3a0._s_0.X = dVar6;
          local_3a0._s_0.Y = dVar7;
          local_388._s_0.X = dVar10;
          local_388._s_0.Y = dVar11;
          GetCylinderMesh((TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)&local_388._s_0,
                          (TVector<double> *)&local_3a0._s_0,(TVector<double> *)&local_3b8._s_0,
                          (double)*(float *)(pFVar18 + 0x38),(double)*(float *)(pFVar18 + 0x3c),10,
                          param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
          local_370._s_0.X = 0.0;
          local_370._s_0.Y = 0.0;
          local_370._s_0.Z = dVar5;
          local_358._s_0.Z = 0.0;
          local_340._s_0.Z = 0.0;
          local_358._s_0.X = dVar6;
          local_358._s_0.Y = dVar7;
          local_340._s_0.X = dVar10;
          local_340._s_0.Y = dVar11;
          GetCylinderMesh((TVector<double> *)pFVar18,(TVector<double> *)&local_340._s_0,
                          (TVector<double> *)&local_358._s_0,(TVector<double> *)&local_370._s_0,
                          (double)*(float *)(pFVar18 + 0x38),(double)*(float *)(pFVar18 + 0x3c),10,
                          param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
        }
        else {
          iVar13 = param_3->ArrayNum;
          uVar19 = 0;
          if (0 < iVar13) {
            local_668 = 0;
            do {
              uVar14 = 0;
              if ((int)uVar19 < iVar13) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_448._s_0.X = 0.0;
              local_448._s_0.Y = 0.0;
              local_448._s_0.Z = dVar5;
              local_430._s_0.Z = 0.0;
              local_418._s_0.Z = 0.0;
              local_430._s_0.X = dVar6;
              local_430._s_0.Y = dVar7;
              local_418._s_0.X = dVar10;
              local_418._s_0.Y = dVar11;
              GetCylinderMesh((TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)&local_418._s_0
                              ,(TVector<double> *)&local_430._s_0,(TVector<double> *)&local_448._s_0
                              ,(double)*(float *)(pFVar18 + 0x38),
                              (double)*(float *)((param_3->AllocatorInstance).Data + local_668),10,
                              param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
              uVar14 = 0;
              if ((int)uVar19 < param_3->ArrayNum) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar23 = local_668;
              local_400._s_0.X = 0.0;
              local_400._s_0.Y = 0.0;
              local_400._s_0.Z = dVar5;
              local_3e8._s_0.Z = 0.0;
              local_3d0._s_0.Z = 0.0;
              local_3e8._s_0.X = dVar6;
              local_3e8._s_0.Y = dVar7;
              local_3d0._s_0.X = dVar10;
              local_3d0._s_0.Y = dVar11;
              GetCylinderMesh((TVector<double> *)pFVar18,(TVector<double> *)&local_3d0._s_0,
                              (TVector<double> *)&local_3e8._s_0,(TVector<double> *)&local_400._s_0,
                              (double)*(float *)(pFVar18 + 0x38),
                              (double)*(float *)((param_3->AllocatorInstance).Data + local_668),10,
                              param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
              iVar13 = param_3->ArrayNum;
              local_668 = lVar23 + 4;
              uVar19 = uVar19 + 1;
            } while ((int)uVar19 < iVar13);
          }
        }
        unaff_XMM11 = ZEXT416(__real_3ecccccd);
        uVar36 = (undefined4)__real_41efffffffe00000;
        uVar37 = (undefined4)((ulonglong)__real_41efffffffe00000 >> 0x20);
      }
      uVar20 = uVar20 + 1;
      iVar13 = param_1->ArrayNum;
      local_660 = local_660 + 0x48;
    } while ((int)uVar20 < iVar13);
  }
  fVar9 = __real_40600000;
  uVar20 = 0;
  iVar13 = param_2->ArrayNum;
  if (0 < iVar13) {
    local_res18 = 0;
    fVar35 = __real_3e800000;
    do {
      uVar19 = 0;
      if ((int)uVar20 < iVar13) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = (param_2->AllocatorInstance).Data + local_res18;
      if ((*(uint *)(pFVar18 + 0x70) & param_7) != 0) {
        dVar30 = *(double *)&pFVar18[0x30].field_0x0 - *(double *)&pFVar18->field_0x0;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar30 * dVar30 +
                       (*(double *)(pFVar18 + 0x38) - *(double *)(pFVar18 + 8)) *
                       (*(double *)(pFVar18 + 0x38) - *(double *)(pFVar18 + 8)) +
                       (*(double *)(pFVar18 + 0x40) - *(double *)(pFVar18 + 0x10)) *
                       (*(double *)(pFVar18 + 0x40) - *(double *)(pFVar18 + 0x10));
        auVar32 = sqrtpd(unaff_XMM11,auVar3);
        dVar30 = *(double *)&pFVar18[0x48].field_0x0 - *(double *)&pFVar18[0x18].field_0x0;
        dVar29 = auVar32._0_8_ * __real_3f9999999999999a;
        if (dVar29 <= __real_4020000000000000) {
          dVar29 = __real_4020000000000000;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = dVar30 * dVar30 +
                       (*(double *)(pFVar18 + 0x50) - *(double *)(pFVar18 + 0x20)) *
                       (*(double *)(pFVar18 + 0x50) - *(double *)(pFVar18 + 0x20)) +
                       (*(double *)(pFVar18 + 0x58) - *(double *)(pFVar18 + 0x28)) *
                       (*(double *)(pFVar18 + 0x58) - *(double *)(pFVar18 + 0x28));
        auVar32 = sqrtpd(unaff_XMM10,auVar4);
        auVar34._8_8_ = auVar32._8_8_;
        dVar30 = auVar32._0_8_ * __real_3f9999999999999a;
        if (dVar30 <= __real_4020000000000000) {
          dVar30 = __real_4020000000000000;
        }
        auVar34._0_8_ = dVar30;
        if (((dVar29 < 0.0) ||
            ((double)CONCAT44(uVar37,uVar36) <= dVar29 && dVar29 != (double)CONCAT44(uVar37,uVar36))
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RealSegmentsStart >= 0 && RealSegmentsStart <= (FVector::FReal)TNumericLimits<uint32>::Max()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkRenderingComponent.cpp"
                                      ,0x117,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((dVar30 < 0.0) ||
            ((double)CONCAT44(uVar37,uVar36) <= dVar30 && dVar30 != (double)CONCAT44(uVar37,uVar36))
            ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RealSegmentsEnd >= 0 && RealSegmentsEnd <= (FVector::FReal)TNumericLimits<uint32>::Max()"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavLinkRenderingComponent.cpp"
                                      ,0x118,L""), bVar12)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_608._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
        local_608._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
        local_608._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
        local_608._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
        FPrimitiveSceneProxy::DrawArc
                  (pFVar15,(TVector<double> *)pFVar18,(TVector<double> *)(pFVar18 + 0x30),fVar35,
                   (uint)(longlong)dVar29,(FLinearColor *)&local_608._s_0,'\0',fVar9,false);
        local_5f8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
        local_5f8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
        local_5f8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
        local_5f8._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
        FPrimitiveSceneProxy::DrawArc
                  (pFVar15,(TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)(pFVar18 + 0x48),
                   fVar35,(uint)(longlong)dVar30,(FLinearColor *)&local_5f8._s_0,'\0',fVar9,false);
        fVar35 = __real_41f00000;
        dVar30 = *(double *)&pFVar18->field_0x0;
        dVar29 = *(double *)(pFVar18 + 8);
        dVar31 = *(double *)&pFVar18[0x30].field_0x0 - dVar30;
        dVar24 = *(double *)(pFVar18 + 0x38) - dVar29;
        dVar1 = *(double *)(pFVar18 + 0x10);
        iVar13 = *(int *)&pFVar18[0x60].field_0x0;
        dVar25 = *(double *)(pFVar18 + 0x40) - dVar1;
        auVar28._0_8_ = dVar24 * dVar24 + dVar31 * dVar31 + dVar25 * dVar25;
        auVar28._8_8_ = 0;
        auVar32 = sqrtpd(auVar34,auVar28);
        unaff_XMM10._8_8_ = auVar32._8_8_;
        dVar31 = auVar32._0_8_ * ___real_3ff553f7c0000000;
        if (iVar13 == 0) {
LAB_146e06e5a:
          local_5a8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_5a8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_5a8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_4a8._s_0.Z = dVar31 + dVar1;
          local_5a8._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
          local_4a8._s_0.X = dVar30;
          local_4a8._s_0.Y = dVar29;
          FPrimitiveSceneProxy::DrawArrowHead
                    (pFVar15,(TVector<double> *)(pFVar18 + 0x30),(TVector<double> *)&local_4a8._s_0,
                     __real_41f00000,(FLinearColor *)&local_5a8._s_0,'\0',fVar9,false);
          local_598._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_598._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_598._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_490._s_0.X = (double)*(undefined8 *)&pFVar18[0x18].field_0x0;
          local_490._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x20);
          local_490._s_0.Z = dVar31 + *(double *)(pFVar18 + 0x28);
          local_598._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
          FPrimitiveSceneProxy::DrawArrowHead
                    (pFVar15,(TVector<double> *)(pFVar18 + 0x48),(TVector<double> *)&local_490._s_0,
                     fVar35,(FLinearColor *)&local_598._s_0,'\0',fVar9,false);
          local_588._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_588._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_588._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_478._s_0.X = (double)*(undefined8 *)&pFVar18[0x30].field_0x0;
          local_478._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x38);
          local_478._s_0.Z = dVar31 + *(double *)(pFVar18 + 0x40);
          local_588._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
          FPrimitiveSceneProxy::DrawArrowHead
                    (pFVar15,(TVector<double> *)pFVar18,(TVector<double> *)&local_478._s_0,fVar35,
                     (FLinearColor *)&local_588._s_0,'\0',fVar9,false);
          dVar31 = dVar31 + *(double *)(pFVar18 + 0x58);
          pTVar21 = &local_460;
          local_578._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_578._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_578._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_460._s_0.X = (double)*(undefined8 *)&pFVar18[0x48].field_0x0;
          local_460._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x50);
          pFVar16 = &local_578;
          local_578._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
          local_460._s_0.Z = dVar31;
LAB_146e0708c:
          pFVar17 = pFVar18 + 0x18;
        }
        else {
          if (iVar13 != 1) {
            if (iVar13 != 2) goto LAB_146e06e5a;
            local_5e8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
            local_5e8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
            local_5e8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
            local_508._s_0.Z = dVar31 + *(double *)(pFVar18 + 0x40);
            local_5e8._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
            local_508._s_0.X = *(double *)&pFVar18[0x30].field_0x0;
            local_508._s_0.Y = *(double *)(pFVar18 + 0x38);
            FPrimitiveSceneProxy::DrawArrowHead
                      (pFVar15,(TVector<double> *)pFVar18,(TVector<double> *)&local_508._s_0,
                       __real_41f00000,(FLinearColor *)&local_5e8._s_0,'\0',fVar9,false);
            dVar31 = dVar31 + *(double *)(pFVar18 + 0x58);
            pTVar21 = &local_4f0;
            local_5d8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
            local_5d8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
            local_5d8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
            local_4f0._s_0.X = (double)*(undefined8 *)&pFVar18[0x48].field_0x0;
            local_4f0._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x50);
            local_5d8._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
            pFVar16 = &local_5d8;
            local_4f0._s_0.Z = dVar31;
            goto LAB_146e0708c;
          }
          local_5c8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_5c8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_5c8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_4d8._s_0.Z = dVar31 + dVar1;
          local_5c8._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
          local_4d8._s_0.X = dVar30;
          local_4d8._s_0.Y = dVar29;
          FPrimitiveSceneProxy::DrawArrowHead
                    (pFVar15,(TVector<double> *)(pFVar18 + 0x30),(TVector<double> *)&local_4d8._s_0,
                     __real_41f00000,(FLinearColor *)&local_5c8._s_0,'\0',fVar9,false);
          dVar31 = dVar31 + *(double *)(pFVar18 + 0x28);
          pTVar21 = &local_4c0;
          pFVar17 = pFVar18 + 0x48;
          local_5b8._s_0.R = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x66]];
          local_5b8._s_0.G = FLinearColor::sRGBToLinearTable[(byte)pFVar18[0x65]];
          local_5b8._s_0.B = FLinearColor::sRGBToLinearTable[(byte)pFVar18[100]];
          local_4c0._s_0.X = (double)*(undefined8 *)&pFVar18[0x18].field_0x0;
          local_4c0._s_0.Y = (double)*(undefined8 *)(pFVar18 + 0x20);
          pFVar16 = &local_5b8;
          local_5b8._s_0.A = (float)(byte)pFVar18[0x67] * fVar8;
          local_4c0._s_0.Z = dVar31;
        }
        unaff_XMM11 = ZEXT416((uint)fVar35);
        unaff_XMM10._0_8_ = dVar31;
        FPrimitiveSceneProxy::DrawArrowHead
                  (pFVar15,(TVector<double> *)pFVar17,(TVector<double> *)&pTVar21->_s_0,fVar35,
                   (FLinearColor *)&pFVar16->_s_0,'\0',fVar9,false);
        if (__real_00000000 <= *(float *)(pFVar18 + 0x6c)) {
          local_208._s_0.X = 0.0;
          local_208._s_0.Y = 0.0;
          local_208._s_0.Z = dVar5;
          local_1f0._s_0.Z = 0.0;
          local_1d8._s_0.Z = 0.0;
          local_1f0._s_0.X = dVar6;
          local_1f0._s_0.Y = dVar7;
          local_1d8._s_0.X = dVar10;
          local_1d8._s_0.Y = dVar11;
          GetCylinderMesh((TVector<double> *)(pFVar18 + 0x30),(TVector<double> *)&local_1d8._s_0,
                          (TVector<double> *)&local_1f0._s_0,(TVector<double> *)&local_208._s_0,
                          (double)*(float *)(pFVar18 + 0x68),(double)*(float *)(pFVar18 + 0x6c),10,
                          param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
          local_1c0._s_0.X = 0.0;
          local_1c0._s_0.Y = 0.0;
          local_1c0._s_0.Z = dVar5;
          local_1a8._s_0.Z = 0.0;
          local_190._s_0.Z = 0.0;
          local_1a8._s_0.X = dVar6;
          local_1a8._s_0.Y = dVar7;
          local_190._s_0.X = dVar10;
          local_190._s_0.Y = dVar11;
          GetCylinderMesh((TVector<double> *)(pFVar18 + 0x48),(TVector<double> *)&local_190._s_0,
                          (TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_1c0._s_0,
                          (double)*(float *)(pFVar18 + 0x68),(double)*(float *)(pFVar18 + 0x6c),10,
                          param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
          local_178._s_0.Z = dVar5;
          local_178._s_0.X = 0.0;
          local_178._s_0.Y = 0.0;
          local_160._s_0.Z = 0.0;
          local_148._s_0.Z = 0.0;
          local_160._s_0.X = dVar6;
          local_160._s_0.Y = dVar7;
          local_148._s_0.X = dVar10;
          local_148._s_0.Y = dVar11;
          GetCylinderMesh((TVector<double> *)pFVar18,(TVector<double> *)&local_148._s_0,
                          (TVector<double> *)&local_160._s_0,(TVector<double> *)&local_178._s_0,
                          (double)*(float *)(pFVar18 + 0x68),(double)*(float *)(pFVar18 + 0x6c),10,
                          param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
          local_130._s_0.Z = dVar5;
          local_130._s_0.X = 0.0;
          local_130._s_0.Y = 0.0;
          local_118._s_0.Z = 0.0;
          local_100[0]._s_0.Z = 0.0;
          local_118._s_0.X = dVar6;
          local_118._s_0.Y = dVar7;
          local_100[0]._s_0.X = dVar10;
          local_100[0]._s_0.Y = dVar11;
          GetCylinderMesh((TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)&local_100[0]._s_0,
                          (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_130._s_0,
                          (double)*(float *)(pFVar18 + 0x68),(double)*(float *)(pFVar18 + 0x6c),10,
                          param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
          fVar35 = __real_3e800000;
        }
        else {
          iVar13 = param_3->ArrayNum;
          uVar19 = 0;
          fVar35 = __real_3e800000;
          if (0 < iVar13) {
            lVar23 = 0;
            do {
              uVar22 = ~uVar19 >> 0x1f;
              uVar14 = 0;
              if ((int)uVar19 < iVar13) {
                uVar14 = uVar22;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_328._s_0.X = 0.0;
              local_328._s_0.Y = 0.0;
              local_328._s_0.Z = dVar5;
              local_310._s_0.Z = 0.0;
              local_2f8._s_0.Z = 0.0;
              local_310._s_0.X = dVar6;
              local_310._s_0.Y = dVar7;
              local_2f8._s_0.X = dVar10;
              local_2f8._s_0.Y = dVar11;
              GetCylinderMesh((TVector<double> *)(pFVar18 + 0x30),(TVector<double> *)&local_2f8._s_0
                              ,(TVector<double> *)&local_310._s_0,(TVector<double> *)&local_328._s_0
                              ,(double)*(float *)(pFVar18 + 0x68),
                              (double)*(float *)((param_3->AllocatorInstance).Data + lVar23),10,
                              param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
              uVar14 = 0;
              if ((int)uVar19 < param_3->ArrayNum) {
                uVar14 = uVar22;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_2e0._s_0.X = 0.0;
              local_2e0._s_0.Y = 0.0;
              local_2e0._s_0.Z = dVar5;
              local_2c8._s_0.Z = 0.0;
              local_2b0._s_0.Z = 0.0;
              local_2c8._s_0.X = dVar6;
              local_2c8._s_0.Y = dVar7;
              local_2b0._s_0.X = dVar10;
              local_2b0._s_0.Y = dVar11;
              GetCylinderMesh((TVector<double> *)(pFVar18 + 0x48),(TVector<double> *)&local_2b0._s_0
                              ,(TVector<double> *)&local_2c8._s_0,(TVector<double> *)&local_2e0._s_0
                              ,(double)*(float *)(pFVar18 + 0x68),
                              (double)*(float *)((param_3->AllocatorInstance).Data + lVar23),10,
                              param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
              uVar14 = 0;
              if ((int)uVar19 < param_3->ArrayNum) {
                uVar14 = uVar22;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_298._s_0.X = 0.0;
              local_298._s_0.Y = 0.0;
              local_298._s_0.Z = dVar5;
              local_280._s_0.Z = 0.0;
              local_268._s_0.Z = 0.0;
              local_280._s_0.X = dVar6;
              local_280._s_0.Y = dVar7;
              local_268._s_0.X = dVar10;
              local_268._s_0.Y = dVar11;
              GetCylinderMesh((TVector<double> *)pFVar18,(TVector<double> *)&local_268._s_0,
                              (TVector<double> *)&local_280._s_0,(TVector<double> *)&local_298._s_0,
                              (double)*(float *)(pFVar18 + 0x68),
                              (double)*(float *)((param_3->AllocatorInstance).Data + lVar23),10,
                              param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
              uVar14 = 0;
              if ((int)uVar19 < param_3->ArrayNum) {
                uVar14 = uVar22;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_250._s_0.X = 0.0;
              local_250._s_0.Y = 0.0;
              local_250._s_0.Z = dVar5;
              local_238._s_0.Z = 0.0;
              local_220._s_0.Z = 0.0;
              local_238._s_0.X = dVar6;
              local_238._s_0.Y = dVar7;
              local_220._s_0.X = dVar10;
              local_220._s_0.Y = dVar11;
              GetCylinderMesh((TVector<double> *)(pFVar18 + 0x18),(TVector<double> *)&local_220._s_0
                              ,(TVector<double> *)&local_238._s_0,(TVector<double> *)&local_250._s_0
                              ,(double)*(float *)(pFVar18 + 0x68),
                              (double)*(float *)((param_3->AllocatorInstance).Data + lVar23),10,
                              param_4,'\0',param_5,param_6,(HHitProxy *)0x0);
              iVar13 = param_3->ArrayNum;
              uVar19 = uVar19 + 1;
              lVar23 = lVar23 + 4;
              fVar35 = __real_3e800000;
            } while ((int)uVar19 < iVar13);
          }
        }
      }
      uVar20 = uVar20 + 1;
      local_res18 = local_res18 + 0x78;
      uVar36 = (undefined4)__real_41efffffffe00000;
      uVar37 = (undefined4)((ulonglong)__real_41efffffffe00000 >> 0x20);
      iVar13 = param_2->ArrayNum;
    } while ((int)uVar20 < iVar13);
  }
  return;
}

// GetMemoryFootprint @ 146e078f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FNavLinkRenderingProxy::GetMemoryFootprint(FNavLinkRenderingProxy *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = ((longlong)(this->OffMeshSegmentLinks).ArrayMax * 0x1e +
           (longlong)(this->OffMeshPointLinks).ArrayMax * 0x12 +
          (longlong)*(int *)((longlong)&this->_padding_ + 4)) * 4;
  if (uVar4 != (uVar4 & 0xffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (int)uVar4 + 0x2b0;
}

// GetTypeHash @ 146e13980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __thiscall FNavLinkRenderingProxy::GetTypeHash(FNavLinkRenderingProxy *this)

{
  return 0x1551c0900;
}

// GetViewRelevance @ 146e13af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNavLinkRenderingProxy::GetViewRelevance
          (FNavLinkRenderingProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  if ((((bVar2) && ((this->_padding_ & 0x600) != 0)) && (param_1 != (FSceneView *)0x0)) &&
     ((param_1->Family != (FSceneViewFamily *)0x0 &&
      ((param_1->Family->EngineShowFlags).Navigation != 0)))) {
    uVar3 = 4;
  }
  else {
    uVar3 = 0;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | uVar3 | 2;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0x7f;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | bVar2 << 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | (*(byte *)((longlong)&__return_storage_ptr__->_padding_ + 5) & 0xfc) << 5;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3;
  bVar2 = FPrimitiveSceneProxy::UseEditorCompositing((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bEditorPrimitiveRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 8;
  return __return_storage_ptr__;
}

// StorePointLinks @ 146e2a820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNavLinkRenderingProxy::StorePointLinks
          (FNavLinkRenderingProxy *this,TTransform<double> *param_1,
          TArray<FNavigationLink,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FNavLinkRenderingProxy::FNavLinkDrawing,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FNavigationLink *pFVar5;
  FNavigationLink *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  iVar3 = (this->OffMeshPointLinks).ArrayNum;
  pTVar2 = &this->OffMeshPointLinks;
  uVar7 = param_2->ArrayNum + iVar3;
  if (-1 < (int)uVar7) {
    piVar1 = &(this->OffMeshPointLinks).ArrayMax;
    if (*piVar1 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,uVar7,&pTVar2->AllocatorInstance,iVar3,piVar1);
    }
    iVar3 = param_2->ArrayNum;
    pFVar6 = (FNavigationLink *)(param_2->AllocatorInstance).Data;
    pFVar5 = pFVar6 + iVar3;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        `TCheckedPointerIterator<FNavigationLink_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar5) break;
      iVar4 = (this->OffMeshPointLinks).ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->OffMeshPointLinks).ArrayNum = iVar4 + 1;
      FNavLinkDrawing::FNavLinkDrawing
                ((FNavLinkDrawing *)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 0x48),
                 param_1,pFVar6);
      pFVar6 = pFVar6 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

// StoreSegmentLinks @ 146e2a910

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNavLinkRenderingProxy::StoreSegmentLinks
          (FNavLinkRenderingProxy *this,TTransform<double> *param_1,
          TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FNavLinkRenderingProxy::FNavLinkSegmentDrawing,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FNavigationSegmentLink *pFVar5;
  FNavigationSegmentLink *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  
  iVar3 = (this->OffMeshSegmentLinks).ArrayNum;
  pTVar2 = &this->OffMeshSegmentLinks;
  uVar7 = param_2->ArrayNum + iVar3;
  if (-1 < (int)uVar7) {
    piVar1 = &(this->OffMeshSegmentLinks).ArrayMax;
    if (*piVar1 < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,uVar7,&pTVar2->AllocatorInstance,iVar3,piVar1);
    }
    iVar3 = param_2->ArrayNum;
    pFVar6 = (FNavigationSegmentLink *)(param_2->AllocatorInstance).Data;
    pFVar5 = pFVar6 + iVar3;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        `TCheckedPointerIterator<FNavigationSegmentLink_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar6 == pFVar5) break;
      iVar4 = (this->OffMeshSegmentLinks).ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->OffMeshSegmentLinks).ArrayNum = iVar4 + 1;
      FNavLinkSegmentDrawing::FNavLinkSegmentDrawing
                ((FNavLinkSegmentDrawing *)
                 ((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 0x78),param_1,pFVar6);
      pFVar6 = pFVar6 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
}

