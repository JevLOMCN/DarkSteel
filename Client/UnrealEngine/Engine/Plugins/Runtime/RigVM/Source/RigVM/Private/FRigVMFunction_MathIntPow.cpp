// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a157270

UScriptStruct * __cdecl FRigVMFunction_MathIntPow::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntPow.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntPow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow,(UObject *)pUVar1,
                         L"RigVMFunction_MathIntPow");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigVMFunction_MathIntPow_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntPow.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_MathIntPow.OuterSingleton;
}

// GetExecuteContextStruct @ 14a1572f0

UScriptStruct * __thiscall
FRigVMFunction_MathIntPow::GetExecuteContextStruct(FRigVMFunction_MathIntPow *this)

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

// Execute @ 14a1575a0

void __thiscall FRigVMFunction_MathIntPow::Execute(FRigVMFunction_MathIntPow *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
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
  uVar4 = *(uint *)&this->field_0xc;
  iVar3 = *(int *)&this->field_0x8;
  if ((int)uVar4 < 0) {
    iVar1 = -iVar3;
    if (-iVar3 < 0) {
      iVar1 = iVar3;
    }
    if (1 < iVar1) {
      *(undefined4 *)&this->field_0x10 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return;
    }
    uVar2 = 0x7fffffff;
    if (iVar3 != 0) {
      uVar2 = 1;
    }
    *(undefined4 *)&this->field_0x10 = uVar2;
  }
  else {
    *(undefined4 *)&this->field_0x10 = 1;
    while( true ) {
      if ((uVar4 & 1) != 0) {
        *(int *)&this->field_0x10 = iVar3 * *(int *)&this->field_0x10;
      }
      uVar4 = uVar4 >> 1;
      if (uVar4 == 0) break;
      iVar3 = iVar3 * iVar3;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a07c0

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
FRigVMFunction_MathIntPow::Execute(FRigVMFunction_MathIntPow *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)&this->field_0xc;
  iVar1 = *(int *)&this->field_0x8;
  if ((int)uVar4 < 0) {
    iVar2 = -iVar1;
    if (-iVar1 < 0) {
      iVar2 = iVar1;
    }
    if (1 < iVar2) {
      *(undefined4 *)&this->field_0x10 = 0;
      return;
    }
    uVar3 = 0x7fffffff;
    if (iVar1 != 0) {
      uVar3 = 1;
    }
    *(undefined4 *)&this->field_0x10 = uVar3;
  }
  else {
    *(undefined4 *)&this->field_0x10 = 1;
    while( true ) {
      if ((uVar4 & 1) != 0) {
        *(int *)&this->field_0x10 = iVar1 * *(int *)&this->field_0x10;
      }
      uVar4 = uVar4 >> 1;
      if (uVar4 == 0) break;
      iVar1 = iVar1 * iVar1;
    }
  }
  return;
}

// RigVMExecute @ 14a1c5a00

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
FRigVMFunction_MathIntPow::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FRigVMMemoryHandle *pFVar4;
  code *pcVar5;
  bool bVar6;
  int *piVar7;
  FRigVMExecuteContext *pFVar8;
  
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
  pFVar4 = param_2->DataPtr;
  if (pFVar4->PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar7 = (int *)pFVar4->Ptr;
  }
  else {
    piVar7 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar4->PropertyPath,pFVar4->Ptr,pFVar4->Property);
  }
  iVar2 = *piVar7;
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
  pFVar4 = param_2->DataPtr;
  if (pFVar4[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    piVar7 = (int *)pFVar4[1].Ptr;
  }
  else {
    piVar7 = (int *)FRigVMPropertyPath::GetData_Internal
                              (pFVar4[1].PropertyPath,pFVar4[1].Ptr,pFVar4[1].Property);
  }
  iVar3 = *piVar7;
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
  piVar7 = (int *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  StaticExecute(pFVar8,iVar2,iVar3,piVar7);
  return;
}

// StaticExecute @ 14a1de6f0

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
FRigVMFunction_MathIntPow::StaticExecute
          (FRigVMExecuteContext *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if (param_3 < 0) {
    iVar1 = -param_2;
    if (-param_2 < 0) {
      iVar1 = param_2;
    }
    if (1 < iVar1) {
      *param_4 = 0;
      return;
    }
    iVar1 = 0x7fffffff;
    if (param_2 != 0) {
      iVar1 = 1;
    }
    *param_4 = iVar1;
  }
  else {
    *param_4 = 1;
    while( true ) {
      if ((param_3 & 1U) != 0) {
        *param_4 = param_2 * *param_4;
      }
      param_3 = (uint)param_3 >> 1;
      if (param_3 == 0) break;
      param_2 = param_2 * param_2;
    }
  }
  return;
}

