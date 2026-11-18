// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4ba670

UScriptStruct * __cdecl FRigUnit_QuaternionToAxisAndAngle::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle,
                         (UObject *)pUVar1,L"RigUnit_QuaternionToAxisAndAngle");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ba6f0

UScriptStruct * __thiscall
FRigUnit_QuaternionToAxisAndAngle::GetExecuteContextStruct(FRigUnit_QuaternionToAxisAndAngle *this)

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

// Execute @ 14a4ba7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_QuaternionToAxisAndAngle::Execute(FRigUnit_QuaternionToAxisAndAngle *this)

{
  double dVar1;
  double _X;
  undefined1 auStack_288 [32];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  if ((FRigVMNameCache *)local_268._80_8_ == (FRigVMNameCache *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                             ::__l5::_thread_safe_static_guard_0__),
       `public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
       _thread_safe_static_guard_0__ == -1)) {
      atexit(`FRigVMExecuteContext::Initialize'::__l5::
             _dynamic_atexit_destructor_for__StaticNameCache__);
      _Init_thread_footer(&`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__);
    }
    local_268._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  dVar1 = (this->Argument).W;
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar1) && (_X = dVar1, __real_3ff0000000000000 <= dVar1)) {
    _X = __real_3ff0000000000000;
  }
  dVar1 = acos(_X);
  this->Angle = (float)(dVar1 + dVar1) * __real_42652ee0;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4ba8e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_QuaternionToAxisAndAngle::GetUpgradeInfo
          (FRigUnit_QuaternionToAxisAndAngle *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

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
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_48 = (this->Argument).X;
  dStack_40 = (this->Argument).Y;
  local_28 = ___xmm_00000000000000003ff0000000000000;
  uStack_20 = _UNK_150689518;
  local_18 = 0;
  local_38 = (this->Argument).Z;
  dStack_30 = (this->Argument).W;
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
  local_58[0] = (FRigVMStruct)&___7FRigVMFunction_MathQuaternionToAxisAndAngle__6B_;
  local_10 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle,
                         (UObject *)pUVar1,L"RigUnit_QuaternionToAxisAndAngle");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_78.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::RigVMFunctions;
    local_78.Data.ArrayNum = 1;
    local_68._12_4_ = local_78.Data.ArrayMax;
    local_68.ArrayNum = 1;
    local_68.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.
                       OuterSingleton,&local_68);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_QuaternionToAxisAndAngle.OuterSingleton;
  pUVar2 = FRigVMFunction_MathQuaternionToAxisAndAngle::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,local_58);
  ::FString::FString((FString *)&local_68,L"Value");
  ::FString::FString(&local_78,L"Argument");
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

// Execute @ 14a52be50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_QuaternionToAxisAndAngle::Execute
          (FRigUnit_QuaternionToAxisAndAngle *this,FControlRigExecuteContext *param_1)

{
  double dVar1;
  double _X;
  
  dVar1 = (this->Argument).W;
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar1) && (_X = dVar1, __real_3ff0000000000000 <= dVar1)) {
    _X = __real_3ff0000000000000;
  }
  dVar1 = acos(_X);
  this->Angle = (float)(dVar1 + dVar1) * __real_42652ee0;
  return;
}

// RigVMExecute @ 14a54e9e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_QuaternionToAxisAndAngle::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TVector<double> *pTVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  TQuat<double> *pTVar7;
  FControlRigExecuteContext *pFVar8;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pTVar7 = (TQuat<double> *)pFVar2->Ptr;
  }
  else {
    pTVar7 = (TQuat<double> *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
  if (iVar1 < 2) {
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
  pTVar3 = (TVector<double> *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
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
  pfVar4 = (float *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,pTVar7,pTVar3,pfVar4);
  return;
}

// StaticExecute @ 14a58b840

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_QuaternionToAxisAndAngle::StaticExecute
          (FControlRigExecuteContext *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          float *param_4)

{
  double dVar1;
  double _X;
  
  dVar1 = param_2->W;
  _X = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar1) && (_X = dVar1, __real_3ff0000000000000 <= dVar1)) {
    _X = __real_3ff0000000000000;
  }
  dVar1 = acos(_X);
  *param_4 = (float)(dVar1 + dVar1) * __real_42652ee0;
  return;
}

