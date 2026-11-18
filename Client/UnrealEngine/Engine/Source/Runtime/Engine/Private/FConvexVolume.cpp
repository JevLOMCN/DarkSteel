// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ClipPolygon @ 1479b83d0

bool __thiscall FConvexVolume::ClipPolygon(FConvexVolume *this,FPoly *param_1)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<UE::Math::TPlane<double>_> FVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector<float>_u_0 local_38;
  TVector<float>_u_0 local_2c [3];
  
  uVar3 = __xmm_80000000800000008000000080000000;
  iVar7 = (this->Planes).ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
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
      FVar1 = (this->Planes).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<UE::Math::TPlane<double>_>)this;
      if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar8 = FVar1;
      }
      fVar11 = (float)*(double *)(lVar10 + 0x18 + (longlong)FVar8);
      fVar12 = (float)*(double *)(lVar10 + 8 + (longlong)FVar8);
      fVar13 = (float)*(double *)(lVar10 + 0x10 + (longlong)FVar8);
      local_38._s_0.X = fVar11 * (float)*(double *)(lVar10 + (longlong)FVar8);
      local_2c[0]._0_4_ = (uint)(float)*(double *)(lVar10 + (longlong)FVar8) ^ uVar3;
      local_38._s_0.Y = fVar11 * fVar12;
      local_2c[0]._4_4_ = (uint)fVar12 ^ uVar3;
      local_38._s_0.Z = fVar11 * fVar13;
      local_2c[0]._8_4_ = (uint)fVar13 ^ uVar3;
      iVar7 = FPoly::Split(param_1,(TVector<float> *)&local_2c[0]._s_0,
                           (TVector<float> *)&local_38._s_0);
      if (iVar7 == 0) {
        return false;
      }
      iVar7 = (this->Planes).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((int)uVar9 < iVar7);
  }
  return true;
}

// DistanceTo @ 1479bd360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall FConvexVolume::DistanceTo(FConvexVolume *this,TVector<double> *param_1)

{
  double dVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  ForElementType<UE::Math::TPlane<double>_> FVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  auVar12 = *(undefined1 (*) [16])&param_1->field0_0x0;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  FVar9 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar9 = (ForElementType<UE::Math::TPlane<double>_>)&this->PermutedPlanes;
  }
  dVar7 = auVar12._0_8_;
  iVar2 = (this->PermutedPlanes).ArrayNum;
  dVar6 = auVar12._8_8_;
  auVar20._0_8_ = (double)___xmm_ff7fc99eff7fc99eff7fc99eff7fc99e;
  auVar20._8_8_ = (double)_UNK_151820684;
  auVar16._0_8_ = (double)_UNK_151820688;
  auVar16._8_8_ = (double)_UNK_15182068c;
  if (0 < iVar2) {
    uVar8 = (ulonglong)((iVar2 - 1U >> 2) + 1);
    do {
      auVar18._8_4_ = auVar12._0_4_;
      auVar18._0_8_ = dVar7;
      auVar18._12_4_ = auVar12._4_4_;
      auVar10._8_4_ = auVar12._8_4_;
      auVar10._0_8_ = dVar6;
      auVar10._12_4_ = auVar12._12_4_;
      auVar14._8_4_ = auVar12._0_4_;
      auVar14._0_8_ = dVar7;
      auVar14._12_4_ = auVar12._4_4_;
      auVar11._8_4_ = auVar12._8_4_;
      auVar11._0_8_ = dVar6;
      auVar11._12_4_ = auVar12._12_4_;
      auVar19._0_8_ =
           (dVar7 * *(double *)FVar9 + dVar6 * *(double *)((longlong)FVar9 + 0x20) +
           dVar1 * *(double *)((longlong)FVar9 + 0x40)) - *(double *)((longlong)FVar9 + 0x60);
      auVar19._8_8_ =
           (auVar18._8_8_ * *(double *)((longlong)FVar9 + 8) +
            auVar10._8_8_ * *(double *)((longlong)FVar9 + 0x28) +
           dVar1 * *(double *)((longlong)FVar9 + 0x48)) - *(double *)((longlong)FVar9 + 0x68);
      auVar17._8_4_ = SUB84(auVar20._8_8_,0);
      auVar17._0_8_ = auVar20._0_8_;
      auVar17._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
      auVar20 = maxpd(auVar19,auVar17);
      auVar15._0_8_ =
           (dVar7 * *(double *)((longlong)FVar9 + 0x10) +
            dVar6 * *(double *)((longlong)FVar9 + 0x30) +
           dVar1 * *(double *)((longlong)FVar9 + 0x50)) - *(double *)((longlong)FVar9 + 0x70);
      auVar15._8_8_ =
           (auVar14._8_8_ * *(double *)((longlong)FVar9 + 0x18) +
            auVar11._8_8_ * *(double *)((longlong)FVar9 + 0x38) +
           dVar1 * *(double *)((longlong)FVar9 + 0x58)) - *(double *)((longlong)FVar9 + 0x78);
      FVar9 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar9 + 0x80);
      auVar13._8_4_ = SUB84(auVar16._8_8_,0);
      auVar13._0_8_ = auVar16._0_8_;
      auVar13._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
      auVar16 = maxpd(auVar15,auVar13);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  auVar4._8_4_ = auVar20._0_4_;
  auVar4._0_8_ = auVar16._8_8_;
  auVar4._12_4_ = auVar20._4_4_;
  auVar12 = maxpd(auVar20,auVar4);
  auVar13 = maxpd(auVar12,auVar16);
  auVar12._8_4_ = auVar16._0_4_;
  auVar12._0_8_ = auVar20._8_8_;
  auVar12._12_4_ = auVar16._4_4_;
  auVar17 = maxpd(auVar16,auVar12);
  auVar3._8_4_ = auVar16._0_4_;
  auVar3._0_8_ = auVar20._8_8_;
  auVar3._12_4_ = auVar16._4_4_;
  auVar12 = maxpd(auVar13,auVar3);
  auVar13 = maxpd(auVar17,auVar20);
  auVar5._8_4_ = auVar20._0_4_;
  auVar5._0_8_ = auVar16._8_8_;
  auVar5._12_4_ = auVar20._4_4_;
  maxpd(auVar13,auVar5);
  return (float)auVar12._0_8_;
}

// GetBoxIntersectionOutcode @ 1479c47a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOutcode __thiscall
FConvexVolume::GetBoxIntersectionOutcode
          (FConvexVolume *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  ForElementType<UE::Math::TPlane<double>_> FVar30;
  uint *in_R9;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  
  uVar32 = *in_R9;
  uVar33 = in_R9[1];
  uVar28 = in_R9[2];
  uVar29 = in_R9[3];
  uVar1 = *(undefined8 *)(in_R9 + 4);
  dVar20 = (param_2->field0_0x0)._s_0.X;
  dVar21 = (param_2->field0_0x0)._s_0.Y;
  *(undefined2 *)&param_1->field0_0x0 = 1;
  uVar25 = _UNK_15061cc8c;
  uVar24 = _UNK_15061cc88;
  uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  FVar30 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  iVar5 = (this->PermutedPlanes).ArrayNum;
  if (FVar30 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar30 = (ForElementType<UE::Math::TPlane<double>_>)&this->PermutedPlanes;
  }
  iVar26 = 0;
  uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & uVar32;
  uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & uVar33;
  uVar34 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar35 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar16 = (double)CONCAT44(_UNK_15061cc8c & uVar29,_UNK_15061cc88 & uVar28);
  dVar17 = (double)CONCAT44(_UNK_15061cc8c & uVar29,_UNK_15061cc88 & uVar28);
  dVar18 = (double)CONCAT44(uVar35,uVar34);
  dVar19 = (double)CONCAT44(uVar35,uVar34);
  if (0 < iVar5) {
    do {
      auVar3 = *(undefined1 (*) [16])FVar30;
      auVar4 = *(undefined1 (*) [16])((longlong)FVar30 + 0x10);
      dVar12 = (auVar3._0_8_ * dVar20 + dVar21 * *(double *)((longlong)FVar30 + 0x20) +
               dVar2 * *(double *)((longlong)FVar30 + 0x40)) - *(double *)((longlong)FVar30 + 0x60);
      dVar13 = (auVar3._8_8_ * dVar20 + dVar21 * *(double *)((longlong)FVar30 + 0x28) +
               dVar2 * *(double *)((longlong)FVar30 + 0x48)) - *(double *)((longlong)FVar30 + 0x68);
      dVar14 = (dVar21 * *(double *)((longlong)FVar30 + 0x30) + auVar4._0_8_ * dVar20 +
               dVar2 * *(double *)((longlong)FVar30 + 0x50)) - *(double *)((longlong)FVar30 + 0x70);
      dVar15 = (dVar21 * *(double *)((longlong)FVar30 + 0x38) + auVar4._8_8_ * dVar20 +
               dVar2 * *(double *)((longlong)FVar30 + 0x58)) - *(double *)((longlong)FVar30 + 0x78);
      dVar8 = (double)CONCAT44(auVar3._4_4_ & uVar23,auVar3._0_4_ & uVar22) *
              (double)CONCAT44(uVar33,uVar32) +
              (double)CONCAT44(uVar23 & *(uint *)((longlong)FVar30 + 0x24),
                               uVar22 & *(uint *)((longlong)FVar30 + 0x20)) * dVar17 +
              (double)CONCAT44(uVar23 & *(uint *)((longlong)FVar30 + 0x44),
                               uVar22 & *(uint *)((longlong)FVar30 + 0x40)) * dVar19;
      dVar9 = (double)CONCAT44(auVar3._12_4_ & uVar25,auVar3._8_4_ & uVar24) *
              (double)CONCAT44(uVar33,uVar32) +
              (double)CONCAT44(uVar25 & *(uint *)((longlong)FVar30 + 0x2c),
                               uVar24 & *(uint *)((longlong)FVar30 + 0x28)) * dVar16 +
              (double)CONCAT44(uVar25 & *(uint *)((longlong)FVar30 + 0x4c),
                               uVar24 & *(uint *)((longlong)FVar30 + 0x48)) * dVar18;
      dVar10 = (double)CONCAT44(auVar4._4_4_ & uVar23,auVar4._0_4_ & uVar22) *
               (double)CONCAT44(uVar33,uVar32) +
               (double)CONCAT44(uVar23 & *(uint *)((longlong)FVar30 + 0x34),
                                uVar22 & *(uint *)((longlong)FVar30 + 0x30)) * dVar17 +
               (double)CONCAT44(uVar23 & *(uint *)((longlong)FVar30 + 0x54),
                                uVar22 & *(uint *)((longlong)FVar30 + 0x50)) * dVar19;
      dVar11 = (double)CONCAT44(auVar4._12_4_ & uVar25,auVar4._8_4_ & uVar24) *
               (double)CONCAT44(uVar33,uVar32) +
               (double)CONCAT44(uVar25 & *(uint *)((longlong)FVar30 + 0x3c),
                                uVar24 & *(uint *)((longlong)FVar30 + 0x38)) * dVar16 +
               (double)CONCAT44(uVar25 & *(uint *)((longlong)FVar30 + 0x5c),
                                uVar24 & *(uint *)((longlong)FVar30 + 0x58)) * dVar18;
      lVar31 = -(ulonglong)(dVar11 < dVar15);
      auVar3._8_4_ = (int)lVar31;
      auVar3._0_8_ = -(ulonglong)(dVar10 < dVar14);
      auVar3._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar28 = movmskpd(FVar30._0_4_,auVar3);
      lVar31 = -(ulonglong)(dVar9 < dVar13);
      auVar4._8_4_ = (int)lVar31;
      auVar4._0_8_ = -(ulonglong)(dVar8 < dVar12);
      auVar4._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      iVar27 = movmskpd((int)this,auVar4);
      if ((uVar28 & 0x3fffffff) != 0 || iVar27 != 0) {
        *(undefined2 *)&param_1->field0_0x0 = 0x100;
        break;
      }
      lVar31 = -(ulonglong)(0.0 - dVar11 < dVar15);
      auVar6._8_4_ = (int)lVar31;
      auVar6._0_8_ = -(ulonglong)(0.0 - dVar10 < dVar14);
      auVar6._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar29 = movmskpd(0,auVar6);
      lVar31 = -(ulonglong)(0.0 - dVar9 < dVar13);
      auVar7._8_4_ = (int)lVar31;
      auVar7._0_8_ = -(ulonglong)(0.0 - dVar8 < dVar12);
      auVar7._12_4_ = (int)((ulonglong)lVar31 >> 0x20);
      uVar28 = movmskpd(iVar27,auVar7);
      this = (FConvexVolume *)(ulonglong)uVar28;
      if ((uVar29 & 0x3fffffff) != 0 || uVar28 != 0) {
        *(undefined1 *)((longlong)&param_1->field0_0x0 + 1) = 1;
      }
      iVar26 = iVar26 + 4;
      FVar30 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar30 + 0x80);
    } while (iVar26 < iVar5);
  }
  return SUB82(param_1,0);
}

// Init @ 1479d6920

void __thiscall FConvexVolume::Init(FConvexVolume *this)

{
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ForElementType<UE::Math::TPlane<double>_> FVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ForElementType<UE::Math::TPlane<double>_> FVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  int local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  
  iVar13 = (this->Planes).ArrayNum;
  pTVar1 = &this->PermutedPlanes;
  uVar19 = iVar13 >> 0x1f & 3;
  uVar11 = iVar13 + uVar19;
  uVar12 = uVar11 & 3;
  iVar13 = uVar12 - uVar19;
  iVar21 = (int)uVar11 >> 2;
  uVar11 = iVar21 * 4;
  uVar20 = (-(uint)(uVar12 != uVar19) & 4) + uVar11;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  uVar22 = 0;
  piVar2 = &(this->PermutedPlanes).ArrayMax;
  (this->PermutedPlanes).ArrayNum = 0;
  if (*piVar2 != uVar20) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,uVar20,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_res20 = 0;
  uVar20 = 0;
  if (0 < iVar21) {
    local_res8 = 3;
    local_res10 = 2;
    local_res18 = 1;
    uVar24 = uVar22;
    do {
      uVar14 = (this->PermutedPlanes).ArrayNum;
      if (uVar14 == *piVar2) {
        uVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                           (0x1020,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->PermutedPlanes).ArrayNum = uVar14 + 1;
      uVar16 = 0;
      if ((int)uVar14 < (int)(uVar14 + 1)) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)pTVar1;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar18 = FVar8;
      }
      puVar23 = (undefined8 *)((longlong)(int)uVar14 * 0x20 + (longlong)FVar18);
      uVar16 = (uint)uVar24;
      uVar14 = 0;
      if (puVar23 != (undefined8 *)0x0) {
        uVar15 = uVar14;
        if (local_res8 < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 3) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar5 = *(undefined8 *)((uVar22 + 3) * 0x20 + (longlong)FVar18);
        uVar15 = uVar14;
        if (local_res10 < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 2) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar6 = *(undefined8 *)((uVar22 + 2) * 0x20 + (longlong)FVar18);
        uVar15 = uVar14;
        if (local_res18 < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 1) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar7 = *(undefined8 *)((uVar22 + 1) * 0x20 + (longlong)FVar18);
        uVar15 = uVar14;
        if ((int)uVar16 < (this->Planes).ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        *puVar23 = *(undefined8 *)(uVar22 * 0x20 + (longlong)FVar18);
        puVar23[1] = uVar7;
        puVar23[2] = uVar6;
        puVar23[3] = uVar5;
      }
      uVar15 = (this->PermutedPlanes).ArrayNum;
      if (uVar15 == *piVar2) {
        uVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                           (0x1020,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->PermutedPlanes).ArrayNum = uVar15 + 1;
      uVar17 = uVar14;
      if ((int)uVar15 < (int)(uVar15 + 1)) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)pTVar1;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar18 = FVar8;
      }
      puVar23 = (undefined8 *)((longlong)(int)uVar15 * 0x20 + (longlong)FVar18);
      if (puVar23 != (undefined8 *)0x0) {
        uVar15 = uVar14;
        if ((int)(uVar16 + 3) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 3) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar5 = *(undefined8 *)((uVar22 + 3) * 0x20 + 8 + (longlong)FVar18);
        uVar15 = uVar14;
        if ((int)(uVar16 + 2) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 2) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar6 = *(undefined8 *)((uVar22 + 2) * 0x20 + 8 + (longlong)FVar18);
        uVar15 = uVar14;
        if ((int)(uVar16 + 1) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 1) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar7 = *(undefined8 *)((uVar22 + 1) * 0x20 + 8 + (longlong)FVar18);
        uVar15 = uVar20;
        if ((int)uVar16 < (this->Planes).ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        *puVar23 = *(undefined8 *)(uVar22 * 0x20 + 8 + (longlong)FVar18);
        puVar23[1] = uVar7;
        puVar23[2] = uVar6;
        puVar23[3] = uVar5;
      }
      uVar15 = (this->PermutedPlanes).ArrayNum;
      if (uVar15 == *piVar2) {
        uVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                           (0x1020,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->PermutedPlanes).ArrayNum = uVar15 + 1;
      uVar17 = uVar20;
      if ((int)uVar15 < (int)(uVar15 + 1)) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)pTVar1;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar18 = FVar8;
      }
      puVar23 = (undefined8 *)((longlong)(int)uVar15 * 0x20 + (longlong)FVar18);
      if (puVar23 != (undefined8 *)0x0) {
        uVar15 = uVar14;
        if ((int)(uVar16 + 3) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 3) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar5 = *(undefined8 *)((uVar22 + 3) * 0x20 + 0x10 + (longlong)FVar18);
        uVar15 = uVar14;
        if ((int)(uVar16 + 2) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 2) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar6 = *(undefined8 *)((uVar22 + 2) * 0x20 + 0x10 + (longlong)FVar18);
        uVar15 = uVar14;
        if ((int)(uVar16 + 1) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 1) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar7 = *(undefined8 *)((uVar22 + 1) * 0x20 + 0x10 + (longlong)FVar18);
        uVar15 = uVar14;
        if ((int)uVar16 < (this->Planes).ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        *puVar23 = *(undefined8 *)(uVar22 * 0x20 + 0x10 + (longlong)FVar18);
        puVar23[1] = uVar7;
        puVar23[2] = uVar6;
        puVar23[3] = uVar5;
      }
      uVar15 = (this->PermutedPlanes).ArrayNum;
      if (uVar15 == *piVar2) {
        uVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
                           (0x1020,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->PermutedPlanes).ArrayNum = uVar15 + 1;
      uVar17 = uVar14;
      if ((int)uVar15 < (int)(uVar15 + 1)) {
        uVar17 = ~uVar15 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)pTVar1;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar18 = FVar8;
      }
      puVar23 = (undefined8 *)((longlong)(int)uVar15 * 0x20 + (longlong)FVar18);
      if (puVar23 != (undefined8 *)0x0) {
        uVar15 = uVar14;
        if ((int)(uVar16 + 3) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 3) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar5 = *(undefined8 *)((uVar22 + 3) * 0x20 + 0x18 + (longlong)FVar18);
        uVar15 = uVar14;
        if ((int)(uVar16 + 2) < (this->Planes).ArrayNum) {
          uVar15 = ~(uVar16 + 2) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar6 = *(undefined8 *)((uVar22 + 2) * 0x20 + 0x18 + (longlong)FVar18);
        if ((int)(uVar16 + 1) < (this->Planes).ArrayNum) {
          uVar14 = ~(uVar16 + 1) >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        uVar7 = *(undefined8 *)((uVar22 + 1) * 0x20 + 0x18 + (longlong)FVar18);
        uVar14 = 0;
        if ((int)uVar16 < (this->Planes).ArrayNum) {
          uVar14 = ~uVar16 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
        if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          FVar18 = FVar8;
        }
        *puVar23 = *(undefined8 *)(uVar22 * 0x20 + 0x18 + (longlong)FVar18);
        puVar23[1] = uVar7;
        puVar23[2] = uVar6;
        puVar23[3] = uVar5;
      }
      uVar24 = (ulonglong)(uVar16 + 4);
      local_res8 = local_res8 + 4;
      local_res20 = local_res20 + 1;
      local_res10 = local_res10 + 4;
      uVar22 = uVar22 + 4;
      local_res18 = local_res18 + 4;
    } while (local_res20 < iVar21);
  }
  if (uVar12 != uVar19) {
    if (iVar13 == 1) {
      if ((int)uVar11 < (this->Planes).ArrayNum) {
        uVar20 = ~uVar11 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        this = (FConvexVolume *)FVar8;
      }
      puVar3 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + (longlong)this);
      uVar37 = *puVar3;
      uVar38 = puVar3[1];
      uVar39 = puVar3[2];
      uVar40 = puVar3[3];
      puVar3 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + 0x10 + (longlong)this);
      uVar25 = *puVar3;
      uVar26 = puVar3[1];
      uVar27 = puVar3[2];
      uVar28 = puVar3[3];
      uVar29 = uVar25;
      uVar30 = uVar26;
      uVar31 = uVar27;
      uVar32 = uVar28;
      uVar33 = uVar25;
      uVar34 = uVar26;
      uVar35 = uVar27;
      uVar36 = uVar28;
      uVar41 = uVar37;
      uVar42 = uVar38;
      uVar43 = uVar39;
      uVar44 = uVar40;
      uVar45 = uVar37;
      uVar46 = uVar38;
      uVar47 = uVar39;
      uVar48 = uVar40;
    }
    else if (iVar13 == 2) {
      uVar12 = uVar20;
      if ((int)uVar11 < (this->Planes).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
      uVar12 = uVar11 + 1;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar18 = FVar8;
      }
      puVar3 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + (longlong)FVar18);
      uVar37 = *puVar3;
      uVar38 = puVar3[1];
      uVar39 = puVar3[2];
      uVar40 = puVar3[3];
      puVar3 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + 0x10 + (longlong)FVar18);
      uVar25 = *puVar3;
      uVar26 = puVar3[1];
      uVar27 = puVar3[2];
      uVar28 = puVar3[3];
      if ((int)uVar12 < (this->Planes).ArrayNum) {
        uVar20 = ~uVar12 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        this = (FConvexVolume *)FVar8;
      }
      puVar3 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + (longlong)this);
      puVar4 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + 0x10 + (longlong)this);
      uVar29 = uVar25;
      uVar30 = uVar26;
      uVar31 = uVar27;
      uVar32 = uVar28;
      uVar33 = *puVar4;
      uVar34 = puVar4[1];
      uVar35 = puVar4[2];
      uVar36 = puVar4[3];
      uVar41 = uVar37;
      uVar42 = uVar38;
      uVar43 = uVar39;
      uVar44 = uVar40;
      uVar45 = *puVar3;
      uVar46 = puVar3[1];
      uVar47 = puVar3[2];
      uVar48 = puVar3[3];
    }
    else if (iVar13 == 3) {
      uVar12 = 0;
      if ((int)uVar11 < (this->Planes).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
      uVar12 = uVar11 + 1;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar18 = FVar8;
      }
      puVar3 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + (longlong)FVar18);
      uVar37 = *puVar3;
      uVar38 = puVar3[1];
      uVar39 = puVar3[2];
      uVar40 = puVar3[3];
      puVar3 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + 0x10 + (longlong)FVar18);
      uVar25 = *puVar3;
      uVar26 = puVar3[1];
      uVar27 = puVar3[2];
      uVar28 = puVar3[3];
      uVar19 = uVar20;
      if ((int)uVar12 < (this->Planes).ArrayNum) {
        uVar19 = ~uVar12 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<UE::Math::TPlane<double>_>)this;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar18 = FVar8;
      }
      uVar11 = uVar11 + 2;
      puVar3 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + (longlong)FVar18);
      uVar45 = *puVar3;
      uVar46 = puVar3[1];
      uVar47 = puVar3[2];
      uVar48 = puVar3[3];
      puVar3 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + 0x10 + (longlong)FVar18);
      uVar33 = *puVar3;
      uVar34 = puVar3[1];
      uVar35 = puVar3[2];
      uVar36 = puVar3[3];
      if ((int)uVar11 < (this->Planes).ArrayNum) {
        uVar20 = ~uVar11 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->Planes).AllocatorInstance.SecondaryData;
      if (FVar8 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        this = (FConvexVolume *)FVar8;
      }
      puVar3 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + (longlong)this);
      puVar4 = (undefined4 *)((longlong)(int)uVar11 * 0x20 + 0x10 + (longlong)this);
      uVar29 = *puVar4;
      uVar30 = puVar4[1];
      uVar31 = puVar4[2];
      uVar32 = puVar4[3];
      uVar41 = *puVar3;
      uVar42 = puVar3[1];
      uVar43 = puVar3[2];
      uVar44 = puVar3[3];
    }
    else {
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      uVar40 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      uVar41 = 0;
      uVar42 = 0;
      uVar43 = 0;
      uVar44 = 0;
      uVar45 = 0;
      uVar46 = 0;
      uVar47 = 0;
      uVar48 = 0;
    }
    puVar23 = operator_new<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        (0x20,pTVar1);
    if (puVar23 != (undefined8 *)0x0) {
      *puVar23 = CONCAT44(uVar38,uVar37);
      puVar23[1] = CONCAT44(uVar46,uVar45);
      puVar23[2] = CONCAT44(uVar42,uVar41);
      puVar23[3] = CONCAT44(uVar38,uVar37);
    }
    puVar23 = operator_new<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        (0x20,pTVar1);
    if (puVar23 != (undefined8 *)0x0) {
      *puVar23 = CONCAT44(uVar40,uVar39);
      puVar23[1] = CONCAT44(uVar48,uVar47);
      puVar23[2] = CONCAT44(uVar44,uVar43);
      puVar23[3] = CONCAT44(uVar40,uVar39);
    }
    puVar23 = operator_new<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        (0x20,pTVar1);
    if (puVar23 != (undefined8 *)0x0) {
      *puVar23 = CONCAT44(uVar26,uVar25);
      puVar23[1] = CONCAT44(uVar34,uVar33);
      puVar23[2] = CONCAT44(uVar30,uVar29);
      puVar23[3] = CONCAT44(uVar26,uVar25);
    }
    puVar23 = operator_new<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                        (0x20,pTVar1);
    if (puVar23 != (undefined8 *)0x0) {
      *puVar23 = CONCAT44(uVar28,uVar27);
      puVar23[1] = CONCAT44(uVar36,uVar35);
      puVar23[2] = CONCAT44(uVar32,uVar31);
      puVar23[3] = CONCAT44(uVar28,uVar27);
    }
  }
  return;
}

// IntersectBox @ 1479d8ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FConvexVolume::IntersectBox
          (FConvexVolume *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar13
  ;
  ForElementType<UE::Math::TPlane<double>_> FVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar2 = (this->PermutedPlanes).ArrayNum;
  dVar5 = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  pTVar13 = &this->PermutedPlanes;
  FVar14 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  dVar7 = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  if (FVar14 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar14 = (ForElementType<UE::Math::TPlane<double>_>)pTVar13;
  }
  iVar12 = 0;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)&param_3->field0_0x0;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           *(uint *)((longlong)&param_3->field0_0x0 + 4);
  uVar18 = _UNK_15061cc88 & *(uint *)((longlong)&param_3->field0_0x0 + 8);
  uVar19 = _UNK_15061cc8c & *(uint *)((longlong)&param_3->field0_0x0 + 0xc);
  uVar20 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar21 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar8 = (double)CONCAT44(uVar19,uVar18);
  dVar9 = (double)CONCAT44(uVar19,uVar18);
  dVar10 = (double)CONCAT44(uVar21,uVar20);
  dVar11 = (double)CONCAT44(uVar21,uVar20);
  if (0 < iVar2) {
    do {
      lVar15 = -(ulonglong)
                ((double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x1c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x18)) *
                 (double)CONCAT44(uVar17,uVar16) +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x3c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x38)) * dVar8 +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x5c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x58)) * dVar10 <
                (dVar6 * *(double *)((longlong)FVar14 + 0x38) +
                 dVar5 * *(double *)((longlong)FVar14 + 0x18) +
                dVar7 * *(double *)((longlong)FVar14 + 0x58)) - *(double *)((longlong)FVar14 + 0x78)
                );
      auVar3._8_4_ = (int)lVar15;
      auVar3._0_8_ = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x14),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x10)) *
                       (double)CONCAT44(uVar17,uVar16) +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x34),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x30)) * dVar9 +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x54),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x50)) * dVar11 <
                      (dVar6 * *(double *)((longlong)FVar14 + 0x30) +
                       dVar5 * *(double *)((longlong)FVar14 + 0x10) +
                      dVar7 * *(double *)((longlong)FVar14 + 0x50)) -
                      *(double *)((longlong)FVar14 + 0x70));
      auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar19 = movmskpd((int)param_1,auVar3);
      lVar15 = -(ulonglong)
                ((double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0xc),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 8)) *
                 (double)CONCAT44(uVar17,uVar16) +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x2c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x28)) * dVar8 +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x4c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x48)) * dVar10 <
                (dVar6 * *(double *)((longlong)FVar14 + 0x28) +
                 dVar5 * *(double *)((longlong)FVar14 + 8) +
                dVar7 * *(double *)((longlong)FVar14 + 0x48)) - *(double *)((longlong)FVar14 + 0x68)
                );
      auVar4._8_4_ = (int)lVar15;
      auVar4._0_8_ = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 4),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)FVar14) * (double)CONCAT44(uVar17,uVar16) +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x24),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x20)) * dVar9 +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x44),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x40)) * dVar11 <
                      (dVar6 * *(double *)((longlong)FVar14 + 0x20) + dVar5 * *(double *)FVar14 +
                      dVar7 * *(double *)((longlong)FVar14 + 0x40)) -
                      *(double *)((longlong)FVar14 + 0x60));
      auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar18 = movmskpd((int)pTVar13,auVar4);
      pTVar13 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)(ulonglong)uVar18;
      if ((uVar19 & 0x3fffffff) != 0 || uVar18 != 0) {
        return false;
      }
      iVar12 = iVar12 + 4;
      FVar14 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar14 + 0x80);
      param_1 = (TVector<double> *)0x0;
    } while (iVar12 < iVar2);
  }
  return true;
}

// IntersectBox @ 1479d8cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FConvexVolume::IntersectBox(FConvexVolume *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar13
  ;
  ForElementType<UE::Math::TPlane<double>_> FVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  iVar3 = (this->PermutedPlanes).ArrayNum;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  FVar14 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  dVar10 = (param_1->field0_0x0)._s_0.X;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  pTVar13 = &this->PermutedPlanes;
  if (FVar14 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar14 = (ForElementType<UE::Math::TPlane<double>_>)pTVar13;
  }
  iVar12 = 0;
  uVar16 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)&param_2->field0_0x0;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           *(uint *)((longlong)&param_2->field0_0x0 + 4);
  uVar18 = _UNK_15061cc88 & *(uint *)((longlong)&param_2->field0_0x0 + 8);
  uVar19 = _UNK_15061cc8c & *(uint *)((longlong)&param_2->field0_0x0 + 0xc);
  uVar20 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar21 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar6 = (double)CONCAT44(uVar19,uVar18);
  dVar7 = (double)CONCAT44(uVar19,uVar18);
  dVar8 = (double)CONCAT44(uVar21,uVar20);
  dVar9 = (double)CONCAT44(uVar21,uVar20);
  if (0 < iVar3) {
    do {
      lVar15 = -(ulonglong)
                ((double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x1c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x18)) *
                 (double)CONCAT44(uVar17,uVar16) +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x3c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x38)) * dVar6 +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x5c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x58)) * dVar8 <
                (dVar11 * *(double *)((longlong)FVar14 + 0x38) +
                 dVar10 * *(double *)((longlong)FVar14 + 0x18) +
                dVar2 * *(double *)((longlong)FVar14 + 0x58)) - *(double *)((longlong)FVar14 + 0x78)
                );
      auVar4._8_4_ = (int)lVar15;
      auVar4._0_8_ = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x14),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x10)) *
                       (double)CONCAT44(uVar17,uVar16) +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x34),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x30)) * dVar7 +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x54),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x50)) * dVar9 <
                      (dVar11 * *(double *)((longlong)FVar14 + 0x30) +
                       dVar10 * *(double *)((longlong)FVar14 + 0x10) +
                      dVar2 * *(double *)((longlong)FVar14 + 0x50)) -
                      *(double *)((longlong)FVar14 + 0x70));
      auVar4._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar19 = movmskpd((int)pTVar13,auVar4);
      lVar15 = -(ulonglong)
                ((double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0xc),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 8)) *
                 (double)CONCAT44(uVar17,uVar16) +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x2c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x28)) * dVar6 +
                 (double)CONCAT44(_UNK_15061cc8c & *(uint *)((longlong)FVar14 + 0x4c),
                                  _UNK_15061cc88 & *(uint *)((longlong)FVar14 + 0x48)) * dVar8 <
                (dVar11 * *(double *)((longlong)FVar14 + 0x28) +
                 dVar10 * *(double *)((longlong)FVar14 + 8) +
                dVar2 * *(double *)((longlong)FVar14 + 0x48)) - *(double *)((longlong)FVar14 + 0x68)
                );
      auVar5._8_4_ = (int)lVar15;
      auVar5._0_8_ = -(ulonglong)
                      ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 4),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)FVar14) * (double)CONCAT44(uVar17,uVar16) +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x24),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x20)) * dVar7 +
                       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                        *(uint *)((longlong)FVar14 + 0x44),
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                        *(uint *)((longlong)FVar14 + 0x40)) * dVar9 <
                      (dVar11 * *(double *)((longlong)FVar14 + 0x20) + dVar10 * *(double *)FVar14 +
                      dVar2 * *(double *)((longlong)FVar14 + 0x40)) -
                      *(double *)((longlong)FVar14 + 0x60));
      auVar5._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar18 = movmskpd((int)this,auVar5);
      this = (FConvexVolume *)(ulonglong)uVar18;
      if ((uVar19 & 0x3fffffff) != 0 || uVar18 != 0) {
        return false;
      }
      iVar12 = iVar12 + 4;
      FVar14 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar14 + 0x80);
      pTVar13 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)0x0;
    } while (iVar12 < iVar3);
  }
  return true;
}

// IntersectBox @ 1479d8eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FConvexVolume::IntersectBox
          (FConvexVolume *this,TVector<double> *param_1,TVector<double> *param_2,bool *param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ForElementType<UE::Math::TPlane<double>_> FVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  
  *param_3 = true;
  uVar24 = _UNK_15061cc8c;
  uVar23 = _UNK_15061cc88;
  uVar22 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  FVar27 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  auVar3 = *(undefined1 (*) [16])&param_1->field0_0x0;
  if (FVar27 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar27 = (ForElementType<UE::Math::TPlane<double>_>)&this->PermutedPlanes;
  }
  iVar25 = 0;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  uVar34 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar35 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & *(uint *)&param_2->field0_0x0;
  uVar31 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
           *(uint *)((longlong)&param_2->field0_0x0 + 4);
  uVar32 = _UNK_15061cc88 & *(uint *)((longlong)&param_2->field0_0x0 + 8);
  uVar33 = _UNK_15061cc8c & *(uint *)((longlong)&param_2->field0_0x0 + 0xc);
  dVar20 = auVar3._8_8_;
  dVar16 = (double)CONCAT44(uVar33,uVar32);
  dVar17 = (double)CONCAT44(uVar33,uVar32);
  dVar18 = (double)CONCAT44(uVar35,uVar34);
  dVar19 = (double)CONCAT44(uVar35,uVar34);
  if (0 < (this->PermutedPlanes).ArrayNum) {
    do {
      dVar7 = auVar3._0_8_;
      dVar12 = (dVar20 * *(double *)((longlong)FVar27 + 0x20) + dVar7 * *(double *)FVar27 +
               dVar2 * *(double *)((longlong)FVar27 + 0x40)) - *(double *)((longlong)FVar27 + 0x60);
      dVar13 = (dVar20 * *(double *)((longlong)FVar27 + 0x28) +
                dVar7 * *(double *)((longlong)FVar27 + 8) +
               dVar2 * *(double *)((longlong)FVar27 + 0x48)) - *(double *)((longlong)FVar27 + 0x68);
      dVar14 = (dVar20 * *(double *)((longlong)FVar27 + 0x30) +
                dVar7 * *(double *)((longlong)FVar27 + 0x10) +
               dVar2 * *(double *)((longlong)FVar27 + 0x50)) - *(double *)((longlong)FVar27 + 0x70);
      dVar15 = (dVar20 * *(double *)((longlong)FVar27 + 0x38) +
                dVar7 * *(double *)((longlong)FVar27 + 0x18) +
               dVar2 * *(double *)((longlong)FVar27 + 0x58)) - *(double *)((longlong)FVar27 + 0x78);
      dVar10 = (double)CONCAT44(uVar22 & *(uint *)((longlong)FVar27 + 4),uVar21 & *(uint *)FVar27) *
               (double)CONCAT44(uVar31,uVar30) +
               (double)CONCAT44(uVar22 & *(uint *)((longlong)FVar27 + 0x24),
                                uVar21 & *(uint *)((longlong)FVar27 + 0x20)) * dVar17 +
               (double)CONCAT44(uVar22 & *(uint *)((longlong)FVar27 + 0x44),
                                uVar21 & *(uint *)((longlong)FVar27 + 0x40)) * dVar19;
      dVar11 = (double)CONCAT44(uVar24 & *(uint *)((longlong)FVar27 + 0xc),
                                uVar23 & *(uint *)((longlong)FVar27 + 8)) *
               (double)CONCAT44(uVar31,uVar30) +
               (double)CONCAT44(uVar24 & *(uint *)((longlong)FVar27 + 0x2c),
                                uVar23 & *(uint *)((longlong)FVar27 + 0x28)) * dVar16 +
               (double)CONCAT44(uVar24 & *(uint *)((longlong)FVar27 + 0x4c),
                                uVar23 & *(uint *)((longlong)FVar27 + 0x48)) * dVar18;
      dVar7 = (double)CONCAT44(uVar22 & *(uint *)((longlong)FVar27 + 0x14),
                               uVar21 & *(uint *)((longlong)FVar27 + 0x10)) *
              (double)CONCAT44(uVar31,uVar30) +
              (double)CONCAT44(uVar22 & *(uint *)((longlong)FVar27 + 0x34),
                               uVar21 & *(uint *)((longlong)FVar27 + 0x30)) * dVar17 +
              (double)CONCAT44(uVar22 & *(uint *)((longlong)FVar27 + 0x54),
                               uVar21 & *(uint *)((longlong)FVar27 + 0x50)) * dVar19;
      dVar8 = (double)CONCAT44(uVar24 & *(uint *)((longlong)FVar27 + 0x1c),
                               uVar23 & *(uint *)((longlong)FVar27 + 0x18)) *
              (double)CONCAT44(uVar31,uVar30) +
              (double)CONCAT44(uVar24 & *(uint *)((longlong)FVar27 + 0x3c),
                               uVar23 & *(uint *)((longlong)FVar27 + 0x38)) * dVar16 +
              (double)CONCAT44(uVar24 & *(uint *)((longlong)FVar27 + 0x5c),
                               uVar23 & *(uint *)((longlong)FVar27 + 0x58)) * dVar18;
      lVar29 = -(ulonglong)(dVar8 < dVar15);
      auVar6._8_4_ = (int)lVar29;
      auVar6._0_8_ = -(ulonglong)(dVar7 < dVar14);
      auVar6._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      uVar32 = movmskpd((int)param_1,auVar6);
      lVar29 = -(ulonglong)(dVar11 < dVar13);
      auVar9._8_4_ = (int)lVar29;
      auVar9._0_8_ = -(ulonglong)(dVar10 < dVar12);
      auVar9._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      iVar26 = movmskpd(FVar27._0_4_,auVar9);
      if ((uVar32 & 0x3fffffff) != 0 || iVar26 != 0) {
        *param_3 = false;
        return false;
      }
      lVar29 = -(ulonglong)(0.0 - dVar8 < dVar15);
      auVar4._8_4_ = (int)lVar29;
      auVar4._0_8_ = -(ulonglong)(0.0 - dVar7 < dVar14);
      auVar4._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      iVar28 = movmskpd(0,auVar4);
      lVar29 = -(ulonglong)(0.0 - dVar11 < dVar13);
      auVar5._8_4_ = (int)lVar29;
      auVar5._0_8_ = -(ulonglong)(0.0 - dVar10 < dVar12);
      auVar5._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      uVar32 = movmskpd(iVar26,auVar5);
      uVar32 = iVar28 << 2 | uVar32;
      param_1 = (TVector<double> *)(ulonglong)uVar32;
      if (uVar32 != 0) {
        *param_3 = false;
      }
      iVar25 = iVar25 + 4;
      FVar27 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar27 + 0x80);
    } while (iVar25 < (this->PermutedPlanes).ArrayNum);
  }
  return true;
}

// IntersectLineSegment @ 1479d90f0

bool __thiscall
FConvexVolume::IntersectLineSegment
          (FConvexVolume *this,TVector<double> *param_1,TVector<double> *param_2)

{
  ForElementType<UE::Math::TPlane<double>_> *pFVar1;
  int *piVar2;
  double dVar3;
  int iVar4;
  ForElementType<UE::Math::TPlane<double>_> FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uchar *puVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  undefined1 local_res8 [8];
  
  piVar2 = &(this->Planes).ArrayNum;
  FVar5 = (this->Planes).AllocatorInstance.SecondaryData;
  iVar4 = *piVar2;
  if (FVar5 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    this = (FConvexVolume *)FVar5;
  }
  puVar15 = (uchar *)((longlong)this + 0x10);
  dVar9 = (param_1->field0_0x0)._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.Z;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar12 = (param_2->field0_0x0)._s_0.Z;
  dVar13 = (param_2->field0_0x0)._s_0.X;
  dVar14 = (param_2->field0_0x0)._s_0.Y;
  do {
    while( true ) {
      if (*piVar2 != iVar4) {
        `TCheckedPointerIterator<UE::Math::TPlane<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      pFVar1 = (ForElementType<UE::Math::TPlane<double>_> *)(puVar15 + -0x10);
      if (pFVar1 == (ForElementType<UE::Math::TPlane<double>_> *)
                    ((longlong)iVar4 * 0x20 + (longlong)this)) {
        return true;
      }
      dVar3 = *(double *)(puVar15 + 8);
      dVar8 = *(double *)pFVar1->InlineData * dVar9 + *(double *)(puVar15 + -8) * dVar11 +
              *(double *)puVar15 * dVar10;
      fVar18 = (float)(dVar8 - dVar3);
      fVar16 = (float)((*(double *)pFVar1->InlineData * dVar13 + *(double *)(puVar15 + -8) * dVar14
                       + *(double *)puVar15 * dVar12) - dVar3);
      if ((0.0 < fVar18) && (0.0 < fVar16)) {
        return false;
      }
      if ((0.0 <= fVar18) || (dVar6 = dVar13, dVar7 = dVar12, dVar17 = dVar14, 0.0 <= fVar16))
      break;
LAB_1479d92f2:
      puVar15 = puVar15 + 0x20;
      dVar12 = dVar7;
      dVar13 = dVar6;
      dVar14 = dVar17;
    }
    dVar3 = (dVar3 - dVar8) /
            ((dVar14 - dVar11) * *(double *)(puVar15 + -8) +
             (dVar13 - dVar9) * *(double *)pFVar1->InlineData +
            (dVar12 - dVar10) * *(double *)puVar15);
    dVar6 = dVar3 * (dVar13 - dVar9) + dVar9;
    dVar17 = dVar3 * (dVar14 - dVar11) + dVar11;
    dVar7 = dVar3 * (dVar12 - dVar10) + dVar10;
    if (fVar18 <= 0.0) goto LAB_1479d92f2;
    puVar15 = puVar15 + 0x20;
    dVar9 = dVar6;
    dVar10 = dVar7;
    dVar11 = dVar17;
  } while( true );
}

// IntersectSphere @ 1479d9360

bool __thiscall
FConvexVolume::IntersectSphere(FConvexVolume *this,TVector<double> *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<UE::Math::TPlane<double>_> FVar11;
  longlong lVar12;
  
  fVar1 = *param_2;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  FVar11 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  iVar3 = (this->PermutedPlanes).ArrayNum;
  if (FVar11 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TPlane<double>_>)&this->PermutedPlanes;
  }
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      lVar12 = -(ulonglong)
                ((double)fVar1 <
                (dVar7 * *(double *)((longlong)FVar11 + 0x38) +
                 dVar6 * *(double *)((longlong)FVar11 + 0x18) +
                dVar2 * *(double *)((longlong)FVar11 + 0x58)) - *(double *)((longlong)FVar11 + 0x78)
                );
      auVar4._8_4_ = (int)lVar12;
      auVar4._0_8_ = -(ulonglong)
                      ((double)fVar1 <
                      (dVar7 * *(double *)((longlong)FVar11 + 0x30) +
                       dVar6 * *(double *)((longlong)FVar11 + 0x10) +
                      dVar2 * *(double *)((longlong)FVar11 + 0x50)) -
                      *(double *)((longlong)FVar11 + 0x70));
      auVar4._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
      uVar10 = movmskpd((int)param_1,auVar4);
      lVar12 = -(ulonglong)
                ((double)fVar1 <
                (dVar6 * *(double *)((longlong)FVar11 + 8) +
                 dVar7 * *(double *)((longlong)FVar11 + 0x28) +
                dVar2 * *(double *)((longlong)FVar11 + 0x48)) - *(double *)((longlong)FVar11 + 0x68)
                );
      auVar5._8_4_ = (int)lVar12;
      auVar5._0_8_ = -(ulonglong)
                      ((double)fVar1 <
                      (dVar6 * *(double *)FVar11 + dVar7 * *(double *)((longlong)FVar11 + 0x20) +
                      dVar2 * *(double *)((longlong)FVar11 + 0x40)) -
                      *(double *)((longlong)FVar11 + 0x60));
      auVar5._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
      uVar9 = movmskpd((int)this,auVar5);
      this = (FConvexVolume *)(ulonglong)uVar9;
      if ((uVar10 & 0x3fffffff) != 0 || uVar9 != 0) {
        return false;
      }
      iVar8 = iVar8 + 4;
      FVar11 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar11 + 0x80);
      param_1 = (TVector<double> *)0x0;
    } while (iVar8 < iVar3);
  }
  return true;
}

// IntersectSphere @ 1479d9470

bool __thiscall
FConvexVolume::IntersectSphere
          (FConvexVolume *this,TVector<double> *param_1,float *param_2,bool *param_3)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  ForElementType<UE::Math::TPlane<double>_> FVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  *param_3 = true;
  dVar7 = (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  FVar11 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  fVar1 = *param_2;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  if (FVar11 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar11 = (ForElementType<UE::Math::TPlane<double>_>)&this->PermutedPlanes;
  }
  iVar9 = 0;
  if (0 < (this->PermutedPlanes).ArrayNum) {
    do {
      dVar16 = (dVar8 * *(double *)((longlong)FVar11 + 0x20) + dVar7 * *(double *)FVar11 +
               dVar2 * *(double *)((longlong)FVar11 + 0x40)) - *(double *)((longlong)FVar11 + 0x60);
      dVar17 = (dVar8 * *(double *)((longlong)FVar11 + 0x28) +
                dVar7 * *(double *)((longlong)FVar11 + 8) +
               dVar2 * *(double *)((longlong)FVar11 + 0x48)) - *(double *)((longlong)FVar11 + 0x68);
      dVar18 = (dVar7 * *(double *)((longlong)FVar11 + 0x10) +
                dVar8 * *(double *)((longlong)FVar11 + 0x30) +
               dVar2 * *(double *)((longlong)FVar11 + 0x50)) - *(double *)((longlong)FVar11 + 0x70);
      dVar19 = (dVar7 * *(double *)((longlong)FVar11 + 0x18) +
                dVar8 * *(double *)((longlong)FVar11 + 0x38) +
               dVar2 * *(double *)((longlong)FVar11 + 0x58)) - *(double *)((longlong)FVar11 + 0x78);
      lVar14 = -(ulonglong)((double)fVar1 < dVar17);
      lVar15 = -(ulonglong)((double)fVar1 < dVar19);
      auVar3._8_4_ = (int)lVar15;
      auVar3._0_8_ = -(ulonglong)((double)fVar1 < dVar18);
      auVar3._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
      uVar12 = movmskpd((int)param_1,auVar3);
      auVar5._8_4_ = (int)lVar14;
      auVar5._0_8_ = -(ulonglong)((double)fVar1 < dVar16);
      auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar10 = movmskpd(FVar11._0_4_,auVar5);
      if ((uVar12 & 0x3fffffff) != 0 || iVar10 != 0) {
        *param_3 = false;
        return false;
      }
      lVar14 = -(ulonglong)(0.0 - (double)fVar1 < dVar19);
      auVar4._8_4_ = (int)lVar14;
      auVar4._0_8_ = -(ulonglong)(0.0 - (double)fVar1 < dVar18);
      auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      iVar13 = movmskpd(0,auVar4);
      lVar14 = -(ulonglong)(0.0 - (double)fVar1 < dVar17);
      auVar6._8_4_ = (int)lVar14;
      auVar6._0_8_ = -(ulonglong)(0.0 - (double)fVar1 < dVar16);
      auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      uVar12 = movmskpd(iVar10,auVar6);
      uVar12 = iVar13 << 2 | uVar12;
      param_1 = (TVector<double> *)(ulonglong)uVar12;
      if (uVar12 != 0) {
        *param_3 = false;
      }
      iVar9 = iVar9 + 4;
      FVar11 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar11 + 0x80);
    } while (iVar9 < (this->PermutedPlanes).ArrayNum);
  }
  return true;
}

// IntersectTriangle @ 1479d95e0

bool __thiscall
FConvexVolume::IntersectTriangle
          (FConvexVolume *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,bool *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  FScriptContainerElement FVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  bool bVar34;
  undefined8 uVar35;
  byte bVar36;
  bool bVar37;
  undefined1 uVar38;
  bool bVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar44
  ;
  byte bVar45;
  FScriptContainerElement FVar46;
  ulonglong uVar47;
  longlong lVar48;
  FScriptContainerElement *pFVar49;
  FScriptContainerElement *pFVar50;
  TVector<double> *pTVar51;
  int iVar52;
  TVector<double> *pTVar53;
  int iVar54;
  byte bVar55;
  byte bVar56;
  ForElementType<UE::Math::TPlane<double>_> FVar57;
  ulonglong uVar58;
  uchar *puVar59;
  ulonglong uVar60;
  longlong lVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  FScriptContainerElement local_148;
  FScriptContainerElement local_147 [15];
  undefined1 local_138 [16];
  undefined1 local_128 [12];
  int iStack_11c;
  undefined1 local_118 [12];
  int iStack_10c;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  
  *param_4 = false;
  pTVar44 = &this->PermutedPlanes;
  FVar57 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  iVar43 = (this->PermutedPlanes).ArrayNum;
  auVar6 = *(undefined1 (*) [16])&param_1->field0_0x0;
  if (FVar57 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar57 = (ForElementType<UE::Math::TPlane<double>_>)pTVar44;
  }
  iVar54 = 0;
  dVar2 = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
  uVar47 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  local_f8 = (param_3->field0_0x0)._s_0.Z;
  bVar56 = 1;
  dVar3 = *(double *)((longlong)&param_2->field0_0x0 + 0x10);
  bVar55 = 1;
  local_108._12_4_ = 0;
  local_108._0_12_ = ZEXT812(0);
  dVar10 = auVar6._0_8_;
  local_138._8_4_ = auVar6._0_4_;
  local_138._0_8_ = dVar10;
  local_138._12_4_ = auVar6._4_4_;
  dVar16 = auVar6._8_8_;
  uVar67 = (undefined4)((ulonglong)dVar2 >> 0x20);
  uVar68 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar6 = *(undefined1 (*) [16])&param_2->field0_0x0;
  auVar7 = *(undefined1 (*) [16])&param_3->field0_0x0;
  dVar4 = auVar6._0_8_;
  local_118._8_4_ = auVar6._0_4_;
  local_118._0_8_ = dVar4;
  iStack_10c = auVar6._4_4_;
  dVar5 = auVar7._0_8_;
  auVar15._8_4_ = auVar7._0_4_;
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = auVar7._4_4_;
  dVar17 = auVar6._8_8_;
  dVar18 = auVar7._8_8_;
  pTVar51 = param_2;
  pTVar53 = param_3;
  if (iVar43 < 1) {
LAB_1479d9702:
    bVar37 = true;
  }
  else {
    while( true ) {
      dVar19 = *(double *)((longlong)FVar57 + 0x10);
      dVar66 = *(double *)((longlong)FVar57 + 0x18);
      dVar20 = *(double *)((longlong)FVar57 + 0x30);
      dVar21 = *(double *)((longlong)FVar57 + 0x38);
      dVar22 = *(double *)((longlong)FVar57 + 0x50);
      dVar23 = *(double *)((longlong)FVar57 + 0x58);
      auVar62._8_4_ = SUB84(dVar2,0);
      auVar62._0_8_ = dVar2;
      auVar62._12_4_ = uVar67;
      dVar24 = *(double *)((longlong)FVar57 + 0x70);
      dVar25 = *(double *)((longlong)FVar57 + 0x78);
      dVar26 = *(double *)FVar57;
      dVar27 = *(double *)((longlong)FVar57 + 8);
      dVar28 = *(double *)((longlong)FVar57 + 0x20);
      dVar29 = *(double *)((longlong)FVar57 + 0x28);
      dVar30 = *(double *)((longlong)FVar57 + 0x40);
      dVar31 = *(double *)((longlong)FVar57 + 0x48);
      dVar32 = *(double *)((longlong)FVar57 + 0x60);
      dVar33 = *(double *)((longlong)FVar57 + 0x68);
      FVar57 = (ForElementType<UE::Math::TPlane<double>_>)((longlong)FVar57 + 0x80);
      auVar63._8_4_ = SUB84(dVar2,0);
      auVar63._0_8_ = dVar2;
      auVar63._12_4_ = uVar67;
      lVar61 = -(ulonglong)
                (0.0 < (dVar10 * dVar66 + dVar16 * dVar21 + auVar62._8_8_ * dVar23) - dVar25);
      auVar6._8_4_ = (int)lVar61;
      auVar6._0_8_ = -(ulonglong)
                      (0.0 < (dVar10 * dVar19 + dVar16 * dVar20 + dVar2 * dVar22) - dVar24);
      auVar6._12_4_ = (int)((ulonglong)lVar61 >> 0x20);
      iVar52 = movmskpd((int)pTVar53,auVar6);
      auVar64._8_4_ = SUB84(dVar3,0);
      auVar64._0_8_ = dVar3;
      auVar64._12_4_ = uVar68;
      lVar61 = -(ulonglong)
                (0.0 < ((double)local_138._8_8_ * dVar27 + dVar16 * dVar29 + auVar63._8_8_ * dVar31)
                       - dVar33);
      auVar7._8_4_ = (int)lVar61;
      auVar7._0_8_ = -(ulonglong)
                      (0.0 < (dVar10 * dVar26 + dVar16 * dVar28 + dVar2 * dVar30) - dVar32);
      auVar7._12_4_ = (int)((ulonglong)lVar61 >> 0x20);
      uVar40 = movmskpd((int)pTVar44,auVar7);
      uVar40 = iVar52 << 2 | uVar40;
      pTVar53 = (TVector<double> *)(ulonglong)uVar40;
      bVar45 = 0;
      if (uVar40 == 0) {
        bVar45 = (byte)uVar47;
      }
      auVar65._8_4_ = SUB84(dVar3,0);
      auVar65._0_8_ = dVar3;
      auVar65._12_4_ = uVar68;
      lVar61 = -(ulonglong)
                (0.0 < (stack0xfffffffffffffef0 * dVar66 + dVar17 * dVar21 + auVar64._8_8_ * dVar23)
                       - dVar25);
      auVar11._8_4_ = (int)lVar61;
      auVar11._0_8_ =
           -(ulonglong)(0.0 < (dVar4 * dVar19 + dVar17 * dVar20 + dVar3 * dVar22) - dVar24);
      auVar11._12_4_ = (int)((ulonglong)lVar61 >> 0x20);
      iVar52 = movmskpd((int)pTVar51,auVar11);
      lVar61 = -(ulonglong)
                (0.0 < (stack0xfffffffffffffef0 * dVar27 + dVar17 * dVar29 + auVar65._8_8_ * dVar31)
                       - dVar33);
      stack0xfffffffffffffee0 = auVar15._8_8_;
      auVar12._8_4_ = (int)lVar61;
      auVar12._0_8_ =
           -(ulonglong)(0.0 < (dVar4 * dVar26 + dVar17 * dVar28 + dVar3 * dVar30) - dVar32);
      auVar12._12_4_ = (int)((ulonglong)lVar61 >> 0x20);
      uVar41 = movmskpd((uint)uVar47 & 0xff,auVar12);
      uVar41 = iVar52 << 2 | uVar41;
      pTVar51 = (TVector<double> *)(ulonglong)uVar41;
      uVar42 = (uint)bVar56;
      bVar36 = 0;
      if (uVar41 == 0) {
        bVar36 = bVar56;
      }
      bVar56 = bVar36;
      lVar61 = -(ulonglong)
                (0.0 < (stack0xfffffffffffffee0 * dVar66 + dVar18 * dVar21 + local_f8 * dVar23) -
                       dVar25);
      auVar13._8_4_ = (int)lVar61;
      auVar13._0_8_ =
           -(ulonglong)(0.0 < (dVar5 * dVar19 + dVar18 * dVar20 + local_f8 * dVar22) - dVar24);
      auVar13._12_4_ = (int)((ulonglong)lVar61 >> 0x20);
      iVar52 = movmskpd((uint)uVar47,auVar13);
      lVar61 = -(ulonglong)
                (0.0 < (stack0xfffffffffffffee0 * dVar27 + dVar18 * dVar29 + local_f8 * dVar31) -
                       dVar33);
      auVar14._8_4_ = (int)lVar61;
      auVar14._0_8_ =
           -(ulonglong)(0.0 < (dVar5 * dVar26 + dVar18 * dVar28 + local_f8 * dVar30) - dVar32);
      auVar14._12_4_ = (int)((ulonglong)lVar61 >> 0x20);
      uVar42 = movmskpd(uVar42,auVar14);
      uVar42 = iVar52 << 2 | uVar42;
      pTVar44 = (TArray<UE::Math::TPlane<double>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                 *)(ulonglong)bVar55;
      bVar36 = 0;
      if (uVar42 == 0) {
        bVar36 = bVar55;
      }
      bVar55 = bVar36;
      if ((uVar40 & uVar42 & uVar41) != 0) {
        return false;
      }
      iVar54 = iVar54 + 4;
      if (iVar43 <= iVar54) break;
      uVar47 = (ulonglong)bVar45;
    }
    if (bVar45 == 0) {
      if ((bVar56 == 0) && (bVar55 == 0)) {
        _local_128 = ZEXT816(0);
        dStack_f0 = local_f8;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0x10,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
        if (((ulonglong)local_128._0_8_ <= param_1) &&
           (param_1 < (FScriptContainerElement *)(local_128._0_8_ + (longlong)iStack_11c * 0x18))) {
          bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar37) {
            pcVar9 = (code *)swi(3);
            uVar38 = (*pcVar9)();
            return (bool)uVar38;
          }
        }
        pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        iVar43 = local_128._8_4_;
        if (local_128._8_4_ == iStack_11c) {
          iVar43 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)local_128,(int *)(local_128 + 0xc));
          pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        }
        dVar2 = (param_1->field0_0x0)._s_0.Y;
        local_128._8_4_ = iVar43 + 1;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18) = (param_1->field0_0x0)._s_0.X;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18 + 8) = dVar2;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
        pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        if (((ulonglong)local_128._0_8_ <= param_2) &&
           (param_2 < (FScriptContainerElement *)(local_128._0_8_ + (longlong)iStack_11c * 0x18))) {
          bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar37) {
            pcVar9 = (code *)swi(3);
            uVar38 = (*pcVar9)();
            return (bool)uVar38;
          }
          pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        }
        iVar43 = local_128._8_4_;
        if (local_128._8_4_ == iStack_11c) {
          iVar43 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)local_128,(int *)(local_128 + 0xc));
          pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        }
        dVar2 = (param_2->field0_0x0)._s_0.Y;
        local_128._8_4_ = iVar43 + 1;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18) = (param_2->field0_0x0)._s_0.X;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18 + 8) = dVar2;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
        pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        if (((ulonglong)local_128._0_8_ <= param_3) &&
           (param_3 < (FScriptContainerElement *)(local_128._0_8_ + (longlong)iStack_11c * 0x18))) {
          bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar37) {
            pcVar9 = (code *)swi(3);
            uVar38 = (*pcVar9)();
            return (bool)uVar38;
          }
          pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        }
        iVar43 = local_128._8_4_;
        if (local_128._8_4_ == iStack_11c) {
          iVar43 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)local_128,(int *)(local_128 + 0xc));
          pFVar49 = (FScriptContainerElement *)local_128._0_8_;
        }
        dVar2 = (param_3->field0_0x0)._s_0.Y;
        local_128._8_4_ = iVar43 + 1;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18) = (param_3->field0_0x0)._s_0.X;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18 + 8) = dVar2;
        *(double *)(pFVar49 + (longlong)iVar43 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
        local_108 = ZEXT816(0);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0x10,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
        _local_118 = ZEXT816(0);
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0x10,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
        FVar57 = (this->Planes).AllocatorInstance.SecondaryData;
        piVar1 = &(this->Planes).ArrayNum;
        iVar43 = *piVar1;
        if (FVar57 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
          this = (FConvexVolume *)FVar57;
        }
        puVar59 = (uchar *)((longlong)this + 0x18);
        while( true ) {
          if (*piVar1 != iVar43) {
            param_4._0_1_ = 0;
            `TCheckedPointerIterator<UE::Math::TPlane<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&param_4);
          }
          if ((ForElementType<UE::Math::TPlane<double>_> *)(puVar59 + -0x18) ==
              (ForElementType<UE::Math::TPlane<double>_> *)
              ((longlong)iVar43 * 0x20 + (longlong)this)) {
            bVar37 = true;
            goto LAB_1479da206;
          }
          dVar2 = *(double *)
                   ((ForElementType<UE::Math::TPlane<double>_> *)(puVar59 + -0x18))->InlineData;
          dVar3 = *(double *)(puVar59 + -0x10);
          bVar37 = false;
          dVar10 = *(double *)(puVar59 + -8);
          bVar34 = false;
          uVar40 = 0;
          if ((int)local_128._8_4_ < 1) break;
          lVar61 = 0;
          do {
            uVar41 = 0;
            if ((int)uVar40 < (int)local_128._8_4_) {
              uVar41 = ~uVar40 >> 0x1f;
            }
            if ((uVar41 == 0) &&
               (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar39)) {
              pcVar9 = (code *)swi(3);
              uVar38 = (*pcVar9)();
              return (bool)uVar38;
            }
            if (0.0 < (double)(float)(*(double *)(local_128._0_8_ + lVar61 + 0x10) * dVar10 +
                                      *(double *)(local_128._0_8_ + lVar61) * dVar2 +
                                     *(double *)
                                      ((FScriptContainerElement *)(local_128._0_8_ + lVar61) + 8) *
                                     dVar3) - *(double *)puVar59) {
              local_147[0] = (FScriptContainerElement)0x0;
              bVar34 = true;
              if ((((ulonglong)local_108._0_8_ <= local_147) &&
                  (local_147 <
                   (FScriptContainerElement *)(local_108._0_8_ + (longlong)(int)local_108._12_4_)))
                 && (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar39)) {
                pcVar9 = (code *)swi(3);
                uVar38 = (*pcVar9)();
                return (bool)uVar38;
              }
              if (local_108._8_4_ == local_108._12_4_) {
                iVar54 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,(ForAnyElementType *)local_108,(int *)(local_108 + 0xc));
                local_108._8_4_ = iVar54;
              }
              FVar46 = local_147[0];
            }
            else {
              bVar37 = true;
              local_148 = (FScriptContainerElement)0x1;
              if ((((ulonglong)local_108._0_8_ <= &local_148) &&
                  (&local_148 <
                   (FScriptContainerElement *)(local_108._0_8_ + (longlong)(int)local_108._12_4_)))
                 && (bVar39 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar39)) {
                pcVar9 = (code *)swi(3);
                uVar38 = (*pcVar9)();
                return (bool)uVar38;
              }
              if (local_108._8_4_ == local_108._12_4_) {
                iVar54 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x101,(ForAnyElementType *)local_108,(int *)(local_108 + 0xc));
                local_108._8_4_ = iVar54;
              }
              FVar46 = local_148;
            }
            lVar48 = (longlong)(int)local_108._8_4_;
            local_108._8_4_ = local_108._8_4_ + 1;
            uVar40 = uVar40 + 1;
            lVar61 = lVar61 + 0x18;
            *(FScriptContainerElement *)(local_108._0_8_ + lVar48) = FVar46;
          } while ((int)uVar40 < (int)local_128._8_4_);
          if (!bVar37) break;
          if (bVar34) {
            uVar47 = 0;
            uVar41 = local_128._8_4_ - 1;
            uVar40 = 0;
            if ((int)uVar41 < (int)local_128._8_4_) {
              uVar40 = ~uVar41 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar9 = (code *)swi(3);
              uVar38 = (*pcVar9)();
              return (bool)uVar38;
            }
            pFVar49 = (FScriptContainerElement *)(local_128._0_8_ + (longlong)(int)uVar41 * 0x18);
            uVar40 = 0;
            if ((int)uVar41 < (int)local_108._8_4_) {
              uVar40 = ~uVar41 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar9 = (code *)swi(3);
              uVar38 = (*pcVar9)();
              return (bool)uVar38;
            }
            FVar46 = *(FScriptContainerElement *)(local_108._0_8_ + (longlong)(int)uVar41);
            uVar58 = uVar47;
            uVar60 = uVar47;
            if (0 < (int)local_128._8_4_) {
              do {
                uVar41 = (uint)uVar47;
                uVar40 = 0;
                if ((int)uVar41 < (int)local_108._8_4_) {
                  uVar40 = ~uVar41 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar37)) {
                  pcVar9 = (code *)swi(3);
                  uVar38 = (*pcVar9)();
                  return (bool)uVar38;
                }
                FVar8 = *(FScriptContainerElement *)(local_108._0_8_ + uVar58);
                uVar40 = 0;
                if ((int)uVar41 < (int)local_128._8_4_) {
                  uVar40 = ~uVar41 >> 0x1f;
                }
                if ((uVar40 == 0) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar37)) {
                  pcVar9 = (code *)swi(3);
                  uVar38 = (*pcVar9)();
                  return (bool)uVar38;
                }
                pFVar50 = (FScriptContainerElement *)(local_128._0_8_ + uVar60);
                if (FVar8 != FVar46) {
                  dVar16 = *(double *)pFVar49;
                  dVar17 = *(double *)(pFVar49 + 8);
                  dVar4 = *(double *)(pFVar49 + 0x10);
                  dVar18 = *(double *)pFVar50;
                  dVar19 = *(double *)(pFVar50 + 8);
                  dVar5 = *(double *)(pFVar50 + 0x10);
                  dVar66 = (*(double *)puVar59 - (dVar10 * dVar4 + dVar2 * dVar16 + dVar3 * dVar17))
                           / ((dVar5 - dVar4) * dVar10 + (dVar18 - dVar16) * dVar2 +
                             (dVar19 - dVar17) * dVar3);
                  local_138._0_8_ = dVar66;
                  iVar54 = local_118._8_4_;
                  if (local_118._8_4_ == iStack_10c) {
                    iVar54 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,(ForAnyElementType *)local_118,
                                        (int *)(local_118 + 0xc));
                  }
                  lVar61 = (longlong)iVar54;
                  local_118._8_4_ = iVar54 + 1;
                  *(double *)(local_118._0_8_ + lVar61 * 0x18) = (dVar18 - dVar16) * dVar66 + dVar16
                  ;
                  *(double *)(local_118._0_8_ + lVar61 * 0x18 + 8) =
                       (dVar19 - dVar17) * dVar66 + dVar17;
                  *(double *)(local_118._0_8_ + lVar61 * 0x18 + 0x10) =
                       (dVar5 - dVar4) * dVar66 + dVar4;
                }
                if (FVar8 != (FScriptContainerElement)0x0) {
                  if (((ulonglong)local_118._0_8_ <= pFVar50) &&
                     (pFVar50 < (FScriptContainerElement *)
                                (local_118._0_8_ + (longlong)iStack_10c * 0x18))) {
                    bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar37) {
                      pcVar9 = (code *)swi(3);
                      uVar38 = (*pcVar9)();
                      return (bool)uVar38;
                    }
                  }
                  pFVar49 = (FScriptContainerElement *)local_118._0_8_;
                  iVar54 = local_118._8_4_;
                  if (local_118._8_4_ == iStack_10c) {
                    iVar54 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,(ForAnyElementType *)local_118,
                                        (int *)(local_118 + 0xc));
                    pFVar49 = (FScriptContainerElement *)local_118._0_8_;
                  }
                  local_118._8_4_ = iVar54 + 1;
                  dVar4 = *(double *)(pFVar50 + 8);
                  *(double *)(pFVar49 + (longlong)iVar54 * 0x18) = *(double *)pFVar50;
                  *(double *)(pFVar49 + (longlong)iVar54 * 0x18 + 8) = dVar4;
                  *(double *)(pFVar49 + (longlong)iVar54 * 0x18 + 0x10) =
                       *(double *)(pFVar50 + 0x10);
                }
                uVar47 = (ulonglong)(uVar41 + 1);
                pFVar49 = pFVar50;
                uVar58 = uVar58 + 1;
                uVar60 = uVar60 + 0x18;
                FVar46 = FVar8;
              } while ((int)(uVar41 + 1) < (int)local_128._8_4_);
            }
            if (local_118._8_4_ == 0) break;
            if ((int)local_118._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_118._8_4_);
            }
            local_108._8_4_ = 0;
            if ((int)local_108._12_4_ < (int)local_118._8_4_) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_118._8_4_,(ForAnyElementType *)local_108,0,
                         (int *)(local_108 + 0xc));
            }
            auVar6 = _local_128;
            uVar35 = local_128._0_8_;
            lVar61 = (longlong)stack0xfffffffffffffee0;
            _local_128 = _local_118;
            iStack_10c = auVar6._12_4_;
            local_118._8_4_ = 0;
            local_118._0_8_ = uVar35;
            if ((lVar61 < 0) && (iStack_10c != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
            }
          }
          puVar59 = puVar59 + 0x20;
        }
        bVar37 = false;
LAB_1479da206:
        if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_118._0_8_);
        }
        if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_108._0_8_);
        }
        if ((FScriptContainerElement *)local_128._0_8_ == (FScriptContainerElement *)0x0) {
          return bVar37;
        }
        FMemory::Free((void *)local_128._0_8_);
        return bVar37;
      }
    }
    else if ((bVar56 != 0) && (bVar55 != 0)) goto LAB_1479d9702;
    bVar37 = false;
  }
  *param_4 = bVar37;
  return true;
}

