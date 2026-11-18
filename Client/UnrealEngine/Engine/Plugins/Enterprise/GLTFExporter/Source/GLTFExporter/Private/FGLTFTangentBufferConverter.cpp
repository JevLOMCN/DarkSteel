// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 5

// ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal> @ 14e5bc110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonBufferView * __thiscall
FGLTFTangentBufferConverter::ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal>
          (FGLTFTangentBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

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
  ulonglong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 in_XMM1 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined4 local_res8;
  ForAnyElementType local_a0;
  int local_98 [28];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,1,uVar1,&local_a0,local_98,local_98 + 1);
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
      uVar24 = (ulonglong)*(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar22 * 4);
      auVar27 = pmovsxbd(in_XMM1,*(undefined4 *)((longlong)param_2 + uVar24 * 8));
      auVar30._0_4_ = (float)auVar27._0_4_ * fVar8;
      auVar30._4_4_ = (float)auVar27._4_4_ * fVar9;
      auVar30._8_4_ = (float)auVar27._8_4_ * fVar10;
      auVar30._12_4_ = (float)auVar27._12_4_ * fVar11;
      auVar27._8_4_ = auVar30._8_4_;
      auVar27._0_8_ = auVar30._8_8_;
      auVar27._12_4_ = auVar30._12_4_;
      in_XMM1._4_12_ = auVar27._4_12_;
      in_XMM1._0_4_ = auVar30._8_4_ * auVar30._8_4_;
      fVar28 = auVar30._4_4_ * auVar30._4_4_ + auVar30._0_4_ * auVar30._0_4_ + in_XMM1._0_4_;
      uVar25 = auVar30._4_4_;
      uVar29 = auVar30._0_4_;
      uVar26 = auVar30._8_4_;
      if (fVar28 != fVar4) {
        if (fVar3 <= fVar28) {
          fVar28 = fVar4 / SQRT(fVar28);
          uVar25 = fVar28 * auVar30._4_4_;
          uVar26 = fVar28 * auVar30._8_4_;
          in_XMM1 = ZEXT416((uint)uVar26);
          uVar29 = fVar28 * auVar30._0_4_;
        }
        else {
          in_XMM1._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          in_XMM1._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          in_XMM1._8_8_ = 0;
          uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      fVar31 = (float)uVar25 * fVar7;
      fVar28 = (float)uVar26 * fVar7;
      iVar14 = (int)ROUND((float)uVar29 * fVar6 + fVar5) >> 1;
      iVar23 = 0x7f;
      if (iVar14 < 0x7f) {
        iVar23 = iVar14;
      }
      iVar15 = (int)ROUND(fVar31 + fVar31 + fVar5) >> 1;
      iVar14 = 0x7f;
      if (iVar15 < 0x7f) {
        iVar14 = iVar15;
      }
      iVar16 = (int)ROUND(fVar28 + fVar28 + fVar5) >> 1;
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
      local_res8 = CONCAT13((*(char *)((longlong)param_2 + uVar24 * 8 + 7) >> 7 & 1U) + 0x7f,
                            CONCAT12(uVar20,CONCAT11(uVar19,uVar18)));
      uVar13 = 0;
      if ((int)uVar21 < local_98[0]) {
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
      *(undefined4 *)(local_a0.Data + lVar22 * 4) = local_res8;
    } while (uVar21 < uVar1);
  }
  pFVar17 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_a0.Data,
                       (longlong)local_98[0] << 2,ArrayBuffer,'\x04');
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return pFVar17;
}

// ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N> @ 14e5bcb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonBufferView * __thiscall
FGLTFTangentBufferConverter::ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N>
          (FGLTFTangentBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  FGLTFJsonBufferView *pFVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  ForAnyElementType local_a0;
  int local_98 [28];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,1,uVar2,&local_a0,local_98,local_98 + 1);
  fVar13 = __real_477ffe00;
  fVar12 = _UNK_150d565ec;
  fVar11 = _UNK_150d565e8;
  fVar10 = _UNK_150d565e4;
  fVar9 = ___xmm_38000100380001003800010038000100;
  fVar8 = __real_46fffe00;
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  fVar5 = __real_322bcc77;
  uVar23 = 0;
  if (uVar2 != 0) {
    do {
      uVar18 = 0;
      if ((int)uVar23 < (param_1->IndexMap).ArrayNum) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        pFVar22 = (FGLTFJsonBufferView *)(*pcVar3)();
        return pFVar22;
      }
      lVar24 = (longlong)(int)uVar23;
      uVar25 = (ulonglong)*(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar24 * 4);
      auVar28 = pmovsxwd(in_XMM1,*(undefined8 *)((longlong)param_2 + uVar25 * 0x10));
      auVar31._0_4_ = (float)auVar28._0_4_ * fVar9;
      auVar31._4_4_ = (float)auVar28._4_4_ * fVar10;
      auVar31._8_4_ = (float)auVar28._8_4_ * fVar11;
      auVar31._12_4_ = (float)auVar28._12_4_ * fVar12;
      auVar28._8_4_ = auVar31._8_4_;
      auVar28._0_8_ = auVar31._8_8_;
      auVar28._12_4_ = auVar31._12_4_;
      in_XMM1._4_12_ = auVar28._4_12_;
      in_XMM1._0_4_ = auVar31._8_4_ * auVar31._8_4_;
      fVar29 = auVar31._4_4_ * auVar31._4_4_ + auVar31._0_4_ * auVar31._0_4_ + in_XMM1._0_4_;
      uVar26 = auVar31._4_4_;
      uVar30 = auVar31._0_4_;
      uVar27 = auVar31._8_4_;
      if (fVar29 != fVar6) {
        if (fVar5 <= fVar29) {
          fVar29 = fVar6 / SQRT(fVar29);
          uVar26 = fVar29 * auVar31._4_4_;
          uVar27 = fVar29 * auVar31._8_4_;
          in_XMM1 = ZEXT416((uint)uVar27);
          uVar30 = fVar29 * auVar31._0_4_;
        }
        else {
          in_XMM1._4_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          in_XMM1._0_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          in_XMM1._8_8_ = 0;
          uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      fVar32 = (float)uVar26 * fVar8;
      fVar29 = (float)uVar27 * fVar8;
      iVar19 = (int)ROUND((float)uVar30 * fVar13 + fVar7) >> 1;
      iVar4 = 0x7fff;
      if (iVar19 < 0x7fff) {
        iVar4 = iVar19;
      }
      iVar20 = (int)ROUND(fVar32 + fVar32 + fVar7) >> 1;
      iVar19 = 0x7fff;
      if (iVar20 < 0x7fff) {
        iVar19 = iVar20;
      }
      iVar21 = (int)ROUND(fVar29 + fVar29 + fVar7) >> 1;
      iVar20 = 0x7fff;
      if (iVar21 < 0x7fff) {
        iVar20 = iVar21;
      }
      uVar15 = 0x8000;
      if (-0x8000 < iVar4) {
        uVar15 = (undefined2)iVar4;
      }
      uVar16 = 0x8000;
      if (-0x8000 < iVar20) {
        uVar16 = (short)iVar20;
      }
      uVar17 = 0x8000;
      if (-0x8000 < iVar19) {
        uVar17 = (short)iVar19;
      }
      sVar1 = *(short *)((longlong)param_2 + uVar25 * 0x10 + 0xe);
      uVar18 = 0;
      if ((int)uVar23 < local_98[0]) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar3 = (code *)swi(3);
        pFVar22 = (FGLTFJsonBufferView *)(*pcVar3)();
        return pFVar22;
      }
      uVar23 = uVar23 + 1;
      *(ulonglong *)(local_a0.Data + lVar24 * 8) =
           CONCAT26((sVar1 >> 0xf & 1U) + 0x7fff,CONCAT24(uVar17,CONCAT22(uVar16,uVar15)));
    } while (uVar23 < uVar2);
  }
  pFVar22 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_a0.Data,
                       (longlong)local_98[0] << 3,ArrayBuffer,'\x04');
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return pFVar22;
}

// ConvertBufferView<TGLTFVector4<float>,FPackedNormal> @ 14e5bcef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonBufferView * __thiscall
FGLTFTangentBufferConverter::ConvertBufferView<TGLTFVector4<float>,FPackedNormal>
          (FGLTFTangentBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FGLTFJsonBufferView *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  TVector<float>_u_0 local_78;
  ForAnyElementType local_68;
  int local_60 [2];
  TVector4<float>_u_0 local_58;
  TGLTFVector4<float>_u_0 local_48 [3];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,1,uVar1,&local_68,local_60,local_60 + 1);
  fVar6 = _UNK_15104007c;
  fVar5 = _UNK_151040078;
  fVar4 = _UNK_151040074;
  fVar3 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar13 = 0;
  if (uVar1 != 0) {
    do {
      uVar10 = 0;
      if ((int)uVar13 < (param_1->IndexMap).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
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
      lVar14 = (longlong)(int)uVar13;
      uVar12 = (ulonglong)*(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar14 * 4);
      auVar15 = pmovsxbd(in_XMM1,*(undefined4 *)((longlong)param_2 + uVar12 * 8 + 4));
      in_XMM1 = pmovsxbd(auVar15,*(undefined4 *)((longlong)param_2 + uVar12 * 8));
      local_58._s_0.X = (float)auVar15._0_4_ * fVar3;
      local_58._s_0.Y = (float)auVar15._4_4_ * fVar4;
      local_58._s_0.Z = (float)auVar15._8_4_ * fVar5;
      local_58._s_0.W = (float)auVar15._12_4_ * fVar6;
      local_78._s_0.Z = (float)in_XMM1._8_4_ * fVar5;
      local_78._0_8_ = CONCAT44((float)in_XMM1._4_4_ * fVar4,(float)in_XMM1._0_4_ * fVar3);
      FGLTFCoreUtilities::ConvertTangent
                ((TGLTFVector4<float> *)&local_48[0]._s_0,(TVector<float> *)&local_78._s_0,
                 (TVector4<float> *)&local_58._s_0);
      uVar8 = local_48[0]._8_8_;
      uVar7 = local_48[0]._0_8_;
      uVar10 = 0;
      if ((int)uVar13 < local_60[0]) {
        uVar10 = ~uVar13 >> 0x1f;
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
      uVar13 = uVar13 + 1;
      *(undefined8 *)(local_68.Data + lVar14 * 0x10) = uVar7;
      *(undefined8 *)(local_68.Data + lVar14 * 0x10 + 8) = uVar8;
    } while (uVar13 < uVar1);
  }
  pFVar11 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_68.Data,
                       (longlong)local_60[0] << 4,ArrayBuffer,'\x04');
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return pFVar11;
}

// ConvertBufferView<TGLTFVector4<float>,FPackedRGBA16N> @ 14e5bd100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGLTFJsonBufferView * __thiscall
FGLTFTangentBufferConverter::ConvertBufferView<TGLTFVector4<float>,FPackedRGBA16N>
          (FGLTFTangentBufferConverter *this,FGLTFMeshSection *param_1,void *param_2)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FGLTFJsonBufferView *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  TVector<float>_u_0 local_78;
  ForAnyElementType local_68;
  int local_60 [2];
  TVector4<float>_u_0 local_58;
  TGLTFVector4<float>_u_0 local_48 [3];
  
  uVar1 = (param_1->IndexMap).ArrayNum;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60[0] = 0;
  local_60[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,1,uVar1,&local_68,local_60,local_60 + 1);
  fVar6 = _UNK_150d565ec;
  fVar5 = _UNK_150d565e8;
  fVar4 = _UNK_150d565e4;
  fVar3 = ___xmm_38000100380001003800010038000100;
  uVar13 = 0;
  if (uVar1 != 0) {
    do {
      uVar10 = 0;
      if ((int)uVar13 < (param_1->IndexMap).ArrayNum) {
        uVar10 = ~uVar13 >> 0x1f;
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
      lVar14 = (longlong)(int)uVar13;
      uVar12 = (ulonglong)*(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar14 * 4);
      auVar15 = pmovsxwd(in_XMM1,*(undefined8 *)((longlong)param_2 + uVar12 * 0x10 + 8));
      in_XMM1 = pmovsxwd(auVar15,*(undefined8 *)((longlong)param_2 + uVar12 * 0x10));
      local_58._s_0.X = (float)auVar15._0_4_ * fVar3;
      local_58._s_0.Y = (float)auVar15._4_4_ * fVar4;
      local_58._s_0.Z = (float)auVar15._8_4_ * fVar5;
      local_58._s_0.W = (float)auVar15._12_4_ * fVar6;
      local_78._s_0.Z = (float)in_XMM1._8_4_ * fVar5;
      local_78._0_8_ = CONCAT44((float)in_XMM1._4_4_ * fVar4,(float)in_XMM1._0_4_ * fVar3);
      FGLTFCoreUtilities::ConvertTangent
                ((TGLTFVector4<float> *)&local_48[0]._s_0,(TVector<float> *)&local_78._s_0,
                 (TVector4<float> *)&local_58._s_0);
      uVar8 = local_48[0]._8_8_;
      uVar7 = local_48[0]._0_8_;
      uVar10 = 0;
      if ((int)uVar13 < local_60[0]) {
        uVar10 = ~uVar13 >> 0x1f;
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
      uVar13 = uVar13 + 1;
      *(undefined8 *)(local_68.Data + lVar14 * 0x10) = uVar7;
      *(undefined8 *)(local_68.Data + lVar14 * 0x10 + 8) = uVar8;
    } while (uVar13 < uVar1);
  }
  pFVar11 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_68.Data,
                       (longlong)local_60[0] << 4,ArrayBuffer,'\x04');
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return pFVar11;
}

// Convert @ 14e5ebd00

FGLTFJsonAccessor * __thiscall
FGLTFTangentBufferConverter::Convert
          (FGLTFTangentBufferConverter *this,FGLTFMeshSection *param_1,
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
          pFVar7 = ConvertBufferView<TGLTFVector4<float>,FPackedNormal>(this,param_1,pvVar6);
        }
        else {
          pFVar7 = ConvertBufferView<TGLTFVector4<float>,FPackedRGBA16N>(this,param_1,pvVar6);
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
        }
        else {
          EVar9 = Int16;
          pFVar7 = ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N>(this,param_1,pvVar6);
        }
      }
      pFVar8 = FGLTFJsonBuilder::AddAccessor(*(FGLTFJsonBuilder **)&this->field_0x58);
      pFVar8->ComponentType = EVar9;
      pFVar8->BufferView = pFVar7;
      iVar3 = (param_1->IndexMap).ArrayNum;
      pFVar8->bNormalized = bVar2;
      pFVar8->Count = iVar3;
      pFVar8->Type = Vec4;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)*plVar5)(plVar5,1);
    }
    return pFVar8;
  }
  return (FGLTFJsonAccessor *)0x0;
}

