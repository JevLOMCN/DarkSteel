// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4892a0

UScriptStruct * __cdecl FRigUnit_Multiply_VectorVector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector,(UObject *)pUVar1,
                         L"RigUnit_Multiply_VectorVector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4893a0

UScriptStruct * __thiscall
FRigUnit_Multiply_VectorVector::GetExecuteContextStruct(FRigUnit_Multiply_VectorVector *this)

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

// Execute @ 14a489810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_Multiply_VectorVector::Execute(FRigUnit_Multiply_VectorVector *this)

{
  undefined1 auStack_2c8 [48];
  double local_298;
  double local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2c8;
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
  local_278 = *(double *)&this->field_0x30;
  local_298 = *(double *)&this->field_0x18;
  *(double *)&this->field_0x38 = *(double *)&this->field_0x8 * *(double *)&this->field_0x20;
  *(double *)&this->field_0x40 = *(double *)&this->field_0x10 * *(double *)&this->field_0x28;
  *(double *)&this->field_0x48 = local_298 * local_278;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a489920

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_Multiply_VectorVector::GetUpgradeInfo
          (FRigUnit_Multiply_VectorVector *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  FString local_78;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_68;
  FRigVMStruct local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_40 = *(undefined8 *)&this->field_0x18;
  local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = (FRigVMStruct)&___7FRigVMFunction_MathVectorMul__6B_;
  local_10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_50 = *(undefined8 *)&this->field_0x8;
  uStack_48 = *(undefined8 *)&this->field_0x10;
  local_28 = *(undefined8 *)&this->field_0x30;
  local_38 = *(undefined8 *)&this->field_0x20;
  uStack_30 = *(undefined8 *)&this->field_0x28;
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
  if (Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector,(UObject *)pUVar1,
                         L"RigUnit_Multiply_VectorVector");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_78.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::RigVMFunctions;
    local_78.Data.ArrayNum = 1;
    local_68._12_4_ = local_78.Data.ArrayMax;
    local_68.ArrayNum = 1;
    local_68.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_Multiply_VectorVector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.
                       OuterSingleton,&local_68);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_Multiply_VectorVector.OuterSingleton;
  pUVar2 = FRigVMFunction_MathVectorMul::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,&local_58);
  ::FString::FString((FString *)&local_68,L"A");
  ::FString::FString(&local_78,L"Argument0");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,&local_78,(FString *)&local_68,true,true);
  if ((FRigVMCompiledInFunction *)local_78.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  ::FString::FString(&local_78,L"B");
  ::FString::FString((FString *)&local_68,L"Argument1");
  FRigVMStructUpgradeInfo::AddRemappedPin
            (__return_storage_ptr__,(FString *)&local_68,&local_78,true,true);
  if (local_68.DataPtr != (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_68.DataPtr);
  }
  if ((FRigVMCompiledInFunction *)local_78.Data.AllocatorInstance.Data !=
      (FRigVMCompiledInFunction *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a52afb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_Multiply_VectorVector::Execute
          (FRigUnit_Multiply_VectorVector *this,FControlRigExecuteContext *param_1)

{
  *(double *)&this->field_0x38 = *(double *)&this->field_0x8 * *(double *)&this->field_0x20;
  *(double *)&this->field_0x40 = *(double *)&this->field_0x10 * *(double *)&this->field_0x28;
  *(double *)&this->field_0x48 = *(double *)&this->field_0x18 * *(double *)&this->field_0x30;
  return;
}

// RigVMExecute @ 14a54bbf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_Multiply_VectorVector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  FRigVMMemoryHandle *pFVar4;
  double *pdVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double *pdVar10;
  double *pdVar11;
  
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar10 = (double *)pFVar4->Ptr;
  }
  else {
    pdVar10 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  if (iVar3 < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = param_2->DataPtr;
  if (pFVar4[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pdVar11 = (double *)pFVar4[1].Ptr;
  }
  else {
    pdVar11 = (double *)
              FRigVMPropertyPath::GetData_Internal
                        (pFVar4[1].PropertyPath,pFVar4[1].Ptr,pFVar4[1].Property);
  }
  if (iVar3 < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pdVar5 = (double *)param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  dVar1 = pdVar11[2];
  dVar7 = pdVar11[1];
  dVar8 = pdVar10[1];
  dVar2 = pdVar10[2];
  *pdVar5 = *pdVar10 * *pdVar11;
  pdVar5[1] = dVar8 * dVar7;
  pdVar5[2] = dVar2 * dVar1;
  return;
}

// StaticExecute @ 14a5860d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_Multiply_VectorVector::StaticExecute
          (FControlRigExecuteContext *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  (param_4->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X * (param_2->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar4 * dVar3;
  (param_4->field0_0x0)._s_0.Z = dVar2 * dVar1;
  return;
}

