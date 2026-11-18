// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4fb8f0

UScriptStruct * __cdecl FRigUnit_MapRange_Float::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float,(UObject *)pUVar1,
                         L"RigUnit_MapRange_Float");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4fb9c0

UScriptStruct * __thiscall
FRigUnit_MapRange_Float::GetExecuteContextStruct(FRigUnit_MapRange_Float *this)

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

// Execute @ 14a4fbd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_MapRange_Float::Execute(FRigUnit_MapRange_Float *this)

{
  float fVar1;
  undefined1 auStack_298 [32];
  undefined1 local_278 [592];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_298;
  FControlRigExecuteContext::FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  if ((FRigVMNameCache *)local_278._80_8_ == (FRigVMNameCache *)0x0) {
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
    local_278._80_8_ =
         &`public:_virtual_void___cdecl_FRigVMExecuteContext::Initialize(void)___ptr64'::__l5::
          StaticNameCache;
  }
  fVar1 = this->MaxIn - this->MinIn;
  if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = (this->Value - this->MinIn) / fVar1;
  }
  else {
    fVar1 = __real_3f800000;
    if (this->Value < this->MaxIn) {
      fVar1 = 0.0;
    }
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  this->Result = fVar1 * (this->MaxOut - this->MinOut) + this->MinOut;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_278);
  return;
}

// GetUpgradeInfo @ 14a4fbe70

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_MapRange_Float::GetUpgradeInfo
          (FRigUnit_MapRange_Float *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  FString local_58;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_48;
  FRigVMStruct local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  float local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  local_30._0_4_ = this->Value;
  local_30._4_4_ = this->MinIn;
  uStack_28._0_4_ = this->MaxIn;
  uStack_28._4_4_ = this->MinOut;
  local_18 = 0;
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  local_38 = (FRigVMStruct)&___7FRigVMFunction_MathFloatRemap__6B_;
  local_20 = this->MaxOut;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
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
  local_1c = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MapRange_Float,(UObject *)pUVar1,
                         L"RigUnit_MapRange_Float");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_58.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::RigVMFunctions;
    local_58.Data.ArrayNum = 1;
    local_48._12_4_ = local_58.Data.ArrayMax;
    local_48.ArrayNum = 1;
    local_48.DataPtr = Z_Construct_UScriptStruct_FRigUnit_MapRange_Float_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton,
               &local_48);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_MapRange_Float.OuterSingleton;
  pUVar2 = FRigVMFunction_MathFloatRemap::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_38);
  ::FString::FString((FString *)&local_48,L"SourceMinimum");
  ::FString::FString(&local_58,L"MinIn");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_58,(FString *)&local_48,true,true);
  if ((FRigVMCompiledInFunction *)local_58.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  ::FString::FString(&local_58,L"SourceMaximum");
  ::FString::FString((FString *)&local_48,L"MaxIn");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_48,&local_58,true,true);
  if (local_48.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if ((FRigVMCompiledInFunction *)local_58.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,L"TargetMinimum");
  ::FString::FString((FString *)&local_48,L"MinOut");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_48,&local_58,true,true);
  if (local_48.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if ((FRigVMCompiledInFunction *)local_58.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,L"TargetMaximum");
  ::FString::FString((FString *)&local_48,L"MaxOut");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_48,&local_58,true,true);
  if (local_48.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if ((FRigVMCompiledInFunction *)local_58.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52ab80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_MapRange_Float::Execute(FRigUnit_MapRange_Float *this,FControlRigExecuteContext *param_1)

{
  float fVar1;
  
  fVar1 = this->MaxIn - this->MinIn;
  if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = (this->Value - this->MinIn) / fVar1;
  }
  else {
    fVar1 = __real_3f800000;
    if (this->Value < this->MaxIn) {
      fVar1 = 0.0;
    }
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  this->Result = fVar1 * (this->MaxOut - this->MinOut) + this->MinOut;
  return;
}

// RigVMExecute @ 14a54ae50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_MapRange_Float::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  float *pfVar9;
  FRigVMMemoryHandle *pFVar10;
  FControlRigExecuteContext *pFVar11;
  
  iVar6 = param_2->ArrayNum;
  if (iVar6 < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10->Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10->PropertyPath,pFVar10->Ptr,pFVar10->Property);
  }
  fVar1 = *pfVar9;
  if (iVar6 < 2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[1].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[1].PropertyPath,pFVar10[1].Ptr,pFVar10[1].Property);
  }
  fVar2 = *pfVar9;
  if (iVar6 < 3) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = param_2->DataPtr;
  if (pFVar10[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pfVar9 = (float *)pFVar10[2].Ptr;
  }
  else {
    pfVar9 = (float *)FRigVMPropertyPath::GetData_Internal
                                (pFVar10[2].PropertyPath,pFVar10[2].Ptr,pFVar10[2].Property);
  }
  fVar3 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar4 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,4);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,true,-1);
  fVar5 = *pfVar9;
  pFVar10 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,5);
  pfVar9 = (float *)FRigVMMemoryHandle::GetData_Internal(pFVar10,false,-1);
  pFVar11 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar11,fVar1,fVar2,fVar3,fVar4,fVar5,pfVar9);
  return;
}

// StaticExecute @ 14a583500

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_MapRange_Float::StaticExecute
          (FControlRigExecuteContext *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float *param_7)

{
  float fVar1;
  
  if (__real_322bcc77 < (float)((uint)(param_4 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    fVar1 = (param_2 - param_3) / (param_4 - param_3);
  }
  else {
    fVar1 = __real_3f800000;
    if (param_2 < param_4) {
      fVar1 = 0.0;
    }
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_7 = fVar1 * (param_6 - param_5) + param_5;
  return;
}

