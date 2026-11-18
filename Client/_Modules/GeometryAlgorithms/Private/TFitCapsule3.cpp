// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 6

// TFitCapsule3<float> @ 1494fef10

TFitCapsule3<float> * __thiscall
UE::Geometry::TFitCapsule3<float>::TFitCapsule3<float>(TFitCapsule3<float> *this)

{
  this->bResultValid = false;
  *(undefined8 *)&(this->Capsule).Segment.Center.field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->Capsule).Segment.Center.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Capsule).Segment.Direction.field0_0x0 =
       UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  (this->Capsule).Segment.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Capsule).Segment.Extent = 0;
  return this;
}

// TFitCapsule3<double> @ 1494fef50

TFitCapsule3<double> * __thiscall
UE::Geometry::TFitCapsule3<double>::TFitCapsule3<double>(TFitCapsule3<double> *this)

{
  undefined8 uVar1;
  
  this->bResultValid = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Capsule).Segment.Center.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Capsule).Segment.Center.field0_0x0._s_0.Y = (double)uVar1;
  (this->Capsule).Segment.Center.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  (this->Capsule).Segment.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  (this->Capsule).Segment.Direction.field0_0x0._s_0.Y = (double)uVar1;
  (this->Capsule).Segment.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  (this->Capsule).Segment.Extent = 0.0;
  (this->Capsule).Radius = 0.0;
  return this;
}

// Solve @ 149525620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TFitCapsule3<float>::Solve
          (TFitCapsule3<float> *this,int param_1,
          TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_> local_198;
  uint local_188 [2];
  float local_180;
  float local_17c;
  float local_178;
  undefined8 local_170;
  undefined8 local_168 [3];
  double local_150;
  Capsule<3,double> local_118;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  uVar9 = 0;
  lVar11 = (longlong)param_1;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_>::SetNum(&local_198,param_1,Default);
  uVar10 = uVar9;
  if (0 < param_1) {
    do {
      uVar8 = (uint)uVar9;
      local_188[0] = uVar8;
      (**(code **)param_2)(&local_180,*(undefined8 *)&param_2->field_0x8,local_188);
      local_d0 = (double)local_178;
      uVar7 = 0;
      if ((int)uVar8 < local_198.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      local_e0 = (double)local_180;
      dStack_d8 = (double)local_17c;
      local_c8 = local_e0;
      dStack_c0 = dStack_d8;
      local_b8 = local_d0;
      if (uVar7 == 0) {
        local_1a8 = (longlong)(int)uVar8;
        local_1a0 = (longlong)local_198.ArrayNum;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return (bool)uVar6;
        }
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      *(double *)(local_198.AllocatorInstance.Data + uVar10) = local_e0;
      *(double *)(local_198.AllocatorInstance.Data + uVar10 + 8) = dStack_d8;
      *(double *)(local_198.AllocatorInstance.Data + uVar10 + 0x10) = local_d0;
      lVar11 = lVar11 + -1;
      uVar10 = uVar10 + 0x18;
    } while (lVar11 != 0);
  }
  local_168[0] = 0;
  local_170 = 0;
  memcmp(local_168,&local_170,8);
  dVar2 = __real_3ff0000000000000;
  local_118.segment.p._Elems[1].mTuple._Elems[1] = 0.0;
  local_118.segment.p._Elems[1].mTuple._Elems[2] = 0.0;
  local_150 = (double)CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                               (undefined4)__xmm_80000000000000008000000000000000);
  local_118.segment.p._Elems[1].mTuple._Elems[0] = __real_3ff0000000000000;
  local_118.radius = __real_3ff0000000000000;
  local_118.segment.p._Elems[0].mTuple._Elems[0]._0_4_ = (undefined4)__real_bff0000000000000;
  local_118.segment.p._Elems[0].mTuple._Elems[0]._4_4_ = __real_bff0000000000000._4_4_;
  local_118.segment.p._Elems[0].mTuple._Elems[1]._0_4_ =
       (undefined4)__xmm_80000000000000008000000000000000;
  local_118.segment.p._Elems[0].mTuple._Elems[1]._4_4_ =
       __xmm_80000000000000008000000000000000._4_4_;
  local_118.segment.p._Elems[0].mTuple._Elems[2] = local_150;
  if (local_198.ArrayNum < 1) {
    local_1a8 = 0;
    local_1a0 = (longlong)local_198.ArrayNum;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
  }
  bVar5 = gte::GetContainer<double>
                    (param_1,(Vector<3,double> *)local_198.AllocatorInstance.Data,&local_118);
  this->bResultValid = bVar5;
  if (bVar5) {
    dVar14 = local_118.segment.p._Elems[1].mTuple._Elems[2] -
             local_118.segment.p._Elems[0].mTuple._Elems[2];
    dVar12 = local_118.segment.p._Elems[1].mTuple._Elems[0] -
             (double)CONCAT44(local_118.segment.p._Elems[0].mTuple._Elems[0]._4_4_,
                              local_118.segment.p._Elems[0].mTuple._Elems[0]._0_4_);
    dVar13 = local_118.segment.p._Elems[1].mTuple._Elems[1] -
             (double)CONCAT44(local_118.segment.p._Elems[0].mTuple._Elems[1]._4_4_,
                              local_118.segment.p._Elems[0].mTuple._Elems[1]._0_4_);
    dVar3 = ((double)CONCAT44(local_118.segment.p._Elems[0].mTuple._Elems[1]._4_4_,
                              local_118.segment.p._Elems[0].mTuple._Elems[1]._0_4_) +
            local_118.segment.p._Elems[1].mTuple._Elems[1]) * __real_3fe0000000000000;
    dVar4 = (local_118.segment.p._Elems[0].mTuple._Elems[2] +
            local_118.segment.p._Elems[1].mTuple._Elems[2]) * __real_3fe0000000000000;
    dVar15 = SQRT(dVar13 * dVar13 + dVar14 * dVar14 + dVar12 * dVar12);
    if (dVar15 <= 0.0) {
      dVar12 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
    }
    else {
      dVar2 = dVar2 / dVar15;
      dVar13 = dVar13 * dVar2;
      dVar12 = dVar2 * dVar12;
      dVar14 = dVar14 * dVar2;
    }
    dVar15 = dVar15 * __real_3fe0000000000000;
    (this->Capsule).Segment.Center.field0_0x0._s_0.X =
         (float)(((double)CONCAT44(local_118.segment.p._Elems[0].mTuple._Elems[0]._4_4_,
                                   local_118.segment.p._Elems[0].mTuple._Elems[0]._0_4_) +
                 local_118.segment.p._Elems[1].mTuple._Elems[0]) * __real_3fe0000000000000);
    (this->Capsule).Segment.Center.field0_0x0._s_0.Y = (float)dVar3;
    (this->Capsule).Segment.Center.field0_0x0._s_0.Z = (float)dVar4;
    (this->Capsule).Segment.Direction.field0_0x0._s_0.X = (float)dVar12;
    (this->Capsule).Segment.Direction.field0_0x0._s_0.Y = (float)dVar13;
    (this->Capsule).Segment.Direction.field0_0x0._s_0.Z = (float)dVar14;
    (this->Capsule).Segment.Extent = (float)dVar15;
    (this->Capsule).Radius = (float)local_118.radius;
  }
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return bVar5;
}

// Solve @ 149525a20

bool __cdecl
UE::Geometry::TFitCapsule3<float>::Solve
          (int param_1,TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *param_2,
          TCapsule3<float> *param_3)

{
  TFunctionRef<UE::Math::TVector<float>___cdecl(int)> local_48;
  TFitCapsule3<float> local_38;
  
  local_38.Capsule.Segment.Center.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_38.Capsule.Segment.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_48._0_8_ = *(undefined8 *)param_2;
  local_48._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38.Capsule.Segment.Center.field0_0x0._0_8_ =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_38.bResultValid = false;
  local_38.Capsule.Segment.Direction.field0_0x0._s_0.X =
       (float)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_38.Capsule.Segment.Direction.field0_0x0._s_0.Y =
       (float)((ulonglong)UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_ >> 0x20);
  local_38.Capsule.Segment.Extent = 0.0;
  local_38.Capsule.Radius = 0.0;
  Solve(&local_38,param_1,&local_48);
  *(undefined8 *)&(param_3->Segment).Center.field0_0x0 =
       local_38.Capsule.Segment.Center.field0_0x0._0_8_;
  *(ulonglong *)((longlong)&(param_3->Segment).Center.field0_0x0 + 8) =
       CONCAT44(local_38.Capsule.Segment.Direction.field0_0x0._s_0.X,
                local_38.Capsule.Segment.Center.field0_0x0._s_0.Z);
  *(ulonglong *)((longlong)&(param_3->Segment).Direction.field0_0x0 + 4) =
       CONCAT44(local_38.Capsule.Segment.Direction.field0_0x0._s_0.Z,
                local_38.Capsule.Segment.Direction.field0_0x0._s_0.Y);
  *(undefined8 *)&(param_3->Segment).Extent = local_38.Capsule._24_8_;
  return local_38.bResultValid;
}

// Solve @ 149525ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::TFitCapsule3<double>::Solve
          (TFitCapsule3<double> *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_> local_198;
  uint local_188 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  double local_148;
  Capsule<3,double> local_110;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  uVar10 = 0;
  lVar12 = (longlong)param_1;
  local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ArrayNum = 0;
  local_198.ArrayMax = 0;
  TArray<gte::Vector<3,double>,TSizedDefaultAllocator<32>_>::SetNum(&local_198,param_1,Default);
  uVar11 = uVar10;
  if (0 < param_1) {
    do {
      uVar9 = (uint)uVar10;
      local_188[0] = uVar9;
      (**(code **)param_2)(&local_170,*(undefined8 *)&param_2->field_0x8,local_188);
      local_b0 = local_160;
      local_c0 = local_170;
      uStack_b8 = uStack_168;
      uVar8 = 0;
      if ((int)uVar9 < local_198.ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      local_c8 = local_160;
      local_d8 = local_170;
      uStack_d0 = uStack_168;
      if (uVar8 == 0) {
        local_1a8 = (longlong)(int)uVar9;
        local_1a0 = (longlong)local_198.ArrayNum;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar7 = (*pcVar1)();
          return (bool)uVar7;
        }
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      *(undefined8 *)(local_198.AllocatorInstance.Data + uVar11) = local_d8;
      *(undefined8 *)(local_198.AllocatorInstance.Data + uVar11 + 8) = uStack_d0;
      *(undefined8 *)(local_198.AllocatorInstance.Data + uVar11 + 0x10) = local_c8;
      lVar12 = lVar12 + -1;
      uVar11 = uVar11 + 0x18;
    } while (lVar12 != 0);
  }
  local_178 = 0;
  local_180 = 0;
  memcmp(&local_178,&local_180,8);
  dVar2 = __real_3ff0000000000000;
  local_110.segment.p._Elems[1].mTuple._Elems[1] = 0.0;
  local_110.segment.p._Elems[1].mTuple._Elems[2] = 0.0;
  local_148 = (double)CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                               (undefined4)__xmm_80000000000000008000000000000000);
  local_110.segment.p._Elems[1].mTuple._Elems[0] = __real_3ff0000000000000;
  local_110.radius = __real_3ff0000000000000;
  local_110.segment.p._Elems[0].mTuple._Elems[0]._0_4_ = (undefined4)__real_bff0000000000000;
  local_110.segment.p._Elems[0].mTuple._Elems[0]._4_4_ = __real_bff0000000000000._4_4_;
  local_110.segment.p._Elems[0].mTuple._Elems[1]._0_4_ =
       (undefined4)__xmm_80000000000000008000000000000000;
  local_110.segment.p._Elems[0].mTuple._Elems[1]._4_4_ =
       __xmm_80000000000000008000000000000000._4_4_;
  local_110.segment.p._Elems[0].mTuple._Elems[2] = local_148;
  if (local_198.ArrayNum < 1) {
    local_1a8 = 0;
    local_1a0 = (longlong)local_198.ArrayNum;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
  }
  bVar6 = gte::GetContainer<double>
                    (param_1,(Vector<3,double> *)local_198.AllocatorInstance.Data,&local_110);
  this->bResultValid = bVar6;
  dVar5 = __real_3fe0000000000000;
  if (bVar6) {
    dVar14 = local_110.segment.p._Elems[1].mTuple._Elems[2] -
             local_110.segment.p._Elems[0].mTuple._Elems[2];
    dVar3 = local_110.segment.p._Elems[1].mTuple._Elems[0] -
            (double)CONCAT44(local_110.segment.p._Elems[0].mTuple._Elems[0]._4_4_,
                             local_110.segment.p._Elems[0].mTuple._Elems[0]._0_4_);
    dVar13 = local_110.segment.p._Elems[1].mTuple._Elems[1] -
             (double)CONCAT44(local_110.segment.p._Elems[0].mTuple._Elems[1]._4_4_,
                              local_110.segment.p._Elems[0].mTuple._Elems[1]._0_4_);
    dVar16 = ((double)CONCAT44(local_110.segment.p._Elems[0].mTuple._Elems[1]._4_4_,
                               local_110.segment.p._Elems[0].mTuple._Elems[1]._0_4_) +
             local_110.segment.p._Elems[1].mTuple._Elems[1]) * __real_3fe0000000000000;
    dVar4 = (local_110.segment.p._Elems[0].mTuple._Elems[2] +
            local_110.segment.p._Elems[1].mTuple._Elems[2]) * __real_3fe0000000000000;
    dVar15 = SQRT(dVar13 * dVar13 + dVar14 * dVar14 + dVar3 * dVar3);
    if (dVar15 <= 0.0) {
      dVar3 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
    }
    else {
      dVar2 = dVar2 / dVar15;
      dVar13 = dVar13 * dVar2;
      dVar3 = dVar2 * dVar3;
      dVar14 = dVar14 * dVar2;
    }
    (this->Capsule).Segment.Center.field0_0x0._s_0.X =
         ((double)CONCAT44(local_110.segment.p._Elems[0].mTuple._Elems[0]._4_4_,
                           local_110.segment.p._Elems[0].mTuple._Elems[0]._0_4_) +
         local_110.segment.p._Elems[1].mTuple._Elems[0]) * __real_3fe0000000000000;
    (this->Capsule).Segment.Center.field0_0x0._s_0.Y = dVar16;
    (this->Capsule).Segment.Center.field0_0x0._s_0.Z = dVar4;
    (this->Capsule).Segment.Direction.field0_0x0._s_0.X = dVar3;
    (this->Capsule).Segment.Direction.field0_0x0._s_0.Y = dVar13;
    (this->Capsule).Segment.Direction.field0_0x0._s_0.Z = dVar14;
    (this->Capsule).Segment.Extent = dVar15 * dVar5;
    (this->Capsule).Radius = local_110.radius;
  }
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  return bVar6;
}

// Solve @ 149525e50

bool __cdecl
UE::Geometry::TFitCapsule3<double>::Solve
          (int param_1,TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2,
          TCapsule3<double> *param_3)

{
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> local_68;
  TFitCapsule3<double> local_58;
  
  local_68._0_8_ = *(undefined8 *)param_2;
  local_68._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_58.Capsule.Segment.Center.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_58.Capsule.Segment.Center.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58.bResultValid = false;
  local_58.Capsule.Segment.Center.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_58.Capsule.Segment.Direction.field0_0x0._s_0.X =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
  local_58.Capsule.Segment.Direction.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
  local_58.Capsule.Segment.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  local_58.Capsule.Segment.Extent = 0.0;
  local_58.Capsule.Radius = 0.0;
  Solve(&local_58,param_1,&local_68);
  (param_3->Segment).Center.field0_0x0._s_0.X = local_58.Capsule.Segment.Center.field0_0x0._s_0.X;
  (param_3->Segment).Center.field0_0x0._s_0.Y = local_58.Capsule.Segment.Center.field0_0x0._s_0.Y;
  (param_3->Segment).Center.field0_0x0._s_0.Z = local_58.Capsule.Segment.Center.field0_0x0._s_0.Z;
  (param_3->Segment).Direction.field0_0x0._s_0.X =
       local_58.Capsule.Segment.Direction.field0_0x0._s_0.X;
  (param_3->Segment).Direction.field0_0x0._s_0.Y =
       local_58.Capsule.Segment.Direction.field0_0x0._s_0.Y;
  (param_3->Segment).Direction.field0_0x0._s_0.Z =
       local_58.Capsule.Segment.Direction.field0_0x0._s_0.Z;
  (param_3->Segment).Extent = local_58.Capsule.Segment.Extent;
  param_3->Radius = local_58.Capsule.Radius;
  return local_58.bResultValid;
}

