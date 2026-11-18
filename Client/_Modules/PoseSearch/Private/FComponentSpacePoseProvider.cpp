// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// FComponentSpacePoseProvider @ 14a8e0250

FComponentSpacePoseProvider * __thiscall
UE::PoseSearch::FComponentSpacePoseProvider::FComponentSpacePoseProvider
          (FComponentSpacePoseProvider *this,FCSPose<FCompactPose> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FComponentSpacePoseProvider *pFVar4;
  
  this->ComponentSpacePose = param_1;
  this->_padding_ = (longlong)&___7FComponentSpacePoseProvider_PoseSearch_UE__6B_;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&(param_1->Pose).field_0x10 + 0x40));
  if (pUVar3 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSkeletonAsset()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FComponentSpacePoseProvider *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

// CalculateComponentSpaceTransform @ 14a8eb160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UE::PoseSearch::FComponentSpacePoseProvider::CalculateComponentSpaceTransform
          (FComponentSpacePoseProvider *this,TTransform<double> *__return_storage_ptr__,
          FSkeletonPoseBoneIndex param_1)

{
  FCompactPoseBoneIndex FVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TTransform<double> *pTVar16;
  UObject *pUVar17;
  longlong lVar18;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar18 = (longlong)(int)param_1;
  lVar2 = *(longlong *)&(this->ComponentSpacePose->Pose).field_0x10;
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(lVar2 + 0x88))) {
    uVar14 = 0;
    if ((int)param_1 < *(int *)(lVar2 + 0x88)) {
      uVar14 = ~(uint)param_1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (local_b8 = lVar18, local_b0 = (longlong)*(int *)(lVar2 + 0x88),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      pTVar16 = (TTransform<double> *)(*pcVar3)();
      return pTVar16;
    }
    FVar1 = *(FCompactPoseBoneIndex *)(*(longlong *)(lVar2 + 0x80) + lVar18 * 4);
    if (FVar1 != (FCompactPoseBoneIndex)0xffffffff) {
      pTVar16 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this->ComponentSpacePose,FVar1);
      dVar12 = (pTVar16->Rotation).XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar12;
      dVar12 = (pTVar16->Rotation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
      dVar12 = (pTVar16->Translation).XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar16->Translation).XY.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar12;
      dVar12 = (pTVar16->Translation).ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar16->Translation).ZW.m128d_f64[0]
      ;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar12;
      dVar12 = (pTVar16->Scale3D).XY.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar12;
      dVar12 = (pTVar16->Scale3D).ZW.m128d_f64[1];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
      (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar12;
      return __return_storage_ptr__;
    }
  }
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0x40));
  iVar15 = FReferenceSkeleton::GetParentIndex
                     ((FReferenceSkeleton *)&pUVar17[1].field_0x20,(int)param_1);
  if ((iVar15 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchHistory.cpp"
                          ,0x110,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TTransform<double> *)(*pcVar3)();
    return pTVar16;
  }
  uVar14 = 0;
  if ((int)param_1 < *(int *)&pUVar17[3].field_0x8) {
    uVar14 = ~(uint)param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (local_b8 = lVar18, local_b0 = (longlong)*(int *)&pUVar17[3].field_0x8,
     bVar13 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar3 = (code *)swi(3);
    pTVar16 = (TTransform<double> *)(*pcVar3)();
    return pTVar16;
  }
  lVar2 = *(longlong *)(pUVar17 + 3);
  pTVar16 = (TTransform<double> *)(**(code **)(this->_padding_ + 8))(this,local_a8,iVar15);
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar11;
  UE::Math::TTransform<double>::Multiply
            (__return_storage_ptr__,(TTransform<double> *)(lVar18 * 0x60 + lVar2),pTVar16);
  return __return_storage_ptr__;
}

// GetSkeletonAsset @ 14a8fe540

USkeleton * __thiscall
UE::PoseSearch::FComponentSpacePoseProvider::GetSkeletonAsset(FComponentSpacePoseProvider *this)

{
  USkeleton *pUVar1;
  
  pUVar1 = (USkeleton *)
           FWeakObjectPtr::Get((FWeakObjectPtr *)
                               (*(longlong *)&(this->ComponentSpacePose->Pose).field_0x10 + 0x40));
  return pUVar1;
}

