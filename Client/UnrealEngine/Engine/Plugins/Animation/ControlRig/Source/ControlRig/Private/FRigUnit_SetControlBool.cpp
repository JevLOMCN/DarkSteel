// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4bcd30

UScriptStruct * __cdecl FRigUnit_SetControlBool::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlBool,(UObject *)pUVar1,
                         L"RigUnit_SetControlBool");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SetControlBool_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlBool.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlBool.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4bcf40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlBool::GetExecuteContextStruct(FRigUnit_SetControlBool *this)

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

// Execute @ 14a4bd3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlBool::Execute(FRigUnit_SetControlBool *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,&this->BoolValue,
                &this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52c880

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlBool::Execute(FRigUnit_SetControlBool *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Control,&this->BoolValue,&this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a550c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlBool::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  bool *pbVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
  }
  if (iVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pbVar3 = (bool *)param_2->DataPtr[1].Ptr;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar6,pbVar3,pFVar8);
  return;
}

// StaticExecute @ 14a590b50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlBool::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,bool *param_3,
          FCachedRigElement *param_4)

{
  URigHierarchy *this;
  bool bVar1;
  uint uVar2;
  FRigElementKey local_a8;
  FRigControlValue local_98;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_a8.Name = *param_2;
    local_a8.Type = Control;
    bVar1 = FCachedRigElement::UpdateCache(param_4,&local_a8,this);
    if (bVar1) {
      uVar2 = 0xffffffff;
      local_98.FloatStorage.Float02 = 0.0;
      local_98.FloatStorage.Float03 = 0.0;
      local_98.FloatStorage._1_7_ = 0;
      local_98.FloatStorage.Float00._0_1_ = *param_3;
      local_98.FloatStorage.bValid = true;
      local_98.FloatStorage._129_3_ = 0;
      local_98.FloatStorage.Float10 = 0.0;
      local_98.FloatStorage.Float11 = 0.0;
      local_98.FloatStorage.Float12 = 0.0;
      local_98.FloatStorage.Float13 = 0.0;
      local_98.FloatStorage.Float20 = 0.0;
      local_98.FloatStorage.Float21 = 0.0;
      local_98.FloatStorage.Float22 = 0.0;
      local_98.FloatStorage.Float23 = 0.0;
      local_98.FloatStorage.Float30 = 0.0;
      local_98.FloatStorage.Float31 = 0.0;
      local_98.FloatStorage.Float32 = 0.0;
      local_98.FloatStorage.Float33 = 0.0;
      local_98.FloatStorage.Float00_2 = 0.0;
      local_98.FloatStorage.Float01_2 = 0.0;
      local_98.FloatStorage.Float02_2 = 0.0;
      local_98.FloatStorage.Float03_2 = 0.0;
      local_98.FloatStorage.Float10_2 = 0.0;
      local_98.FloatStorage.Float11_2 = 0.0;
      local_98.FloatStorage.Float12_2 = 0.0;
      local_98.FloatStorage.Float13_2 = 0.0;
      local_98.FloatStorage.Float20_2 = 0.0;
      local_98.FloatStorage.Float21_2 = 0.0;
      local_98.FloatStorage.Float22_2 = 0.0;
      local_98.FloatStorage.Float23_2 = 0.0;
      local_98.FloatStorage.Float30_2 = 0.0;
      local_98.FloatStorage.Float31_2 = 0.0;
      local_98.FloatStorage.Float32_2 = 0.0;
      local_98.FloatStorage.Float33_2 = 0.0;
      if (param_4->Index != 0xffff) {
        uVar2 = (uint)param_4->Index;
      }
      URigHierarchy::SetControlValue(this,uVar2,&local_98,Current,false,false);
    }
  }
  return;
}

