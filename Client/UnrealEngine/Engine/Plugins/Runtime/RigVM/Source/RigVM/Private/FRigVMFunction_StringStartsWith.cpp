// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 6

// StaticStruct @ 14a11d4d0

UScriptStruct * __cdecl FRigVMFunction_StringStartsWith::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_StringStartsWith.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_StringStartsWith.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith,(UObject *)pUVar1
                         ,L"RigVMFunction_StringStartsWith");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigVMFunction_StringStartsWith_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigVMFunction_StringStartsWith.OuterSingleton
               ,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_StringStartsWith.OuterSingleton;
}

// GetExecuteContextStruct @ 14a11d550

UScriptStruct * __thiscall
FRigVMFunction_StringStartsWith::GetExecuteContextStruct(FRigVMFunction_StringStartsWith *this)

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

// Execute @ 14a11d6e0

void __thiscall FRigVMFunction_StringStartsWith::Execute(FRigVMFunction_StringStartsWith *this)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  
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
  iVar1 = (this->Start).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->Start).Data.AllocatorInstance.Data;
  }
  bVar2 = ::FString::StartsWith(&this->Name,pwVar3,iVar4,CaseSensitive);
  this->Result = bVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Execute @ 14a1a3ec0

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
FRigVMFunction_StringStartsWith::Execute
          (FRigVMFunction_StringStartsWith *this,FRigVMExecuteContext *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  iVar1 = (this->Start).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->Start).Data.AllocatorInstance.Data;
  }
  bVar2 = ::FString::StartsWith(&this->Name,pwVar3,iVar4,CaseSensitive);
  this->Result = bVar2;
  return;
}

// RigVMExecute @ 14a1d3c90

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
FRigVMFunction_StringStartsWith::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMMemoryHandle *pFVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  FString *this;
  uchar *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  iVar7 = param_2->ArrayNum;
  if ((iVar7 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
    this = (FString *)pFVar1->Ptr;
  }
  else {
    this = (FString *)
           FRigVMPropertyPath::GetData_Internal(pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property);
  }
  if ((iVar7 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = param_2->DataPtr;
  if (pFVar1[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar5 = pFVar1[1].Ptr;
  }
  else {
    puVar5 = FRigVMPropertyPath::GetData_Internal
                       (pFVar1[1].PropertyPath,pFVar1[1].Ptr,pFVar1[1].Property);
  }
  if ((iVar7 < 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar2 = param_2->DataPtr[2].Ptr;
  FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(param_1);
  iVar7 = *(int *)(puVar5 + 8) + -1;
  if (*(int *)(puVar5 + 8) == 0) {
    iVar7 = 0;
    pwVar6 = L"";
  }
  else {
    pwVar6 = *(wchar_t **)puVar5;
  }
  bVar4 = ::FString::StartsWith(this,pwVar6,iVar7,CaseSensitive);
  *puVar2 = bVar4;
  return;
}

// StaticExecute @ 14a1e76b0

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
FRigVMFunction_StringStartsWith::StaticExecute
          (FRigVMExecuteContext *param_1,FString *param_2,FString *param_3,bool *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_3->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  bVar2 = ::FString::StartsWith(param_2,pwVar4,iVar3,CaseSensitive);
  *param_4 = bVar2;
  return;
}

