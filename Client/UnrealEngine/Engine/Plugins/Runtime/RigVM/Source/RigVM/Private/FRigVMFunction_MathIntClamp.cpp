// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a15ace0

UScriptStruct * __cdecl FRigVMFunction_MathIntClamp::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntClamp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntClamp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp,(UObject *)pUVar1,
                         L"RigVMFunction_MathIntClamp");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_MathIntClamp_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntClamp.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntClamp.OuterSingleton;
}

// GetExecuteContextStruct @ 14a15ada0

UScriptStruct * __thiscall
FRigVMFunction_MathIntClamp::GetExecuteContextStruct(FRigVMFunction_MathIntClamp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Execute @ 14a15afd0

void __thiscall FRigVMFunction_MathIntClamp::Execute(FRigVMFunction_MathIntClamp *this)

{
  int iVar1;
  int iVar2;
  
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
  iVar2 = this->Maximum;
  if (this->Value < this->Maximum) {
    iVar2 = this->Value;
  }
  iVar1 = this->Minimum;
  if (this->Minimum < iVar2) {
    iVar1 = iVar2;
  }
  this->Result = iVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a0600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_MathIntClamp::Execute
          (FRigVMFunction_MathIntClamp *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = this->Maximum;
  if (this->Value < this->Maximum) {
    iVar2 = this->Value;
  }
  iVar1 = this->Minimum;
  if (this->Minimum < iVar2) {
    iVar1 = iVar2;
  }
  this->Result = iVar1;
  return;
}

// RigVMExecute @ 14a1c47e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathIntClamp::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  FRigVMMemoryHandle *pFVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_2->ArrayNum;
  if (iVar7 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = param_2->DataPtr;
  if (pFVar5->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar4 = (int *)pFVar5->Ptr;
  }
  else {
    piVar4 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar5->PropertyPath,pFVar5->Ptr,pFVar5->Property);
  }
  iVar1 = *piVar4;
  if (iVar7 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = param_2->DataPtr;
  if (pFVar5[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar4 = (int *)pFVar5[1].Ptr;
  }
  else {
    piVar4 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar5[1].PropertyPath,pFVar5[1].Ptr,pFVar5[1].Property);
  }
  iVar6 = *piVar4;
  if (iVar7 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = param_2->DataPtr;
  if (pFVar5[2].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar4 = (int *)pFVar5[2].Ptr;
  }
  else {
    piVar4 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar5[2].PropertyPath,pFVar5[2].Ptr,pFVar5[2].Property);
  }
  iVar7 = *piVar4;
  pFVar5 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  piVar4 = (int *)FRigVMMemoryHandle::GetData_Internal(pFVar5,false,-1);
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  if (iVar1 < iVar7) {
    iVar7 = iVar1;
  }
  if (iVar6 < iVar7) {
    iVar6 = iVar7;
  }
  *piVar4 = iVar6;
  return;
}

// StaticExecute @ 14a1de5c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FRigVMFunction_MathIntClamp::StaticExecute
          (FRigVMExecuteContext *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  if (param_2 < param_4) {
    param_4 = param_2;
  }
  if (param_3 < param_4) {
    param_3 = param_4;
  }
  *param_5 = param_3;
  return;
}

