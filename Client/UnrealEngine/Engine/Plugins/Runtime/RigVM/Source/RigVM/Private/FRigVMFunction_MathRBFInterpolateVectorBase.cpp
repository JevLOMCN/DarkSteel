// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 7

// StaticStruct @ 14a13eab0

UScriptStruct * __cdecl FRigVMFunction_MathRBFInterpolateVectorBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase,
                         (UObject *)pUVar1,L"RigVMFunction_MathRBFInterpolateVectorBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathRBFInterpolateVectorBase.
         OuterSingleton;
}

// GetInterpolatedWeights<FMathRBFInterpolateVectorColor_Target> @ 14a1852d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateVectorBase::
GetInterpolatedWeights<FMathRBFInterpolateVectorColor_Target>
          (FRigVMFunction_MathRBFInterpolateVectorWorkData *param_1,
          TArrayView<FMathRBFInterpolateVectorColor_Target_const_,int> *param_2,
          TVector<double> *param_3,ERBFVectorDistanceType param_4,ERBFKernelType param_5,
          float param_6,bool param_7,TArray<float,TSizedDefaultAllocator<32>_> *param_8)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FMathRBFInterpolateVectorColor_Target *pFVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  double dVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  ulong64 uVar10;
  int iVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  FMathRBFInterpolateVectorColor_Target *pFVar14;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_190;
  TArrayView<UE::Math::TVector<double>_const_,int> local_188;
  code *local_178;
  undefined **local_168;
  undefined8 local_160;
  float local_158;
  undefined ***local_150;
  code *local_148;
  undefined **local_138;
  undefined8 local_130;
  float local_128;
  undefined ***local_120;
  TArrayView<UE::Math::TVector<double>_const_,int> local_118;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar4 = param_2->ArrayNum;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  iStack_19c = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar4,&local_1a8,0,&iStack_19c);
  }
  pFVar14 = param_2->DataPtr;
  pFVar3 = pFVar14 + param_2->ArrayNum;
  FVar8.Data = local_1a8.Data;
  iVar11 = local_1a0;
  for (; local_1a8.Data = FVar8.Data, local_1a0 = iVar11, pFVar14 != pFVar3; pFVar14 = pFVar14 + 1)
  {
    if (((FVar8.Data <= pFVar14) &&
        (pFVar14 < (FMathRBFInterpolateVectorColor_Target *)
                   (&((FMathRBFInterpolateVectorColor_Target *)FVar8.Data)->Target + iStack_19c)))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_1a0 == iStack_19c) {
      local_1a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_1a8,&iStack_19c);
    }
    iVar11 = local_1a0 + 1;
    dVar7 = (pFVar14->Target).field0_0x0._s_0.Y;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18) = (pFVar14->Target).field0_0x0._s_0.X;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 8) = dVar7;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 0x10) =
         (pFVar14->Target).field0_0x0._s_0.Z;
    FVar8.Data = local_1a8.Data;
  }
  uVar4 = (uint)uStack_194 >> 8;
  uStack_194 = CONCAT31((int3)uVar4,param_5);
  local_190 = param_6;
  uVar4 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar4,param_4);
  if ((param_1->Targets).ArrayNum == iVar11) {
    if (param_1->bAreTargetsConstant != false) {
      local_188.DataPtr = (TVector<double> *)FVar8.Data;
      local_188.ArrayNum = iVar11;
      if ((iVar11 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = local_1a0;
      uVar10 = HashTargets(&local_188);
      if (uVar10 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_1a8) {
      iVar5 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar11;
      if ((iVar11 == 0) && (iVar5 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar11,iVar5,&pTVar1->AllocatorInstance,iVar11,piVar2);
        if (iVar11 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar8.Data,(longlong)iVar11 * 0x18);
        }
      }
    }
    local_118.DataPtr = (TVector<double> *)local_1a8.Data;
    local_118.ArrayNum = local_1a0;
    if ((local_1a0 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = HashTargets(&local_118);
    param_1->Hash = uVar10;
    local_108._32_4_ = (param_1->Targets).ArrayNum;
    local_108._24_8_ = (pTVar1->AllocatorInstance).Data;
    local_168 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_158 = local_190;
    local_150 = (undefined ***)0x0;
    local_160 = CONCAT44(uStack_194,local_198);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if (((int)local_108._32_4_ < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._36_4_ = local_188._12_4_;
    local_108._48_8_ = local_178;
    local_b0 = (longlong *)0x0;
    if (local_178 != (code *)0x0) {
      pppuVar12 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar12 = local_150;
      }
      (*(code *)**pppuVar12)(pppuVar12,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if (local_178 != (code *)0x0) {
      pppuVar12 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar12 = local_150;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar13 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar13 = local_b0;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    iVar11 = local_1a0;
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
      iVar11 = local_1a0;
    }
  }
  FVar8.Data = local_1a8.Data;
  if (param_1->bAreTargetsConstant == false) {
    local_138 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_130 = CONCAT44(uStack_194,local_198);
    local_128 = local_190;
    local_120 = (undefined ***)0x0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if ((iVar11 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_a8._36_4_ = local_188._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._24_8_ = FVar8.Data;
    local_a8._32_4_ = iVar11;
    local_a8._48_8_ = local_148;
    local_50 = (longlong *)0x0;
    if (local_148 != (code *)0x0) {
      pppuVar12 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar12 = local_120;
      }
      (*(code *)**pppuVar12)(pppuVar12,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if (local_148 != (code *)0x0) {
      pppuVar12 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar12 = local_120;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar13 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar13 = local_50;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TVector<double>_>::
  Interpolate<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_8,param_3,true,param_7);
  if ((FMathRBFInterpolateVectorColor_Target *)local_1a8.Data !=
      (FMathRBFInterpolateVectorColor_Target *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateVectorFloat_Target> @ 14a185800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateVectorBase::
GetInterpolatedWeights<FMathRBFInterpolateVectorFloat_Target>
          (FRigVMFunction_MathRBFInterpolateVectorWorkData *param_1,
          TArrayView<FMathRBFInterpolateVectorFloat_Target_const_,int> *param_2,
          TVector<double> *param_3,ERBFVectorDistanceType param_4,ERBFKernelType param_5,
          float param_6,bool param_7,TArray<float,TSizedDefaultAllocator<32>_> *param_8)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  FMathRBFInterpolateVectorFloat_Target *pFVar13;
  FMathRBFInterpolateVectorFloat_Target *pFVar14;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_190;
  TArrayView<UE::Math::TVector<double>_const_,int> local_188;
  code *local_178;
  undefined **local_168;
  undefined8 local_160;
  float local_158;
  undefined ***local_150;
  code *local_148;
  undefined **local_138;
  undefined8 local_130;
  float local_128;
  undefined ***local_120;
  TArrayView<UE::Math::TVector<double>_const_,int> local_118;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar3 = param_2->ArrayNum;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  iStack_19c = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar3,&local_1a8,0,&iStack_19c);
  }
  pFVar14 = param_2->DataPtr;
  pFVar13 = pFVar14 + param_2->ArrayNum;
  FVar7.Data = local_1a8.Data;
  iVar10 = local_1a0;
  for (; local_1a8.Data = FVar7.Data, local_1a0 = iVar10, pFVar14 != pFVar13; pFVar14 = pFVar14 + 1)
  {
    if (((FVar7.Data <= pFVar14) &&
        (pFVar14 < (FMathRBFInterpolateVectorFloat_Target *)
                   (&((FMathRBFInterpolateVectorFloat_Target *)FVar7.Data)->Target + iStack_19c)))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_1a0 == iStack_19c) {
      local_1a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_1a8,&iStack_19c);
    }
    iVar10 = local_1a0 + 1;
    dVar6 = (pFVar14->Target).field0_0x0._s_0.Y;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18) = (pFVar14->Target).field0_0x0._s_0.X;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 8) = dVar6;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 0x10) =
         (pFVar14->Target).field0_0x0._s_0.Z;
    FVar7.Data = local_1a8.Data;
  }
  uVar3 = (uint)uStack_194 >> 8;
  uStack_194 = CONCAT31((int3)uVar3,param_5);
  local_190 = param_6;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_4);
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_188.DataPtr = (TVector<double> *)FVar7.Data;
      local_188.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_1a0;
      uVar9 = HashTargets(&local_188);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_1a8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar7.Data,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118.DataPtr = (TVector<double> *)local_1a8.Data;
    local_118.ArrayNum = local_1a0;
    if ((local_1a0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = HashTargets(&local_118);
    param_1->Hash = uVar9;
    local_108._32_4_ = (param_1->Targets).ArrayNum;
    local_108._24_8_ = (pTVar1->AllocatorInstance).Data;
    local_168 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_158 = local_190;
    local_150 = (undefined ***)0x0;
    local_160 = CONCAT44(uStack_194,local_198);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if (((int)local_108._32_4_ < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._36_4_ = local_188._12_4_;
    local_108._48_8_ = local_178;
    local_b0 = (longlong *)0x0;
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar12 = local_b0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    iVar10 = local_1a0;
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
      iVar10 = local_1a0;
    }
  }
  FVar7.Data = local_1a8.Data;
  if (param_1->bAreTargetsConstant == false) {
    local_138 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_130 = CONCAT44(uStack_194,local_198);
    local_128 = local_190;
    local_120 = (undefined ***)0x0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a8._36_4_ = local_188._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._24_8_ = FVar7.Data;
    local_a8._32_4_ = iVar10;
    local_a8._48_8_ = local_148;
    local_50 = (longlong *)0x0;
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar12 = local_50;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TVector<double>_>::
  Interpolate<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_8,param_3,true,param_7);
  if ((FMathRBFInterpolateVectorFloat_Target *)local_1a8.Data !=
      (FMathRBFInterpolateVectorFloat_Target *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateVectorQuat_Target> @ 14a185d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateVectorBase::
GetInterpolatedWeights<FMathRBFInterpolateVectorQuat_Target>
          (FRigVMFunction_MathRBFInterpolateVectorWorkData *param_1,
          TArrayView<FMathRBFInterpolateVectorQuat_Target_const_,int> *param_2,
          TVector<double> *param_3,ERBFVectorDistanceType param_4,ERBFKernelType param_5,
          float param_6,bool param_7,TArray<float,TSizedDefaultAllocator<32>_> *param_8)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  FMathRBFInterpolateVectorQuat_Target *pFVar13;
  FMathRBFInterpolateVectorQuat_Target *pFVar14;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_190;
  TArrayView<UE::Math::TVector<double>_const_,int> local_188;
  code *local_178;
  undefined **local_168;
  undefined8 local_160;
  float local_158;
  undefined ***local_150;
  code *local_148;
  undefined **local_138;
  undefined8 local_130;
  float local_128;
  undefined ***local_120;
  TArrayView<UE::Math::TVector<double>_const_,int> local_118;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar3 = param_2->ArrayNum;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  iStack_19c = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar3,&local_1a8,0,&iStack_19c);
  }
  pFVar14 = param_2->DataPtr;
  pFVar13 = pFVar14 + param_2->ArrayNum;
  FVar7.Data = local_1a8.Data;
  iVar10 = local_1a0;
  for (; local_1a8.Data = FVar7.Data, local_1a0 = iVar10, pFVar14 != pFVar13; pFVar14 = pFVar14 + 1)
  {
    if (((FVar7.Data <= pFVar14) &&
        (pFVar14 < (FMathRBFInterpolateVectorQuat_Target *)
                   (&((FMathRBFInterpolateVectorQuat_Target *)FVar7.Data)->Target + iStack_19c))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_1a0 == iStack_19c) {
      local_1a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_1a8,&iStack_19c);
    }
    iVar10 = local_1a0 + 1;
    dVar6 = (pFVar14->Target).field0_0x0._s_0.Y;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18) = (pFVar14->Target).field0_0x0._s_0.X;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 8) = dVar6;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 0x10) =
         (pFVar14->Target).field0_0x0._s_0.Z;
    FVar7.Data = local_1a8.Data;
  }
  uVar3 = (uint)uStack_194 >> 8;
  uStack_194 = CONCAT31((int3)uVar3,param_5);
  local_190 = param_6;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_4);
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_188.DataPtr = (TVector<double> *)FVar7.Data;
      local_188.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_1a0;
      uVar9 = HashTargets(&local_188);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_1a8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar7.Data,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118.DataPtr = (TVector<double> *)local_1a8.Data;
    local_118.ArrayNum = local_1a0;
    if ((local_1a0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = HashTargets(&local_118);
    param_1->Hash = uVar9;
    local_108._32_4_ = (param_1->Targets).ArrayNum;
    local_108._24_8_ = (pTVar1->AllocatorInstance).Data;
    local_168 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_158 = local_190;
    local_150 = (undefined ***)0x0;
    local_160 = CONCAT44(uStack_194,local_198);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if (((int)local_108._32_4_ < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._36_4_ = local_188._12_4_;
    local_108._48_8_ = local_178;
    local_b0 = (longlong *)0x0;
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar12 = local_b0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    iVar10 = local_1a0;
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
      iVar10 = local_1a0;
    }
  }
  FVar7.Data = local_1a8.Data;
  if (param_1->bAreTargetsConstant == false) {
    local_138 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_130 = CONCAT44(uStack_194,local_198);
    local_128 = local_190;
    local_120 = (undefined ***)0x0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a8._36_4_ = local_188._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._24_8_ = FVar7.Data;
    local_a8._32_4_ = iVar10;
    local_a8._48_8_ = local_148;
    local_50 = (longlong *)0x0;
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar12 = local_50;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TVector<double>_>::
  Interpolate<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_8,param_3,true,param_7);
  if ((FMathRBFInterpolateVectorQuat_Target *)local_1a8.Data !=
      (FMathRBFInterpolateVectorQuat_Target *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateVectorVector_Target> @ 14a186260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateVectorBase::
GetInterpolatedWeights<FMathRBFInterpolateVectorVector_Target>
          (FRigVMFunction_MathRBFInterpolateVectorWorkData *param_1,
          TArrayView<FMathRBFInterpolateVectorVector_Target_const_,int> *param_2,
          TVector<double> *param_3,ERBFVectorDistanceType param_4,ERBFKernelType param_5,
          float param_6,bool param_7,TArray<float,TSizedDefaultAllocator<32>_> *param_8)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  FMathRBFInterpolateVectorVector_Target *pFVar13;
  FMathRBFInterpolateVectorVector_Target *pFVar14;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_190;
  TArrayView<UE::Math::TVector<double>_const_,int> local_188;
  code *local_178;
  undefined **local_168;
  undefined8 local_160;
  float local_158;
  undefined ***local_150;
  code *local_148;
  undefined **local_138;
  undefined8 local_130;
  float local_128;
  undefined ***local_120;
  TArrayView<UE::Math::TVector<double>_const_,int> local_118;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar3 = param_2->ArrayNum;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  iStack_19c = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar3,&local_1a8,0,&iStack_19c);
  }
  pFVar14 = param_2->DataPtr;
  pFVar13 = pFVar14 + param_2->ArrayNum;
  FVar7.Data = local_1a8.Data;
  iVar10 = local_1a0;
  for (; local_1a8.Data = FVar7.Data, local_1a0 = iVar10, pFVar14 != pFVar13; pFVar14 = pFVar14 + 1)
  {
    if (((FVar7.Data <= pFVar14) &&
        (pFVar14 < (FMathRBFInterpolateVectorVector_Target *)
                   (&((FMathRBFInterpolateVectorVector_Target *)FVar7.Data)->Target + iStack_19c)))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_1a0 == iStack_19c) {
      local_1a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_1a8,&iStack_19c);
    }
    iVar10 = local_1a0 + 1;
    dVar6 = (pFVar14->Target).field0_0x0._s_0.Y;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18) = (pFVar14->Target).field0_0x0._s_0.X;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 8) = dVar6;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 0x10) =
         (pFVar14->Target).field0_0x0._s_0.Z;
    FVar7.Data = local_1a8.Data;
  }
  uVar3 = (uint)uStack_194 >> 8;
  uStack_194 = CONCAT31((int3)uVar3,param_5);
  local_190 = param_6;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_4);
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_188.DataPtr = (TVector<double> *)FVar7.Data;
      local_188.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_1a0;
      uVar9 = HashTargets(&local_188);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_1a8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar7.Data,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118.DataPtr = (TVector<double> *)local_1a8.Data;
    local_118.ArrayNum = local_1a0;
    if ((local_1a0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = HashTargets(&local_118);
    param_1->Hash = uVar9;
    local_108._32_4_ = (param_1->Targets).ArrayNum;
    local_108._24_8_ = (pTVar1->AllocatorInstance).Data;
    local_168 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_158 = local_190;
    local_150 = (undefined ***)0x0;
    local_160 = CONCAT44(uStack_194,local_198);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if (((int)local_108._32_4_ < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._36_4_ = local_188._12_4_;
    local_108._48_8_ = local_178;
    local_b0 = (longlong *)0x0;
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar12 = local_b0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    iVar10 = local_1a0;
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
      iVar10 = local_1a0;
    }
  }
  FVar7.Data = local_1a8.Data;
  if (param_1->bAreTargetsConstant == false) {
    local_138 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_130 = CONCAT44(uStack_194,local_198);
    local_128 = local_190;
    local_120 = (undefined ***)0x0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a8._36_4_ = local_188._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._24_8_ = FVar7.Data;
    local_a8._32_4_ = iVar10;
    local_a8._48_8_ = local_148;
    local_50 = (longlong *)0x0;
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar12 = local_50;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TVector<double>_>::
  Interpolate<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_8,param_3,true,param_7);
  if ((FMathRBFInterpolateVectorVector_Target *)local_1a8.Data !=
      (FMathRBFInterpolateVectorVector_Target *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// GetInterpolatedWeights<FMathRBFInterpolateVectorXform_Target> @ 14a186790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRigVMFunction_MathRBFInterpolateVectorBase::
GetInterpolatedWeights<FMathRBFInterpolateVectorXform_Target>
          (FRigVMFunction_MathRBFInterpolateVectorWorkData *param_1,
          TArrayView<FMathRBFInterpolateVectorXform_Target_const_,int> *param_2,
          TVector<double> *param_3,ERBFVectorDistanceType param_4,ERBFKernelType param_5,
          float param_6,bool param_7,TArray<float,TSizedDefaultAllocator<32>_> *param_8)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  ulong64 uVar9;
  int iVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  FMathRBFInterpolateVectorXform_Target *pFVar13;
  FMathRBFInterpolateVectorXform_Target *pFVar14;
  undefined1 auStackY_1f8 [32];
  ForAnyElementType local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  float local_190;
  TArrayView<UE::Math::TVector<double>_const_,int> local_188;
  code *local_178;
  undefined **local_168;
  undefined8 local_160;
  float local_158;
  undefined ***local_150;
  code *local_148;
  undefined **local_138;
  undefined8 local_130;
  float local_128;
  undefined ***local_120;
  TArrayView<UE::Math::TVector<double>_const_,int> local_118;
  undefined1 local_108 [64];
  longlong local_c8 [3];
  longlong *local_b0;
  undefined1 local_a8 [64];
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar3 = param_2->ArrayNum;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  iStack_19c = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar3,&local_1a8,0,&iStack_19c);
  }
  pFVar14 = param_2->DataPtr;
  pFVar13 = pFVar14 + param_2->ArrayNum;
  FVar7.Data = local_1a8.Data;
  iVar10 = local_1a0;
  for (; local_1a8.Data = FVar7.Data, local_1a0 = iVar10, pFVar14 != pFVar13; pFVar14 = pFVar14 + 1)
  {
    if (((FVar7.Data <= pFVar14) &&
        (pFVar14 < (FMathRBFInterpolateVectorXform_Target *)
                   ((longlong)
                    (&(((FMathRBFInterpolateVectorXform_Target *)FVar7.Data)->Value).Rotation + -1)
                   + (longlong)iStack_19c * 0x18))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_1a0 == iStack_19c) {
      local_1a0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&local_1a8,&iStack_19c);
    }
    iVar10 = local_1a0 + 1;
    dVar6 = (pFVar14->Target).field0_0x0._s_0.Y;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18) = (pFVar14->Target).field0_0x0._s_0.X;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 8) = dVar6;
    *(double *)(local_1a8.Data + (longlong)local_1a0 * 0x18 + 0x10) =
         (pFVar14->Target).field0_0x0._s_0.Z;
    FVar7.Data = local_1a8.Data;
  }
  uVar3 = (uint)uStack_194 >> 8;
  uStack_194 = CONCAT31((int3)uVar3,param_5);
  local_190 = param_6;
  uVar3 = (uint)local_198 >> 8;
  local_198 = CONCAT31((int3)uVar3,param_4);
  if ((param_1->Targets).ArrayNum == iVar10) {
    if (param_1->bAreTargetsConstant != false) {
      local_188.DataPtr = (TVector<double> *)FVar7.Data;
      local_188.ArrayNum = iVar10;
      if ((iVar10 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = local_1a0;
      uVar9 = HashTargets(&local_188);
      if (uVar9 != param_1->Hash) {
        param_1->bAreTargetsConstant = false;
      }
    }
  }
  else {
    pTVar1 = &param_1->Targets;
    if (pTVar1 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_1a8) {
      iVar4 = (param_1->Targets).ArrayMax;
      piVar2 = &(param_1->Targets).ArrayMax;
      (param_1->Targets).ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar4 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar10,iVar4,&pTVar1->AllocatorInstance,iVar10,piVar2);
        if (iVar10 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,FVar7.Data,(longlong)iVar10 * 0x18);
        }
      }
    }
    local_118.DataPtr = (TVector<double> *)local_1a8.Data;
    local_118.ArrayNum = local_1a0;
    if ((local_1a0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar9 = HashTargets(&local_118);
    param_1->Hash = uVar9;
    local_108._32_4_ = (param_1->Targets).ArrayNum;
    local_108._24_8_ = (pTVar1->AllocatorInstance).Data;
    local_168 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_158 = local_190;
    local_150 = (undefined ***)0x0;
    local_160 = CONCAT44(uStack_194,local_198);
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if (((int)local_108._32_4_ < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_108._0_8_ = (void *)0x0;
    local_108._8_8_ = 0;
    local_108[0x10] = 0;
    local_108._36_4_ = local_188._12_4_;
    local_108._48_8_ = local_178;
    local_b0 = (longlong *)0x0;
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_108 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if (local_178 != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_108);
    if ((code *)local_108._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_108 + 0x40);
      if (local_b0 != (longlong *)0x0) {
        plVar12 = local_b0;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    iVar10 = local_1a0;
    if ((void *)local_108._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_108._0_8_);
      iVar10 = local_1a0;
    }
  }
  FVar7.Data = local_1a8.Data;
  if (param_1->bAreTargetsConstant == false) {
    local_138 = &
                ___7__TFunction_OwnedObject_UFRigVMFunction_MathRBFVectorWeightFunctor___0A__0A__Function_Private_Core_UE__6B_
    ;
    local_130 = CONCAT44(uStack_194,local_198);
    local_128 = local_190;
    local_120 = (undefined ***)0x0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<FRigVMFunction_MathRBFVectorWeightFunctor,float,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    if ((iVar10 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a8._36_4_ = local_188._12_4_;
    local_a8._0_8_ = (void *)0x0;
    local_a8._8_8_ = 0;
    local_a8[0x10] = 0;
    local_a8._24_8_ = FVar7.Data;
    local_a8._32_4_ = iVar10;
    local_a8._48_8_ = local_148;
    local_50 = (longlong *)0x0;
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)**pppuVar11)(pppuVar11,local_a8 + 0x40);
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::MakeUpperKernel
              ((TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if (local_148 != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    TRBFInterpolator<UE::Math::TVector<double>_>::operator=
              (&param_1->Interpolator,(TRBFInterpolator<UE::Math::TVector<double>_> *)local_a8);
    if ((code *)local_a8._48_8_ != (code *)0x0) {
      plVar12 = (longlong *)(local_a8 + 0x40);
      if (local_50 != (longlong *)0x0) {
        plVar12 = local_50;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((void *)local_a8._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
  }
  TRBFInterpolator<UE::Math::TVector<double>_>::
  Interpolate<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
            (&param_1->Interpolator,param_8,param_3,true,param_7);
  if ((FMathRBFInterpolateVectorXform_Target *)local_1a8.Data !=
      (FMathRBFInterpolateVectorXform_Target *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// HashTargets @ 14a1add60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
FRigVMFunction_MathRBFInterpolateVectorBase::HashTargets
          (TArrayView<UE::Math::TVector<double>_const_,int> *param_1)

{
  TVector<double> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  TVector<double> *pTVar7;
  double local_28 [3];
  longlong local_10;
  
  pTVar7 = param_1->DataPtr;
  dVar5 = 0.0;
  pTVar1 = pTVar7 + param_1->ArrayNum;
  dVar4 = dVar5;
  for (; pTVar7 != pTVar1; pTVar7 = pTVar7 + 1) {
    local_28[0] = (pTVar7->field0_0x0)._s_0.X;
    local_28[1] = (pTVar7->field0_0x0)._s_0.Y;
    if (local_28[0] == 0.0) {
      local_28[0] = dVar5;
    }
    local_28[2] = (pTVar7->field0_0x0)._s_0.Z;
    if (local_28[1] == 0.0) {
      local_28[1] = dVar5;
    }
    if (local_28[2] == 0.0) {
      local_28[2] = dVar5;
    }
    uVar3 = (ulonglong)dVar4 ^ 0x53edf6ba1375bcbf;
    pdVar6 = local_28;
    do {
      lVar2 = (longlong)*pdVar6;
      pdVar6 = pdVar6 + 1;
      uVar3 = (uVar3 ^ ((ulonglong)(lVar2 * -0x395b586ca42e166b) >> 0x2f ^
                       lVar2 * -0x395b586ca42e166b) * -0x395b586ca42e166b) * -0x395b586ca42e166b;
    } while (pdVar6 != (double *)&local_10);
    uVar3 = (uVar3 >> 0x2f ^ uVar3) * -0x395b586ca42e166b;
    dVar4 = (double)(uVar3 >> 0x2f ^ uVar3);
  }
  return (ulong64)dVar4;
}

