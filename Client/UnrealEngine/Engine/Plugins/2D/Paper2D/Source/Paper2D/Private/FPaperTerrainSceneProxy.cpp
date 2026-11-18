// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 2

// FPaperTerrainSceneProxy @ 14ace9470

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPaperTerrainSceneProxy * __thiscall
FPaperTerrainSceneProxy::FPaperTerrainSceneProxy
          (FPaperTerrainSceneProxy *this,UPaperTerrainComponent *param_1,
          TArray<FPaperTerrainSpriteGeometry,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double *pdVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  FPaperTerrainSceneProxy *pFVar19;
  double *pdVar20;
  UMaterial *this_00;
  FMaterialRelevance FVar21;
  uint uVar22;
  undefined8 *puVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  double *pdVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  float fVar35;
  undefined1 local_res20 [8];
  undefined1 local_e8;
  undefined1 local_e7 [3];
  uint local_e4;
  uint local_e0;
  double *local_d8;
  float local_d0;
  float fStack_cc;
  longlong local_c8;
  undefined8 *local_c0;
  FScriptContainerElement *local_b8;
  double *local_b0;
  FScriptContainerElement *local_a8;
  TVector<float>_u_0 local_a0;
  TVector<float>_u_0 local_94;
  undefined1 local_88 [80];
  
  FPaperRenderSceneProxy::FPaperRenderSceneProxy
            ((FPaperRenderSceneProxy *)this,(UPrimitiveComponent *)param_1);
  *(undefined ***)this = &___7FPaperTerrainSceneProxy__6B_;
  iVar17 = param_2->ArrayNum;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x48,8,iVar17,(ForAnyElementType *)&this->field_0x280,
                      (int *)&this->field_0x288,(int *)&this->field_0x28c);
  DefaultConstructItems<FSpriteRenderSection,int>
            ((void *)(*(longlong *)&this->field_0x280 + (longlong)iVar15 * 0x48),iVar17);
  fVar12 = _UNK_15104007c;
  fVar11 = _UNK_151040078;
  fVar10 = _UNK_151040074;
  fVar9 = ___xmm_3c0102043c0102043c0102043c010204;
  local_e0 = param_2->ArrayNum;
  uVar18 = (ulonglong)(int)local_e0;
  pFVar24 = (param_2->AllocatorInstance).Data;
  puVar23 = *(undefined8 **)&this->field_0x280;
  local_a8 = pFVar24 + uVar18 * 0x20;
  do {
    pFVar26 = local_a8;
    local_c0 = puVar23;
    local_b8 = pFVar24;
    if (param_2->ArrayNum != (int)uVar18) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPaperTerrainSpriteGeometry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar24 == pFVar26) {
      iVar17 = param_2->ArrayNum;
      pFVar24 = (param_2->AllocatorInstance).Data;
      pFVar26 = pFVar24 + (longlong)iVar17 * 0x20;
      while( true ) {
        if (param_2->ArrayNum != iVar17) {
          `TCheckedPointerIterator<FPaperTerrainSpriteGeometry_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_e7);
        }
        if (pFVar24 == pFVar26) break;
        this_00 = *(UMaterial **)(pFVar24 + 0x10);
        if (this_00 == (UMaterial *)0x0) {
          this_00 = UMaterial::GetDefaultMaterial(MD_Surface);
        }
        FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
        FVar21 = UMaterialInterface::GetRelevance_Concurrent
                           ((UMaterialInterface *)this_00,(EShaderPlatform)local_88);
        uVar22 = *(uint *)&this->field_0x630 >> 0x12;
        *(ulonglong *)&this->field_0x630 =
             *(ulonglong *)&this->field_0x630 | *(ulonglong *)FVar21.field0_0x0;
        uVar16 = *(uint *)FVar21.field0_0x0 >> 0x12;
        if (((byte)(*(uint *)FVar21.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar22 & 0x3f)) {
          uVar16 = uVar22;
        }
        uVar22 = (uint)*(undefined8 *)&this->field_0x630;
        *(uint *)&this->field_0x630 = (uVar16 << 0x12 ^ uVar22) & 0xfc0000 ^ uVar22;
        pFVar24 = pFVar24 + 0x20;
      }
      return this;
    }
    *puVar23 = *(undefined8 *)(pFVar24 + 0x10);
    local_e4 = *(uint *)(pFVar24 + 8);
    uVar18 = (ulonglong)(int)local_e4;
    pdVar20 = *(double **)pFVar24;
    pdVar28 = pdVar20 + 0x24;
    local_b0 = pdVar20 + uVar18 * 0x28;
    while( true ) {
      pdVar13 = local_b0;
      local_d8 = pdVar20;
      if (*(int *)(pFVar24 + 8) != (int)uVar18) {
        local_e8 = 0;
        `TCheckedPointerIterator<FSpriteDrawCallRecord_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_e8);
      }
      if (pdVar20 == pdVar13) break;
      puVar1 = &this->field_0x290;
      iVar17 = *(int *)(pdVar28 + 2);
      if (*(int *)((longlong)puVar23 + 0x44) == 0) {
        *(undefined4 *)(puVar23 + 8) = *(undefined4 *)&this->field_0x298;
        puVar23[1] = pdVar28[-0x21];
        TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::operator=
                  ((TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   (puVar23 + 2),
                   (TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                   (pdVar28 + -0x20));
      }
      *(int *)((longlong)puVar23 + 0x44) = *(int *)((longlong)puVar23 + 0x44) + iVar17;
      uVar16 = *(int *)&this->field_0x298 + iVar17;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (*(int *)&this->field_0x29c < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,4,uVar16,(ForAnyElementType *)puVar1,*(int *)&this->field_0x298,
                   (int *)&this->field_0x29c);
      }
      uVar5 = *(undefined4 *)(pdVar28 + -0x1a);
      uVar16 = 0;
      local_c8 = (longlong)iVar17;
      if (0 < iVar17) {
        lVar27 = 0;
        do {
          uVar22 = 0;
          if ((int)uVar16 < *(int *)(pdVar28 + 2)) {
            uVar22 = ~uVar16 >> 0x1f;
          }
          if (uVar22 == 0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FPaperTerrainSceneProxy *)(*pcVar7)();
              return pFVar19;
            }
          }
          pdVar20 = (double *)*pdVar28;
          if (pdVar20 == (double *)0x0) {
            pdVar20 = pdVar28 + -0x18;
          }
          dVar2 = *(double *)((longlong)pdVar20 + lVar27 + 8);
          dVar3 = *(double *)((longlong)pdVar20 + lVar27);
          auVar32 = pmovsxbd(in_XMM2,FPaperSpriteTangents::PackedNormalZ.Vector);
          fStack_cc = (float)*(double *)((longlong)pdVar20 + lVar27 + 0x18);
          local_d0 = (float)*(double *)((longlong)pdVar20 + lVar27 + 0x10);
          dVar29 = dVar3 * PaperAxisX.field0_0x0._s_0.X;
          auVar31._0_8_ = CONCAT44((float)auVar32._4_4_ * fVar10,(float)auVar32._0_4_ * fVar9);
          auVar31._8_4_ = (float)auVar32._8_4_ * fVar11;
          auVar31._12_4_ = (float)auVar32._12_4_ * fVar12;
          auVar32._8_8_ = auVar31._8_8_;
          auVar32._0_8_ = auVar32._8_8_;
          auVar32 = pmovsxbd(auVar32,FPaperSpriteTangents::PackedNormalX.Vector);
          dVar30 = dVar2 * PaperAxisY.field0_0x0._s_0.X;
          local_a0._0_8_ = CONCAT44((float)auVar32._4_4_ * fVar10,(float)auVar32._0_4_ * fVar9);
          local_a0._s_0.Z = (float)auVar32._8_4_ * fVar11;
          dVar33 = dVar3 * PaperAxisX.field0_0x0._s_0.Z;
          dVar4 = *local_d8;
          iVar17 = *(int *)&this->field_0x298;
          dVar34 = dVar2 * PaperAxisY.field0_0x0._s_0.Z;
          in_XMM2._0_8_ =
               dVar2 * PaperAxisY.field0_0x0._s_0.Y + dVar3 * PaperAxisX.field0_0x0._s_0.Y +
               pdVar28[-0x23];
          in_XMM2._8_8_ = 0;
          dVar2 = pdVar28[-0x22];
          fVar35 = (float)in_XMM2._0_8_;
          local_94._0_8_ = auVar31._0_8_;
          local_94._s_0.Z = auVar31._8_4_;
          if (iVar17 == *(int *)&this->field_0x29c) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x458,(ForAnyElementType *)puVar1,(int *)&this->field_0x29c);
            *(int *)&this->field_0x298 = iVar17;
          }
          lVar6 = *(longlong *)puVar1;
          *(int *)&this->field_0x298 = iVar17 + 1;
          lVar25 = (longlong)iVar17 * 0x58;
          *(float *)(lVar6 + lVar25) = (float)(dVar30 + dVar29 + dVar4);
          *(float *)(lVar6 + lVar25 + 4) = fVar35;
          *(float *)(lVar6 + lVar25 + 8) = (float)(dVar34 + dVar33 + dVar2);
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)(lVar6 + lVar25 + 0x4c),(TVector<float> *)&local_a0._s_0);
          FPackedNormal::FPackedNormal
                    ((FPackedNormal *)(lVar6 + lVar25 + 0x50),(TVector<float> *)&local_94._s_0);
          uVar8 = CONCAT44(fStack_cc,local_d0);
          uVar16 = uVar16 + 1;
          *(undefined4 *)(lVar6 + lVar25 + 0x54) = uVar5;
          lVar27 = lVar27 + 0x20;
          local_c8 = local_c8 + -1;
          *(undefined1 *)(lVar6 + lVar25 + 0x53) = 0x7f;
          *(undefined8 *)(lVar6 + lVar25 + 0xc) = uVar8;
          *(undefined8 *)(lVar6 + lVar25 + 0x14) = uVar8;
          *(undefined8 *)(lVar6 + lVar25 + 0x1c) = uVar8;
          *(undefined8 *)(lVar6 + lVar25 + 0x24) = uVar8;
          *(undefined8 *)(lVar6 + lVar25 + 0x2c) = uVar8;
          *(undefined8 *)(lVar6 + lVar25 + 0x34) = uVar8;
          *(undefined8 *)(lVar6 + lVar25 + 0x3c) = uVar8;
          *(undefined8 *)(lVar6 + lVar25 + 0x44) = uVar8;
        } while (local_c8 != 0);
      }
      pdVar20 = local_d8 + 0x28;
      pdVar28 = pdVar28 + 0x28;
      uVar18 = (ulonglong)local_e4;
      puVar23 = local_c0;
      pFVar24 = local_b8;
    }
    puVar23 = puVar23 + 9;
    pFVar24 = pFVar24 + 0x20;
    uVar18 = (ulonglong)local_e0;
  } while( true );
}

// GetTypeHash @ 14ad01da0

ulong64 __thiscall FPaperTerrainSceneProxy::GetTypeHash(FPaperTerrainSceneProxy *this)

{
  return 0x1552d12b0;
}

