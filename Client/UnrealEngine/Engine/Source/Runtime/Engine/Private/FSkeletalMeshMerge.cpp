// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 35

// CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<1>_> @ 1485e70a0

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<1>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat16Uvs<1> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  TVector4<float> *pTVar17;
  longlong lVar18;
  ulonglong uVar19;
  FFloat16 *pFVar20;
  uint uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  FFloat16 local_res18 [4];
  FFloat16 local_res20 [4];
  FFloat16 local_108;
  FFloat16 local_106 [3];
  undefined1 local_100 [16];
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  uVar19 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar19);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar19 + 8);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar17);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)((longlong)&param_1->_padding_ + 4),pTVar17);
  dVar14 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (1 < uVar2) {
    uVar2 = 1;
  }
  uVar19 = 0;
  if (uVar2 != 0) {
    pFVar20 = &param_1->UVs[0].Y;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      uVar21 = (uint)uVar19;
      puVar1 = (ushort *)
               (puVar4 + ((ulonglong)
                          (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                          (ulonglong)(uint)param_3 + uVar19) * 4);
      lVar18 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar18 < puVar1 + 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar1 < (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1);
      dVar11 = (double)fVar22;
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1 + 1);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      dVar8 = (double)fVar22;
      if (uVar21 < uVar3) {
        uVar16 = 0;
        if ((int)uVar21 < (int)uVar3) {
          uVar16 = ~uVar21 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_100._8_4_ = SUB84(dVar8,0);
        local_100._0_8_ = dVar11;
        local_100._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_f0 = dVar14;
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar21 * 0x60;
        auVar31 = *(undefined1 (*) [16])(pFVar5 + lVar18 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar18 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar18 + 0x40 + 8);
        uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar14 * *(double *)(pFVar5 + lVar18 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar18 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        auVar32._8_4_ = SUB84(dVar8,0);
        auVar32._0_8_ = dVar11;
        auVar32._12_4_ = uVar35;
        auVar27 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        dVar13 = *(double *)(pFVar5 + lVar18 + 0x18);
        dVar7 = auVar31._0_8_;
        auVar25 = blendpd(local_a8,auVar31,2);
        auVar33._0_8_ = auVar32._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar33._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar28._8_4_ = SUB84(dVar8,0);
        auVar28._0_8_ = dVar11;
        auVar28._12_4_ = uVar35;
        auVar23._8_4_ = SUB84(dVar10,0);
        auVar23._0_8_ = dVar9;
        auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar23 = blendpd(auVar28,auVar23,2);
        auVar24._0_8_ = auVar23._0_8_ * dVar7 - auVar25._0_8_ * dVar9;
        auVar24._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar25._8_8_ * dVar10;
        auVar23 = blendpd(auVar33,auVar24,2);
        dVar10 = auVar33._8_8_ + auVar33._8_8_;
        dVar12 = auVar24._0_8_ + auVar24._0_8_;
        uVar35 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar34._0_8_ = auVar23._0_8_ + auVar23._0_8_;
        auVar34._8_8_ = auVar23._8_8_ + auVar23._8_8_;
        auVar29._8_4_ = SUB84(dVar12,0);
        auVar29._0_8_ = dVar10;
        auVar29._12_4_ = uVar35;
        auVar26._8_4_ = SUB84(dVar12,0);
        auVar26._0_8_ = dVar10;
        auVar26._12_4_ = uVar35;
        auVar23 = blendpd(auVar26,auVar34,2);
        auVar30._0_8_ = auVar29._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
        auVar30._8_8_ = auVar34._0_8_ * auVar27._8_8_ - dVar7 * dVar12;
        auVar25._8_4_ = SUB84(auVar30._8_8_,0);
        auVar25._0_8_ = auVar30._0_8_;
        auVar25._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
        auVar28 = blendpd(auVar27,auVar31,2);
        auVar27._0_8_ = auVar23._0_8_ * dVar7 - auVar28._0_8_ * auVar34._0_8_;
        auVar27._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar28._8_8_ * auVar34._8_8_;
        auVar31 = blendpd(auVar30,auVar27,2);
        dVar11 = dVar10 * dVar13 + dVar11 + auVar25._8_8_ + *(double *)(pFVar5 + lVar18 + 0x20);
        dVar8 = dVar12 * dVar13 + dVar8 + auVar27._0_8_ + *(double *)(pFVar5 + lVar18 + 0x20 + 8);
        local_d8 = auVar34._0_8_ * dVar13 + dVar9 + auVar31._0_8_ +
                   *(double *)(pFVar5 + lVar18 + 0x30);
        local_e8._8_4_ = SUB84(dVar8,0);
        local_e8._0_8_ = dVar11;
        local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      }
      local_res20[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res20[0].Encoded,(float)dVar11);
      (((FVector2DHalf *)(pFVar20 + -1))->X).Encoded = local_res20[0].Encoded;
      local_res18[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res18[0].Encoded,(float)dVar8);
      uVar19 = (ulonglong)(uVar21 + 1);
      pFVar20->Encoded = local_res18[0].Encoded;
      pFVar20 = pFVar20 + 2;
    } while (uVar21 + 1 < uVar2);
  }
  if (uVar2 == 0) {
    pFVar20 = &param_1->UVs[0].Y;
    lVar18 = 1;
    do {
      local_108.Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_108.Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X);
      (((FVector2DHalf *)(pFVar20 + -1))->X).Encoded = local_108.Encoded;
      local_106[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_106[0].Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y);
      pFVar20->Encoded = local_106[0].Encoded;
      pFVar20 = pFVar20 + 2;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

// CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<2>_> @ 1485e7500

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<2>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat16Uvs<2> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  TVector4<float> *pTVar17;
  longlong lVar18;
  FFloat16 *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  FFloat16 local_res18 [4];
  FFloat16 local_res20 [4];
  FFloat16 local_108;
  FFloat16 local_106 [3];
  undefined1 local_100 [16];
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  uVar21 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar21);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar21 + 8);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar17);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)&param_1->field_0x4,pTVar17);
  dVar14 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (2 < uVar2) {
    uVar2 = 2;
  }
  uVar21 = 0;
  if (uVar2 != 0) {
    pFVar19 = &param_1->UVs[0].Y;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      uVar20 = (uint)uVar21;
      puVar1 = (ushort *)
               (puVar4 + ((ulonglong)
                          (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                          (ulonglong)(uint)param_3 + uVar21) * 4);
      lVar18 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar18 < puVar1 + 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar1 < (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1);
      dVar11 = (double)fVar22;
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1 + 1);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      dVar8 = (double)fVar22;
      if (uVar20 < uVar3) {
        uVar16 = 0;
        if ((int)uVar20 < (int)uVar3) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_100._8_4_ = SUB84(dVar8,0);
        local_100._0_8_ = dVar11;
        local_100._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_f0 = dVar14;
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar20 * 0x60;
        auVar31 = *(undefined1 (*) [16])(pFVar5 + lVar18 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar18 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar18 + 0x40 + 8);
        uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar14 * *(double *)(pFVar5 + lVar18 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar18 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        auVar32._8_4_ = SUB84(dVar8,0);
        auVar32._0_8_ = dVar11;
        auVar32._12_4_ = uVar35;
        auVar27 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        dVar13 = *(double *)(pFVar5 + lVar18 + 0x18);
        dVar7 = auVar31._0_8_;
        auVar25 = blendpd(local_a8,auVar31,2);
        auVar33._0_8_ = auVar32._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar33._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar28._8_4_ = SUB84(dVar8,0);
        auVar28._0_8_ = dVar11;
        auVar28._12_4_ = uVar35;
        auVar23._8_4_ = SUB84(dVar10,0);
        auVar23._0_8_ = dVar9;
        auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar23 = blendpd(auVar28,auVar23,2);
        auVar24._0_8_ = auVar23._0_8_ * dVar7 - auVar25._0_8_ * dVar9;
        auVar24._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar25._8_8_ * dVar10;
        auVar23 = blendpd(auVar33,auVar24,2);
        dVar10 = auVar33._8_8_ + auVar33._8_8_;
        dVar12 = auVar24._0_8_ + auVar24._0_8_;
        uVar35 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar34._0_8_ = auVar23._0_8_ + auVar23._0_8_;
        auVar34._8_8_ = auVar23._8_8_ + auVar23._8_8_;
        auVar29._8_4_ = SUB84(dVar12,0);
        auVar29._0_8_ = dVar10;
        auVar29._12_4_ = uVar35;
        auVar26._8_4_ = SUB84(dVar12,0);
        auVar26._0_8_ = dVar10;
        auVar26._12_4_ = uVar35;
        auVar23 = blendpd(auVar26,auVar34,2);
        auVar30._0_8_ = auVar29._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
        auVar30._8_8_ = auVar34._0_8_ * auVar27._8_8_ - dVar7 * dVar12;
        auVar25._8_4_ = SUB84(auVar30._8_8_,0);
        auVar25._0_8_ = auVar30._0_8_;
        auVar25._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
        auVar28 = blendpd(auVar27,auVar31,2);
        auVar27._0_8_ = auVar23._0_8_ * dVar7 - auVar28._0_8_ * auVar34._0_8_;
        auVar27._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar28._8_8_ * auVar34._8_8_;
        auVar31 = blendpd(auVar30,auVar27,2);
        dVar11 = dVar10 * dVar13 + dVar11 + auVar25._8_8_ + *(double *)(pFVar5 + lVar18 + 0x20);
        dVar8 = dVar12 * dVar13 + dVar8 + auVar27._0_8_ + *(double *)(pFVar5 + lVar18 + 0x20 + 8);
        local_d8 = auVar34._0_8_ * dVar13 + dVar9 + auVar31._0_8_ +
                   *(double *)(pFVar5 + lVar18 + 0x30);
        local_e8._8_4_ = SUB84(dVar8,0);
        local_e8._0_8_ = dVar11;
        local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      }
      local_res20[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res20[0].Encoded,(float)dVar11);
      (((FVector2DHalf *)(pFVar19 + -1))->X).Encoded = local_res20[0].Encoded;
      local_res18[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res18[0].Encoded,(float)dVar8);
      uVar21 = (ulonglong)(uVar20 + 1);
      pFVar19->Encoded = local_res18[0].Encoded;
      pFVar19 = pFVar19 + 2;
    } while (uVar20 + 1 < uVar2);
  }
  if (uVar2 < 2) {
    pFVar19 = &param_1->UVs[uVar2].Y;
    uVar21 = (ulonglong)(2 - uVar2);
    do {
      local_108.Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_108.Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X);
      (((FVector2DHalf *)(pFVar19 + -1))->X).Encoded = local_108.Encoded;
      local_106[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_106[0].Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y);
      pFVar19->Encoded = local_106[0].Encoded;
      pFVar19 = pFVar19 + 2;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  return;
}

// CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<3>_> @ 1485e7960

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<3>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat16Uvs<3> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  TVector4<float> *pTVar17;
  longlong lVar18;
  FFloat16 *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  FFloat16 local_res18 [4];
  FFloat16 local_res20 [4];
  FFloat16 local_108;
  FFloat16 local_106 [3];
  undefined1 local_100 [16];
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  uVar21 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar21);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar21 + 8);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar17);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)((longlong)&param_1->_padding_ + 4),pTVar17);
  dVar14 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (3 < uVar2) {
    uVar2 = 3;
  }
  uVar21 = 0;
  if (uVar2 != 0) {
    pFVar19 = &param_1->UVs[0].Y;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      uVar20 = (uint)uVar21;
      puVar1 = (ushort *)
               (puVar4 + ((ulonglong)
                          (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                          (ulonglong)(uint)param_3 + uVar21) * 4);
      lVar18 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar18 < puVar1 + 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar1 < (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1);
      dVar11 = (double)fVar22;
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1 + 1);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      dVar8 = (double)fVar22;
      if (uVar20 < uVar3) {
        uVar16 = 0;
        if ((int)uVar20 < (int)uVar3) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_100._8_4_ = SUB84(dVar8,0);
        local_100._0_8_ = dVar11;
        local_100._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_f0 = dVar14;
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar20 * 0x60;
        auVar31 = *(undefined1 (*) [16])(pFVar5 + lVar18 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar18 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar18 + 0x40 + 8);
        uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar14 * *(double *)(pFVar5 + lVar18 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar18 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        auVar32._8_4_ = SUB84(dVar8,0);
        auVar32._0_8_ = dVar11;
        auVar32._12_4_ = uVar35;
        auVar27 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        dVar13 = *(double *)(pFVar5 + lVar18 + 0x18);
        dVar7 = auVar31._0_8_;
        auVar25 = blendpd(local_a8,auVar31,2);
        auVar33._0_8_ = auVar32._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar33._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar28._8_4_ = SUB84(dVar8,0);
        auVar28._0_8_ = dVar11;
        auVar28._12_4_ = uVar35;
        auVar23._8_4_ = SUB84(dVar10,0);
        auVar23._0_8_ = dVar9;
        auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar23 = blendpd(auVar28,auVar23,2);
        auVar24._0_8_ = auVar23._0_8_ * dVar7 - auVar25._0_8_ * dVar9;
        auVar24._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar25._8_8_ * dVar10;
        auVar23 = blendpd(auVar33,auVar24,2);
        dVar10 = auVar33._8_8_ + auVar33._8_8_;
        dVar12 = auVar24._0_8_ + auVar24._0_8_;
        uVar35 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar34._0_8_ = auVar23._0_8_ + auVar23._0_8_;
        auVar34._8_8_ = auVar23._8_8_ + auVar23._8_8_;
        auVar29._8_4_ = SUB84(dVar12,0);
        auVar29._0_8_ = dVar10;
        auVar29._12_4_ = uVar35;
        auVar26._8_4_ = SUB84(dVar12,0);
        auVar26._0_8_ = dVar10;
        auVar26._12_4_ = uVar35;
        auVar23 = blendpd(auVar26,auVar34,2);
        auVar30._0_8_ = auVar29._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
        auVar30._8_8_ = auVar34._0_8_ * auVar27._8_8_ - dVar7 * dVar12;
        auVar25._8_4_ = SUB84(auVar30._8_8_,0);
        auVar25._0_8_ = auVar30._0_8_;
        auVar25._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
        auVar28 = blendpd(auVar27,auVar31,2);
        auVar27._0_8_ = auVar23._0_8_ * dVar7 - auVar28._0_8_ * auVar34._0_8_;
        auVar27._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar28._8_8_ * auVar34._8_8_;
        auVar31 = blendpd(auVar30,auVar27,2);
        dVar11 = dVar10 * dVar13 + dVar11 + auVar25._8_8_ + *(double *)(pFVar5 + lVar18 + 0x20);
        dVar8 = dVar12 * dVar13 + dVar8 + auVar27._0_8_ + *(double *)(pFVar5 + lVar18 + 0x20 + 8);
        local_d8 = auVar34._0_8_ * dVar13 + dVar9 + auVar31._0_8_ +
                   *(double *)(pFVar5 + lVar18 + 0x30);
        local_e8._8_4_ = SUB84(dVar8,0);
        local_e8._0_8_ = dVar11;
        local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      }
      local_res20[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res20[0].Encoded,(float)dVar11);
      (((FVector2DHalf *)(pFVar19 + -1))->X).Encoded = local_res20[0].Encoded;
      local_res18[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res18[0].Encoded,(float)dVar8);
      uVar21 = (ulonglong)(uVar20 + 1);
      pFVar19->Encoded = local_res18[0].Encoded;
      pFVar19 = pFVar19 + 2;
    } while (uVar20 + 1 < uVar2);
  }
  if (uVar2 < 3) {
    pFVar19 = &param_1->UVs[uVar2].Y;
    uVar21 = (ulonglong)(3 - uVar2);
    do {
      local_108.Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_108.Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X);
      (((FVector2DHalf *)(pFVar19 + -1))->X).Encoded = local_108.Encoded;
      local_106[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_106[0].Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y);
      pFVar19->Encoded = local_106[0].Encoded;
      pFVar19 = pFVar19 + 2;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  return;
}

// CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<4>_> @ 1485e7dc0

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<4>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat16Uvs<4> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  TVector4<float> *pTVar17;
  longlong lVar18;
  FFloat16 *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  FFloat16 local_res18 [4];
  FFloat16 local_res20 [4];
  FFloat16 local_108;
  FFloat16 local_106 [3];
  undefined1 local_100 [16];
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  uVar21 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar21);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar21 + 8);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar17);
  pTVar17 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)&param_1->field_0x4,pTVar17);
  dVar14 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (4 < uVar2) {
    uVar2 = 4;
  }
  uVar21 = 0;
  if (uVar2 != 0) {
    pFVar19 = &param_1->UVs[0].Y;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      uVar20 = (uint)uVar21;
      puVar1 = (ushort *)
               (puVar4 + ((ulonglong)
                          (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                          (ulonglong)(uint)param_3 + uVar21) * 4);
      lVar18 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar18 < puVar1 + 2) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar1 < (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1);
      dVar11 = (double)fVar22;
      fVar22 = FGenericPlatformMath::LoadHalf(puVar1 + 1);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      dVar8 = (double)fVar22;
      if (uVar20 < uVar3) {
        uVar16 = 0;
        if ((int)uVar20 < (int)uVar3) {
          uVar16 = ~uVar20 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_100._8_4_ = SUB84(dVar8,0);
        local_100._0_8_ = dVar11;
        local_100._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        local_f0 = dVar14;
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar20 * 0x60;
        auVar31 = *(undefined1 (*) [16])(pFVar5 + lVar18 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar18 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar18 + 0x40 + 8);
        uVar35 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar14 * *(double *)(pFVar5 + lVar18 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar18 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        auVar32._8_4_ = SUB84(dVar8,0);
        auVar32._0_8_ = dVar11;
        auVar32._12_4_ = uVar35;
        auVar27 = *(undefined1 (*) [16])(pFVar5 + lVar18);
        dVar13 = *(double *)(pFVar5 + lVar18 + 0x18);
        dVar7 = auVar31._0_8_;
        auVar25 = blendpd(local_a8,auVar31,2);
        auVar33._0_8_ = auVar32._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar33._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar28._8_4_ = SUB84(dVar8,0);
        auVar28._0_8_ = dVar11;
        auVar28._12_4_ = uVar35;
        auVar23._8_4_ = SUB84(dVar10,0);
        auVar23._0_8_ = dVar9;
        auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar23 = blendpd(auVar28,auVar23,2);
        auVar24._0_8_ = auVar23._0_8_ * dVar7 - auVar25._0_8_ * dVar9;
        auVar24._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar25._8_8_ * dVar10;
        auVar23 = blendpd(auVar33,auVar24,2);
        dVar10 = auVar33._8_8_ + auVar33._8_8_;
        dVar12 = auVar24._0_8_ + auVar24._0_8_;
        uVar35 = (undefined4)((ulonglong)dVar12 >> 0x20);
        auVar34._0_8_ = auVar23._0_8_ + auVar23._0_8_;
        auVar34._8_8_ = auVar23._8_8_ + auVar23._8_8_;
        auVar29._8_4_ = SUB84(dVar12,0);
        auVar29._0_8_ = dVar10;
        auVar29._12_4_ = uVar35;
        auVar26._8_4_ = SUB84(dVar12,0);
        auVar26._0_8_ = dVar10;
        auVar26._12_4_ = uVar35;
        auVar23 = blendpd(auVar26,auVar34,2);
        auVar30._0_8_ = auVar29._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
        auVar30._8_8_ = auVar34._0_8_ * auVar27._8_8_ - dVar7 * dVar12;
        auVar25._8_4_ = SUB84(auVar30._8_8_,0);
        auVar25._0_8_ = auVar30._0_8_;
        auVar25._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
        auVar28 = blendpd(auVar27,auVar31,2);
        auVar27._0_8_ = auVar23._0_8_ * dVar7 - auVar28._0_8_ * auVar34._0_8_;
        auVar27._8_8_ = auVar23._8_8_ * auVar31._8_8_ - auVar28._8_8_ * auVar34._8_8_;
        auVar31 = blendpd(auVar30,auVar27,2);
        dVar11 = dVar10 * dVar13 + dVar11 + auVar25._8_8_ + *(double *)(pFVar5 + lVar18 + 0x20);
        dVar8 = dVar12 * dVar13 + dVar8 + auVar27._0_8_ + *(double *)(pFVar5 + lVar18 + 0x20 + 8);
        local_d8 = auVar34._0_8_ * dVar13 + dVar9 + auVar31._0_8_ +
                   *(double *)(pFVar5 + lVar18 + 0x30);
        local_e8._8_4_ = SUB84(dVar8,0);
        local_e8._0_8_ = dVar11;
        local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      }
      local_res20[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res20[0].Encoded,(float)dVar11);
      (((FVector2DHalf *)(pFVar19 + -1))->X).Encoded = local_res20[0].Encoded;
      local_res18[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf(&local_res18[0].Encoded,(float)dVar8);
      uVar21 = (ulonglong)(uVar20 + 1);
      pFVar19->Encoded = local_res18[0].Encoded;
      pFVar19 = pFVar19 + 2;
    } while (uVar20 + 1 < uVar2);
  }
  if (uVar2 < 4) {
    pFVar19 = &param_1->UVs[uVar2].Y;
    uVar21 = (ulonglong)(4 - uVar2);
    do {
      local_108.Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_108.Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X);
      (((FVector2DHalf *)(pFVar19 + -1))->X).Encoded = local_108.Encoded;
      local_106[0].Encoded = 0;
      FGenericPlatformMath::StoreHalf
                (&local_106[0].Encoded,UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y);
      pFVar19->Encoded = local_106[0].Encoded;
      pFVar19 = pFVar19 + 2;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  return;
}

// CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<1>_> @ 1485e8220

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<1>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat32Uvs<1> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector4<float> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  TVector2<float>_u_0 *pTVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  float local_res10;
  float fStackX_14;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  uVar18 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar18);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar18 + 8);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar15);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)&param_1->field_0x4,pTVar15);
  dVar12 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (1 < uVar2) {
    uVar2 = 1;
  }
  uVar18 = 0;
  if (uVar2 != 0) {
    lVar21 = 0;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar16 = (ulonglong)(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)(uint)param_3;
      lVar17 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar17 < puVar4 + uVar18 * 8 + lVar16 * 8 + 8) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar4 + uVar18 * 8 + lVar16 * 8 <
           (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res10 = (float)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      fStackX_14 = (float)((ulonglong)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8) >> 0x20);
      dVar11 = (double)local_res10;
      dVar8 = (double)fStackX_14;
      uVar20 = (uint)uVar18;
      if (uVar20 < uVar3) {
        uVar14 = 0;
        if ((int)uVar20 < (int)uVar3) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar20 * 0x60;
        auVar1 = *(undefined1 (*) [16])(pFVar5 + lVar16 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar16 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar16 + 0x40 + 8);
        uVar33 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar12 * *(double *)(pFVar5 + lVar16 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar16 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        auVar30._8_4_ = SUB84(dVar8,0);
        auVar30._0_8_ = dVar11;
        auVar30._12_4_ = uVar33;
        auVar26 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        dVar7 = auVar1._0_8_;
        auVar24 = blendpd(local_a8,auVar1,2);
        auVar31._0_8_ = auVar30._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar31._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar27._8_4_ = SUB84(dVar8,0);
        auVar27._0_8_ = dVar11;
        auVar27._12_4_ = uVar33;
        auVar22._8_4_ = SUB84(dVar10,0);
        auVar22._0_8_ = dVar9;
        auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar27,auVar22,2);
        auVar23._0_8_ = auVar22._0_8_ * dVar7 - auVar24._0_8_ * dVar9;
        auVar23._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar24._8_8_ * dVar10;
        auVar22 = blendpd(auVar31,auVar23,2);
        dVar9 = auVar31._8_8_ + auVar31._8_8_;
        dVar10 = auVar23._0_8_ + auVar23._0_8_;
        uVar33 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar32._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar32._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar28._8_4_ = SUB84(dVar10,0);
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar33;
        auVar25._8_4_ = SUB84(dVar10,0);
        auVar25._0_8_ = dVar9;
        auVar25._12_4_ = uVar33;
        auVar22 = blendpd(auVar25,auVar32,2);
        auVar29._0_8_ = auVar28._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar9;
        auVar29._8_8_ = auVar32._0_8_ * auVar26._8_8_ - dVar7 * dVar10;
        auVar24._8_4_ = SUB84(auVar29._8_8_,0);
        auVar24._0_8_ = auVar29._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
        auVar27 = blendpd(auVar26,auVar1,2);
        auVar26._0_8_ = auVar22._0_8_ * dVar7 - auVar27._0_8_ * auVar32._0_8_;
        auVar26._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar27._8_8_ * auVar32._8_8_;
        blendpd(auVar29,auVar26,2);
        dVar11 = dVar9 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar11 + auVar24._8_8_ +
                 *(double *)(pFVar5 + lVar16 + 0x20);
        dVar8 = dVar10 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar8 + auVar26._0_8_ +
                *(double *)(pFVar5 + lVar16 + 0x20 + 8);
      }
      uVar18 = (ulonglong)(uVar20 + 1);
      *(ulonglong *)((longlong)&param_1->UVs[0].field0_0x0 + lVar21) =
           CONCAT44((float)dVar8,(float)dVar11);
      lVar21 = lVar21 + 8;
    } while (uVar20 + 1 < uVar2);
  }
  if (uVar2 == 0) {
    pTVar19 = &param_1->UVs[0].field0_0x0;
    lVar21 = 1;
    do {
      pTVar19->_s_0 = (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pTVar19 = pTVar19 + 1;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}

// CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<2>_> @ 1485e8630

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<2>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat32Uvs<2> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector4<float> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  TVector2<float>_u_0 *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  float local_res10;
  float fStackX_14;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  uVar19 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar19);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar19 + 8);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar15);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)&param_1->field_0x4,pTVar15);
  dVar12 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (2 < uVar2) {
    uVar2 = 2;
  }
  uVar19 = 0;
  if (uVar2 != 0) {
    lVar21 = 0;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar16 = (ulonglong)(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)(uint)param_3;
      lVar17 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar17 < puVar4 + uVar19 * 8 + lVar16 * 8 + 8) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar4 + uVar19 * 8 + lVar16 * 8 <
           (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res10 = (float)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      fStackX_14 = (float)((ulonglong)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8) >> 0x20);
      dVar11 = (double)local_res10;
      dVar8 = (double)fStackX_14;
      uVar20 = (uint)uVar19;
      if (uVar20 < uVar3) {
        uVar14 = 0;
        if ((int)uVar20 < (int)uVar3) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar20 * 0x60;
        auVar1 = *(undefined1 (*) [16])(pFVar5 + lVar16 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar16 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar16 + 0x40 + 8);
        uVar33 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar12 * *(double *)(pFVar5 + lVar16 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar16 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        auVar30._8_4_ = SUB84(dVar8,0);
        auVar30._0_8_ = dVar11;
        auVar30._12_4_ = uVar33;
        auVar26 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        dVar7 = auVar1._0_8_;
        auVar24 = blendpd(local_a8,auVar1,2);
        auVar31._0_8_ = auVar30._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar31._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar27._8_4_ = SUB84(dVar8,0);
        auVar27._0_8_ = dVar11;
        auVar27._12_4_ = uVar33;
        auVar22._8_4_ = SUB84(dVar10,0);
        auVar22._0_8_ = dVar9;
        auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar27,auVar22,2);
        auVar23._0_8_ = auVar22._0_8_ * dVar7 - auVar24._0_8_ * dVar9;
        auVar23._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar24._8_8_ * dVar10;
        auVar22 = blendpd(auVar31,auVar23,2);
        dVar9 = auVar31._8_8_ + auVar31._8_8_;
        dVar10 = auVar23._0_8_ + auVar23._0_8_;
        uVar33 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar32._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar32._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar28._8_4_ = SUB84(dVar10,0);
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar33;
        auVar25._8_4_ = SUB84(dVar10,0);
        auVar25._0_8_ = dVar9;
        auVar25._12_4_ = uVar33;
        auVar22 = blendpd(auVar25,auVar32,2);
        auVar29._0_8_ = auVar28._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar9;
        auVar29._8_8_ = auVar32._0_8_ * auVar26._8_8_ - dVar7 * dVar10;
        auVar24._8_4_ = SUB84(auVar29._8_8_,0);
        auVar24._0_8_ = auVar29._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
        auVar27 = blendpd(auVar26,auVar1,2);
        auVar26._0_8_ = auVar22._0_8_ * dVar7 - auVar27._0_8_ * auVar32._0_8_;
        auVar26._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar27._8_8_ * auVar32._8_8_;
        blendpd(auVar29,auVar26,2);
        dVar11 = dVar9 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar11 + auVar24._8_8_ +
                 *(double *)(pFVar5 + lVar16 + 0x20);
        dVar8 = dVar10 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar8 + auVar26._0_8_ +
                *(double *)(pFVar5 + lVar16 + 0x20 + 8);
      }
      uVar19 = (ulonglong)(uVar20 + 1);
      *(ulonglong *)((longlong)&param_1->UVs[0].field0_0x0 + lVar21) =
           CONCAT44((float)dVar8,(float)dVar11);
      lVar21 = lVar21 + 8;
    } while (uVar20 + 1 < uVar2);
  }
  if (uVar2 < 2) {
    uVar19 = (ulonglong)(2 - uVar2);
    pTVar18 = &param_1->UVs[uVar2].field0_0x0;
    do {
      pTVar18->_s_0 = (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pTVar18 = pTVar18 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}

// CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<3>_> @ 1485e8a40

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<3>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat32Uvs<3> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector4<float> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  TVector2<float>_u_0 *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  float local_res10;
  float fStackX_14;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  uVar19 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar19);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar19 + 8);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar15);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)&param_1->field_0x4,pTVar15);
  dVar12 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (3 < uVar2) {
    uVar2 = 3;
  }
  uVar19 = 0;
  if (uVar2 != 0) {
    lVar21 = 0;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar16 = (ulonglong)(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)(uint)param_3;
      lVar17 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar17 < puVar4 + uVar19 * 8 + lVar16 * 8 + 8) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar4 + uVar19 * 8 + lVar16 * 8 <
           (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res10 = (float)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      fStackX_14 = (float)((ulonglong)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8) >> 0x20);
      dVar11 = (double)local_res10;
      dVar8 = (double)fStackX_14;
      uVar20 = (uint)uVar19;
      if (uVar20 < uVar3) {
        uVar14 = 0;
        if ((int)uVar20 < (int)uVar3) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar20 * 0x60;
        auVar1 = *(undefined1 (*) [16])(pFVar5 + lVar16 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar16 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar16 + 0x40 + 8);
        uVar33 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar12 * *(double *)(pFVar5 + lVar16 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar16 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        auVar30._8_4_ = SUB84(dVar8,0);
        auVar30._0_8_ = dVar11;
        auVar30._12_4_ = uVar33;
        auVar26 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        dVar7 = auVar1._0_8_;
        auVar24 = blendpd(local_a8,auVar1,2);
        auVar31._0_8_ = auVar30._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar31._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar27._8_4_ = SUB84(dVar8,0);
        auVar27._0_8_ = dVar11;
        auVar27._12_4_ = uVar33;
        auVar22._8_4_ = SUB84(dVar10,0);
        auVar22._0_8_ = dVar9;
        auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar27,auVar22,2);
        auVar23._0_8_ = auVar22._0_8_ * dVar7 - auVar24._0_8_ * dVar9;
        auVar23._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar24._8_8_ * dVar10;
        auVar22 = blendpd(auVar31,auVar23,2);
        dVar9 = auVar31._8_8_ + auVar31._8_8_;
        dVar10 = auVar23._0_8_ + auVar23._0_8_;
        uVar33 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar32._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar32._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar28._8_4_ = SUB84(dVar10,0);
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar33;
        auVar25._8_4_ = SUB84(dVar10,0);
        auVar25._0_8_ = dVar9;
        auVar25._12_4_ = uVar33;
        auVar22 = blendpd(auVar25,auVar32,2);
        auVar29._0_8_ = auVar28._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar9;
        auVar29._8_8_ = auVar32._0_8_ * auVar26._8_8_ - dVar7 * dVar10;
        auVar24._8_4_ = SUB84(auVar29._8_8_,0);
        auVar24._0_8_ = auVar29._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
        auVar27 = blendpd(auVar26,auVar1,2);
        auVar26._0_8_ = auVar22._0_8_ * dVar7 - auVar27._0_8_ * auVar32._0_8_;
        auVar26._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar27._8_8_ * auVar32._8_8_;
        blendpd(auVar29,auVar26,2);
        dVar11 = dVar9 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar11 + auVar24._8_8_ +
                 *(double *)(pFVar5 + lVar16 + 0x20);
        dVar8 = dVar10 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar8 + auVar26._0_8_ +
                *(double *)(pFVar5 + lVar16 + 0x20 + 8);
      }
      uVar19 = (ulonglong)(uVar20 + 1);
      *(ulonglong *)((longlong)&param_1->UVs[0].field0_0x0 + lVar21) =
           CONCAT44((float)dVar8,(float)dVar11);
      lVar21 = lVar21 + 8;
    } while (uVar20 + 1 < uVar2);
  }
  if (uVar2 < 3) {
    uVar19 = (ulonglong)(3 - uVar2);
    pTVar18 = &param_1->UVs[uVar2].field0_0x0;
    do {
      pTVar18->_s_0 = (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pTVar18 = pTVar18 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}

// CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<4>_> @ 1485e8e50

/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<4>_>
          (FSkeletalMeshMerge *this,TGPUSkinVertexFloat32Uvs<4> *param_1,
          FSkeletalMeshLODRenderData *param_2,int param_3,FMergeSectionInfo *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uchar *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector4<float> *pTVar15;
  longlong lVar16;
  longlong lVar17;
  TVector2<float>_u_0 *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  float local_res10;
  float fStackX_14;
  TVector4<float> local_c8;
  TVector4<float> local_b8;
  undefined1 local_a8 [16];
  
  uVar19 = (ulonglong)(param_3 * (param_2->StaticVertexBuffers).PositionVertexBuffer.Stride);
  puVar4 = (param_2->StaticVertexBuffers).PositionVertexBuffer.Data;
  *(undefined8 *)&(param_1->Position).field0_0x0 = *(undefined8 *)(puVar4 + uVar19);
  (param_1->Position).field0_0x0._s_0.Z = *(float *)(puVar4 + uVar19 + 8);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentX
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_c8,param_3);
  FPackedNormal::operator=((FPackedNormal *)param_1,pTVar15);
  pTVar15 = FStaticMeshVertexBuffer::VertexTangentZ
                      (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,&local_b8,param_3);
  FPackedNormal::operator=((FPackedNormal *)&param_1->field_0x4,pTVar15);
  dVar12 = __real_3ff0000000000000;
  uVar2 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  if (4 < uVar2) {
    uVar2 = 4;
  }
  uVar19 = 0;
  if (uVar2 != 0) {
    lVar21 = 0;
    do {
      puVar4 = (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
      lVar16 = (ulonglong)(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
               (ulonglong)(uint)param_3;
      lVar17 = (**(code **)((longlong)
                            *(param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                           0x50))();
      if ((puVar4 + lVar17 < puVar4 + uVar19 * 8 + lVar16 * 8 + 8) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17b,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((puVar4 + uVar19 * 8 + lVar16 * 8 <
           (param_2->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                              ,0x17c,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res10 = (float)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8);
      uVar3 = (param_4->UVTransforms).ArrayNum;
      fStackX_14 = (float)((ulonglong)*(undefined8 *)(puVar4 + lVar21 + lVar16 * 8) >> 0x20);
      dVar11 = (double)local_res10;
      dVar8 = (double)fStackX_14;
      uVar20 = (uint)uVar19;
      if (uVar20 < uVar3) {
        uVar14 = 0;
        if ((int)uVar20 < (int)uVar3) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_4->UVTransforms).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar20 * 0x60;
        auVar1 = *(undefined1 (*) [16])(pFVar5 + lVar16 + 0x10);
        dVar11 = dVar11 * *(double *)(pFVar5 + lVar16 + 0x40);
        dVar8 = dVar8 * *(double *)(pFVar5 + lVar16 + 0x40 + 8);
        uVar33 = (undefined4)((ulonglong)dVar8 >> 0x20);
        dVar9 = dVar12 * *(double *)(pFVar5 + lVar16 + 0x50);
        dVar10 = *(double *)(pFVar5 + lVar16 + 0x50 + 8) * 0.0;
        local_a8 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        auVar30._8_4_ = SUB84(dVar8,0);
        auVar30._0_8_ = dVar11;
        auVar30._12_4_ = uVar33;
        auVar26 = *(undefined1 (*) [16])(pFVar5 + lVar16);
        dVar7 = auVar1._0_8_;
        auVar24 = blendpd(local_a8,auVar1,2);
        auVar31._0_8_ = auVar30._8_8_ * local_a8._0_8_ - local_a8._8_8_ * dVar11;
        auVar31._8_8_ = dVar9 * local_a8._8_8_ - dVar7 * dVar8;
        auVar27._8_4_ = SUB84(dVar8,0);
        auVar27._0_8_ = dVar11;
        auVar27._12_4_ = uVar33;
        auVar22._8_4_ = SUB84(dVar10,0);
        auVar22._0_8_ = dVar9;
        auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar22 = blendpd(auVar27,auVar22,2);
        auVar23._0_8_ = auVar22._0_8_ * dVar7 - auVar24._0_8_ * dVar9;
        auVar23._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar24._8_8_ * dVar10;
        auVar22 = blendpd(auVar31,auVar23,2);
        dVar9 = auVar31._8_8_ + auVar31._8_8_;
        dVar10 = auVar23._0_8_ + auVar23._0_8_;
        uVar33 = (undefined4)((ulonglong)dVar10 >> 0x20);
        auVar32._0_8_ = auVar22._0_8_ + auVar22._0_8_;
        auVar32._8_8_ = auVar22._8_8_ + auVar22._8_8_;
        auVar28._8_4_ = SUB84(dVar10,0);
        auVar28._0_8_ = dVar9;
        auVar28._12_4_ = uVar33;
        auVar25._8_4_ = SUB84(dVar10,0);
        auVar25._0_8_ = dVar9;
        auVar25._12_4_ = uVar33;
        auVar22 = blendpd(auVar25,auVar32,2);
        auVar29._0_8_ = auVar28._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar9;
        auVar29._8_8_ = auVar32._0_8_ * auVar26._8_8_ - dVar7 * dVar10;
        auVar24._8_4_ = SUB84(auVar29._8_8_,0);
        auVar24._0_8_ = auVar29._0_8_;
        auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
        auVar27 = blendpd(auVar26,auVar1,2);
        auVar26._0_8_ = auVar22._0_8_ * dVar7 - auVar27._0_8_ * auVar32._0_8_;
        auVar26._8_8_ = auVar22._8_8_ * auVar1._8_8_ - auVar27._8_8_ * auVar32._8_8_;
        blendpd(auVar29,auVar26,2);
        dVar11 = dVar9 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar11 + auVar24._8_8_ +
                 *(double *)(pFVar5 + lVar16 + 0x20);
        dVar8 = dVar10 * *(double *)(pFVar5 + lVar16 + 0x18) + dVar8 + auVar26._0_8_ +
                *(double *)(pFVar5 + lVar16 + 0x20 + 8);
      }
      uVar19 = (ulonglong)(uVar20 + 1);
      *(ulonglong *)((longlong)&param_1->UVs[0].field0_0x0 + lVar21) =
           CONCAT44((float)dVar8,(float)dVar11);
      lVar21 = lVar21 + 8;
    } while (uVar20 + 1 < uVar2);
  }
  if (uVar2 < 4) {
    uVar19 = (ulonglong)(4 - uVar2);
    pTVar18 = &param_1->UVs[uVar2].field0_0x0;
    do {
      pTVar18->_s_0 = (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      pTVar18 = pTVar18 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat16Uvs<1>_> @ 1485f43f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat16Uvs<1>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  TGPUSkinVertexFloat16Uvs<1> *pTVar3;
  FFloat16 *this_00;
  ForAnyElementType *pFVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar9;
  undefined8 uVar10;
  FName FVar11;
  FRawStaticIndexBuffer16or32Interface *pFVar12;
  FSkelMeshRenderSection *pFVar13;
  uchar *puVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  FColor_u_0 FVar30;
  FStaticMeshVertexBuffer *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODRenderData *pFVar33;
  FSkeletalMeshLODInfo *pFVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  longlong *plVar37;
  ForAnyElementType *pFVar38;
  float *pfVar39;
  longlong lVar40;
  int *piVar41;
  FSkinWeightInfo *pFVar42;
  ulonglong uVar43;
  undefined4 *puVar44;
  void *pvVar45;
  FReferenceSkeleton *this_01;
  longlong lVar46;
  byte bVar47;
  uint uVar48;
  ulonglong uVar49;
  FScriptContainerElement *pFVar50;
  FSkinWeightVertexBuffer *pFVar51;
  ForAnyElementType FVar52;
  uchar uVar53;
  longlong lVar54;
  uint uVar55;
  uint uVar56;
  FSkeletalMaterial *pFVar57;
  FScriptContainerElement *pFVar58;
  FSkeletalMeshMerge *pFVar59;
  FColor_u_0 *pFVar60;
  int iVar61;
  FScriptContainerElement *pFVar62;
  longlong lVar63;
  ForAnyElementType FVar64;
  uint uVar65;
  longlong lVar66;
  FMergeSectionInfo *pFVar67;
  float fVar68;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auStackY_2e8 [32];
  bool local_298;
  FIdentityFunctor local_295;
  FColor_u_0 local_294;
  uint local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  FFloat16 local_268;
  FFloat16 local_266;
  uint local_264;
  FScriptContainerElement *local_260;
  ulonglong local_258;
  FSkeletalMeshLODRenderData *local_250;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_248;
  ushort local_238 [2];
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  FSkeletalMeshMerge *local_220;
  uint local_218;
  uint local_214;
  longlong local_210;
  undefined8 local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  longlong local_1f0;
  FSkeletalMeshLODRenderData *local_1e8;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e0;
  FStaticMeshVertexBuffer *local_1d0;
  undefined8 local_1c8;
  TVector<float>_u_0 local_1b8;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  FNewSectionInfo *local_168;
  longlong local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1f0 = CONCAT44(local_1f0._4_4_,param_1);
  local_220 = this;
  pFVar31 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar31;
  if ((pFVar31 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar25)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar32 = ::operator_new(0x768);
  pFVar33 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar32 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar33 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar32,true);
  }
  pFVar58 = (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.AllocatorInstance.Data;
  local_250 = pFVar33;
  local_1e8 = pFVar33;
  if (((pFVar58 <= (FScriptContainerElement *)&local_1e8) &&
      ((FScriptContainerElement *)&local_1e8 <
       pFVar58 + (longlong)(((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar28 = (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayNum;
  piVar41 = &(((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayMax;
  if (iVar28 == *piVar41) {
    iVar28 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar31,piVar41);
  }
  (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayNum = iVar28 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar28 * 8) = local_1e8;
  pFVar34 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar34->LODHysteresis = 3.4028235e+38;
  (pFVar34->ScreenSize).Default = 3.4028235e+38;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_208 = pFVar34;
  GenerateNewSectionArray(this,&local_1e0,param_1);
  local_22c = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_290 = 0;
  local_230 = 0;
  local_298 = false;
  local_214 = 0;
  if (0 < local_1e0.ArrayNum) {
    local_258 = 0;
    do {
      uVar43 = local_258;
      uVar55 = 0;
      if ((int)local_214 < local_1e0.ArrayNum) {
        uVar55 = ~local_214 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      FVar64.Data = local_1e0.AllocatorInstance.Data;
      uVar55 = 0;
      local_168 = (FNewSectionInfo *)local_1e0.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e0.AllocatorInstance.Data + uVar43 + 0x18)) {
        do {
          uVar56 = 0;
          if ((int)uVar55 < *(int *)(FVar64.Data + uVar43 + 0x18)) {
            uVar56 = ~uVar55 >> 0x1f;
          }
          if ((uVar56 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar33->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar64.Data + uVar43 + 0x10) + (longlong)(int)uVar55 * 2));
          uVar55 = uVar55 + 1;
        } while ((int)uVar55 < *(int *)(FVar64.Data + uVar43 + 0x18));
      }
      piVar41 = &(pFVar33->RenderSections).ArrayMax;
      uVar55 = (pFVar33->RenderSections).ArrayNum;
      if (uVar55 == *piVar41) {
        uVar55 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar33->RenderSections).AllocatorInstance,piVar41);
      }
      (pFVar33->RenderSections).ArrayNum = uVar55 + 1;
      uVar56 = 0;
      if ((int)uVar55 < (int)(uVar55 + 1)) {
        uVar56 = ~uVar55 >> 0x1f;
      }
      if ((uVar56 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar58 = (FScriptContainerElement *)0x0;
      pFVar62 = (pFVar33->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar55 * 0x118;
      if (pFVar62 == (FScriptContainerElement *)0x0) {
        local_260 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar62 = 0;
        *(ushort *)(pFVar62 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar62 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar62 + 4) = 0;
        *(undefined8 *)(pFVar62 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar62 + 0x18) = 0;
        *(undefined8 *)(pFVar62 + 0x20) = 0;
        *(undefined8 *)(pFVar62 + 0x28) = 0;
        *(undefined8 *)(pFVar62 + 0x30) = 0;
        *(undefined8 *)(pFVar62 + 0x38) = 0;
        *(undefined8 *)(pFVar62 + 0x40) = 0;
        *(undefined4 *)(pFVar62 + 0x48) = 0;
        *(undefined4 *)(pFVar62 + 0x4c) = 4;
        *(undefined8 *)(pFVar62 + 0x54) = 0;
        *(undefined8 *)(pFVar62 + 0x5c) = 0;
        local_260 = pFVar62;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar62 + 0x68));
        *(undefined ***)(pFVar62 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar62 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar62 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar62 + 0x88) = 0;
        *(undefined8 *)(pFVar62 + 0x90) = 0;
        *(undefined4 *)(pFVar62 + 0x98) = 0;
        *(undefined8 *)(pFVar62 + 0xa0) = 0;
        *(undefined8 *)(pFVar62 + 0xa8) = 0;
        *(undefined4 *)(pFVar62 + 0xb0) = 0;
        *(undefined8 *)(pFVar62 + 200) = 0;
        *(undefined8 *)(pFVar62 + 0xd0) = 0;
        pFVar62[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar62 + 0xf0) = 0;
        *(undefined8 *)(pFVar62 + 0xf8) = 0;
        pFVar62[0x100] = (FScriptContainerElement)0x0;
        pFVar62[0x108] = (FScriptContainerElement)0x0;
        pFVar62[0x110] = (FScriptContainerElement)0x0;
        pFVar58 = pFVar62;
      }
      pFVar35 = FVar64.Data + uVar43 + 0x10;
      pFVar62 = pFVar58 + 0x38;
      if (pFVar62 != pFVar35) {
        iVar28 = *(int *)(pFVar35 + 8);
        pFVar50 = pFVar58 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar35;
        *(int *)(pFVar58 + 0x40) = iVar28;
        if ((iVar28 == 0) && (*(int *)pFVar50 == 0)) {
          *(int *)pFVar50 = 0;
          uVar43 = local_258;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar28,*(int *)pFVar50,(ForAnyElementType *)pFVar62,iVar28,(int *)pFVar50);
          uVar43 = local_258;
          if (iVar28 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar62,_Src.Data,(longlong)iVar28 * 2);
            uVar43 = local_258;
          }
        }
      }
      pFVar59 = local_220;
      *(undefined4 *)(pFVar58 + 0x48) = 0;
      *(uint *)(pFVar58 + 0x10) = (uint)local_270;
      lVar36 = (**(code **)(local_220->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar36 + 8) != (pFVar59->MaterialIds).ArrayNum) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar62 = FVar64.Data + uVar43 + 0x28;
      if (*(int *)pFVar62 == -1) {
        plVar37 = (longlong *)(**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar64.Data + uVar43 + 0x20))->DebugPtr;
        local_1c8 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar9 = (FSkeletalMaterial *)*plVar37;
        lVar36 = plVar37[1];
        local_110 = local_1c8;
        for (pFVar57 = pFVar9; pFVar57 != pFVar9 + (int)lVar36; pFVar57 = pFVar57 + 1) {
          bVar25 = ::operator==(pFVar57,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar25) {
            lVar36 = ((longlong)pFVar57 - (longlong)pFVar9) / 6 +
                     ((longlong)pFVar57 - (longlong)pFVar9 >> 0x3f);
            uVar49 = (lVar36 >> 3) - (lVar36 >> 0x3f);
            uVar43 = local_258;
            pFVar59 = local_220;
            goto LAB_1485f4a46;
          }
        }
        uVar49 = 0xffffffff;
        uVar43 = local_258;
        pFVar59 = local_220;
      }
      else {
        pFVar35 = (pFVar59->MaterialIds).AllocatorInstance.Data;
        for (pFVar50 = pFVar35; pFVar50 != pFVar35 + (longlong)(pFVar59->MaterialIds).ArrayNum * 4;
            pFVar50 = pFVar50 + 4) {
          if (*(int *)pFVar50 == *(int *)pFVar62) {
            uVar49 = (longlong)pFVar50 - (longlong)pFVar35 >> 2;
            goto LAB_1485f4a46;
          }
        }
        uVar49 = 0xffffffff;
      }
LAB_1485f4a46:
      if ((int)uVar49 == -1) {
        local_148 = *(UObject **)(FVar64.Data + uVar43 + 0x20);
        uVar10 = *(undefined8 *)(FVar64.Data + uVar43 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar35 = FVar64.Data + uVar43 + 0x34;
        local_138 = *(undefined4 *)pFVar35;
        uStack_134 = *(undefined4 *)(pFVar35 + 4);
        uStack_130 = *(undefined4 *)(pFVar35 + 8);
        uStack_12c = *(undefined4 *)(pFVar35 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar64.Data + uVar43 + 0x44);
        local_140 = uVar10;
        pFVar38 = (ForAnyElementType *)(**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar38->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar38->Data + (longlong)*(int *)((longlong)&pFVar38[1].Data + 4) * 0x30)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = *(int *)&pFVar38[1].Data;
        piVar41 = (int *)((longlong)&pFVar38[1].Data + 4);
        if (iVar28 == *piVar41) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar38,piVar41);
        }
        lVar36 = (longlong)iVar28;
        *(int *)&pFVar38[1].Data = iVar28 + 1;
        pFVar35 = pFVar38->Data;
        *(UObject **)(pFVar35 + lVar36 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar35 + lVar36 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar35 + lVar36 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar35 + lVar36 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar35 + lVar36 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar35 + lVar36 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar59 = local_220;
        pTVar1 = &local_220->MaterialIds;
        pFVar35 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar35 <= pFVar62) &&
            (pFVar62 < pFVar35 + (longlong)(local_220->MaterialIds).ArrayMax * 4)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = (pFVar59->MaterialIds).ArrayNum;
        piVar41 = &(pFVar59->MaterialIds).ArrayMax;
        if (iVar28 == *piVar41) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar41);
        }
        (pFVar59->MaterialIds).ArrayNum = iVar28 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar28 * 4) = *(int *)pFVar62;
        lVar36 = (**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
        uVar49 = (ulonglong)(ushort)(*(short *)(lVar36 + 8) - 1);
      }
      *(ushort *)pFVar58 = (ushort)uVar49;
      *(undefined4 *)(pFVar58 + 8) = 0;
      *(int *)(pFVar58 + 4) = local_248.ArrayNum;
      plVar37 = (longlong *)(**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
      uVar7 = *(ushort *)pFVar58;
      if (((int)plVar37[1] <= (int)(uint)uVar7) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar28 = *(int *)(FVar64.Data + uVar43 + 8);
      local_160 = (ulonglong)uVar7 * 0x30 + *plVar37;
      local_218 = 0;
      if (0 < iVar28) {
        local_210 = 0;
        do {
          lVar40 = local_160;
          lVar36 = local_210;
          uVar55 = 0;
          if ((int)local_218 < iVar28) {
            uVar55 = ~local_218 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar67 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar64.Data)->UVChannelData).LocalUVDensities
                      + uVar43 + -0x38) + lVar36);
          lVar36 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar55 = *(int *)(lVar36 + 8) - 1;
          if ((int)(uint)local_1f0 < (int)uVar55) {
            uVar55 = (uint)local_1f0;
          }
          uVar7 = pFVar67->Section->MaterialIndex;
          uVar43 = (ulonglong)uVar7;
          lVar36 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar7 < *(int *)(lVar36 + 8)) {
            plVar37 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar37[1] <= (int)(uint)uVar7) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar36 = *plVar37;
            fVar68 = *(float *)(lVar36 + 0x14 + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x14)) {
              fVar68 = *(float *)(lVar40 + 0x14);
            }
            *(float *)(lVar40 + 0x14) = fVar68;
            fVar68 = *(float *)(lVar36 + 0x18 + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x18)) {
              fVar68 = *(float *)(lVar40 + 0x18);
            }
            *(float *)(lVar40 + 0x18) = fVar68;
            fVar68 = *(float *)(lVar36 + 0x1c + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x1c)) {
              fVar68 = *(float *)(lVar40 + 0x1c);
            }
            *(float *)(lVar40 + 0x1c) = fVar68;
            fVar68 = *(float *)(lVar36 + 0x20 + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x20)) {
              fVar68 = *(float *)(lVar40 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar68);
            *(float *)(lVar40 + 0x20) = fVar68;
          }
          pfVar39 = (float *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x328))
                                       (pFVar67->SkelMesh,uVar55);
          bVar5 = *(byte *)&local_208->BuildSettings;
          fVar68 = (local_208->ScreenSize).Default;
          if (*pfVar39 <= fVar68) {
            fVar68 = *pfVar39;
          }
          (local_208->ScreenSize).Default = fVar68;
          bVar47 = bVar5 | *(byte *)(pfVar39 + 6);
          uVar6 = (local_208->BuildSettings).field_0x1;
          bVar47 = (bVar5 ^ bVar47) & 0x7f ^ bVar47;
          *(byte *)&local_208->BuildSettings = bVar47;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar39 + 0x19)) & 1 ^ uVar6 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar47 | *(byte *)(pfVar39 + 6)) & 0x20 ^ bVar47 & 0xdf;
          fVar68 = pfVar39[1];
          if (local_208->LODHysteresis <= pfVar39[1]) {
            fVar68 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar68;
          plVar37 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar56 = 0;
          if ((int)uVar55 < (int)plVar37[1]) {
            uVar56 = ~uVar55 >> 0x1f;
          }
          if ((uVar56 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar32 = local_250;
          uVar56 = 0;
          pFVar33 = *(FSkeletalMeshLODRenderData **)(*plVar37 + (longlong)(int)uVar55 * 8);
          if (0 < (pFVar33->RequiredBones).ArrayNum) {
            lVar36 = 0;
            do {
              lVar40 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x318))();
              uVar55 = 0;
              if ((int)uVar56 < (pFVar33->RequiredBones).ArrayNum) {
                uVar55 = ~uVar56 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              uVar7 = *(ushort *)((pFVar33->RequiredBones).AllocatorInstance.Data + lVar36);
              if ((*(int *)(lVar40 + 0x28) <= (int)(uint)uVar7) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              FVar11 = *(FName *)(*(longlong *)(lVar40 + 0x20) + (ulonglong)uVar7 * 0xc);
              if (((FVar11 != (FName)0x0) &&
                  (piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_220->NewRefSkeleton).FinalNameToIndexMap,FVar11),
                  piVar41 != (int *)0x0)) && (*piVar41 != -1)) {
                local_238[0] = (ushort)*piVar41;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar32->RequiredBones,local_238);
              }
              uVar56 = uVar56 + 1;
              lVar36 = lVar36 + 2;
              pFVar58 = local_260;
            } while ((int)uVar56 < (pFVar33->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar58 + 0x48) = *(int *)(pFVar58 + 0x48) + pFVar67->Section->NumVertices;
          uVar55 = (pFVar33->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_228 = (pFVar33->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar56 = pFVar67->Section->NumVertices + pFVar67->Section->BaseVertexIndex;
          if ((int)uVar56 < (int)uVar55) {
            uVar55 = uVar56;
          }
          pFVar51 = (pFVar33->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar51 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar51 = &pFVar33->SkinWeightVertexBuffer;
          }
          uVar56 = (pFVar51->DataVertexBuffer).MaxBoneInfluences;
          uVar29 = uVar56;
          if (uVar56 < local_230) {
            uVar29 = local_230;
          }
          local_298 = (bool)(local_298 | (pFVar51->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_260 + 0x4c) = uVar56;
          uVar56 = (pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar56 <= local_290) {
            uVar56 = local_290;
          }
          local_234 = (uint)local_270;
          uVar65 = pFVar67->Section->BaseVertexIndex;
          local_290 = uVar56;
          local_230 = uVar29;
          if ((int)uVar65 < (int)uVar55) {
            while( true ) {
              uVar56 = local_228;
              uVar29 = (uint)local_270;
              if ((uint)local_270 == local_270._4_4_) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x418,&local_278,(int *)((longlong)&local_270 + 4));
              }
              local_270 = CONCAT44(local_270._4_4_,uVar29 + 1);
              uVar48 = 0;
              if ((int)uVar29 < (int)(uVar29 + 1)) {
                uVar48 = ~uVar29 >> 0x1f;
              }
              if ((uVar48 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar3 = (TGPUSkinVertexFloat16Uvs<1> *)
                       (local_278.Data + (longlong)(int)uVar29 * 0x18);
              uVar29 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar29 + 1;
              uVar48 = 0;
              if ((int)uVar29 < (int)(uVar29 + 1)) {
                uVar48 = ~uVar29 >> 0x1f;
              }
              if ((uVar48 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar59 = local_220;
              pFVar58 = local_200.AllocatorInstance.Data + (longlong)(int)uVar29 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<1>_>
                        (local_220,pTVar3,pFVar33,uVar65,pFVar67);
              pFVar51 = (pFVar33->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar51 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar51 = &pFVar33->SkinWeightVertexBuffer;
              }
              pFVar42 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar51,&local_e8,uVar65);
              uVar10 = *(undefined8 *)(pFVar42->InfluenceBones + 4);
              *(undefined8 *)pFVar58 = *(undefined8 *)pFVar42->InfluenceBones;
              *(undefined8 *)(pFVar58 + 8) = uVar10;
              in_XMM1 = *(undefined1 (*) [16])(pFVar42->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar58 + 0x10) = in_XMM1;
              uVar8 = *(undefined4 *)(pFVar42->InfluenceWeights + 6);
              uVar20 = *(undefined4 *)(pFVar42->InfluenceWeights + 8);
              uVar21 = *(undefined4 *)(pFVar42->InfluenceWeights + 10);
              *(undefined4 *)(pFVar58 + 0x20) = *(undefined4 *)(pFVar42->InfluenceWeights + 4);
              *(undefined4 *)(pFVar58 + 0x24) = uVar8;
              *(undefined4 *)(pFVar58 + 0x28) = uVar20;
              *(undefined4 *)(pFVar58 + 0x2c) = uVar21;
              cVar26 = (**(code **)(pFVar59->MergeMesh->_padding_ + 0x470))();
              if (cVar26 != '\0') {
                if ((int)uVar65 < (int)uVar56) {
                  pFVar60 = (FColor_u_0 *)
                            ((pFVar33->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar65 * (pFVar33->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_288.Data <= pFVar60) &&
                      (pFVar60 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4))) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar28 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar28 + 1);
                  FVar30 = *pFVar60;
                }
                else {
                  local_294.Bits = 0xffffffff;
                  if (((local_288.Data <= &local_294) &&
                      (&local_294 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4)))
                     && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar28 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar28 + 1);
                  FVar30 = local_294;
                }
                *(FColor_u_0 *)(local_288.Data + (longlong)iVar28 * 4) = FVar30;
              }
              lVar36 = 0xc;
              do {
                if (*(ushort *)(pFVar58 + 0x18) != 0) {
                  uVar7 = *(ushort *)pFVar58;
                  if (((pFVar67->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar7) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  *(ushort *)pFVar58 =
                       *(ushort *)
                        ((pFVar67->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar7 * 2);
                }
                pFVar58 = pFVar58 + 2;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              uVar65 = uVar65 + 1;
              if ((int)uVar55 <= (int)uVar65) break;
            }
          }
          pFVar58 = local_260;
          *(uint *)(local_260 + 8) = *(int *)(local_260 + 8) + pFVar67->Section->NumTriangles;
          if (((pFVar33->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar28 = (**(code **)(((pFVar33->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar29 = local_234;
          uVar55 = pFVar67->Section->BaseIndex;
          uVar56 = pFVar67->Section->NumTriangles;
          iVar61 = uVar55 + uVar56 * 2 + uVar56;
          if (iVar61 < iVar28) {
            iVar28 = iVar61;
          }
          for (; (int)uVar55 < iVar28; uVar55 = uVar55 + 1) {
            if (((pFVar33->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pFVar12 = (pFVar33->MultiSizeIndexContainer).IndexBuffer;
            iVar61 = (**(code **)(pFVar12->_padding_ + 0x60))(pFVar12,uVar55);
            local_264 = (iVar61 - pFVar67->Section->BaseVertexIndex) + uVar29;
            if (((local_248.AllocatorInstance.Data <= (FScriptContainerElement *)&local_264) &&
                ((FScriptContainerElement *)&local_264 <
                 local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 4)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            iVar61 = local_248.ArrayNum;
            if (local_248.ArrayNum == local_248.ArrayMax) {
              iVar61 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_248.AllocatorInstance,&local_248.ArrayMax);
            }
            local_248.ArrayNum = iVar61 + 1;
            *(uint *)(local_248.AllocatorInstance.Data + (longlong)iVar61 * 4) = local_264;
            if (local_22c < local_264) {
              local_22c = local_264;
            }
            pFVar58 = local_260;
          }
          pFVar13 = pFVar67->Section;
          if ((pFVar13->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 8))(pFVar58 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar58 + 0xe0) + 8))
                      (pFVar58 + 0xe0,*(undefined4 *)(pFVar58 + 0x48));
            puVar44 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 0x18))(pFVar58 + 0xb8);
            pvVar45 = (void *)(**(code **)(*(longlong *)(pFVar58 + 0xe0) + 0x18))(pFVar58 + 0xe0);
            memset(pvVar45,0,(ulonglong)*(uint *)(pFVar58 + 0x48) << 3);
            *puVar44 = 0;
          }
          else {
            if (pFVar58[0x108] == (FScriptContainerElement)0x0) {
              pFVar4 = (ForAnyElementType *)(pFVar58 + 200);
              puVar2 = &(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar4 != (ForAnyElementType *)puVar2) {
                pvVar45 = *(void **)puVar2;
                pFVar62 = pFVar58 + 0xd4;
                iVar28 = *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar45 & 1) != 0) {
                  pvVar45 = puVar2 + ((longlong)pvVar45 >> 0x18);
                }
                *(int *)(pFVar58 + 0xd0) = iVar28;
                if ((iVar28 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar28,*(int *)pFVar62,pFVar4,iVar28,(int *)pFVar62);
                  FVar52 = *pFVar4;
                  if (((ulonglong)FVar52 & 1) != 0) {
                    FVar52 = (ForAnyElementType)
                             ((longlong)&pFVar4->field_0x0 + ((longlong)FVar52 >> 0x18));
                  }
                  if (iVar28 != 0) {
                    memcpy((void *)FVar52,pvVar45,(longlong)iVar28 << 2);
                  }
                }
              }
              pFVar4 = (ForAnyElementType *)(pFVar58 + 0xf0);
              pFVar58[0xd8] =
                   (FScriptContainerElement)
                   (pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar13 = pFVar67->Section;
              puVar2 = &(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar4 != (ForAnyElementType *)puVar2) {
                pvVar45 = *(void **)puVar2;
                pFVar62 = pFVar58 + 0xfc;
                iVar28 = *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar45 & 1) != 0) {
                  pvVar45 = &(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar45 >> 0x18);
                }
                *(int *)(pFVar58 + 0xf8) = iVar28;
                if ((iVar28 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar28,*(int *)pFVar62,pFVar4,iVar28,(int *)pFVar62);
                  FVar52 = *pFVar4;
                  if (((ulonglong)FVar52 & 1) != 0) {
                    FVar52 = (ForAnyElementType)
                             ((longlong)&pFVar4->field_0x0 + ((longlong)FVar52 >> 0x18));
                  }
                  if (iVar28 != 0) {
                    memcpy((void *)FVar52,pvVar45,(longlong)iVar28 << 3);
                  }
                }
              }
              pFVar58[0x100] =
                   (FScriptContainerElement)
                   (pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar41 = (int *)(**(code **)(*(longlong *)(pFVar58 + 0xb8) + 0x18))();
              iVar28 = 0;
              if (0 < *(int *)(pFVar58 + 0xd0)) {
                do {
                  iVar28 = iVar28 + 1;
                  *piVar41 = *piVar41 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar41 = piVar41 + 1;
                } while (iVar28 < *(int *)(pFVar58 + 0xd0));
              }
            }
            else {
              iVar28 = *(int *)(pFVar58 + 0xd0);
              uVar55 = *(uint *)(pFVar58 + 0xf8);
              (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 8))
                        (pFVar58 + 0xb8,
                         *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar28);
              (**(code **)(*(longlong *)(pFVar58 + 0xe0) + 8))
                        (pFVar58 + 0xe0,*(undefined4 *)(pFVar58 + 0x48));
              lVar36 = (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 0x18))(pFVar58 + 0xb8);
              lVar40 = (**(code **)(*(longlong *)(pFVar58 + 0xe0) + 0x18))();
              if (iVar28 < *(int *)(pFVar58 + 0xd0)) {
                piVar41 = (int *)(lVar36 + (longlong)iVar28 * 4);
                iVar61 = iVar28;
                do {
                  iVar61 = iVar61 + 1;
                  *piVar41 = *piVar41 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar41 = piVar41 + 1;
                } while (iVar61 < *(int *)(pFVar58 + 0xd0));
              }
              if (uVar55 < *(uint *)(pFVar58 + 0x48)) {
                do {
                  uVar43 = (ulonglong)uVar55;
                  uVar55 = uVar55 + 1;
                  piVar41 = (int *)(lVar40 + 4 + uVar43 * 8);
                  *piVar41 = *piVar41 + iVar28;
                } while (uVar55 < *(uint *)(pFVar58 + 0x48));
                pFVar58[0x108] = (FScriptContainerElement)0x1;
                goto LAB_1485f5829;
              }
            }
            pFVar58[0x108] = (FScriptContainerElement)0x1;
          }
LAB_1485f5829:
          local_218 = local_218 + 1;
          local_210 = local_210 + 0x30;
          iVar28 = *(int *)((longlong)(local_168->UVChannelData).LocalUVDensities +
                           local_258 + -0x30);
          uVar43 = local_258;
          FVar64.Data = (FScriptContainerElement *)local_168;
        } while ((int)local_218 < iVar28);
      }
      local_258 = uVar43 + 0x48;
      local_214 = local_214 + 1;
      this = local_220;
      pFVar31 = local_1d0;
      pFVar33 = local_250;
      pFVar34 = local_208;
    } while ((int)local_214 < local_1e0.ArrayNum);
  }
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar28 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar61 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar31,0);
    if (iVar61 <= iVar28) {
      bVar25 = false;
      goto LAB_1485f58d1;
    }
  }
  bVar25 = true;
LAB_1485f58d1:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar33->RequiredBones).AllocatorInstance.Data,
             (pFVar33->RequiredBones).ArrayNum,local_295,(TLess<void> *)&local_295);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar33->ActiveBoneIndices);
  pFVar31 = &(pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar34->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar31;
  FPositionVertexBuffer::Init
            (&(pFVar33->StaticVertexBuffers).PositionVertexBuffer,(uint)local_270,bVar25);
  FStaticMeshVertexBuffer::Init(pFVar31,(uint)local_270,local_290,bVar25);
  fVar24 = _UNK_15104007c;
  fVar23 = _UNK_151040078;
  fVar22 = _UNK_151040074;
  fVar68 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar55 = 0;
  if (0 < (int)(uint)local_270) {
    local_260 = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    do {
      lVar36 = local_1f0;
      pFVar58 = local_260;
      uVar56 = ~uVar55 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar55 < (int)(uint)local_270) {
        uVar29 = uVar56;
      }
      local_228 = uVar56;
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar43 = (ulonglong)(uVar55 * (pFVar33->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar14 = (pFVar33->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar8 = *(undefined4 *)(local_278.Data + lVar36 + 0x10);
      *(undefined8 *)(puVar14 + uVar43) = *(undefined8 *)(local_278.Data + lVar36 + 8);
      *(undefined4 *)(puVar14 + uVar43 + 8) = uVar8;
      uVar29 = 0;
      if ((int)uVar55 < (int)(uint)local_270) {
        uVar29 = uVar56;
      }
      if (uVar29 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      auVar69 = pmovsxbd(in_XMM1,*(undefined4 *)(local_278.Data + lVar36 + 4));
      uVar29 = 0;
      if ((int)uVar55 < (int)(uint)local_270) {
        uVar29 = uVar56;
      }
      fVar73 = (float)auVar69._8_4_ * fVar23;
      uVar10 = CONCAT44((float)auVar69._4_4_ * fVar22,(float)auVar69._0_4_ * fVar68);
      iVar28 = (uint)local_270;
      local_19c = uVar10;
      local_194 = fVar73;
      if (uVar29 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = (uint)local_270;
      }
      auVar69 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar36));
      auVar70 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar36 + 4));
      fVar71 = (float)auVar69._0_4_ * fVar68;
      fVar72 = (float)auVar69._4_4_ * fVar22;
      local_1a0 = (float)auVar69._8_4_ * fVar23;
      uVar29 = 0;
      if ((int)uVar55 < iVar28) {
        uVar29 = uVar56;
      }
      local_1a8 = CONCAT44(fVar72,fVar71);
      dVar16 = (double)local_1a0;
      dVar19 = (double)fVar71;
      dVar18 = (double)fVar72;
      dVar74 = (double)((float)auVar70._8_4_ * fVar23);
      dVar17 = (double)((float)auVar70._0_4_ * fVar68);
      dVar76 = (double)((float)auVar70._4_4_ * fVar22);
      dVar75 = (double)((float)auVar70._12_4_ * fVar24);
      auVar69._0_8_ = (dVar16 * dVar76 - dVar74 * dVar18) * dVar75;
      auVar69._8_8_ = 0;
      fVar71 = (float)auVar69._0_8_;
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar36));
      local_178._s_0.Z = (float)in_XMM1._8_4_ * fVar23;
      local_178._0_8_ = CONCAT44((float)in_XMM1._4_4_ * fVar22,(float)in_XMM1._0_4_ * fVar68);
      local_1b8._s_0.X = fVar71;
      local_1b8._s_0.Y = (float)((dVar74 * dVar19 - dVar16 * dVar17) * dVar75);
      local_1b8._s_0.Z = (float)((dVar17 * dVar18 - dVar76 * dVar19) * dVar75);
      local_188._0_8_ = uVar10;
      local_188._s_0.Z = fVar73;
      local_158 = local_178._0_8_;
      local_150 = local_178._s_0.Z;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar31,uVar55,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1b8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_290 != 0) {
        lVar63 = 0;
        local_210 = 0;
        lVar40 = lVar63;
        lVar66 = lVar63;
        local_258 = (ulonglong)local_290;
        do {
          lVar46 = local_210;
          uVar29 = 0;
          if ((int)uVar55 < (int)(uint)local_270) {
            uVar29 = uVar56;
          }
          if ((uVar29 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          FVar64.Data = local_278.Data;
          fVar73 = FGenericPlatformMath::LoadHalf
                             ((ushort *)(local_278.Data + lVar66 + lVar36 + 0x14));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(local_208._4_4_,fVar73);
          fVar71 = FGenericPlatformMath::LoadHalf((ushort *)(FVar64.Data + lVar66 + lVar36 + 0x16));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(fVar71,(undefined4)local_208);
          puVar14 = (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar54 = (ulonglong)(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar55;
          pcVar15 = *(code **)((longlong)
                               *(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_250->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            lVar46 = (*pcVar15)();
            if ((puVar14 + lVar46 < puVar14 + lVar66 + lVar54 * 4 + 4) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            this_00 = (FFloat16 *)(puVar14 + lVar40 + lVar54 * 4);
            if ((this_00 < (FFloat16 *)
                           (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((pFVar34->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              local_268.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_268.Encoded,fVar73);
              this_00->Encoded = local_268.Encoded;
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              local_266.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_266.Encoded,fVar71);
              this_00[1].Encoded = local_266.Encoded;
            }
            else {
              FFloat16::SetTruncate(this_00,fVar73);
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              FFloat16::SetTruncate(this_00 + 1,fVar71);
            }
          }
          else {
            lVar36 = (*pcVar15)();
            if ((puVar14 + lVar36 < puVar14 + lVar46 + lVar54 * 8 + 8) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((puVar14 + lVar46 + lVar54 * 8 <
                 (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15e,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            *(FSkeletalMeshLODInfo **)(puVar14 + lVar63 + lVar54 * 8) = local_208;
            lVar36 = local_1f0;
          }
          lVar66 = lVar66 + 4;
          local_210 = local_210 + 8;
          lVar63 = lVar63 + 8;
          lVar40 = lVar40 + 4;
          local_258 = local_258 - 1;
          uVar56 = local_228;
        } while (local_258 != 0);
        local_258 = 0;
        pFVar33 = local_250;
        pFVar31 = local_1d0;
        pFVar58 = local_260;
      }
      local_260 = pFVar58 + 1;
      local_1f0 = lVar36 + 0x18;
      uVar55 = uVar55 + 1;
    } while ((int)uVar55 < (int)(uint)local_270);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar33->SkinWeightVertexBuffer).DataVertexBuffer,local_230);
  (pFVar33->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_298;
  (pFVar33->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar25;
  (pFVar33->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar25;
  FSkinWeightVertexBuffer::operator=(&pFVar33->SkinWeightVertexBuffer,&local_200);
  cVar26 = (**(code **)(local_220->MergeMesh->_padding_ + 0x470))();
  if (cVar26 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar33->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_288.Data,
               (uint)local_280,4,true);
  }
  uVar53 = '\x04';
  if (local_22c < 0xffff) {
    uVar53 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar33->MultiSizeIndexContainer,uVar53,&local_248);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_288.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat16Uvs<2>_> @ 1485f6050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat16Uvs<2>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  FFloat16 *this_00;
  ForAnyElementType *pFVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar8;
  undefined8 uVar9;
  FName FVar10;
  FRawStaticIndexBuffer16or32Interface *pFVar11;
  FSkelMeshRenderSection *pFVar12;
  uchar *puVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  FColor_u_0 FVar29;
  FStaticMeshVertexBuffer *pFVar30;
  FSkeletalMeshLODRenderData *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODInfo *pFVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  longlong *plVar36;
  ForAnyElementType *pFVar37;
  float *pfVar38;
  longlong lVar39;
  int *piVar40;
  FSkinWeightInfo *pFVar41;
  ulonglong uVar42;
  undefined4 *puVar43;
  void *pvVar44;
  FReferenceSkeleton *this_01;
  longlong lVar45;
  byte bVar46;
  uint uVar47;
  ulonglong uVar48;
  FScriptContainerElement *pFVar49;
  FSkinWeightVertexBuffer *pFVar50;
  ForAnyElementType FVar51;
  uchar uVar52;
  longlong lVar53;
  uint uVar54;
  uint uVar55;
  FSkeletalMaterial *pFVar56;
  FScriptContainerElement *pFVar57;
  FSkeletalMeshMerge *pFVar58;
  TGPUSkinVertexFloat16Uvs<2> *pTVar59;
  FColor_u_0 *pFVar60;
  int iVar61;
  FScriptContainerElement *pFVar62;
  longlong lVar63;
  ForAnyElementType FVar64;
  uint uVar65;
  longlong lVar66;
  FMergeSectionInfo *pFVar67;
  float fVar68;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auStackY_2e8 [32];
  bool local_298;
  FIdentityFunctor local_295;
  FColor_u_0 local_294;
  uint local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  FFloat16 local_268;
  FFloat16 local_266;
  uint local_264;
  FScriptContainerElement *local_260;
  ulonglong local_258;
  FSkeletalMeshLODRenderData *local_250;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_248;
  ushort local_238 [2];
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  FSkeletalMeshMerge *local_220;
  uint local_218;
  uint local_214;
  longlong local_210;
  undefined8 local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  longlong local_1f0;
  FSkeletalMeshLODRenderData *local_1e8;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e0;
  FStaticMeshVertexBuffer *local_1d0;
  undefined8 local_1c8;
  TVector<float>_u_0 local_1b8;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  FNewSectionInfo *local_168;
  longlong local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1f0 = CONCAT44(local_1f0._4_4_,param_1);
  local_220 = this;
  pFVar30 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar30;
  if ((pFVar30 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar31 = ::operator_new(0x768);
  pFVar32 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar31 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar32 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar31,true);
  }
  pFVar57 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data;
  local_250 = pFVar32;
  local_1e8 = pFVar32;
  if (((pFVar57 <= (FScriptContainerElement *)&local_1e8) &&
      ((FScriptContainerElement *)&local_1e8 <
       pFVar57 + (longlong)(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar27 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum;
  piVar40 = &(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax;
  if (iVar27 == *piVar40) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar30,piVar40);
  }
  (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum = iVar27 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar27 * 8) = local_1e8;
  pFVar33 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar33->LODHysteresis = 3.4028235e+38;
  (pFVar33->ScreenSize).Default = 3.4028235e+38;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_208 = pFVar33;
  GenerateNewSectionArray(this,&local_1e0,param_1);
  local_22c = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_290 = 0;
  local_230 = 0;
  local_298 = false;
  local_214 = 0;
  if (0 < local_1e0.ArrayNum) {
    local_258 = 0;
    do {
      uVar42 = local_258;
      uVar54 = 0;
      if ((int)local_214 < local_1e0.ArrayNum) {
        uVar54 = ~local_214 >> 0x1f;
      }
      if ((uVar54 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      FVar64.Data = local_1e0.AllocatorInstance.Data;
      uVar54 = 0;
      local_168 = (FNewSectionInfo *)local_1e0.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e0.AllocatorInstance.Data + uVar42 + 0x18)) {
        do {
          uVar55 = 0;
          if ((int)uVar54 < *(int *)(FVar64.Data + uVar42 + 0x18)) {
            uVar55 = ~uVar54 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar32->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar64.Data + uVar42 + 0x10) + (longlong)(int)uVar54 * 2));
          uVar54 = uVar54 + 1;
        } while ((int)uVar54 < *(int *)(FVar64.Data + uVar42 + 0x18));
      }
      piVar40 = &(pFVar32->RenderSections).ArrayMax;
      uVar54 = (pFVar32->RenderSections).ArrayNum;
      if (uVar54 == *piVar40) {
        uVar54 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar32->RenderSections).AllocatorInstance,piVar40);
      }
      (pFVar32->RenderSections).ArrayNum = uVar54 + 1;
      uVar55 = 0;
      if ((int)uVar54 < (int)(uVar54 + 1)) {
        uVar55 = ~uVar54 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar57 = (FScriptContainerElement *)0x0;
      pFVar62 = (pFVar32->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar54 * 0x118;
      if (pFVar62 == (FScriptContainerElement *)0x0) {
        local_260 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar62 = 0;
        *(ushort *)(pFVar62 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar62 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar62 + 4) = 0;
        *(undefined8 *)(pFVar62 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar62 + 0x18) = 0;
        *(undefined8 *)(pFVar62 + 0x20) = 0;
        *(undefined8 *)(pFVar62 + 0x28) = 0;
        *(undefined8 *)(pFVar62 + 0x30) = 0;
        *(undefined8 *)(pFVar62 + 0x38) = 0;
        *(undefined8 *)(pFVar62 + 0x40) = 0;
        *(undefined4 *)(pFVar62 + 0x48) = 0;
        *(undefined4 *)(pFVar62 + 0x4c) = 4;
        *(undefined8 *)(pFVar62 + 0x54) = 0;
        *(undefined8 *)(pFVar62 + 0x5c) = 0;
        local_260 = pFVar62;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar62 + 0x68));
        *(undefined ***)(pFVar62 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar62 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar62 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar62 + 0x88) = 0;
        *(undefined8 *)(pFVar62 + 0x90) = 0;
        *(undefined4 *)(pFVar62 + 0x98) = 0;
        *(undefined8 *)(pFVar62 + 0xa0) = 0;
        *(undefined8 *)(pFVar62 + 0xa8) = 0;
        *(undefined4 *)(pFVar62 + 0xb0) = 0;
        *(undefined8 *)(pFVar62 + 200) = 0;
        *(undefined8 *)(pFVar62 + 0xd0) = 0;
        pFVar62[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar62 + 0xf0) = 0;
        *(undefined8 *)(pFVar62 + 0xf8) = 0;
        pFVar62[0x100] = (FScriptContainerElement)0x0;
        pFVar62[0x108] = (FScriptContainerElement)0x0;
        pFVar62[0x110] = (FScriptContainerElement)0x0;
        pFVar57 = pFVar62;
      }
      pFVar34 = FVar64.Data + uVar42 + 0x10;
      pFVar62 = pFVar57 + 0x38;
      if (pFVar62 != pFVar34) {
        iVar27 = *(int *)(pFVar34 + 8);
        pFVar49 = pFVar57 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar34;
        *(int *)(pFVar57 + 0x40) = iVar27;
        if ((iVar27 == 0) && (*(int *)pFVar49 == 0)) {
          *(int *)pFVar49 = 0;
          uVar42 = local_258;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar27,*(int *)pFVar49,(ForAnyElementType *)pFVar62,iVar27,(int *)pFVar49);
          uVar42 = local_258;
          if (iVar27 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar62,_Src.Data,(longlong)iVar27 * 2);
            uVar42 = local_258;
          }
        }
      }
      pFVar58 = local_220;
      *(undefined4 *)(pFVar57 + 0x48) = 0;
      *(uint *)(pFVar57 + 0x10) = (uint)local_270;
      lVar35 = (**(code **)(local_220->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar35 + 8) != (pFVar58->MaterialIds).ArrayNum) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar62 = FVar64.Data + uVar42 + 0x28;
      if (*(int *)pFVar62 == -1) {
        plVar36 = (longlong *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar64.Data + uVar42 + 0x20))->DebugPtr;
        local_1c8 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar8 = (FSkeletalMaterial *)*plVar36;
        lVar35 = plVar36[1];
        local_110 = local_1c8;
        for (pFVar56 = pFVar8; pFVar56 != pFVar8 + (int)lVar35; pFVar56 = pFVar56 + 1) {
          bVar24 = ::operator==(pFVar56,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar24) {
            lVar35 = ((longlong)pFVar56 - (longlong)pFVar8) / 6 +
                     ((longlong)pFVar56 - (longlong)pFVar8 >> 0x3f);
            uVar48 = (lVar35 >> 3) - (lVar35 >> 0x3f);
            uVar42 = local_258;
            pFVar58 = local_220;
            goto LAB_1485f66a6;
          }
        }
        uVar48 = 0xffffffff;
        uVar42 = local_258;
        pFVar58 = local_220;
      }
      else {
        pFVar34 = (pFVar58->MaterialIds).AllocatorInstance.Data;
        for (pFVar49 = pFVar34; pFVar49 != pFVar34 + (longlong)(pFVar58->MaterialIds).ArrayNum * 4;
            pFVar49 = pFVar49 + 4) {
          if (*(int *)pFVar49 == *(int *)pFVar62) {
            uVar48 = (longlong)pFVar49 - (longlong)pFVar34 >> 2;
            goto LAB_1485f66a6;
          }
        }
        uVar48 = 0xffffffff;
      }
LAB_1485f66a6:
      if ((int)uVar48 == -1) {
        local_148 = *(UObject **)(FVar64.Data + uVar42 + 0x20);
        uVar9 = *(undefined8 *)(FVar64.Data + uVar42 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar34 = FVar64.Data + uVar42 + 0x34;
        local_138 = *(undefined4 *)pFVar34;
        uStack_134 = *(undefined4 *)(pFVar34 + 4);
        uStack_130 = *(undefined4 *)(pFVar34 + 8);
        uStack_12c = *(undefined4 *)(pFVar34 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar64.Data + uVar42 + 0x44);
        local_140 = uVar9;
        pFVar37 = (ForAnyElementType *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar37->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar37->Data + (longlong)*(int *)((longlong)&pFVar37[1].Data + 4) * 0x30)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = *(int *)&pFVar37[1].Data;
        piVar40 = (int *)((longlong)&pFVar37[1].Data + 4);
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar37,piVar40);
        }
        lVar35 = (longlong)iVar27;
        *(int *)&pFVar37[1].Data = iVar27 + 1;
        pFVar34 = pFVar37->Data;
        *(UObject **)(pFVar34 + lVar35 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar34 + lVar35 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar34 + lVar35 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar34 + lVar35 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar58 = local_220;
        pTVar1 = &local_220->MaterialIds;
        pFVar34 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar34 <= pFVar62) &&
            (pFVar62 < pFVar34 + (longlong)(local_220->MaterialIds).ArrayMax * 4)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (pFVar58->MaterialIds).ArrayNum;
        piVar40 = &(pFVar58->MaterialIds).ArrayMax;
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar40);
        }
        (pFVar58->MaterialIds).ArrayNum = iVar27 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar27 * 4) = *(int *)pFVar62;
        lVar35 = (**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        uVar48 = (ulonglong)(ushort)(*(short *)(lVar35 + 8) - 1);
      }
      *(ushort *)pFVar57 = (ushort)uVar48;
      *(undefined4 *)(pFVar57 + 8) = 0;
      *(int *)(pFVar57 + 4) = local_248.ArrayNum;
      plVar36 = (longlong *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
      uVar6 = *(ushort *)pFVar57;
      if (((int)plVar36[1] <= (int)(uint)uVar6) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar27 = *(int *)(FVar64.Data + uVar42 + 8);
      local_160 = (ulonglong)uVar6 * 0x30 + *plVar36;
      local_218 = 0;
      if (0 < iVar27) {
        local_210 = 0;
        do {
          lVar39 = local_160;
          lVar35 = local_210;
          uVar54 = 0;
          if ((int)local_218 < iVar27) {
            uVar54 = ~local_218 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar67 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar64.Data)->UVChannelData).LocalUVDensities
                      + uVar42 + -0x38) + lVar35);
          lVar35 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar54 = *(int *)(lVar35 + 8) - 1;
          if ((int)(uint)local_1f0 < (int)uVar54) {
            uVar54 = (uint)local_1f0;
          }
          uVar6 = pFVar67->Section->MaterialIndex;
          uVar42 = (ulonglong)uVar6;
          lVar35 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar6 < *(int *)(lVar35 + 8)) {
            plVar36 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar36[1] <= (int)(uint)uVar6) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            lVar35 = *plVar36;
            fVar68 = *(float *)(lVar35 + 0x14 + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x14)) {
              fVar68 = *(float *)(lVar39 + 0x14);
            }
            *(float *)(lVar39 + 0x14) = fVar68;
            fVar68 = *(float *)(lVar35 + 0x18 + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x18)) {
              fVar68 = *(float *)(lVar39 + 0x18);
            }
            *(float *)(lVar39 + 0x18) = fVar68;
            fVar68 = *(float *)(lVar35 + 0x1c + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x1c)) {
              fVar68 = *(float *)(lVar39 + 0x1c);
            }
            *(float *)(lVar39 + 0x1c) = fVar68;
            fVar68 = *(float *)(lVar35 + 0x20 + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x20)) {
              fVar68 = *(float *)(lVar39 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar68);
            *(float *)(lVar39 + 0x20) = fVar68;
          }
          pfVar38 = (float *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x328))
                                       (pFVar67->SkelMesh,uVar54);
          bVar4 = *(byte *)&local_208->BuildSettings;
          fVar68 = (local_208->ScreenSize).Default;
          if (*pfVar38 <= fVar68) {
            fVar68 = *pfVar38;
          }
          (local_208->ScreenSize).Default = fVar68;
          bVar46 = bVar4 | *(byte *)(pfVar38 + 6);
          uVar5 = (local_208->BuildSettings).field_0x1;
          bVar46 = (bVar4 ^ bVar46) & 0x7f ^ bVar46;
          *(byte *)&local_208->BuildSettings = bVar46;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar38 + 0x19)) & 1 ^ uVar5 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar46 | *(byte *)(pfVar38 + 6)) & 0x20 ^ bVar46 & 0xdf;
          fVar68 = pfVar38[1];
          if (local_208->LODHysteresis <= pfVar38[1]) {
            fVar68 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar68;
          plVar36 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar55 = 0;
          if ((int)uVar54 < (int)plVar36[1]) {
            uVar55 = ~uVar54 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar31 = local_250;
          uVar55 = 0;
          pFVar32 = *(FSkeletalMeshLODRenderData **)(*plVar36 + (longlong)(int)uVar54 * 8);
          if (0 < (pFVar32->RequiredBones).ArrayNum) {
            lVar35 = 0;
            do {
              lVar39 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x318))();
              uVar54 = 0;
              if ((int)uVar55 < (pFVar32->RequiredBones).ArrayNum) {
                uVar54 = ~uVar55 >> 0x1f;
              }
              if ((uVar54 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              uVar6 = *(ushort *)((pFVar32->RequiredBones).AllocatorInstance.Data + lVar35);
              if ((*(int *)(lVar39 + 0x28) <= (int)(uint)uVar6) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar10 = *(FName *)(*(longlong *)(lVar39 + 0x20) + (ulonglong)uVar6 * 0xc);
              if (((FVar10 != (FName)0x0) &&
                  (piVar40 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_220->NewRefSkeleton).FinalNameToIndexMap,FVar10),
                  piVar40 != (int *)0x0)) && (*piVar40 != -1)) {
                local_238[0] = (ushort)*piVar40;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar31->RequiredBones,local_238);
              }
              uVar55 = uVar55 + 1;
              lVar35 = lVar35 + 2;
              pFVar57 = local_260;
            } while ((int)uVar55 < (pFVar32->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar57 + 0x48) = *(int *)(pFVar57 + 0x48) + pFVar67->Section->NumVertices;
          uVar54 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_228 = (pFVar32->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar55 = pFVar67->Section->NumVertices + pFVar67->Section->BaseVertexIndex;
          if ((int)uVar55 < (int)uVar54) {
            uVar54 = uVar55;
          }
          pFVar50 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar50 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar50 = &pFVar32->SkinWeightVertexBuffer;
          }
          uVar55 = (pFVar50->DataVertexBuffer).MaxBoneInfluences;
          uVar28 = uVar55;
          if (uVar55 < local_230) {
            uVar28 = local_230;
          }
          local_298 = (bool)(local_298 | (pFVar50->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_260 + 0x4c) = uVar55;
          uVar55 = (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar55 <= local_290) {
            uVar55 = local_290;
          }
          local_234 = (uint)local_270;
          uVar65 = pFVar67->Section->BaseVertexIndex;
          local_290 = uVar55;
          local_230 = uVar28;
          if ((int)uVar65 < (int)uVar54) {
            while( true ) {
              uVar55 = local_228;
              uVar28 = (uint)local_270;
              if ((uint)local_270 == local_270._4_4_) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x41c,&local_278,(int *)((longlong)&local_270 + 4));
              }
              local_270 = CONCAT44(local_270._4_4_,uVar28 + 1);
              uVar47 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar47 = ~uVar28 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar59 = (TGPUSkinVertexFloat16Uvs<2> *)
                        (local_278.Data + (longlong)(int)uVar28 * 0x1c);
              uVar28 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar28 + 1;
              uVar47 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar47 = ~uVar28 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar58 = local_220;
              pFVar57 = local_200.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<2>_>
                        (local_220,pTVar59,pFVar32,uVar65,pFVar67);
              pFVar50 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar50 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar50 = &pFVar32->SkinWeightVertexBuffer;
              }
              pFVar41 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar50,&local_e8,uVar65);
              uVar9 = *(undefined8 *)(pFVar41->InfluenceBones + 4);
              *(undefined8 *)pFVar57 = *(undefined8 *)pFVar41->InfluenceBones;
              *(undefined8 *)(pFVar57 + 8) = uVar9;
              in_XMM1 = *(undefined1 (*) [16])(pFVar41->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar57 + 0x10) = in_XMM1;
              uVar7 = *(undefined4 *)(pFVar41->InfluenceWeights + 6);
              uVar19 = *(undefined4 *)(pFVar41->InfluenceWeights + 8);
              uVar20 = *(undefined4 *)(pFVar41->InfluenceWeights + 10);
              *(undefined4 *)(pFVar57 + 0x20) = *(undefined4 *)(pFVar41->InfluenceWeights + 4);
              *(undefined4 *)(pFVar57 + 0x24) = uVar7;
              *(undefined4 *)(pFVar57 + 0x28) = uVar19;
              *(undefined4 *)(pFVar57 + 0x2c) = uVar20;
              cVar25 = (**(code **)(pFVar58->MergeMesh->_padding_ + 0x470))();
              if (cVar25 != '\0') {
                if ((int)uVar65 < (int)uVar55) {
                  pFVar60 = (FColor_u_0 *)
                            ((pFVar32->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar65 * (pFVar32->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_288.Data <= pFVar60) &&
                      (pFVar60 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4))) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar27 + 1);
                  FVar29 = *pFVar60;
                }
                else {
                  local_294.Bits = 0xffffffff;
                  if (((local_288.Data <= &local_294) &&
                      (&local_294 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4)))
                     && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar27 + 1);
                  FVar29 = local_294;
                }
                *(FColor_u_0 *)(local_288.Data + (longlong)iVar27 * 4) = FVar29;
              }
              lVar35 = 0xc;
              do {
                if (*(ushort *)(pFVar57 + 0x18) != 0) {
                  uVar6 = *(ushort *)pFVar57;
                  if (((pFVar67->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar6) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ushort *)pFVar57 =
                       *(ushort *)
                        ((pFVar67->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar6 * 2);
                }
                pFVar57 = pFVar57 + 2;
                lVar35 = lVar35 + -1;
              } while (lVar35 != 0);
              uVar65 = uVar65 + 1;
              if ((int)uVar54 <= (int)uVar65) break;
            }
          }
          pFVar57 = local_260;
          *(uint *)(local_260 + 8) = *(int *)(local_260 + 8) + pFVar67->Section->NumTriangles;
          if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar27 = (**(code **)(((pFVar32->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar28 = local_234;
          uVar54 = pFVar67->Section->BaseIndex;
          uVar55 = pFVar67->Section->NumTriangles;
          iVar61 = uVar54 + uVar55 * 2 + uVar55;
          if (iVar61 < iVar27) {
            iVar27 = iVar61;
          }
          for (; (int)uVar54 < iVar27; uVar54 = uVar54 + 1) {
            if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pFVar32->MultiSizeIndexContainer).IndexBuffer;
            iVar61 = (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,uVar54);
            local_264 = (iVar61 - pFVar67->Section->BaseVertexIndex) + uVar28;
            if (((local_248.AllocatorInstance.Data <= (FScriptContainerElement *)&local_264) &&
                ((FScriptContainerElement *)&local_264 <
                 local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 4)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar61 = local_248.ArrayNum;
            if (local_248.ArrayNum == local_248.ArrayMax) {
              iVar61 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_248.AllocatorInstance,&local_248.ArrayMax);
            }
            local_248.ArrayNum = iVar61 + 1;
            *(uint *)(local_248.AllocatorInstance.Data + (longlong)iVar61 * 4) = local_264;
            if (local_22c < local_264) {
              local_22c = local_264;
            }
            pFVar57 = local_260;
          }
          pFVar12 = pFVar67->Section;
          if ((pFVar12->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 8))(pFVar57 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar57 + 0xe0) + 8))
                      (pFVar57 + 0xe0,*(undefined4 *)(pFVar57 + 0x48));
            puVar43 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 0x18))(pFVar57 + 0xb8);
            pvVar44 = (void *)(**(code **)(*(longlong *)(pFVar57 + 0xe0) + 0x18))(pFVar57 + 0xe0);
            memset(pvVar44,0,(ulonglong)*(uint *)(pFVar57 + 0x48) << 3);
            *puVar43 = 0;
          }
          else {
            if (pFVar57[0x108] == (FScriptContainerElement)0x0) {
              pFVar3 = (ForAnyElementType *)(pFVar57 + 200);
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar44 = *(void **)puVar2;
                pFVar62 = pFVar57 + 0xd4;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar44 & 1) != 0) {
                  pvVar44 = puVar2 + ((longlong)pvVar44 >> 0x18);
                }
                *(int *)(pFVar57 + 0xd0) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar27,*(int *)pFVar62,pFVar3,iVar27,(int *)pFVar62);
                  FVar51 = *pFVar3;
                  if (((ulonglong)FVar51 & 1) != 0) {
                    FVar51 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar51 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar51,pvVar44,(longlong)iVar27 << 2);
                  }
                }
              }
              pFVar3 = (ForAnyElementType *)(pFVar57 + 0xf0);
              pFVar57[0xd8] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar12 = pFVar67->Section;
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar44 = *(void **)puVar2;
                pFVar62 = pFVar57 + 0xfc;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar44 & 1) != 0) {
                  pvVar44 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar44 >> 0x18);
                }
                *(int *)(pFVar57 + 0xf8) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar27,*(int *)pFVar62,pFVar3,iVar27,(int *)pFVar62);
                  FVar51 = *pFVar3;
                  if (((ulonglong)FVar51 & 1) != 0) {
                    FVar51 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar51 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar51,pvVar44,(longlong)iVar27 << 3);
                  }
                }
              }
              pFVar57[0x100] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar40 = (int *)(**(code **)(*(longlong *)(pFVar57 + 0xb8) + 0x18))();
              iVar27 = 0;
              if (0 < *(int *)(pFVar57 + 0xd0)) {
                do {
                  iVar27 = iVar27 + 1;
                  *piVar40 = *piVar40 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar27 < *(int *)(pFVar57 + 0xd0));
              }
            }
            else {
              iVar27 = *(int *)(pFVar57 + 0xd0);
              uVar54 = *(uint *)(pFVar57 + 0xf8);
              (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 8))
                        (pFVar57 + 0xb8,
                         *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar27);
              (**(code **)(*(longlong *)(pFVar57 + 0xe0) + 8))
                        (pFVar57 + 0xe0,*(undefined4 *)(pFVar57 + 0x48));
              lVar35 = (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 0x18))(pFVar57 + 0xb8);
              lVar39 = (**(code **)(*(longlong *)(pFVar57 + 0xe0) + 0x18))();
              if (iVar27 < *(int *)(pFVar57 + 0xd0)) {
                piVar40 = (int *)(lVar35 + (longlong)iVar27 * 4);
                iVar61 = iVar27;
                do {
                  iVar61 = iVar61 + 1;
                  *piVar40 = *piVar40 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar61 < *(int *)(pFVar57 + 0xd0));
              }
              if (uVar54 < *(uint *)(pFVar57 + 0x48)) {
                do {
                  uVar42 = (ulonglong)uVar54;
                  uVar54 = uVar54 + 1;
                  piVar40 = (int *)(lVar39 + 4 + uVar42 * 8);
                  *piVar40 = *piVar40 + iVar27;
                } while (uVar54 < *(uint *)(pFVar57 + 0x48));
                pFVar57[0x108] = (FScriptContainerElement)0x1;
                goto LAB_1485f7479;
              }
            }
            pFVar57[0x108] = (FScriptContainerElement)0x1;
          }
LAB_1485f7479:
          local_218 = local_218 + 1;
          local_210 = local_210 + 0x30;
          iVar27 = *(int *)((longlong)(local_168->UVChannelData).LocalUVDensities +
                           local_258 + -0x30);
          uVar42 = local_258;
          FVar64.Data = (FScriptContainerElement *)local_168;
        } while ((int)local_218 < iVar27);
      }
      local_258 = uVar42 + 0x48;
      local_214 = local_214 + 1;
      this = local_220;
      pFVar30 = local_1d0;
      pFVar32 = local_250;
      pFVar33 = local_208;
    } while ((int)local_214 < local_1e0.ArrayNum);
  }
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar27 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar61 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar30,0);
    if (iVar61 <= iVar27) {
      bVar24 = false;
      goto LAB_1485f7521;
    }
  }
  bVar24 = true;
LAB_1485f7521:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar32->RequiredBones).AllocatorInstance.Data,
             (pFVar32->RequiredBones).ArrayNum,local_295,(TLess<void> *)&local_295);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar32->ActiveBoneIndices);
  pFVar30 = &(pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar33->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar30;
  FPositionVertexBuffer::Init
            (&(pFVar32->StaticVertexBuffers).PositionVertexBuffer,(uint)local_270,bVar24);
  FStaticMeshVertexBuffer::Init(pFVar30,(uint)local_270,local_290,bVar24);
  fVar23 = _UNK_15104007c;
  fVar22 = _UNK_151040078;
  fVar21 = _UNK_151040074;
  fVar68 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar54 = 0;
  if (0 < (int)(uint)local_270) {
    local_260 = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    do {
      lVar35 = local_1f0;
      pFVar57 = local_260;
      uVar55 = ~uVar54 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar54 < (int)(uint)local_270) {
        uVar28 = uVar55;
      }
      local_228 = uVar55;
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar42 = (ulonglong)(uVar54 * (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar13 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar7 = *(undefined4 *)(local_278.Data + lVar35 + 0x10);
      *(undefined8 *)(puVar13 + uVar42) = *(undefined8 *)(local_278.Data + lVar35 + 8);
      *(undefined4 *)(puVar13 + uVar42 + 8) = uVar7;
      uVar28 = 0;
      if ((int)uVar54 < (int)(uint)local_270) {
        uVar28 = uVar55;
      }
      if (uVar28 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      auVar69 = pmovsxbd(in_XMM1,*(undefined4 *)(local_278.Data + lVar35 + 4));
      uVar28 = 0;
      if ((int)uVar54 < (int)(uint)local_270) {
        uVar28 = uVar55;
      }
      fVar73 = (float)auVar69._8_4_ * fVar22;
      uVar9 = CONCAT44((float)auVar69._4_4_ * fVar21,(float)auVar69._0_4_ * fVar68);
      iVar27 = (uint)local_270;
      local_19c = uVar9;
      local_194 = fVar73;
      if (uVar28 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (uint)local_270;
      }
      auVar69 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar35));
      auVar70 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar35 + 4));
      fVar71 = (float)auVar69._0_4_ * fVar68;
      fVar72 = (float)auVar69._4_4_ * fVar21;
      local_1a0 = (float)auVar69._8_4_ * fVar22;
      uVar28 = 0;
      if ((int)uVar54 < iVar27) {
        uVar28 = uVar55;
      }
      local_1a8 = CONCAT44(fVar72,fVar71);
      dVar15 = (double)local_1a0;
      dVar18 = (double)fVar71;
      dVar17 = (double)fVar72;
      dVar74 = (double)((float)auVar70._8_4_ * fVar22);
      dVar16 = (double)((float)auVar70._0_4_ * fVar68);
      dVar76 = (double)((float)auVar70._4_4_ * fVar21);
      dVar75 = (double)((float)auVar70._12_4_ * fVar23);
      auVar69._0_8_ = (dVar15 * dVar76 - dVar74 * dVar17) * dVar75;
      auVar69._8_8_ = 0;
      fVar71 = (float)auVar69._0_8_;
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar35));
      local_178._s_0.Z = (float)in_XMM1._8_4_ * fVar22;
      local_178._0_8_ = CONCAT44((float)in_XMM1._4_4_ * fVar21,(float)in_XMM1._0_4_ * fVar68);
      local_1b8._s_0.X = fVar71;
      local_1b8._s_0.Y = (float)((dVar74 * dVar18 - dVar15 * dVar16) * dVar75);
      local_1b8._s_0.Z = (float)((dVar16 * dVar17 - dVar76 * dVar18) * dVar75);
      local_188._0_8_ = uVar9;
      local_188._s_0.Z = fVar73;
      local_158 = local_178._0_8_;
      local_150 = local_178._s_0.Z;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar30,uVar54,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1b8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_290 != 0) {
        lVar63 = 0;
        local_210 = 0;
        lVar39 = lVar63;
        lVar66 = lVar63;
        local_258 = (ulonglong)local_290;
        do {
          lVar45 = local_210;
          uVar28 = 0;
          if ((int)uVar54 < (int)(uint)local_270) {
            uVar28 = uVar55;
          }
          if ((uVar28 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          FVar64.Data = local_278.Data;
          fVar73 = FGenericPlatformMath::LoadHalf
                             ((ushort *)(local_278.Data + lVar66 + lVar35 + 0x14));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(local_208._4_4_,fVar73);
          fVar71 = FGenericPlatformMath::LoadHalf((ushort *)(FVar64.Data + lVar66 + lVar35 + 0x16));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(fVar71,(undefined4)local_208);
          puVar13 = (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar53 = (ulonglong)(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar54;
          pcVar14 = *(code **)((longlong)
                               *(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_250->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            lVar45 = (*pcVar14)();
            if ((puVar13 + lVar45 < puVar13 + lVar66 + lVar53 * 4 + 4) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            this_00 = (FFloat16 *)(puVar13 + lVar39 + lVar53 * 4);
            if ((this_00 < (FFloat16 *)
                           (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((pFVar33->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              local_268.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_268.Encoded,fVar73);
              this_00->Encoded = local_268.Encoded;
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              local_266.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_266.Encoded,fVar71);
              this_00[1].Encoded = local_266.Encoded;
            }
            else {
              FFloat16::SetTruncate(this_00,fVar73);
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              FFloat16::SetTruncate(this_00 + 1,fVar71);
            }
          }
          else {
            lVar35 = (*pcVar14)();
            if ((puVar13 + lVar35 < puVar13 + lVar45 + lVar53 * 8 + 8) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((puVar13 + lVar45 + lVar53 * 8 <
                 (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15e,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            *(FSkeletalMeshLODInfo **)(puVar13 + lVar63 + lVar53 * 8) = local_208;
            lVar35 = local_1f0;
          }
          lVar66 = lVar66 + 4;
          local_210 = local_210 + 8;
          lVar63 = lVar63 + 8;
          lVar39 = lVar39 + 4;
          local_258 = local_258 - 1;
          uVar55 = local_228;
        } while (local_258 != 0);
        local_258 = 0;
        pFVar32 = local_250;
        pFVar30 = local_1d0;
        pFVar57 = local_260;
      }
      local_260 = pFVar57 + 1;
      local_1f0 = lVar35 + 0x1c;
      uVar54 = uVar54 + 1;
    } while ((int)uVar54 < (int)(uint)local_270);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar32->SkinWeightVertexBuffer).DataVertexBuffer,local_230);
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_298;
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar24;
  (pFVar32->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar24;
  FSkinWeightVertexBuffer::operator=(&pFVar32->SkinWeightVertexBuffer,&local_200);
  cVar25 = (**(code **)(local_220->MergeMesh->_padding_ + 0x470))();
  if (cVar25 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar32->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_288.Data,
               (uint)local_280,4,true);
  }
  uVar52 = '\x04';
  if (local_22c < 0xffff) {
    uVar52 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar32->MultiSizeIndexContainer,uVar52,&local_248);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_288.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat16Uvs<3>_> @ 1485f7ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat16Uvs<3>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  FFloat16 *this_00;
  ForAnyElementType *pFVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar8;
  undefined8 uVar9;
  FName FVar10;
  FRawStaticIndexBuffer16or32Interface *pFVar11;
  FSkelMeshRenderSection *pFVar12;
  uchar *puVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  FColor_u_0 FVar29;
  FStaticMeshVertexBuffer *pFVar30;
  FSkeletalMeshLODRenderData *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODInfo *pFVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  longlong *plVar36;
  ForAnyElementType *pFVar37;
  float *pfVar38;
  longlong lVar39;
  int *piVar40;
  FSkinWeightInfo *pFVar41;
  ulonglong uVar42;
  undefined4 *puVar43;
  void *pvVar44;
  FReferenceSkeleton *this_01;
  longlong lVar45;
  byte bVar46;
  uint uVar47;
  ulonglong uVar48;
  FScriptContainerElement *pFVar49;
  FSkinWeightVertexBuffer *pFVar50;
  ForAnyElementType FVar51;
  uchar uVar52;
  longlong lVar53;
  uint uVar54;
  uint uVar55;
  FSkeletalMaterial *pFVar56;
  FScriptContainerElement *pFVar57;
  FSkeletalMeshMerge *pFVar58;
  TGPUSkinVertexFloat16Uvs<3> *pTVar59;
  FColor_u_0 *pFVar60;
  int iVar61;
  FScriptContainerElement *pFVar62;
  longlong lVar63;
  ForAnyElementType FVar64;
  uint uVar65;
  longlong lVar66;
  FMergeSectionInfo *pFVar67;
  float fVar68;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auStackY_2e8 [32];
  bool local_298;
  FIdentityFunctor local_295;
  FColor_u_0 local_294;
  uint local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  FFloat16 local_268;
  FFloat16 local_266;
  uint local_264;
  FScriptContainerElement *local_260;
  ulonglong local_258;
  FSkeletalMeshLODRenderData *local_250;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_248;
  ushort local_238 [2];
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  FSkeletalMeshMerge *local_220;
  uint local_218;
  uint local_214;
  longlong local_210;
  undefined8 local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  longlong local_1f0;
  FSkeletalMeshLODRenderData *local_1e8;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e0;
  FStaticMeshVertexBuffer *local_1d0;
  undefined8 local_1c8;
  TVector<float>_u_0 local_1b8;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  FNewSectionInfo *local_168;
  longlong local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1f0 = CONCAT44(local_1f0._4_4_,param_1);
  local_220 = this;
  pFVar30 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar30;
  if ((pFVar30 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar31 = ::operator_new(0x768);
  pFVar32 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar31 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar32 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar31,true);
  }
  pFVar57 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data;
  local_250 = pFVar32;
  local_1e8 = pFVar32;
  if (((pFVar57 <= (FScriptContainerElement *)&local_1e8) &&
      ((FScriptContainerElement *)&local_1e8 <
       pFVar57 + (longlong)(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar27 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum;
  piVar40 = &(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax;
  if (iVar27 == *piVar40) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar30,piVar40);
  }
  (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum = iVar27 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar27 * 8) = local_1e8;
  pFVar33 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar33->LODHysteresis = 3.4028235e+38;
  (pFVar33->ScreenSize).Default = 3.4028235e+38;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_208 = pFVar33;
  GenerateNewSectionArray(this,&local_1e0,param_1);
  local_22c = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_290 = 0;
  local_230 = 0;
  local_298 = false;
  local_214 = 0;
  if (0 < local_1e0.ArrayNum) {
    local_258 = 0;
    do {
      uVar42 = local_258;
      uVar54 = 0;
      if ((int)local_214 < local_1e0.ArrayNum) {
        uVar54 = ~local_214 >> 0x1f;
      }
      if ((uVar54 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      FVar64.Data = local_1e0.AllocatorInstance.Data;
      uVar54 = 0;
      local_168 = (FNewSectionInfo *)local_1e0.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e0.AllocatorInstance.Data + uVar42 + 0x18)) {
        do {
          uVar55 = 0;
          if ((int)uVar54 < *(int *)(FVar64.Data + uVar42 + 0x18)) {
            uVar55 = ~uVar54 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar32->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar64.Data + uVar42 + 0x10) + (longlong)(int)uVar54 * 2));
          uVar54 = uVar54 + 1;
        } while ((int)uVar54 < *(int *)(FVar64.Data + uVar42 + 0x18));
      }
      piVar40 = &(pFVar32->RenderSections).ArrayMax;
      uVar54 = (pFVar32->RenderSections).ArrayNum;
      if (uVar54 == *piVar40) {
        uVar54 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar32->RenderSections).AllocatorInstance,piVar40);
      }
      (pFVar32->RenderSections).ArrayNum = uVar54 + 1;
      uVar55 = 0;
      if ((int)uVar54 < (int)(uVar54 + 1)) {
        uVar55 = ~uVar54 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar57 = (FScriptContainerElement *)0x0;
      pFVar62 = (pFVar32->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar54 * 0x118;
      if (pFVar62 == (FScriptContainerElement *)0x0) {
        local_260 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar62 = 0;
        *(ushort *)(pFVar62 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar62 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar62 + 4) = 0;
        *(undefined8 *)(pFVar62 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar62 + 0x18) = 0;
        *(undefined8 *)(pFVar62 + 0x20) = 0;
        *(undefined8 *)(pFVar62 + 0x28) = 0;
        *(undefined8 *)(pFVar62 + 0x30) = 0;
        *(undefined8 *)(pFVar62 + 0x38) = 0;
        *(undefined8 *)(pFVar62 + 0x40) = 0;
        *(undefined4 *)(pFVar62 + 0x48) = 0;
        *(undefined4 *)(pFVar62 + 0x4c) = 4;
        *(undefined8 *)(pFVar62 + 0x54) = 0;
        *(undefined8 *)(pFVar62 + 0x5c) = 0;
        local_260 = pFVar62;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar62 + 0x68));
        *(undefined ***)(pFVar62 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar62 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar62 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar62 + 0x88) = 0;
        *(undefined8 *)(pFVar62 + 0x90) = 0;
        *(undefined4 *)(pFVar62 + 0x98) = 0;
        *(undefined8 *)(pFVar62 + 0xa0) = 0;
        *(undefined8 *)(pFVar62 + 0xa8) = 0;
        *(undefined4 *)(pFVar62 + 0xb0) = 0;
        *(undefined8 *)(pFVar62 + 200) = 0;
        *(undefined8 *)(pFVar62 + 0xd0) = 0;
        pFVar62[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar62 + 0xf0) = 0;
        *(undefined8 *)(pFVar62 + 0xf8) = 0;
        pFVar62[0x100] = (FScriptContainerElement)0x0;
        pFVar62[0x108] = (FScriptContainerElement)0x0;
        pFVar62[0x110] = (FScriptContainerElement)0x0;
        pFVar57 = pFVar62;
      }
      pFVar34 = FVar64.Data + uVar42 + 0x10;
      pFVar62 = pFVar57 + 0x38;
      if (pFVar62 != pFVar34) {
        iVar27 = *(int *)(pFVar34 + 8);
        pFVar49 = pFVar57 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar34;
        *(int *)(pFVar57 + 0x40) = iVar27;
        if ((iVar27 == 0) && (*(int *)pFVar49 == 0)) {
          *(int *)pFVar49 = 0;
          uVar42 = local_258;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar27,*(int *)pFVar49,(ForAnyElementType *)pFVar62,iVar27,(int *)pFVar49);
          uVar42 = local_258;
          if (iVar27 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar62,_Src.Data,(longlong)iVar27 * 2);
            uVar42 = local_258;
          }
        }
      }
      pFVar58 = local_220;
      *(undefined4 *)(pFVar57 + 0x48) = 0;
      *(uint *)(pFVar57 + 0x10) = (uint)local_270;
      lVar35 = (**(code **)(local_220->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar35 + 8) != (pFVar58->MaterialIds).ArrayNum) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar62 = FVar64.Data + uVar42 + 0x28;
      if (*(int *)pFVar62 == -1) {
        plVar36 = (longlong *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar64.Data + uVar42 + 0x20))->DebugPtr;
        local_1c8 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar8 = (FSkeletalMaterial *)*plVar36;
        lVar35 = plVar36[1];
        local_110 = local_1c8;
        for (pFVar56 = pFVar8; pFVar56 != pFVar8 + (int)lVar35; pFVar56 = pFVar56 + 1) {
          bVar24 = ::operator==(pFVar56,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar24) {
            lVar35 = ((longlong)pFVar56 - (longlong)pFVar8) / 6 +
                     ((longlong)pFVar56 - (longlong)pFVar8 >> 0x3f);
            uVar48 = (lVar35 >> 3) - (lVar35 >> 0x3f);
            uVar42 = local_258;
            pFVar58 = local_220;
            goto LAB_1485f82f6;
          }
        }
        uVar48 = 0xffffffff;
        uVar42 = local_258;
        pFVar58 = local_220;
      }
      else {
        pFVar34 = (pFVar58->MaterialIds).AllocatorInstance.Data;
        for (pFVar49 = pFVar34; pFVar49 != pFVar34 + (longlong)(pFVar58->MaterialIds).ArrayNum * 4;
            pFVar49 = pFVar49 + 4) {
          if (*(int *)pFVar49 == *(int *)pFVar62) {
            uVar48 = (longlong)pFVar49 - (longlong)pFVar34 >> 2;
            goto LAB_1485f82f6;
          }
        }
        uVar48 = 0xffffffff;
      }
LAB_1485f82f6:
      if ((int)uVar48 == -1) {
        local_148 = *(UObject **)(FVar64.Data + uVar42 + 0x20);
        uVar9 = *(undefined8 *)(FVar64.Data + uVar42 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar34 = FVar64.Data + uVar42 + 0x34;
        local_138 = *(undefined4 *)pFVar34;
        uStack_134 = *(undefined4 *)(pFVar34 + 4);
        uStack_130 = *(undefined4 *)(pFVar34 + 8);
        uStack_12c = *(undefined4 *)(pFVar34 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar64.Data + uVar42 + 0x44);
        local_140 = uVar9;
        pFVar37 = (ForAnyElementType *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar37->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar37->Data + (longlong)*(int *)((longlong)&pFVar37[1].Data + 4) * 0x30)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = *(int *)&pFVar37[1].Data;
        piVar40 = (int *)((longlong)&pFVar37[1].Data + 4);
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar37,piVar40);
        }
        lVar35 = (longlong)iVar27;
        *(int *)&pFVar37[1].Data = iVar27 + 1;
        pFVar34 = pFVar37->Data;
        *(UObject **)(pFVar34 + lVar35 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar34 + lVar35 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar34 + lVar35 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar34 + lVar35 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar58 = local_220;
        pTVar1 = &local_220->MaterialIds;
        pFVar34 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar34 <= pFVar62) &&
            (pFVar62 < pFVar34 + (longlong)(local_220->MaterialIds).ArrayMax * 4)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (pFVar58->MaterialIds).ArrayNum;
        piVar40 = &(pFVar58->MaterialIds).ArrayMax;
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar40);
        }
        (pFVar58->MaterialIds).ArrayNum = iVar27 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar27 * 4) = *(int *)pFVar62;
        lVar35 = (**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        uVar48 = (ulonglong)(ushort)(*(short *)(lVar35 + 8) - 1);
      }
      *(ushort *)pFVar57 = (ushort)uVar48;
      *(undefined4 *)(pFVar57 + 8) = 0;
      *(int *)(pFVar57 + 4) = local_248.ArrayNum;
      plVar36 = (longlong *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
      uVar6 = *(ushort *)pFVar57;
      if (((int)plVar36[1] <= (int)(uint)uVar6) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar27 = *(int *)(FVar64.Data + uVar42 + 8);
      local_160 = (ulonglong)uVar6 * 0x30 + *plVar36;
      local_218 = 0;
      if (0 < iVar27) {
        local_210 = 0;
        do {
          lVar39 = local_160;
          lVar35 = local_210;
          uVar54 = 0;
          if ((int)local_218 < iVar27) {
            uVar54 = ~local_218 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar67 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar64.Data)->UVChannelData).LocalUVDensities
                      + uVar42 + -0x38) + lVar35);
          lVar35 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar54 = *(int *)(lVar35 + 8) - 1;
          if ((int)(uint)local_1f0 < (int)uVar54) {
            uVar54 = (uint)local_1f0;
          }
          uVar6 = pFVar67->Section->MaterialIndex;
          uVar42 = (ulonglong)uVar6;
          lVar35 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar6 < *(int *)(lVar35 + 8)) {
            plVar36 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar36[1] <= (int)(uint)uVar6) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            lVar35 = *plVar36;
            fVar68 = *(float *)(lVar35 + 0x14 + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x14)) {
              fVar68 = *(float *)(lVar39 + 0x14);
            }
            *(float *)(lVar39 + 0x14) = fVar68;
            fVar68 = *(float *)(lVar35 + 0x18 + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x18)) {
              fVar68 = *(float *)(lVar39 + 0x18);
            }
            *(float *)(lVar39 + 0x18) = fVar68;
            fVar68 = *(float *)(lVar35 + 0x1c + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x1c)) {
              fVar68 = *(float *)(lVar39 + 0x1c);
            }
            *(float *)(lVar39 + 0x1c) = fVar68;
            fVar68 = *(float *)(lVar35 + 0x20 + uVar42 * 0x30);
            if (fVar68 <= *(float *)(lVar39 + 0x20)) {
              fVar68 = *(float *)(lVar39 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar68);
            *(float *)(lVar39 + 0x20) = fVar68;
          }
          pfVar38 = (float *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x328))
                                       (pFVar67->SkelMesh,uVar54);
          bVar4 = *(byte *)&local_208->BuildSettings;
          fVar68 = (local_208->ScreenSize).Default;
          if (*pfVar38 <= fVar68) {
            fVar68 = *pfVar38;
          }
          (local_208->ScreenSize).Default = fVar68;
          bVar46 = bVar4 | *(byte *)(pfVar38 + 6);
          uVar5 = (local_208->BuildSettings).field_0x1;
          bVar46 = (bVar4 ^ bVar46) & 0x7f ^ bVar46;
          *(byte *)&local_208->BuildSettings = bVar46;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar38 + 0x19)) & 1 ^ uVar5 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar46 | *(byte *)(pfVar38 + 6)) & 0x20 ^ bVar46 & 0xdf;
          fVar68 = pfVar38[1];
          if (local_208->LODHysteresis <= pfVar38[1]) {
            fVar68 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar68;
          plVar36 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar55 = 0;
          if ((int)uVar54 < (int)plVar36[1]) {
            uVar55 = ~uVar54 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar31 = local_250;
          uVar55 = 0;
          pFVar32 = *(FSkeletalMeshLODRenderData **)(*plVar36 + (longlong)(int)uVar54 * 8);
          if (0 < (pFVar32->RequiredBones).ArrayNum) {
            lVar35 = 0;
            do {
              lVar39 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x318))();
              uVar54 = 0;
              if ((int)uVar55 < (pFVar32->RequiredBones).ArrayNum) {
                uVar54 = ~uVar55 >> 0x1f;
              }
              if ((uVar54 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              uVar6 = *(ushort *)((pFVar32->RequiredBones).AllocatorInstance.Data + lVar35);
              if ((*(int *)(lVar39 + 0x28) <= (int)(uint)uVar6) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar10 = *(FName *)(*(longlong *)(lVar39 + 0x20) + (ulonglong)uVar6 * 0xc);
              if (((FVar10 != (FName)0x0) &&
                  (piVar40 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_220->NewRefSkeleton).FinalNameToIndexMap,FVar10),
                  piVar40 != (int *)0x0)) && (*piVar40 != -1)) {
                local_238[0] = (ushort)*piVar40;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar31->RequiredBones,local_238);
              }
              uVar55 = uVar55 + 1;
              lVar35 = lVar35 + 2;
              pFVar57 = local_260;
            } while ((int)uVar55 < (pFVar32->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar57 + 0x48) = *(int *)(pFVar57 + 0x48) + pFVar67->Section->NumVertices;
          uVar54 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_228 = (pFVar32->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar55 = pFVar67->Section->NumVertices + pFVar67->Section->BaseVertexIndex;
          if ((int)uVar55 < (int)uVar54) {
            uVar54 = uVar55;
          }
          pFVar50 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar50 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar50 = &pFVar32->SkinWeightVertexBuffer;
          }
          uVar55 = (pFVar50->DataVertexBuffer).MaxBoneInfluences;
          uVar28 = uVar55;
          if (uVar55 < local_230) {
            uVar28 = local_230;
          }
          local_298 = (bool)(local_298 | (pFVar50->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_260 + 0x4c) = uVar55;
          uVar55 = (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar55 <= local_290) {
            uVar55 = local_290;
          }
          local_234 = (uint)local_270;
          uVar65 = pFVar67->Section->BaseVertexIndex;
          local_290 = uVar55;
          local_230 = uVar28;
          if ((int)uVar65 < (int)uVar54) {
            while( true ) {
              uVar55 = local_228;
              uVar28 = (uint)local_270;
              if ((uint)local_270 == local_270._4_4_) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x420,&local_278,(int *)((longlong)&local_270 + 4));
              }
              local_270 = CONCAT44(local_270._4_4_,uVar28 + 1);
              uVar47 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar47 = ~uVar28 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar59 = (TGPUSkinVertexFloat16Uvs<3> *)
                        (local_278.Data + (longlong)(int)uVar28 * 0x20);
              uVar28 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar28 + 1;
              uVar47 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar47 = ~uVar28 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar58 = local_220;
              pFVar57 = local_200.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<3>_>
                        (local_220,pTVar59,pFVar32,uVar65,pFVar67);
              pFVar50 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar50 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar50 = &pFVar32->SkinWeightVertexBuffer;
              }
              pFVar41 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar50,&local_e8,uVar65);
              uVar9 = *(undefined8 *)(pFVar41->InfluenceBones + 4);
              *(undefined8 *)pFVar57 = *(undefined8 *)pFVar41->InfluenceBones;
              *(undefined8 *)(pFVar57 + 8) = uVar9;
              in_XMM1 = *(undefined1 (*) [16])(pFVar41->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar57 + 0x10) = in_XMM1;
              uVar7 = *(undefined4 *)(pFVar41->InfluenceWeights + 6);
              uVar19 = *(undefined4 *)(pFVar41->InfluenceWeights + 8);
              uVar20 = *(undefined4 *)(pFVar41->InfluenceWeights + 10);
              *(undefined4 *)(pFVar57 + 0x20) = *(undefined4 *)(pFVar41->InfluenceWeights + 4);
              *(undefined4 *)(pFVar57 + 0x24) = uVar7;
              *(undefined4 *)(pFVar57 + 0x28) = uVar19;
              *(undefined4 *)(pFVar57 + 0x2c) = uVar20;
              cVar25 = (**(code **)(pFVar58->MergeMesh->_padding_ + 0x470))();
              if (cVar25 != '\0') {
                if ((int)uVar65 < (int)uVar55) {
                  pFVar60 = (FColor_u_0 *)
                            ((pFVar32->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar65 * (pFVar32->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_288.Data <= pFVar60) &&
                      (pFVar60 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4))) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar27 + 1);
                  FVar29 = *pFVar60;
                }
                else {
                  local_294.Bits = 0xffffffff;
                  if (((local_288.Data <= &local_294) &&
                      (&local_294 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4)))
                     && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar27 + 1);
                  FVar29 = local_294;
                }
                *(FColor_u_0 *)(local_288.Data + (longlong)iVar27 * 4) = FVar29;
              }
              lVar35 = 0xc;
              do {
                if (*(ushort *)(pFVar57 + 0x18) != 0) {
                  uVar6 = *(ushort *)pFVar57;
                  if (((pFVar67->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar6) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ushort *)pFVar57 =
                       *(ushort *)
                        ((pFVar67->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar6 * 2);
                }
                pFVar57 = pFVar57 + 2;
                lVar35 = lVar35 + -1;
              } while (lVar35 != 0);
              uVar65 = uVar65 + 1;
              if ((int)uVar54 <= (int)uVar65) break;
            }
          }
          pFVar57 = local_260;
          *(uint *)(local_260 + 8) = *(int *)(local_260 + 8) + pFVar67->Section->NumTriangles;
          if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar27 = (**(code **)(((pFVar32->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar28 = local_234;
          uVar54 = pFVar67->Section->BaseIndex;
          uVar55 = pFVar67->Section->NumTriangles;
          iVar61 = uVar54 + uVar55 * 2 + uVar55;
          if (iVar61 < iVar27) {
            iVar27 = iVar61;
          }
          for (; (int)uVar54 < iVar27; uVar54 = uVar54 + 1) {
            if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pFVar32->MultiSizeIndexContainer).IndexBuffer;
            iVar61 = (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,uVar54);
            local_264 = (iVar61 - pFVar67->Section->BaseVertexIndex) + uVar28;
            if (((local_248.AllocatorInstance.Data <= (FScriptContainerElement *)&local_264) &&
                ((FScriptContainerElement *)&local_264 <
                 local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 4)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar61 = local_248.ArrayNum;
            if (local_248.ArrayNum == local_248.ArrayMax) {
              iVar61 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_248.AllocatorInstance,&local_248.ArrayMax);
            }
            local_248.ArrayNum = iVar61 + 1;
            *(uint *)(local_248.AllocatorInstance.Data + (longlong)iVar61 * 4) = local_264;
            if (local_22c < local_264) {
              local_22c = local_264;
            }
            pFVar57 = local_260;
          }
          pFVar12 = pFVar67->Section;
          if ((pFVar12->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 8))(pFVar57 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar57 + 0xe0) + 8))
                      (pFVar57 + 0xe0,*(undefined4 *)(pFVar57 + 0x48));
            puVar43 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 0x18))(pFVar57 + 0xb8);
            pvVar44 = (void *)(**(code **)(*(longlong *)(pFVar57 + 0xe0) + 0x18))(pFVar57 + 0xe0);
            memset(pvVar44,0,(ulonglong)*(uint *)(pFVar57 + 0x48) << 3);
            *puVar43 = 0;
          }
          else {
            if (pFVar57[0x108] == (FScriptContainerElement)0x0) {
              pFVar3 = (ForAnyElementType *)(pFVar57 + 200);
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar44 = *(void **)puVar2;
                pFVar62 = pFVar57 + 0xd4;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar44 & 1) != 0) {
                  pvVar44 = puVar2 + ((longlong)pvVar44 >> 0x18);
                }
                *(int *)(pFVar57 + 0xd0) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar27,*(int *)pFVar62,pFVar3,iVar27,(int *)pFVar62);
                  FVar51 = *pFVar3;
                  if (((ulonglong)FVar51 & 1) != 0) {
                    FVar51 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar51 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar51,pvVar44,(longlong)iVar27 << 2);
                  }
                }
              }
              pFVar3 = (ForAnyElementType *)(pFVar57 + 0xf0);
              pFVar57[0xd8] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar12 = pFVar67->Section;
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar44 = *(void **)puVar2;
                pFVar62 = pFVar57 + 0xfc;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar44 & 1) != 0) {
                  pvVar44 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar44 >> 0x18);
                }
                *(int *)(pFVar57 + 0xf8) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar27,*(int *)pFVar62,pFVar3,iVar27,(int *)pFVar62);
                  FVar51 = *pFVar3;
                  if (((ulonglong)FVar51 & 1) != 0) {
                    FVar51 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar51 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar51,pvVar44,(longlong)iVar27 << 3);
                  }
                }
              }
              pFVar57[0x100] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar40 = (int *)(**(code **)(*(longlong *)(pFVar57 + 0xb8) + 0x18))();
              iVar27 = 0;
              if (0 < *(int *)(pFVar57 + 0xd0)) {
                do {
                  iVar27 = iVar27 + 1;
                  *piVar40 = *piVar40 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar27 < *(int *)(pFVar57 + 0xd0));
              }
            }
            else {
              iVar27 = *(int *)(pFVar57 + 0xd0);
              uVar54 = *(uint *)(pFVar57 + 0xf8);
              (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 8))
                        (pFVar57 + 0xb8,
                         *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar27);
              (**(code **)(*(longlong *)(pFVar57 + 0xe0) + 8))
                        (pFVar57 + 0xe0,*(undefined4 *)(pFVar57 + 0x48));
              lVar35 = (**(code **)(*(longlong *)(pFVar57 + 0xb8) + 0x18))(pFVar57 + 0xb8);
              lVar39 = (**(code **)(*(longlong *)(pFVar57 + 0xe0) + 0x18))();
              if (iVar27 < *(int *)(pFVar57 + 0xd0)) {
                piVar40 = (int *)(lVar35 + (longlong)iVar27 * 4);
                iVar61 = iVar27;
                do {
                  iVar61 = iVar61 + 1;
                  *piVar40 = *piVar40 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar61 < *(int *)(pFVar57 + 0xd0));
              }
              if (uVar54 < *(uint *)(pFVar57 + 0x48)) {
                do {
                  uVar42 = (ulonglong)uVar54;
                  uVar54 = uVar54 + 1;
                  piVar40 = (int *)(lVar39 + 4 + uVar42 * 8);
                  *piVar40 = *piVar40 + iVar27;
                } while (uVar54 < *(uint *)(pFVar57 + 0x48));
                pFVar57[0x108] = (FScriptContainerElement)0x1;
                goto LAB_1485f90c9;
              }
            }
            pFVar57[0x108] = (FScriptContainerElement)0x1;
          }
LAB_1485f90c9:
          local_218 = local_218 + 1;
          local_210 = local_210 + 0x30;
          iVar27 = *(int *)((longlong)(local_168->UVChannelData).LocalUVDensities +
                           local_258 + -0x30);
          uVar42 = local_258;
          FVar64.Data = (FScriptContainerElement *)local_168;
        } while ((int)local_218 < iVar27);
      }
      local_258 = uVar42 + 0x48;
      local_214 = local_214 + 1;
      this = local_220;
      pFVar30 = local_1d0;
      pFVar32 = local_250;
      pFVar33 = local_208;
    } while ((int)local_214 < local_1e0.ArrayNum);
  }
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar27 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar61 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar30,0);
    if (iVar61 <= iVar27) {
      bVar24 = false;
      goto LAB_1485f9171;
    }
  }
  bVar24 = true;
LAB_1485f9171:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar32->RequiredBones).AllocatorInstance.Data,
             (pFVar32->RequiredBones).ArrayNum,local_295,(TLess<void> *)&local_295);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar32->ActiveBoneIndices);
  pFVar30 = &(pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar33->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar30;
  FPositionVertexBuffer::Init
            (&(pFVar32->StaticVertexBuffers).PositionVertexBuffer,(uint)local_270,bVar24);
  FStaticMeshVertexBuffer::Init(pFVar30,(uint)local_270,local_290,bVar24);
  fVar23 = _UNK_15104007c;
  fVar22 = _UNK_151040078;
  fVar21 = _UNK_151040074;
  fVar68 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar54 = 0;
  if (0 < (int)(uint)local_270) {
    local_260 = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    do {
      lVar35 = local_1f0;
      pFVar57 = local_260;
      uVar55 = ~uVar54 >> 0x1f;
      uVar28 = 0;
      if ((int)uVar54 < (int)(uint)local_270) {
        uVar28 = uVar55;
      }
      local_228 = uVar55;
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar42 = (ulonglong)(uVar54 * (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar13 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar7 = *(undefined4 *)(local_278.Data + lVar35 + 0x10);
      *(undefined8 *)(puVar13 + uVar42) = *(undefined8 *)(local_278.Data + lVar35 + 8);
      *(undefined4 *)(puVar13 + uVar42 + 8) = uVar7;
      uVar28 = 0;
      if ((int)uVar54 < (int)(uint)local_270) {
        uVar28 = uVar55;
      }
      if (uVar28 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      auVar69 = pmovsxbd(in_XMM1,*(undefined4 *)(local_278.Data + lVar35 + 4));
      uVar28 = 0;
      if ((int)uVar54 < (int)(uint)local_270) {
        uVar28 = uVar55;
      }
      fVar73 = (float)auVar69._8_4_ * fVar22;
      uVar9 = CONCAT44((float)auVar69._4_4_ * fVar21,(float)auVar69._0_4_ * fVar68);
      iVar27 = (uint)local_270;
      local_19c = uVar9;
      local_194 = fVar73;
      if (uVar28 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (uint)local_270;
      }
      auVar69 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar35));
      auVar70 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar35 + 4));
      fVar71 = (float)auVar69._0_4_ * fVar68;
      fVar72 = (float)auVar69._4_4_ * fVar21;
      local_1a0 = (float)auVar69._8_4_ * fVar22;
      uVar28 = 0;
      if ((int)uVar54 < iVar27) {
        uVar28 = uVar55;
      }
      local_1a8 = CONCAT44(fVar72,fVar71);
      dVar15 = (double)local_1a0;
      dVar18 = (double)fVar71;
      dVar17 = (double)fVar72;
      dVar74 = (double)((float)auVar70._8_4_ * fVar22);
      dVar16 = (double)((float)auVar70._0_4_ * fVar68);
      dVar76 = (double)((float)auVar70._4_4_ * fVar21);
      dVar75 = (double)((float)auVar70._12_4_ * fVar23);
      auVar69._0_8_ = (dVar15 * dVar76 - dVar74 * dVar17) * dVar75;
      auVar69._8_8_ = 0;
      fVar71 = (float)auVar69._0_8_;
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar35));
      local_178._s_0.Z = (float)in_XMM1._8_4_ * fVar22;
      local_178._0_8_ = CONCAT44((float)in_XMM1._4_4_ * fVar21,(float)in_XMM1._0_4_ * fVar68);
      local_1b8._s_0.X = fVar71;
      local_1b8._s_0.Y = (float)((dVar74 * dVar18 - dVar15 * dVar16) * dVar75);
      local_1b8._s_0.Z = (float)((dVar16 * dVar17 - dVar76 * dVar18) * dVar75);
      local_188._0_8_ = uVar9;
      local_188._s_0.Z = fVar73;
      local_158 = local_178._0_8_;
      local_150 = local_178._s_0.Z;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar30,uVar54,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1b8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_290 != 0) {
        lVar63 = 0;
        local_210 = 0;
        lVar39 = lVar63;
        lVar66 = lVar63;
        local_258 = (ulonglong)local_290;
        do {
          lVar45 = local_210;
          uVar28 = 0;
          if ((int)uVar54 < (int)(uint)local_270) {
            uVar28 = uVar55;
          }
          if ((uVar28 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          FVar64.Data = local_278.Data;
          fVar73 = FGenericPlatformMath::LoadHalf
                             ((ushort *)(local_278.Data + lVar66 + lVar35 + 0x14));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(local_208._4_4_,fVar73);
          fVar71 = FGenericPlatformMath::LoadHalf((ushort *)(FVar64.Data + lVar66 + lVar35 + 0x16));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(fVar71,(undefined4)local_208);
          puVar13 = (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar53 = (ulonglong)(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar54;
          pcVar14 = *(code **)((longlong)
                               *(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_250->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            lVar45 = (*pcVar14)();
            if ((puVar13 + lVar45 < puVar13 + lVar66 + lVar53 * 4 + 4) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            this_00 = (FFloat16 *)(puVar13 + lVar39 + lVar53 * 4);
            if ((this_00 < (FFloat16 *)
                           (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((pFVar33->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              local_268.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_268.Encoded,fVar73);
              this_00->Encoded = local_268.Encoded;
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              local_266.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_266.Encoded,fVar71);
              this_00[1].Encoded = local_266.Encoded;
            }
            else {
              FFloat16::SetTruncate(this_00,fVar73);
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              FFloat16::SetTruncate(this_00 + 1,fVar71);
            }
          }
          else {
            lVar35 = (*pcVar14)();
            if ((puVar13 + lVar35 < puVar13 + lVar45 + lVar53 * 8 + 8) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((puVar13 + lVar45 + lVar53 * 8 <
                 (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15e,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            *(FSkeletalMeshLODInfo **)(puVar13 + lVar63 + lVar53 * 8) = local_208;
            lVar35 = local_1f0;
          }
          lVar66 = lVar66 + 4;
          local_210 = local_210 + 8;
          lVar63 = lVar63 + 8;
          lVar39 = lVar39 + 4;
          local_258 = local_258 - 1;
          uVar55 = local_228;
        } while (local_258 != 0);
        local_258 = 0;
        pFVar32 = local_250;
        pFVar30 = local_1d0;
        pFVar57 = local_260;
      }
      local_260 = pFVar57 + 1;
      local_1f0 = lVar35 + 0x20;
      uVar54 = uVar54 + 1;
    } while ((int)uVar54 < (int)(uint)local_270);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar32->SkinWeightVertexBuffer).DataVertexBuffer,local_230);
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_298;
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar24;
  (pFVar32->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar24;
  FSkinWeightVertexBuffer::operator=(&pFVar32->SkinWeightVertexBuffer,&local_200);
  cVar25 = (**(code **)(local_220->MergeMesh->_padding_ + 0x470))();
  if (cVar25 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar32->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_288.Data,
               (uint)local_280,4,true);
  }
  uVar52 = '\x04';
  if (local_22c < 0xffff) {
    uVar52 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar32->MultiSizeIndexContainer,uVar52,&local_248);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_288.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat16Uvs<4>_> @ 1485f98f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat16Uvs<4>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  TGPUSkinVertexFloat16Uvs<4> *pTVar3;
  FFloat16 *this_00;
  ForAnyElementType *pFVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar9;
  undefined8 uVar10;
  FName FVar11;
  FRawStaticIndexBuffer16or32Interface *pFVar12;
  FSkelMeshRenderSection *pFVar13;
  uchar *puVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  FColor_u_0 FVar30;
  FStaticMeshVertexBuffer *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODRenderData *pFVar33;
  FSkeletalMeshLODInfo *pFVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  longlong *plVar37;
  ForAnyElementType *pFVar38;
  float *pfVar39;
  longlong lVar40;
  int *piVar41;
  FSkinWeightInfo *pFVar42;
  ulonglong uVar43;
  undefined4 *puVar44;
  void *pvVar45;
  FReferenceSkeleton *this_01;
  longlong lVar46;
  byte bVar47;
  uint uVar48;
  ulonglong uVar49;
  FScriptContainerElement *pFVar50;
  FSkinWeightVertexBuffer *pFVar51;
  ForAnyElementType FVar52;
  uchar uVar53;
  longlong lVar54;
  uint uVar55;
  uint uVar56;
  FSkeletalMaterial *pFVar57;
  FScriptContainerElement *pFVar58;
  FSkeletalMeshMerge *pFVar59;
  FColor_u_0 *pFVar60;
  int iVar61;
  FScriptContainerElement *pFVar62;
  longlong lVar63;
  ForAnyElementType FVar64;
  uint uVar65;
  longlong lVar66;
  FMergeSectionInfo *pFVar67;
  float fVar68;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auStackY_2e8 [32];
  bool local_298;
  FIdentityFunctor local_295;
  FColor_u_0 local_294;
  uint local_290;
  ForAnyElementType local_288;
  undefined8 local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  FFloat16 local_268;
  FFloat16 local_266;
  uint local_264;
  FScriptContainerElement *local_260;
  ulonglong local_258;
  FSkeletalMeshLODRenderData *local_250;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_248;
  ushort local_238 [2];
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  FSkeletalMeshMerge *local_220;
  uint local_218;
  uint local_214;
  longlong local_210;
  undefined8 local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  longlong local_1f0;
  FSkeletalMeshLODRenderData *local_1e8;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e0;
  FStaticMeshVertexBuffer *local_1d0;
  undefined8 local_1c8;
  TVector<float>_u_0 local_1b8;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_19c;
  float local_194;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  FNewSectionInfo *local_168;
  longlong local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_1f0 = CONCAT44(local_1f0._4_4_,param_1);
  local_220 = this;
  pFVar31 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar31;
  if ((pFVar31 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar25)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar32 = ::operator_new(0x768);
  pFVar33 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar32 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar33 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar32,true);
  }
  pFVar58 = (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.AllocatorInstance.Data;
  local_250 = pFVar33;
  local_1e8 = pFVar33;
  if (((pFVar58 <= (FScriptContainerElement *)&local_1e8) &&
      ((FScriptContainerElement *)&local_1e8 <
       pFVar58 + (longlong)(((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar28 = (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayNum;
  piVar41 = &(((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayMax;
  if (iVar28 == *piVar41) {
    iVar28 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar31,piVar41);
  }
  (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayNum = iVar28 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar28 * 8) = local_1e8;
  pFVar34 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar34->LODHysteresis = 3.4028235e+38;
  (pFVar34->ScreenSize).Default = 3.4028235e+38;
  local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.ArrayNum = 0;
  local_1e0.ArrayMax = 0;
  local_208 = pFVar34;
  GenerateNewSectionArray(this,&local_1e0,param_1);
  local_22c = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_290 = 0;
  local_230 = 0;
  local_298 = false;
  local_214 = 0;
  if (0 < local_1e0.ArrayNum) {
    local_258 = 0;
    do {
      uVar43 = local_258;
      uVar55 = 0;
      if ((int)local_214 < local_1e0.ArrayNum) {
        uVar55 = ~local_214 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      FVar64.Data = local_1e0.AllocatorInstance.Data;
      uVar55 = 0;
      local_168 = (FNewSectionInfo *)local_1e0.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e0.AllocatorInstance.Data + uVar43 + 0x18)) {
        do {
          uVar56 = 0;
          if ((int)uVar55 < *(int *)(FVar64.Data + uVar43 + 0x18)) {
            uVar56 = ~uVar55 >> 0x1f;
          }
          if ((uVar56 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar33->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar64.Data + uVar43 + 0x10) + (longlong)(int)uVar55 * 2));
          uVar55 = uVar55 + 1;
        } while ((int)uVar55 < *(int *)(FVar64.Data + uVar43 + 0x18));
      }
      piVar41 = &(pFVar33->RenderSections).ArrayMax;
      uVar55 = (pFVar33->RenderSections).ArrayNum;
      if (uVar55 == *piVar41) {
        uVar55 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar33->RenderSections).AllocatorInstance,piVar41);
      }
      (pFVar33->RenderSections).ArrayNum = uVar55 + 1;
      uVar56 = 0;
      if ((int)uVar55 < (int)(uVar55 + 1)) {
        uVar56 = ~uVar55 >> 0x1f;
      }
      if ((uVar56 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar58 = (FScriptContainerElement *)0x0;
      pFVar62 = (pFVar33->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar55 * 0x118;
      if (pFVar62 == (FScriptContainerElement *)0x0) {
        local_260 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar62 = 0;
        *(ushort *)(pFVar62 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar62 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar62 + 4) = 0;
        *(undefined8 *)(pFVar62 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar62 + 0x18) = 0;
        *(undefined8 *)(pFVar62 + 0x20) = 0;
        *(undefined8 *)(pFVar62 + 0x28) = 0;
        *(undefined8 *)(pFVar62 + 0x30) = 0;
        *(undefined8 *)(pFVar62 + 0x38) = 0;
        *(undefined8 *)(pFVar62 + 0x40) = 0;
        *(undefined4 *)(pFVar62 + 0x48) = 0;
        *(undefined4 *)(pFVar62 + 0x4c) = 4;
        *(undefined8 *)(pFVar62 + 0x54) = 0;
        *(undefined8 *)(pFVar62 + 0x5c) = 0;
        local_260 = pFVar62;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar62 + 0x68));
        *(undefined ***)(pFVar62 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar62 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar62 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar62 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar62 + 0x88) = 0;
        *(undefined8 *)(pFVar62 + 0x90) = 0;
        *(undefined4 *)(pFVar62 + 0x98) = 0;
        *(undefined8 *)(pFVar62 + 0xa0) = 0;
        *(undefined8 *)(pFVar62 + 0xa8) = 0;
        *(undefined4 *)(pFVar62 + 0xb0) = 0;
        *(undefined8 *)(pFVar62 + 200) = 0;
        *(undefined8 *)(pFVar62 + 0xd0) = 0;
        pFVar62[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar62 + 0xf0) = 0;
        *(undefined8 *)(pFVar62 + 0xf8) = 0;
        pFVar62[0x100] = (FScriptContainerElement)0x0;
        pFVar62[0x108] = (FScriptContainerElement)0x0;
        pFVar62[0x110] = (FScriptContainerElement)0x0;
        pFVar58 = pFVar62;
      }
      pFVar35 = FVar64.Data + uVar43 + 0x10;
      pFVar62 = pFVar58 + 0x38;
      if (pFVar62 != pFVar35) {
        iVar28 = *(int *)(pFVar35 + 8);
        pFVar50 = pFVar58 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar35;
        *(int *)(pFVar58 + 0x40) = iVar28;
        if ((iVar28 == 0) && (*(int *)pFVar50 == 0)) {
          *(int *)pFVar50 = 0;
          uVar43 = local_258;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar28,*(int *)pFVar50,(ForAnyElementType *)pFVar62,iVar28,(int *)pFVar50);
          uVar43 = local_258;
          if (iVar28 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar62,_Src.Data,(longlong)iVar28 * 2);
            uVar43 = local_258;
          }
        }
      }
      pFVar59 = local_220;
      *(undefined4 *)(pFVar58 + 0x48) = 0;
      *(uint *)(pFVar58 + 0x10) = (uint)local_270;
      lVar36 = (**(code **)(local_220->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar36 + 8) != (pFVar59->MaterialIds).ArrayNum) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar62 = FVar64.Data + uVar43 + 0x28;
      if (*(int *)pFVar62 == -1) {
        plVar37 = (longlong *)(**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar64.Data + uVar43 + 0x20))->DebugPtr;
        local_1c8 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar9 = (FSkeletalMaterial *)*plVar37;
        lVar36 = plVar37[1];
        local_110 = local_1c8;
        for (pFVar57 = pFVar9; pFVar57 != pFVar9 + (int)lVar36; pFVar57 = pFVar57 + 1) {
          bVar25 = ::operator==(pFVar57,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar25) {
            lVar36 = ((longlong)pFVar57 - (longlong)pFVar9) / 6 +
                     ((longlong)pFVar57 - (longlong)pFVar9 >> 0x3f);
            uVar49 = (lVar36 >> 3) - (lVar36 >> 0x3f);
            uVar43 = local_258;
            pFVar59 = local_220;
            goto LAB_1485f9f46;
          }
        }
        uVar49 = 0xffffffff;
        uVar43 = local_258;
        pFVar59 = local_220;
      }
      else {
        pFVar35 = (pFVar59->MaterialIds).AllocatorInstance.Data;
        for (pFVar50 = pFVar35; pFVar50 != pFVar35 + (longlong)(pFVar59->MaterialIds).ArrayNum * 4;
            pFVar50 = pFVar50 + 4) {
          if (*(int *)pFVar50 == *(int *)pFVar62) {
            uVar49 = (longlong)pFVar50 - (longlong)pFVar35 >> 2;
            goto LAB_1485f9f46;
          }
        }
        uVar49 = 0xffffffff;
      }
LAB_1485f9f46:
      if ((int)uVar49 == -1) {
        local_148 = *(UObject **)(FVar64.Data + uVar43 + 0x20);
        uVar10 = *(undefined8 *)(FVar64.Data + uVar43 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar35 = FVar64.Data + uVar43 + 0x34;
        local_138 = *(undefined4 *)pFVar35;
        uStack_134 = *(undefined4 *)(pFVar35 + 4);
        uStack_130 = *(undefined4 *)(pFVar35 + 8);
        uStack_12c = *(undefined4 *)(pFVar35 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar64.Data + uVar43 + 0x44);
        local_140 = uVar10;
        pFVar38 = (ForAnyElementType *)(**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar38->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar38->Data + (longlong)*(int *)((longlong)&pFVar38[1].Data + 4) * 0x30)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = *(int *)&pFVar38[1].Data;
        piVar41 = (int *)((longlong)&pFVar38[1].Data + 4);
        if (iVar28 == *piVar41) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar38,piVar41);
        }
        lVar36 = (longlong)iVar28;
        *(int *)&pFVar38[1].Data = iVar28 + 1;
        pFVar35 = pFVar38->Data;
        *(UObject **)(pFVar35 + lVar36 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar35 + lVar36 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar35 + lVar36 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar35 + lVar36 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar35 + lVar36 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar35 + lVar36 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar59 = local_220;
        pTVar1 = &local_220->MaterialIds;
        pFVar35 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar35 <= pFVar62) &&
            (pFVar62 < pFVar35 + (longlong)(local_220->MaterialIds).ArrayMax * 4)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = (pFVar59->MaterialIds).ArrayNum;
        piVar41 = &(pFVar59->MaterialIds).ArrayMax;
        if (iVar28 == *piVar41) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar41);
        }
        (pFVar59->MaterialIds).ArrayNum = iVar28 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar28 * 4) = *(int *)pFVar62;
        lVar36 = (**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
        uVar49 = (ulonglong)(ushort)(*(short *)(lVar36 + 8) - 1);
      }
      *(ushort *)pFVar58 = (ushort)uVar49;
      *(undefined4 *)(pFVar58 + 8) = 0;
      *(int *)(pFVar58 + 4) = local_248.ArrayNum;
      plVar37 = (longlong *)(**(code **)(pFVar59->MergeMesh->_padding_ + 0x3c8))();
      uVar7 = *(ushort *)pFVar58;
      if (((int)plVar37[1] <= (int)(uint)uVar7) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar28 = *(int *)(FVar64.Data + uVar43 + 8);
      local_160 = (ulonglong)uVar7 * 0x30 + *plVar37;
      local_218 = 0;
      if (0 < iVar28) {
        local_210 = 0;
        do {
          lVar40 = local_160;
          lVar36 = local_210;
          uVar55 = 0;
          if ((int)local_218 < iVar28) {
            uVar55 = ~local_218 >> 0x1f;
          }
          if ((uVar55 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar67 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar64.Data)->UVChannelData).LocalUVDensities
                      + uVar43 + -0x38) + lVar36);
          lVar36 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar55 = *(int *)(lVar36 + 8) - 1;
          if ((int)(uint)local_1f0 < (int)uVar55) {
            uVar55 = (uint)local_1f0;
          }
          uVar7 = pFVar67->Section->MaterialIndex;
          uVar43 = (ulonglong)uVar7;
          lVar36 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar7 < *(int *)(lVar36 + 8)) {
            plVar37 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar37[1] <= (int)(uint)uVar7) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar36 = *plVar37;
            fVar68 = *(float *)(lVar36 + 0x14 + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x14)) {
              fVar68 = *(float *)(lVar40 + 0x14);
            }
            *(float *)(lVar40 + 0x14) = fVar68;
            fVar68 = *(float *)(lVar36 + 0x18 + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x18)) {
              fVar68 = *(float *)(lVar40 + 0x18);
            }
            *(float *)(lVar40 + 0x18) = fVar68;
            fVar68 = *(float *)(lVar36 + 0x1c + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x1c)) {
              fVar68 = *(float *)(lVar40 + 0x1c);
            }
            *(float *)(lVar40 + 0x1c) = fVar68;
            fVar68 = *(float *)(lVar36 + 0x20 + uVar43 * 0x30);
            if (fVar68 <= *(float *)(lVar40 + 0x20)) {
              fVar68 = *(float *)(lVar40 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar68);
            *(float *)(lVar40 + 0x20) = fVar68;
          }
          pfVar39 = (float *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x328))
                                       (pFVar67->SkelMesh,uVar55);
          bVar5 = *(byte *)&local_208->BuildSettings;
          fVar68 = (local_208->ScreenSize).Default;
          if (*pfVar39 <= fVar68) {
            fVar68 = *pfVar39;
          }
          (local_208->ScreenSize).Default = fVar68;
          bVar47 = bVar5 | *(byte *)(pfVar39 + 6);
          uVar6 = (local_208->BuildSettings).field_0x1;
          bVar47 = (bVar5 ^ bVar47) & 0x7f ^ bVar47;
          *(byte *)&local_208->BuildSettings = bVar47;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar39 + 0x19)) & 1 ^ uVar6 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar47 | *(byte *)(pfVar39 + 6)) & 0x20 ^ bVar47 & 0xdf;
          fVar68 = pfVar39[1];
          if (local_208->LODHysteresis <= pfVar39[1]) {
            fVar68 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar68;
          plVar37 = (longlong *)(**(code **)(pFVar67->SkelMesh->_padding_ + 0x398))();
          uVar56 = 0;
          if ((int)uVar55 < (int)plVar37[1]) {
            uVar56 = ~uVar55 >> 0x1f;
          }
          if ((uVar56 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar32 = local_250;
          uVar56 = 0;
          pFVar33 = *(FSkeletalMeshLODRenderData **)(*plVar37 + (longlong)(int)uVar55 * 8);
          if (0 < (pFVar33->RequiredBones).ArrayNum) {
            lVar36 = 0;
            do {
              lVar40 = (**(code **)(pFVar67->SkelMesh->_padding_ + 0x318))();
              uVar55 = 0;
              if ((int)uVar56 < (pFVar33->RequiredBones).ArrayNum) {
                uVar55 = ~uVar56 >> 0x1f;
              }
              if ((uVar55 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              uVar7 = *(ushort *)((pFVar33->RequiredBones).AllocatorInstance.Data + lVar36);
              if ((*(int *)(lVar40 + 0x28) <= (int)(uint)uVar7) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              FVar11 = *(FName *)(*(longlong *)(lVar40 + 0x20) + (ulonglong)uVar7 * 0xc);
              if (((FVar11 != (FName)0x0) &&
                  (piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_220->NewRefSkeleton).FinalNameToIndexMap,FVar11),
                  piVar41 != (int *)0x0)) && (*piVar41 != -1)) {
                local_238[0] = (ushort)*piVar41;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar32->RequiredBones,local_238);
              }
              uVar56 = uVar56 + 1;
              lVar36 = lVar36 + 2;
              pFVar58 = local_260;
            } while ((int)uVar56 < (pFVar33->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar58 + 0x48) = *(int *)(pFVar58 + 0x48) + pFVar67->Section->NumVertices;
          uVar55 = (pFVar33->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_228 = (pFVar33->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar56 = pFVar67->Section->NumVertices + pFVar67->Section->BaseVertexIndex;
          if ((int)uVar56 < (int)uVar55) {
            uVar55 = uVar56;
          }
          pFVar51 = (pFVar33->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar51 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar51 = &pFVar33->SkinWeightVertexBuffer;
          }
          uVar56 = (pFVar51->DataVertexBuffer).MaxBoneInfluences;
          uVar29 = uVar56;
          if (uVar56 < local_230) {
            uVar29 = local_230;
          }
          local_298 = (bool)(local_298 | (pFVar51->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_260 + 0x4c) = uVar56;
          uVar56 = (pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar56 <= local_290) {
            uVar56 = local_290;
          }
          local_234 = (uint)local_270;
          uVar65 = pFVar67->Section->BaseVertexIndex;
          local_290 = uVar56;
          local_230 = uVar29;
          if ((int)uVar65 < (int)uVar55) {
            while( true ) {
              uVar56 = local_228;
              uVar29 = (uint)local_270;
              if ((uint)local_270 == local_270._4_4_) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x424,&local_278,(int *)((longlong)&local_270 + 4));
              }
              local_270 = CONCAT44(local_270._4_4_,uVar29 + 1);
              uVar48 = 0;
              if ((int)uVar29 < (int)(uVar29 + 1)) {
                uVar48 = ~uVar29 >> 0x1f;
              }
              if ((uVar48 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar3 = (TGPUSkinVertexFloat16Uvs<4> *)
                       (local_278.Data + (longlong)(int)uVar29 * 0x24);
              uVar29 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar29 + 1;
              uVar48 = 0;
              if ((int)uVar29 < (int)(uVar29 + 1)) {
                uVar48 = ~uVar29 >> 0x1f;
              }
              if ((uVar48 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar59 = local_220;
              pFVar58 = local_200.AllocatorInstance.Data + (longlong)(int)uVar29 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat16Uvs<4>_>
                        (local_220,pTVar3,pFVar33,uVar65,pFVar67);
              pFVar51 = (pFVar33->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar51 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar51 = &pFVar33->SkinWeightVertexBuffer;
              }
              pFVar42 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar51,&local_e8,uVar65);
              uVar10 = *(undefined8 *)(pFVar42->InfluenceBones + 4);
              *(undefined8 *)pFVar58 = *(undefined8 *)pFVar42->InfluenceBones;
              *(undefined8 *)(pFVar58 + 8) = uVar10;
              in_XMM1 = *(undefined1 (*) [16])(pFVar42->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar58 + 0x10) = in_XMM1;
              uVar8 = *(undefined4 *)(pFVar42->InfluenceWeights + 6);
              uVar20 = *(undefined4 *)(pFVar42->InfluenceWeights + 8);
              uVar21 = *(undefined4 *)(pFVar42->InfluenceWeights + 10);
              *(undefined4 *)(pFVar58 + 0x20) = *(undefined4 *)(pFVar42->InfluenceWeights + 4);
              *(undefined4 *)(pFVar58 + 0x24) = uVar8;
              *(undefined4 *)(pFVar58 + 0x28) = uVar20;
              *(undefined4 *)(pFVar58 + 0x2c) = uVar21;
              cVar26 = (**(code **)(pFVar59->MergeMesh->_padding_ + 0x470))();
              if (cVar26 != '\0') {
                if ((int)uVar65 < (int)uVar56) {
                  pFVar60 = (FColor_u_0 *)
                            ((pFVar33->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar65 * (pFVar33->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_288.Data <= pFVar60) &&
                      (pFVar60 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4))) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar28 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar28 + 1);
                  FVar30 = *pFVar60;
                }
                else {
                  local_294.Bits = 0xffffffff;
                  if (((local_288.Data <= &local_294) &&
                      (&local_294 < (FColor_u_0 *)(local_288.Data + (longlong)local_280._4_4_ * 4)))
                     && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar28 = (uint)local_280;
                  if ((uint)local_280 == local_280._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_288,(int *)((longlong)&local_280 + 4));
                  }
                  local_280 = CONCAT44(local_280._4_4_,iVar28 + 1);
                  FVar30 = local_294;
                }
                *(FColor_u_0 *)(local_288.Data + (longlong)iVar28 * 4) = FVar30;
              }
              lVar36 = 0xc;
              do {
                if (*(ushort *)(pFVar58 + 0x18) != 0) {
                  uVar7 = *(ushort *)pFVar58;
                  if (((pFVar67->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar7) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  *(ushort *)pFVar58 =
                       *(ushort *)
                        ((pFVar67->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar7 * 2);
                }
                pFVar58 = pFVar58 + 2;
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
              uVar65 = uVar65 + 1;
              if ((int)uVar55 <= (int)uVar65) break;
            }
          }
          pFVar58 = local_260;
          *(uint *)(local_260 + 8) = *(int *)(local_260 + 8) + pFVar67->Section->NumTriangles;
          if (((pFVar33->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar28 = (**(code **)(((pFVar33->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar29 = local_234;
          uVar55 = pFVar67->Section->BaseIndex;
          uVar56 = pFVar67->Section->NumTriangles;
          iVar61 = uVar55 + uVar56 * 2 + uVar56;
          if (iVar61 < iVar28) {
            iVar28 = iVar61;
          }
          for (; (int)uVar55 < iVar28; uVar55 = uVar55 + 1) {
            if (((pFVar33->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pFVar12 = (pFVar33->MultiSizeIndexContainer).IndexBuffer;
            iVar61 = (**(code **)(pFVar12->_padding_ + 0x60))(pFVar12,uVar55);
            local_264 = (iVar61 - pFVar67->Section->BaseVertexIndex) + uVar29;
            if (((local_248.AllocatorInstance.Data <= (FScriptContainerElement *)&local_264) &&
                ((FScriptContainerElement *)&local_264 <
                 local_248.AllocatorInstance.Data + (longlong)local_248.ArrayMax * 4)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            iVar61 = local_248.ArrayNum;
            if (local_248.ArrayNum == local_248.ArrayMax) {
              iVar61 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_248.AllocatorInstance,&local_248.ArrayMax);
            }
            local_248.ArrayNum = iVar61 + 1;
            *(uint *)(local_248.AllocatorInstance.Data + (longlong)iVar61 * 4) = local_264;
            if (local_22c < local_264) {
              local_22c = local_264;
            }
            pFVar58 = local_260;
          }
          pFVar13 = pFVar67->Section;
          if ((pFVar13->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 8))(pFVar58 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar58 + 0xe0) + 8))
                      (pFVar58 + 0xe0,*(undefined4 *)(pFVar58 + 0x48));
            puVar44 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 0x18))(pFVar58 + 0xb8);
            pvVar45 = (void *)(**(code **)(*(longlong *)(pFVar58 + 0xe0) + 0x18))(pFVar58 + 0xe0);
            memset(pvVar45,0,(ulonglong)*(uint *)(pFVar58 + 0x48) << 3);
            *puVar44 = 0;
          }
          else {
            if (pFVar58[0x108] == (FScriptContainerElement)0x0) {
              pFVar4 = (ForAnyElementType *)(pFVar58 + 200);
              puVar2 = &(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar4 != (ForAnyElementType *)puVar2) {
                pvVar45 = *(void **)puVar2;
                pFVar62 = pFVar58 + 0xd4;
                iVar28 = *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar45 & 1) != 0) {
                  pvVar45 = puVar2 + ((longlong)pvVar45 >> 0x18);
                }
                *(int *)(pFVar58 + 0xd0) = iVar28;
                if ((iVar28 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar28,*(int *)pFVar62,pFVar4,iVar28,(int *)pFVar62);
                  FVar52 = *pFVar4;
                  if (((ulonglong)FVar52 & 1) != 0) {
                    FVar52 = (ForAnyElementType)
                             ((longlong)&pFVar4->field_0x0 + ((longlong)FVar52 >> 0x18));
                  }
                  if (iVar28 != 0) {
                    memcpy((void *)FVar52,pvVar45,(longlong)iVar28 << 2);
                  }
                }
              }
              pFVar4 = (ForAnyElementType *)(pFVar58 + 0xf0);
              pFVar58[0xd8] =
                   (FScriptContainerElement)
                   (pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar13 = pFVar67->Section;
              puVar2 = &(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar4 != (ForAnyElementType *)puVar2) {
                pvVar45 = *(void **)puVar2;
                pFVar62 = pFVar58 + 0xfc;
                iVar28 = *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar45 & 1) != 0) {
                  pvVar45 = &(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar45 >> 0x18);
                }
                *(int *)(pFVar58 + 0xf8) = iVar28;
                if ((iVar28 == 0) && (*(int *)pFVar62 == 0)) {
                  *(int *)pFVar62 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar28,*(int *)pFVar62,pFVar4,iVar28,(int *)pFVar62);
                  FVar52 = *pFVar4;
                  if (((ulonglong)FVar52 & 1) != 0) {
                    FVar52 = (ForAnyElementType)
                             ((longlong)&pFVar4->field_0x0 + ((longlong)FVar52 >> 0x18));
                  }
                  if (iVar28 != 0) {
                    memcpy((void *)FVar52,pvVar45,(longlong)iVar28 << 3);
                  }
                }
              }
              pFVar58[0x100] =
                   (FScriptContainerElement)
                   (pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar41 = (int *)(**(code **)(*(longlong *)(pFVar58 + 0xb8) + 0x18))();
              iVar28 = 0;
              if (0 < *(int *)(pFVar58 + 0xd0)) {
                do {
                  iVar28 = iVar28 + 1;
                  *piVar41 = *piVar41 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar41 = piVar41 + 1;
                } while (iVar28 < *(int *)(pFVar58 + 0xd0));
              }
            }
            else {
              iVar28 = *(int *)(pFVar58 + 0xd0);
              uVar55 = *(uint *)(pFVar58 + 0xf8);
              (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 8))
                        (pFVar58 + 0xb8,
                         *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar28);
              (**(code **)(*(longlong *)(pFVar58 + 0xe0) + 8))
                        (pFVar58 + 0xe0,*(undefined4 *)(pFVar58 + 0x48));
              lVar36 = (**(code **)(*(longlong *)(pFVar58 + 0xb8) + 0x18))(pFVar58 + 0xb8);
              lVar40 = (**(code **)(*(longlong *)(pFVar58 + 0xe0) + 0x18))();
              if (iVar28 < *(int *)(pFVar58 + 0xd0)) {
                piVar41 = (int *)(lVar36 + (longlong)iVar28 * 4);
                iVar61 = iVar28;
                do {
                  iVar61 = iVar61 + 1;
                  *piVar41 = *piVar41 + (local_234 - pFVar67->Section->BaseVertexIndex);
                  piVar41 = piVar41 + 1;
                } while (iVar61 < *(int *)(pFVar58 + 0xd0));
              }
              if (uVar55 < *(uint *)(pFVar58 + 0x48)) {
                do {
                  uVar43 = (ulonglong)uVar55;
                  uVar55 = uVar55 + 1;
                  piVar41 = (int *)(lVar40 + 4 + uVar43 * 8);
                  *piVar41 = *piVar41 + iVar28;
                } while (uVar55 < *(uint *)(pFVar58 + 0x48));
                pFVar58[0x108] = (FScriptContainerElement)0x1;
                goto LAB_1485fad29;
              }
            }
            pFVar58[0x108] = (FScriptContainerElement)0x1;
          }
LAB_1485fad29:
          local_218 = local_218 + 1;
          local_210 = local_210 + 0x30;
          iVar28 = *(int *)((longlong)(local_168->UVChannelData).LocalUVDensities +
                           local_258 + -0x30);
          uVar43 = local_258;
          FVar64.Data = (FScriptContainerElement *)local_168;
        } while ((int)local_218 < iVar28);
      }
      local_258 = uVar43 + 0x48;
      local_214 = local_214 + 1;
      this = local_220;
      pFVar31 = local_1d0;
      pFVar33 = local_250;
      pFVar34 = local_208;
    } while ((int)local_214 < local_1e0.ArrayNum);
  }
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar28 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar61 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar31,0);
    if (iVar61 <= iVar28) {
      bVar25 = false;
      goto LAB_1485fadd1;
    }
  }
  bVar25 = true;
LAB_1485fadd1:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar33->RequiredBones).AllocatorInstance.Data,
             (pFVar33->RequiredBones).ArrayNum,local_295,(TLess<void> *)&local_295);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar33->ActiveBoneIndices);
  pFVar31 = &(pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar34->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar31;
  FPositionVertexBuffer::Init
            (&(pFVar33->StaticVertexBuffers).PositionVertexBuffer,(uint)local_270,bVar25);
  FStaticMeshVertexBuffer::Init(pFVar31,(uint)local_270,local_290,bVar25);
  fVar24 = _UNK_15104007c;
  fVar23 = _UNK_151040078;
  fVar22 = _UNK_151040074;
  fVar68 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar55 = 0;
  if (0 < (int)(uint)local_270) {
    local_260 = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    do {
      lVar36 = local_1f0;
      pFVar58 = local_260;
      uVar56 = ~uVar55 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar55 < (int)(uint)local_270) {
        uVar29 = uVar56;
      }
      local_228 = uVar56;
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar43 = (ulonglong)(uVar55 * (pFVar33->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar14 = (pFVar33->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar8 = *(undefined4 *)(local_278.Data + lVar36 + 0x10);
      *(undefined8 *)(puVar14 + uVar43) = *(undefined8 *)(local_278.Data + lVar36 + 8);
      *(undefined4 *)(puVar14 + uVar43 + 8) = uVar8;
      uVar29 = 0;
      if ((int)uVar55 < (int)(uint)local_270) {
        uVar29 = uVar56;
      }
      if (uVar29 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      auVar69 = pmovsxbd(in_XMM1,*(undefined4 *)(local_278.Data + lVar36 + 4));
      uVar29 = 0;
      if ((int)uVar55 < (int)(uint)local_270) {
        uVar29 = uVar56;
      }
      fVar73 = (float)auVar69._8_4_ * fVar23;
      uVar10 = CONCAT44((float)auVar69._4_4_ * fVar22,(float)auVar69._0_4_ * fVar68);
      iVar28 = (uint)local_270;
      local_19c = uVar10;
      local_194 = fVar73;
      if (uVar29 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = (uint)local_270;
      }
      auVar69 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar36));
      auVar70 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar36 + 4));
      fVar71 = (float)auVar69._0_4_ * fVar68;
      fVar72 = (float)auVar69._4_4_ * fVar22;
      local_1a0 = (float)auVar69._8_4_ * fVar23;
      uVar29 = 0;
      if ((int)uVar55 < iVar28) {
        uVar29 = uVar56;
      }
      local_1a8 = CONCAT44(fVar72,fVar71);
      dVar16 = (double)local_1a0;
      dVar19 = (double)fVar71;
      dVar18 = (double)fVar72;
      dVar74 = (double)((float)auVar70._8_4_ * fVar23);
      dVar17 = (double)((float)auVar70._0_4_ * fVar68);
      dVar76 = (double)((float)auVar70._4_4_ * fVar22);
      dVar75 = (double)((float)auVar70._12_4_ * fVar24);
      auVar69._0_8_ = (dVar16 * dVar76 - dVar74 * dVar18) * dVar75;
      auVar69._8_8_ = 0;
      fVar71 = (float)auVar69._0_8_;
      if ((uVar29 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar69,*(undefined4 *)(local_278.Data + lVar36));
      local_178._s_0.Z = (float)in_XMM1._8_4_ * fVar23;
      local_178._0_8_ = CONCAT44((float)in_XMM1._4_4_ * fVar22,(float)in_XMM1._0_4_ * fVar68);
      local_1b8._s_0.X = fVar71;
      local_1b8._s_0.Y = (float)((dVar74 * dVar19 - dVar16 * dVar17) * dVar75);
      local_1b8._s_0.Z = (float)((dVar17 * dVar18 - dVar76 * dVar19) * dVar75);
      local_188._0_8_ = uVar10;
      local_188._s_0.Z = fVar73;
      local_158 = local_178._0_8_;
      local_150 = local_178._s_0.Z;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar31,uVar55,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1b8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_290 != 0) {
        lVar63 = 0;
        local_210 = 0;
        lVar40 = lVar63;
        lVar66 = lVar63;
        local_258 = (ulonglong)local_290;
        do {
          lVar46 = local_210;
          uVar29 = 0;
          if ((int)uVar55 < (int)(uint)local_270) {
            uVar29 = uVar56;
          }
          if ((uVar29 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          FVar64.Data = local_278.Data;
          fVar73 = FGenericPlatformMath::LoadHalf
                             ((ushort *)(local_278.Data + lVar66 + lVar36 + 0x14));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(local_208._4_4_,fVar73);
          fVar71 = FGenericPlatformMath::LoadHalf((ushort *)(FVar64.Data + lVar66 + lVar36 + 0x16));
          local_208 = (FSkeletalMeshLODInfo *)CONCAT44(fVar71,(undefined4)local_208);
          puVar14 = (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar54 = (ulonglong)(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar55;
          pcVar15 = *(code **)((longlong)
                               *(local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_250->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            lVar46 = (*pcVar15)();
            if ((puVar14 + lVar46 < puVar14 + lVar66 + lVar54 * 4 + 4) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            this_00 = (FFloat16 *)(puVar14 + lVar40 + lVar54 * 4);
            if ((this_00 < (FFloat16 *)
                           (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((pFVar34->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              local_268.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_268.Encoded,fVar73);
              this_00->Encoded = local_268.Encoded;
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              local_266.Encoded = 0;
              FGenericPlatformMath::StoreHalf(&local_266.Encoded,fVar71);
              this_00[1].Encoded = local_266.Encoded;
            }
            else {
              FFloat16::SetTruncate(this_00,fVar73);
              in_XMM1._4_4_ = extraout_XMM0_Db;
              in_XMM1._0_4_ = fVar71;
              in_XMM1._8_4_ = extraout_XMM0_Dc;
              in_XMM1._12_4_ = extraout_XMM0_Dd;
              FFloat16::SetTruncate(this_00 + 1,fVar71);
            }
          }
          else {
            lVar36 = (*pcVar15)();
            if ((puVar14 + lVar36 < puVar14 + lVar46 + lVar54 * 8 + 8) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((puVar14 + lVar46 + lVar54 * 8 <
                 (local_250->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15e,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            *(FSkeletalMeshLODInfo **)(puVar14 + lVar63 + lVar54 * 8) = local_208;
            lVar36 = local_1f0;
          }
          lVar66 = lVar66 + 4;
          local_210 = local_210 + 8;
          lVar63 = lVar63 + 8;
          lVar40 = lVar40 + 4;
          local_258 = local_258 - 1;
          uVar56 = local_228;
        } while (local_258 != 0);
        local_258 = 0;
        pFVar33 = local_250;
        pFVar31 = local_1d0;
        pFVar58 = local_260;
      }
      local_260 = pFVar58 + 1;
      local_1f0 = lVar36 + 0x24;
      uVar55 = uVar55 + 1;
    } while ((int)uVar55 < (int)(uint)local_270);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar33->SkinWeightVertexBuffer).DataVertexBuffer,local_230);
  (pFVar33->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_298;
  (pFVar33->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar25;
  (pFVar33->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar25;
  FSkinWeightVertexBuffer::operator=(&pFVar33->SkinWeightVertexBuffer,&local_200);
  cVar26 = (**(code **)(local_220->MergeMesh->_padding_ + 0x470))();
  if (cVar26 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar33->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_288.Data,
               (uint)local_280,4,true);
  }
  uVar53 = '\x04';
  if (local_22c < 0xffff) {
    uVar53 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar33->MultiSizeIndexContainer,uVar53,&local_248);
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_288.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_288.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
  if ((FNewSectionInfo *)local_1e0.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e0.AllocatorInstance.Data);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat32Uvs<1>_> @ 1485fb550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat32Uvs<1>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  FVector2DHalf *this_00;
  ForAnyElementType *pFVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar8;
  undefined8 uVar9;
  FName FVar10;
  FRawStaticIndexBuffer16or32Interface *pFVar11;
  FSkelMeshRenderSection *pFVar12;
  uchar *puVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  FColor_u_0 FVar29;
  FStaticMeshVertexBuffer *pFVar30;
  FSkeletalMeshLODRenderData *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODInfo *pFVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  longlong *plVar36;
  ForAnyElementType *pFVar37;
  longlong lVar38;
  float *pfVar39;
  int *piVar40;
  FSkinWeightInfo *pFVar41;
  undefined4 *puVar42;
  void *pvVar43;
  FReferenceSkeleton *this_01;
  byte bVar44;
  uint uVar45;
  ulonglong uVar46;
  FScriptContainerElement *pFVar47;
  FSkinWeightVertexBuffer *pFVar48;
  ForAnyElementType FVar49;
  uchar uVar50;
  longlong lVar51;
  uint uVar52;
  uint uVar53;
  FSkeletalMaterial *pFVar54;
  FScriptContainerElement *pFVar55;
  uchar *puVar56;
  FSkeletalMeshMerge *pFVar57;
  TGPUSkinVertexFloat32Uvs<1> *pTVar58;
  FColor_u_0 *pFVar59;
  int iVar60;
  FScriptContainerElement *pFVar61;
  ForAnyElementType FVar62;
  uint uVar63;
  FMergeSectionInfo *pFVar64;
  longlong lVar65;
  float fVar66;
  undefined1 in_XMM1 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auStackY_2d8 [32];
  bool local_288;
  FIdentityFunctor local_285;
  FColor_u_0 local_284;
  uint local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  uint local_258 [2];
  longlong local_250;
  FScriptContainerElement *local_248;
  FSkeletalMeshLODRenderData *local_240;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_238;
  ushort local_228 [2];
  uint local_224;
  uint local_220;
  uint local_21c;
  FSkeletalMeshMerge *local_218;
  uint local_210;
  uint local_20c;
  FSkeletalMeshLODInfo *local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  FSkeletalMeshLODRenderData *local_1f0;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e8;
  uint local_1d8;
  uint local_1d4;
  FStaticMeshVertexBuffer *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  TVector<float>_u_0 local_1a8;
  undefined8 local_198;
  float local_190;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  longlong local_168;
  FNewSectionInfo *local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_218 = this;
  local_1d8 = param_1;
  pFVar30 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar30;
  if ((pFVar30 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar31 = ::operator_new(0x768);
  pFVar32 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar31 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar32 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar31,true);
  }
  pFVar55 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data;
  local_240 = pFVar32;
  local_1f0 = pFVar32;
  if (((pFVar55 <= (FScriptContainerElement *)&local_1f0) &&
      ((FScriptContainerElement *)&local_1f0 <
       pFVar55 + (longlong)(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar27 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum;
  piVar40 = &(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax;
  if (iVar27 == *piVar40) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar30,piVar40);
  }
  (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum = iVar27 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar27 * 8) = local_1f0;
  pFVar33 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar33->LODHysteresis = 3.4028235e+38;
  (pFVar33->ScreenSize).Default = 3.4028235e+38;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  local_208 = pFVar33;
  GenerateNewSectionArray(this,&local_1e8,param_1);
  local_21c = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  local_280 = 0;
  local_220 = 0;
  local_288 = false;
  local_20c = 0;
  if (0 < local_1e8.ArrayNum) {
    local_250 = 0;
    do {
      lVar38 = local_250;
      uVar52 = 0;
      if ((int)local_20c < local_1e8.ArrayNum) {
        uVar52 = ~local_20c >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      FVar62.Data = local_1e8.AllocatorInstance.Data;
      uVar52 = 0;
      local_160 = (FNewSectionInfo *)local_1e8.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e8.AllocatorInstance.Data + lVar38 + 0x18)) {
        do {
          uVar53 = 0;
          if ((int)uVar52 < *(int *)(FVar62.Data + lVar38 + 0x18)) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar32->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar62.Data + lVar38 + 0x10) + (longlong)(int)uVar52 * 2));
          uVar52 = uVar52 + 1;
        } while ((int)uVar52 < *(int *)(FVar62.Data + lVar38 + 0x18));
      }
      piVar40 = &(pFVar32->RenderSections).ArrayMax;
      uVar52 = (pFVar32->RenderSections).ArrayNum;
      if (uVar52 == *piVar40) {
        uVar52 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar32->RenderSections).AllocatorInstance,piVar40);
      }
      (pFVar32->RenderSections).ArrayNum = uVar52 + 1;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uVar52 + 1)) {
        uVar53 = ~uVar52 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar55 = (FScriptContainerElement *)0x0;
      pFVar61 = (pFVar32->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar52 * 0x118;
      if (pFVar61 == (FScriptContainerElement *)0x0) {
        local_248 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar61 = 0;
        *(ushort *)(pFVar61 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar61 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar61 + 4) = 0;
        *(undefined8 *)(pFVar61 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar61 + 0x18) = 0;
        *(undefined8 *)(pFVar61 + 0x20) = 0;
        *(undefined8 *)(pFVar61 + 0x28) = 0;
        *(undefined8 *)(pFVar61 + 0x30) = 0;
        *(undefined8 *)(pFVar61 + 0x38) = 0;
        *(undefined8 *)(pFVar61 + 0x40) = 0;
        *(undefined4 *)(pFVar61 + 0x48) = 0;
        *(undefined4 *)(pFVar61 + 0x4c) = 4;
        *(undefined8 *)(pFVar61 + 0x54) = 0;
        *(undefined8 *)(pFVar61 + 0x5c) = 0;
        local_248 = pFVar61;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar61 + 0x68));
        *(undefined ***)(pFVar61 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar61 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar61 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar61 + 0x88) = 0;
        *(undefined8 *)(pFVar61 + 0x90) = 0;
        *(undefined4 *)(pFVar61 + 0x98) = 0;
        *(undefined8 *)(pFVar61 + 0xa0) = 0;
        *(undefined8 *)(pFVar61 + 0xa8) = 0;
        *(undefined4 *)(pFVar61 + 0xb0) = 0;
        *(undefined8 *)(pFVar61 + 200) = 0;
        *(undefined8 *)(pFVar61 + 0xd0) = 0;
        pFVar61[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar61 + 0xf0) = 0;
        *(undefined8 *)(pFVar61 + 0xf8) = 0;
        pFVar61[0x100] = (FScriptContainerElement)0x0;
        pFVar61[0x108] = (FScriptContainerElement)0x0;
        pFVar61[0x110] = (FScriptContainerElement)0x0;
        pFVar55 = pFVar61;
      }
      pFVar34 = FVar62.Data + lVar38 + 0x10;
      pFVar61 = pFVar55 + 0x38;
      if (pFVar61 != pFVar34) {
        iVar27 = *(int *)(pFVar34 + 8);
        pFVar47 = pFVar55 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar34;
        *(int *)(pFVar55 + 0x40) = iVar27;
        if ((iVar27 == 0) && (*(int *)pFVar47 == 0)) {
          *(int *)pFVar47 = 0;
          lVar38 = local_250;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar27,*(int *)pFVar47,(ForAnyElementType *)pFVar61,iVar27,(int *)pFVar47);
          lVar38 = local_250;
          if (iVar27 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar61,_Src.Data,(longlong)iVar27 * 2);
            lVar38 = local_250;
          }
        }
      }
      pFVar57 = local_218;
      *(undefined4 *)(pFVar55 + 0x48) = 0;
      *(uint *)(pFVar55 + 0x10) = (uint)local_260;
      lVar35 = (**(code **)(local_218->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar35 + 8) != (pFVar57->MaterialIds).ArrayNum) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar61 = FVar62.Data + lVar38 + 0x28;
      if (*(int *)pFVar61 == -1) {
        plVar36 = (longlong *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar62.Data + lVar38 + 0x20))->DebugPtr;
        local_1c0 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar8 = (FSkeletalMaterial *)*plVar36;
        lVar38 = plVar36[1];
        local_110 = local_1c0;
        for (pFVar54 = pFVar8; pFVar54 != pFVar8 + (int)lVar38; pFVar54 = pFVar54 + 1) {
          bVar24 = ::operator==(pFVar54,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar24) {
            lVar38 = ((longlong)pFVar54 - (longlong)pFVar8) / 6 +
                     ((longlong)pFVar54 - (longlong)pFVar8 >> 0x3f);
            uVar46 = (lVar38 >> 3) - (lVar38 >> 0x3f);
            lVar38 = local_250;
            pFVar57 = local_218;
            goto LAB_1485fbba6;
          }
        }
        uVar46 = 0xffffffff;
        lVar38 = local_250;
        pFVar57 = local_218;
      }
      else {
        pFVar34 = (pFVar57->MaterialIds).AllocatorInstance.Data;
        for (pFVar47 = pFVar34; pFVar47 != pFVar34 + (longlong)(pFVar57->MaterialIds).ArrayNum * 4;
            pFVar47 = pFVar47 + 4) {
          if (*(int *)pFVar47 == *(int *)pFVar61) {
            uVar46 = (longlong)pFVar47 - (longlong)pFVar34 >> 2;
            goto LAB_1485fbba6;
          }
        }
        uVar46 = 0xffffffff;
      }
LAB_1485fbba6:
      if ((int)uVar46 == -1) {
        local_148 = *(UObject **)(FVar62.Data + lVar38 + 0x20);
        uVar9 = *(undefined8 *)(FVar62.Data + lVar38 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar34 = FVar62.Data + lVar38 + 0x34;
        local_138 = *(undefined4 *)pFVar34;
        uStack_134 = *(undefined4 *)(pFVar34 + 4);
        uStack_130 = *(undefined4 *)(pFVar34 + 8);
        uStack_12c = *(undefined4 *)(pFVar34 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar62.Data + lVar38 + 0x44);
        local_140 = uVar9;
        pFVar37 = (ForAnyElementType *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar37->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar37->Data + (longlong)*(int *)((longlong)&pFVar37[1].Data + 4) * 0x30)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = *(int *)&pFVar37[1].Data;
        piVar40 = (int *)((longlong)&pFVar37[1].Data + 4);
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar37,piVar40);
        }
        lVar35 = (longlong)iVar27;
        *(int *)&pFVar37[1].Data = iVar27 + 1;
        pFVar34 = pFVar37->Data;
        *(UObject **)(pFVar34 + lVar35 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar34 + lVar35 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar34 + lVar35 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar34 + lVar35 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar57 = local_218;
        pTVar1 = &local_218->MaterialIds;
        pFVar34 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar34 <= pFVar61) &&
            (pFVar61 < pFVar34 + (longlong)(local_218->MaterialIds).ArrayMax * 4)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (pFVar57->MaterialIds).ArrayNum;
        piVar40 = &(pFVar57->MaterialIds).ArrayMax;
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar40);
        }
        (pFVar57->MaterialIds).ArrayNum = iVar27 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar27 * 4) = *(int *)pFVar61;
        lVar35 = (**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        uVar46 = (ulonglong)(ushort)(*(short *)(lVar35 + 8) - 1);
      }
      *(ushort *)pFVar55 = (ushort)uVar46;
      *(undefined4 *)(pFVar55 + 8) = 0;
      *(int *)(pFVar55 + 4) = local_238.ArrayNum;
      plVar36 = (longlong *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
      uVar6 = *(ushort *)pFVar55;
      if (((int)plVar36[1] <= (int)(uint)uVar6) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar27 = *(int *)(FVar62.Data + lVar38 + 8);
      local_168 = (ulonglong)uVar6 * 0x30 + *plVar36;
      local_210 = 0;
      if (0 < iVar27) {
        local_1c8 = 0;
        do {
          lVar65 = local_168;
          lVar35 = local_1c8;
          uVar52 = 0;
          if ((int)local_210 < iVar27) {
            uVar52 = ~local_210 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar64 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar62.Data)->UVChannelData).LocalUVDensities
                      + lVar38 + -0x38) + lVar35);
          lVar38 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar52 = *(int *)(lVar38 + 8) - 1;
          if ((int)local_1d8 < (int)uVar52) {
            uVar52 = local_1d8;
          }
          uVar6 = pFVar64->Section->MaterialIndex;
          uVar46 = (ulonglong)uVar6;
          lVar38 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar6 < *(int *)(lVar38 + 8)) {
            plVar36 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar36[1] <= (int)(uint)uVar6) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            lVar38 = *plVar36;
            fVar66 = *(float *)(lVar38 + 0x14 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x14)) {
              fVar66 = *(float *)(lVar65 + 0x14);
            }
            *(float *)(lVar65 + 0x14) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x18 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x18)) {
              fVar66 = *(float *)(lVar65 + 0x18);
            }
            *(float *)(lVar65 + 0x18) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x1c + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x1c)) {
              fVar66 = *(float *)(lVar65 + 0x1c);
            }
            *(float *)(lVar65 + 0x1c) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x20 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x20)) {
              fVar66 = *(float *)(lVar65 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar66);
            *(float *)(lVar65 + 0x20) = fVar66;
          }
          pfVar39 = (float *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x328))
                                       (pFVar64->SkelMesh,uVar52);
          bVar4 = *(byte *)&local_208->BuildSettings;
          fVar66 = (local_208->ScreenSize).Default;
          if (*pfVar39 <= fVar66) {
            fVar66 = *pfVar39;
          }
          (local_208->ScreenSize).Default = fVar66;
          bVar44 = bVar4 | *(byte *)(pfVar39 + 6);
          uVar5 = (local_208->BuildSettings).field_0x1;
          bVar44 = (bVar4 ^ bVar44) & 0x7f ^ bVar44;
          *(byte *)&local_208->BuildSettings = bVar44;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar39 + 0x19)) & 1 ^ uVar5 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar44 | *(byte *)(pfVar39 + 6)) & 0x20 ^ bVar44 & 0xdf;
          fVar66 = pfVar39[1];
          if (local_208->LODHysteresis <= pfVar39[1]) {
            fVar66 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar66;
          plVar36 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar53 = 0;
          if ((int)uVar52 < (int)plVar36[1]) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar31 = local_240;
          uVar53 = 0;
          pFVar32 = *(FSkeletalMeshLODRenderData **)(*plVar36 + (longlong)(int)uVar52 * 8);
          if (0 < (pFVar32->RequiredBones).ArrayNum) {
            lVar38 = 0;
            do {
              lVar35 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x318))();
              uVar52 = 0;
              if ((int)uVar53 < (pFVar32->RequiredBones).ArrayNum) {
                uVar52 = ~uVar53 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              uVar6 = *(ushort *)((pFVar32->RequiredBones).AllocatorInstance.Data + lVar38);
              if ((*(int *)(lVar35 + 0x28) <= (int)(uint)uVar6) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar10 = *(FName *)(*(longlong *)(lVar35 + 0x20) + (ulonglong)uVar6 * 0xc);
              if (((FVar10 != (FName)0x0) &&
                  (piVar40 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_218->NewRefSkeleton).FinalNameToIndexMap,FVar10),
                  piVar40 != (int *)0x0)) && (*piVar40 != -1)) {
                local_228[0] = (ushort)*piVar40;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar31->RequiredBones,local_228);
              }
              uVar53 = uVar53 + 1;
              lVar38 = lVar38 + 2;
              pFVar55 = local_248;
            } while ((int)uVar53 < (pFVar32->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar55 + 0x48) = *(int *)(pFVar55 + 0x48) + pFVar64->Section->NumVertices;
          uVar52 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_1d4 = (pFVar32->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar53 = pFVar64->Section->NumVertices + pFVar64->Section->BaseVertexIndex;
          if ((int)uVar53 < (int)uVar52) {
            uVar52 = uVar53;
          }
          pFVar48 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar48 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar48 = &pFVar32->SkinWeightVertexBuffer;
          }
          uVar53 = (pFVar48->DataVertexBuffer).MaxBoneInfluences;
          uVar28 = uVar53;
          if (uVar53 < local_220) {
            uVar28 = local_220;
          }
          local_288 = (bool)(local_288 | (pFVar48->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_248 + 0x4c) = uVar53;
          uVar53 = (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar53 <= local_280) {
            uVar53 = local_280;
          }
          local_224 = (uint)local_260;
          uVar63 = pFVar64->Section->BaseVertexIndex;
          local_280 = uVar53;
          local_220 = uVar28;
          if ((int)uVar63 < (int)uVar52) {
            while( true ) {
              uVar53 = local_1d4;
              uVar28 = (uint)local_260;
              if ((uint)local_260 == local_260._4_4_) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x41c,&local_268,(int *)((longlong)&local_260 + 4));
              }
              local_260 = CONCAT44(local_260._4_4_,uVar28 + 1);
              uVar45 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar45 = ~uVar28 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar58 = (TGPUSkinVertexFloat32Uvs<1> *)
                        (local_268.Data + (longlong)(int)uVar28 * 0x1c);
              uVar28 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar28 + 1;
              uVar45 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar45 = ~uVar28 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar57 = local_218;
              pFVar55 = local_200.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<1>_>
                        (local_218,pTVar58,pFVar32,uVar63,pFVar64);
              pFVar48 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar48 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar48 = &pFVar32->SkinWeightVertexBuffer;
              }
              pFVar41 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar48,&local_e8,uVar63);
              uVar9 = *(undefined8 *)(pFVar41->InfluenceBones + 4);
              *(undefined8 *)pFVar55 = *(undefined8 *)pFVar41->InfluenceBones;
              *(undefined8 *)(pFVar55 + 8) = uVar9;
              in_XMM1 = *(undefined1 (*) [16])(pFVar41->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar55 + 0x10) = in_XMM1;
              uVar7 = *(undefined4 *)(pFVar41->InfluenceWeights + 6);
              uVar19 = *(undefined4 *)(pFVar41->InfluenceWeights + 8);
              uVar20 = *(undefined4 *)(pFVar41->InfluenceWeights + 10);
              *(undefined4 *)(pFVar55 + 0x20) = *(undefined4 *)(pFVar41->InfluenceWeights + 4);
              *(undefined4 *)(pFVar55 + 0x24) = uVar7;
              *(undefined4 *)(pFVar55 + 0x28) = uVar19;
              *(undefined4 *)(pFVar55 + 0x2c) = uVar20;
              cVar25 = (**(code **)(pFVar57->MergeMesh->_padding_ + 0x470))();
              if (cVar25 != '\0') {
                if ((int)uVar63 < (int)uVar53) {
                  pFVar59 = (FColor_u_0 *)
                            ((pFVar32->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar63 * (pFVar32->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_278.Data <= pFVar59) &&
                      (pFVar59 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4))) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar27 + 1);
                  FVar29 = *pFVar59;
                }
                else {
                  local_284.Bits = 0xffffffff;
                  if (((local_278.Data <= &local_284) &&
                      (&local_284 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4)))
                     && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar27 + 1);
                  FVar29 = local_284;
                }
                *(FColor_u_0 *)(local_278.Data + (longlong)iVar27 * 4) = FVar29;
              }
              lVar38 = 0xc;
              do {
                if (*(ushort *)(pFVar55 + 0x18) != 0) {
                  uVar6 = *(ushort *)pFVar55;
                  if (((pFVar64->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar6) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ushort *)pFVar55 =
                       *(ushort *)
                        ((pFVar64->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar6 * 2);
                }
                pFVar55 = pFVar55 + 2;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              uVar63 = uVar63 + 1;
              if ((int)uVar52 <= (int)uVar63) break;
            }
          }
          pFVar55 = local_248;
          *(uint *)(local_248 + 8) = *(int *)(local_248 + 8) + pFVar64->Section->NumTriangles;
          if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar27 = (**(code **)(((pFVar32->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar28 = local_224;
          uVar52 = pFVar64->Section->BaseIndex;
          uVar53 = pFVar64->Section->NumTriangles;
          iVar60 = uVar52 + uVar53 * 2 + uVar53;
          if (iVar60 < iVar27) {
            iVar27 = iVar60;
          }
          for (; (int)uVar52 < iVar27; uVar52 = uVar52 + 1) {
            if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pFVar32->MultiSizeIndexContainer).IndexBuffer;
            iVar60 = (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,uVar52);
            local_258[0] = (iVar60 - pFVar64->Section->BaseVertexIndex) + uVar28;
            if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 <
                 local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 4)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar60 = local_238.ArrayNum;
            if (local_238.ArrayNum == local_238.ArrayMax) {
              iVar60 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_238.AllocatorInstance,&local_238.ArrayMax);
            }
            local_238.ArrayNum = iVar60 + 1;
            *(uint *)(local_238.AllocatorInstance.Data + (longlong)iVar60 * 4) = local_258[0];
            if (local_21c < local_258[0]) {
              local_21c = local_258[0];
            }
            pFVar55 = local_248;
          }
          pFVar12 = pFVar64->Section;
          if ((pFVar12->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 8))(pFVar55 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 8))
                      (pFVar55 + 0xe0,*(undefined4 *)(pFVar55 + 0x48));
            puVar42 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))(pFVar55 + 0xb8);
            pvVar43 = (void *)(**(code **)(*(longlong *)(pFVar55 + 0xe0) + 0x18))(pFVar55 + 0xe0);
            memset(pvVar43,0,(ulonglong)*(uint *)(pFVar55 + 0x48) << 3);
            *puVar42 = 0;
          }
          else {
            if (pFVar55[0x108] == (FScriptContainerElement)0x0) {
              pFVar3 = (ForAnyElementType *)(pFVar55 + 200);
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar43 = *(void **)puVar2;
                pFVar61 = pFVar55 + 0xd4;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar43 & 1) != 0) {
                  pvVar43 = puVar2 + ((longlong)pvVar43 >> 0x18);
                }
                *(int *)(pFVar55 + 0xd0) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar27,*(int *)pFVar61,pFVar3,iVar27,(int *)pFVar61);
                  FVar49 = *pFVar3;
                  if (((ulonglong)FVar49 & 1) != 0) {
                    FVar49 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar49 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar49,pvVar43,(longlong)iVar27 << 2);
                  }
                }
              }
              pFVar3 = (ForAnyElementType *)(pFVar55 + 0xf0);
              pFVar55[0xd8] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar12 = pFVar64->Section;
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar43 = *(void **)puVar2;
                pFVar61 = pFVar55 + 0xfc;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar43 & 1) != 0) {
                  pvVar43 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar43 >> 0x18);
                }
                *(int *)(pFVar55 + 0xf8) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar27,*(int *)pFVar61,pFVar3,iVar27,(int *)pFVar61);
                  FVar49 = *pFVar3;
                  if (((ulonglong)FVar49 & 1) != 0) {
                    FVar49 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar49 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar49,pvVar43,(longlong)iVar27 << 3);
                  }
                }
              }
              pFVar55[0x100] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar40 = (int *)(**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))();
              iVar27 = 0;
              if (0 < *(int *)(pFVar55 + 0xd0)) {
                do {
                  iVar27 = iVar27 + 1;
                  *piVar40 = *piVar40 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar27 < *(int *)(pFVar55 + 0xd0));
              }
            }
            else {
              iVar27 = *(int *)(pFVar55 + 0xd0);
              uVar52 = *(uint *)(pFVar55 + 0xf8);
              (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 8))
                        (pFVar55 + 0xb8,
                         *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar27);
              (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 8))
                        (pFVar55 + 0xe0,*(undefined4 *)(pFVar55 + 0x48));
              lVar38 = (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))(pFVar55 + 0xb8);
              lVar35 = (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 0x18))();
              if (iVar27 < *(int *)(pFVar55 + 0xd0)) {
                piVar40 = (int *)(lVar38 + (longlong)iVar27 * 4);
                iVar60 = iVar27;
                do {
                  iVar60 = iVar60 + 1;
                  *piVar40 = *piVar40 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar60 < *(int *)(pFVar55 + 0xd0));
              }
              if (uVar52 < *(uint *)(pFVar55 + 0x48)) {
                do {
                  uVar46 = (ulonglong)uVar52;
                  uVar52 = uVar52 + 1;
                  piVar40 = (int *)(lVar35 + 4 + uVar46 * 8);
                  *piVar40 = *piVar40 + iVar27;
                } while (uVar52 < *(uint *)(pFVar55 + 0x48));
                pFVar55[0x108] = (FScriptContainerElement)0x1;
                goto LAB_1485fc979;
              }
            }
            pFVar55[0x108] = (FScriptContainerElement)0x1;
          }
LAB_1485fc979:
          local_210 = local_210 + 1;
          local_1c8 = local_1c8 + 0x30;
          iVar27 = *(int *)((longlong)(local_160->UVChannelData).LocalUVDensities +
                           local_250 + -0x30);
          lVar38 = local_250;
          FVar62.Data = (FScriptContainerElement *)local_160;
        } while ((int)local_210 < iVar27);
      }
      local_250 = lVar38 + 0x48;
      local_20c = local_20c + 1;
      this = local_218;
      pFVar30 = local_1d0;
      pFVar32 = local_240;
      pFVar33 = local_208;
    } while ((int)local_20c < local_1e8.ArrayNum);
  }
  uVar52 = local_280;
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar27 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar60 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar30,0);
    if (iVar60 <= iVar27) {
      bVar24 = false;
      goto LAB_1485fca24;
    }
  }
  bVar24 = true;
LAB_1485fca24:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar32->RequiredBones).AllocatorInstance.Data,
             (pFVar32->RequiredBones).ArrayNum,local_285,(TLess<void> *)&local_285);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar32->ActiveBoneIndices);
  pFVar30 = &(pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar33->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar30;
  FPositionVertexBuffer::Init
            (&(pFVar32->StaticVertexBuffers).PositionVertexBuffer,(uint)local_260,bVar24);
  FStaticMeshVertexBuffer::Init(pFVar30,(uint)local_260,uVar52,bVar24);
  fVar23 = _UNK_15104007c;
  fVar22 = _UNK_151040078;
  fVar21 = _UNK_151040074;
  fVar66 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar52 = 0;
  if (0 < (int)(uint)local_260) {
    local_248 = (FScriptContainerElement *)0x0;
    local_250 = 0;
    do {
      pFVar55 = local_248;
      lVar38 = local_250;
      uVar28 = ~uVar52 >> 0x1f;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      if ((uVar53 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar46 = (ulonglong)(uVar52 * (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar13 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar7 = *(undefined4 *)(local_268.Data + lVar38 + 0x10);
      *(undefined8 *)(puVar13 + uVar46) = *(undefined8 *)(local_268.Data + lVar38 + 8);
      *(undefined4 *)(puVar13 + uVar46 + 8) = uVar7;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      if (uVar53 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      auVar67 = pmovsxbd(in_XMM1,*(undefined4 *)(local_268.Data + lVar38 + 4));
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      fVar71 = (float)auVar67._8_4_ * fVar22;
      uVar9 = CONCAT44((float)auVar67._4_4_ * fVar21,(float)auVar67._0_4_ * fVar66);
      iVar27 = (uint)local_260;
      local_158 = uVar9;
      local_150 = fVar71;
      if (uVar53 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (uint)local_260;
      }
      auVar67 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38));
      auVar68 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38 + 4));
      fVar69 = (float)auVar67._0_4_ * fVar66;
      fVar70 = (float)auVar67._4_4_ * fVar21;
      local_1b0 = (float)auVar67._8_4_ * fVar22;
      uVar53 = 0;
      if ((int)uVar52 < iVar27) {
        uVar53 = uVar28;
      }
      local_1b8 = CONCAT44(fVar70,fVar69);
      dVar15 = (double)local_1b0;
      dVar18 = (double)fVar69;
      dVar17 = (double)fVar70;
      dVar72 = (double)((float)auVar68._8_4_ * fVar22);
      dVar16 = (double)((float)auVar68._0_4_ * fVar66);
      dVar74 = (double)((float)auVar68._4_4_ * fVar21);
      dVar73 = (double)((float)auVar68._12_4_ * fVar23);
      auVar67._0_8_ = (dVar15 * dVar74 - dVar72 * dVar17) * dVar73;
      auVar67._8_8_ = 0;
      fVar69 = (float)auVar67._0_8_;
      if ((uVar53 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38));
      local_190 = (float)in_XMM1._8_4_ * fVar22;
      local_198 = CONCAT44((float)in_XMM1._4_4_ * fVar21,(float)in_XMM1._0_4_ * fVar66);
      local_1a8._s_0.X = fVar69;
      local_1a8._s_0.Y = (float)((dVar72 * dVar18 - dVar15 * dVar16) * dVar73);
      local_1a8._s_0.Z = (float)((dVar16 * dVar17 - dVar74 * dVar18) * dVar73);
      local_188._0_8_ = uVar9;
      local_188._s_0.Z = fVar71;
      local_178._0_8_ = local_198;
      local_178._s_0.Z = local_190;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar30,uVar52,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1a8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_280 != 0) {
        lVar35 = 0;
        lVar65 = 0;
        local_208 = (FSkeletalMeshLODInfo *)(ulonglong)local_280;
        do {
          uVar53 = 0;
          if ((int)uVar52 < (int)(uint)local_260) {
            uVar53 = uVar28;
          }
          if ((uVar53 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          FVar62.Data = local_268.Data;
          lVar38 = lVar38 + lVar65;
          puVar13 = (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar51 = (ulonglong)(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar52;
          pcVar14 = *(code **)((longlong)
                               *(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_240->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            this_00 = (FVector2DHalf *)(puVar13 + (lVar35 + lVar51) * 4);
            lVar51 = (*pcVar14)();
            if (((FVector2DHalf *)(puVar13 + lVar51) < this_00 + 1) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((this_00 < (FVector2DHalf *)
                           (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((pFVar33->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              FVector2DHalf::operator=(this_00,(TVector2<float> *)(FVar62.Data + lVar38 + 0x14));
            }
            else {
              fVar71 = *(float *)(FVar62.Data + lVar38 + 0x18);
              FFloat16::SetTruncate((FFloat16 *)this_00,*(float *)(FVar62.Data + lVar38 + 0x14));
              in_XMM1 = ZEXT416((uint)fVar71);
              FFloat16::SetTruncate(&this_00->Y,fVar71);
            }
          }
          else {
            puVar56 = puVar13 + lVar65 + lVar51 * 8;
            lVar51 = (*pcVar14)();
            if ((puVar13 + lVar51 < puVar56 + 8) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((puVar56 < (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x15e,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            *(undefined8 *)puVar56 = *(undefined8 *)(FVar62.Data + lVar38 + 0x14);
          }
          lVar35 = lVar35 + 1;
          lVar65 = lVar65 + 8;
          local_208 = (FSkeletalMeshLODInfo *)((longlong)local_208 - 1);
          lVar38 = local_250;
        } while (local_208 != (FSkeletalMeshLODInfo *)0x0);
        local_208 = (FSkeletalMeshLODInfo *)0x0;
        pFVar55 = local_248;
        pFVar32 = local_240;
        pFVar30 = local_1d0;
      }
      local_248 = pFVar55 + 1;
      local_250 = lVar38 + 0x1c;
      uVar52 = uVar52 + 1;
      this = local_218;
    } while ((int)uVar52 < (int)(uint)local_260);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar32->SkinWeightVertexBuffer).DataVertexBuffer,local_220);
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_288;
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar24;
  (pFVar32->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar24;
  FSkinWeightVertexBuffer::operator=(&pFVar32->SkinWeightVertexBuffer,&local_200);
  cVar25 = (**(code **)(this->MergeMesh->_padding_ + 0x470))();
  if (cVar25 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar32->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_278.Data,
               (uint)local_270,4,true);
  }
  uVar50 = '\x04';
  if (local_21c < 0xffff) {
    uVar50 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar32->MultiSizeIndexContainer,uVar50,&local_238);
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_278.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_278.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat32Uvs<2>_> @ 1485fd150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat32Uvs<2>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  TGPUSkinVertexFloat32Uvs<2> *pTVar3;
  FVector2DHalf *this_00;
  ForAnyElementType *pFVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar9;
  undefined8 uVar10;
  FName FVar11;
  FRawStaticIndexBuffer16or32Interface *pFVar12;
  FSkelMeshRenderSection *pFVar13;
  uchar *puVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  bool bVar25;
  char cVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  FColor_u_0 FVar30;
  FStaticMeshVertexBuffer *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODRenderData *pFVar33;
  FSkeletalMeshLODInfo *pFVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  longlong *plVar37;
  ForAnyElementType *pFVar38;
  longlong lVar39;
  float *pfVar40;
  int *piVar41;
  FSkinWeightInfo *pFVar42;
  undefined4 *puVar43;
  void *pvVar44;
  FReferenceSkeleton *this_01;
  byte bVar45;
  uint uVar46;
  ulonglong uVar47;
  FScriptContainerElement *pFVar48;
  FSkinWeightVertexBuffer *pFVar49;
  ForAnyElementType FVar50;
  uchar uVar51;
  longlong lVar52;
  uint uVar53;
  uint uVar54;
  FSkeletalMaterial *pFVar55;
  FScriptContainerElement *pFVar56;
  uchar *puVar57;
  FSkeletalMeshMerge *pFVar58;
  FColor_u_0 *pFVar59;
  int iVar60;
  FScriptContainerElement *pFVar61;
  ForAnyElementType FVar62;
  uint uVar63;
  FMergeSectionInfo *pFVar64;
  longlong lVar65;
  float fVar66;
  undefined1 in_XMM1 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auStackY_2d8 [32];
  bool local_288;
  FIdentityFunctor local_285;
  FColor_u_0 local_284;
  uint local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  uint local_258 [2];
  longlong local_250;
  FScriptContainerElement *local_248;
  FSkeletalMeshLODRenderData *local_240;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_238;
  ushort local_228 [2];
  uint local_224;
  uint local_220;
  uint local_21c;
  FSkeletalMeshMerge *local_218;
  uint local_210;
  uint local_20c;
  FSkeletalMeshLODInfo *local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  FSkeletalMeshLODRenderData *local_1f0;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e8;
  uint local_1d8;
  uint local_1d4;
  FStaticMeshVertexBuffer *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  TVector<float>_u_0 local_1a8;
  undefined8 local_198;
  float local_190;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  longlong local_168;
  FNewSectionInfo *local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_218 = this;
  local_1d8 = param_1;
  pFVar31 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar31;
  if ((pFVar31 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar25)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar32 = ::operator_new(0x768);
  pFVar33 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar32 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar33 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar32,true);
  }
  pFVar56 = (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.AllocatorInstance.Data;
  local_240 = pFVar33;
  local_1f0 = pFVar33;
  if (((pFVar56 <= (FScriptContainerElement *)&local_1f0) &&
      ((FScriptContainerElement *)&local_1f0 <
       pFVar56 + (longlong)(((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar28 = (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayNum;
  piVar41 = &(((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayMax;
  if (iVar28 == *piVar41) {
    iVar28 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar31,piVar41);
  }
  (((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.ArrayNum = iVar28 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar31)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar28 * 8) = local_1f0;
  pFVar34 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar34->LODHysteresis = 3.4028235e+38;
  (pFVar34->ScreenSize).Default = 3.4028235e+38;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  local_208 = pFVar34;
  GenerateNewSectionArray(this,&local_1e8,param_1);
  local_21c = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  local_280 = 0;
  local_220 = 0;
  local_288 = false;
  local_20c = 0;
  if (0 < local_1e8.ArrayNum) {
    local_250 = 0;
    do {
      lVar39 = local_250;
      uVar53 = 0;
      if ((int)local_20c < local_1e8.ArrayNum) {
        uVar53 = ~local_20c >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      FVar62.Data = local_1e8.AllocatorInstance.Data;
      uVar53 = 0;
      local_160 = (FNewSectionInfo *)local_1e8.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e8.AllocatorInstance.Data + lVar39 + 0x18)) {
        do {
          uVar54 = 0;
          if ((int)uVar53 < *(int *)(FVar62.Data + lVar39 + 0x18)) {
            uVar54 = ~uVar53 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar33->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar62.Data + lVar39 + 0x10) + (longlong)(int)uVar53 * 2));
          uVar53 = uVar53 + 1;
        } while ((int)uVar53 < *(int *)(FVar62.Data + lVar39 + 0x18));
      }
      piVar41 = &(pFVar33->RenderSections).ArrayMax;
      uVar53 = (pFVar33->RenderSections).ArrayNum;
      if (uVar53 == *piVar41) {
        uVar53 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar33->RenderSections).AllocatorInstance,piVar41);
      }
      (pFVar33->RenderSections).ArrayNum = uVar53 + 1;
      uVar54 = 0;
      if ((int)uVar53 < (int)(uVar53 + 1)) {
        uVar54 = ~uVar53 >> 0x1f;
      }
      if ((uVar54 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar56 = (FScriptContainerElement *)0x0;
      pFVar61 = (pFVar33->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar53 * 0x118;
      if (pFVar61 == (FScriptContainerElement *)0x0) {
        local_248 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar61 = 0;
        *(ushort *)(pFVar61 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar61 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar61 + 4) = 0;
        *(undefined8 *)(pFVar61 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar61 + 0x18) = 0;
        *(undefined8 *)(pFVar61 + 0x20) = 0;
        *(undefined8 *)(pFVar61 + 0x28) = 0;
        *(undefined8 *)(pFVar61 + 0x30) = 0;
        *(undefined8 *)(pFVar61 + 0x38) = 0;
        *(undefined8 *)(pFVar61 + 0x40) = 0;
        *(undefined4 *)(pFVar61 + 0x48) = 0;
        *(undefined4 *)(pFVar61 + 0x4c) = 4;
        *(undefined8 *)(pFVar61 + 0x54) = 0;
        *(undefined8 *)(pFVar61 + 0x5c) = 0;
        local_248 = pFVar61;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar61 + 0x68));
        *(undefined ***)(pFVar61 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar61 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar61 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar61 + 0x88) = 0;
        *(undefined8 *)(pFVar61 + 0x90) = 0;
        *(undefined4 *)(pFVar61 + 0x98) = 0;
        *(undefined8 *)(pFVar61 + 0xa0) = 0;
        *(undefined8 *)(pFVar61 + 0xa8) = 0;
        *(undefined4 *)(pFVar61 + 0xb0) = 0;
        *(undefined8 *)(pFVar61 + 200) = 0;
        *(undefined8 *)(pFVar61 + 0xd0) = 0;
        pFVar61[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar61 + 0xf0) = 0;
        *(undefined8 *)(pFVar61 + 0xf8) = 0;
        pFVar61[0x100] = (FScriptContainerElement)0x0;
        pFVar61[0x108] = (FScriptContainerElement)0x0;
        pFVar61[0x110] = (FScriptContainerElement)0x0;
        pFVar56 = pFVar61;
      }
      pFVar35 = FVar62.Data + lVar39 + 0x10;
      pFVar61 = pFVar56 + 0x38;
      if (pFVar61 != pFVar35) {
        iVar28 = *(int *)(pFVar35 + 8);
        pFVar48 = pFVar56 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar35;
        *(int *)(pFVar56 + 0x40) = iVar28;
        if ((iVar28 == 0) && (*(int *)pFVar48 == 0)) {
          *(int *)pFVar48 = 0;
          lVar39 = local_250;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar28,*(int *)pFVar48,(ForAnyElementType *)pFVar61,iVar28,(int *)pFVar48);
          lVar39 = local_250;
          if (iVar28 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar61,_Src.Data,(longlong)iVar28 * 2);
            lVar39 = local_250;
          }
        }
      }
      pFVar58 = local_218;
      *(undefined4 *)(pFVar56 + 0x48) = 0;
      *(uint *)(pFVar56 + 0x10) = (uint)local_260;
      lVar36 = (**(code **)(local_218->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar36 + 8) != (pFVar58->MaterialIds).ArrayNum) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar61 = FVar62.Data + lVar39 + 0x28;
      if (*(int *)pFVar61 == -1) {
        plVar37 = (longlong *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar62.Data + lVar39 + 0x20))->DebugPtr;
        local_1c0 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar9 = (FSkeletalMaterial *)*plVar37;
        lVar39 = plVar37[1];
        local_110 = local_1c0;
        for (pFVar55 = pFVar9; pFVar55 != pFVar9 + (int)lVar39; pFVar55 = pFVar55 + 1) {
          bVar25 = ::operator==(pFVar55,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar25) {
            lVar39 = ((longlong)pFVar55 - (longlong)pFVar9) / 6 +
                     ((longlong)pFVar55 - (longlong)pFVar9 >> 0x3f);
            uVar47 = (lVar39 >> 3) - (lVar39 >> 0x3f);
            lVar39 = local_250;
            pFVar58 = local_218;
            goto LAB_1485fd7a6;
          }
        }
        uVar47 = 0xffffffff;
        lVar39 = local_250;
        pFVar58 = local_218;
      }
      else {
        pFVar35 = (pFVar58->MaterialIds).AllocatorInstance.Data;
        for (pFVar48 = pFVar35; pFVar48 != pFVar35 + (longlong)(pFVar58->MaterialIds).ArrayNum * 4;
            pFVar48 = pFVar48 + 4) {
          if (*(int *)pFVar48 == *(int *)pFVar61) {
            uVar47 = (longlong)pFVar48 - (longlong)pFVar35 >> 2;
            goto LAB_1485fd7a6;
          }
        }
        uVar47 = 0xffffffff;
      }
LAB_1485fd7a6:
      if ((int)uVar47 == -1) {
        local_148 = *(UObject **)(FVar62.Data + lVar39 + 0x20);
        uVar10 = *(undefined8 *)(FVar62.Data + lVar39 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar35 = FVar62.Data + lVar39 + 0x34;
        local_138 = *(undefined4 *)pFVar35;
        uStack_134 = *(undefined4 *)(pFVar35 + 4);
        uStack_130 = *(undefined4 *)(pFVar35 + 8);
        uStack_12c = *(undefined4 *)(pFVar35 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar62.Data + lVar39 + 0x44);
        local_140 = uVar10;
        pFVar38 = (ForAnyElementType *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar38->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar38->Data + (longlong)*(int *)((longlong)&pFVar38[1].Data + 4) * 0x30)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = *(int *)&pFVar38[1].Data;
        piVar41 = (int *)((longlong)&pFVar38[1].Data + 4);
        if (iVar28 == *piVar41) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar38,piVar41);
        }
        lVar36 = (longlong)iVar28;
        *(int *)&pFVar38[1].Data = iVar28 + 1;
        pFVar35 = pFVar38->Data;
        *(UObject **)(pFVar35 + lVar36 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar35 + lVar36 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar35 + lVar36 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar35 + lVar36 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar35 + lVar36 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar35 + lVar36 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar58 = local_218;
        pTVar1 = &local_218->MaterialIds;
        pFVar35 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar35 <= pFVar61) &&
            (pFVar61 < pFVar35 + (longlong)(local_218->MaterialIds).ArrayMax * 4)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = (pFVar58->MaterialIds).ArrayNum;
        piVar41 = &(pFVar58->MaterialIds).ArrayMax;
        if (iVar28 == *piVar41) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar41);
        }
        (pFVar58->MaterialIds).ArrayNum = iVar28 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar28 * 4) = *(int *)pFVar61;
        lVar36 = (**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
        uVar47 = (ulonglong)(ushort)(*(short *)(lVar36 + 8) - 1);
      }
      *(ushort *)pFVar56 = (ushort)uVar47;
      *(undefined4 *)(pFVar56 + 8) = 0;
      *(int *)(pFVar56 + 4) = local_238.ArrayNum;
      plVar37 = (longlong *)(**(code **)(pFVar58->MergeMesh->_padding_ + 0x3c8))();
      uVar7 = *(ushort *)pFVar56;
      if (((int)plVar37[1] <= (int)(uint)uVar7) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar28 = *(int *)(FVar62.Data + lVar39 + 8);
      local_168 = (ulonglong)uVar7 * 0x30 + *plVar37;
      local_210 = 0;
      if (0 < iVar28) {
        local_1c8 = 0;
        do {
          lVar65 = local_168;
          lVar36 = local_1c8;
          uVar53 = 0;
          if ((int)local_210 < iVar28) {
            uVar53 = ~local_210 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar64 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar62.Data)->UVChannelData).LocalUVDensities
                      + lVar39 + -0x38) + lVar36);
          lVar39 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar53 = *(int *)(lVar39 + 8) - 1;
          if ((int)local_1d8 < (int)uVar53) {
            uVar53 = local_1d8;
          }
          uVar7 = pFVar64->Section->MaterialIndex;
          uVar47 = (ulonglong)uVar7;
          lVar39 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar7 < *(int *)(lVar39 + 8)) {
            plVar37 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar37[1] <= (int)(uint)uVar7) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            lVar39 = *plVar37;
            fVar66 = *(float *)(lVar39 + 0x14 + uVar47 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x14)) {
              fVar66 = *(float *)(lVar65 + 0x14);
            }
            *(float *)(lVar65 + 0x14) = fVar66;
            fVar66 = *(float *)(lVar39 + 0x18 + uVar47 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x18)) {
              fVar66 = *(float *)(lVar65 + 0x18);
            }
            *(float *)(lVar65 + 0x18) = fVar66;
            fVar66 = *(float *)(lVar39 + 0x1c + uVar47 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x1c)) {
              fVar66 = *(float *)(lVar65 + 0x1c);
            }
            *(float *)(lVar65 + 0x1c) = fVar66;
            fVar66 = *(float *)(lVar39 + 0x20 + uVar47 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x20)) {
              fVar66 = *(float *)(lVar65 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar66);
            *(float *)(lVar65 + 0x20) = fVar66;
          }
          pfVar40 = (float *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x328))
                                       (pFVar64->SkelMesh,uVar53);
          bVar5 = *(byte *)&local_208->BuildSettings;
          fVar66 = (local_208->ScreenSize).Default;
          if (*pfVar40 <= fVar66) {
            fVar66 = *pfVar40;
          }
          (local_208->ScreenSize).Default = fVar66;
          bVar45 = bVar5 | *(byte *)(pfVar40 + 6);
          uVar6 = (local_208->BuildSettings).field_0x1;
          bVar45 = (bVar5 ^ bVar45) & 0x7f ^ bVar45;
          *(byte *)&local_208->BuildSettings = bVar45;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar40 + 0x19)) & 1 ^ uVar6 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar45 | *(byte *)(pfVar40 + 6)) & 0x20 ^ bVar45 & 0xdf;
          fVar66 = pfVar40[1];
          if (local_208->LODHysteresis <= pfVar40[1]) {
            fVar66 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar66;
          plVar37 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar54 = 0;
          if ((int)uVar53 < (int)plVar37[1]) {
            uVar54 = ~uVar53 >> 0x1f;
          }
          if ((uVar54 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar32 = local_240;
          uVar54 = 0;
          pFVar33 = *(FSkeletalMeshLODRenderData **)(*plVar37 + (longlong)(int)uVar53 * 8);
          if (0 < (pFVar33->RequiredBones).ArrayNum) {
            lVar39 = 0;
            do {
              lVar36 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x318))();
              uVar53 = 0;
              if ((int)uVar54 < (pFVar33->RequiredBones).ArrayNum) {
                uVar53 = ~uVar54 >> 0x1f;
              }
              if ((uVar53 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              uVar7 = *(ushort *)((pFVar33->RequiredBones).AllocatorInstance.Data + lVar39);
              if ((*(int *)(lVar36 + 0x28) <= (int)(uint)uVar7) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              FVar11 = *(FName *)(*(longlong *)(lVar36 + 0x20) + (ulonglong)uVar7 * 0xc);
              if (((FVar11 != (FName)0x0) &&
                  (piVar41 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_218->NewRefSkeleton).FinalNameToIndexMap,FVar11),
                  piVar41 != (int *)0x0)) && (*piVar41 != -1)) {
                local_228[0] = (ushort)*piVar41;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar32->RequiredBones,local_228);
              }
              uVar54 = uVar54 + 1;
              lVar39 = lVar39 + 2;
              pFVar56 = local_248;
            } while ((int)uVar54 < (pFVar33->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar56 + 0x48) = *(int *)(pFVar56 + 0x48) + pFVar64->Section->NumVertices;
          uVar53 = (pFVar33->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_1d4 = (pFVar33->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar54 = pFVar64->Section->NumVertices + pFVar64->Section->BaseVertexIndex;
          if ((int)uVar54 < (int)uVar53) {
            uVar53 = uVar54;
          }
          pFVar49 = (pFVar33->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar49 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar49 = &pFVar33->SkinWeightVertexBuffer;
          }
          uVar54 = (pFVar49->DataVertexBuffer).MaxBoneInfluences;
          uVar29 = uVar54;
          if (uVar54 < local_220) {
            uVar29 = local_220;
          }
          local_288 = (bool)(local_288 | (pFVar49->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_248 + 0x4c) = uVar54;
          uVar54 = (pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar54 <= local_280) {
            uVar54 = local_280;
          }
          local_224 = (uint)local_260;
          uVar63 = pFVar64->Section->BaseVertexIndex;
          local_280 = uVar54;
          local_220 = uVar29;
          if ((int)uVar63 < (int)uVar53) {
            while( true ) {
              uVar54 = local_1d4;
              uVar29 = (uint)local_260;
              if ((uint)local_260 == local_260._4_4_) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x424,&local_268,(int *)((longlong)&local_260 + 4));
              }
              local_260 = CONCAT44(local_260._4_4_,uVar29 + 1);
              uVar46 = 0;
              if ((int)uVar29 < (int)(uVar29 + 1)) {
                uVar46 = ~uVar29 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pTVar3 = (TGPUSkinVertexFloat32Uvs<2> *)
                       (local_268.Data + (longlong)(int)uVar29 * 0x24);
              uVar29 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar29 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar29 + 1;
              uVar46 = 0;
              if ((int)uVar29 < (int)(uVar29 + 1)) {
                uVar46 = ~uVar29 >> 0x1f;
              }
              if ((uVar46 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar58 = local_218;
              pFVar56 = local_200.AllocatorInstance.Data + (longlong)(int)uVar29 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<2>_>
                        (local_218,pTVar3,pFVar33,uVar63,pFVar64);
              pFVar49 = (pFVar33->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar49 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar49 = &pFVar33->SkinWeightVertexBuffer;
              }
              pFVar42 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar49,&local_e8,uVar63);
              uVar10 = *(undefined8 *)(pFVar42->InfluenceBones + 4);
              *(undefined8 *)pFVar56 = *(undefined8 *)pFVar42->InfluenceBones;
              *(undefined8 *)(pFVar56 + 8) = uVar10;
              in_XMM1 = *(undefined1 (*) [16])(pFVar42->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar56 + 0x10) = in_XMM1;
              uVar8 = *(undefined4 *)(pFVar42->InfluenceWeights + 6);
              uVar20 = *(undefined4 *)(pFVar42->InfluenceWeights + 8);
              uVar21 = *(undefined4 *)(pFVar42->InfluenceWeights + 10);
              *(undefined4 *)(pFVar56 + 0x20) = *(undefined4 *)(pFVar42->InfluenceWeights + 4);
              *(undefined4 *)(pFVar56 + 0x24) = uVar8;
              *(undefined4 *)(pFVar56 + 0x28) = uVar20;
              *(undefined4 *)(pFVar56 + 0x2c) = uVar21;
              cVar26 = (**(code **)(pFVar58->MergeMesh->_padding_ + 0x470))();
              if (cVar26 != '\0') {
                if ((int)uVar63 < (int)uVar54) {
                  pFVar59 = (FColor_u_0 *)
                            ((pFVar33->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar63 * (pFVar33->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_278.Data <= pFVar59) &&
                      (pFVar59 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4))) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar28 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar28 + 1);
                  FVar30 = *pFVar59;
                }
                else {
                  local_284.Bits = 0xffffffff;
                  if (((local_278.Data <= &local_284) &&
                      (&local_284 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4)))
                     && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  iVar28 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar28 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar28 + 1);
                  FVar30 = local_284;
                }
                *(FColor_u_0 *)(local_278.Data + (longlong)iVar28 * 4) = FVar30;
              }
              lVar39 = 0xc;
              do {
                if (*(ushort *)(pFVar56 + 0x18) != 0) {
                  uVar7 = *(ushort *)pFVar56;
                  if (((pFVar64->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar7) &&
                     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar25)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  *(ushort *)pFVar56 =
                       *(ushort *)
                        ((pFVar64->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar7 * 2);
                }
                pFVar56 = pFVar56 + 2;
                lVar39 = lVar39 + -1;
              } while (lVar39 != 0);
              uVar63 = uVar63 + 1;
              if ((int)uVar53 <= (int)uVar63) break;
            }
          }
          pFVar56 = local_248;
          *(uint *)(local_248 + 8) = *(int *)(local_248 + 8) + pFVar64->Section->NumTriangles;
          if (((pFVar33->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar25)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar28 = (**(code **)(((pFVar33->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar29 = local_224;
          uVar53 = pFVar64->Section->BaseIndex;
          uVar54 = pFVar64->Section->NumTriangles;
          iVar60 = uVar53 + uVar54 * 2 + uVar54;
          if (iVar60 < iVar28) {
            iVar28 = iVar60;
          }
          for (; (int)uVar53 < iVar28; uVar53 = uVar53 + 1) {
            if (((pFVar33->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pFVar12 = (pFVar33->MultiSizeIndexContainer).IndexBuffer;
            iVar60 = (**(code **)(pFVar12->_padding_ + 0x60))(pFVar12,uVar53);
            local_258[0] = (iVar60 - pFVar64->Section->BaseVertexIndex) + uVar29;
            if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 <
                 local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 4)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar25)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            iVar60 = local_238.ArrayNum;
            if (local_238.ArrayNum == local_238.ArrayMax) {
              iVar60 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_238.AllocatorInstance,&local_238.ArrayMax);
            }
            local_238.ArrayNum = iVar60 + 1;
            *(uint *)(local_238.AllocatorInstance.Data + (longlong)iVar60 * 4) = local_258[0];
            if (local_21c < local_258[0]) {
              local_21c = local_258[0];
            }
            pFVar56 = local_248;
          }
          pFVar13 = pFVar64->Section;
          if ((pFVar13->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar56 + 0xb8) + 8))(pFVar56 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar56 + 0xe0) + 8))
                      (pFVar56 + 0xe0,*(undefined4 *)(pFVar56 + 0x48));
            puVar43 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar56 + 0xb8) + 0x18))(pFVar56 + 0xb8);
            pvVar44 = (void *)(**(code **)(*(longlong *)(pFVar56 + 0xe0) + 0x18))(pFVar56 + 0xe0);
            memset(pvVar44,0,(ulonglong)*(uint *)(pFVar56 + 0x48) << 3);
            *puVar43 = 0;
          }
          else {
            if (pFVar56[0x108] == (FScriptContainerElement)0x0) {
              pFVar4 = (ForAnyElementType *)(pFVar56 + 200);
              puVar2 = &(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar4 != (ForAnyElementType *)puVar2) {
                pvVar44 = *(void **)puVar2;
                pFVar61 = pFVar56 + 0xd4;
                iVar28 = *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar44 & 1) != 0) {
                  pvVar44 = puVar2 + ((longlong)pvVar44 >> 0x18);
                }
                *(int *)(pFVar56 + 0xd0) = iVar28;
                if ((iVar28 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar28,*(int *)pFVar61,pFVar4,iVar28,(int *)pFVar61);
                  FVar50 = *pFVar4;
                  if (((ulonglong)FVar50 & 1) != 0) {
                    FVar50 = (ForAnyElementType)
                             ((longlong)&pFVar4->field_0x0 + ((longlong)FVar50 >> 0x18));
                  }
                  if (iVar28 != 0) {
                    memcpy((void *)FVar50,pvVar44,(longlong)iVar28 << 2);
                  }
                }
              }
              pFVar4 = (ForAnyElementType *)(pFVar56 + 0xf0);
              pFVar56[0xd8] =
                   (FScriptContainerElement)
                   (pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar13 = pFVar64->Section;
              puVar2 = &(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar4 != (ForAnyElementType *)puVar2) {
                pvVar44 = *(void **)puVar2;
                pFVar61 = pFVar56 + 0xfc;
                iVar28 = *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar44 & 1) != 0) {
                  pvVar44 = &(pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar44 >> 0x18);
                }
                *(int *)(pFVar56 + 0xf8) = iVar28;
                if ((iVar28 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar28,*(int *)pFVar61,pFVar4,iVar28,(int *)pFVar61);
                  FVar50 = *pFVar4;
                  if (((ulonglong)FVar50 & 1) != 0) {
                    FVar50 = (ForAnyElementType)
                             ((longlong)&pFVar4->field_0x0 + ((longlong)FVar50 >> 0x18));
                  }
                  if (iVar28 != 0) {
                    memcpy((void *)FVar50,pvVar44,(longlong)iVar28 << 3);
                  }
                }
              }
              pFVar56[0x100] =
                   (FScriptContainerElement)
                   (pFVar13->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar41 = (int *)(**(code **)(*(longlong *)(pFVar56 + 0xb8) + 0x18))();
              iVar28 = 0;
              if (0 < *(int *)(pFVar56 + 0xd0)) {
                do {
                  iVar28 = iVar28 + 1;
                  *piVar41 = *piVar41 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar41 = piVar41 + 1;
                } while (iVar28 < *(int *)(pFVar56 + 0xd0));
              }
            }
            else {
              iVar28 = *(int *)(pFVar56 + 0xd0);
              uVar53 = *(uint *)(pFVar56 + 0xf8);
              (**(code **)(*(longlong *)(pFVar56 + 0xb8) + 8))
                        (pFVar56 + 0xb8,
                         *(int *)&(pFVar13->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar28);
              (**(code **)(*(longlong *)(pFVar56 + 0xe0) + 8))
                        (pFVar56 + 0xe0,*(undefined4 *)(pFVar56 + 0x48));
              lVar39 = (**(code **)(*(longlong *)(pFVar56 + 0xb8) + 0x18))(pFVar56 + 0xb8);
              lVar36 = (**(code **)(*(longlong *)(pFVar56 + 0xe0) + 0x18))();
              if (iVar28 < *(int *)(pFVar56 + 0xd0)) {
                piVar41 = (int *)(lVar39 + (longlong)iVar28 * 4);
                iVar60 = iVar28;
                do {
                  iVar60 = iVar60 + 1;
                  *piVar41 = *piVar41 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar41 = piVar41 + 1;
                } while (iVar60 < *(int *)(pFVar56 + 0xd0));
              }
              if (uVar53 < *(uint *)(pFVar56 + 0x48)) {
                do {
                  uVar47 = (ulonglong)uVar53;
                  uVar53 = uVar53 + 1;
                  piVar41 = (int *)(lVar36 + 4 + uVar47 * 8);
                  *piVar41 = *piVar41 + iVar28;
                } while (uVar53 < *(uint *)(pFVar56 + 0x48));
                pFVar56[0x108] = (FScriptContainerElement)0x1;
                goto LAB_1485fe589;
              }
            }
            pFVar56[0x108] = (FScriptContainerElement)0x1;
          }
LAB_1485fe589:
          local_210 = local_210 + 1;
          local_1c8 = local_1c8 + 0x30;
          iVar28 = *(int *)((longlong)(local_160->UVChannelData).LocalUVDensities +
                           local_250 + -0x30);
          lVar39 = local_250;
          FVar62.Data = (FScriptContainerElement *)local_160;
        } while ((int)local_210 < iVar28);
      }
      local_250 = lVar39 + 0x48;
      local_20c = local_20c + 1;
      this = local_218;
      pFVar31 = local_1d0;
      pFVar33 = local_240;
      pFVar34 = local_208;
    } while ((int)local_20c < local_1e8.ArrayNum);
  }
  uVar53 = local_280;
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar28 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar60 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar31,0);
    if (iVar60 <= iVar28) {
      bVar25 = false;
      goto LAB_1485fe634;
    }
  }
  bVar25 = true;
LAB_1485fe634:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar33->RequiredBones).AllocatorInstance.Data,
             (pFVar33->RequiredBones).ArrayNum,local_285,(TLess<void> *)&local_285);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar33->ActiveBoneIndices);
  pFVar31 = &(pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar33->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar34->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar31;
  FPositionVertexBuffer::Init
            (&(pFVar33->StaticVertexBuffers).PositionVertexBuffer,(uint)local_260,bVar25);
  FStaticMeshVertexBuffer::Init(pFVar31,(uint)local_260,uVar53,bVar25);
  fVar24 = _UNK_15104007c;
  fVar23 = _UNK_151040078;
  fVar22 = _UNK_151040074;
  fVar66 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar53 = 0;
  if (0 < (int)(uint)local_260) {
    local_248 = (FScriptContainerElement *)0x0;
    local_250 = 0;
    do {
      pFVar56 = local_248;
      lVar39 = local_250;
      uVar29 = ~uVar53 >> 0x1f;
      uVar54 = 0;
      if ((int)uVar53 < (int)(uint)local_260) {
        uVar54 = uVar29;
      }
      if ((uVar54 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar47 = (ulonglong)(uVar53 * (pFVar33->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar14 = (pFVar33->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar8 = *(undefined4 *)(local_268.Data + lVar39 + 0x10);
      *(undefined8 *)(puVar14 + uVar47) = *(undefined8 *)(local_268.Data + lVar39 + 8);
      *(undefined4 *)(puVar14 + uVar47 + 8) = uVar8;
      uVar54 = 0;
      if ((int)uVar53 < (int)(uint)local_260) {
        uVar54 = uVar29;
      }
      if (uVar54 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      auVar67 = pmovsxbd(in_XMM1,*(undefined4 *)(local_268.Data + lVar39 + 4));
      uVar54 = 0;
      if ((int)uVar53 < (int)(uint)local_260) {
        uVar54 = uVar29;
      }
      fVar71 = (float)auVar67._8_4_ * fVar23;
      uVar10 = CONCAT44((float)auVar67._4_4_ * fVar22,(float)auVar67._0_4_ * fVar66);
      iVar28 = (uint)local_260;
      local_158 = uVar10;
      local_150 = fVar71;
      if (uVar54 == 0) {
        bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar27) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar28 = (uint)local_260;
      }
      auVar67 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar39));
      auVar68 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar39 + 4));
      fVar69 = (float)auVar67._0_4_ * fVar66;
      fVar70 = (float)auVar67._4_4_ * fVar22;
      local_1b0 = (float)auVar67._8_4_ * fVar23;
      uVar54 = 0;
      if ((int)uVar53 < iVar28) {
        uVar54 = uVar29;
      }
      local_1b8 = CONCAT44(fVar70,fVar69);
      dVar16 = (double)local_1b0;
      dVar19 = (double)fVar69;
      dVar18 = (double)fVar70;
      dVar72 = (double)((float)auVar68._8_4_ * fVar23);
      dVar17 = (double)((float)auVar68._0_4_ * fVar66);
      dVar74 = (double)((float)auVar68._4_4_ * fVar22);
      dVar73 = (double)((float)auVar68._12_4_ * fVar24);
      auVar67._0_8_ = (dVar16 * dVar74 - dVar72 * dVar18) * dVar73;
      auVar67._8_8_ = 0;
      fVar69 = (float)auVar67._0_8_;
      if ((uVar54 == 0) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar27)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar39));
      local_190 = (float)in_XMM1._8_4_ * fVar23;
      local_198 = CONCAT44((float)in_XMM1._4_4_ * fVar22,(float)in_XMM1._0_4_ * fVar66);
      local_1a8._s_0.X = fVar69;
      local_1a8._s_0.Y = (float)((dVar72 * dVar19 - dVar16 * dVar17) * dVar73);
      local_1a8._s_0.Z = (float)((dVar17 * dVar18 - dVar74 * dVar19) * dVar73);
      local_188._0_8_ = uVar10;
      local_188._s_0.Z = fVar71;
      local_178._0_8_ = local_198;
      local_178._s_0.Z = local_190;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar31,uVar53,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1a8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_280 != 0) {
        lVar36 = 0;
        lVar65 = 0;
        local_208 = (FSkeletalMeshLODInfo *)(ulonglong)local_280;
        do {
          uVar54 = 0;
          if ((int)uVar53 < (int)(uint)local_260) {
            uVar54 = uVar29;
          }
          if ((uVar54 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          FVar62.Data = local_268.Data;
          lVar39 = lVar39 + lVar65;
          puVar14 = (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar52 = (ulonglong)(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar53;
          pcVar15 = *(code **)((longlong)
                               *(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_240->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            this_00 = (FVector2DHalf *)(puVar14 + (lVar36 + lVar52) * 4);
            lVar52 = (*pcVar15)();
            if (((FVector2DHalf *)(puVar14 + lVar52) < this_00 + 1) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((this_00 < (FVector2DHalf *)
                           (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((pFVar34->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              FVector2DHalf::operator=(this_00,(TVector2<float> *)(FVar62.Data + lVar39 + 0x14));
            }
            else {
              fVar71 = *(float *)(FVar62.Data + lVar39 + 0x18);
              FFloat16::SetTruncate((FFloat16 *)this_00,*(float *)(FVar62.Data + lVar39 + 0x14));
              in_XMM1 = ZEXT416((uint)fVar71);
              FFloat16::SetTruncate(&this_00->Y,fVar71);
            }
          }
          else {
            puVar57 = puVar14 + lVar65 + lVar52 * 8;
            lVar52 = (*pcVar15)();
            if ((puVar14 + lVar52 < puVar57 + 8) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if ((puVar57 < (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x15e,L""), bVar27)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            *(undefined8 *)puVar57 = *(undefined8 *)(FVar62.Data + lVar39 + 0x14);
          }
          lVar36 = lVar36 + 1;
          lVar65 = lVar65 + 8;
          local_208 = (FSkeletalMeshLODInfo *)((longlong)local_208 - 1);
          lVar39 = local_250;
        } while (local_208 != (FSkeletalMeshLODInfo *)0x0);
        local_208 = (FSkeletalMeshLODInfo *)0x0;
        pFVar56 = local_248;
        pFVar33 = local_240;
        pFVar31 = local_1d0;
      }
      local_248 = pFVar56 + 1;
      local_250 = lVar39 + 0x24;
      uVar53 = uVar53 + 1;
      this = local_218;
    } while ((int)uVar53 < (int)(uint)local_260);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar33->SkinWeightVertexBuffer).DataVertexBuffer,local_220);
  (pFVar33->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_288;
  (pFVar33->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar25;
  (pFVar33->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar25;
  FSkinWeightVertexBuffer::operator=(&pFVar33->SkinWeightVertexBuffer,&local_200);
  cVar26 = (**(code **)(this->MergeMesh->_padding_ + 0x470))();
  if (cVar26 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar33->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_278.Data,
               (uint)local_270,4,true);
  }
  uVar51 = '\x04';
  if (local_21c < 0xffff) {
    uVar51 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar33->MultiSizeIndexContainer,uVar51,&local_238);
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_278.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_278.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat32Uvs<3>_> @ 1485fed60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat32Uvs<3>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  FVector2DHalf *this_00;
  ForAnyElementType *pFVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar8;
  undefined8 uVar9;
  FName FVar10;
  FRawStaticIndexBuffer16or32Interface *pFVar11;
  FSkelMeshRenderSection *pFVar12;
  uchar *puVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  FColor_u_0 FVar29;
  FStaticMeshVertexBuffer *pFVar30;
  FSkeletalMeshLODRenderData *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODInfo *pFVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  longlong *plVar36;
  ForAnyElementType *pFVar37;
  longlong lVar38;
  float *pfVar39;
  int *piVar40;
  FSkinWeightInfo *pFVar41;
  undefined4 *puVar42;
  void *pvVar43;
  FReferenceSkeleton *this_01;
  byte bVar44;
  uint uVar45;
  ulonglong uVar46;
  FScriptContainerElement *pFVar47;
  FSkinWeightVertexBuffer *pFVar48;
  ForAnyElementType FVar49;
  uchar uVar50;
  longlong lVar51;
  uint uVar52;
  uint uVar53;
  FSkeletalMaterial *pFVar54;
  FScriptContainerElement *pFVar55;
  uchar *puVar56;
  FSkeletalMeshMerge *pFVar57;
  TGPUSkinVertexFloat32Uvs<3> *pTVar58;
  FColor_u_0 *pFVar59;
  int iVar60;
  FScriptContainerElement *pFVar61;
  ForAnyElementType FVar62;
  uint uVar63;
  FMergeSectionInfo *pFVar64;
  longlong lVar65;
  float fVar66;
  undefined1 in_XMM1 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auStackY_2d8 [32];
  bool local_288;
  FIdentityFunctor local_285;
  FColor_u_0 local_284;
  uint local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  uint local_258 [2];
  longlong local_250;
  FScriptContainerElement *local_248;
  FSkeletalMeshLODRenderData *local_240;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_238;
  ushort local_228 [2];
  uint local_224;
  uint local_220;
  uint local_21c;
  FSkeletalMeshMerge *local_218;
  uint local_210;
  uint local_20c;
  FSkeletalMeshLODInfo *local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  FSkeletalMeshLODRenderData *local_1f0;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e8;
  uint local_1d8;
  uint local_1d4;
  FStaticMeshVertexBuffer *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  TVector<float>_u_0 local_1a8;
  undefined8 local_198;
  float local_190;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  longlong local_168;
  FNewSectionInfo *local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_218 = this;
  local_1d8 = param_1;
  pFVar30 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar30;
  if ((pFVar30 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar31 = ::operator_new(0x768);
  pFVar32 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar31 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar32 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar31,true);
  }
  pFVar55 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data;
  local_240 = pFVar32;
  local_1f0 = pFVar32;
  if (((pFVar55 <= (FScriptContainerElement *)&local_1f0) &&
      ((FScriptContainerElement *)&local_1f0 <
       pFVar55 + (longlong)(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar27 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum;
  piVar40 = &(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax;
  if (iVar27 == *piVar40) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar30,piVar40);
  }
  (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum = iVar27 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar27 * 8) = local_1f0;
  pFVar33 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar33->LODHysteresis = 3.4028235e+38;
  (pFVar33->ScreenSize).Default = 3.4028235e+38;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  local_208 = pFVar33;
  GenerateNewSectionArray(this,&local_1e8,param_1);
  local_21c = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  local_280 = 0;
  local_220 = 0;
  local_288 = false;
  local_20c = 0;
  if (0 < local_1e8.ArrayNum) {
    local_250 = 0;
    do {
      lVar38 = local_250;
      uVar52 = 0;
      if ((int)local_20c < local_1e8.ArrayNum) {
        uVar52 = ~local_20c >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      FVar62.Data = local_1e8.AllocatorInstance.Data;
      uVar52 = 0;
      local_160 = (FNewSectionInfo *)local_1e8.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e8.AllocatorInstance.Data + lVar38 + 0x18)) {
        do {
          uVar53 = 0;
          if ((int)uVar52 < *(int *)(FVar62.Data + lVar38 + 0x18)) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar32->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar62.Data + lVar38 + 0x10) + (longlong)(int)uVar52 * 2));
          uVar52 = uVar52 + 1;
        } while ((int)uVar52 < *(int *)(FVar62.Data + lVar38 + 0x18));
      }
      piVar40 = &(pFVar32->RenderSections).ArrayMax;
      uVar52 = (pFVar32->RenderSections).ArrayNum;
      if (uVar52 == *piVar40) {
        uVar52 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar32->RenderSections).AllocatorInstance,piVar40);
      }
      (pFVar32->RenderSections).ArrayNum = uVar52 + 1;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uVar52 + 1)) {
        uVar53 = ~uVar52 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar55 = (FScriptContainerElement *)0x0;
      pFVar61 = (pFVar32->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar52 * 0x118;
      if (pFVar61 == (FScriptContainerElement *)0x0) {
        local_248 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar61 = 0;
        *(ushort *)(pFVar61 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar61 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar61 + 4) = 0;
        *(undefined8 *)(pFVar61 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar61 + 0x18) = 0;
        *(undefined8 *)(pFVar61 + 0x20) = 0;
        *(undefined8 *)(pFVar61 + 0x28) = 0;
        *(undefined8 *)(pFVar61 + 0x30) = 0;
        *(undefined8 *)(pFVar61 + 0x38) = 0;
        *(undefined8 *)(pFVar61 + 0x40) = 0;
        *(undefined4 *)(pFVar61 + 0x48) = 0;
        *(undefined4 *)(pFVar61 + 0x4c) = 4;
        *(undefined8 *)(pFVar61 + 0x54) = 0;
        *(undefined8 *)(pFVar61 + 0x5c) = 0;
        local_248 = pFVar61;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar61 + 0x68));
        *(undefined ***)(pFVar61 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar61 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar61 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar61 + 0x88) = 0;
        *(undefined8 *)(pFVar61 + 0x90) = 0;
        *(undefined4 *)(pFVar61 + 0x98) = 0;
        *(undefined8 *)(pFVar61 + 0xa0) = 0;
        *(undefined8 *)(pFVar61 + 0xa8) = 0;
        *(undefined4 *)(pFVar61 + 0xb0) = 0;
        *(undefined8 *)(pFVar61 + 200) = 0;
        *(undefined8 *)(pFVar61 + 0xd0) = 0;
        pFVar61[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar61 + 0xf0) = 0;
        *(undefined8 *)(pFVar61 + 0xf8) = 0;
        pFVar61[0x100] = (FScriptContainerElement)0x0;
        pFVar61[0x108] = (FScriptContainerElement)0x0;
        pFVar61[0x110] = (FScriptContainerElement)0x0;
        pFVar55 = pFVar61;
      }
      pFVar34 = FVar62.Data + lVar38 + 0x10;
      pFVar61 = pFVar55 + 0x38;
      if (pFVar61 != pFVar34) {
        iVar27 = *(int *)(pFVar34 + 8);
        pFVar47 = pFVar55 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar34;
        *(int *)(pFVar55 + 0x40) = iVar27;
        if ((iVar27 == 0) && (*(int *)pFVar47 == 0)) {
          *(int *)pFVar47 = 0;
          lVar38 = local_250;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar27,*(int *)pFVar47,(ForAnyElementType *)pFVar61,iVar27,(int *)pFVar47);
          lVar38 = local_250;
          if (iVar27 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar61,_Src.Data,(longlong)iVar27 * 2);
            lVar38 = local_250;
          }
        }
      }
      pFVar57 = local_218;
      *(undefined4 *)(pFVar55 + 0x48) = 0;
      *(uint *)(pFVar55 + 0x10) = (uint)local_260;
      lVar35 = (**(code **)(local_218->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar35 + 8) != (pFVar57->MaterialIds).ArrayNum) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar61 = FVar62.Data + lVar38 + 0x28;
      if (*(int *)pFVar61 == -1) {
        plVar36 = (longlong *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar62.Data + lVar38 + 0x20))->DebugPtr;
        local_1c0 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar8 = (FSkeletalMaterial *)*plVar36;
        lVar38 = plVar36[1];
        local_110 = local_1c0;
        for (pFVar54 = pFVar8; pFVar54 != pFVar8 + (int)lVar38; pFVar54 = pFVar54 + 1) {
          bVar24 = ::operator==(pFVar54,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar24) {
            lVar38 = ((longlong)pFVar54 - (longlong)pFVar8) / 6 +
                     ((longlong)pFVar54 - (longlong)pFVar8 >> 0x3f);
            uVar46 = (lVar38 >> 3) - (lVar38 >> 0x3f);
            lVar38 = local_250;
            pFVar57 = local_218;
            goto LAB_1485ff3b6;
          }
        }
        uVar46 = 0xffffffff;
        lVar38 = local_250;
        pFVar57 = local_218;
      }
      else {
        pFVar34 = (pFVar57->MaterialIds).AllocatorInstance.Data;
        for (pFVar47 = pFVar34; pFVar47 != pFVar34 + (longlong)(pFVar57->MaterialIds).ArrayNum * 4;
            pFVar47 = pFVar47 + 4) {
          if (*(int *)pFVar47 == *(int *)pFVar61) {
            uVar46 = (longlong)pFVar47 - (longlong)pFVar34 >> 2;
            goto LAB_1485ff3b6;
          }
        }
        uVar46 = 0xffffffff;
      }
LAB_1485ff3b6:
      if ((int)uVar46 == -1) {
        local_148 = *(UObject **)(FVar62.Data + lVar38 + 0x20);
        uVar9 = *(undefined8 *)(FVar62.Data + lVar38 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar34 = FVar62.Data + lVar38 + 0x34;
        local_138 = *(undefined4 *)pFVar34;
        uStack_134 = *(undefined4 *)(pFVar34 + 4);
        uStack_130 = *(undefined4 *)(pFVar34 + 8);
        uStack_12c = *(undefined4 *)(pFVar34 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar62.Data + lVar38 + 0x44);
        local_140 = uVar9;
        pFVar37 = (ForAnyElementType *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar37->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar37->Data + (longlong)*(int *)((longlong)&pFVar37[1].Data + 4) * 0x30)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = *(int *)&pFVar37[1].Data;
        piVar40 = (int *)((longlong)&pFVar37[1].Data + 4);
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar37,piVar40);
        }
        lVar35 = (longlong)iVar27;
        *(int *)&pFVar37[1].Data = iVar27 + 1;
        pFVar34 = pFVar37->Data;
        *(UObject **)(pFVar34 + lVar35 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar34 + lVar35 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar34 + lVar35 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar34 + lVar35 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar57 = local_218;
        pTVar1 = &local_218->MaterialIds;
        pFVar34 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar34 <= pFVar61) &&
            (pFVar61 < pFVar34 + (longlong)(local_218->MaterialIds).ArrayMax * 4)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (pFVar57->MaterialIds).ArrayNum;
        piVar40 = &(pFVar57->MaterialIds).ArrayMax;
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar40);
        }
        (pFVar57->MaterialIds).ArrayNum = iVar27 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar27 * 4) = *(int *)pFVar61;
        lVar35 = (**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        uVar46 = (ulonglong)(ushort)(*(short *)(lVar35 + 8) - 1);
      }
      *(ushort *)pFVar55 = (ushort)uVar46;
      *(undefined4 *)(pFVar55 + 8) = 0;
      *(int *)(pFVar55 + 4) = local_238.ArrayNum;
      plVar36 = (longlong *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
      uVar6 = *(ushort *)pFVar55;
      if (((int)plVar36[1] <= (int)(uint)uVar6) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar27 = *(int *)(FVar62.Data + lVar38 + 8);
      local_168 = (ulonglong)uVar6 * 0x30 + *plVar36;
      local_210 = 0;
      if (0 < iVar27) {
        local_1c8 = 0;
        do {
          lVar65 = local_168;
          lVar35 = local_1c8;
          uVar52 = 0;
          if ((int)local_210 < iVar27) {
            uVar52 = ~local_210 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar64 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar62.Data)->UVChannelData).LocalUVDensities
                      + lVar38 + -0x38) + lVar35);
          lVar38 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar52 = *(int *)(lVar38 + 8) - 1;
          if ((int)local_1d8 < (int)uVar52) {
            uVar52 = local_1d8;
          }
          uVar6 = pFVar64->Section->MaterialIndex;
          uVar46 = (ulonglong)uVar6;
          lVar38 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar6 < *(int *)(lVar38 + 8)) {
            plVar36 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar36[1] <= (int)(uint)uVar6) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            lVar38 = *plVar36;
            fVar66 = *(float *)(lVar38 + 0x14 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x14)) {
              fVar66 = *(float *)(lVar65 + 0x14);
            }
            *(float *)(lVar65 + 0x14) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x18 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x18)) {
              fVar66 = *(float *)(lVar65 + 0x18);
            }
            *(float *)(lVar65 + 0x18) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x1c + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x1c)) {
              fVar66 = *(float *)(lVar65 + 0x1c);
            }
            *(float *)(lVar65 + 0x1c) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x20 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x20)) {
              fVar66 = *(float *)(lVar65 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar66);
            *(float *)(lVar65 + 0x20) = fVar66;
          }
          pfVar39 = (float *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x328))
                                       (pFVar64->SkelMesh,uVar52);
          bVar4 = *(byte *)&local_208->BuildSettings;
          fVar66 = (local_208->ScreenSize).Default;
          if (*pfVar39 <= fVar66) {
            fVar66 = *pfVar39;
          }
          (local_208->ScreenSize).Default = fVar66;
          bVar44 = bVar4 | *(byte *)(pfVar39 + 6);
          uVar5 = (local_208->BuildSettings).field_0x1;
          bVar44 = (bVar4 ^ bVar44) & 0x7f ^ bVar44;
          *(byte *)&local_208->BuildSettings = bVar44;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar39 + 0x19)) & 1 ^ uVar5 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar44 | *(byte *)(pfVar39 + 6)) & 0x20 ^ bVar44 & 0xdf;
          fVar66 = pfVar39[1];
          if (local_208->LODHysteresis <= pfVar39[1]) {
            fVar66 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar66;
          plVar36 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar53 = 0;
          if ((int)uVar52 < (int)plVar36[1]) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar31 = local_240;
          uVar53 = 0;
          pFVar32 = *(FSkeletalMeshLODRenderData **)(*plVar36 + (longlong)(int)uVar52 * 8);
          if (0 < (pFVar32->RequiredBones).ArrayNum) {
            lVar38 = 0;
            do {
              lVar35 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x318))();
              uVar52 = 0;
              if ((int)uVar53 < (pFVar32->RequiredBones).ArrayNum) {
                uVar52 = ~uVar53 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              uVar6 = *(ushort *)((pFVar32->RequiredBones).AllocatorInstance.Data + lVar38);
              if ((*(int *)(lVar35 + 0x28) <= (int)(uint)uVar6) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar10 = *(FName *)(*(longlong *)(lVar35 + 0x20) + (ulonglong)uVar6 * 0xc);
              if (((FVar10 != (FName)0x0) &&
                  (piVar40 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_218->NewRefSkeleton).FinalNameToIndexMap,FVar10),
                  piVar40 != (int *)0x0)) && (*piVar40 != -1)) {
                local_228[0] = (ushort)*piVar40;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar31->RequiredBones,local_228);
              }
              uVar53 = uVar53 + 1;
              lVar38 = lVar38 + 2;
              pFVar55 = local_248;
            } while ((int)uVar53 < (pFVar32->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar55 + 0x48) = *(int *)(pFVar55 + 0x48) + pFVar64->Section->NumVertices;
          uVar52 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_1d4 = (pFVar32->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar53 = pFVar64->Section->NumVertices + pFVar64->Section->BaseVertexIndex;
          if ((int)uVar53 < (int)uVar52) {
            uVar52 = uVar53;
          }
          pFVar48 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar48 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar48 = &pFVar32->SkinWeightVertexBuffer;
          }
          uVar53 = (pFVar48->DataVertexBuffer).MaxBoneInfluences;
          uVar28 = uVar53;
          if (uVar53 < local_220) {
            uVar28 = local_220;
          }
          local_288 = (bool)(local_288 | (pFVar48->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_248 + 0x4c) = uVar53;
          uVar53 = (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar53 <= local_280) {
            uVar53 = local_280;
          }
          local_224 = (uint)local_260;
          uVar63 = pFVar64->Section->BaseVertexIndex;
          local_280 = uVar53;
          local_220 = uVar28;
          if ((int)uVar63 < (int)uVar52) {
            while( true ) {
              uVar53 = local_1d4;
              uVar28 = (uint)local_260;
              if ((uint)local_260 == local_260._4_4_) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x42c,&local_268,(int *)((longlong)&local_260 + 4));
              }
              local_260 = CONCAT44(local_260._4_4_,uVar28 + 1);
              uVar45 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar45 = ~uVar28 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar58 = (TGPUSkinVertexFloat32Uvs<3> *)
                        (local_268.Data + (longlong)(int)uVar28 * 0x2c);
              uVar28 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar28 + 1;
              uVar45 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar45 = ~uVar28 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar57 = local_218;
              pFVar55 = local_200.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<3>_>
                        (local_218,pTVar58,pFVar32,uVar63,pFVar64);
              pFVar48 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar48 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar48 = &pFVar32->SkinWeightVertexBuffer;
              }
              pFVar41 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar48,&local_e8,uVar63);
              uVar9 = *(undefined8 *)(pFVar41->InfluenceBones + 4);
              *(undefined8 *)pFVar55 = *(undefined8 *)pFVar41->InfluenceBones;
              *(undefined8 *)(pFVar55 + 8) = uVar9;
              in_XMM1 = *(undefined1 (*) [16])(pFVar41->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar55 + 0x10) = in_XMM1;
              uVar7 = *(undefined4 *)(pFVar41->InfluenceWeights + 6);
              uVar19 = *(undefined4 *)(pFVar41->InfluenceWeights + 8);
              uVar20 = *(undefined4 *)(pFVar41->InfluenceWeights + 10);
              *(undefined4 *)(pFVar55 + 0x20) = *(undefined4 *)(pFVar41->InfluenceWeights + 4);
              *(undefined4 *)(pFVar55 + 0x24) = uVar7;
              *(undefined4 *)(pFVar55 + 0x28) = uVar19;
              *(undefined4 *)(pFVar55 + 0x2c) = uVar20;
              cVar25 = (**(code **)(pFVar57->MergeMesh->_padding_ + 0x470))();
              if (cVar25 != '\0') {
                if ((int)uVar63 < (int)uVar53) {
                  pFVar59 = (FColor_u_0 *)
                            ((pFVar32->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar63 * (pFVar32->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_278.Data <= pFVar59) &&
                      (pFVar59 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4))) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar27 + 1);
                  FVar29 = *pFVar59;
                }
                else {
                  local_284.Bits = 0xffffffff;
                  if (((local_278.Data <= &local_284) &&
                      (&local_284 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4)))
                     && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar27 + 1);
                  FVar29 = local_284;
                }
                *(FColor_u_0 *)(local_278.Data + (longlong)iVar27 * 4) = FVar29;
              }
              lVar38 = 0xc;
              do {
                if (*(ushort *)(pFVar55 + 0x18) != 0) {
                  uVar6 = *(ushort *)pFVar55;
                  if (((pFVar64->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar6) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ushort *)pFVar55 =
                       *(ushort *)
                        ((pFVar64->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar6 * 2);
                }
                pFVar55 = pFVar55 + 2;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              uVar63 = uVar63 + 1;
              if ((int)uVar52 <= (int)uVar63) break;
            }
          }
          pFVar55 = local_248;
          *(uint *)(local_248 + 8) = *(int *)(local_248 + 8) + pFVar64->Section->NumTriangles;
          if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar27 = (**(code **)(((pFVar32->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar28 = local_224;
          uVar52 = pFVar64->Section->BaseIndex;
          uVar53 = pFVar64->Section->NumTriangles;
          iVar60 = uVar52 + uVar53 * 2 + uVar53;
          if (iVar60 < iVar27) {
            iVar27 = iVar60;
          }
          for (; (int)uVar52 < iVar27; uVar52 = uVar52 + 1) {
            if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pFVar32->MultiSizeIndexContainer).IndexBuffer;
            iVar60 = (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,uVar52);
            local_258[0] = (iVar60 - pFVar64->Section->BaseVertexIndex) + uVar28;
            if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 <
                 local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 4)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar60 = local_238.ArrayNum;
            if (local_238.ArrayNum == local_238.ArrayMax) {
              iVar60 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_238.AllocatorInstance,&local_238.ArrayMax);
            }
            local_238.ArrayNum = iVar60 + 1;
            *(uint *)(local_238.AllocatorInstance.Data + (longlong)iVar60 * 4) = local_258[0];
            if (local_21c < local_258[0]) {
              local_21c = local_258[0];
            }
            pFVar55 = local_248;
          }
          pFVar12 = pFVar64->Section;
          if ((pFVar12->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 8))(pFVar55 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 8))
                      (pFVar55 + 0xe0,*(undefined4 *)(pFVar55 + 0x48));
            puVar42 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))(pFVar55 + 0xb8);
            pvVar43 = (void *)(**(code **)(*(longlong *)(pFVar55 + 0xe0) + 0x18))(pFVar55 + 0xe0);
            memset(pvVar43,0,(ulonglong)*(uint *)(pFVar55 + 0x48) << 3);
            *puVar42 = 0;
          }
          else {
            if (pFVar55[0x108] == (FScriptContainerElement)0x0) {
              pFVar3 = (ForAnyElementType *)(pFVar55 + 200);
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar43 = *(void **)puVar2;
                pFVar61 = pFVar55 + 0xd4;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar43 & 1) != 0) {
                  pvVar43 = puVar2 + ((longlong)pvVar43 >> 0x18);
                }
                *(int *)(pFVar55 + 0xd0) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar27,*(int *)pFVar61,pFVar3,iVar27,(int *)pFVar61);
                  FVar49 = *pFVar3;
                  if (((ulonglong)FVar49 & 1) != 0) {
                    FVar49 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar49 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar49,pvVar43,(longlong)iVar27 << 2);
                  }
                }
              }
              pFVar3 = (ForAnyElementType *)(pFVar55 + 0xf0);
              pFVar55[0xd8] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar12 = pFVar64->Section;
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar43 = *(void **)puVar2;
                pFVar61 = pFVar55 + 0xfc;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar43 & 1) != 0) {
                  pvVar43 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar43 >> 0x18);
                }
                *(int *)(pFVar55 + 0xf8) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar27,*(int *)pFVar61,pFVar3,iVar27,(int *)pFVar61);
                  FVar49 = *pFVar3;
                  if (((ulonglong)FVar49 & 1) != 0) {
                    FVar49 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar49 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar49,pvVar43,(longlong)iVar27 << 3);
                  }
                }
              }
              pFVar55[0x100] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar40 = (int *)(**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))();
              iVar27 = 0;
              if (0 < *(int *)(pFVar55 + 0xd0)) {
                do {
                  iVar27 = iVar27 + 1;
                  *piVar40 = *piVar40 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar27 < *(int *)(pFVar55 + 0xd0));
              }
            }
            else {
              iVar27 = *(int *)(pFVar55 + 0xd0);
              uVar52 = *(uint *)(pFVar55 + 0xf8);
              (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 8))
                        (pFVar55 + 0xb8,
                         *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar27);
              (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 8))
                        (pFVar55 + 0xe0,*(undefined4 *)(pFVar55 + 0x48));
              lVar38 = (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))(pFVar55 + 0xb8);
              lVar35 = (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 0x18))();
              if (iVar27 < *(int *)(pFVar55 + 0xd0)) {
                piVar40 = (int *)(lVar38 + (longlong)iVar27 * 4);
                iVar60 = iVar27;
                do {
                  iVar60 = iVar60 + 1;
                  *piVar40 = *piVar40 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar60 < *(int *)(pFVar55 + 0xd0));
              }
              if (uVar52 < *(uint *)(pFVar55 + 0x48)) {
                do {
                  uVar46 = (ulonglong)uVar52;
                  uVar52 = uVar52 + 1;
                  piVar40 = (int *)(lVar35 + 4 + uVar46 * 8);
                  *piVar40 = *piVar40 + iVar27;
                } while (uVar52 < *(uint *)(pFVar55 + 0x48));
                pFVar55[0x108] = (FScriptContainerElement)0x1;
                goto LAB_148600189;
              }
            }
            pFVar55[0x108] = (FScriptContainerElement)0x1;
          }
LAB_148600189:
          local_210 = local_210 + 1;
          local_1c8 = local_1c8 + 0x30;
          iVar27 = *(int *)((longlong)(local_160->UVChannelData).LocalUVDensities +
                           local_250 + -0x30);
          lVar38 = local_250;
          FVar62.Data = (FScriptContainerElement *)local_160;
        } while ((int)local_210 < iVar27);
      }
      local_250 = lVar38 + 0x48;
      local_20c = local_20c + 1;
      this = local_218;
      pFVar30 = local_1d0;
      pFVar32 = local_240;
      pFVar33 = local_208;
    } while ((int)local_20c < local_1e8.ArrayNum);
  }
  uVar52 = local_280;
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar27 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar60 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar30,0);
    if (iVar60 <= iVar27) {
      bVar24 = false;
      goto LAB_148600234;
    }
  }
  bVar24 = true;
LAB_148600234:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar32->RequiredBones).AllocatorInstance.Data,
             (pFVar32->RequiredBones).ArrayNum,local_285,(TLess<void> *)&local_285);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar32->ActiveBoneIndices);
  pFVar30 = &(pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar33->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar30;
  FPositionVertexBuffer::Init
            (&(pFVar32->StaticVertexBuffers).PositionVertexBuffer,(uint)local_260,bVar24);
  FStaticMeshVertexBuffer::Init(pFVar30,(uint)local_260,uVar52,bVar24);
  fVar23 = _UNK_15104007c;
  fVar22 = _UNK_151040078;
  fVar21 = _UNK_151040074;
  fVar66 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar52 = 0;
  if (0 < (int)(uint)local_260) {
    local_248 = (FScriptContainerElement *)0x0;
    local_250 = 0;
    do {
      pFVar55 = local_248;
      lVar38 = local_250;
      uVar28 = ~uVar52 >> 0x1f;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      if ((uVar53 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar46 = (ulonglong)(uVar52 * (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar13 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar7 = *(undefined4 *)(local_268.Data + lVar38 + 0x10);
      *(undefined8 *)(puVar13 + uVar46) = *(undefined8 *)(local_268.Data + lVar38 + 8);
      *(undefined4 *)(puVar13 + uVar46 + 8) = uVar7;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      if (uVar53 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      auVar67 = pmovsxbd(in_XMM1,*(undefined4 *)(local_268.Data + lVar38 + 4));
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      fVar71 = (float)auVar67._8_4_ * fVar22;
      uVar9 = CONCAT44((float)auVar67._4_4_ * fVar21,(float)auVar67._0_4_ * fVar66);
      iVar27 = (uint)local_260;
      local_158 = uVar9;
      local_150 = fVar71;
      if (uVar53 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (uint)local_260;
      }
      auVar67 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38));
      auVar68 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38 + 4));
      fVar69 = (float)auVar67._0_4_ * fVar66;
      fVar70 = (float)auVar67._4_4_ * fVar21;
      local_1b0 = (float)auVar67._8_4_ * fVar22;
      uVar53 = 0;
      if ((int)uVar52 < iVar27) {
        uVar53 = uVar28;
      }
      local_1b8 = CONCAT44(fVar70,fVar69);
      dVar15 = (double)local_1b0;
      dVar18 = (double)fVar69;
      dVar17 = (double)fVar70;
      dVar72 = (double)((float)auVar68._8_4_ * fVar22);
      dVar16 = (double)((float)auVar68._0_4_ * fVar66);
      dVar74 = (double)((float)auVar68._4_4_ * fVar21);
      dVar73 = (double)((float)auVar68._12_4_ * fVar23);
      auVar67._0_8_ = (dVar15 * dVar74 - dVar72 * dVar17) * dVar73;
      auVar67._8_8_ = 0;
      fVar69 = (float)auVar67._0_8_;
      if ((uVar53 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38));
      local_190 = (float)in_XMM1._8_4_ * fVar22;
      local_198 = CONCAT44((float)in_XMM1._4_4_ * fVar21,(float)in_XMM1._0_4_ * fVar66);
      local_1a8._s_0.X = fVar69;
      local_1a8._s_0.Y = (float)((dVar72 * dVar18 - dVar15 * dVar16) * dVar73);
      local_1a8._s_0.Z = (float)((dVar16 * dVar17 - dVar74 * dVar18) * dVar73);
      local_188._0_8_ = uVar9;
      local_188._s_0.Z = fVar71;
      local_178._0_8_ = local_198;
      local_178._s_0.Z = local_190;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar30,uVar52,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1a8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_280 != 0) {
        lVar35 = 0;
        lVar65 = 0;
        local_208 = (FSkeletalMeshLODInfo *)(ulonglong)local_280;
        do {
          uVar53 = 0;
          if ((int)uVar52 < (int)(uint)local_260) {
            uVar53 = uVar28;
          }
          if ((uVar53 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          FVar62.Data = local_268.Data;
          lVar38 = lVar38 + lVar65;
          puVar13 = (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar51 = (ulonglong)(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar52;
          pcVar14 = *(code **)((longlong)
                               *(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_240->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            this_00 = (FVector2DHalf *)(puVar13 + (lVar35 + lVar51) * 4);
            lVar51 = (*pcVar14)();
            if (((FVector2DHalf *)(puVar13 + lVar51) < this_00 + 1) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((this_00 < (FVector2DHalf *)
                           (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((pFVar33->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              FVector2DHalf::operator=(this_00,(TVector2<float> *)(FVar62.Data + lVar38 + 0x14));
            }
            else {
              fVar71 = *(float *)(FVar62.Data + lVar38 + 0x18);
              FFloat16::SetTruncate((FFloat16 *)this_00,*(float *)(FVar62.Data + lVar38 + 0x14));
              in_XMM1 = ZEXT416((uint)fVar71);
              FFloat16::SetTruncate(&this_00->Y,fVar71);
            }
          }
          else {
            puVar56 = puVar13 + lVar65 + lVar51 * 8;
            lVar51 = (*pcVar14)();
            if ((puVar13 + lVar51 < puVar56 + 8) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((puVar56 < (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x15e,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            *(undefined8 *)puVar56 = *(undefined8 *)(FVar62.Data + lVar38 + 0x14);
          }
          lVar35 = lVar35 + 1;
          lVar65 = lVar65 + 8;
          local_208 = (FSkeletalMeshLODInfo *)((longlong)local_208 - 1);
          lVar38 = local_250;
        } while (local_208 != (FSkeletalMeshLODInfo *)0x0);
        local_208 = (FSkeletalMeshLODInfo *)0x0;
        pFVar55 = local_248;
        pFVar32 = local_240;
        pFVar30 = local_1d0;
      }
      local_248 = pFVar55 + 1;
      local_250 = lVar38 + 0x2c;
      uVar52 = uVar52 + 1;
      this = local_218;
    } while ((int)uVar52 < (int)(uint)local_260);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar32->SkinWeightVertexBuffer).DataVertexBuffer,local_220);
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_288;
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar24;
  (pFVar32->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar24;
  FSkinWeightVertexBuffer::operator=(&pFVar32->SkinWeightVertexBuffer,&local_200);
  cVar25 = (**(code **)(this->MergeMesh->_padding_ + 0x470))();
  if (cVar25 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar32->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_278.Data,
               (uint)local_270,4,true);
  }
  uVar50 = '\x04';
  if (local_21c < 0xffff) {
    uVar50 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar32->MultiSizeIndexContainer,uVar50,&local_238);
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_278.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_278.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// GenerateLODModel<TGPUSkinVertexFloat32Uvs<4>_> @ 148600960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshMerge::GenerateLODModel<TGPUSkinVertexFloat32Uvs<4>_>
          (FSkeletalMeshMerge *this,int param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  FVector2DHalf *this_00;
  ForAnyElementType *pFVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ForAnyElementType _Src;
  FSkeletalMaterial *pFVar8;
  undefined8 uVar9;
  FName FVar10;
  FRawStaticIndexBuffer16or32Interface *pFVar11;
  FSkelMeshRenderSection *pFVar12;
  uchar *puVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  char cVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  FColor_u_0 FVar29;
  FStaticMeshVertexBuffer *pFVar30;
  FSkeletalMeshLODRenderData *pFVar31;
  FSkeletalMeshLODRenderData *pFVar32;
  FSkeletalMeshLODInfo *pFVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  longlong *plVar36;
  ForAnyElementType *pFVar37;
  longlong lVar38;
  float *pfVar39;
  int *piVar40;
  FSkinWeightInfo *pFVar41;
  undefined4 *puVar42;
  void *pvVar43;
  FReferenceSkeleton *this_01;
  byte bVar44;
  uint uVar45;
  ulonglong uVar46;
  FScriptContainerElement *pFVar47;
  FSkinWeightVertexBuffer *pFVar48;
  ForAnyElementType FVar49;
  uchar uVar50;
  longlong lVar51;
  uint uVar52;
  uint uVar53;
  FSkeletalMaterial *pFVar54;
  FScriptContainerElement *pFVar55;
  uchar *puVar56;
  FSkeletalMeshMerge *pFVar57;
  TGPUSkinVertexFloat32Uvs<4> *pTVar58;
  FColor_u_0 *pFVar59;
  int iVar60;
  FScriptContainerElement *pFVar61;
  ForAnyElementType FVar62;
  uint uVar63;
  FMergeSectionInfo *pFVar64;
  longlong lVar65;
  float fVar66;
  undefined1 in_XMM1 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auStackY_2d8 [32];
  bool local_288;
  FIdentityFunctor local_285;
  FColor_u_0 local_284;
  uint local_280;
  ForAnyElementType local_278;
  undefined8 local_270;
  ForAnyElementType local_268;
  undefined8 local_260;
  uint local_258 [2];
  longlong local_250;
  FScriptContainerElement *local_248;
  FSkeletalMeshLODRenderData *local_240;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_238;
  ushort local_228 [2];
  uint local_224;
  uint local_220;
  uint local_21c;
  FSkeletalMeshMerge *local_218;
  uint local_210;
  uint local_20c;
  FSkeletalMeshLODInfo *local_208;
  TArray<FSkinWeightInfo,TSizedDefaultAllocator<32>_> local_200;
  FSkeletalMeshLODRenderData *local_1f0;
  TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> local_1e8;
  uint local_1d8;
  uint local_1d4;
  FStaticMeshVertexBuffer *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  TVector<float>_u_0 local_1a8;
  undefined8 local_198;
  float local_190;
  TVector<float>_u_0 local_188;
  TVector<float>_u_0 local_178;
  longlong local_168;
  FNewSectionInfo *local_160;
  undefined8 local_158;
  float local_150;
  UObject *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  UObject *local_120;
  TObjectPtr<UMaterialInterface>_u_0 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  FSkinWeightInfo local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_218 = this;
  local_1d8 = param_1;
  pFVar30 = (FStaticMeshVertexBuffer *)(**(code **)(this->MergeMesh->_padding_ + 0x398))();
  local_1d0 = pFVar30;
  if ((pFVar30 == (FStaticMeshVertexBuffer *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("MergeResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                          ,0x1ce,L""), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar31 = ::operator_new(0x768);
  pFVar32 = (FSkeletalMeshLODRenderData *)0x0;
  if (pFVar31 != (FSkeletalMeshLODRenderData *)0x0) {
    pFVar32 = FSkeletalMeshLODRenderData::FSkeletalMeshLODRenderData(pFVar31,true);
  }
  pFVar55 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data;
  local_240 = pFVar32;
  local_1f0 = pFVar32;
  if (((pFVar55 <= (FScriptContainerElement *)&local_1f0) &&
      ((FScriptContainerElement *)&local_1f0 <
       pFVar55 + (longlong)(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax * 8)
      ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar27 = (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum;
  piVar40 = &(((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayMax;
  if (iVar27 == *piVar40) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)pFVar30,piVar40);
  }
  (((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.ArrayNum = iVar27 + 1;
  *(FSkeletalMeshLODRenderData **)
   ((((FSkeletalMeshRenderData *)pFVar30)->LODRenderData).Array.AllocatorInstance.Data +
   (longlong)iVar27 * 8) = local_1f0;
  pFVar33 = USkeletalMesh::AddLODInfo(this->MergeMesh);
  pFVar33->LODHysteresis = 3.4028235e+38;
  (pFVar33->ScreenSize).Default = 3.4028235e+38;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  local_208 = pFVar33;
  GenerateNewSectionArray(this,&local_1e8,param_1);
  local_21c = 0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = 0;
  local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.ArrayNum = 0;
  local_200.ArrayMax = 0;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ArrayNum = 0;
  local_238.ArrayMax = 0;
  local_280 = 0;
  local_220 = 0;
  local_288 = false;
  local_20c = 0;
  if (0 < local_1e8.ArrayNum) {
    local_250 = 0;
    do {
      lVar38 = local_250;
      uVar52 = 0;
      if ((int)local_20c < local_1e8.ArrayNum) {
        uVar52 = ~local_20c >> 0x1f;
      }
      if ((uVar52 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      FVar62.Data = local_1e8.AllocatorInstance.Data;
      uVar52 = 0;
      local_160 = (FNewSectionInfo *)local_1e8.AllocatorInstance.Data;
      if (0 < *(int *)(local_1e8.AllocatorInstance.Data + lVar38 + 0x18)) {
        do {
          uVar53 = 0;
          if ((int)uVar52 < *(int *)(FVar62.Data + lVar38 + 0x18)) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short_const_&>
                    (&pFVar32->ActiveBoneIndices,
                     (ushort *)
                     (*(longlong *)(FVar62.Data + lVar38 + 0x10) + (longlong)(int)uVar52 * 2));
          uVar52 = uVar52 + 1;
        } while ((int)uVar52 < *(int *)(FVar62.Data + lVar38 + 0x18));
      }
      piVar40 = &(pFVar32->RenderSections).ArrayMax;
      uVar52 = (pFVar32->RenderSections).ArrayNum;
      if (uVar52 == *piVar40) {
        uVar52 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x118,8,&(pFVar32->RenderSections).AllocatorInstance,piVar40);
      }
      (pFVar32->RenderSections).ArrayNum = uVar52 + 1;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uVar52 + 1)) {
        uVar53 = ~uVar52 >> 0x1f;
      }
      if ((uVar53 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar55 = (FScriptContainerElement *)0x0;
      pFVar61 = (pFVar32->RenderSections).AllocatorInstance.Data + (longlong)(int)uVar52 * 0x118;
      if (pFVar61 == (FScriptContainerElement *)0x0) {
        local_248 = (FScriptContainerElement *)0x0;
      }
      else {
        *(ushort *)pFVar61 = 0;
        *(ushort *)(pFVar61 + 0x50) = 0xffff;
        *(undefined4 *)(pFVar61 + 100) = 0xffffffff;
        *(undefined8 *)(pFVar61 + 4) = 0;
        *(undefined8 *)(pFVar61 + 0xc) = 0x3010100;
        *(undefined8 *)(pFVar61 + 0x18) = 0;
        *(undefined8 *)(pFVar61 + 0x20) = 0;
        *(undefined8 *)(pFVar61 + 0x28) = 0;
        *(undefined8 *)(pFVar61 + 0x30) = 0;
        *(undefined8 *)(pFVar61 + 0x38) = 0;
        *(undefined8 *)(pFVar61 + 0x40) = 0;
        *(undefined4 *)(pFVar61 + 0x48) = 0;
        *(undefined4 *)(pFVar61 + 0x4c) = 4;
        *(undefined8 *)(pFVar61 + 0x54) = 0;
        *(undefined8 *)(pFVar61 + 0x5c) = 0;
        local_248 = pFVar61;
        FRenderResource::FRenderResource((FRenderResource *)(pFVar61 + 0x68));
        *(undefined ***)(pFVar61 + 0x68) = &___7FDuplicatedVerticesBuffer__6B_;
        *(undefined ***)(pFVar61 + 0xb8) =
             &TSkeletalMeshVertexData<unsigned_int>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xc0) =
             &TSkeletalMeshVertexData<unsigned_int>::_vftable__for__TResourceArray<unsigned_int,0>__
        ;
        *(undefined ***)(pFVar61 + 0xe0) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__FSkeletalMeshVertexDataInterface__;
        *(undefined ***)(pFVar61 + 0xe8) =
             &TSkeletalMeshVertexData<FIndexLengthPair>::
              _vftable__for__TResourceArray<FIndexLengthPair,0>__;
        *(undefined8 *)(pFVar61 + 0x88) = 0;
        *(undefined8 *)(pFVar61 + 0x90) = 0;
        *(undefined4 *)(pFVar61 + 0x98) = 0;
        *(undefined8 *)(pFVar61 + 0xa0) = 0;
        *(undefined8 *)(pFVar61 + 0xa8) = 0;
        *(undefined4 *)(pFVar61 + 0xb0) = 0;
        *(undefined8 *)(pFVar61 + 200) = 0;
        *(undefined8 *)(pFVar61 + 0xd0) = 0;
        pFVar61[0xd8] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar61 + 0xf0) = 0;
        *(undefined8 *)(pFVar61 + 0xf8) = 0;
        pFVar61[0x100] = (FScriptContainerElement)0x0;
        pFVar61[0x108] = (FScriptContainerElement)0x0;
        pFVar61[0x110] = (FScriptContainerElement)0x0;
        pFVar55 = pFVar61;
      }
      pFVar34 = FVar62.Data + lVar38 + 0x10;
      pFVar61 = pFVar55 + 0x38;
      if (pFVar61 != pFVar34) {
        iVar27 = *(int *)(pFVar34 + 8);
        pFVar47 = pFVar55 + 0x44;
                    /* WARNING: Load size is inaccurate */
        _Src.Data = *pFVar34;
        *(int *)(pFVar55 + 0x40) = iVar27;
        if ((iVar27 == 0) && (*(int *)pFVar47 == 0)) {
          *(int *)pFVar47 = 0;
          lVar38 = local_250;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar27,*(int *)pFVar47,(ForAnyElementType *)pFVar61,iVar27,(int *)pFVar47);
          lVar38 = local_250;
          if (iVar27 != 0) {
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar61,_Src.Data,(longlong)iVar27 * 2);
            lVar38 = local_250;
          }
        }
      }
      pFVar57 = local_218;
      *(undefined4 *)(pFVar55 + 0x48) = 0;
      *(uint *)(pFVar55 + 0x10) = (uint)local_260;
      lVar35 = (**(code **)(local_218->MergeMesh->_padding_ + 0x3c8))();
      if ((*(int *)(lVar35 + 8) != (pFVar57->MaterialIds).ArrayNum) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("MergeMesh->GetMaterials().Num() == MaterialIds.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                              ,0x204,L""), bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar61 = FVar62.Data + lVar38 + 0x28;
      if (*(int *)pFVar61 == -1) {
        plVar36 = (longlong *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        local_118 = (TObjectPtr<UMaterialInterface>_u_0)
                    ((TObjectPtr<UMaterialInterface>_u_0 *)(FVar62.Data + lVar38 + 0x20))->DebugPtr;
        local_1c0 = 0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_118.DebugPtr != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_118.DebugPtr);
        }
        local_f0 = 0;
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        pFVar8 = (FSkeletalMaterial *)*plVar36;
        lVar38 = plVar36[1];
        local_110 = local_1c0;
        for (pFVar54 = pFVar8; pFVar54 != pFVar8 + (int)lVar38; pFVar54 = pFVar54 + 1) {
          bVar24 = ::operator==(pFVar54,(FSkeletalMaterial *)&local_118.ObjectPtr);
          if (bVar24) {
            lVar38 = ((longlong)pFVar54 - (longlong)pFVar8) / 6 +
                     ((longlong)pFVar54 - (longlong)pFVar8 >> 0x3f);
            uVar46 = (lVar38 >> 3) - (lVar38 >> 0x3f);
            lVar38 = local_250;
            pFVar57 = local_218;
            goto LAB_148600fb6;
          }
        }
        uVar46 = 0xffffffff;
        lVar38 = local_250;
        pFVar57 = local_218;
      }
      else {
        pFVar34 = (pFVar57->MaterialIds).AllocatorInstance.Data;
        for (pFVar47 = pFVar34; pFVar47 != pFVar34 + (longlong)(pFVar57->MaterialIds).ArrayNum * 4;
            pFVar47 = pFVar47 + 4) {
          if (*(int *)pFVar47 == *(int *)pFVar61) {
            uVar46 = (longlong)pFVar47 - (longlong)pFVar34 >> 2;
            goto LAB_148600fb6;
          }
        }
        uVar46 = 0xffffffff;
      }
LAB_148600fb6:
      if ((int)uVar46 == -1) {
        local_148 = *(UObject **)(FVar62.Data + lVar38 + 0x20);
        uVar9 = *(undefined8 *)(FVar62.Data + lVar38 + 0x2c);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        pFVar34 = FVar62.Data + lVar38 + 0x34;
        local_138 = *(undefined4 *)pFVar34;
        uStack_134 = *(undefined4 *)(pFVar34 + 4);
        uStack_130 = *(undefined4 *)(pFVar34 + 8);
        uStack_12c = *(undefined4 *)(pFVar34 + 0xc);
        local_120 = (UObject *)0x0;
        local_128 = *(undefined4 *)(FVar62.Data + lVar38 + 0x44);
        local_140 = uVar9;
        pFVar37 = (ForAnyElementType *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        if (((pFVar37->Data <= (FScriptContainerElement *)&local_148) &&
            ((FScriptContainerElement *)&local_148 <
             pFVar37->Data + (longlong)*(int *)((longlong)&pFVar37[1].Data + 4) * 0x30)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = *(int *)&pFVar37[1].Data;
        piVar40 = (int *)((longlong)&pFVar37[1].Data + 4);
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,pFVar37,piVar40);
        }
        lVar35 = (longlong)iVar27;
        *(int *)&pFVar37[1].Data = iVar27 + 1;
        pFVar34 = pFVar37->Data;
        *(UObject **)(pFVar34 + lVar35 * 0x30) = local_148;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_148 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_148);
        }
        *(undefined8 *)(pFVar34 + lVar35 * 0x30 + 8) = local_140;
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10) = CONCAT44(uStack_134,local_138);
        *(ulonglong *)(pFVar34 + lVar35 * 0x30 + 0x10 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(undefined4 *)(pFVar34 + lVar35 * 0x30 + 0x20) = local_128;
        *(UObject **)(pFVar34 + lVar35 * 0x30 + 0x28) = local_120;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_120);
        }
        pFVar57 = local_218;
        pTVar1 = &local_218->MaterialIds;
        pFVar34 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar34 <= pFVar61) &&
            (pFVar61 < pFVar34 + (longlong)(local_218->MaterialIds).ArrayMax * 4)) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (pFVar57->MaterialIds).ArrayNum;
        piVar40 = &(pFVar57->MaterialIds).ArrayMax;
        if (iVar27 == *piVar40) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar40);
        }
        (pFVar57->MaterialIds).ArrayNum = iVar27 + 1;
        *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar27 * 4) = *(int *)pFVar61;
        lVar35 = (**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
        uVar46 = (ulonglong)(ushort)(*(short *)(lVar35 + 8) - 1);
      }
      *(ushort *)pFVar55 = (ushort)uVar46;
      *(undefined4 *)(pFVar55 + 8) = 0;
      *(int *)(pFVar55 + 4) = local_238.ArrayNum;
      plVar36 = (longlong *)(**(code **)(pFVar57->MergeMesh->_padding_ + 0x3c8))();
      uVar6 = *(ushort *)pFVar55;
      if (((int)plVar36[1] <= (int)(uint)uVar6) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar27 = *(int *)(FVar62.Data + lVar38 + 8);
      local_168 = (ulonglong)uVar6 * 0x30 + *plVar36;
      local_210 = 0;
      if (0 < iVar27) {
        local_1c8 = 0;
        do {
          lVar65 = local_168;
          lVar35 = local_1c8;
          uVar52 = 0;
          if ((int)local_210 < iVar27) {
            uVar52 = ~local_210 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar64 = (FMergeSectionInfo *)
                    (*(longlong *)
                      ((longlong)(((FNewSectionInfo *)FVar62.Data)->UVChannelData).LocalUVDensities
                      + lVar38 + -0x38) + lVar35);
          lVar38 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar52 = *(int *)(lVar38 + 8) - 1;
          if ((int)local_1d8 < (int)uVar52) {
            uVar52 = local_1d8;
          }
          uVar6 = pFVar64->Section->MaterialIndex;
          uVar46 = (ulonglong)uVar6;
          lVar38 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
          if ((int)(uint)uVar6 < *(int *)(lVar38 + 8)) {
            plVar36 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x3c0))();
            if (((int)plVar36[1] <= (int)(uint)uVar6) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            lVar38 = *plVar36;
            fVar66 = *(float *)(lVar38 + 0x14 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x14)) {
              fVar66 = *(float *)(lVar65 + 0x14);
            }
            *(float *)(lVar65 + 0x14) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x18 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x18)) {
              fVar66 = *(float *)(lVar65 + 0x18);
            }
            *(float *)(lVar65 + 0x18) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x1c + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x1c)) {
              fVar66 = *(float *)(lVar65 + 0x1c);
            }
            *(float *)(lVar65 + 0x1c) = fVar66;
            fVar66 = *(float *)(lVar38 + 0x20 + uVar46 * 0x30);
            if (fVar66 <= *(float *)(lVar65 + 0x20)) {
              fVar66 = *(float *)(lVar65 + 0x20);
            }
            in_XMM1 = ZEXT416((uint)fVar66);
            *(float *)(lVar65 + 0x20) = fVar66;
          }
          pfVar39 = (float *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x328))
                                       (pFVar64->SkelMesh,uVar52);
          bVar4 = *(byte *)&local_208->BuildSettings;
          fVar66 = (local_208->ScreenSize).Default;
          if (*pfVar39 <= fVar66) {
            fVar66 = *pfVar39;
          }
          (local_208->ScreenSize).Default = fVar66;
          bVar44 = bVar4 | *(byte *)(pfVar39 + 6);
          uVar5 = (local_208->BuildSettings).field_0x1;
          bVar44 = (bVar4 ^ bVar44) & 0x7f ^ bVar44;
          *(byte *)&local_208->BuildSettings = bVar44;
          (local_208->BuildSettings).field_0x1 =
               ((local_208->BuildSettings).bUseBackwardsCompatibleF16TruncUVs |
               *(byte *)((longlong)pfVar39 + 0x19)) & 1 ^ uVar5 & 0xfe;
          *(byte *)&local_208->BuildSettings =
               (bVar44 | *(byte *)(pfVar39 + 6)) & 0x20 ^ bVar44 & 0xdf;
          fVar66 = pfVar39[1];
          if (local_208->LODHysteresis <= pfVar39[1]) {
            fVar66 = local_208->LODHysteresis;
          }
          local_208->LODHysteresis = fVar66;
          plVar36 = (longlong *)(**(code **)(pFVar64->SkelMesh->_padding_ + 0x398))();
          uVar53 = 0;
          if ((int)uVar52 < (int)plVar36[1]) {
            uVar53 = ~uVar52 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar31 = local_240;
          uVar53 = 0;
          pFVar32 = *(FSkeletalMeshLODRenderData **)(*plVar36 + (longlong)(int)uVar52 * 8);
          if (0 < (pFVar32->RequiredBones).ArrayNum) {
            lVar38 = 0;
            do {
              lVar35 = (**(code **)(pFVar64->SkelMesh->_padding_ + 0x318))();
              uVar52 = 0;
              if ((int)uVar53 < (pFVar32->RequiredBones).ArrayNum) {
                uVar52 = ~uVar53 >> 0x1f;
              }
              if ((uVar52 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              uVar6 = *(ushort *)((pFVar32->RequiredBones).AllocatorInstance.Data + lVar38);
              if ((*(int *)(lVar35 + 0x28) <= (int)(uint)uVar6) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              FVar10 = *(FName *)(*(longlong *)(lVar35 + 0x20) + (ulonglong)uVar6 * 0xc);
              if (((FVar10 != (FName)0x0) &&
                  (piVar40 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)&(local_218->NewRefSkeleton).FinalNameToIndexMap,FVar10),
                  piVar40 != (int *)0x0)) && (*piVar40 != -1)) {
                local_228[0] = (ushort)*piVar40;
                TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                          (&pFVar31->RequiredBones,local_228);
              }
              uVar53 = uVar53 + 1;
              lVar38 = lVar38 + 2;
              pFVar55 = local_248;
            } while ((int)uVar53 < (pFVar32->RequiredBones).ArrayNum);
          }
          *(uint *)(pFVar55 + 0x48) = *(int *)(pFVar55 + 0x48) + pFVar64->Section->NumVertices;
          uVar52 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
          local_1d4 = (pFVar32->StaticVertexBuffers).ColorVertexBuffer.NumVertices;
          uVar53 = pFVar64->Section->NumVertices + pFVar64->Section->BaseVertexIndex;
          if ((int)uVar53 < (int)uVar52) {
            uVar52 = uVar53;
          }
          pFVar48 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
          if (pFVar48 == (FSkinWeightVertexBuffer *)0x0) {
            pFVar48 = &pFVar32->SkinWeightVertexBuffer;
          }
          uVar53 = (pFVar48->DataVertexBuffer).MaxBoneInfluences;
          uVar28 = uVar53;
          if (uVar53 < local_220) {
            uVar28 = local_220;
          }
          local_288 = (bool)(local_288 | (pFVar48->DataVertexBuffer).bUse16BitBoneIndex);
          *(uint *)(local_248 + 0x4c) = uVar53;
          uVar53 = (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
          if (uVar53 <= local_280) {
            uVar53 = local_280;
          }
          local_224 = (uint)local_260;
          uVar63 = pFVar64->Section->BaseVertexIndex;
          local_280 = uVar53;
          local_220 = uVar28;
          if ((int)uVar63 < (int)uVar52) {
            while( true ) {
              uVar53 = local_1d4;
              uVar28 = (uint)local_260;
              if ((uint)local_260 == local_260._4_4_) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x434,&local_268,(int *)((longlong)&local_260 + 4));
              }
              local_260 = CONCAT44(local_260._4_4_,uVar28 + 1);
              uVar45 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar45 = ~uVar28 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pTVar58 = (TGPUSkinVertexFloat32Uvs<4> *)
                        (local_268.Data + (longlong)(int)uVar28 * 0x34);
              uVar28 = local_200.ArrayNum;
              if (local_200.ArrayNum == local_200.ArrayMax) {
                uVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x230,&local_200.AllocatorInstance,&local_200.ArrayMax);
              }
              local_200.ArrayNum = uVar28 + 1;
              uVar45 = 0;
              if ((int)uVar28 < (int)(uVar28 + 1)) {
                uVar45 = ~uVar28 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar57 = local_218;
              pFVar55 = local_200.AllocatorInstance.Data + (longlong)(int)uVar28 * 0x30;
              CopyVertexFromSource<TGPUSkinVertexFloat32Uvs<4>_>
                        (local_218,pTVar58,pFVar32,uVar63,pFVar64);
              pFVar48 = (pFVar32->SkinWeightProfilesData).DefaultOverrideSkinWeightBuffer;
              if (pFVar48 == (FSkinWeightVertexBuffer *)0x0) {
                pFVar48 = &pFVar32->SkinWeightVertexBuffer;
              }
              pFVar41 = FSkinWeightVertexBuffer::GetVertexSkinWeights(pFVar48,&local_e8,uVar63);
              uVar9 = *(undefined8 *)(pFVar41->InfluenceBones + 4);
              *(undefined8 *)pFVar55 = *(undefined8 *)pFVar41->InfluenceBones;
              *(undefined8 *)(pFVar55 + 8) = uVar9;
              in_XMM1 = *(undefined1 (*) [16])(pFVar41->InfluenceBones + 8);
              *(undefined1 (*) [16])(pFVar55 + 0x10) = in_XMM1;
              uVar7 = *(undefined4 *)(pFVar41->InfluenceWeights + 6);
              uVar19 = *(undefined4 *)(pFVar41->InfluenceWeights + 8);
              uVar20 = *(undefined4 *)(pFVar41->InfluenceWeights + 10);
              *(undefined4 *)(pFVar55 + 0x20) = *(undefined4 *)(pFVar41->InfluenceWeights + 4);
              *(undefined4 *)(pFVar55 + 0x24) = uVar7;
              *(undefined4 *)(pFVar55 + 0x28) = uVar19;
              *(undefined4 *)(pFVar55 + 0x2c) = uVar20;
              cVar25 = (**(code **)(pFVar57->MergeMesh->_padding_ + 0x470))();
              if (cVar25 != '\0') {
                if ((int)uVar63 < (int)uVar53) {
                  pFVar59 = (FColor_u_0 *)
                            ((pFVar32->StaticVertexBuffers).ColorVertexBuffer.Data +
                            uVar63 * (pFVar32->StaticVertexBuffers).ColorVertexBuffer.Stride);
                  if (((local_278.Data <= pFVar59) &&
                      (pFVar59 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4))) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar27 + 1);
                  FVar29 = *pFVar59;
                }
                else {
                  local_284.Bits = 0xffffffff;
                  if (((local_278.Data <= &local_284) &&
                      (&local_284 < (FColor_u_0 *)(local_278.Data + (longlong)local_270._4_4_ * 4)))
                     && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  iVar27 = (uint)local_270;
                  if ((uint)local_270 == local_270._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_278,(int *)((longlong)&local_270 + 4));
                  }
                  local_270 = CONCAT44(local_270._4_4_,iVar27 + 1);
                  FVar29 = local_284;
                }
                *(FColor_u_0 *)(local_278.Data + (longlong)iVar27 * 4) = FVar29;
              }
              lVar38 = 0xc;
              do {
                if (*(ushort *)(pFVar55 + 0x18) != 0) {
                  uVar6 = *(ushort *)pFVar55;
                  if (((pFVar64->BoneMapToMergedBoneMap).ArrayNum <= (int)(uint)uVar6) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar24)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  *(ushort *)pFVar55 =
                       *(ushort *)
                        ((pFVar64->BoneMapToMergedBoneMap).AllocatorInstance.Data +
                        (ulonglong)uVar6 * 2);
                }
                pFVar55 = pFVar55 + 2;
                lVar38 = lVar38 + -1;
              } while (lVar38 != 0);
              uVar63 = uVar63 + 1;
              if ((int)uVar52 <= (int)uVar63) break;
            }
          }
          pFVar55 = local_248;
          *(uint *)(local_248 + 8) = *(int *)(local_248 + 8) + pFVar64->Section->NumTriangles;
          if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
               (FRawStaticIndexBuffer16or32Interface *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IndexBuffer != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                  ,0x56,L""), bVar24)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar27 = (**(code **)(((pFVar32->MultiSizeIndexContainer).IndexBuffer)->_padding_ + 0x50))
                             ();
          uVar28 = local_224;
          uVar52 = pFVar64->Section->BaseIndex;
          uVar53 = pFVar64->Section->NumTriangles;
          iVar60 = uVar52 + uVar53 * 2 + uVar53;
          if (iVar60 < iVar27) {
            iVar27 = iVar60;
          }
          for (; (int)uVar52 < iVar27; uVar52 = uVar52 + 1) {
            if (((pFVar32->MultiSizeIndexContainer).IndexBuffer ==
                 (FRawStaticIndexBuffer16or32Interface *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar11 = (pFVar32->MultiSizeIndexContainer).IndexBuffer;
            iVar60 = (**(code **)(pFVar11->_padding_ + 0x60))(pFVar11,uVar52);
            local_258[0] = (iVar60 - pFVar64->Section->BaseVertexIndex) + uVar28;
            if (((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)local_258) &&
                ((FScriptContainerElement *)local_258 <
                 local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 4)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar60 = local_238.ArrayNum;
            if (local_238.ArrayNum == local_238.ArrayMax) {
              iVar60 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_238.AllocatorInstance,&local_238.ArrayMax);
            }
            local_238.ArrayNum = iVar60 + 1;
            *(uint *)(local_238.AllocatorInstance.Data + (longlong)iVar60 * 4) = local_258[0];
            if (local_21c < local_258[0]) {
              local_21c = local_258[0];
            }
            pFVar55 = local_248;
          }
          pFVar12 = pFVar64->Section;
          if ((pFVar12->DuplicatedVerticesBuffer).bHasOverlappingVertices == false) {
            (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 8))(pFVar55 + 0xb8,1);
            (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 8))
                      (pFVar55 + 0xe0,*(undefined4 *)(pFVar55 + 0x48));
            puVar42 = (undefined4 *)
                      (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))(pFVar55 + 0xb8);
            pvVar43 = (void *)(**(code **)(*(longlong *)(pFVar55 + 0xe0) + 0x18))(pFVar55 + 0xe0);
            memset(pvVar43,0,(ulonglong)*(uint *)(pFVar55 + 0x48) << 3);
            *puVar42 = 0;
          }
          else {
            if (pFVar55[0x108] == (FScriptContainerElement)0x0) {
              pFVar3 = (ForAnyElementType *)(pFVar55 + 200);
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar43 = *(void **)puVar2;
                pFVar61 = pFVar55 + 0xd4;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18;
                if (((ulonglong)pvVar43 & 1) != 0) {
                  pvVar43 = puVar2 + ((longlong)pvVar43 >> 0x18);
                }
                *(int *)(pFVar55 + 0xd0) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (4,4,iVar27,*(int *)pFVar61,pFVar3,iVar27,(int *)pFVar61);
                  FVar49 = *pFVar3;
                  if (((ulonglong)FVar49 & 1) != 0) {
                    FVar49 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar49 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar49,pvVar43,(longlong)iVar27 << 2);
                  }
                }
              }
              pFVar3 = (ForAnyElementType *)(pFVar55 + 0xf0);
              pFVar55[0xd8] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x20;
              pFVar12 = pFVar64->Section;
              puVar2 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10;
              if (pFVar3 != (ForAnyElementType *)puVar2) {
                pvVar43 = *(void **)puVar2;
                pFVar61 = pFVar55 + 0xfc;
                iVar27 = *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x18;
                if (((ulonglong)pvVar43 & 1) != 0) {
                  pvVar43 = &(pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x10 +
                            ((longlong)pvVar43 >> 0x18);
                }
                *(int *)(pFVar55 + 0xf8) = iVar27;
                if ((iVar27 == 0) && (*(int *)pFVar61 == 0)) {
                  *(int *)pFVar61 = 0;
                }
                else {
                  UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                            (8,4,iVar27,*(int *)pFVar61,pFVar3,iVar27,(int *)pFVar61);
                  FVar49 = *pFVar3;
                  if (((ulonglong)FVar49 & 1) != 0) {
                    FVar49 = (ForAnyElementType)
                             ((longlong)&pFVar3->field_0x0 + ((longlong)FVar49 >> 0x18));
                  }
                  if (iVar27 != 0) {
                    memcpy((void *)FVar49,pvVar43,(longlong)iVar27 << 3);
                  }
                }
              }
              pFVar55[0x100] =
                   (FScriptContainerElement)
                   (pFVar12->DuplicatedVerticesBuffer).DupVertIndexData.field_0x20;
              piVar40 = (int *)(**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))();
              iVar27 = 0;
              if (0 < *(int *)(pFVar55 + 0xd0)) {
                do {
                  iVar27 = iVar27 + 1;
                  *piVar40 = *piVar40 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar27 < *(int *)(pFVar55 + 0xd0));
              }
            }
            else {
              iVar27 = *(int *)(pFVar55 + 0xd0);
              uVar52 = *(uint *)(pFVar55 + 0xf8);
              (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 8))
                        (pFVar55 + 0xb8,
                         *(int *)&(pFVar12->DuplicatedVerticesBuffer).DupVertData.field_0x18 +
                         iVar27);
              (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 8))
                        (pFVar55 + 0xe0,*(undefined4 *)(pFVar55 + 0x48));
              lVar38 = (**(code **)(*(longlong *)(pFVar55 + 0xb8) + 0x18))(pFVar55 + 0xb8);
              lVar35 = (**(code **)(*(longlong *)(pFVar55 + 0xe0) + 0x18))();
              if (iVar27 < *(int *)(pFVar55 + 0xd0)) {
                piVar40 = (int *)(lVar38 + (longlong)iVar27 * 4);
                iVar60 = iVar27;
                do {
                  iVar60 = iVar60 + 1;
                  *piVar40 = *piVar40 + (local_224 - pFVar64->Section->BaseVertexIndex);
                  piVar40 = piVar40 + 1;
                } while (iVar60 < *(int *)(pFVar55 + 0xd0));
              }
              if (uVar52 < *(uint *)(pFVar55 + 0x48)) {
                do {
                  uVar46 = (ulonglong)uVar52;
                  uVar52 = uVar52 + 1;
                  piVar40 = (int *)(lVar35 + 4 + uVar46 * 8);
                  *piVar40 = *piVar40 + iVar27;
                } while (uVar52 < *(uint *)(pFVar55 + 0x48));
                pFVar55[0x108] = (FScriptContainerElement)0x1;
                goto LAB_148601d89;
              }
            }
            pFVar55[0x108] = (FScriptContainerElement)0x1;
          }
LAB_148601d89:
          local_210 = local_210 + 1;
          local_1c8 = local_1c8 + 0x30;
          iVar27 = *(int *)((longlong)(local_160->UVChannelData).LocalUVDensities +
                           local_250 + -0x30);
          lVar38 = local_250;
          FVar62.Data = (FScriptContainerElement *)local_160;
        } while ((int)local_210 < iVar27);
      }
      local_250 = lVar38 + 0x48;
      local_20c = local_20c + 1;
      this = local_218;
      pFVar30 = local_1d0;
      pFVar32 = local_240;
      pFVar33 = local_208;
    } while ((int)local_20c < local_1e8.ArrayNum);
  }
  uVar52 = local_280;
  if (this->MeshBufferAccess != ForceCPUAndGPU) {
    iVar27 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
    iVar60 = FSkeletalMeshRenderData::GetMaxBonesPerSection((FSkeletalMeshRenderData *)pFVar30,0);
    if (iVar60 <= iVar27) {
      bVar24 = false;
      goto LAB_148601e34;
    }
  }
  bVar24 = true;
LAB_148601e34:
  AlgoImpl::
  IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
            ((ushort *)(pFVar32->RequiredBones).AllocatorInstance.Data,
             (pFVar32->RequiredBones).ArrayNum,local_285,(TLess<void> *)&local_285);
  this_01 = (FReferenceSkeleton *)(**(code **)(this->MergeMesh->_padding_ + 800))();
  FReferenceSkeleton::EnsureParentsExistAndSort(this_01,&pFVar32->ActiveBoneIndices);
  pFVar30 = &(pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer;
  (pFVar32->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs =
       (pFVar33->BuildSettings).bUseFullPrecisionUVs;
  local_1d0 = pFVar30;
  FPositionVertexBuffer::Init
            (&(pFVar32->StaticVertexBuffers).PositionVertexBuffer,(uint)local_260,bVar24);
  FStaticMeshVertexBuffer::Init(pFVar30,(uint)local_260,uVar52,bVar24);
  fVar23 = _UNK_15104007c;
  fVar22 = _UNK_151040078;
  fVar21 = _UNK_151040074;
  fVar66 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar52 = 0;
  if (0 < (int)(uint)local_260) {
    local_248 = (FScriptContainerElement *)0x0;
    local_250 = 0;
    do {
      pFVar55 = local_248;
      lVar38 = local_250;
      uVar28 = ~uVar52 >> 0x1f;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      if ((uVar53 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar46 = (ulonglong)(uVar52 * (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Stride);
      puVar13 = (pFVar32->StaticVertexBuffers).PositionVertexBuffer.Data;
      uVar7 = *(undefined4 *)(local_268.Data + lVar38 + 0x10);
      *(undefined8 *)(puVar13 + uVar46) = *(undefined8 *)(local_268.Data + lVar38 + 8);
      *(undefined4 *)(puVar13 + uVar46 + 8) = uVar7;
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      if (uVar53 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      auVar67 = pmovsxbd(in_XMM1,*(undefined4 *)(local_268.Data + lVar38 + 4));
      uVar53 = 0;
      if ((int)uVar52 < (int)(uint)local_260) {
        uVar53 = uVar28;
      }
      fVar71 = (float)auVar67._8_4_ * fVar22;
      uVar9 = CONCAT44((float)auVar67._4_4_ * fVar21,(float)auVar67._0_4_ * fVar66);
      iVar27 = (uint)local_260;
      local_158 = uVar9;
      local_150 = fVar71;
      if (uVar53 == 0) {
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar27 = (uint)local_260;
      }
      auVar67 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38));
      auVar68 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38 + 4));
      fVar69 = (float)auVar67._0_4_ * fVar66;
      fVar70 = (float)auVar67._4_4_ * fVar21;
      local_1b0 = (float)auVar67._8_4_ * fVar22;
      uVar53 = 0;
      if ((int)uVar52 < iVar27) {
        uVar53 = uVar28;
      }
      local_1b8 = CONCAT44(fVar70,fVar69);
      dVar15 = (double)local_1b0;
      dVar18 = (double)fVar69;
      dVar17 = (double)fVar70;
      dVar72 = (double)((float)auVar68._8_4_ * fVar22);
      dVar16 = (double)((float)auVar68._0_4_ * fVar66);
      dVar74 = (double)((float)auVar68._4_4_ * fVar21);
      dVar73 = (double)((float)auVar68._12_4_ * fVar23);
      auVar67._0_8_ = (dVar15 * dVar74 - dVar72 * dVar17) * dVar73;
      auVar67._8_8_ = 0;
      fVar69 = (float)auVar67._0_8_;
      if ((uVar53 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      in_XMM1 = pmovsxbd(auVar67,*(undefined4 *)(local_268.Data + lVar38));
      local_190 = (float)in_XMM1._8_4_ * fVar22;
      local_198 = CONCAT44((float)in_XMM1._4_4_ * fVar21,(float)in_XMM1._0_4_ * fVar66);
      local_1a8._s_0.X = fVar69;
      local_1a8._s_0.Y = (float)((dVar72 * dVar18 - dVar15 * dVar16) * dVar73);
      local_1a8._s_0.Z = (float)((dVar16 * dVar17 - dVar74 * dVar18) * dVar73);
      local_188._0_8_ = uVar9;
      local_188._s_0.Z = fVar71;
      local_178._0_8_ = local_198;
      local_178._s_0.Z = local_190;
      FStaticMeshVertexBuffer::SetVertexTangents
                (pFVar30,uVar52,(TVector<float> *)&local_178._s_0,(TVector<float> *)&local_1a8._s_0,
                 (TVector<float> *)&local_188._s_0);
      if (local_280 != 0) {
        lVar35 = 0;
        lVar65 = 0;
        local_208 = (FSkeletalMeshLODInfo *)(ulonglong)local_280;
        do {
          uVar53 = 0;
          if ((int)uVar52 < (int)(uint)local_260) {
            uVar53 = uVar28;
          }
          if ((uVar53 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          FVar62.Data = local_268.Data;
          lVar38 = lVar38 + lVar65;
          puVar13 = (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
          lVar51 = (ulonglong)(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                   (ulonglong)uVar52;
          pcVar14 = *(code **)((longlong)
                               *(local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordData
                              + 0x50);
          if ((local_240->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false)
          {
            this_00 = (FVector2DHalf *)(puVar13 + (lVar35 + lVar51) * 4);
            lVar51 = (*pcVar14)();
            if (((FVector2DHalf *)(puVar13 + lVar51) < this_00 + 1) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((this_00 < (FVector2DHalf *)
                           (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x167,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((pFVar33->BuildSettings).bUseBackwardsCompatibleF16TruncUVs == 0) {
              FVector2DHalf::operator=(this_00,(TVector2<float> *)(FVar62.Data + lVar38 + 0x14));
            }
            else {
              fVar71 = *(float *)(FVar62.Data + lVar38 + 0x18);
              FFloat16::SetTruncate((FFloat16 *)this_00,*(float *)(FVar62.Data + lVar38 + 0x14));
              in_XMM1 = ZEXT416((uint)fVar71);
              FFloat16::SetTruncate(&this_00->Y,fVar71);
            }
          }
          else {
            puVar56 = puVar13 + lVar65 + lVar51 * 8;
            lVar51 = (*pcVar14)();
            if ((puVar13 + lVar51 < puVar56 + 8) &&
               (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if ((puVar56 < (local_240->StaticVertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr)
               && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                       ,0x15e,L""), bVar26)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            *(undefined8 *)puVar56 = *(undefined8 *)(FVar62.Data + lVar38 + 0x14);
          }
          lVar35 = lVar35 + 1;
          lVar65 = lVar65 + 8;
          local_208 = (FSkeletalMeshLODInfo *)((longlong)local_208 - 1);
          lVar38 = local_250;
        } while (local_208 != (FSkeletalMeshLODInfo *)0x0);
        local_208 = (FSkeletalMeshLODInfo *)0x0;
        pFVar55 = local_248;
        pFVar32 = local_240;
        pFVar30 = local_1d0;
      }
      local_248 = pFVar55 + 1;
      local_250 = lVar38 + 0x34;
      uVar52 = uVar52 + 1;
      this = local_218;
    } while ((int)uVar52 < (int)(uint)local_260);
  }
  FSkinWeightDataVertexBuffer::SetMaxBoneInfluences
            (&(pFVar32->SkinWeightVertexBuffer).DataVertexBuffer,local_220);
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bUse16BitBoneIndex = local_288;
  (pFVar32->SkinWeightVertexBuffer).DataVertexBuffer.bNeedsCPUAccess = bVar24;
  (pFVar32->SkinWeightVertexBuffer).LookupVertexBuffer.bNeedsCPUAccess = bVar24;
  FSkinWeightVertexBuffer::operator=(&pFVar32->SkinWeightVertexBuffer,&local_200);
  cVar25 = (**(code **)(this->MergeMesh->_padding_ + 0x470))();
  if (cVar25 != '\0') {
    FColorVertexBuffer::InitFromColorArray
              (&(pFVar32->StaticVertexBuffers).ColorVertexBuffer,(FColor *)local_278.Data,
               (uint)local_270,4,true);
  }
  uVar50 = '\x04';
  if (local_21c < 0xffff) {
    uVar50 = '\x02';
  }
  FMultiSizeIndexContainer::RebuildIndexBuffer(&pFVar32->MultiSizeIndexContainer,uVar50,&local_238);
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if ((FColor_u_0 *)local_278.Data != (FColor_u_0 *)0x0) {
    FMemory::Free(local_278.Data);
  }
  if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.AllocatorInstance.Data);
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((FNewSectionInfo *)local_1e8.AllocatorInstance.Data != (FNewSectionInfo *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  return;
}

// FSkeletalMeshMerge @ 148620ff0

FSkeletalMeshMerge * __thiscall
FSkeletalMeshMerge::FSkeletalMeshMerge
          (FSkeletalMeshMerge *this,USkeletalMesh *param_1,
          TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FSkelMeshMergeSectionMapping,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          EMeshBufferAccess param_5,FSkelMeshMergeUVTransforms *param_6)

{
  TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FSkelMeshMergeUVTransformMapping *pFVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  FSkeletalMeshMerge *pFVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  
  pTVar1 = &this->SrcMeshList;
  this->MergeMesh = param_1;
  uVar10 = 0;
  piVar11 = &(this->SrcMeshList).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar9 = param_2->ArrayNum;
  pFVar14 = (param_2->AllocatorInstance).Data;
  (this->SrcMeshList).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar11 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar9,0,&pTVar1->AllocatorInstance,iVar9,piVar11);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar14,(longlong)iVar9 << 3);
  }
  this->StripTopLODs = param_4;
  this->MeshBufferAccess = param_5;
  (this->SrcMeshInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SrcMeshInfo).ArrayNum = 0;
  (this->SrcMeshInfo).ArrayMax = 0;
  FReferenceSkeleton::FReferenceSkeleton(&this->NewRefSkeleton,true);
  pFVar2 = &this->DummySectionUVTransforms;
  (this->DummySectionUVTransforms).UVTransformsPerMesh.ArrayMax = 0;
  this->ForceSectionMapping = param_3;
  this->SectionUVTransforms = pFVar2;
  (pFVar2->UVTransformsPerMesh).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummySectionUVTransforms).UVTransformsPerMesh.ArrayNum = 0;
  (this->MaterialIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialIds).ArrayNum = 0;
  (this->MaterialIds).ArrayMax = 0;
  if ((param_6 != (FSkelMeshMergeUVTransforms *)0x0) && (uVar12 = uVar10, 0 < param_2->ArrayNum)) {
    do {
      piVar11 = &(this->DummySectionUVTransforms).UVTransformsPerMesh.ArrayMax;
      iVar9 = (int)uVar10;
      if (iVar9 < (param_6->UVTransformsPerMesh).ArrayNum) {
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FSkeletalMeshMerge *)(*pcVar4)();
          return pFVar8;
        }
        iVar7 = (this->DummySectionUVTransforms).UVTransformsPerMesh.ArrayNum;
        pFVar14 = (param_6->UVTransformsPerMesh).AllocatorInstance.Data + uVar12;
        if (iVar7 == *piVar11) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)pFVar2,piVar11);
        }
        (this->DummySectionUVTransforms).UVTransformsPerMesh.ArrayNum = iVar7 + 1;
        pFVar13 = (pFVar2->UVTransformsPerMesh).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
        DefaultConstructItems<FSkelMeshMergeMeshUVTransforms,int>(pFVar13,1);
        if (pFVar13 != pFVar14) {
          iVar7 = *(int *)&pFVar14[8].field_0x0;
          pFVar5 = pFVar13 + 0xc;
          _Src = *(void **)&pFVar14->field_0x0;
          iVar3 = *(int *)pFVar5;
          *(int *)&pFVar13[8].field_0x0 = iVar7;
          if ((iVar7 == 0) && (iVar3 == 0)) {
            *(int *)pFVar5 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,iVar7,iVar3,(ForAnyElementType *)pFVar13,iVar7,(int *)pFVar5);
            if (iVar7 != 0) {
              memcpy(*(void **)&pFVar13->field_0x0,_Src,(longlong)iVar7 * 0x60);
            }
          }
        }
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
      uVar12 = uVar12 + 0x10;
    } while ((int)(iVar9 + 1U) < param_2->ArrayNum);
  }
  return this;
}

// FSkeletalMeshMerge @ 148621230

FSkeletalMeshMerge * __thiscall
FSkeletalMeshMerge::FSkeletalMeshMerge
          (FSkeletalMeshMerge *this,USkeletalMesh *param_1,
          TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FSkelMeshMergeSectionMapping,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          EMeshBufferAccess param_5,FSkelMeshMergeUVTransformMapping *param_6)

{
  TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  FSkeletalMeshMerge *pFVar6;
  
  this->MergeMesh = param_1;
  pTVar1 = &this->SrcMeshList;
  piVar2 = &(this->SrcMeshList).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->SrcMeshList).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->StripTopLODs = param_4;
  this->MeshBufferAccess = param_5;
  (this->SrcMeshInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SrcMeshInfo).ArrayNum = 0;
  (this->SrcMeshInfo).ArrayMax = 0;
  FReferenceSkeleton::FReferenceSkeleton(&this->NewRefSkeleton,true);
  this->SectionUVTransforms = param_6;
  this->ForceSectionMapping = param_3;
  (this->DummySectionUVTransforms).UVTransformsPerMesh.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DummySectionUVTransforms).UVTransformsPerMesh.ArrayNum = 0;
  (this->DummySectionUVTransforms).UVTransformsPerMesh.ArrayMax = 0;
  (this->MaterialIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialIds).ArrayNum = 0;
  (this->MaterialIds).ArrayMax = 0;
  if (this->MergeMesh == (USkeletalMesh *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MergeMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                       ,0x29,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FSkeletalMeshMerge *)(*pcVar4)();
      return pFVar6;
    }
  }
  return this;
}

// AddSocket @ 14862df30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FSkeletalMeshMerge::AddSocket(FSkeletalMeshMerge *this,USkeletalMeshSocket *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined1 local_res8 [8];
  UObject *local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pTVar6 = USkeletalMesh::GetMeshOnlySocketList(this->MergeMesh);
  pFVar11 = (pTVar6->AllocatorInstance).Data;
  iVar5 = pTVar6->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar5 * 8;
  while( true ) {
    if (pTVar6->ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<USkeletalMeshSocket>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    if (*(FName *)(*(longlong *)pFVar11 + 0x28) == param_1->SocketName) {
      return false;
    }
    pFVar11 = pFVar11 + 8;
  }
  if (((param_2) && (lVar7 = (**(code **)(this->MergeMesh->_padding_ + 0x408))(), lVar7 != 0)) &&
     (lVar7 = (**(code **)(this->MergeMesh->_padding_ + 0x408))(), 0 < *(int *)(lVar7 + 0x1b0))) {
    return false;
  }
  pUVar8 = StaticDuplicateObject
                     ((UObject *)param_1,(UObject *)this->MergeMesh,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  if (pUVar8 == (UObject *)0x0) {
    pFVar10 = GetTypeName<USkeletalMeshSocket>(&local_60);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar9 = Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
  iVar5 = (int)pUVar9->_padding_;
  if ((iVar5 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar5 * 8)
      == &pUVar9->_padding_)) {
    local_68 = pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    pFVar1 = (pTVar6->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar1 + (longlong)pTVar6->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    iVar5 = pTVar6->ArrayNum;
    if (iVar5 == pTVar6->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar5 + 1;
    *(UObject **)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_68;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_68);
    }
    return true;
  }
  pFVar10 = GetTypeName<USkeletalMeshSocket>(&local_50);
  pwVar12 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UObject>(&local_40,pUVar8);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar13);
}

// AddSockets @ 14862e1a0

void __thiscall
FSkeletalMeshMerge::AddSockets
          (FSkeletalMeshMerge *this,
          TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<USkeletalMeshSocket_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    AddSocket(this,*(USkeletalMeshSocket **)pFVar3,param_2);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// BuildReferenceSkeleton @ 14862fa00

void __cdecl
FSkeletalMeshMerge::BuildReferenceSkeleton
          (TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *param_1,FReferenceSkeleton *param_2,
          USkeleton *param_3)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this;
  undefined1 *puVar1;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  TArray<FVirtualBoneRefData,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong local_res18;
  FMeshBoneInfo local_68;
  FReferenceSkeletonModifier local_58;
  
  uVar16 = 0;
  piVar10 = &(param_2->RawRefBoneInfo).ArrayMax;
  (param_2->RawRefBoneInfo).ArrayNum = 0;
  if (*piVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_2,0,piVar10);
  }
  piVar10 = &(param_2->RawRefBonePose).ArrayMax;
  (param_2->RawRefBonePose).ArrayNum = 0;
  if (*piVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(param_2->RawRefBonePose).AllocatorInstance,0,piVar10);
  }
  piVar10 = &(param_2->FinalRefBoneInfo).ArrayMax;
  (param_2->FinalRefBoneInfo).ArrayNum = 0;
  if (*piVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(param_2->FinalRefBoneInfo).AllocatorInstance,0,piVar10);
  }
  piVar10 = &(param_2->FinalRefBonePose).ArrayMax;
  (param_2->FinalRefBonePose).ArrayNum = 0;
  if (*piVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(param_2->FinalRefBonePose).AllocatorInstance,0,piVar10);
  }
  this = &param_2->RawNameToIndexMap;
  bVar6 = 1 < *(int *)&(param_2->RawNameToIndexMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this);
  }
  puVar1 = &(param_2->RawNameToIndexMap).field_0xc;
  *(undefined4 *)&(param_2->RawNameToIndexMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(param_2->RawNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->RawNameToIndexMap).field_0x34 = 0;
  iVar13 = *(int *)&(param_2->RawNameToIndexMap).field_0x2c;
  *(undefined4 *)&(param_2->RawNameToIndexMap).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(param_2->RawNameToIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->RawNameToIndexMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(param_2->RawNameToIndexMap).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this);
  }
  this_00 = &param_2->FinalNameToIndexMap;
  bVar6 = 1 < *(int *)&(param_2->FinalNameToIndexMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(param_2->FinalNameToIndexMap).field_0xc;
  *(undefined4 *)&(param_2->FinalNameToIndexMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(param_2->FinalNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(param_2->FinalNameToIndexMap).field_0x34 = 0;
  iVar13 = *(int *)&(param_2->FinalNameToIndexMap).field_0x2c;
  *(undefined4 *)&(param_2->FinalNameToIndexMap).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(param_2->FinalNameToIndexMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(param_2->FinalNameToIndexMap).field_0x10,0)
    ;
  }
  if (bVar6) {
    *(undefined4 *)&(param_2->FinalNameToIndexMap).field_0x48 = 1;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)this_00);
  }
  piVar10 = &(param_2->CachedEndOfBranchIndicesRaw).ArrayMax;
  (param_2->CachedEndOfBranchIndicesRaw).ArrayNum = 0;
  if (*piVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(param_2->CachedEndOfBranchIndicesRaw).AllocatorInstance,0,piVar10);
  }
  iVar13 = param_1->ArrayNum;
  local_58.RefSkeleton = param_2;
  local_58.Skeleton = param_3;
  if (0 < iVar13) {
    local_res18 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar16 < iVar13) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar3 = *(longlong **)((param_1->AllocatorInstance).Data + local_res18);
      if (plVar3 != (longlong *)0x0) {
        if ((param_2->RawRefBoneInfo).ArrayNum == 0) {
          pTVar7 = (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)
                   (**(code **)(*plVar3 + 800))();
          TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=
                    (&param_2->RawRefBoneInfo,pTVar7);
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                    (&param_2->RawRefBonePose,
                     (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                     (pTVar7 + 1));
          TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::operator=
                    (&param_2->FinalRefBoneInfo,pTVar7 + 2);
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                    (&param_2->FinalRefBonePose,
                     (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                     (pTVar7 + 3));
          TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
                    (this,(TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)(pTVar7 + 4));
          TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::operator=
                    (&param_2->FinalNameToIndexMap,
                     (TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)(pTVar7 + 9));
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::operator=
                    (&param_2->RequiredVirtualBones,
                     (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pTVar7 + 0xe));
          pTVar2 = &param_2->UsedVirtualBoneData;
          if (pTVar2 != (TArray<FVirtualBoneRefData,TSizedDefaultAllocator<32>_> *)(pTVar7 + 0xf)) {
            iVar13 = pTVar7[0xf].ArrayNum;
            piVar10 = &(param_2->UsedVirtualBoneData).ArrayMax;
            _Src = pTVar7[0xf].AllocatorInstance.Data;
            (param_2->UsedVirtualBoneData).ArrayNum = iVar13;
            if ((iVar13 == 0) && (*piVar10 == 0)) {
              *piVar10 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,iVar13,*piVar10,&pTVar2->AllocatorInstance,iVar13,piVar10);
              if (iVar13 != 0) {
                memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar13 * 0xc);
              }
            }
          }
          param_2->bOnlyOneRootAllowed = *(bool *)&pTVar7[0x10].AllocatorInstance.Data;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    (&param_2->CachedEndOfBranchIndicesRaw,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)&pTVar7[0x10].ArrayNum);
        }
        else {
          uVar14 = 1;
          lVar8 = (**(code **)(*plVar3 + 800))(plVar3);
          if (1 < *(int *)(lVar8 + 8)) {
            lVar8 = 0xc;
            do {
              lVar9 = (**(code **)(*plVar3 + 800))();
              uVar15 = ~uVar14 >> 0x1f;
              uVar11 = 0;
              if ((int)uVar14 < *(int *)(lVar9 + 0x28)) {
                uVar11 = uVar15;
              }
              if ((uVar11 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar4 = *(FName *)(lVar8 + *(longlong *)(lVar9 + 0x20));
              if (((FVar4 == (FName)0x0) ||
                  (piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                     *)this,FVar4), piVar10 == (int *)0x0)) || (*piVar10 == -1)) {
                lVar9 = (**(code **)(*plVar3 + 800))();
                uVar11 = 0;
                if ((int)uVar14 < *(int *)(lVar9 + 0x28)) {
                  uVar11 = uVar15;
                }
                if ((uVar11 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar11 = *(uint *)(lVar8 + 8 + *(longlong *)(lVar9 + 0x20));
                lVar9 = (**(code **)(*plVar3 + 800))();
                uVar12 = 0;
                if ((int)uVar11 < *(int *)(lVar9 + 0x28)) {
                  uVar12 = ~uVar11 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FVar4 = *(FName *)(*(longlong *)(lVar9 + 0x20) + (longlong)(int)uVar11 * 0xc);
                if (((FVar4 != (FName)0x0) &&
                    (piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                       *)this,FVar4), piVar10 != (int *)0x0)) &&
                   (iVar13 = *piVar10, iVar13 != -1)) {
                  lVar9 = (**(code **)(*plVar3 + 800))();
                  uVar11 = 0;
                  if ((int)uVar14 < *(int *)(lVar9 + 0x28)) {
                    uVar11 = uVar15;
                  }
                  if ((uVar11 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  local_68.Name = *(FName *)(*(longlong *)(lVar9 + 0x20) + lVar8);
                  local_68.ParentIndex = iVar13;
                  lVar9 = (**(code **)(*plVar3 + 800))();
                  uVar11 = 0;
                  if ((int)uVar14 < *(int *)(lVar9 + 0x38)) {
                    uVar11 = uVar15;
                  }
                  if ((uVar11 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FReferenceSkeletonModifier::Add
                            (&local_58,&local_68,
                             (TTransform<double> *)
                             ((longlong)(int)uVar14 * 0x60 + *(longlong *)(lVar9 + 0x30)),false);
                }
              }
              uVar14 = uVar14 + 1;
              lVar8 = lVar8 + 0xc;
              lVar9 = (**(code **)(*plVar3 + 800))(plVar3);
            } while ((int)uVar14 < *(int *)(lVar9 + 8));
          }
        }
      }
      local_res18 = local_res18 + 8;
      uVar16 = uVar16 + 1;
      iVar13 = param_1->ArrayNum;
    } while ((int)uVar16 < iVar13);
  }
  FReferenceSkeletonModifier::~FReferenceSkeletonModifier(&local_58);
  return;
}

// BuildSockets @ 148630080

void __thiscall
FSkeletalMeshMerge::BuildSockets
          (FSkeletalMeshMerge *this,TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  pTVar6 = USkeletalMesh::GetMeshOnlySocketList(this->MergeMesh);
  pTVar6->ArrayNum = 0;
  if (pTVar6->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar6->AllocatorInstance,0,&pTVar6->ArrayMax);
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar10 = pFVar12 + (longlong)iVar3 * 8;
  local_res10 = pFVar10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<USkeletalMesh_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar10) break;
    if (*(USkeletalMesh **)pFVar12 != (USkeletalMesh *)0x0) {
      pTVar7 = USkeletalMesh::GetMeshOnlySocketList(*(USkeletalMesh **)pFVar12);
      pFVar9 = (pTVar7->AllocatorInstance).Data;
      iVar4 = pTVar7->ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar4 * 8;
      while( true ) {
        if (pTVar7->ArrayNum != iVar4) {
          `TCheckedPointerIterator<USkeletalMeshSocket_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        pFVar10 = local_res10;
        if (pFVar9 == pFVar1) break;
        AddSocket(this,*(USkeletalMeshSocket **)pFVar9,false);
        pFVar9 = pFVar9 + 8;
      }
    }
    pFVar12 = pFVar12 + 8;
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  local_res10 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    pFVar12 = local_res10;
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<USkeletalMesh_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar12) break;
    plVar5 = *(longlong **)pFVar10;
    if ((plVar5 != (longlong *)0x0) && (lVar8 = (**(code **)(*plVar5 + 0x400))(plVar5), lVar8 != 0))
    {
      lVar8 = (**(code **)(*plVar5 + 0x400))(plVar5);
      puVar11 = *(undefined8 **)(lVar8 + 0x1a8);
      iVar4 = *(int *)(lVar8 + 0x1b0);
      puVar2 = puVar11 + iVar4;
      while( true ) {
        if (*(int *)(lVar8 + 0x1b0) != iVar4) {
          `TCheckedPointerIterator<USkeletalMeshSocket_*_const,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (puVar11 == puVar2) break;
        AddSocket(this,(USkeletalMeshSocket *)*puVar11,true);
        puVar11 = puVar11 + 1;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  USkeletalMesh::RebuildSocketMap(this->MergeMesh);
  return;
}

// CalculateLodCount @ 148631a50

int __thiscall
FSkeletalMeshMerge::CalculateLodCount
          (FSkeletalMeshMerge *this,TArray<USkeletalMesh_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  iVar5 = param_1->ArrayNum;
  uVar9 = 0;
  iVar8 = 0x7fffffff;
  if (0 < (longlong)iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + lVar7 * 8);
      iVar6 = iVar8;
      if ((plVar1 != (longlong *)0x0) && (iVar6 = (**(code **)(*plVar1 + 0x3d0))(), iVar8 < iVar6))
      {
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
    if (iVar8 != 0x7fffffff) {
      iVar8 = iVar8 - this->StripTopLODs;
      if (iVar8 < 2) {
        return 1;
      }
      return iVar8;
    }
  }
  return -1;
}

// DoMerge @ 148637fe0

bool __thiscall
FSkeletalMeshMerge::DoMerge
          (FSkeletalMeshMerge *this,TArray<FRefPoseOverride,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  USkeletalMesh *this_00;
  bool bVar2;
  USkeleton *pUVar3;
  ForAnyElementType *pFVar4;
  
  USkeletalMesh::ReleaseResources(this->MergeMesh);
  FRenderCommandFence::Wait(&this->MergeMesh->ReleaseResourcesFence,false);
  pUVar3 = (USkeleton *)(**(code **)(this->MergeMesh->_padding_ + 0x408))();
  BuildReferenceSkeleton(&this->SrcMeshList,&this->NewRefSkeleton,pUVar3);
  this_00 = this->MergeMesh;
  USkeletalMesh::WaitUntilAsyncPropertyReleased(this_00,RefSkeleton,ReadWrite);
  FReferenceSkeleton::operator=(&this_00->RefSkeleton,&this->NewRefSkeleton);
  BuildSockets(this,&this->SrcMeshList);
  if (param_1 != (TArray<FRefPoseOverride,TSizedDefaultAllocator<32>_> *)0x0) {
    pUVar3 = (USkeleton *)(**(code **)(this->MergeMesh->_padding_ + 0x408))();
    OverrideReferenceSkeletonPose(param_1,&this->NewRefSkeleton,pUVar3);
    OverrideMergedSockets(this,param_1);
  }
  pFVar4 = (ForAnyElementType *)(**(code **)(this->MergeMesh->_padding_ + 0x380))();
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,pFVar4,0,piVar1);
  }
  USkeletalMesh::CalculateInvRefMatrices(this->MergeMesh);
  bVar2 = FinalizeMesh(this);
  return bVar2;
}

// FinalizeMesh @ 148640150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSkeletalMeshMerge::FinalizeMesh(FSkeletalMeshMerge *this)

{
  TArray<FSkeletalMeshMerge::FMergeMeshInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  USkeletalMesh *pUVar6;
  FName FVar7;
  USkeletalMesh *this_00;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *this_01;
  ForAnyElementType *pFVar17;
  int *piVar18;
  longlong lVar19;
  longlong *plVar20;
  TBoxSphereBounds<double,double> *pTVar21;
  TBoxSphereBounds<double,double> *pTVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  size_t _Size;
  longlong lVar28;
  uint local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  ForAnyElementType local_178;
  int local_170 [2];
  ForAnyElementType local_168;
  int local_160 [2];
  ForAnyElementType local_158;
  int local_150 [2];
  longlong local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  TBoxSphereBounds<double,double> local_130;
  TBoxSphereBounds<double,double> local_f8;
  TBoxSphereBounds<double,double> local_c0;
  TBoxSphereBounds<double,double> local_88;
  
  lVar28 = (longlong)(this->SrcMeshList).ArrayNum;
  iVar24 = 0x7fffffff;
  uVar23 = 0;
  if (0 < lVar28) {
    lVar26 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar23 < (this->SrcMeshList).ArrayNum) {
        uVar14 = ~uVar23 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      plVar20 = *(longlong **)((this->SrcMeshList).AllocatorInstance.Data + lVar26 * 8);
      iVar15 = iVar24;
      if ((plVar20 != (longlong *)0x0) &&
         (iVar15 = (**(code **)(*plVar20 + 0x3d0))(), iVar24 < iVar15)) {
        iVar15 = iVar24;
      }
      iVar24 = iVar15;
      uVar23 = uVar23 + 1;
      lVar26 = lVar26 + 1;
    } while (lVar26 < lVar28);
    if (iVar24 != 0x7fffffff) {
      iVar24 = iVar24 - this->StripTopLODs;
      iVar15 = 1;
      if (1 < iVar24) {
        iVar15 = iVar24;
      }
      if (iVar15 != -1) {
        this_01 = (TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *)
                  (**(code **)(this->MergeMesh->_padding_ + 0x398))();
        if (this_01 != (TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *)0x0
           ) {
          TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_>::Empty
                    (this_01,iVar15);
        }
        USkeletalMesh::SetNumSourceModels(this->MergeMesh,0);
        pFVar17 = (ForAnyElementType *)(**(code **)(this->MergeMesh->_padding_ + 0x3c8))();
        piVar18 = (int *)((longlong)&pFVar17[1].Data + 4);
        *(undefined4 *)&pFVar17[1].Data = 0;
        if (*piVar18 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,pFVar17,0,piVar18);
        }
        pTVar1 = &this->SrcMeshInfo;
        piVar18 = &(this->SrcMeshInfo).ArrayNum;
        DestructItems<FSkeletalMeshMerge::FMergeMeshInfo,int>
                  ((FMergeMeshInfo *)(this->SrcMeshInfo).AllocatorInstance.Data,
                   (this->SrcMeshInfo).ArrayNum);
        piVar3 = &(this->SrcMeshInfo).ArrayMax;
        *piVar18 = 0;
        if ((this->SrcMeshInfo).ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar3);
        }
        iVar24 = (this->SrcMeshList).ArrayNum;
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar24,&pTVar1->AllocatorInstance,piVar18,piVar3);
        memset((pTVar1->AllocatorInstance).Data + (longlong)iVar16 * 0x10,0,(longlong)iVar24 << 4);
        local_res8 = 0;
        if (0 < (this->SrcMeshList).ArrayNum) {
          local_148 = 0;
          local_res20 = 0;
          do {
            lVar28 = local_148;
            uVar23 = 0;
            if ((int)local_res8 < (this->SrcMeshList).ArrayNum) {
              uVar23 = ~local_res8 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            plVar20 = *(longlong **)((this->SrcMeshList).AllocatorInstance.Data + local_res20);
            if (plVar20 != (longlong *)0x0) {
              cVar12 = (**(code **)(*plVar20 + 0x470))(plVar20);
              if (cVar12 != '\0') {
                pUVar6 = this->MergeMesh;
                USkeletalMesh::WaitUntilAsyncPropertyReleased(pUVar6,HasVertexColors,ReadWrite);
                pUVar6->bHasVertexColors = '\x01';
              }
              uVar23 = 0;
              if ((int)local_res8 < (this->SrcMeshInfo).ArrayNum) {
                uVar23 = ~local_res8 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              pFVar27 = (this->SrcMeshInfo).AllocatorInstance.Data + lVar28;
              local_140 = pFVar27 + 8;
              local_138 = pFVar27;
              lVar26 = (**(code **)(*plVar20 + 800))(plVar20);
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,*(int *)(lVar26 + 8),(ForAnyElementType *)pFVar27,(int *)(pFVar27 + 8),
                         (int *)(pFVar27 + 0xc));
              uVar23 = 0;
              lVar26 = (**(code **)(*plVar20 + 800))(plVar20);
              if (0 < *(int *)(lVar26 + 8)) {
                local_res18 = 0;
                lVar26 = 0;
                do {
                  lVar28 = (**(code **)(*plVar20 + 800))();
                  uVar14 = 0;
                  if ((int)uVar23 < *(int *)(lVar28 + 0x28)) {
                    uVar14 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  iVar24 = -1;
                  FVar7 = *(FName *)(*(longlong *)(lVar28 + 0x20) + lVar26);
                  if ((FVar7 != (FName)0x0) &&
                     (piVar18 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                        *)&(this->NewRefSkeleton).FinalNameToIndexMap,FVar7),
                     piVar18 != (int *)0x0)) {
                    iVar24 = *piVar18;
                  }
                  iVar16 = 0;
                  if (iVar24 != -1) {
                    iVar16 = iVar24;
                  }
                  uVar14 = 0;
                  if ((int)uVar23 < *(int *)&local_140->field_0x0) {
                    uVar14 = ~uVar23 >> 0x1f;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  uVar23 = uVar23 + 1;
                  lVar26 = lVar26 + 0xc;
                  *(int *)(*(longlong *)&local_138->field_0x0 + local_res18) = iVar16;
                  local_res18 = local_res18 + 4;
                  lVar19 = (**(code **)(*plVar20 + 800))(plVar20);
                  lVar28 = local_148;
                } while ((int)uVar23 < *(int *)(lVar19 + 8));
              }
            }
            local_res8 = local_res8 + 1;
            local_res20 = local_res20 + 8;
            local_148 = lVar28 + 0x10;
          } while ((int)local_res8 < (this->SrcMeshList).ArrayNum);
        }
        local_178.Data = (FScriptContainerElement *)0x0;
        local_170[0] = 0;
        local_170[1] = 0;
        local_168.Data = (FScriptContainerElement *)0x0;
        local_160[0] = 0;
        local_160[1] = 0;
        local_158.Data = (FScriptContainerElement *)0x0;
        local_150[0] = 0;
        local_150[1] = 0;
        iVar24 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar15,&local_178,local_170,local_170 + 1);
        _Size = (size_t)iVar15;
        memset(local_178.Data + (longlong)iVar24 * 4,0,_Size * 4);
        iVar24 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar15,&local_168,local_160,local_160 + 1);
        memset(local_168.Data + (longlong)iVar24 * 4,0,_Size * 4);
        iVar24 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar15,&local_158,local_150,local_150 + 1);
        memset(local_158.Data + iVar24,0,_Size);
        local_res8 = 0;
        if (0 < (this->SrcMeshList).ArrayNum) {
          local_res10 = 0;
          do {
            uVar23 = 0;
            if ((int)local_res8 < (this->SrcMeshList).ArrayNum) {
              uVar23 = ~local_res8 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            plVar20 = (longlong *)
                      (**(code **)(**(longlong **)
                                     ((this->SrcMeshList).AllocatorInstance.Data + local_res10) +
                                  0x398))();
            uVar23 = 0;
            lVar28 = 0;
            if (0 < (longlong)_Size) {
              do {
                if ((-1 < (int)uVar23) && ((int)uVar23 < (int)plVar20[1])) {
                  uVar25 = ~uVar23 >> 0x1f;
                  uVar14 = 0;
                  if ((int)uVar23 < local_170[0]) {
                    uVar14 = uVar25;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  pFVar27 = local_178.Data + lVar28 * 4;
                  uVar14 = 0;
                  if ((int)uVar23 < (int)plVar20[1]) {
                    uVar14 = uVar25;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  uVar14 = *(uint *)(*(longlong *)(*plVar20 + lVar28 * 8) + 0xd8);
                  if (uVar14 < *(uint *)pFVar27) {
                    uVar14 = *(uint *)pFVar27;
                  }
                  *(uint *)pFVar27 = uVar14;
                  uVar14 = 0;
                  if ((int)uVar23 < (int)plVar20[1]) {
                    uVar14 = uVar25;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  uVar14 = 0;
                  if ((int)uVar23 < local_160[0]) {
                    uVar14 = uVar25;
                  }
                  uVar5 = *(uint *)(*(longlong *)(*plVar20 + lVar28 * 8) + 0x1bc);
                  if (uVar14 == 0) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar10) {
                      pcVar8 = (code *)swi(3);
                      uVar11 = (*pcVar8)();
                      return (bool)uVar11;
                    }
                  }
                  if (uVar5 < *(uint *)(local_168.Data + lVar28 * 4)) {
                    uVar5 = *(uint *)(local_168.Data + lVar28 * 4);
                  }
                  uVar14 = 0;
                  if ((int)uVar23 < local_160[0]) {
                    uVar14 = uVar25;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  *(uint *)(local_168.Data + lVar28 * 4) = uVar5;
                  uVar14 = 0;
                  if ((int)uVar23 < local_150[0]) {
                    uVar14 = uVar25;
                  }
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  FVar9.Data = local_158.Data;
                  uVar14 = 0;
                  if ((int)uVar23 < (int)plVar20[1]) {
                    uVar14 = uVar25;
                  }
                  FVar4 = local_158.Data[lVar28];
                  if ((uVar14 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  FVar9.Data[lVar28] =
                       (FScriptContainerElement)
                       ((byte)FVar4 | *(byte *)(*(longlong *)(*plVar20 + lVar28 * 8) + 0x1c0));
                }
                uVar23 = uVar23 + 1;
                lVar28 = lVar28 + 1;
              } while (lVar28 < (longlong)_Size);
            }
            local_res8 = local_res8 + 1;
            local_res10 = local_res10 + 8;
          } while ((int)local_res8 < (this->SrcMeshList).ArrayNum);
        }
        USkeletalMesh::AllocateResourceForRendering(this->MergeMesh);
        uVar23 = 0;
        if (0 < (longlong)_Size) {
          lVar28 = 0;
          do {
            lVar26 = (**(code **)(this->MergeMesh->_padding_ + 0x330))(this->MergeMesh,uVar23);
            if ((lVar26 == 0) || (-1 < *(char *)(lVar26 + 0x18))) {
              uVar14 = 0;
              if ((int)uVar23 < local_170[0]) {
                uVar14 = ~uVar23 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              iVar24 = *(int *)(local_178.Data + lVar28 * 4);
              if (iVar24 == 1) {
                GenerateLODModel<TGPUSkinVertexFloat16Uvs<1>_>(this,this->StripTopLODs + uVar23);
              }
              else if (iVar24 == 2) {
                GenerateLODModel<TGPUSkinVertexFloat16Uvs<2>_>(this,this->StripTopLODs + uVar23);
              }
              else if (iVar24 == 3) {
                GenerateLODModel<TGPUSkinVertexFloat16Uvs<3>_>(this,this->StripTopLODs + uVar23);
              }
              else {
                if (iVar24 != 4) {
                  iVar24 = 0xee;
                  goto LAB_148640b53;
                }
                GenerateLODModel<TGPUSkinVertexFloat16Uvs<4>_>(this,this->StripTopLODs + uVar23);
              }
            }
            else {
              uVar14 = 0;
              if ((int)uVar23 < local_170[0]) {
                uVar14 = ~uVar23 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              iVar24 = *(int *)(local_178.Data + lVar28 * 4);
              if (iVar24 == 1) {
                GenerateLODModel<TGPUSkinVertexFloat32Uvs<1>_>(this,this->StripTopLODs + uVar23);
              }
              else if (iVar24 == 2) {
                GenerateLODModel<TGPUSkinVertexFloat32Uvs<2>_>(this,this->StripTopLODs + uVar23);
              }
              else if (iVar24 == 3) {
                GenerateLODModel<TGPUSkinVertexFloat32Uvs<3>_>(this,this->StripTopLODs + uVar23);
              }
              else if (iVar24 == 4) {
                GenerateLODModel<TGPUSkinVertexFloat32Uvs<4>_>(this,this->StripTopLODs + uVar23);
              }
              else {
                iVar24 = 0xf2;
LAB_148640b53:
                bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                                    ,iVar24,L"Invalid number of UV sets.  Must be between 0 and 4");
                if (bVar10) {
                  pcVar8 = (code *)swi(3);
                  uVar11 = (*pcVar8)();
                  return (bool)uVar11;
                }
              }
            }
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 1;
          } while (lVar28 < (longlong)_Size);
        }
        uVar23 = 0;
        bVar10 = true;
        if (0 < (this->SrcMeshList).ArrayNum) {
          lVar28 = 0;
          do {
            uVar14 = 0;
            if ((int)uVar23 < (this->SrcMeshList).ArrayNum) {
              uVar14 = ~uVar23 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            pUVar6 = *(USkeletalMesh **)((this->SrcMeshList).AllocatorInstance.Data + lVar28);
            if (pUVar6 != (USkeletalMesh *)0x0) {
              this_00 = this->MergeMesh;
              if (bVar10) {
                pTVar21 = USkeletalMesh::GetImportedBounds(pUVar6,&local_130);
                USkeletalMesh::SetImportedBounds(this_00,pTVar21);
                bVar10 = false;
              }
              else {
                pTVar21 = USkeletalMesh::GetImportedBounds(this_00,&local_f8);
                pTVar22 = USkeletalMesh::GetImportedBounds(pUVar6,&local_c0);
                pTVar21 = UE::Math::TBoxSphereBounds<double,double>::operator+
                                    (pTVar21,&local_88,pTVar22);
                USkeletalMesh::SetImportedBounds(this_00,pTVar21);
              }
            }
            uVar23 = uVar23 + 1;
            lVar28 = lVar28 + 8;
          } while ((int)uVar23 < (this->SrcMeshList).ArrayNum);
        }
        pFVar17 = (ForAnyElementType *)(**(code **)(this->MergeMesh->_padding_ + 0x380))();
        iVar24 = *(int *)((longlong)&pFVar17[1].Data + 4);
        *(undefined4 *)&pFVar17[1].Data = 0;
        if (iVar24 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,0x10,0,pFVar17,0,(int *)((longlong)&pFVar17[1].Data + 4));
        }
        USkeletalMesh::CalculateInvRefMatrices(this->MergeMesh);
        plVar20 = &this->MergeMesh->_padding_;
        *(byte *)plVar20 = (byte)*plVar20 | 1;
        USkeletalMesh::InitResources(this->MergeMesh);
        if (local_158.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data);
        }
        if (local_168.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data);
        }
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data);
        }
        return true;
      }
    }
  }
  if (2 < (byte)LogSkeletalMesh._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSkeletalMesh);
  }
  return false;
}

// GenerateNewSectionArray @ 148641750

void __thiscall
FSkeletalMeshMerge::GenerateNewSectionArray
          (FSkeletalMeshMerge *this,
          TArray<FSkeletalMeshMerge::FNewSectionInfo,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  int *piVar1;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSkelMeshMergeSectionMapping,TSizedDefaultAllocator<32>_> *pTVar3;
  FSkelMeshMergeUVTransformMapping *pFVar4;
  void *pvVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  ushort *puVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType *pFVar25;
  uint uVar26;
  int iVar27;
  uint local_res20;
  undefined2 local_118 [2];
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  int local_104;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_100;
  longlong *local_f0;
  longlong local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_d0;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  int local_a8 [4];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  
  local_78 = FGPUBaseSkinVertexFactory::GetMaxGPUSkinBones((ITargetPlatform *)0x0);
  DestructItems<FSkeletalMeshMerge::FNewSectionInfo,int>
            ((FNewSectionInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  local_res20 = 0;
  if (0 < (this->SrcMeshList).ArrayNum) {
    local_98 = 0;
    do {
      lVar19 = local_98;
      local_114 = ~local_res20 >> 0x1f;
      uVar17 = 0;
      if ((int)local_res20 < (this->SrcMeshList).ArrayNum) {
        uVar17 = local_114;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar14 = *(longlong **)((this->SrcMeshList).AllocatorInstance.Data + lVar19 * 8);
      local_f0 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        plVar12 = (longlong *)(**(code **)(*plVar14 + 0x398))(plVar14);
        uVar17 = (int)plVar12[1] - 1;
        if (param_2 < (int)uVar17) {
          uVar17 = param_2;
        }
        uVar10 = 0;
        if ((int)uVar17 < (int)plVar12[1]) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar19 = *(longlong *)(*plVar12 + (longlong)(int)uVar17 * 8);
        local_88 = lVar19;
        local_70 = (**(code **)(*plVar14 + 0x330))(plVar14,uVar17);
        local_10c = 0;
        local_e8 = 0;
        if (0 < *(int *)(lVar19 + 0x18)) {
          uVar15 = (ulonglong)(int)local_res20;
          local_58 = uVar15 << 4;
          local_80 = uVar15;
          do {
            uVar10 = local_10c;
            uVar17 = local_114;
            uVar26 = (uint)uVar15;
            iVar27 = -1;
            local_104 = -1;
            local_110 = local_114;
            pTVar3 = this->ForceSectionMapping;
            iVar11 = pTVar3->ArrayNum;
            if (((iVar11 == (this->SrcMeshList).ArrayNum) && (-1 < (int)uVar26)) &&
               ((int)uVar26 < iVar11)) {
              if ((local_114 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 uVar26 = local_res20, bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((-1 < (int)uVar10) &&
                 (lVar19 = local_98 * 0x10,
                 (int)uVar10 < *(int *)((pTVar3->AllocatorInstance).Data + lVar19 + 8))) {
                pTVar3 = this->ForceSectionMapping;
                uVar9 = 0;
                if ((int)uVar26 < pTVar3->ArrayNum) {
                  uVar9 = uVar17;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar20 = (pTVar3->AllocatorInstance).Data + lVar19;
                uVar26 = 0;
                if ((int)uVar10 < *(int *)(pFVar20 + 8)) {
                  uVar26 = ~uVar10 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar27 = *(int *)(*(longlong *)pFVar20 + local_e8 * 4);
                local_104 = iVar27;
              }
            }
            lVar13 = local_88;
            lVar19 = local_e8;
            local_110 = uVar17;
            uVar26 = ~uVar10 >> 0x1f;
            uVar9 = 0;
            if ((int)uVar10 < *(int *)(local_88 + 0x18)) {
              uVar9 = uVar26;
            }
            local_108 = uVar26;
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar21 = (ushort *)(lVar19 * 0x118 + *(longlong *)(lVar13 + 0x10));
            local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            uVar9 = 0;
            if ((int)local_res20 < (this->SrcMeshInfo).ArrayNum) {
              uVar9 = uVar17;
            }
            local_100.ArrayNum = 0;
            local_100.ArrayMax = 0;
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            BoneMapToNewRefSkel((TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)
                                (puVar21 + 0x1c),
                                (TArray<int,TSizedDefaultAllocator<32>_> *)
                                ((this->SrcMeshInfo).AllocatorInstance.Data + local_58),&local_100);
            lVar19 = local_70;
            uVar9 = (uint)*puVar21;
            plVar14 = local_f0;
            if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(local_70 + 0x10))) {
              uVar18 = 0;
              if ((int)uVar10 < *(int *)(local_70 + 0x10)) {
                uVar18 = uVar26;
              }
              if ((uVar18 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              plVar14 = local_f0;
              if ((*(int *)(*(longlong *)(lVar19 + 8) + local_e8 * 4) != -1) &&
                 (lVar19 = (**(code **)(*local_f0 + 0x3c8))(local_f0), 0 < *(int *)(lVar19 + 8))) {
                lVar13 = (**(code **)(*plVar14 + 0x3c8))(plVar14);
                lVar19 = local_70;
                uVar18 = *(int *)(lVar13 + 8) - 1;
                uVar9 = 0;
                if ((int)uVar10 < *(int *)(local_70 + 0x10)) {
                  uVar9 = uVar26;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(int *)(*(longlong *)(lVar19 + 8) + local_e8 * 4) < (int)uVar18) {
                  uVar18 = *(uint *)(*(longlong *)(lVar19 + 8) + local_e8 * 4);
                }
                uVar9 = 0;
                if (0 < (int)uVar18) {
                  uVar9 = uVar18;
                }
              }
            }
            plVar14 = (longlong *)(**(code **)(*plVar14 + 0x3c8))();
            uVar10 = 0;
            if ((int)uVar9 < (int)plVar14[1]) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_a8[2] = 0;
            local_60 = (longlong *)((longlong)(int)uVar9 * 0x30 + *plVar14);
            local_90 = *local_60;
            iVar11 = param_1->ArrayNum;
            if (0 < iVar11) {
              local_68 = 0;
              do {
                lVar19 = local_68;
                uVar10 = local_a8[2];
                uVar17 = 0;
                if (local_a8[2] < iVar11) {
                  uVar17 = (uint)~local_a8[2] >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar20 = (param_1->AllocatorInstance).Data + lVar19;
                if (iVar27 == -1) {
                  if (local_90 == *(longlong *)&pFVar20[0x20].field_0x0) {
LAB_148641d71:
                    if ((*(int *)&pFVar20[8].field_0x0 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("NewSectionInfo.MergeSections.Num()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                                           ,0x164,L""), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    local_d0.ArrayNum = *(int *)&pFVar20[0x18].field_0x0;
                    lVar13 = (longlong)local_d0.ArrayNum;
                    pTVar2 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pFVar20 + 0x10);
                    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    pFVar24 = (pTVar2->AllocatorInstance).Data;
                    if (local_d0.ArrayNum == 0) {
                      local_d0.ArrayMax = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,local_d0.ArrayNum,0,&local_d0.AllocatorInstance,
                                 local_d0.ArrayNum,&local_d0.ArrayMax);
                      memcpy(local_d0.AllocatorInstance.Data,pFVar24,lVar13 * 2);
                    }
                    uVar22 = 0;
                    local_b0.Data = (FScriptContainerElement *)0x0;
                    local_a8[0] = 0;
                    local_a8[1] = 0;
                    UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_100.ArrayNum,&local_b0,local_a8,local_a8 + 1);
                    uVar15 = uVar22;
                    if (0 < local_100.ArrayNum) {
                      do {
                        uVar26 = (uint)uVar22;
                        uVar17 = 0;
                        if ((int)uVar26 < local_100.ArrayNum) {
                          uVar17 = ~uVar26 >> 0x1f;
                        }
                        if ((uVar17 == 0) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar11 = TArray<unsigned_short,TSizedDefaultAllocator<32>_>::
                                 AddUniqueImpl<unsigned_short_const_&>
                                           (&local_d0,
                                            (ushort *)
                                            (local_100.AllocatorInstance.Data +
                                            (longlong)(int)uVar26 * 2));
                        uVar17 = 0;
                        if ((int)uVar26 < local_a8[0]) {
                          uVar17 = ~uVar26 >> 0x1f;
                        }
                        if ((uVar17 == 0) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        uVar22 = (ulonglong)(uVar26 + 1);
                        *(short *)(local_b0.Data + uVar15) = (short)iVar11;
                        lVar19 = local_68;
                        uVar15 = uVar15 + 2;
                        iVar27 = local_104;
                        uVar10 = local_a8[2];
                      } while ((int)(uVar26 + 1) < local_100.ArrayNum);
                    }
                    if (local_d0.ArrayNum <= local_78) {
                      local_e0.Data = (FScriptContainerElement *)0x0;
                      local_d8 = 0;
                      pFVar4 = this->SectionUVTransforms;
                      if ((pFVar4 != (FSkelMeshMergeUVTransformMapping *)0x0) &&
                         ((int)local_res20 < (pFVar4->UVTransformsPerMesh).ArrayNum)) {
                        iVar11 = 0;
                        if (local_110 == 0) {
                          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar8) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          iVar11 = local_d8._4_4_;
                        }
                        pFVar24 = (pFVar4->UVTransformsPerMesh).AllocatorInstance.Data +
                                  local_98 * 0x10;
                        if ((FScriptContainerElement *)&local_e0 != pFVar24) {
                          iVar27 = *(int *)&pFVar24[8].field_0x0;
                          pvVar5 = *(void **)&pFVar24->field_0x0;
                          local_d8 = CONCAT44(local_d8._4_4_,iVar27);
                          if ((iVar27 == 0) && (iVar11 == 0)) {
                            local_d8 = 0;
                          }
                          else {
                            UE::Core::Private::
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x60,0x10,iVar27,iVar11,&local_e0,iVar27,
                                       (int *)((longlong)&local_d8 + 4));
                            if (iVar27 != 0) {
                              memcpy(local_e0.Data,pvVar5,(longlong)iVar27 * 0x60);
                            }
                          }
                        }
                      }
                      uVar17 = *(uint *)&pFVar20[8].field_0x0;
                      if (uVar17 == *(uint *)(pFVar20 + 0xc)) {
                        uVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x830,(ForAnyElementType *)pFVar20,
                                            (int *)(pFVar20 + 0xc));
                      }
                      *(uint *)&pFVar20[8].field_0x0 = uVar17 + 1;
                      uVar26 = 0;
                      if ((int)uVar17 < (int)(uVar17 + 1)) {
                        uVar26 = ~uVar17 >> 0x1f;
                      }
                      if ((uVar26 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      lVar19 = local_88;
                      plVar14 = (longlong *)
                                (*(longlong *)&pFVar20->field_0x0 + (longlong)(int)uVar17 * 0x30);
                      if (plVar14 == (longlong *)0x0) {
                        plVar14 = (longlong *)0x0;
                      }
                      else {
                        lVar13 = (longlong)(int)local_10c;
                        uVar17 = 0;
                        if ((int)local_10c < *(int *)(local_88 + 0x18)) {
                          uVar17 = local_108;
                        }
                        if ((uVar17 == 0) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar8)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        FVar7.Data = local_e0.Data;
                        lVar19 = *(longlong *)(lVar19 + 0x10);
                        pFVar25 = (ForAnyElementType *)(plVar14 + 4);
                        *plVar14 = (longlong)local_f0;
                        pFVar25->Data = (FScriptContainerElement *)0x0;
                        plVar14[1] = lVar13 * 0x118 + lVar19;
                        plVar14[2] = 0;
                        plVar14[3] = 0;
                        lVar19 = (longlong)(int)local_d8;
                        *(int *)(plVar14 + 5) = (int)local_d8;
                        if ((int)local_d8 == 0) {
                          *(int *)((longlong)plVar14 + 0x2c) = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x60,0x10,(int)local_d8,0,pFVar25,(int)local_d8,
                                     (int *)((longlong)plVar14 + 0x2c));
                          memcpy(pFVar25->Data,FVar7.Data,lVar19 * 0x60);
                        }
                      }
                      FVar7.Data = local_b0.Data;
                      pFVar25 = (ForAnyElementType *)(plVar14 + 2);
                      if (pFVar25 != &local_b0) {
                        iVar11 = local_a8[0];
                        lVar19 = (longlong)local_a8[0];
                        piVar1 = (int *)((longlong)plVar14 + 0x1c);
                        *(int *)(plVar14 + 3) = local_a8[0];
                        if ((local_a8[0] == 0) && (*piVar1 == 0)) {
                          *piVar1 = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (2,2,local_a8[0],*piVar1,pFVar25,local_a8[0],piVar1);
                          if (iVar11 != 0) {
                            memcpy(pFVar25->Data,FVar7.Data,lVar19 * 2);
                          }
                        }
                      }
                      iVar11 = local_d0.ArrayNum;
                      FVar7.Data = local_d0.AllocatorInstance.Data;
                      if (pTVar2 != &local_d0) {
                        lVar19 = (longlong)local_d0.ArrayNum;
                        pFVar24 = pFVar20 + 0x1c;
                        iVar27 = *(int *)pFVar24;
                        *(int *)&pFVar20[0x18].field_0x0 = local_d0.ArrayNum;
                        if ((local_d0.ArrayNum == 0) && (iVar27 == 0)) {
                          *(int *)pFVar24 = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (2,2,local_d0.ArrayNum,iVar27,(ForAnyElementType *)pTVar2,
                                     local_d0.ArrayNum,(int *)pFVar24);
                          if (iVar11 != 0) {
                            memcpy((pTVar2->AllocatorInstance).Data,FVar7.Data,lVar19 * 2);
                          }
                        }
                      }
                      if (local_e0.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_e0.Data);
                      }
                      if (local_b0.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_b0.Data);
                      }
                      if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_d0.AllocatorInstance.Data);
                      }
                      uVar17 = local_110;
                      uVar26 = local_108;
                      if (uVar10 != 0xffffffff) goto LAB_1486426c8;
                      break;
                    }
                    if (local_b0.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b0.Data);
                    }
                    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d0.AllocatorInstance.Data);
                    }
                  }
                }
                else if (iVar27 == *(int *)&pFVar20[0x28].field_0x0) goto LAB_148641d71;
                local_a8[2] = uVar10 + 1;
                local_68 = lVar19 + 0x48;
                iVar11 = param_1->ArrayNum;
                uVar17 = local_110;
                uVar26 = local_108;
              } while (local_a8[2] < iVar11);
            }
            plVar14 = local_60;
            uVar10 = param_1->ArrayNum;
            if (uVar10 == param_1->ArrayMax) {
              uVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,&param_1->AllocatorInstance,&param_1->ArrayMax);
            }
            uVar18 = 0;
            pFVar20 = (FScriptContainerElement *)0x0;
            param_1->ArrayNum = uVar10 + 1;
            uVar9 = uVar18;
            if ((int)uVar10 < (int)(uVar10 + 1)) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar7.Data = local_100.AllocatorInstance.Data;
            pFVar24 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48;
            pFVar23 = pFVar20;
            if (pFVar24 != (FScriptContainerElement *)0x0) {
              lVar19 = plVar14[1];
              *(undefined8 *)pFVar24 = 0;
              *(undefined8 *)(pFVar24 + 8) = 0;
              *(undefined8 *)(pFVar24 + 0x10) = 0;
              *(undefined8 *)(pFVar24 + 0x18) = 0;
              *(longlong *)(pFVar24 + 0x20) = local_90;
              *(int *)(pFVar24 + 0x28) = local_104;
              *(longlong *)(pFVar24 + 0x2c) = lVar19;
              lVar19 = plVar14[3];
              *(longlong *)(pFVar24 + 0x34) = plVar14[2];
              *(longlong *)(pFVar24 + 0x3c) = lVar19;
              *(int *)(pFVar24 + 0x44) = (int)plVar14[4];
              pFVar23 = pFVar24;
            }
            pTVar2 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(pFVar23 + 0x10);
            if (pTVar2 != &local_100) {
              iVar11 = local_100.ArrayNum;
              lVar19 = (longlong)local_100.ArrayNum;
              pFVar24 = pFVar23 + 0x1c;
              *(int *)(pFVar23 + 0x18) = local_100.ArrayNum;
              if ((local_100.ArrayNum == 0) && (*(int *)pFVar24 == 0)) {
                *(int *)pFVar24 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_100.ArrayNum,*(int *)pFVar24,(ForAnyElementType *)pTVar2,
                           local_100.ArrayNum,(int *)pFVar24);
                if (iVar11 != 0) {
                  memcpy((pTVar2->AllocatorInstance).Data,FVar7.Data,lVar19 * 2);
                }
              }
            }
            local_c0.Data = (FScriptContainerElement *)0x0;
            local_b8 = 0;
            pFVar4 = this->SectionUVTransforms;
            if ((pFVar4 != (FSkelMeshMergeUVTransformMapping *)0x0) &&
               ((int)local_res20 < (pFVar4->UVTransformsPerMesh).ArrayNum)) {
              pFVar24 = pFVar20;
              if (uVar17 == 0) {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar8) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar24 = (FScriptContainerElement *)(local_b8 >> 0x20);
              }
              pFVar16 = (pFVar4->UVTransformsPerMesh).AllocatorInstance.Data + local_98 * 0x10;
              if ((FScriptContainerElement *)&local_c0 != pFVar16) {
                iVar11 = *(int *)&pFVar16[8].field_0x0;
                pvVar5 = *(void **)&pFVar16->field_0x0;
                local_b8 = CONCAT44(local_b8._4_4_,iVar11);
                if ((iVar11 == 0) && ((int)pFVar24 == 0)) {
                  local_b8 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,0x10,iVar11,(int)pFVar24,&local_c0,iVar11,
                             (int *)((longlong)&local_b8 + 4));
                  if (iVar11 != 0) {
                    memcpy(local_c0.Data,pvVar5,(longlong)iVar11 * 0x60);
                  }
                }
              }
            }
            uVar17 = *(uint *)&pFVar23[8].field_0x0;
            if (uVar17 == *(uint *)(pFVar23 + 0xc)) {
              uVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
            }
            *(uint *)&pFVar23[8].field_0x0 = uVar17 + 1;
            uVar10 = uVar18;
            if ((int)uVar17 < (int)(uVar17 + 1)) {
              uVar10 = ~uVar17 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar19 = local_88;
            pFVar24 = (FScriptContainerElement *)
                      (*(longlong *)pFVar23 + (longlong)(int)uVar17 * 0x30);
            if (pFVar24 != (FScriptContainerElement *)0x0) {
              lVar13 = (longlong)(int)local_10c;
              uVar17 = uVar18;
              if ((int)local_10c < *(int *)(local_88 + 0x18)) {
                uVar17 = uVar26;
              }
              if ((uVar17 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar7.Data = local_c0.Data;
              lVar19 = *(longlong *)(lVar19 + 0x10);
              pFVar23 = pFVar24 + 0x20;
              *(longlong **)pFVar24 = local_f0;
              *(FScriptContainerElement **)pFVar23 = (FScriptContainerElement *)0x0;
              *(longlong *)(pFVar24 + 8) = lVar13 * 0x118 + lVar19;
              *(longlong *)(pFVar24 + 0x10) = 0;
              *(longlong *)(pFVar24 + 0x18) = 0;
              lVar19 = (longlong)(int)local_b8;
              *(int *)(pFVar24 + 0x28) = (int)local_b8;
              pFVar20 = pFVar24;
              if ((int)local_b8 == 0) {
                *(int *)(pFVar24 + 0x2c) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x60,0x10,(int)local_b8,0,(ForAnyElementType *)pFVar23,(int)local_b8,
                           (int *)(pFVar24 + 0x2c));
                    /* WARNING: Load size is inaccurate */
                memcpy(*pFVar23,FVar7.Data,lVar19 * 0x60);
              }
            }
            if (local_100.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum(local_100._8_8_ & 0xffffffff);
            }
            pFVar24 = pFVar20 + 0x1c;
            *(undefined4 *)(pFVar20 + 0x18) = 0;
            if (*(int *)pFVar24 != local_100.ArrayNum) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_100.ArrayNum,(ForAnyElementType *)(pFVar20 + 0x10),0,
                         (int *)pFVar24);
            }
            if (0 < local_100.ArrayNum) {
              do {
                local_118[0] = (undefined2)uVar18;
                if (((*(undefined2 **)(pFVar20 + 0x10) <= local_118) &&
                    (local_118 < *(undefined2 **)(pFVar20 + 0x10) + *(int *)pFVar24)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar11 = *(int *)(pFVar20 + 0x18);
                if (iVar11 == *(int *)pFVar24) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x202,(ForAnyElementType *)(pFVar20 + 0x10),(int *)pFVar24);
                }
                uVar18 = uVar18 + 1;
                *(int *)(pFVar20 + 0x18) = iVar11 + 1;
                *(undefined2 *)(*(longlong *)(pFVar20 + 0x10) + (longlong)iVar11 * 2) = local_118[0]
                ;
              } while ((int)uVar18 < local_100.ArrayNum);
            }
            if (local_c0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data);
            }
LAB_1486426c8:
            if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.AllocatorInstance.Data);
            }
            local_10c = local_10c + 1;
            local_e8 = local_e8 + 1;
            if (*(int *)(local_88 + 0x18) <= (int)local_10c) break;
            uVar15 = (ulonglong)local_res20;
          } while( true );
        }
      }
      local_res20 = local_res20 + 1;
      local_98 = local_98 + 1;
    } while ((int)local_res20 < (this->SrcMeshList).ArrayNum);
  }
  return;
}

// MergeBoneMap @ 14865a470

void __thiscall
FSkeletalMeshMerge::MergeBoneMap
          (FSkeletalMeshMerge *this,TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,param_3->ArrayNum,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
            );
  iVar4 = param_3->ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = TArray<unsigned_short,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<unsigned_short_const_&>
                        (param_1,(ushort *)
                                 ((param_3->AllocatorInstance).Data + (longlong)(int)uVar5 * 2));
      uVar3 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(short *)((param_2->AllocatorInstance).Data + lVar6) = (short)iVar4;
      lVar6 = lVar6 + 2;
      iVar4 = param_3->ArrayNum;
    } while ((int)uVar5 < iVar4);
  }
  return;
}

// MergeSkeleton @ 14865a5b0

void __thiscall
FSkeletalMeshMerge::MergeSkeleton
          (FSkeletalMeshMerge *this,TArray<FRefPoseOverride,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  USkeletalMesh *this_00;
  USkeleton *pUVar2;
  ForAnyElementType *pFVar3;
  
  USkeletalMesh::ReleaseResources(this->MergeMesh);
  FRenderCommandFence::Wait(&this->MergeMesh->ReleaseResourcesFence,false);
  pUVar2 = (USkeleton *)(**(code **)(this->MergeMesh->_padding_ + 0x408))();
  BuildReferenceSkeleton(&this->SrcMeshList,&this->NewRefSkeleton,pUVar2);
  this_00 = this->MergeMesh;
  USkeletalMesh::WaitUntilAsyncPropertyReleased(this_00,RefSkeleton,ReadWrite);
  FReferenceSkeleton::operator=(&this_00->RefSkeleton,&this->NewRefSkeleton);
  BuildSockets(this,&this->SrcMeshList);
  if (param_1 != (TArray<FRefPoseOverride,TSizedDefaultAllocator<32>_> *)0x0) {
    pUVar2 = (USkeleton *)(**(code **)(this->MergeMesh->_padding_ + 0x408))();
    OverrideReferenceSkeletonPose(param_1,&this->NewRefSkeleton,pUVar2);
    OverrideMergedSockets(this,param_1);
  }
  pFVar3 = (ForAnyElementType *)(**(code **)(this->MergeMesh->_padding_ + 0x380))();
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,pFVar3,0,piVar1);
  }
  USkeletalMesh::CalculateInvRefMatrices(this->MergeMesh);
  return;
}

// OverrideBoneSockets @ 14865aec0

void __thiscall
FSkeletalMeshMerge::OverrideBoneSockets
          (FSkeletalMeshMerge *this,FName *param_1,
          TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  uVar13 = 0;
  iVar1 = param_2->ArrayNum;
  if (0 < (longlong)iVar1) {
    lVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)((param_2->AllocatorInstance).Data + lVar12 * 8);
      if (*(FName *)(lVar3 + 0x30) == *param_1) {
        pTVar9 = USkeletalMesh::GetMeshOnlySocketList(this->MergeMesh);
        uVar10 = 0;
        lVar11 = 0;
        iVar2 = pTVar9->ArrayNum;
        if (0 < (longlong)iVar2) {
          do {
            uVar8 = 0;
            if ((int)uVar10 < pTVar9->ArrayNum) {
              uVar8 = ~uVar10 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar4 = *(longlong *)((pTVar9->AllocatorInstance).Data + lVar11 * 8);
            if (*(longlong *)(lVar4 + 0x28) == *(longlong *)(lVar3 + 0x28)) {
              *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
              uVar6 = *(undefined8 *)(lVar3 + 0x40);
              *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
              *(undefined8 *)(lVar4 + 0x40) = uVar6;
              *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
              uVar6 = *(undefined8 *)(lVar3 + 0x58);
              *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
              *(undefined8 *)(lVar4 + 0x58) = uVar6;
              *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar3 + 0x60);
              uVar6 = *(undefined8 *)(lVar3 + 0x70);
              *(undefined8 *)(lVar4 + 0x68) = *(undefined8 *)(lVar3 + 0x68);
              *(undefined8 *)(lVar4 + 0x70) = uVar6;
              *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar3 + 0x78);
            }
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + 1;
          } while (lVar11 < iVar2);
        }
      }
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar1);
  }
  return;
}

// OverrideMergedSockets @ 14865b090

void __thiscall
FSkeletalMeshMerge::OverrideMergedSockets
          (FSkeletalMeshMerge *this,TArray<FRefPoseOverride,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FReferenceSkeleton *this_00;
  longlong lVar7;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *pTVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_res18;
  uint local_res20;
  longlong local_98;
  FName local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  FScriptContainerElement *local_60;
  longlong local_58;
  
  local_68 = (longlong)param_1->ArrayNum;
  local_res20 = 0;
  if (0 < local_68) {
    local_70 = 0;
    do {
      lVar11 = local_70;
      uVar4 = 0;
      if ((int)local_res20 < param_1->ArrayNum) {
        uVar4 = ~local_res20 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar13 = (param_1->AllocatorInstance).Data + lVar11;
      local_60 = pFVar13;
      this_00 = (FReferenceSkeleton *)(**(code **)(**(longlong **)pFVar13 + 0x318))();
      lVar7 = (**(code **)(**(longlong **)pFVar13 + 0x400))();
      if (lVar7 == 0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1005666742682254265>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshMerge.cpp"
                           ,0x447,"PoseOverride.SkeletalMesh->GetSkeleton()");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        lVar7 = (**(code **)(**(longlong **)pFVar13 + 0x400))();
        pTVar8 = USkeletalMesh::GetMeshOnlySocketList(*(USkeletalMesh **)pFVar13);
        local_58 = (longlong)*(int *)(pFVar13 + 0x10);
        local_res18 = 0;
        local_98 = 0;
        if (0 < local_58) {
          local_78 = 0;
          do {
            lVar11 = local_78;
            uVar10 = ~local_res18 >> 0x1f;
            uVar4 = 0;
            if ((int)local_res18 < *(int *)(pFVar13 + 0x10)) {
              uVar4 = uVar10;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar12 = (FName *)(*(longlong *)(pFVar13 + 8) + lVar11);
            if ((*pFVar12 != (FName)0x0) &&
               (puVar9 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                 ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                         *)&this_00->FinalNameToIndexMap,*pFVar12),
               puVar9 != (uint *)0x0)) {
              uVar4 = *puVar9;
              if (uVar4 != 0xffffffff) {
                uVar5 = 0;
                if ((int)local_res18 < *(int *)(pFVar13 + 0x10)) {
                  uVar5 = uVar10;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(int *)(lVar11 + 8 + *(longlong *)(pFVar13 + 8)) != 1) {
                  OverrideBoneSockets(this,pFVar12,
                                      (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *)
                                      (lVar7 + 0x1a8));
                  OverrideBoneSockets(this,pFVar12,
                                      (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_> *)
                                      pTVar8);
                }
                uVar5 = 0;
                if ((int)local_res18 < *(int *)(pFVar13 + 0x10)) {
                  uVar5 = uVar10;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((*(int *)(lVar11 + 8 + *(longlong *)(pFVar13 + 8)) != 0) &&
                   (uVar10 = uVar4 + 1, (int)uVar10 < (this_00->RawRefBoneInfo).ArrayNum)) {
                  lVar14 = (longlong)(int)uVar10;
                  lVar15 = lVar14 * 0xc;
                  do {
                    if (((longlong)(int)uVar4 != -1) && ((int)uVar4 < lVar14)) {
                      uVar5 = FReferenceSkeleton::GetParentIndex(this_00,uVar10);
                      do {
                        iVar1 = (this_00->FinalRefBoneInfo).ArrayNum;
                        if (uVar5 == uVar4) {
                          uVar5 = 0;
                          if ((int)uVar10 < iVar1) {
                            uVar5 = ~uVar10 >> 0x1f;
                          }
                          if ((uVar5 == 0) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar3)) {
                            pcVar2 = (code *)swi(3);
                            (*pcVar2)();
                            return;
                          }
                          local_80 = *(FName *)((this_00->FinalRefBoneInfo).AllocatorInstance.Data +
                                               lVar15);
                          OverrideBoneSockets(this,&local_80,
                                              (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_>
                                               *)(lVar7 + 0x1a8));
                          OverrideBoneSockets(this,&local_80,
                                              (TArray<USkeletalMeshSocket_*,TSizedDefaultAllocator<32>_>
                                               *)pTVar8);
                          break;
                        }
                        uVar6 = 0;
                        if ((int)uVar5 < iVar1) {
                          uVar6 = ~uVar5 >> 0x1f;
                        }
                        if ((uVar6 == 0) &&
                           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar3)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        uVar5 = *(uint *)((this_00->FinalRefBoneInfo).AllocatorInstance.Data +
                                         (longlong)(int)uVar5 * 0xc + 8);
                      } while (uVar5 != 0xffffffff);
                    }
                    uVar10 = uVar10 + 1;
                    lVar14 = lVar14 + 1;
                    lVar15 = lVar15 + 0xc;
                    pFVar13 = local_60;
                    lVar11 = local_78;
                  } while ((int)uVar10 < (this_00->RawRefBoneInfo).ArrayNum);
                }
              }
            }
            local_res18 = local_res18 + 1;
            local_98 = local_98 + 1;
            local_78 = lVar11 + 0xc;
            lVar11 = local_70;
          } while (local_98 < local_58);
        }
      }
      local_70 = lVar11 + 0x18;
      local_res20 = local_res20 + 1;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
    local_68 = 0;
  }
  USkeletalMesh::RebuildSocketMap(this->MergeMesh);
  return;
}

// OverrideReferenceBonePose @ 14865b540

bool __cdecl
FSkeletalMeshMerge::OverrideReferenceBonePose
          (int param_1,FReferenceSkeleton *param_2,FReferenceSkeletonModifier *param_3)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  
  uVar6 = 0;
  if (param_1 < (param_2->FinalRefBoneInfo).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FVar2 = *(FName *)((param_2->FinalRefBoneInfo).AllocatorInstance.Data + (longlong)param_1 * 0xc);
  if (((FVar2 == (FName)0x0) ||
      (piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
                Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                      *)&param_3->RefSkeleton->FinalNameToIndexMap,FVar2), piVar7 == (int *)0x0)) ||
     (iVar1 = *piVar7, iVar1 == -1)) {
    return false;
  }
  uVar6 = 0;
  if (param_1 < (param_2->FinalRefBonePose).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  FReferenceSkeletonModifier::UpdateRefPoseTransform
            (param_3,iVar1,
             (TTransform<double> *)
             ((param_2->FinalRefBonePose).AllocatorInstance.Data + (longlong)param_1 * 0x60));
  return true;
}

// OverrideReferenceSkeletonPose @ 14865b670

void __cdecl
FSkeletalMeshMerge::OverrideReferenceSkeletonPose
          (TArray<FRefPoseOverride,TSizedDefaultAllocator<32>_> *param_1,FReferenceSkeleton *param_2
          ,USkeleton *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FReferenceSkeleton *this;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint local_res20;
  longlong local_78;
  longlong local_70;
  FReferenceSkeletonModifier local_60 [2];
  
  local_70 = (longlong)param_1->ArrayNum;
  local_res20 = 0;
  if (0 < local_70) {
    local_78 = 0;
    do {
      uVar11 = 0;
      if ((int)local_res20 < param_1->ArrayNum) {
        uVar11 = ~local_res20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (param_1->AllocatorInstance).Data + local_78;
      this = (FReferenceSkeleton *)(**(code **)(**(longlong **)pFVar12 + 0x318))();
      uVar11 = 0;
      iVar1 = *(int *)(pFVar12 + 0x10);
      lVar10 = 0;
      local_60[0].RefSkeleton = param_2;
      local_60[0].Skeleton = param_3;
      if (0 < (longlong)iVar1) {
        lVar9 = 0;
        do {
          uVar7 = ~uVar11 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar11 < *(int *)(pFVar12 + 0x10)) {
            uVar4 = uVar7;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((*(FName *)(lVar9 + *(longlong *)(pFVar12 + 8)) != (FName)0x0) &&
              (puVar6 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                        *)&this->FinalNameToIndexMap,
                                       *(FName *)(lVar9 + *(longlong *)(pFVar12 + 8))),
              puVar6 != (uint *)0x0)) && (uVar4 = *puVar6, uVar4 != 0xffffffff)) {
            uVar5 = 0;
            if ((int)uVar11 < *(int *)(pFVar12 + 0x10)) {
              uVar5 = uVar7;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)(lVar9 + 8 + *(longlong *)(pFVar12 + 8)) != 1) {
              OverrideReferenceBonePose(uVar4,this,local_60);
            }
            uVar5 = 0;
            if ((int)uVar11 < *(int *)(pFVar12 + 0x10)) {
              uVar5 = uVar7;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((*(int *)(lVar9 + 8 + *(longlong *)(pFVar12 + 8)) != 0) &&
               (iVar8 = uVar4 + 1, iVar8 < (this->RawRefBoneInfo).ArrayNum)) {
              do {
                if ((int)uVar4 < iVar8) {
                  uVar7 = FReferenceSkeleton::GetParentIndex(this,iVar8);
                  do {
                    if (uVar7 == uVar4) {
                      OverrideReferenceBonePose(iVar8,this,local_60);
                      break;
                    }
                    uVar5 = 0;
                    if ((int)uVar7 < (this->FinalRefBoneInfo).ArrayNum) {
                      uVar5 = ~uVar7 >> 0x1f;
                    }
                    if ((uVar5 == 0) &&
                       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar3)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    uVar7 = *(uint *)((this->FinalRefBoneInfo).AllocatorInstance.Data +
                                     (longlong)(int)uVar7 * 0xc + 8);
                  } while (uVar7 != 0xffffffff);
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < (this->RawRefBoneInfo).ArrayNum);
            }
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0xc;
        } while (lVar10 < iVar1);
      }
      FReferenceSkeletonModifier::~FReferenceSkeletonModifier(local_60);
      local_78 = local_78 + 0x18;
      local_res20 = local_res20 + 1;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
  }
  return;
}

// OverrideSocket @ 14865b9d0

void __thiscall
FSkeletalMeshMerge::OverrideSocket(FSkeletalMeshMerge *this,USkeletalMeshSocket *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TArray<TObjectPtr<USkeletalMeshSocket>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  
  pTVar7 = USkeletalMesh::GetMeshOnlySocketList(this->MergeMesh);
  uVar8 = 0;
  iVar1 = pTVar7->ArrayNum;
  if (0 < (longlong)iVar1) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < pTVar7->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((pTVar7->AllocatorInstance).Data + lVar9 * 8);
      if (*(FName *)(lVar2 + 0x28) == param_1->SocketName) {
        *(FName *)(lVar2 + 0x30) = param_1->BoneName;
        dVar4 = (param_1->RelativeLocation).field0_0x0._s_0.Y;
        *(double *)(lVar2 + 0x38) = (param_1->RelativeLocation).field0_0x0._s_0.X;
        *(double *)(lVar2 + 0x40) = dVar4;
        *(double *)(lVar2 + 0x48) = (param_1->RelativeLocation).field0_0x0._s_0.Z;
        dVar4 = (param_1->RelativeRotation).Yaw;
        *(double *)(lVar2 + 0x50) = (param_1->RelativeRotation).Pitch;
        *(double *)(lVar2 + 0x58) = dVar4;
        *(double *)(lVar2 + 0x60) = (param_1->RelativeRotation).Roll;
        dVar4 = (param_1->RelativeScale).field0_0x0._s_0.Y;
        *(double *)(lVar2 + 0x68) = (param_1->RelativeScale).field0_0x0._s_0.X;
        *(double *)(lVar2 + 0x70) = dVar4;
        *(double *)(lVar2 + 0x78) = (param_1->RelativeScale).field0_0x0._s_0.Z;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  return;
}

// ProcessMergeMesh @ 14865c2c0

bool __thiscall FSkeletalMeshMerge::ProcessMergeMesh(FSkeletalMeshMerge *this)

{
  int iVar1;
  USkeletalMesh *this_00;
  USkeletalMesh *this_01;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TBoxSphereBounds<double,double> *pTVar7;
  TBoxSphereBounds<double,double> *pTVar8;
  ForAnyElementType *pFVar9;
  uint uVar10;
  longlong lVar11;
  TBoxSphereBounds<double,double> local_f8;
  TBoxSphereBounds<double,double> local_c0;
  TBoxSphereBounds<double,double> local_88;
  TBoxSphereBounds<double,double> local_50;
  
  uVar10 = 0;
  bVar3 = true;
  if (0 < (this->SrcMeshList).ArrayNum) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->SrcMeshList).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      this_00 = *(USkeletalMesh **)((this->SrcMeshList).AllocatorInstance.Data + lVar11);
      if (this_00 != (USkeletalMesh *)0x0) {
        this_01 = this->MergeMesh;
        if (bVar3) {
          pTVar7 = USkeletalMesh::GetImportedBounds(this_00,&local_f8);
          USkeletalMesh::SetImportedBounds(this_01,pTVar7);
          bVar3 = false;
        }
        else {
          pTVar7 = USkeletalMesh::GetImportedBounds(this_01,&local_c0);
          pTVar8 = USkeletalMesh::GetImportedBounds(this_00,&local_88);
          pTVar7 = UE::Math::TBoxSphereBounds<double,double>::operator+(pTVar7,&local_50,pTVar8);
          USkeletalMesh::SetImportedBounds(this_01,pTVar7);
        }
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->SrcMeshList).ArrayNum);
  }
  pFVar9 = (ForAnyElementType *)(**(code **)(this->MergeMesh->_padding_ + 0x380))();
  iVar1 = *(int *)((longlong)&pFVar9[1].Data + 4);
  *(undefined4 *)&pFVar9[1].Data = 0;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,pFVar9,0,(int *)((longlong)&pFVar9[1].Data + 4));
  }
  USkeletalMesh::CalculateInvRefMatrices(this->MergeMesh);
  return true;
}

// ReleaseResources @ 14865f8a0

void __thiscall FSkeletalMeshMerge::ReleaseResources(FSkeletalMeshMerge *this,int param_1)

{
  int *piVar1;
  TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *this_00;
  ForAnyElementType *pFVar2;
  
  this_00 = (TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *)
            (**(code **)(this->MergeMesh->_padding_ + 0x398))();
  if (this_00 != (TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_> *)0x0) {
    TIndirectArray<FSkeletalMeshLODRenderData,TSizedDefaultAllocator<32>_>::Empty(this_00,param_1);
  }
  USkeletalMesh::SetNumSourceModels(this->MergeMesh,0);
  pFVar2 = (ForAnyElementType *)(**(code **)(this->MergeMesh->_padding_ + 0x3c8))();
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,pFVar2,0,piVar1);
  }
  return;
}

