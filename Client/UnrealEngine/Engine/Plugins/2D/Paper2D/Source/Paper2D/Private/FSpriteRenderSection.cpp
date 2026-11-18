// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 1

// AddVerticesFromDrawCallRecord<TSizedDefaultAllocator<32>_> @ 14ace24e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSpriteRenderSection::AddVerticesFromDrawCallRecord<TSizedDefaultAllocator<32>_>
          (FSpriteRenderSection *this,FSpriteDrawCallRecord *param_1,int param_2,int param_3,
          TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FColor_u_0 FVar6;
  ForElementType<UE::Math::TVector4<double>_> FVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  ForElementType<UE::Math::TVector4<double>_> FVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  float fVar29;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_8c [7];
  
  uVar22 = (ulonglong)param_2;
  if (this->NumVertices == 0) {
    this->VertexOffset = param_4->ArrayNum;
    this->BaseTexture = (UTexture *)(param_1->BaseTexture).field0_0x0;
    TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::operator=
              (&this->AdditionalTextures,&param_1->AdditionalTextures);
  }
  this->NumVertices = this->NumVertices + param_3;
  uVar19 = param_4->ArrayNum + param_3;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (param_4->ArrayMax < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,uVar19,&param_4->AllocatorInstance,param_4->ArrayNum,&param_4->ArrayMax);
  }
  fVar14 = _UNK_15104007c;
  fVar13 = _UNK_151040078;
  fVar12 = _UNK_151040074;
  fVar11 = ___xmm_3c0102043c0102043c0102043c010204;
  FVar6 = (param_1->Color).field0_0x0;
  if (param_2 < param_2 + param_3) {
    lVar20 = uVar22 << 5;
    do {
      uVar21 = (uint)uVar22;
      uVar19 = 0;
      if ((int)uVar21 < (param_1->RenderVerts).ArrayNum) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      auVar26 = pmovsxbd(in_XMM2,FPaperSpriteTangents::PackedNormalZ.Vector);
      FVar7 = (param_1->RenderVerts).AllocatorInstance.SecondaryData;
      FVar17 = (ForElementType<UE::Math::TVector4<double>_>)&param_1->RenderVerts;
      if (FVar7 != (ForElementType<UE::Math::TVector4<double>_>)0x0) {
        FVar17 = FVar7;
      }
      iVar16 = param_4->ArrayNum;
      dVar1 = *(double *)((longlong)FVar17 + lVar20);
      dVar2 = *(double *)((uchar *)((longlong)FVar17 + 8) + lVar20);
      dVar3 = *(double *)((uchar *)((longlong)FVar17 + 0x18) + lVar20);
      dVar4 = *(double *)((uchar *)((longlong)FVar17 + 0x10) + lVar20);
      dVar23 = dVar1 * PaperAxisX.field0_0x0._s_0.X;
      auVar25._0_8_ = CONCAT44((float)auVar26._4_4_ * fVar12,(float)auVar26._0_4_ * fVar11);
      auVar25._8_4_ = (float)auVar26._8_4_ * fVar13;
      auVar25._12_4_ = (float)auVar26._12_4_ * fVar14;
      auVar26._8_8_ = auVar25._8_8_;
      auVar26._0_8_ = auVar26._8_8_;
      auVar26 = pmovsxbd(auVar26,FPaperSpriteTangents::PackedNormalX.Vector);
      dVar24 = dVar2 * PaperAxisY.field0_0x0._s_0.X;
      local_98._0_8_ = CONCAT44((float)auVar26._4_4_ * fVar12,(float)auVar26._0_4_ * fVar11);
      local_98._s_0.Z = (float)auVar26._8_4_ * fVar13;
      dVar27 = dVar2 * PaperAxisY.field0_0x0._s_0.Z;
      dVar5 = (param_1->Destination).field0_0x0._s_0.X;
      dVar28 = dVar1 * PaperAxisX.field0_0x0._s_0.Z;
      in_XMM2._0_8_ =
           dVar1 * PaperAxisX.field0_0x0._s_0.Y + dVar2 * PaperAxisY.field0_0x0._s_0.Y +
           (param_1->Destination).field0_0x0._s_0.Y;
      in_XMM2._8_8_ = 0;
      dVar1 = (param_1->Destination).field0_0x0._s_0.Z;
      fVar29 = (float)in_XMM2._0_8_;
      local_8c[0]._0_8_ = auVar25._0_8_;
      local_8c[0]._8_4_ = auVar25._8_4_;
      if (iVar16 == param_4->ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x458,&param_4->AllocatorInstance,&param_4->ArrayMax);
        param_4->ArrayNum = iVar16;
      }
      pFVar8 = (param_4->AllocatorInstance).Data;
      param_4->ArrayNum = iVar16 + 1;
      lVar18 = (longlong)iVar16 * 0x58;
      *(float *)(pFVar8 + lVar18) = (float)(dVar24 + dVar23 + dVar5);
      *(float *)(pFVar8 + lVar18 + 4) = fVar29;
      *(float *)(pFVar8 + lVar18 + 8) = (float)(dVar28 + dVar27 + dVar1);
      FPackedNormal::FPackedNormal
                ((FPackedNormal *)(pFVar8 + lVar18 + 0x4c),(TVector<float> *)&local_98._s_0);
      FPackedNormal::FPackedNormal
                ((FPackedNormal *)(pFVar8 + lVar18 + 0x50),(TVector<float> *)&local_8c[0]._s_0);
      uVar10 = CONCAT44((float)dVar3,(float)dVar4);
      uVar22 = (ulonglong)(uVar21 + 1);
      *(FColor_u_0 *)(pFVar8 + lVar18 + 0x54) = FVar6;
      pFVar8[lVar18 + 0x53] = (FScriptContainerElement)0x7f;
      lVar20 = lVar20 + 0x20;
      *(undefined8 *)(pFVar8 + lVar18 + 0xc) = uVar10;
      *(undefined8 *)(pFVar8 + lVar18 + 0x14) = uVar10;
      *(undefined8 *)(pFVar8 + lVar18 + 0x1c) = uVar10;
      *(undefined8 *)(pFVar8 + lVar18 + 0x24) = uVar10;
      *(undefined8 *)(pFVar8 + lVar18 + 0x2c) = uVar10;
      *(undefined8 *)(pFVar8 + lVar18 + 0x34) = uVar10;
      *(undefined8 *)(pFVar8 + lVar18 + 0x3c) = uVar10;
      *(undefined8 *)(pFVar8 + lVar18 + 0x44) = uVar10;
    } while ((int)(uVar21 + 1) < param_2 + param_3);
  }
  return;
}

