// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 32

// TUniformGridBase<double,3> @ 14373bf50

TUniformGridBase<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::TUniformGridBase<double,3>
          (TUniformGridBase<double,3> *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<int,3> *param_3,uint param_4)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TUniformGridBase<double,3> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->MMinCorner = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MMinCorner).field_0x8 = uVar2;
  *(undefined8 *)&(this->MMinCorner).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->MMaxCorner = *(undefined8 *)param_2;
  *(undefined8 *)&(this->MMaxCorner).field_0x8 = uVar2;
  *(undefined8 *)&(this->MMaxCorner).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->MCells).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  (this->MCells).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  if (((this->MCells).field0_0x0._s_0.X == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TUniformGridBase<double,3> *)(*pcVar5)();
    return pTVar8;
  }
  if (((this->MCells).field0_0x0._s_0.Y == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TUniformGridBase<double,3> *)(*pcVar5)();
    return pTVar8;
  }
  if (((this->MCells).field0_0x0._s_0.Z == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TUniformGridBase<double,3> *)(*pcVar5)();
    return pTVar8;
  }
  lVar9 = 0;
  pTVar8 = this;
  if (((((*(double *)&this->MMaxCorner == __real_ffefffffffffffff) &&
        (__real_ffefffffffffffff == *(double *)&(this->MMaxCorner).field_0x8)) &&
       (__real_ffefffffffffffff == *(double *)&(this->MMaxCorner).field_0x10)) &&
      ((__real_7fefffffffffffff == *(double *)&this->MMinCorner &&
       (__real_7fefffffffffffff == *(double *)&(this->MMinCorner).field_0x8)))) &&
     (__real_7fefffffffffffff == *(double *)&(this->MMinCorner).field_0x10)) {
LAB_14373c0ad:
    *(undefined8 *)&this->MDx = 0;
    *(undefined8 *)&(this->MDx).field_0x8 = 0;
    *(undefined8 *)&(this->MDx).field_0x10 = 0;
    *(undefined8 *)&this->MMaxCorner = 0;
    *(undefined8 *)&(this->MMaxCorner).field_0x8 = 0;
    *(undefined8 *)&(this->MMaxCorner).field_0x10 = 0;
    *(undefined8 *)&this->MMinCorner = 0;
    *(undefined8 *)&(this->MMinCorner).field_0x8 = 0;
    *(undefined8 *)&(this->MMinCorner).field_0x10 = 0;
  }
  else {
    do {
      if (*(double *)&pTVar8->MMaxCorner <= *(double *)&pTVar8->MMinCorner &&
          *(double *)&pTVar8->MMinCorner != *(double *)&pTVar8->MMaxCorner) goto LAB_14373c0ad;
      lVar9 = lVar9 + 1;
      pTVar8 = (TUniformGridBase<double,3> *)&(pTVar8->MMinCorner).field_0x8;
    } while (lVar9 < 3);
    auVar13._0_8_ =
         *(double *)&(this->MMaxCorner).field_0x8 - *(double *)&(this->MMinCorner).field_0x8;
    auVar13._8_8_ =
         *(double *)&(this->MMaxCorner).field_0x10 - *(double *)&(this->MMinCorner).field_0x10;
    *(double *)&this->MDx =
         (*(double *)&this->MMaxCorner - *(double *)&this->MMinCorner) /
         (double)(this->MCells).field0_0x0._s_0.X;
    uVar2 = *(undefined8 *)((longlong)&(this->MCells).field0_0x0 + 4);
    auVar14._0_8_ = (double)(int)uVar2;
    auVar14._8_8_ = (double)(int)((ulonglong)uVar2 >> 0x20);
    auVar14 = divpd(auVar13,auVar14);
    *(undefined1 (*) [16])&(this->MDx).field_0x8 = auVar14;
  }
  puVar10 = &(this->MMaxCorner).field_0x10;
  if (param_4 != 0) {
    dVar3 = *(double *)&(this->MMinCorner).field_0x8;
    dVar16 = (double)param_4;
    dVar15 = dVar16 * *(double *)&this->MDx;
    dVar11 = *(double *)&(this->MDx).field_0x8;
    dVar4 = *(double *)&(this->MDx).field_0x10;
    *(double *)&this->MMinCorner = *(double *)&this->MMinCorner - dVar15;
    *(double *)&(this->MMinCorner).field_0x8 = dVar3 - dVar16 * dVar11;
    *(double *)&(this->MMinCorner).field_0x10 =
         *(double *)&(this->MMinCorner).field_0x10 - dVar16 * dVar4;
    dVar3 = *(double *)&(this->MDx).field_0x8;
    dVar11 = *(double *)&(this->MDx).field_0x10;
    dVar4 = *(double *)&(this->MMaxCorner).field_0x8;
    iVar7 = (int)(dVar16 + dVar16);
    dVar12 = *(double *)puVar10;
    *(double *)&this->MMaxCorner = dVar15 + *(double *)&this->MMaxCorner;
    *(double *)&(this->MMaxCorner).field_0x8 = dVar16 * dVar3 + dVar4;
    *(double *)puVar10 = dVar16 * dVar11 + dVar12;
    (this->MCells).field0_0x0._s_0.X = (this->MCells).field0_0x0._s_0.X + iVar7;
    piVar1 = &(this->MCells).field0_0x0._s_0.Y;
    *piVar1 = *piVar1 + iVar7;
    piVar1 = &(this->MCells).field0_0x0._s_0.Z;
    *piVar1 = *piVar1 + iVar7;
  }
  dVar4 = __real_432fffd19b7df000;
  dVar3 = *(double *)&(this->MDx).field_0x8;
  dVar11 = *(double *)&this->MDx;
  if (((dVar3 <= dVar11) ||
      (dVar12 = *(double *)&(this->MDx).field_0x10, dVar15 = dVar11, dVar12 <= dVar11)) &&
     (dVar12 = *(double *)&(this->MDx).field_0x10, dVar15 = dVar3, dVar12 <= dVar3)) {
    dVar15 = dVar12;
  }
  if (__real_3e45798ee0000000 <= dVar15) {
    dVar11 = *(double *)&this->MMinCorner / dVar11;
    dVar12 = *(double *)&(this->MMinCorner).field_0x10 / dVar12;
    dVar3 = *(double *)&(this->MMinCorner).field_0x8 / dVar3;
    if ((__real_432fffd19b7df000 <=
         (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5639547326734270381>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                           ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TUniformGridBase<double,3> *)(*pcVar5)();
      return pTVar8;
    }
    if ((dVar4 <= (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
       && (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5639547326734270381>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                              ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TUniformGridBase<double,3> *)(*pcVar5)();
      return pTVar8;
    }
    if ((dVar4 <= (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
       && (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5639547326734270381>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                              ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TUniformGridBase<double,3> *)(*pcVar5)();
      return pTVar8;
    }
  }
  return this;
}

// Cell @ 1437597f0

TVector<int,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Cell
          (TUniformGridBase<double,3> *this,TVector<int,3> *__return_storage_ptr__,
          TVector<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  dVar1 = *(double *)&param_1->field_0x10;
  dVar2 = *(double *)&(this->MMinCorner).field_0x10;
  dVar3 = *(double *)&(this->MDx).field_0x10;
  iVar5 = (int)((*(double *)&param_1->field_0x8 - *(double *)&(this->MMinCorner).field_0x8) /
               *(double *)&(this->MDx).field_0x8);
  iVar7 = (int)((*(double *)param_1 - *(double *)&this->MMinCorner) / *(double *)&this->MDx);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar5;
  iVar6 = (int)((dVar1 - dVar2) / dVar3);
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar6;
  iVar4 = (this->MCells).field0_0x0._s_0.X;
  if (iVar7 < iVar4) {
    if (iVar7 < 0) {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = iVar4 + -1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar7;
  iVar7 = (this->MCells).field0_0x0._s_0.Y;
  if (iVar5 < iVar7) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = iVar7 + -1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar5;
  iVar7 = (this->MCells).field0_0x0._s_0.Z;
  if (iVar7 <= iVar6) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar7 + -1;
    return __return_storage_ptr__;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar6;
  return __return_storage_ptr__;
}

// TUniformGridBase<double,2> @ 143af9680

TUniformGridBase<double,2> * __thiscall
Chaos::TUniformGridBase<double,2>::TUniformGridBase<double,2>
          (TUniformGridBase<double,2> *this,TVector<double,2> *param_1,TVector<double,2> *param_2,
          TVector<int,2> *param_3,uint param_4)

{
  int *piVar1;
  TVector<int,2>_u_0_s_0 TVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TUniformGridBase<double,2> *pTVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->MMinCorner = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MMinCorner).field_0x8 = uVar4;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->MMaxCorner = *(undefined8 *)param_2;
  *(undefined8 *)&(this->MMaxCorner).field_0x8 = uVar4;
  TVar2 = (param_3->field0_0x0)._s_0;
  (this->MCells).field0_0x0._s_0 = TVar2;
  if ((TVar2.X == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TUniformGridBase<double,2> *)(*pcVar3)();
    return pTVar6;
  }
  if (((this->MCells).field0_0x0._s_0.Y == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TUniformGridBase<double,2> *)(*pcVar3)();
    return pTVar6;
  }
  lVar7 = 0;
  pTVar6 = this;
  if ((((*(double *)&this->MMaxCorner == __real_ffefffffffffffff) &&
       (__real_ffefffffffffffff == *(double *)&(this->MMaxCorner).field_0x8)) &&
      (__real_7fefffffffffffff == *(double *)&this->MMinCorner)) &&
     (__real_7fefffffffffffff == *(double *)&(this->MMinCorner).field_0x8)) {
LAB_143af977c:
    *(undefined8 *)&this->MDx = 0;
    *(undefined8 *)&(this->MDx).field_0x8 = 0;
    *(undefined8 *)&this->MMaxCorner = 0;
    *(undefined8 *)&(this->MMaxCorner).field_0x8 = 0;
    *(undefined8 *)&this->MMinCorner = 0;
    *(undefined8 *)&(this->MMinCorner).field_0x8 = 0;
    dVar9 = *(double *)&(this->MDx).field_0x8;
  }
  else {
    do {
      if (*(double *)&pTVar6->MMaxCorner <= *(double *)&pTVar6->MMinCorner &&
          *(double *)&pTVar6->MMinCorner != *(double *)&pTVar6->MMaxCorner) goto LAB_143af977c;
      lVar7 = lVar7 + 1;
      pTVar6 = (TUniformGridBase<double,2> *)&(pTVar6->MMinCorner).field_0x8;
    } while (lVar7 < 2);
    dVar9 = (*(double *)&(this->MMaxCorner).field_0x8 - *(double *)&(this->MMinCorner).field_0x8) /
            (double)(this->MCells).field0_0x0._s_0.Y;
    *(double *)&this->MDx =
         (*(double *)&this->MMaxCorner - *(double *)&this->MMinCorner) /
         (double)(this->MCells).field0_0x0._s_0.X;
    *(double *)&(this->MDx).field_0x8 = dVar9;
  }
  if (param_4 != 0) {
    dVar11 = (double)param_4;
    dVar10 = dVar11 * *(double *)&this->MDx;
    *(double *)&this->MMinCorner = *(double *)&this->MMinCorner - dVar10;
    *(double *)&(this->MMinCorner).field_0x8 =
         *(double *)&(this->MMinCorner).field_0x8 - dVar11 * dVar9;
    dVar9 = *(double *)&(this->MDx).field_0x8;
    dVar8 = *(double *)&(this->MMaxCorner).field_0x8;
    *(double *)&this->MMaxCorner = dVar10 + *(double *)&this->MMaxCorner;
    *(double *)&(this->MMaxCorner).field_0x8 = dVar11 * dVar9 + dVar8;
    (this->MCells).field0_0x0._s_0.X = (this->MCells).field0_0x0._s_0.X + (int)(dVar11 + dVar11);
    piVar1 = &(this->MCells).field0_0x0._s_0.Y;
    *piVar1 = *piVar1 + (int)(dVar11 + dVar11);
  }
  dVar11 = __real_432fffd19b7df000;
  dVar9 = *(double *)&(this->MDx).field_0x8;
  dVar8 = *(double *)&this->MDx;
  dVar10 = dVar9;
  if (dVar8 <= dVar9) {
    dVar10 = dVar8;
  }
  if (__real_3e45798ee0000000 <= dVar10) {
    dVar8 = *(double *)&this->MMinCorner / dVar8;
    dVar9 = *(double *)&(this->MMinCorner).field_0x8 / dVar9;
    if ((__real_432fffd19b7df000 <=
         (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5639547326734270381>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                           ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TUniformGridBase<double,2> *)(*pcVar3)();
      return pTVar6;
    }
    if ((dVar11 <= (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
       && (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5639547326734270381>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                              ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"
                             ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TUniformGridBase<double,2> *)(*pcVar3)();
      return pTVar6;
    }
  }
  return this;
}

// LinearlyInterpolate<double> @ 143e9c5b0

double __thiscall
Chaos::TUniformGridBase<double,3>::LinearlyInterpolate<double>
          (TUniformGridBase<double,3> *this,TArrayND<double,3> *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  TVector<int,3>_u_0 local_78;
  double local_68;
  double local_60;
  double local_58;
  
  dVar6 = *(double *)param_2;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar2 = *(double *)&param_2->field_0x10;
  iVar3 = (this->MCells).field0_0x0._s_0.X;
  local_58 = *(double *)&(this->MDx).field_0x10;
  local_60 = *(double *)&(this->MDx).field_0x8;
  local_68 = *(double *)&this->MDx;
  local_78._s_0.X = (int)((dVar6 - *(double *)&this->MMinCorner) / local_68);
  local_78._s_0.Y = (int)((dVar1 - *(double *)&(this->MMinCorner).field_0x8) / local_60);
  local_78._s_0.Z = (int)((dVar2 - *(double *)&(this->MMinCorner).field_0x10) / local_58);
  if (local_78._s_0.X < iVar3) {
    if (local_78._s_0.X < 0) {
      local_78._s_0.X = 0;
    }
  }
  else {
    local_78._s_0.X = iVar3 + -1;
  }
  iVar4 = (this->MCells).field0_0x0._s_0.Y;
  if (local_78._s_0.Y < iVar4) {
    if (local_78._s_0.Y < 0) {
      local_78._s_0.Y = 0;
    }
  }
  else {
    local_78._s_0.Y = iVar4 + -1;
  }
  iVar5 = (this->MCells).field0_0x0._s_0.Z;
  if (local_78._s_0.Z < iVar5) {
    if (local_78._s_0.Z < 0) {
      local_78._s_0.Z = 0;
    }
  }
  else {
    local_78._s_0.Z = iVar5 + -1;
  }
  if (dVar6 <= ((double)local_78._s_0.X + __real_3fe0000000000000) * local_68 +
               *(double *)&this->MMinCorner) {
    local_78._s_0.X = local_78._s_0.X + -1;
  }
  if (dVar1 <= (double)local_78._s_0.Y * local_60 + *(double *)&(this->MMinCorner).field_0x8 +
               local_60 * __real_3fe0000000000000) {
    local_78._s_0.Y = local_78._s_0.Y + -1;
  }
  if (dVar2 <= (double)local_78._s_0.Z * local_58 + *(double *)&(this->MMinCorner).field_0x10 +
               local_58 * __real_3fe0000000000000) {
    local_78._s_0.Z = local_78._s_0.Z + -1;
  }
  local_68 = (dVar6 - (((double)local_78._s_0.X + __real_3fe0000000000000) * local_68 +
                      *(double *)&this->MMinCorner)) / local_68;
  local_60 = (dVar1 - ((double)local_78._s_0.Y * local_60 + *(double *)&(this->MMinCorner).field_0x8
                      + local_60 * __real_3fe0000000000000)) / local_60;
  local_58 = (dVar2 - ((double)local_78._s_0.Z * local_58 +
                       *(double *)&(this->MMinCorner).field_0x10 +
                      local_58 * __real_3fe0000000000000)) / local_58;
  if (local_78._s_0.X == -1) {
    local_68 = 0.0;
    local_78._s_0.X = 0;
  }
  if (local_78._s_0.X == iVar3 + -1) {
    local_78._s_0.X = iVar3 + -2;
    local_68 = __real_3ff0000000000000;
  }
  if (local_78._s_0.Y == -1) {
    local_60 = 0.0;
    local_78._s_0.Y = 0;
  }
  if (local_78._s_0.Y == iVar4 + -1) {
    local_78._s_0.Y = iVar4 + -2;
    local_60 = __real_3ff0000000000000;
  }
  if (local_78._s_0.Z == -1) {
    local_58 = 0.0;
    local_78._s_0.Z = 0;
  }
  if (local_78._s_0.Z == iVar5 + -1) {
    local_78._s_0.Z = iVar5 + -2;
    local_58 = __real_3ff0000000000000;
  }
  dVar6 = LinearlyInterpolateHelper<double,double>
                    (param_1,(TVector<int,3> *)&local_78._s_0,(TVector<double,3> *)&local_68);
  return dVar6;
}

// LinearlyInterpolate<Chaos::TVector<double,3>_> @ 143e9c830

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::LinearlyInterpolate<Chaos::TVector<double,3>_>
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TArrayND<Chaos::TVector<double,3>,3> *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  TVector<int,3>_u_0 local_78;
  double local_68;
  double local_60;
  double local_58;
  
  dVar1 = *(double *)param_2;
  dVar2 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)&param_2->field_0x10;
  iVar4 = (this->MCells).field0_0x0._s_0.X;
  local_58 = *(double *)&(this->MDx).field_0x10;
  local_60 = *(double *)&(this->MDx).field_0x8;
  local_68 = *(double *)&this->MDx;
  local_78._s_0.X = (int)((dVar1 - *(double *)&this->MMinCorner) / local_68);
  local_78._s_0.Y = (int)((dVar2 - *(double *)&(this->MMinCorner).field_0x8) / local_60);
  local_78._s_0.Z = (int)((dVar3 - *(double *)&(this->MMinCorner).field_0x10) / local_58);
  if (local_78._s_0.X < iVar4) {
    if (local_78._s_0.X < 0) {
      local_78._s_0.X = 0;
    }
  }
  else {
    local_78._s_0.X = iVar4 + -1;
  }
  iVar5 = (this->MCells).field0_0x0._s_0.Y;
  if (local_78._s_0.Y < iVar5) {
    if (local_78._s_0.Y < 0) {
      local_78._s_0.Y = 0;
    }
  }
  else {
    local_78._s_0.Y = iVar5 + -1;
  }
  iVar6 = (this->MCells).field0_0x0._s_0.Z;
  if (local_78._s_0.Z < iVar6) {
    if (local_78._s_0.Z < 0) {
      local_78._s_0.Z = 0;
    }
  }
  else {
    local_78._s_0.Z = iVar6 + -1;
  }
  if (dVar1 <= ((double)local_78._s_0.X + __real_3fe0000000000000) * local_68 +
               *(double *)&this->MMinCorner) {
    local_78._s_0.X = local_78._s_0.X + -1;
  }
  if (dVar2 <= (double)local_78._s_0.Y * local_60 + *(double *)&(this->MMinCorner).field_0x8 +
               local_60 * __real_3fe0000000000000) {
    local_78._s_0.Y = local_78._s_0.Y + -1;
  }
  if (dVar3 <= (double)local_78._s_0.Z * local_58 + *(double *)&(this->MMinCorner).field_0x10 +
               local_58 * __real_3fe0000000000000) {
    local_78._s_0.Z = local_78._s_0.Z + -1;
  }
  local_68 = (dVar1 - (((double)local_78._s_0.X + __real_3fe0000000000000) * local_68 +
                      *(double *)&this->MMinCorner)) / local_68;
  local_60 = (dVar2 - ((double)local_78._s_0.Y * local_60 + *(double *)&(this->MMinCorner).field_0x8
                      + local_60 * __real_3fe0000000000000)) / local_60;
  local_58 = (dVar3 - ((double)local_78._s_0.Z * local_58 +
                       *(double *)&(this->MMinCorner).field_0x10 +
                      local_58 * __real_3fe0000000000000)) / local_58;
  if (local_78._s_0.X == -1) {
    local_68 = 0.0;
    local_78._s_0.X = 0;
  }
  if (local_78._s_0.X == iVar4 + -1) {
    local_78._s_0.X = iVar4 + -2;
    local_68 = __real_3ff0000000000000;
  }
  if (local_78._s_0.Y == -1) {
    local_60 = 0.0;
    local_78._s_0.Y = 0;
  }
  if (local_78._s_0.Y == iVar5 + -1) {
    local_78._s_0.Y = iVar5 + -2;
    local_60 = __real_3ff0000000000000;
  }
  if (local_78._s_0.Z == -1) {
    local_58 = 0.0;
    local_78._s_0.Z = 0;
  }
  if (local_78._s_0.Z == iVar6 + -1) {
    local_78._s_0.Z = iVar6 + -2;
    local_58 = __real_3ff0000000000000;
  }
  LinearlyInterpolateHelper<Chaos::TVector<double,3>,double>
            (__return_storage_ptr__,param_1,(TVector<int,3> *)&local_78._s_0,
             (TVector<double,3> *)&local_68);
  return __return_storage_ptr__;
}

// TUniformGridBase<float,3> @ 143eb0650

TUniformGridBase<float,3> * __thiscall
Chaos::TUniformGridBase<float,3>::TUniformGridBase<float,3>
          (TUniformGridBase<float,3> *this,TVector<float,3> *param_1,TVector<float,3> *param_2,
          TVector<int,3> *param_3,uint param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TUniformGridBase<float,3> *pTVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *(undefined8 *)&this->MMinCorner = *(undefined8 *)param_1;
  *(undefined4 *)&(this->MMinCorner).field_0x8 = *(undefined4 *)&param_1->field_0x8;
  *(undefined8 *)&this->MMaxCorner = *(undefined8 *)param_2;
  *(undefined4 *)&(this->MMaxCorner).field_0x8 = *(undefined4 *)&param_2->field_0x8;
  *(undefined8 *)&(this->MCells).field0_0x0 = *(undefined8 *)&param_3->field0_0x0;
  (this->MCells).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  if (((this->MCells).field0_0x0._s_0.X == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TUniformGridBase<float,3> *)(*pcVar6)();
    return pTVar9;
  }
  if (((this->MCells).field0_0x0._s_0.Y == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TUniformGridBase<float,3> *)(*pcVar6)();
    return pTVar9;
  }
  if (((this->MCells).field0_0x0._s_0.Z == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MCells[Axis] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                         ,0x25,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pTVar9 = (TUniformGridBase<float,3> *)(*pcVar6)();
    return pTVar9;
  }
  lVar10 = 0;
  pTVar9 = this;
  if (((((*(float *)&this->MMaxCorner == __real_ff7fffff) &&
        (__real_ff7fffff == *(float *)&(this->MMaxCorner).field_0x4)) &&
       (__real_ff7fffff == *(float *)&(this->MMaxCorner).field_0x8)) &&
      ((__real_7f7fffff == *(float *)&this->MMinCorner &&
       (__real_7f7fffff == *(float *)&(this->MMinCorner).field_0x4)))) &&
     (__real_7f7fffff == *(float *)&(this->MMinCorner).field_0x8)) {
LAB_143eb07b4:
    *(undefined8 *)&this->MDx = 0;
    *(undefined4 *)&(this->MDx).field_0x8 = 0;
    *(undefined4 *)&this->MMaxCorner = 0;
    *(undefined8 *)&(this->MMaxCorner).field_0x4 = 0;
    *(undefined8 *)&this->MMinCorner = 0;
    *(undefined4 *)&(this->MMinCorner).field_0x8 = 0;
  }
  else {
    do {
      if (*(float *)&pTVar9->MMaxCorner <= *(float *)&pTVar9->MMinCorner &&
          *(float *)&pTVar9->MMinCorner != *(float *)&pTVar9->MMaxCorner) goto LAB_143eb07b4;
      lVar10 = lVar10 + 1;
      pTVar9 = (TUniformGridBase<float,3> *)&(pTVar9->MMinCorner).field_0x4;
    } while (lVar10 < 3);
    fVar2 = *(float *)&(this->MMaxCorner).field_0x4;
    iVar8 = (this->MCells).field0_0x0._s_0.Y;
    fVar3 = *(float *)&(this->MMinCorner).field_0x4;
    fVar4 = *(float *)&(this->MMaxCorner).field_0x8;
    fVar11 = *(float *)&(this->MMinCorner).field_0x8;
    iVar5 = (this->MCells).field0_0x0._s_0.Z;
    *(float *)&this->MDx =
         (*(float *)&this->MMaxCorner - *(float *)&this->MMinCorner) /
         (float)(this->MCells).field0_0x0._s_0.X;
    *(float *)&(this->MDx).field_0x4 = (fVar2 - fVar3) / (float)iVar8;
    *(float *)&(this->MDx).field_0x8 = (fVar4 - fVar11) / (float)iVar5;
  }
  if (param_4 != 0) {
    fVar2 = *(float *)&(this->MMinCorner).field_0x4;
    fVar13 = (float)param_4;
    fVar12 = fVar13 * *(float *)&this->MDx;
    fVar3 = *(float *)&(this->MDx).field_0x4;
    fVar4 = *(float *)&(this->MDx).field_0x8;
    *(float *)&this->MMinCorner = *(float *)&this->MMinCorner - fVar12;
    *(float *)&(this->MMinCorner).field_0x4 = fVar2 - fVar13 * fVar3;
    *(float *)&(this->MMinCorner).field_0x8 =
         *(float *)&(this->MMinCorner).field_0x8 - fVar13 * fVar4;
    fVar2 = *(float *)&(this->MDx).field_0x4;
    fVar3 = *(float *)&(this->MDx).field_0x8;
    fVar4 = *(float *)&(this->MMaxCorner).field_0x4;
    fVar11 = *(float *)&(this->MMaxCorner).field_0x8;
    iVar8 = (int)(fVar13 + fVar13);
    *(float *)&this->MMaxCorner = fVar12 + *(float *)&this->MMaxCorner;
    *(float *)&(this->MMaxCorner).field_0x4 = fVar13 * fVar2 + fVar4;
    *(float *)&(this->MMaxCorner).field_0x8 = fVar13 * fVar3 + fVar11;
    (this->MCells).field0_0x0._s_0.X = (this->MCells).field0_0x0._s_0.X + iVar8;
    piVar1 = &(this->MCells).field0_0x0._s_0.Y;
    *piVar1 = *piVar1 + iVar8;
    piVar1 = &(this->MCells).field0_0x0._s_0.Z;
    *piVar1 = *piVar1 + iVar8;
  }
  fVar4 = __real_4b189680;
  fVar2 = *(float *)&(this->MDx).field_0x4;
  fVar3 = *(float *)&this->MDx;
  if (((fVar2 <= fVar3) ||
      (fVar11 = *(float *)&(this->MDx).field_0x8, fVar12 = fVar3, fVar11 <= fVar3)) &&
     (fVar11 = *(float *)&(this->MDx).field_0x8, fVar12 = fVar2, fVar11 <= fVar2)) {
    fVar12 = fVar11;
  }
  if (__real_322bcc77 <= fVar12) {
    fVar12 = *(float *)&(this->MMinCorner).field_0x4;
    fVar13 = *(float *)&(this->MMinCorner).field_0x8;
    if ((__real_4b189680 <=
         (float)((uint)(*(float *)&this->MMinCorner / fVar3) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5639547326734270381>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                           ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TUniformGridBase<float,3> *)(*pcVar6)();
      return pTVar9;
    }
    if ((fVar4 <= (float)((uint)(fVar12 / fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5639547326734270381>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                           ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TUniformGridBase<float,3> *)(*pcVar6)();
      return pTVar9;
    }
    if ((fVar4 <= (float)((uint)(fVar13 / fVar11) & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5639547326734270381>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\UniformGrid.h"
                           ,0x53,"FMath::Abs(MinToDXRatio[Axis]) < TGridPrecisionLimit<T>::value"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TUniformGridBase<float,3> *)(*pcVar6)();
      return pTVar9;
    }
  }
  return this;
}

// TUniformGridBase<double,3> @ 143eb09a0

TUniformGridBase<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::TUniformGridBase<double,3>(TUniformGridBase<double,3> *this)

{
  return this;
}

// ~TUniformGridBase<double,3> @ 143eb2050

void __thiscall
Chaos::TUniformGridBase<double,3>::~TUniformGridBase<double,3>(TUniformGridBase<double,3> *this)

{
  return;
}

// CellUnsafe @ 143eb8c80

TVector<int,3> * __thiscall
Chaos::TUniformGridBase<double,3>::CellUnsafe
          (TUniformGridBase<double,3> *this,TVector<int,3> *__return_storage_ptr__,
          TVector<double,3> *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)param_1 - *(double *)&this->MMinCorner;
  dVar6 = *(double *)&param_1->field_0x10 - *(double *)&(this->MMinCorner).field_0x10;
  dVar7 = *(double *)&param_1->field_0x8 - *(double *)&(this->MMinCorner).field_0x8;
  dVar1 = *(double *)&(this->MDx).field_0x10;
  iVar2 = (int)(dVar5 / *(double *)&this->MDx);
  iVar4 = (int)(dVar7 / *(double *)&(this->MDx).field_0x8);
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar2;
  iVar3 = (int)(dVar6 / dVar1);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar3;
  if (dVar5 < 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = iVar2 + -1;
  }
  if (dVar7 < 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar4 + -1;
  }
  if (dVar6 < 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar3 + -1;
  }
  return __return_storage_ptr__;
}

// Counts @ 143eba2f0

TVector<int,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Counts(TUniformGridBase<double,3> *this)

{
  return &this->MCells;
}

// DomainSize @ 143ebcf40

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::DomainSize
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)&(this->MMaxCorner).field_0x8;
  dVar2 = *(double *)&(this->MMinCorner).field_0x8;
  *(double *)__return_storage_ptr__ = *(double *)&this->MMaxCorner - *(double *)&this->MMinCorner;
  dVar3 = *(double *)&(this->MMaxCorner).field_0x10;
  dVar4 = *(double *)&(this->MMinCorner).field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar1 - dVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar3 - dVar4;
  return __return_storage_ptr__;
}

// Dx @ 143ebd160

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Dx(TUniformGridBase<double,3> *this)

{
  return &this->MDx;
}

// Face @ 143ebd1d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<int,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Face
          (TUniformGridBase<double,3> *this,TVector<int,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_28;
  double dStack_20;
  
  dVar1 = *(double *)&(this->MDx).field_0x10;
  dVar13 = dVar1 * __real_3fe0000000000000;
  if (param_2 == 0) {
    local_28 = ___xmm_00000000000000003ff0000000000000;
    dStack_20 = _UNK_150689518;
    dVar11 = 0.0;
  }
  else if (param_2 == 1) {
    local_28 = ___xmm_3ff00000000000000000000000000000;
    dStack_20 = _UNK_15061cbc8;
    dVar11 = 0.0;
  }
  else {
    local_28 = 0.0;
    dStack_20 = 0.0;
    dVar11 = __real_3ff0000000000000;
  }
  dVar2 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)&(this->MMinCorner).field_0x10;
  dVar12 = *(double *)&(this->MDx).field_0x8 * dStack_20 * __real_3fe0000000000000;
  dVar4 = *(double *)&param_1->field_0x8;
  iVar10 = (int)(((local_28 * *(double *)&this->MDx * __real_3fe0000000000000 + *(double *)param_1)
                 - *(double *)&this->MMinCorner) / *(double *)&this->MDx);
  dVar5 = *(double *)&(this->MMinCorner).field_0x8;
  dVar6 = *(double *)&(this->MDx).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar10;
  iVar9 = (int)(((dVar13 * dVar11 + dVar2) - dVar3) / dVar1);
  iVar8 = (int)(((dVar12 + dVar4) - dVar5) / dVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar8;
  iVar7 = (this->MCells).field0_0x0._s_0.X;
  if (iVar10 < iVar7) {
    if (iVar10 < 0) {
      iVar10 = 0;
    }
  }
  else {
    iVar10 = iVar7 + -1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = iVar10;
  iVar10 = (this->MCells).field0_0x0._s_0.Y;
  if (iVar8 < iVar10) {
    if (iVar8 < 0) {
      iVar8 = 0;
    }
  }
  else {
    iVar8 = iVar10 + -1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Y = iVar8;
  iVar10 = (this->MCells).field0_0x0._s_0.Z;
  if (iVar10 <= iVar9) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar10 + -1;
    return __return_storage_ptr__;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar9;
  return __return_storage_ptr__;
}

// FlatIndex @ 143ebf750

int __thiscall
Chaos::TUniformGridBase<double,3>::FlatIndex
          (TUniformGridBase<double,3> *this,TVector<int,2> *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (this->MCells).field0_0x0._s_0.Y;
  iVar2 = iVar1 + 1;
  if (!param_2) {
    iVar2 = iVar1;
  }
  return iVar2 * (param_1->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.Y;
}

// FlatIndex @ 143ebf770

int __thiscall
Chaos::TUniformGridBase<double,3>::FlatIndex
          (TUniformGridBase<double,3> *this,TVector<int,3> *param_1,bool param_2)

{
  if (param_2) {
    return (((this->MCells).field0_0x0._s_0.Y + 1) * (param_1->field0_0x0)._s_0.X +
           (param_1->field0_0x0)._s_0.Y) * ((this->MCells).field0_0x0._s_0.Z + 1) +
           (param_1->field0_0x0)._s_0.Z;
  }
  return ((param_1->field0_0x0)._s_0.X * (this->MCells).field0_0x0._s_0.Y +
         (param_1->field0_0x0)._s_0.Y) * (this->MCells).field0_0x0._s_0.Z +
         (param_1->field0_0x0)._s_0.Z;
}

// FlatToMultiIndex @ 143ebf7b0

void __thiscall
Chaos::TUniformGridBase<double,3>::FlatToMultiIndex
          (TUniformGridBase<double,3> *this,int param_1,TVector<int,2> *param_2,bool param_3)

{
  int iVar1;
  
  iVar1 = (this->MCells).field0_0x0._s_0.Y;
  if (param_3) {
    (param_2->field0_0x0)._s_0.X = param_1 / (iVar1 + 1);
    (param_2->field0_0x0)._s_0.Y = param_1 % ((this->MCells).field0_0x0._s_0.Y + 1);
    return;
  }
  (param_2->field0_0x0)._s_0.X = param_1 / iVar1;
  (param_2->field0_0x0)._s_0.Y = param_1 % (this->MCells).field0_0x0._s_0.Y;
  return;
}

// FlatToMultiIndex @ 143ebf800

void __thiscall
Chaos::TUniformGridBase<double,3>::FlatToMultiIndex
          (TUniformGridBase<double,3> *this,int param_1,TVector<int,3> *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = (this->MCells).field0_0x0._s_0.Z;
  iVar2 = (this->MCells).field0_0x0._s_0.Y;
  if (param_3) {
    (param_2->field0_0x0)._s_0.X = param_1 / ((iVar1 + 1) * (iVar2 + 1));
    uVar3 = (longlong)param_1 / (longlong)((this->MCells).field0_0x0._s_0.Z + 1);
    (param_2->field0_0x0)._s_0.Y =
         (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
              (longlong)((this->MCells).field0_0x0._s_0.Y + 1));
    (param_2->field0_0x0)._s_0.Z = param_1 % ((this->MCells).field0_0x0._s_0.Z + 1);
    return;
  }
  (param_2->field0_0x0)._s_0.X = param_1 / (iVar1 * iVar2);
  uVar3 = (longlong)param_1 / (longlong)(this->MCells).field0_0x0._s_0.Z;
  (param_2->field0_0x0)._s_0.Y =
       (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
            (longlong)(this->MCells).field0_0x0._s_0.Y);
  (param_2->field0_0x0)._s_0.Z = param_1 % (this->MCells).field0_0x0._s_0.Z;
  return;
}

// GetNumCells @ 143ec3610

int __thiscall Chaos::TUniformGridBase<double,3>::GetNumCells(TUniformGridBase<double,3> *this)

{
  return (this->MCells).field0_0x0._s_0.Z * (this->MCells).field0_0x0._s_0.Y *
         (this->MCells).field0_0x0._s_0.X;
}

// GetNumNodes @ 143ec3660

int __thiscall Chaos::TUniformGridBase<double,3>::GetNumNodes(TUniformGridBase<double,3> *this)

{
  return ((this->MCells).field0_0x0._s_0.Z + 1) * ((this->MCells).field0_0x0._s_0.Y + 1) *
         ((this->MCells).field0_0x0._s_0.X + 1);
}

// InteriorNode @ 143ec49f0

bool __thiscall
Chaos::TUniformGridBase<double,3>::InteriorNode
          (TUniformGridBase<double,3> *this,TVector<int,3> *param_1)

{
  int iVar1;
  bool bVar2;
  TVector<int,3> *pTVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = true;
  pTVar3 = param_1;
  do {
    if (!bVar2) {
      return bVar2;
    }
    iVar1 = (pTVar3->field0_0x0)._s_0.X;
    if ((iVar1 < 1) ||
       (*(int *)((longlong)pTVar3 + (longlong)this + (0x30 - (longlong)param_1)) + -1 <= iVar1)) {
      bVar2 = false;
    }
    iVar4 = iVar4 + 1;
    pTVar3 = (TVector<int,3> *)((longlong)&pTVar3->field0_0x0 + 4);
  } while (iVar4 < 3);
  return bVar2;
}

// LinearlyInterpolate @ 143ec4c90

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::LinearlyInterpolate
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TArrayFaceND<double,3> *param_1,TVector<double,3> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TVector<double,3> *pTVar3;
  double dVar4;
  
  if ((param_1->MArray).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  dVar4 = LinearlyInterpolateComponent(this,(TArrayND<double,3> *)param_1,param_2,0);
  *(double *)__return_storage_ptr__ = dVar4;
  if ((param_1->MArray).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  dVar4 = LinearlyInterpolateComponent
                    (this,(TArrayND<double,3> *)((param_1->MArray).AllocatorInstance.InlineData + 1)
                     ,param_2,1);
  *(double *)&__return_storage_ptr__->field_0x8 = dVar4;
  if ((param_1->MArray).ArrayNum < 3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVector<double,3> *)(*pcVar1)();
      return pTVar3;
    }
  }
  dVar4 = LinearlyInterpolateComponent
                    (this,(TArrayND<double,3> *)((param_1->MArray).AllocatorInstance.InlineData + 2)
                     ,param_2,2);
  *(double *)&__return_storage_ptr__->field_0x10 = dVar4;
  return __return_storage_ptr__;
}

// LinearlyInterpolate @ 143ec4dd0

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::LinearlyInterpolate
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TArrayFaceND<double,3> *param_1,TVector<double,3> *param_2,
          Pair<int,Chaos::TVector<int,3>_> *param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<double,3> *pTVar6;
  uint uVar7;
  uint uVar8;
  TArrayND<double,3> *pTVar9;
  double dVar10;
  
  uVar8 = 0;
  pTVar6 = __return_storage_ptr__;
  pTVar9 = (TArrayND<double,3> *)param_1;
  do {
    uVar1 = param_3->First;
    iVar2 = (param_1->MArray).ArrayNum;
    if (uVar8 == uVar1) {
      uVar5 = 0;
      if ((int)uVar1 < iVar2) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector<double,3> *)(*pcVar3)();
          return pTVar6;
        }
      }
      uVar7 = (*(int *)((param_1->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 4) *
               (param_3->Second).field0_0x0._s_0.X + (param_3->Second).field0_0x0._s_0.Y) *
              *(int *)((param_1->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 8) +
              (param_3->Second).field0_0x0._s_0.Z;
      uVar5 = 0;
      if ((int)uVar7 <
          *(int *)((param_1->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 0x18)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector<double,3> *)(*pcVar3)();
          return pTVar6;
        }
      }
      dVar10 = *(double *)
                (*(longlong *)
                  ((param_1->MArray).AllocatorInstance.InlineData[(int)uVar1].Pad + 0x10) +
                (longlong)(int)uVar7 * 8);
    }
    else {
      if (iVar2 <= (int)uVar8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TVector<double,3> *)(*pcVar3)();
          return pTVar6;
        }
      }
      dVar10 = LinearlyInterpolateComponent(this,pTVar9,param_2,uVar1);
    }
    *(double *)pTVar6 = dVar10;
    uVar8 = uVar8 + 1;
    pTVar6 = (TVector<double,3> *)&pTVar6->field_0x8;
    pTVar9 = pTVar9 + 1;
  } while ((int)uVar8 < 3);
  return __return_storage_ptr__;
}

// LinearlyInterpolateComponent @ 143ec4f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TUniformGridBase<double,3>::LinearlyInterpolateComponent
          (TUniformGridBase<double,3> *this,TArrayND<double,3> *param_1,TVector<double,3> *param_2,
          int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  TVector<double,3> *pTVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  TVector<double,3> local_70 [2];
  
  dVar6 = __real_3ff0000000000000;
  iVar3 = (this->MCells).field0_0x0._s_0.Y;
  iVar4 = (this->MCells).field0_0x0._s_0.X;
  iVar5 = (this->MCells).field0_0x0._s_0.Z;
  dVar15 = *(double *)&this->MDx;
  dVar1 = *(double *)&(this->MDx).field_0x8;
  dVar2 = *(double *)&(this->MDx).field_0x10;
  local_98._0_8_ = 0;
  local_98._8_4_ = 0;
  *(undefined4 *)(local_98 + (longlong)param_3 * 4) = 1;
  iVar7 = local_98._0_4_ + iVar4;
  iVar13 = local_98._8_4_ + iVar5;
  iVar8 = local_98._4_4_ + iVar3;
  if (param_3 == 0) {
    local_78 = 0.0;
    dVar14 = ___xmm_00000000000000003ff0000000000000;
    dVar16 = _UNK_150689518;
  }
  else if (param_3 == 1) {
    local_78 = 0.0;
    dVar14 = ___xmm_3ff00000000000000000000000000000;
    dVar16 = _UNK_15061cbc8;
  }
  else {
    local_78 = __real_3ff0000000000000;
    dVar14 = 0.0;
    dVar16 = 0.0;
  }
  local_88._0_4_ = SUB84(dVar14,0);
  local_88._4_4_ = (undefined4)((ulonglong)dVar14 >> 0x20);
  local_88._8_4_ = SUB84(dVar16,0);
  local_88._12_4_ = (undefined4)((ulonglong)dVar16 >> 0x20);
  iVar11 = (int)(((dVar15 * __real_3fe0000000000000 * dVar14 + *(double *)param_2) -
                 *(double *)&this->MMinCorner) / dVar15);
  iVar12 = (int)(((dVar1 * __real_3fe0000000000000 * dVar16 + *(double *)&param_2->field_0x8) -
                 *(double *)&(this->MMinCorner).field_0x8) / *(double *)&(this->MDx).field_0x8);
  iVar10 = (int)(((dVar2 * __real_3fe0000000000000 * local_78 + *(double *)&param_2->field_0x10) -
                 *(double *)&(this->MMinCorner).field_0x10) / *(double *)&(this->MDx).field_0x10);
  if (iVar11 < iVar4) {
    if (iVar11 < 0) {
      iVar11 = 0;
    }
  }
  else {
    iVar11 = iVar4 + -1;
  }
  if (iVar12 < iVar3) {
    if (iVar12 < 0) {
      iVar12 = 0;
    }
  }
  else {
    iVar12 = iVar3 + -1;
  }
  if (iVar10 < iVar5) {
    if (iVar10 < 0) {
      iVar10 = 0;
    }
  }
  else {
    iVar10 = iVar5 + -1;
  }
  local_98._4_4_ = iVar11;
  local_98._0_4_ = param_3;
  local_98._8_4_ = iVar12;
  local_98._12_4_ = iVar10;
  Location(this,(TVector<double,3> *)local_88,(Pair<int,Chaos::TVector<int,3>_> *)local_98);
  if (*(double *)param_2 <= (double)CONCAT44(local_88._4_4_,local_88._0_4_)) {
    iVar11 = iVar11 + -1;
  }
  if (*(double *)&param_2->field_0x8 <= (double)CONCAT44(local_88._12_4_,local_88._8_4_)) {
    iVar12 = iVar12 + -1;
  }
  if (*(double *)&param_2->field_0x10 <= local_78) {
    iVar10 = iVar10 + -1;
  }
  local_98._8_4_ = iVar10;
  local_88._0_4_ = param_3;
  local_88._4_4_ = iVar11;
  local_88._8_4_ = iVar12;
  local_88._12_4_ = iVar10;
  local_98._0_4_ = iVar11;
  local_98._4_4_ = iVar12;
  pTVar9 = Location(this,local_70,(Pair<int,Chaos::TVector<int,3>_> *)local_88);
  local_88._0_8_ = (*(double *)param_2 - *(double *)pTVar9) / *(double *)&this->MDx;
  local_88._8_8_ =
       (*(double *)&param_2->field_0x8 - *(double *)&pTVar9->field_0x8) /
       *(double *)&(this->MDx).field_0x8;
  local_78 = (*(double *)&param_2->field_0x10 - *(double *)&pTVar9->field_0x10) /
             *(double *)&(this->MDx).field_0x10;
  if (iVar11 == -1) {
    local_88._0_8_ = 0.0;
    iVar11 = 0;
    local_98._0_4_ = 0;
  }
  if (iVar11 == iVar7 + -1) {
    local_98._0_4_ = iVar7 + -2;
    local_88._0_8_ = dVar6;
  }
  if (iVar12 == -1) {
    local_88._8_8_ = 0.0;
    iVar12 = 0;
    local_98._4_4_ = 0;
  }
  if (iVar12 == iVar8 + -1) {
    local_98._4_4_ = iVar8 + -2;
    local_88._8_8_ = dVar6;
  }
  if (iVar10 == -1) {
    local_78 = 0.0;
    iVar10 = 0;
    local_98._8_4_ = 0;
  }
  if (iVar10 == iVar13 + -1) {
    local_98._8_4_ = iVar13 + -2;
    local_78 = dVar6;
  }
  dVar15 = LinearlyInterpolateHelper<double,double>
                     (param_1,(TVector<int,3> *)local_98,(TVector<double,3> *)local_88);
  return dVar15;
}

// Location @ 143ec53e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Location
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          Pair<int,Chaos::TVector<int,3>_> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double local_78;
  double dStack_70;
  double local_68;
  
  dVar1 = *(double *)&(this->MDx).field_0x8;
  dVar2 = *(double *)&(this->MDx).field_0x10;
  iVar5 = (param_1->Second).field0_0x0._s_0.Z;
  iVar6 = (param_1->Second).field0_0x0._s_0.Y;
  dVar3 = *(double *)&(this->MMinCorner).field_0x10;
  dVar4 = *(double *)&(this->MMinCorner).field_0x8;
  if (param_1->First == 0) {
    local_78 = ___xmm_00000000000000003ff0000000000000;
    dStack_70 = _UNK_150689518;
    local_68 = 0.0;
  }
  else if (param_1->First == 1) {
    local_78 = ___xmm_3ff00000000000000000000000000000;
    dStack_70 = _UNK_15061cbc8;
    local_68 = 0.0;
  }
  else {
    local_68 = __real_3ff0000000000000;
    local_78 = 0.0;
    dStack_70 = 0.0;
  }
  dVar7 = dVar1 * __real_3fe0000000000000;
  dVar8 = dVar2 * __real_3fe0000000000000;
  local_68 = __real_3ff0000000000000 - local_68;
  dStack_70 = __real_3ff0000000000000 - dStack_70;
  *(double *)__return_storage_ptr__ =
       (__real_3ff0000000000000 - local_78) * *(double *)&this->MDx * __real_3fe0000000000000 +
       (double)(param_1->Second).field0_0x0._s_0.X * *(double *)&this->MDx +
       *(double *)&this->MMinCorner;
  *(double *)&__return_storage_ptr__->field_0x10 = local_68 * dVar8 + (double)iVar5 * dVar2 + dVar3;
  *(double *)&__return_storage_ptr__->field_0x8 = dStack_70 * dVar7 + (double)iVar6 * dVar1 + dVar4;
  return __return_storage_ptr__;
}

// Location @ 143ec5530

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Location
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<int,3> *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = __real_3fe0000000000000;
  dVar5 = (double)(param_1->field0_0x0)._s_0.Z + __real_3fe0000000000000;
  dVar1 = *(double *)&(this->MDx).field_0x10;
  dVar2 = *(double *)&(this->MMinCorner).field_0x10;
  *(double *)__return_storage_ptr__ =
       ((double)(param_1->field0_0x0)._s_0.X + __real_3fe0000000000000) * *(double *)&this->MDx +
       *(double *)&this->MMinCorner;
  iVar3 = (param_1->field0_0x0)._s_0.Y;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar5 * dVar1 + dVar2;
  *(double *)&__return_storage_ptr__->field_0x8 =
       ((double)iVar3 + dVar4) * *(double *)&(this->MDx).field_0x8 +
       *(double *)&(this->MMinCorner).field_0x8;
  return __return_storage_ptr__;
}

// MaxCorner @ 143ec69b0

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::MaxCorner(TUniformGridBase<double,3> *this)

{
  return &this->MMaxCorner;
}

// MinCorner @ 143ec69c0

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::MinCorner(TUniformGridBase<double,3> *this)

{
  return &this->MMinCorner;
}

// Node @ 143ec7420

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Node
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<int,3> *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(this->MMinCorner).field_0x8;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&this->MMinCorner;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->MMinCorner).field_0x10
  ;
  *(double *)__return_storage_ptr__ =
       (double)(param_1->field0_0x0)._s_0.X * *(double *)&this->MDx +
       *(double *)__return_storage_ptr__;
  *(double *)&__return_storage_ptr__->field_0x8 =
       (double)(param_1->field0_0x0)._s_0.Y * *(double *)&(this->MDx).field_0x8 +
       *(double *)&__return_storage_ptr__->field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (double)(param_1->field0_0x0)._s_0.Z * *(double *)&(this->MDx).field_0x10 +
       *(double *)&__return_storage_ptr__->field_0x10;
  return __return_storage_ptr__;
}

// Node @ 143ec7490

TVector<double,3> * __thiscall
Chaos::TUniformGridBase<double,3>::Node
          (TUniformGridBase<double,3> *this,TVector<double,3> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (this->MCells).field0_0x0._s_0.Y;
  uVar1 = *(undefined8 *)&(this->MMinCorner).field_0x8;
  iVar2 = (this->MCells).field0_0x0._s_0.Z + 1;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)&this->MMinCorner;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  iVar3 = iVar3 + 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&(this->MMinCorner).field_0x10
  ;
  *(double *)__return_storage_ptr__ =
       (double)(param_1 / (iVar2 * iVar3)) * *(double *)&this->MDx +
       *(double *)__return_storage_ptr__;
  *(double *)&__return_storage_ptr__->field_0x8 =
       (double)(int)((longlong)
                     ((ulonglong)(uint)((int)((longlong)param_1 / (longlong)iVar2) >> 0x1f) << 0x20
                     | (longlong)param_1 / (longlong)iVar2 & 0xffffffffU) % (longlong)iVar3) *
       *(double *)&(this->MDx).field_0x8 + *(double *)&__return_storage_ptr__->field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 =
       (double)(param_1 % iVar2) * *(double *)&(this->MDx).field_0x10 +
       *(double *)&__return_storage_ptr__->field_0x10;
  return __return_storage_ptr__;
}

// NodeCounts @ 143ec7530

TVector<int,3> * __thiscall
Chaos::TUniformGridBase<double,3>::NodeCounts
          (TUniformGridBase<double,3> *this,TVector<int,3> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->MCells).field0_0x0._s_0.X + 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->MCells).field0_0x0._s_0.Y + 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->MCells).field0_0x0._s_0.Z + 1;
  return __return_storage_ptr__;
}

// Reset @ 143ecb6f0

void __thiscall Chaos::TUniformGridBase<double,3>::Reset(TUniformGridBase<double,3> *this)

{
  *(undefined8 *)&this->MMinCorner = 0;
  *(undefined8 *)&(this->MMinCorner).field_0x8 = 0;
  *(undefined8 *)&(this->MMinCorner).field_0x10 = 0;
  *(undefined8 *)&this->MMaxCorner = 0;
  *(undefined8 *)&(this->MMaxCorner).field_0x8 = 0;
  *(undefined8 *)&(this->MMaxCorner).field_0x10 = 0;
  *(undefined8 *)&(this->MCells).field0_0x0 = 0;
  (this->MCells).field0_0x0._s_0.Z = 0;
  *(undefined8 *)&this->MDx = 0;
  *(undefined8 *)&(this->MDx).field_0x8 = 0;
  *(undefined8 *)&(this->MDx).field_0x10 = 0;
  return;
}

// Serialize @ 143ecbe30

void __thiscall
Chaos::TUniformGridBase<double,3>::Serialize(TUniformGridBase<double,3> *this,FArchive *param_1)

{
  SerializeReal<double,3>(param_1,&this->MMinCorner);
  SerializeReal<double,3>(param_1,&this->MMaxCorner);
  operator<<<int,3>(param_1,&this->MCells);
  SerializeReal<double,3>(param_1,&this->MDx);
  return;
}

