// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 5

// ConvertBufferView<TGLTFVector3<float>,FPackedNormal> @ 14e5bade0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalBufferConverter::ConvertBufferView<TGLTFVector3<float>,FPackedNormal>
          (FGLTFNormalBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  FGLTFJsonBufferView *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float local_98;
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_> local_88 [7];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88[0].ArrayNum = 0;
  local_88[0].ArrayMax = 0;
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed(local_88,uVar1,Default);
  fVar8 = _UNK_15104007c;
  fVar7 = _UNK_151040078;
  fVar6 = _UNK_151040074;
  fVar5 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  uVar12 = 0;
  if (uVar1 != 0) {
    do {
      uVar10 = 0;
      if ((int)uVar12 < (param_1->IndexMap).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar11;
      }
      lVar13 = (longlong)(int)uVar12;
      auVar14 = pmovsxbd(in_XMM1,*(undefined4 *)
                                  ((longlong)param_2 +
                                  (ulonglong)
                                  *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar13 * 4)
                                  * 8 + 4));
      local_98 = (float)auVar14._0_4_ * fVar5;
      fVar15 = (float)auVar14._4_4_ * fVar6;
      uVar16 = (float)auVar14._8_4_ * fVar7;
      fVar17 = (float)auVar14._12_4_ * fVar8;
      auVar14._4_4_ = fVar17;
      auVar14._0_4_ = uVar16;
      auVar14._8_4_ = uVar16;
      auVar14._12_4_ = fVar17;
      in_XMM1._4_12_ = auVar14._4_12_;
      in_XMM1._0_4_ = (float)uVar16 * (float)uVar16;
      fVar17 = fVar15 * fVar15 + local_98 * local_98 + in_XMM1._0_4_;
      if (fVar17 != fVar4) {
        if (fVar3 <= fVar17) {
          in_XMM1._0_4_ = SQRT(fVar17);
          fVar17 = fVar4 / in_XMM1._0_4_;
          fVar15 = fVar17 * fVar15;
          local_98 = fVar17 * local_98;
          uVar16 = fVar17 * (float)uVar16;
        }
        else {
          in_XMM1._8_8_ = 0;
          in_XMM1._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar15 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          local_98 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      uVar10 = 0;
      if ((int)uVar12 < local_88[0].ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar11;
      }
      uVar12 = uVar12 + 1;
      *(float *)(local_88[0].AllocatorInstance.Data + lVar13 * 0xc) = local_98;
      *(undefined4 *)(local_88[0].AllocatorInstance.Data + lVar13 * 0xc + 4) = uVar16;
      *(float *)(local_88[0].AllocatorInstance.Data + lVar13 * 0xc + 8) = fVar15;
    } while (uVar12 < uVar1);
  }
  pFVar11 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_88[0].AllocatorInstance.Data,
                       (longlong)local_88[0].ArrayNum * 0xc,ArrayBuffer,'\x04');
  if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].AllocatorInstance.Data);
  }
  return pFVar11;
}

// ConvertBufferView<TGLTFVector3<float>,FPackedRGBA16N> @ 14e5bb440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalBufferConverter::ConvertBufferView<TGLTFVector3<float>,FPackedRGBA16N>
          (FGLTFNormalBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  FGLTFJsonBufferView *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float local_98;
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_> local_88 [7];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88[0].ArrayNum = 0;
  local_88[0].ArrayMax = 0;
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed(local_88,uVar1,Default);
  fVar8 = _UNK_150d565ec;
  fVar7 = _UNK_150d565e8;
  fVar6 = _UNK_150d565e4;
  fVar5 = ___xmm_38000100380001003800010038000100;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  uVar12 = 0;
  if (uVar1 != 0) {
    do {
      uVar10 = 0;
      if ((int)uVar12 < (param_1->IndexMap).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar11;
      }
      lVar13 = (longlong)(int)uVar12;
      auVar14 = pmovsxwd(in_XMM1,*(undefined8 *)
                                  ((longlong)param_2 +
                                  (ulonglong)
                                  *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar13 * 4)
                                  * 0x10 + 8));
      local_98 = (float)auVar14._0_4_ * fVar5;
      fVar15 = (float)auVar14._4_4_ * fVar6;
      uVar16 = (float)auVar14._8_4_ * fVar7;
      fVar17 = (float)auVar14._12_4_ * fVar8;
      auVar14._4_4_ = fVar17;
      auVar14._0_4_ = uVar16;
      auVar14._8_4_ = uVar16;
      auVar14._12_4_ = fVar17;
      in_XMM1._4_12_ = auVar14._4_12_;
      in_XMM1._0_4_ = (float)uVar16 * (float)uVar16;
      fVar17 = fVar15 * fVar15 + local_98 * local_98 + in_XMM1._0_4_;
      if (fVar17 != fVar4) {
        if (fVar3 <= fVar17) {
          in_XMM1._0_4_ = SQRT(fVar17);
          fVar17 = fVar4 / in_XMM1._0_4_;
          fVar15 = fVar17 * fVar15;
          local_98 = fVar17 * local_98;
          uVar16 = fVar17 * (float)uVar16;
        }
        else {
          in_XMM1._8_8_ = 0;
          in_XMM1._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          fVar15 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20)
          ;
          local_98 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      uVar10 = 0;
      if ((int)uVar12 < local_88[0].ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar11 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar11;
      }
      uVar12 = uVar12 + 1;
      *(float *)(local_88[0].AllocatorInstance.Data + lVar13 * 0xc) = local_98;
      *(undefined4 *)(local_88[0].AllocatorInstance.Data + lVar13 * 0xc + 4) = uVar16;
      *(float *)(local_88[0].AllocatorInstance.Data + lVar13 * 0xc + 8) = fVar15;
    } while (uVar12 < uVar1);
  }
  pFVar11 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_88[0].AllocatorInstance.Data,
                       (longlong)local_88[0].ArrayNum * 0xc,ArrayBuffer,'\x04');
  if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].AllocatorInstance.Data);
  }
  return pFVar11;
}

// ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal> @ 14e5bbab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalBufferConverter::ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal>
          (FGLTFNormalBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  FGLTFJsonBufferView *pFVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 in_XMM1 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined4 local_res8;
  TArray<TGLTFVector4<signed_char>,TSizedDefaultAllocator<32>_> local_a0 [7];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  local_a0[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0[0].ArrayNum = 0;
  local_a0[0].ArrayMax = 0;
  TArray<TGLTFVector4<signed_char>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (local_a0,uVar1,Default);
  fVar11 = _UNK_15104007c;
  fVar10 = _UNK_151040078;
  fVar9 = _UNK_151040074;
  fVar8 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar7 = __real_42fe0000;
  fVar6 = __real_437e0000;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  uVar21 = 0;
  if (uVar1 != 0) {
    do {
      uVar13 = 0;
      if ((int)uVar21 < (param_1->IndexMap).ArrayNum) {
        uVar13 = ~uVar21 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar17;
      }
      lVar22 = (longlong)(int)uVar21;
      auVar26 = pmovsxbd(in_XMM1,*(undefined4 *)
                                  ((longlong)param_2 +
                                  (ulonglong)
                                  *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar22 * 4)
                                  * 8 + 4));
      auVar29._0_4_ = (float)auVar26._0_4_ * fVar8;
      auVar29._4_4_ = (float)auVar26._4_4_ * fVar9;
      auVar29._8_4_ = (float)auVar26._8_4_ * fVar10;
      auVar29._12_4_ = (float)auVar26._12_4_ * fVar11;
      auVar26._8_4_ = auVar29._8_4_;
      auVar26._0_8_ = auVar29._8_8_;
      auVar26._12_4_ = auVar29._12_4_;
      in_XMM1._4_12_ = auVar26._4_12_;
      in_XMM1._0_4_ = auVar29._8_4_ * auVar29._8_4_;
      fVar27 = auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_ + in_XMM1._0_4_;
      uVar24 = auVar29._4_4_;
      uVar28 = auVar29._0_4_;
      uVar25 = auVar29._8_4_;
      if (fVar27 != fVar4) {
        if (fVar3 <= fVar27) {
          fVar27 = fVar4 / SQRT(fVar27);
          uVar24 = fVar27 * auVar29._4_4_;
          uVar25 = fVar27 * auVar29._8_4_;
          in_XMM1 = ZEXT416((uint)uVar25);
          uVar28 = fVar27 * auVar29._0_4_;
        }
        else {
          in_XMM1._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          in_XMM1._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          in_XMM1._8_8_ = 0;
          uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      fVar30 = (float)uVar24 * fVar7;
      fVar27 = (float)uVar25 * fVar7;
      iVar14 = (int)ROUND((float)uVar28 * fVar6 + fVar5) >> 1;
      iVar23 = 0x7f;
      if (iVar14 < 0x7f) {
        iVar23 = iVar14;
      }
      iVar15 = (int)ROUND(fVar30 + fVar30 + fVar5) >> 1;
      iVar14 = 0x7f;
      if (iVar15 < 0x7f) {
        iVar14 = iVar15;
      }
      iVar16 = (int)ROUND(fVar27 + fVar27 + fVar5) >> 1;
      iVar15 = 0x7f;
      if (iVar16 < 0x7f) {
        iVar15 = iVar16;
      }
      uVar18 = 0x80;
      if (-0x80 < iVar23) {
        uVar18 = (char)iVar23;
      }
      uVar19 = 0x80;
      if (-0x80 < iVar15) {
        uVar19 = (char)iVar15;
      }
      uVar20 = 0x80;
      if (-0x80 < iVar14) {
        uVar20 = (char)iVar14;
      }
      local_res8 = (uint)CONCAT12(uVar20,CONCAT11(uVar19,uVar18));
      uVar13 = 0;
      if ((int)uVar21 < local_a0[0].ArrayNum) {
        uVar13 = ~uVar21 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar17;
      }
      uVar21 = uVar21 + 1;
      *(uint *)(local_a0[0].AllocatorInstance.Data + lVar22 * 4) = local_res8;
    } while (uVar21 < uVar1);
  }
  pFVar17 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_a0[0].AllocatorInstance.Data,
                       (longlong)local_a0[0].ArrayNum << 2,ArrayBuffer,'\x04');
  if (local_a0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0[0].AllocatorInstance.Data);
  }
  return pFVar17;
}

// ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N> @ 14e5bc4c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalBufferConverter::ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N>
          (FGLTFNormalBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FGLTFJsonBufferView *pFVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 in_XMM1 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  float fVar30;
  TArray<TGLTFVector4<short>,TSizedDefaultAllocator<32>_> local_a0 [7];
  
  uVar21 = 0;
  uVar1 = (param_1->IndexMap).ArrayNum;
  local_a0[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0[0].ArrayNum = 0;
  local_a0[0].ArrayMax = 0;
  TArray<TGLTFVector4<short>,TSizedDefaultAllocator<32>_>::SetNumZeroed(local_a0,uVar1,Default);
  fVar11 = __real_477ffe00;
  fVar10 = _UNK_150d565ec;
  fVar9 = _UNK_150d565e8;
  fVar8 = _UNK_150d565e4;
  fVar7 = ___xmm_38000100380001003800010038000100;
  fVar6 = __real_46fffe00;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  if (uVar1 != 0) {
    do {
      uVar16 = 0;
      if ((int)uVar21 < (param_1->IndexMap).ArrayNum) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        pFVar20 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar20;
      }
      lVar22 = (longlong)(int)uVar21;
      auVar26 = pmovsxwd(in_XMM1,*(undefined8 *)
                                  ((longlong)param_2 +
                                  (ulonglong)
                                  *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar22 * 4)
                                  * 0x10 + 8));
      auVar29._0_4_ = (float)auVar26._0_4_ * fVar7;
      auVar29._4_4_ = (float)auVar26._4_4_ * fVar8;
      auVar29._8_4_ = (float)auVar26._8_4_ * fVar9;
      auVar29._12_4_ = (float)auVar26._12_4_ * fVar10;
      auVar26._8_4_ = auVar29._8_4_;
      auVar26._0_8_ = auVar29._8_8_;
      auVar26._12_4_ = auVar29._12_4_;
      in_XMM1._4_12_ = auVar26._4_12_;
      in_XMM1._0_4_ = auVar29._8_4_ * auVar29._8_4_;
      fVar27 = auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_ + in_XMM1._0_4_;
      uVar24 = auVar29._4_4_;
      uVar28 = auVar29._0_4_;
      uVar25 = auVar29._8_4_;
      if (fVar27 != fVar4) {
        if (fVar3 <= fVar27) {
          fVar27 = fVar4 / SQRT(fVar27);
          uVar24 = fVar27 * auVar29._4_4_;
          uVar25 = fVar27 * auVar29._8_4_;
          in_XMM1 = ZEXT416((uint)uVar25);
          uVar28 = fVar27 * auVar29._0_4_;
        }
        else {
          in_XMM1._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          in_XMM1._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          in_XMM1._8_8_ = 0;
          uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      fVar30 = (float)uVar24 * fVar6;
      fVar27 = (float)uVar25 * fVar6;
      iVar17 = (int)ROUND((float)uVar28 * fVar11 + fVar5) >> 1;
      iVar23 = 0x7fff;
      if (iVar17 < 0x7fff) {
        iVar23 = iVar17;
      }
      iVar18 = (int)ROUND(fVar30 + fVar30 + fVar5) >> 1;
      iVar17 = 0x7fff;
      if (iVar18 < 0x7fff) {
        iVar17 = iVar18;
      }
      iVar19 = (int)ROUND(fVar27 + fVar27 + fVar5) >> 1;
      iVar18 = 0x7fff;
      if (iVar19 < 0x7fff) {
        iVar18 = iVar19;
      }
      uVar13 = 0x8000;
      if (-0x8000 < iVar23) {
        uVar13 = (short)iVar23;
      }
      uVar14 = 0x8000;
      if (-0x8000 < iVar18) {
        uVar14 = (short)iVar18;
      }
      uVar15 = 0x8000;
      if (-0x8000 < iVar17) {
        uVar15 = (short)iVar17;
      }
      uVar16 = 0;
      if ((int)uVar21 < local_a0[0].ArrayNum) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar2 = (code *)swi(3);
        pFVar20 = (FGLTFJsonBufferView *)(*pcVar2)();
        return pFVar20;
      }
      uVar21 = uVar21 + 1;
      *(ulonglong *)(local_a0[0].AllocatorInstance.Data + lVar22 * 8) =
           (ulonglong)CONCAT24(uVar15,CONCAT22(uVar14,uVar13));
    } while (uVar21 < uVar1);
  }
  pFVar20 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_a0[0].AllocatorInstance.Data,
                       (longlong)local_a0[0].ArrayNum << 3,ArrayBuffer,'\x04');
  if (local_a0[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0[0].AllocatorInstance.Data);
  }
  return pFVar20;
}

// Convert @ 14e5e84c0

FGLTFJsonAccessor * __thiscall
FGLTFNormalBufferConverter::Convert
          (FGLTFNormalBufferConverter *this,FGLTFMeshSection *param_1,
          FStaticMeshVertexBuffer *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  FGLTFJsonBufferView *pFVar7;
  FGLTFJsonAccessor *pFVar8;
  EGLTFJsonComponentType EVar9;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  EGLTFJsonExtension local_res20 [2];
  
  if ((param_2 != (FStaticMeshVertexBuffer *)0x0) && (param_2->NumVertices != 0)) {
    IGLTFBufferAdapter::GetTangents((FStaticMeshVertexBuffer *)&local_res18);
    plVar5 = (longlong *)CONCAT44(uStackX_1c,local_res18);
    pvVar6 = (void *)(**(code **)(*plVar5 + 8))(plVar5);
    if (pvVar6 == (void *)0x0) {
      pFVar8 = (FGLTFJsonAccessor *)0x0;
    }
    else {
      bVar1 = param_2->bUseHighPrecisionTangentBasis;
      lVar4 = *(longlong *)&this->field_0x58;
      bVar2 = *(bool *)(*(longlong *)(lVar4 + 0x18) + 0xa0);
      if (bVar2 == false) {
        EVar9 = Float;
        if (bVar1 == false) {
          pFVar7 = ConvertBufferView<TGLTFVector3<float>,FPackedNormal>(this,param_1,pvVar6);
        }
        else {
          pFVar7 = ConvertBufferView<TGLTFVector3<float>,FPackedRGBA16N>(this,param_1,pvVar6);
        }
      }
      else {
        local_res18 = 0xc;
        TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
        ::Emplace<enum_EGLTFJsonExtension_const_&>
                  ((void *)(lVar4 + 0x158),local_res20,(bool *)&local_res18);
        TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>
        ::Emplace<enum_EGLTFJsonExtension_const_&>
                  ((void *)(lVar4 + 0x1a8),local_res20,(bool *)&local_res18);
        if (bVar1 == false) {
          EVar9 = Int8;
          pFVar7 = ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal>(this,param_1,pvVar6);
          pFVar7->ByteStride = 4;
        }
        else {
          EVar9 = Int16;
          pFVar7 = ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N>(this,param_1,pvVar6);
          pFVar7->ByteStride = 8;
        }
      }
      pFVar8 = FGLTFJsonBuilder::AddAccessor(*(FGLTFJsonBuilder **)&this->field_0x58);
      pFVar8->ComponentType = EVar9;
      pFVar8->BufferView = pFVar7;
      iVar3 = (param_1->IndexMap).ArrayNum;
      pFVar8->bNormalized = bVar2;
      pFVar8->Count = iVar3;
      pFVar8->Type = Vec3;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)*plVar5)(plVar5,1);
    }
    return pFVar8;
  }
  return (FGLTFJsonAccessor *)0x0;
}

