// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a496670

UScriptStruct * __cdecl FRigUnit_ConvertRotation::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertRotation,(UObject *)pUVar1,
                         L"RigUnit_ConvertRotation");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4966f0

UScriptStruct * __thiscall
FRigUnit_ConvertRotation::GetExecuteContextStruct(FRigUnit_ConvertRotation *this)

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

// Execute @ 14a496780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ConvertRotation::Execute(FRigUnit_ConvertRotation *this)

{
  double dVar1;
  TQuat<double> *pTVar2;
  undefined1 auStack_2a8 [32];
  TQuat<double> local_288;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
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
  pTVar2 = UE::Math::TRotator<double>::Quaternion(&this->Input,&local_288);
  dVar1 = pTVar2->Y;
  (this->Result).X = pTVar2->X;
  (this->Result).Y = dVar1;
  dVar1 = pTVar2->W;
  (this->Result).Z = pTVar2->Z;
  (this->Result).W = dVar1;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a496860

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_ConvertRotation::GetUpgradeInfo
          (FRigUnit_ConvertRotation *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  FString local_68;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_58;
  FRigVMStruct local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  local_40 = (this->Input).Pitch;
  dStack_38 = (this->Input).Yaw;
  local_48 = (FRigVMStruct)&___7FRigVMFunction_MathQuaternionFromRotator__6B_;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  local_30 = (this->Input).Roll;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ConvertRotation,(UObject *)pUVar1,
                         L"RigUnit_ConvertRotation");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_68.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::RigVMFunctions;
    local_68.Data.ArrayNum = 1;
    local_58._12_4_ = local_68.Data.ArrayMax;
    local_58.ArrayNum = 1;
    local_58.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ConvertRotation_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton,
               &local_58);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_ConvertRotation.OuterSingleton;
  pUVar2 = FRigVMFunction_MathQuaternionFromRotator::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_48);
  ::FString::FString((FString *)&local_58,L"Rotator");
  ::FString::FString(&local_68,L"Input");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_68,(FString *)&local_58,true,true);
  if ((FRigVMCompiledInFunction *)local_68.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a526190

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ConvertRotation::Execute(FRigUnit_ConvertRotation *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
  pTVar2 = UE::Math::TRotator<double>::Quaternion(&this->Input,&local_28);
  dVar1 = pTVar2->Y;
  (this->Result).X = pTVar2->X;
  (this->Result).Y = dVar1;
  dVar1 = pTVar2->W;
  (this->Result).Z = pTVar2->Z;
  (this->Result).W = dVar1;
  return;
}

// RigVMExecute @ 14a539aa0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertRotation::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TRotator<double> *this;
  TQuat<double> *pTVar7;
  TQuat<double> local_28;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (TRotator<double> *)pFVar2->Ptr;
  }
  else {
    this = (TRotator<double> *)
           FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pdVar3 = (double *)param_2->DataPtr[1].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  pTVar7 = UE::Math::TRotator<double>::Quaternion(this,&local_28);
  dVar5 = pTVar7->Y;
  *pdVar3 = pTVar7->X;
  pdVar3[1] = dVar5;
  dVar5 = pTVar7->W;
  pdVar3[2] = pTVar7->Z;
  pdVar3[3] = dVar5;
  return;
}

// StaticExecute @ 14a569ff0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ConvertRotation::StaticExecute
          (FControlRigExecuteContext *param_1,TRotator<double> *param_2,TQuat<double> *param_3)

{
  double dVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
  pTVar2 = UE::Math::TRotator<double>::Quaternion(param_2,&local_28);
  dVar1 = pTVar2->Y;
  param_3->X = pTVar2->X;
  param_3->Y = dVar1;
  dVar1 = pTVar2->W;
  param_3->Z = pTVar2->Z;
  param_3->W = dVar1;
  return;
}

