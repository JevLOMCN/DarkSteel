// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// GetSkinnedBonePosition @ 148fb7190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<float> * __thiscall
FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>::
GetSkinnedBonePosition
          (void *this,TVector<float> *__return_storage_ptr__,FSkeletalMeshAccessorHelper *param_1,
          int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  TVector<float> *pTVar8;
  uint uVar9;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  lVar6 = (**(code **)(param_1->Mesh->_padding_ + 800))();
  lVar7 = param_1->Mesh->_padding_;
  if (param_2 < *(int *)(lVar6 + 8)) {
    lVar7 = (**(code **)(lVar7 + 0x350))(param_1->Mesh,local_a8,param_2);
    dVar2 = *(double *)(lVar7 + 0x68);
    dVar3 = *(double *)(lVar7 + 0x70);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)*(double *)(lVar7 + 0x60);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar2;
  }
  else {
    lVar7 = (**(code **)(lVar7 + 800))();
    local_d0 = (longlong)*(int *)(lVar7 + 0x38);
    uVar9 = 0;
    if (param_2 < *(int *)(lVar7 + 0x38)) {
      uVar9 = (uint)~param_2 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_d8 = (longlong)param_2;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<float> *)(*pcVar4)();
        return pTVar8;
      }
    }
    lVar6 = (longlong)param_2 * 0x60;
    pdVar1 = (double *)(lVar6 + 0x20 + *(longlong *)(lVar7 + 0x30));
    dVar2 = pdVar1[1];
    dVar3 = *(double *)(lVar6 + 0x30 + *(longlong *)(lVar7 + 0x30));
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)*pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar2;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar3;
  return __return_storage_ptr__;
}

// GetSkinnedBonePreviousRotation @ 148fb72c0

TQuat<float> * __thiscall
FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>::
GetSkinnedBonePreviousRotation
          (void *this,TQuat<float> *__return_storage_ptr__,FSkeletalMeshAccessorHelper *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FSkeletalMeshSkinningData *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TQuat<float> *pTVar8;
  ulonglong uVar9;
  
  pFVar2 = param_1->SkinningData;
  uVar9 = (longlong)pFVar2->CurrIndex ^ 1;
  uVar7 = 0;
  if (param_2 < pFVar2->ComponentTransforms[uVar9].ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TQuat<float> *)(*pcVar3)();
      return pTVar8;
    }
  }
  pFVar1 = pFVar2->ComponentTransforms[uVar9].AllocatorInstance.Data + (longlong)param_2 * 0x30;
  uVar4 = *(undefined8 *)pFVar1;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->X = (float)(int)uVar4;
  __return_storage_ptr__->Y = (float)(int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->Z = (float)(int)uVar5;
  __return_storage_ptr__->W = (float)(int)((ulonglong)uVar5 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkinnedBonePreviousRotation @ 148fb7360

TQuat<float> * __thiscall
FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>::
GetSkinnedBonePreviousRotation
          (void *this,TQuat<float> *__return_storage_ptr__,FSkeletalMeshAccessorHelper *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FSkeletalMeshSkinningData *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TQuat<float> *pTVar8;
  ulonglong uVar9;
  
  pFVar2 = param_1->SkinningData;
  uVar9 = (longlong)pFVar2->CurrIndex ^ 1;
  uVar7 = 0;
  if (param_2 < pFVar2->ComponentTransforms[uVar9].ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TQuat<float> *)(*pcVar3)();
      return pTVar8;
    }
  }
  pFVar1 = pFVar2->ComponentTransforms[uVar9].AllocatorInstance.Data + (longlong)param_2 * 0x30;
  uVar4 = *(undefined8 *)pFVar1;
  uVar5 = *(undefined8 *)(pFVar1 + 8);
  __return_storage_ptr__->X = (float)(int)uVar4;
  __return_storage_ptr__->Y = (float)(int)((ulonglong)uVar4 >> 0x20);
  __return_storage_ptr__->Z = (float)(int)uVar5;
  __return_storage_ptr__->W = (float)(int)((ulonglong)uVar5 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkinnedBonePreviousScale @ 148fb7400

TVector<float> * __thiscall
FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,1>_>::
GetSkinnedBonePreviousScale
          (void *this,TVector<float> *__return_storage_ptr__,FSkeletalMeshAccessorHelper *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FSkeletalMeshSkinningData *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  ulonglong uVar9;
  
  pFVar2 = param_1->SkinningData;
  uVar9 = (longlong)pFVar2->CurrIndex ^ 1;
  uVar7 = 0;
  if (param_2 < pFVar2->ComponentTransforms[uVar9].ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<float> *)(*pcVar3)();
      return pTVar8;
    }
  }
  pFVar1 = pFVar2->ComponentTransforms[uVar9].AllocatorInstance.Data +
           (longlong)param_2 * 0x30 + 0x20;
  fVar4 = *(float *)(pFVar1 + 4);
  fVar5 = *(float *)(pFVar1 + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(float *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  return __return_storage_ptr__;
}

// GetSkinnedBonePreviousScale @ 148fb74b0

TVector<float> * __thiscall
FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,2>_>::
GetSkinnedBonePreviousScale
          (void *this,TVector<float> *__return_storage_ptr__,FSkeletalMeshAccessorHelper *param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  FSkeletalMeshSkinningData *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  ulonglong uVar9;
  
  pFVar2 = param_1->SkinningData;
  uVar9 = (longlong)pFVar2->CurrIndex ^ 1;
  uVar7 = 0;
  if (param_2 < pFVar2->ComponentTransforms[uVar9].ArrayNum) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<float> *)(*pcVar3)();
      return pTVar8;
    }
  }
  pFVar1 = pFVar2->ComponentTransforms[uVar9].AllocatorInstance.Data +
           (longlong)param_2 * 0x30 + 0x20;
  fVar4 = *(float *)(pFVar1 + 4);
  fVar5 = *(float *)(pFVar1 + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(float *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  return __return_storage_ptr__;
}

// GetSkinnedBoneRotation @ 148fb7560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<float> * __thiscall
FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>::
GetSkinnedBoneRotation
          (void *this,TQuat<float> *__return_storage_ptr__,FSkeletalMeshAccessorHelper *param_1,
          int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  double *pdVar8;
  TQuat<double> *pTVar9;
  longlong lVar10;
  TQuat<float> *pTVar11;
  uint uVar12;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  TQuat<double> local_148;
  TMatrix<double> local_128;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  lVar7 = (**(code **)(param_1->Mesh->_padding_ + 800))();
  lVar10 = param_1->Mesh->_padding_;
  if (param_2 < *(int *)(lVar7 + 8)) {
    pdVar8 = (double *)(**(code **)(lVar10 + 0x350))(param_1->Mesh,local_a8,param_2);
    local_128.M[0][0] = *pdVar8;
    local_128.M[0][1] = pdVar8[1];
    local_128.M[0][2] = pdVar8[2];
    local_128.M[0][3] = pdVar8[3];
    local_128.M[1][0] = pdVar8[4];
    local_128.M[1][1] = pdVar8[5];
    local_128.M[1][2] = pdVar8[6];
    local_128.M[1][3] = pdVar8[7];
    local_128.M[2][0] = pdVar8[8];
    local_128.M[2][1] = pdVar8[9];
    local_128.M[2][2] = pdVar8[10];
    local_128.M[2][3] = pdVar8[0xb];
    local_128.M[3][0] = pdVar8[0xc];
    local_128.M[3][1] = pdVar8[0xd];
    local_128.M[3][2] = pdVar8[0xe];
    local_128.M[3][3] = pdVar8[0xf];
    UE::Math::TMatrix<double>::RemoveScaling(&local_128,__real_3e45798ee0000000);
    pTVar9 = UE::Math::TMatrix<double>::ToQuat(&local_128,&local_148);
    dVar2 = pTVar9->W;
    dVar3 = pTVar9->Z;
    dVar4 = pTVar9->X;
    __return_storage_ptr__->Y = (float)pTVar9->Y;
    __return_storage_ptr__->X = (float)dVar4;
    __return_storage_ptr__->Z = (float)dVar3;
    __return_storage_ptr__->W = (float)dVar2;
  }
  else {
    lVar10 = (**(code **)(lVar10 + 800))();
    local_150 = (longlong)*(int *)(lVar10 + 0x38);
    uVar12 = 0;
    if (param_2 < *(int *)(lVar10 + 0x38)) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_158 = (longlong)param_2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TQuat<float> *)(*pcVar5)();
        return pTVar11;
      }
    }
    lVar7 = (longlong)param_2 * 0x60;
    pdVar8 = (double *)(lVar7 + *(longlong *)(lVar10 + 0x30));
    dVar2 = pdVar8[1];
    pdVar1 = (double *)(lVar7 + 0x10 + *(longlong *)(lVar10 + 0x30));
    dVar3 = *pdVar1;
    dVar4 = pdVar1[1];
    __return_storage_ptr__->X = (float)*pdVar8;
    __return_storage_ptr__->Y = (float)dVar2;
    __return_storage_ptr__->Z = (float)dVar3;
    __return_storage_ptr__->W = (float)dVar4;
  }
  return __return_storage_ptr__;
}

// GetSkinnedBoneScale @ 148fb7730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<float> * __thiscall
FSkinnedPositionAccessorHelper<TIntegralConstant<enum_ENDISkeletalMesh_SkinningMode,0>_>::
GetSkinnedBoneScale(void *this,TVector<float> *__return_storage_ptr__,
                   FSkeletalMeshAccessorHelper *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  TMatrix<double> *this_00;
  TVector<double> *pTVar7;
  longlong lVar8;
  TVector<float> *pTVar9;
  uint uVar10;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  TVector<double> local_d8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  lVar6 = (**(code **)(param_1->Mesh->_padding_ + 800))();
  lVar8 = param_1->Mesh->_padding_;
  if (param_2 < *(int *)(lVar6 + 8)) {
    this_00 = (TMatrix<double> *)(**(code **)(lVar8 + 0x350))(param_1->Mesh,local_a8,param_2);
    pTVar7 = UE::Math::TMatrix<double>::ExtractScaling(this_00,local_d8,__real_3e45798ee0000000);
    dVar2 = (pTVar7->field0_0x0)._s_0.Z;
    dVar3 = (pTVar7->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(pTVar7->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar2;
  }
  else {
    lVar8 = (**(code **)(lVar8 + 800))();
    local_e0 = (longlong)*(int *)(lVar8 + 0x38);
    uVar10 = 0;
    if (param_2 < *(int *)(lVar8 + 0x38)) {
      uVar10 = (uint)~param_2 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_e8 = (longlong)param_2;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TVector<float> *)(*pcVar4)();
        return pTVar9;
      }
    }
    lVar6 = (longlong)param_2 * 0x60;
    pdVar1 = (double *)(lVar6 + 0x40 + *(longlong *)(lVar8 + 0x30));
    dVar2 = pdVar1[1];
    dVar3 = *(double *)(lVar6 + 0x50 + *(longlong *)(lVar8 + 0x30));
    (__return_storage_ptr__->field0_0x0)._s_0.X = (float)*pdVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar3;
  }
  return __return_storage_ptr__;
}

