// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a4ab830

UScriptStruct * __cdecl FRigUnit_BeginExecution::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_BeginExecution.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_BeginExecution.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BeginExecution,(UObject *)pUVar1,
                         L"RigUnit_BeginExecution");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_BeginExecution_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_BeginExecution.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_BeginExecution.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4abae0

UScriptStruct * __thiscall
FRigUnit_BeginExecution::GetExecuteContextStruct(FRigUnit_BeginExecution *this)

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

// Execute @ 14a4abc90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_BeginExecution::Execute(FRigUnit_BeginExecution *this)

{
  undefined1 auStack_298 [48];
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_298;
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
  FLazyName::Resolve(&EventName);
  local_268._8_8_ = auStack_298._32_8_;
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetEventName @ 14a4abd70

FName __thiscall FRigUnit_BeginExecution::GetEventName(FRigUnit_BeginExecution *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&EventName);
  return in_RDX;
}

// CanOnlyExistOnce @ 14a4abda0

bool __thiscall FRigUnit_BeginExecution::CanOnlyExistOnce(FRigUnit_BeginExecution *this)

{
  return true;
}

// Execute @ 14a524880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_BeginExecution::Execute(FRigUnit_BeginExecution *this,FControlRigExecuteContext *param_1)

{
  undefined8 local_res10;
  
  FLazyName::Resolve(&EventName);
  *(undefined8 *)&param_1->field_0x8 = local_res10;
  return;
}

// RigVMExecute @ 14a535a00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_BeginExecution::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FControlRigExecuteContext *pFVar1;
  undefined8 local_res20;
  
  pFVar1 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FLazyName::Resolve(&EventName);
  *(undefined8 *)&pFVar1->field_0x8 = local_res20;
  return;
}

// StaticExecute @ 14a561c30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl FRigUnit_BeginExecution::StaticExecute(FControlRigExecuteContext *param_1)

{
  undefined8 local_res8;
  
  FLazyName::Resolve(&EventName);
  *(undefined8 *)&param_1->field_0x8 = local_res8;
  return;
}

