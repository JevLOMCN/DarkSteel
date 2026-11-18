// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// StaticStruct @ 14df05010

UScriptStruct * __cdecl FPinBoneData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPinBoneData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FPinBoneData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPinBoneData,(UObject *)pUVar1,L"PinBoneData");
  }
  return Z_Registration_Info_UScriptStruct_FPinBoneData.OuterSingleton;
}

// FPinBoneData @ 14df18050

FPinBoneData * __thiscall FPinBoneData::FPinBoneData(FPinBoneData *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar21 [16];
  undefined8 uVar22;
  
  (this->BoneToCopyFrom).BoneName.ComparisonIndex = 0;
  (this->BoneToCopyFrom).BoneName.Number = 0;
  puVar1 = &(this->BoneToCopyFrom).field_0x8;
  (this->BoneToCopyFrom).BoneIndex = -1;
  (this->BoneToCopyFrom).bUseSkeletonIndex = 0;
  (this->BoneToCopyFrom).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->BoneToCopyTo).BoneName.ComparisonIndex = 0;
  (this->BoneToCopyTo).BoneName.Number = 0;
  puVar1 = &(this->BoneToCopyTo).field_0x8;
  (this->BoneToCopyTo).BoneIndex = -1;
  (this->BoneToCopyTo).bUseSkeletonIndex = 0;
  (this->BoneToCopyTo).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->LastUsedSourceScale).Factor = 1.0;
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastUsedSourceScale).Pivot.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastUsedSourceScale).Pivot.field0_0x0._s_0.Y = (double)uVar22;
  (this->LastUsedSourceScale).Pivot.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyTo).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64 = auVar9;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64 = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64 = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->LocalRefPoseBoneToCopyFrom).Scale3D.ZW.m128d_f64 = auVar15;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OffsetFromBoneToCopyFromInRefPose).Rotation.XY.m128d_f64 = auVar16;
  auVar17._8_4_ = SUB84((double)fVar3,0);
  auVar17._0_8_ = (double)fVar2;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->OffsetFromBoneToCopyFromInRefPose).Rotation.ZW.m128d_f64 = auVar17;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar18._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar18._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar18._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OffsetFromBoneToCopyFromInRefPose).Translation.XY.m128d_f64 = auVar18
  ;
  auVar19._8_4_ = SUB84((double)fVar3,0);
  auVar19._0_8_ = (double)fVar2;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->OffsetFromBoneToCopyFromInRefPose).Translation.ZW.m128d_f64 = auVar19
  ;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar20._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar20._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar20._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OffsetFromBoneToCopyFromInRefPose).Scale3D.XY.m128d_f64 = auVar20;
  auVar21._8_4_ = SUB84((double)fVar3,0);
  auVar21._0_8_ = (double)fVar2;
  auVar21._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->OffsetFromBoneToCopyFromInRefPose).Scale3D.ZW.m128d_f64 = auVar21;
  (this->BoneToPin_DEPRECATED).ComparisonIndex = 0;
  (this->BoneToPin_DEPRECATED).Number = 0;
  (this->BoneToPinTo_DEPRECATED).ComparisonIndex = 0;
  (this->BoneToPinTo_DEPRECATED).Number = 0;
  return this;
}

// CachePinData @ 14df274f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPinBoneData::CachePinData
          (FPinBoneData *this,ERetargetSourceOrTarget param_1,FIKRetargetProcessor *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TTransform<double> *pTVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TargetPoseScale.Factor = __real_3ff0000000000000;
      TargetPoseScale.Pivot.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TargetPoseScale.Pivot.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      TargetPoseScale.Pivot.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      _Init_thread_footer(&::_TSS0);
    }
  }
  dVar3 = (param_2->CurrentSourceScale).Pivot.field0_0x0._s_0.X;
  (this->LastUsedSourceScale).Factor = (param_2->CurrentSourceScale).Factor;
  (this->LastUsedSourceScale).Pivot.field0_0x0._s_0.X = dVar3;
  lVar9 = 0x68;
  if (param_1 != Source) {
    lVar9 = 0xb8;
  }
  dVar3 = (param_2->CurrentSourceScale).Pivot.field0_0x0._s_0.Z;
  (this->LastUsedSourceScale).Pivot.field0_0x0._s_0.Y =
       (param_2->CurrentSourceScale).Pivot.field0_0x0._s_0.Y;
  (this->LastUsedSourceScale).Pivot.field0_0x0._s_0.Z = dVar3;
  pTVar5 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                     ((FResolvedRetargetPoseSet *)
                      ((longlong)&(param_2->Log).LogName.ComparisonIndex.Value + lVar9));
  pTVar6 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                     ((FResolvedRetargetPoseSet *)&(param_2->TargetSkeleton)._padding_);
  lVar9 = 0x48;
  if (param_1 != Source) {
    lVar9 = 0x98;
  }
  pTVar7 = FRetargetSkeleton::GetParentTransform
                     ((FRetargetSkeleton *)
                      ((longlong)&(param_2->Log).LogName.ComparisonIndex.Value + lVar9),
                      (this->BoneToCopyFrom).BoneIndex,pTVar5);
  local_218.Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  local_218.Rotation.XY.m128d_f64[1] = (pTVar7->Rotation).XY.m128d_f64[1];
  local_218.Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  local_218.Rotation.ZW.m128d_f64[1] = (pTVar7->Rotation).ZW.m128d_f64[1];
  local_218.Translation.XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0];
  local_218.Translation.XY.m128d_f64[1] = (pTVar7->Translation).XY.m128d_f64[1];
  local_218.Translation.ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0];
  local_218.Translation.ZW.m128d_f64[1] = (pTVar7->Translation).ZW.m128d_f64[1];
  local_218.Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  local_218.Scale3D.XY.m128d_f64[1] = (pTVar7->Scale3D).XY.m128d_f64[1];
  local_218.Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  local_218.Scale3D.ZW.m128d_f64[1] = (pTVar7->Scale3D).ZW.m128d_f64[1];
  pTVar7 = FRetargetSkeleton::GetParentTransform
                     ((FRetargetSkeleton *)&param_2->TargetSkeleton,(this->BoneToCopyTo).BoneIndex,
                      pTVar6);
  uVar10 = (this->BoneToCopyFrom).BoneIndex;
  local_1b8.Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  local_1b8.Rotation.XY.m128d_f64[1] = (pTVar7->Rotation).XY.m128d_f64[1];
  local_1b8.Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  local_1b8.Rotation.ZW.m128d_f64[1] = (pTVar7->Rotation).ZW.m128d_f64[1];
  local_1b8.Translation.XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0];
  local_1b8.Translation.XY.m128d_f64[1] = (pTVar7->Translation).XY.m128d_f64[1];
  local_1b8.Translation.ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0];
  local_1b8.Translation.ZW.m128d_f64[1] = (pTVar7->Translation).ZW.m128d_f64[1];
  local_1b8.Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  local_1b8.Scale3D.XY.m128d_f64[1] = (pTVar7->Scale3D).XY.m128d_f64[1];
  local_1b8.Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (pTVar7->Scale3D).ZW.m128d_f64[1];
  uVar8 = 0;
  if ((int)uVar10 < pTVar5->ArrayNum) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_2e8 = (longlong)(int)uVar10;
    local_2e0 = (longlong)pTVar5->ArrayNum;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar11 = (this->BoneToCopyTo).BoneIndex;
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  lVar9 = (longlong)(int)uVar10 * 0x60;
  local_2d8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar9);
  local_2d8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 8);
  local_2d8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x10);
  local_2d8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x10 + 8);
  local_2d8.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x20);
  local_2d8.Translation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x20 + 8);
  local_2d8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x30);
  local_2d8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x30 + 8);
  local_2d8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x40);
  local_2d8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x40 + 8);
  local_2d8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x50);
  local_2d8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x50 + 8);
  uVar8 = 0;
  if ((int)uVar11 < pTVar6->ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    local_2e8 = (longlong)(int)uVar11;
    local_2e0 = (longlong)pTVar6->ArrayNum;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  lVar9 = (longlong)(int)uVar11 * 0x60;
  local_278.Rotation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar9);
  local_278.Rotation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 8);
  local_278.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x10);
  local_278.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x10 + 8);
  local_278.Translation.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x20);
  local_278.Translation.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x20 + 8);
  local_278.Translation.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x30);
  local_278.Translation.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x30 + 8);
  local_278.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x40);
  local_278.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x40 + 8);
  local_278.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar1 + lVar9 + 0x50);
  local_278.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar1 + lVar9 + 0x50 + 8);
  pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform(&local_2d8,&local_158,&local_278);
  dVar3 = (pTVar7->Rotation).XY.m128d_f64[1];
  (this->OffsetFromBoneToCopyFromInRefPose).Rotation.XY.m128d_f64[0] =
       (pTVar7->Rotation).XY.m128d_f64[0];
  (this->OffsetFromBoneToCopyFromInRefPose).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (this->OffsetFromBoneToCopyFromInRefPose).Rotation.ZW.m128d_f64[0] =
       (pTVar7->Rotation).ZW.m128d_f64[0];
  (this->OffsetFromBoneToCopyFromInRefPose).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).XY.m128d_f64[1];
  (this->OffsetFromBoneToCopyFromInRefPose).Translation.XY.m128d_f64[0] =
       (pTVar7->Translation).XY.m128d_f64[0];
  (this->OffsetFromBoneToCopyFromInRefPose).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).ZW.m128d_f64[1];
  (this->OffsetFromBoneToCopyFromInRefPose).Translation.ZW.m128d_f64[0] =
       (pTVar7->Translation).ZW.m128d_f64[0];
  (this->OffsetFromBoneToCopyFromInRefPose).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (this->OffsetFromBoneToCopyFromInRefPose).Scale3D.XY.m128d_f64[0] =
       (pTVar7->Scale3D).XY.m128d_f64[0];
  (this->OffsetFromBoneToCopyFromInRefPose).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  (this->OffsetFromBoneToCopyFromInRefPose).Scale3D.ZW.m128d_f64[0] =
       (pTVar7->Scale3D).ZW.m128d_f64[0];
  (this->OffsetFromBoneToCopyFromInRefPose).Scale3D.ZW.m128d_f64[1] = dVar3;
  pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform(&local_218,&local_f8,&local_2d8);
  dVar3 = (pTVar7->Rotation).XY.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyFrom).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyFrom).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).XY.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[0] =
       (pTVar7->Translation).XY.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyFrom).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).ZW.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64[0] =
       (pTVar7->Translation).ZW.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyFrom).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyFrom).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyFrom).Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyFrom).Scale3D.ZW.m128d_f64[1] = dVar3;
  pTVar7 = UE::Math::TTransform<double>::GetRelativeTransform(&local_1b8,&local_98,&local_278);
  dVar3 = (pTVar7->Rotation).XY.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyTo).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyTo).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).XY.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[0] =
       (pTVar7->Translation).XY.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyTo).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).ZW.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64[0] =
       (pTVar7->Translation).ZW.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyTo).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyTo).Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyTo).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  (this->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  (this->LocalRefPoseBoneToCopyTo).Scale3D.ZW.m128d_f64[1] = dVar3;
  return;
}

// PostSerialize @ 14df4cc30

void __thiscall FPinBoneData::PostSerialize(FPinBoneData *this,FArchive *param_1)

{
  int iVar1;
  
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FIKRigObjectVersion::GUID);
    if (iVar1 < 3) {
      (this->BoneToCopyTo).BoneName = this->BoneToPin_DEPRECATED;
      (this->BoneToCopyFrom).BoneName = this->BoneToPinTo_DEPRECATED;
    }
  }
  return;
}

