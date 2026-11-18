// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47cc70

UScriptStruct * __cdecl FRigUnit_SetDefaultMatch::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetDefaultMatch.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetDefaultMatch.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch,(UObject *)pUVar1,
                         L"RigUnit_SetDefaultMatch");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetDefaultMatch_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetDefaultMatch.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetDefaultMatch.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47ccf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetDefaultMatch::GetExecuteContextStruct(FRigUnit_SetDefaultMatch *this)

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

// Execute @ 14a47cf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetDefaultMatch::Execute(FRigUnit_SetDefaultMatch *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Default);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52cbb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetDefaultMatch::Execute(FRigUnit_SetDefaultMatch *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Default);
  return;
}

// RigVMExecute @ 14a552470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetDefaultMatch::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FRigVMMemoryHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRigElementKey *pFVar4;
  FControlRigExecuteContext *pFVar5;
  
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
  pFVar1 = param_2->DataPtr;
  if (pFVar1->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar4 = (FRigElementKey *)pFVar1->Ptr;
  }
  else {
    pFVar4 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar1->PropertyPath,pFVar1->Ptr,pFVar1->Property)
    ;
  }
  pFVar5 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar5,pFVar4);
  return;
}

// StaticExecute @ 14a592650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetDefaultMatch::StaticExecute(FControlRigExecuteContext *param_1,FRigElementKey *param_2)

{
  FModularRigResolveResult *this;
  longlong lVar1;
  FRigElementResolveResult *this_00;
  FRigElementResolveResult *this_01;
  FText *pFVar2;
  longlong local_res8;
  FText local_18;
  
  lVar1 = *(longlong *)&param_1->field_0x8;
  FLazyName::Resolve(&FRigUnit_ConnectorExecution::EventName);
  if (lVar1 == local_res8) {
    this = &(param_1->UnitContext).ConnectionResolve;
    this_00 = FModularRigResolveResult::FindMatch(this,param_2);
    if (this_00 != (FRigElementResolveResult *)0x0) {
      this_01 = FModularRigResolveResult::GetDefaultMatch(this);
      if (this_01 != (FRigElementResolveResult *)0x0) {
        pFVar2 = FText::FText(&local_18);
        FRigElementResolveResult::SetPossibleTarget(this_01,pFVar2);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
      }
      pFVar2 = FText::FText(&local_18);
      FRigElementResolveResult::SetDefaultTarget(this_00,pFVar2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

