// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13db20

UScriptStruct * __cdecl FRigVMFunction_MathRBFInterpolateQuatBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase,
                         (UObject *)pUVar1,L"RigVMFunction_MathRBFInterpolateQuatBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateQuatBase.OuterSingleton;
}

// GetInterpolatedWeights<FMathRBFInterpolateQuatColor_Target> @ 14a183780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateQuatBase::
GetInterpolatedWeights<FMathRBFInterpolateQuatColor_Target>
          (FRigVMFunction_MathRBFInterpolateQuatWorkData *param_1,
          TArrayView<FMathRBFInterpolateQuatColor_Target_const_,int> *param_2,TQuat<double> *param_3
          ,ERBFQuatDistanceType param_4,ERBFKernelType param_5,float param_6,bool param_7,
          TVector<double> *param_8,TArray<float,TSizedDefaultAllocator<32>_> *param_9)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  TQuat<double> *pTVar5;
  code *pcVar6;
  double dVar7;
  ForAnyElementType _Src;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  longlong *plVar11;
  FMathRBFInterpolateQuatColor_Target *pFVar12;
  FMathRBFInterpolateQuatColor_Target *pFVar13;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  ERBFQuatDistanceType local_1a8;
  undefined7 uStack_1a7;
  TVector<double> *pTStack_1a0;
  undefined4 local_198;
  float fStack_194;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_190;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_180;
  code *local_168;
  longlong local_158 [3];
  longlong *local_140;
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar3 = param_2->ArrayNum;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar3,&local_1b8,0,&iStack_1ac);
  }
  pFVar13 = param_2->DataPtr;
  pFVar12 = pFVar13 + param_2->ArrayNum;
  _Src.Data = local_1b8.Data;
  iVar10 = local_1b0;
  for (; local_1b8.Data = _Src.Data, local_1b0 = iVar10, pFVar13 != pFVar12; pFVar13 = pFVar13 + 1)
  {
    if (((_Src.Data <= pFVar13) &&
        (pFVar13 < (FMathRBFInterpolateQuatColor_Target *)
                   (&((FMathRBFInterpolateQuatColor_Target *)_Src.Data)->Target + iStack_1ac))) &&
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
    if (local_1b0 == iStack_1ac) {
      local_1b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1020,&local_1b8,&iStack_1ac);
    }
    iVar10 = local_1b0 + 1;
    dVar7 = (pFVar13->Target).Y;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20) = (pFVar13->Target).X;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 8) = dVar7;
    dVar7 = (pFVar13->Target).W;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10) = (pFVar13->Target).Z;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10 + 8) = dVar7;
    _Src.Data = local_1b8.Data;
  }
  fStack_194 = param_6 * __real_3c8efa35;
  pTStack_1a0 = param_8;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_5);
  local_1a8 = param_4;
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_190.DataPtr = (TQuat<double> *)_Src.Data;
      local_190.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = HashTargets(&local_190);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&local_1b8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar10 << 5);
        }
      }
    }
    local_180.DataPtr = (TQuat<double> *)local_1b8.Data;
    local_180.ArrayNum = local_1b0;
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = HashTargets(&local_180);
    param_1->Hash = uVar9;
    local_168 = (code *)0x0;
    local_140 = FMemory::Malloc(0x20,8);
    *local_140 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_140[1] = CONCAT71(uStack_1a7,local_1a8);
    local_140[2] = (longlong)pTStack_1a0;
    local_140[3] = CONCAT44(fStack_194,local_198);
    if (local_140 + 1 != (longlong *)0x0) {
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    iVar10 = (param_1->Targets).ArrayNum;
    pTVar5 = (TQuat<double> *)(pTVar1->AllocatorInstance).Data;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108._36_4_ = local_190._12_4_;
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._24_8_ = pTVar5;
    local_108._32_4_ = iVar10;
    local_108._48_8_ = local_168;
    local_b0 = (longlong *)0x0;
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)*plVar11)(plVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar11 = local_b0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    param_1->bAreTargetsConstant = true;
  }
  if (param_1->bAreTargetsConstant == false) {
    local_138 = (code *)0x0;
    local_110 = FMemory::Malloc(0x20,8);
    local_a8._32_4_ = local_1b0;
    local_a8._24_8_ = local_1b8.Data;
    *local_110 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_110[1] = CONCAT71(uStack_1a7,local_1a8);
    local_110[2] = (longlong)pTStack_1a0;
    local_110[3] = CONCAT44(fStack_194,local_198);
    if (local_110 + 1 != (longlong *)0x0) {
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a8._36_4_ = local_190._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._48_8_ = local_138;
    local_50 = (longlong *)0x0;
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)*plVar11)(plVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TQuat<double>_>::
  Interpolate<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_9,param_3,true,param_7);
  if ((FMathRBFInterpolateQuatColor_Target *)local_1b8.Data !=
      (FMathRBFInterpolateQuatColor_Target *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateQuatFloat_Target> @ 14a183d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateQuatBase::
GetInterpolatedWeights<FMathRBFInterpolateQuatFloat_Target>
          (FRigVMFunction_MathRBFInterpolateQuatWorkData *param_1,
          TArrayView<FMathRBFInterpolateQuatFloat_Target_const_,int> *param_2,TQuat<double> *param_3
          ,ERBFQuatDistanceType param_4,ERBFKernelType param_5,float param_6,bool param_7,
          TVector<double> *param_8,TArray<float,TSizedDefaultAllocator<32>_> *param_9)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  TQuat<double> *pTVar5;
  code *pcVar6;
  double dVar7;
  ForAnyElementType _Src;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  longlong *plVar11;
  FMathRBFInterpolateQuatFloat_Target *pFVar12;
  FMathRBFInterpolateQuatFloat_Target *pFVar13;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  ERBFQuatDistanceType local_1a8;
  undefined7 uStack_1a7;
  TVector<double> *pTStack_1a0;
  undefined4 local_198;
  float fStack_194;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_190;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_180;
  code *local_168;
  longlong local_158 [3];
  longlong *local_140;
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar3 = param_2->ArrayNum;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar3,&local_1b8,0,&iStack_1ac);
  }
  pFVar13 = param_2->DataPtr;
  pFVar12 = pFVar13 + param_2->ArrayNum;
  _Src.Data = local_1b8.Data;
  iVar10 = local_1b0;
  for (; local_1b8.Data = _Src.Data, local_1b0 = iVar10, pFVar13 != pFVar12; pFVar13 = pFVar13 + 1)
  {
    if (((_Src.Data <= pFVar13) &&
        (pFVar13 < (FMathRBFInterpolateQuatFloat_Target *)
                   (&((FMathRBFInterpolateQuatFloat_Target *)_Src.Data)->Target + iStack_1ac))) &&
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
    if (local_1b0 == iStack_1ac) {
      local_1b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1020,&local_1b8,&iStack_1ac);
    }
    iVar10 = local_1b0 + 1;
    dVar7 = (pFVar13->Target).Y;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20) = (pFVar13->Target).X;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 8) = dVar7;
    dVar7 = (pFVar13->Target).W;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10) = (pFVar13->Target).Z;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10 + 8) = dVar7;
    _Src.Data = local_1b8.Data;
  }
  fStack_194 = param_6 * __real_3c8efa35;
  pTStack_1a0 = param_8;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_5);
  local_1a8 = param_4;
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_190.DataPtr = (TQuat<double> *)_Src.Data;
      local_190.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = HashTargets(&local_190);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&local_1b8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar10 << 5);
        }
      }
    }
    local_180.DataPtr = (TQuat<double> *)local_1b8.Data;
    local_180.ArrayNum = local_1b0;
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = HashTargets(&local_180);
    param_1->Hash = uVar9;
    local_168 = (code *)0x0;
    local_140 = FMemory::Malloc(0x20,8);
    *local_140 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_140[1] = CONCAT71(uStack_1a7,local_1a8);
    local_140[2] = (longlong)pTStack_1a0;
    local_140[3] = CONCAT44(fStack_194,local_198);
    if (local_140 + 1 != (longlong *)0x0) {
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    iVar10 = (param_1->Targets).ArrayNum;
    pTVar5 = (TQuat<double> *)(pTVar1->AllocatorInstance).Data;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108._36_4_ = local_190._12_4_;
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._24_8_ = pTVar5;
    local_108._32_4_ = iVar10;
    local_108._48_8_ = local_168;
    local_b0 = (longlong *)0x0;
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)*plVar11)(plVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar11 = local_b0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    param_1->bAreTargetsConstant = true;
  }
  if (param_1->bAreTargetsConstant == false) {
    local_138 = (code *)0x0;
    local_110 = FMemory::Malloc(0x20,8);
    local_a8._32_4_ = local_1b0;
    local_a8._24_8_ = local_1b8.Data;
    *local_110 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_110[1] = CONCAT71(uStack_1a7,local_1a8);
    local_110[2] = (longlong)pTStack_1a0;
    local_110[3] = CONCAT44(fStack_194,local_198);
    if (local_110 + 1 != (longlong *)0x0) {
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a8._36_4_ = local_190._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._48_8_ = local_138;
    local_50 = (longlong *)0x0;
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)*plVar11)(plVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TQuat<double>_>::
  Interpolate<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_9,param_3,true,param_7);
  if ((FMathRBFInterpolateQuatFloat_Target *)local_1b8.Data !=
      (FMathRBFInterpolateQuatFloat_Target *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateQuatQuat_Target> @ 14a184280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateQuatBase::
GetInterpolatedWeights<FMathRBFInterpolateQuatQuat_Target>
          (FRigVMFunction_MathRBFInterpolateQuatWorkData *param_1,
          TArrayView<FMathRBFInterpolateQuatQuat_Target_const_,int> *param_2,TQuat<double> *param_3,
          ERBFQuatDistanceType param_4,ERBFKernelType param_5,float param_6,bool param_7,
          TVector<double> *param_8,TArray<float,TSizedDefaultAllocator<32>_> *param_9)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  TQuat<double> *pTVar5;
  code *pcVar6;
  double dVar7;
  ForAnyElementType _Src;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  longlong *plVar11;
  FMathRBFInterpolateQuatQuat_Target *pFVar12;
  FMathRBFInterpolateQuatQuat_Target *pFVar13;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  ERBFQuatDistanceType local_1a8;
  undefined7 uStack_1a7;
  TVector<double> *pTStack_1a0;
  undefined4 local_198;
  float fStack_194;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_190;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_180;
  code *local_168;
  longlong local_158 [3];
  longlong *local_140;
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar3 = param_2->ArrayNum;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar3,&local_1b8,0,&iStack_1ac);
  }
  pFVar13 = param_2->DataPtr;
  pFVar12 = pFVar13 + param_2->ArrayNum;
  _Src.Data = local_1b8.Data;
  iVar10 = local_1b0;
  for (; local_1b8.Data = _Src.Data, local_1b0 = iVar10, pFVar13 != pFVar12; pFVar13 = pFVar13 + 1)
  {
    if (((_Src.Data <= pFVar13) &&
        (pFVar13 < (FMathRBFInterpolateQuatQuat_Target *)
                   (&((FMathRBFInterpolateQuatQuat_Target *)_Src.Data)->Target + iStack_1ac))) &&
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
    if (local_1b0 == iStack_1ac) {
      local_1b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1020,&local_1b8,&iStack_1ac);
    }
    iVar10 = local_1b0 + 1;
    dVar7 = (pFVar13->Target).Y;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20) = (pFVar13->Target).X;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 8) = dVar7;
    dVar7 = (pFVar13->Target).W;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10) = (pFVar13->Target).Z;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10 + 8) = dVar7;
    _Src.Data = local_1b8.Data;
  }
  fStack_194 = param_6 * __real_3c8efa35;
  pTStack_1a0 = param_8;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_5);
  local_1a8 = param_4;
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_190.DataPtr = (TQuat<double> *)_Src.Data;
      local_190.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = HashTargets(&local_190);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&local_1b8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar10 << 5);
        }
      }
    }
    local_180.DataPtr = (TQuat<double> *)local_1b8.Data;
    local_180.ArrayNum = local_1b0;
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = HashTargets(&local_180);
    param_1->Hash = uVar9;
    local_168 = (code *)0x0;
    local_140 = FMemory::Malloc(0x20,8);
    *local_140 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_140[1] = CONCAT71(uStack_1a7,local_1a8);
    local_140[2] = (longlong)pTStack_1a0;
    local_140[3] = CONCAT44(fStack_194,local_198);
    if (local_140 + 1 != (longlong *)0x0) {
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    iVar10 = (param_1->Targets).ArrayNum;
    pTVar5 = (TQuat<double> *)(pTVar1->AllocatorInstance).Data;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108._36_4_ = local_190._12_4_;
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._24_8_ = pTVar5;
    local_108._32_4_ = iVar10;
    local_108._48_8_ = local_168;
    local_b0 = (longlong *)0x0;
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)*plVar11)(plVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar11 = local_b0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    param_1->bAreTargetsConstant = true;
  }
  if (param_1->bAreTargetsConstant == false) {
    local_138 = (code *)0x0;
    local_110 = FMemory::Malloc(0x20,8);
    local_a8._32_4_ = local_1b0;
    local_a8._24_8_ = local_1b8.Data;
    *local_110 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_110[1] = CONCAT71(uStack_1a7,local_1a8);
    local_110[2] = (longlong)pTStack_1a0;
    local_110[3] = CONCAT44(fStack_194,local_198);
    if (local_110 + 1 != (longlong *)0x0) {
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a8._36_4_ = local_190._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._48_8_ = local_138;
    local_50 = (longlong *)0x0;
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)*plVar11)(plVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TQuat<double>_>::
  Interpolate<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_9,param_3,true,param_7);
  if ((FMathRBFInterpolateQuatQuat_Target *)local_1b8.Data !=
      (FMathRBFInterpolateQuatQuat_Target *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateQuatVector_Target> @ 14a1847f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateQuatBase::
GetInterpolatedWeights<FMathRBFInterpolateQuatVector_Target>
          (FRigVMFunction_MathRBFInterpolateQuatWorkData *param_1,
          TArrayView<FMathRBFInterpolateQuatVector_Target_const_,int> *param_2,
          TQuat<double> *param_3,ERBFQuatDistanceType param_4,ERBFKernelType param_5,float param_6,
          bool param_7,TVector<double> *param_8,TArray<float,TSizedDefaultAllocator<32>_> *param_9)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  TQuat<double> *pTVar5;
  code *pcVar6;
  double dVar7;
  ForAnyElementType _Src;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  longlong *plVar11;
  FMathRBFInterpolateQuatVector_Target *pFVar12;
  FMathRBFInterpolateQuatVector_Target *pFVar13;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  ERBFQuatDistanceType local_1a8;
  undefined7 uStack_1a7;
  TVector<double> *pTStack_1a0;
  undefined4 local_198;
  float fStack_194;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_190;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_180;
  code *local_168;
  longlong local_158 [3];
  longlong *local_140;
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar3 = param_2->ArrayNum;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar3,&local_1b8,0,&iStack_1ac);
  }
  pFVar13 = param_2->DataPtr;
  pFVar12 = pFVar13 + param_2->ArrayNum;
  _Src.Data = local_1b8.Data;
  iVar10 = local_1b0;
  for (; local_1b8.Data = _Src.Data, local_1b0 = iVar10, pFVar13 != pFVar12; pFVar13 = pFVar13 + 1)
  {
    if (((_Src.Data <= pFVar13) &&
        (pFVar13 < (FMathRBFInterpolateQuatVector_Target *)
                   (&((FMathRBFInterpolateQuatVector_Target *)_Src.Data)->Target + iStack_1ac))) &&
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
    if (local_1b0 == iStack_1ac) {
      local_1b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1020,&local_1b8,&iStack_1ac);
    }
    iVar10 = local_1b0 + 1;
    dVar7 = (pFVar13->Target).Y;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20) = (pFVar13->Target).X;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 8) = dVar7;
    dVar7 = (pFVar13->Target).W;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10) = (pFVar13->Target).Z;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10 + 8) = dVar7;
    _Src.Data = local_1b8.Data;
  }
  fStack_194 = param_6 * __real_3c8efa35;
  pTStack_1a0 = param_8;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_5);
  local_1a8 = param_4;
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_190.DataPtr = (TQuat<double> *)_Src.Data;
      local_190.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = HashTargets(&local_190);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&local_1b8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar10 << 5);
        }
      }
    }
    local_180.DataPtr = (TQuat<double> *)local_1b8.Data;
    local_180.ArrayNum = local_1b0;
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = HashTargets(&local_180);
    param_1->Hash = uVar9;
    local_168 = (code *)0x0;
    local_140 = FMemory::Malloc(0x20,8);
    *local_140 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_140[1] = CONCAT71(uStack_1a7,local_1a8);
    local_140[2] = (longlong)pTStack_1a0;
    local_140[3] = CONCAT44(fStack_194,local_198);
    if (local_140 + 1 != (longlong *)0x0) {
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    iVar10 = (param_1->Targets).ArrayNum;
    pTVar5 = (TQuat<double> *)(pTVar1->AllocatorInstance).Data;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108._36_4_ = local_190._12_4_;
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._24_8_ = pTVar5;
    local_108._32_4_ = iVar10;
    local_108._48_8_ = local_168;
    local_b0 = (longlong *)0x0;
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)*plVar11)(plVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar11 = local_b0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    param_1->bAreTargetsConstant = true;
  }
  if (param_1->bAreTargetsConstant == false) {
    local_138 = (code *)0x0;
    local_110 = FMemory::Malloc(0x20,8);
    local_a8._32_4_ = local_1b0;
    local_a8._24_8_ = local_1b8.Data;
    *local_110 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_110[1] = CONCAT71(uStack_1a7,local_1a8);
    local_110[2] = (longlong)pTStack_1a0;
    local_110[3] = CONCAT44(fStack_194,local_198);
    if (local_110 + 1 != (longlong *)0x0) {
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a8._36_4_ = local_190._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._48_8_ = local_138;
    local_50 = (longlong *)0x0;
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)*plVar11)(plVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TQuat<double>_>::
  Interpolate<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_9,param_3,true,param_7);
  if ((FMathRBFInterpolateQuatVector_Target *)local_1b8.Data !=
      (FMathRBFInterpolateQuatVector_Target *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateQuatXform_Target> @ 14a184d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateQuatBase::
GetInterpolatedWeights<FMathRBFInterpolateQuatXform_Target>
          (FRigVMFunction_MathRBFInterpolateQuatWorkData *param_1,
          TArrayView<FMathRBFInterpolateQuatXform_Target_const_,int> *param_2,TQuat<double> *param_3
          ,ERBFQuatDistanceType param_4,ERBFKernelType param_5,float param_6,bool param_7,
          TVector<double> *param_8,TArray<float,TSizedDefaultAllocator<32>_> *param_9)

{
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  TQuat<double> *pTVar5;
  code *pcVar6;
  double dVar7;
  ForAnyElementType _Src;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  longlong *plVar11;
  FMathRBFInterpolateQuatXform_Target *pFVar12;
  FMathRBFInterpolateQuatXform_Target *pFVar13;
  undefined1 auStackY_208 [32];
  ForAnyElementType local_1b8;
  int local_1b0;
  int iStack_1ac;
  ERBFQuatDistanceType local_1a8;
  undefined7 uStack_1a7;
  TVector<double> *pTStack_1a0;
  undefined4 local_198;
  float fStack_194;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_190;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_180;
  code *local_168;
  longlong local_158 [3];
  longlong *local_140;
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar3 = param_2->ArrayNum;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0 = 0;
  iStack_1ac = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar3,&local_1b8,0,&iStack_1ac);
  }
  pFVar13 = param_2->DataPtr;
  pFVar12 = pFVar13 + param_2->ArrayNum;
  _Src.Data = local_1b8.Data;
  iVar10 = local_1b0;
  for (; local_1b8.Data = _Src.Data, local_1b0 = iVar10, pFVar13 != pFVar12; pFVar13 = pFVar13 + 1)
  {
    if (((_Src.Data <= pFVar13) &&
        (pFVar13 < (FMathRBFInterpolateQuatXform_Target *)
                   (&(((FMathRBFInterpolateQuatXform_Target *)_Src.Data)->Value).Rotation +
                   (longlong)iStack_1ac + -1))) &&
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
    if (local_1b0 == iStack_1ac) {
      local_1b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1020,&local_1b8,&iStack_1ac);
    }
    iVar10 = local_1b0 + 1;
    dVar7 = (pFVar13->Target).Y;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20) = (pFVar13->Target).X;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 8) = dVar7;
    dVar7 = (pFVar13->Target).W;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10) = (pFVar13->Target).Z;
    *(double *)(local_1b8.Data + (longlong)local_1b0 * 0x20 + 0x10 + 8) = dVar7;
    _Src.Data = local_1b8.Data;
  }
  fStack_194 = param_6 * __real_3c8efa35;
  pTStack_1a0 = param_8;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_5);
  local_1a8 = param_4;
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_190.DataPtr = (TQuat<double> *)_Src.Data;
      local_190.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = HashTargets(&local_190);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *)&local_1b8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,0x10,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,(longlong)iVar10 << 5);
        }
      }
    }
    local_180.DataPtr = (TQuat<double> *)local_1b8.Data;
    local_180.ArrayNum = local_1b0;
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = HashTargets(&local_180);
    param_1->Hash = uVar9;
    local_168 = (code *)0x0;
    local_140 = FMemory::Malloc(0x20,8);
    *local_140 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_140[1] = CONCAT71(uStack_1a7,local_1a8);
    local_140[2] = (longlong)pTStack_1a0;
    local_140[3] = CONCAT44(fStack_194,local_198);
    if (local_140 + 1 != (longlong *)0x0) {
      local_168 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    iVar10 = (param_1->Targets).ArrayNum;
    pTVar5 = (TQuat<double> *)(pTVar1->AllocatorInstance).Data;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108._36_4_ = local_190._12_4_;
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._24_8_ = pTVar5;
    local_108._32_4_ = iVar10;
    local_108._48_8_ = local_168;
    local_b0 = (longlong *)0x0;
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)*plVar11)(plVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if (local_168 != (code *)0x0) {
      plVar11 = local_158;
      if (local_140 != (longlong *)0x0) {
        plVar11 = local_140;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar11 = local_b0;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
    }
    param_1->bAreTargetsConstant = true;
  }
  if (param_1->bAreTargetsConstant == false) {
    local_138 = (code *)0x0;
    local_110 = FMemory::Malloc(0x20,8);
    local_a8._32_4_ = local_1b0;
    local_a8._24_8_ = local_1b8.Data;
    *local_110 = (longlong)
                 &
                 ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFQuatWeightFunctor___0A__00_Function_Private_Core_UE__6B_
    ;
    local_110[1] = CONCAT71(uStack_1a7,local_1a8);
    local_110[2] = (longlong)pTStack_1a0;
    local_110[3] = CONCAT44(fStack_194,local_198);
    if (local_110 + 1 != (longlong *)0x0) {
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<FRigVMFunction_MathRBFQuatWeightFunctor,float,UE::Math::TQuat<double>_const_&,UE::Math::TQuat<double>_const_&>
                  ::Call;
    }
    if ((local_1b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a8._36_4_ = local_190._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._48_8_ = local_138;
    local_50 = (longlong *)0x0;
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)*plVar11)(plVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if (local_138 != (code *)0x0) {
      plVar11 = local_128;
      if (local_110 != (longlong *)0x0) {
        plVar11 = local_110;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    TRBFInterpolator<UE::Math::TQuat<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TQuat<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar11 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TQuat<double>_>::
  Interpolate<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_9,param_3,true,param_7);
  if ((FMathRBFInterpolateQuatXform_Target *)local_1b8.Data !=
      (FMathRBFInterpolateQuatXform_Target *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  return;
}

// HashTargets @ 14a1adc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
FRigVMFunction_MathRBFInterpolateQuatBase::HashTargets
          (TArrayView<UE::Math::TQuat<double>_const_,int> *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  TQuat<double> *pTVar6;
  TQuat<double> *pTVar7;
  double local_38 [4];
  longlong local_18 [2];
  
  pTVar6 = param_1->DataPtr;
  dVar4 = 0.0;
  pTVar7 = pTVar6 + param_1->ArrayNum;
  dVar3 = dVar4;
  for (; pTVar6 != pTVar7; pTVar6 = pTVar6 + 1) {
    local_38[0] = pTVar6->X;
    if (pTVar6->X == 0.0) {
      local_38[0] = dVar4;
    }
    local_38[1] = pTVar6->Y;
    if (pTVar6->Y == 0.0) {
      local_38[1] = dVar4;
    }
    local_38[2] = pTVar6->Z;
    if (pTVar6->Z == 0.0) {
      local_38[2] = dVar4;
    }
    local_38[3] = pTVar6->W;
    if (pTVar6->W == 0.0) {
      local_38[3] = dVar4;
    }
    uVar2 = (ulonglong)dVar3 ^ 0x1a929e4d6f47a654;
    pdVar5 = local_38;
    do {
      lVar1 = (longlong)*pdVar5;
      pdVar5 = pdVar5 + 1;
      uVar2 = (uVar2 ^ ((ulonglong)(lVar1 * -0x395b586ca42e166b) >> 0x2f ^
                       lVar1 * -0x395b586ca42e166b) * -0x395b586ca42e166b) * -0x395b586ca42e166b;
    } while (pdVar5 != (double *)local_18);
    uVar2 = (uVar2 >> 0x2f ^ uVar2) * -0x395b586ca42e166b;
    dVar3 = (double)(uVar2 >> 0x2f ^ uVar2);
  }
  return (ulong64)dVar3;
}

