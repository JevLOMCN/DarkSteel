// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a499be0

UScriptStruct * __cdecl FRigUnit_ToSwingAndTwist::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist,(UObject *)pUVar1,
                         L"RigUnit_ToSwingAndTwist");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton;
}

// GetExecuteContextStruct @ 14a499c60

UScriptStruct * __thiscall
FRigUnit_ToSwingAndTwist::GetExecuteContextStruct(FRigUnit_ToSwingAndTwist *this)

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

// Execute @ 14a49a3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ToSwingAndTwist::Execute(FRigUnit_ToSwingAndTwist *this)

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
  if ((((this->TwistAxis).field0_0x0._s_0.X != 0.0) || ((this->TwistAxis).field0_0x0._s_0.Y != 0.0))
     || ((this->TwistAxis).field0_0x0._s_0.Z != 0.0)) {
    UE::Math::TQuat<double>::ToSwingTwist(&this->Input,&this->TwistAxis,&this->Swing,&this->Twist);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a49a4a0

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ToSwingAndTwist::GetUpgradeInfo
          (FRigUnit_ToSwingAndTwist *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_a8;
  FRigVMStruct local_98 [2];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_98[0] = (FRigVMStruct)&___7FRigVMFunction_MathQuaternionSwingTwist__6B_;
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  local_48 = UE::Math::TQuat<double>::Identity.X;
  dStack_40 = UE::Math::TQuat<double>::Identity.Y;
  local_78 = (this->Input).Z;
  dStack_70 = (this->Input).W;
  local_38 = UE::Math::TQuat<double>::Identity.Z;
  dStack_30 = UE::Math::TQuat<double>::Identity.W;
  local_88 = (this->Input).X;
  dStack_80 = (this->Input).Y;
  local_58 = (this->TwistAxis).field0_0x0._s_0.Z;
  local_68 = (this->TwistAxis).field0_0x0._s_0.X;
  dStack_60 = (this->TwistAxis).field0_0x0._s_0.Y;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist,(UObject *)pUVar1,
                         L"RigUnit_ToSwingAndTwist");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_a8.ArrayNum = 1;
    local_a8.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ToSwingAndTwist_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton,
               &local_a8);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ToSwingAndTwist.OuterSingleton;
  pUVar2 = FRigVMFunction_MathQuaternionSwingTwist::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,local_98);
  return __return_storage_ptr__;
}

// Execute @ 14a52ead0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ToSwingAndTwist::Execute(FRigUnit_ToSwingAndTwist *this,FControlRigExecuteContext *param_1)

{
  if ((((this->TwistAxis).field0_0x0._s_0.X == 0.0) && ((this->TwistAxis).field0_0x0._s_0.Y == 0.0))
     && ((this->TwistAxis).field0_0x0._s_0.Z == 0.0)) {
    return;
  }
  UE::Math::TQuat<double>::ToSwingTwist(&this->Input,&this->TwistAxis,&this->Swing,&this->Twist);
  return;
}

// RigVMExecute @ 14a559620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToSwingAndTwist::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  TQuat<double> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TQuat<double> *this;
  TVector<double> *pTVar5;
  FRigVMMemoryHandle *pFVar6;
  TQuat<double> *pTVar7;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = param_2->DataPtr;
  if (pFVar6->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TQuat<double> *)pFVar6->Ptr;
  }
  else {
    this = (TQuat<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar6->PropertyPath,pFVar6->Ptr,pFVar6->Property);
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = param_2->DataPtr;
  if (pFVar6[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar5 = (TVector<double> *)pFVar6[1].Ptr;
  }
  else {
    pTVar5 = (TVector<double> *)
             FRigVMPropertyPath::GetData_Internal
                       (pFVar6[1].PropertyPath,pFVar6[1].Ptr,pFVar6[1].Property);
  }
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar2 = (TQuat<double> *)param_2->DataPtr[2].Ptr;
  pFVar6 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pTVar7 = (TQuat<double> *)FRigVMMemoryHandle::GetData_Internal(pFVar6,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  if ((((pTVar5->field0_0x0)._s_0.X != 0.0) || ((pTVar5->field0_0x0)._s_0.Y != 0.0)) ||
     ((pTVar5->field0_0x0)._s_0.Z != 0.0)) {
    UE::Math::TQuat<double>::ToSwingTwist(this,pTVar5,pTVar2,pTVar7);
  }
  return;
}

// StaticExecute @ 14a59da90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ToSwingAndTwist::StaticExecute
          (FControlRigExecuteContext *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          TQuat<double> *param_4,TQuat<double> *param_5)

{
  if ((((param_3->field0_0x0)._s_0.X == 0.0) && ((param_3->field0_0x0)._s_0.Y == 0.0)) &&
     ((param_3->field0_0x0)._s_0.Z == 0.0)) {
    return;
  }
  UE::Math::TQuat<double>::ToSwingTwist(param_2,param_3,param_4,param_5);
  return;
}

