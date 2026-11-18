// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4baf00

UScriptStruct * __cdecl FRigUnit_QuaternionFromAxisAndAngle::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle,
                         (UObject *)pUVar1,L"RigUnit_QuaternionFromAxisAndAngle");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4baf80

UScriptStruct * __thiscall
FRigUnit_QuaternionFromAxisAndAngle::GetExecuteContextStruct
          (FRigUnit_QuaternionFromAxisAndAngle *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a4bb850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_QuaternionFromAxisAndAngle::Execute(FRigUnit_QuaternionFromAxisAndAngle *this)

{
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
      if (`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          _thread_safe_static_guard_0__ == -1) {
        atexit(`FRigVMExecuteContext::Initialize'::__l5::
               _dynamic_atexit_destructor_for__StaticNameCache__);
        _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__);
      }
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Axis,this->Angle,&this->Result);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4bb920

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_QuaternionFromAxisAndAngle::GetUpgradeInfo
          (FRigUnit_QuaternionFromAxisAndAngle *this,FRigVMStructUpgradeInfo *__return_storage_ptr__
          )

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  FString local_78;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_68;
  FRigVMStruct local_58 [2];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  float local_10;
  
  local_58[0] = (FRigVMStruct)&___7FRigVMFunction_MathQuaternionToAxisAndAngle__6B_;
  local_48 = UE::Math::TQuat<double>::Identity.X;
  dStack_40 = UE::Math::TQuat<double>::Identity.Y;
  local_28 = (this->Axis).field0_0x0._s_0.X;
  dStack_20 = (this->Axis).field0_0x0._s_0.Y;
  local_38 = UE::Math::TQuat<double>::Identity.Z;
  dStack_30 = UE::Math::TQuat<double>::Identity.W;
  local_18 = (this->Axis).field0_0x0._s_0.Z;
  local_10 = this->Angle;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle,
                         (UObject *)pUVar1,L"RigUnit_QuaternionFromAxisAndAngle");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_78.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::RigVMFunctions;
    local_78.Data.ArrayNum = 1;
    local_68._12_4_ = local_78.Data.ArrayMax;
    local_68.ArrayNum = 1;
    local_68.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.
                       OuterSingleton,&local_68);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionFromAxisAndAngle.OuterSingleton;
  pUVar2 = FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,local_58);
  ::FString::FString((FString *)&local_68,L"Value");
  ::FString::FString(&local_78,L"Result");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_78,(FString *)&local_68,true,true);
  if ((FRigVMCompiledInFunction *)local_78.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52be10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_QuaternionFromAxisAndAngle::Execute
          (FRigUnit_QuaternionFromAxisAndAngle *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Axis,this->Angle,&this->Result);
  return;
}

// RigVMExecute @ 14a54e710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_QuaternionFromAxisAndAngle::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TQuat<double> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  float *pfVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TVector<double> *)pFVar3->Ptr;
  }
  else {
    pTVar7 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property)
    ;
  }
  if (iVar2 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar8 = (float *)pFVar3[1].Ptr;
  }
  else {
    pfVar8 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  fVar1 = *pfVar8;
  if (iVar2 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar4 = (TQuat<double> *)param_2->DataPtr[2].Ptr;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pTVar7,fVar1,pTVar4);
  return;
}

// StaticExecute @ 14a58b480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_QuaternionFromAxisAndAngle::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,float param_3,
          TQuat<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar7;
  
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar7 = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar7 == __real_3ff0000000000000) {
    uVar4 = (param_2->field0_0x0)._s_0.X;
    uVar5 = (param_2->field0_0x0)._s_0.Y;
    uVar6 = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar7) {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      uVar4 = dVar2 * dVar7;
      uVar5 = dVar3 * dVar7;
      uVar6 = dVar1 * dVar7;
    }
  }
  __libm_sse2_sincos_();
  param_4->X = extraout_XMM0_Qa * (double)uVar4;
  param_4->Y = extraout_XMM0_Qa * (double)uVar5;
  param_4->Z = extraout_XMM0_Qa * (double)uVar6;
  param_4->W = extraout_XMM0_Qb;
  return;
}

