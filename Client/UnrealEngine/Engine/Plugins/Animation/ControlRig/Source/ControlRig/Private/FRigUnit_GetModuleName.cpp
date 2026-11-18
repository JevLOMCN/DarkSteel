// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f59e0

UScriptStruct * __cdecl FRigUnit_GetModuleName::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetModuleName,(UObject *)pUVar1,
                         L"RigUnit_GetModuleName");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetModuleName_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetModuleName.OuterSingleton;
}

// Execute @ 14a528620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetModuleName::Execute(FRigUnit_GetModuleName *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Module);
  return;
}

// Execute @ 14a528640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FRigUnit_GetModuleName::Execute(FRigUnit_GetModuleName *this)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [472];
  ForAnyElementType local_90;
  int local_88;
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
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_88 != 0) {
    FVar3.Data = local_90.Data;
  }
  ::FString::operator=(&this->Module,(wchar_t *)FVar3.Data);
  iVar1 = (this->Module).Data.ArrayNum;
  if (1 < iVar1) {
    iVar1 = ((iVar1 + -1 <= iVar1 + -2) - 2) + iVar1;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    ::FString::RemoveAt(&this->Module,iVar2,1,Default);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530c60

UScriptStruct * __thiscall
FRigUnit_GetModuleName::GetExecuteContextStruct(FRigUnit_GetModuleName *this)

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

// RigVMExecute @ 14a542cf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetModuleName::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  FControlRigExecuteContext *pFVar4;
  
  if (param_2->ArrayNum < 1) {
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
  pFVar1 = (FString *)param_2->DataPtr->Ptr;
  pFVar4 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar4,pFVar1);
  return;
}

// StaticExecute @ 14a577f40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_GetModuleName::StaticExecute(FControlRigExecuteContext *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  if ((param_1->RigModulePrefix).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->RigModulePrefix).Data.AllocatorInstance.Data;
  }
  ::FString::operator=(param_2,pwVar3);
  iVar1 = (param_2->Data).ArrayNum;
  if (1 < iVar1) {
    iVar1 = ((iVar1 + -1 <= iVar1 + -2) - 2) + iVar1;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    ::FString::RemoveAt(param_2,iVar2,1,Default);
    return;
  }
  return;
}

