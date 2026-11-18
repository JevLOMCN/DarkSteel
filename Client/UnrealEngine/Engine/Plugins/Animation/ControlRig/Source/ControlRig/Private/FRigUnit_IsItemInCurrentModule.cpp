// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f7ac0

UScriptStruct * __cdecl FRigUnit_IsItemInCurrentModule::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentModule,(UObject *)pUVar1,
                         L"RigUnit_IsItemInCurrentModule");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_IsItemInCurrentModule_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_IsItemInCurrentModule.OuterSingleton;
}

// Execute @ 14a52a4f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_IsItemInCurrentModule::Execute
          (FRigUnit_IsItemInCurrentModule *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Item,&this->Result);
  return;
}

// Execute @ 14a52a510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_IsItemInCurrentModule::Execute(FRigUnit_IsItemInCurrentModule *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Item,&this->Result);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530ee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_IsItemInCurrentModule::GetExecuteContextStruct(FRigUnit_IsItemInCurrentModule *this)

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

// RigVMExecute @ 14a549a20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_IsItemInCurrentModule::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  bool *pbVar3;
  code *pcVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  FControlRigExecuteContext *pFVar7;
  
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
    pFVar6 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
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
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar6,pbVar3);
  return;
}

// StaticExecute @ 14a582910

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_IsItemInCurrentModule::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool *param_3)

{
  ForAnyElementType _Src;
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FRigElementKey local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if ((param_1->RigModulePrefix).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->RigModulePrefix).Data.AllocatorInstance.Data;
  }
  ::FString::operator=(&local_28,pwVar3);
  if (1 < local_28.Data.ArrayNum) {
    iVar1 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    if (iVar1 + -1 < iVar1) {
      iVar1 = iVar1 + -1;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    ::FString::RemoveAt(&local_28,iVar2,1,Default);
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::Reset(&local_38,0);
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    local_48.Type = param_2->Type;
    local_48._1_3_ = *(undefined3 *)&param_2->field_0x1;
    local_48.Name.ComparisonIndex.Value = (param_2->Name).ComparisonIndex.Value;
    local_48.Name.Number = (param_2->Name).Number;
    URigHierarchy::GetModuleName(param_1->Hierarchy,&local_18,&local_48);
    _Src.Data = local_18.Data.AllocatorInstance.Data;
    iVar1 = local_18.Data.ArrayNum;
    if (1 < iVar1) {
      local_38.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_38.Data.ArrayMax == 0)) {
        local_38.Data._8_8_ = local_18.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_38.Data.ArrayMax,(ForAnyElementType *)&local_38,iVar1,
                   &local_38.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar1 * 2);
        }
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  *param_3 = false;
  if ((1 < local_28.Data.ArrayNum) && (1 < local_38.Data.ArrayNum)) {
    if (local_38.Data.ArrayNum == local_28.Data.ArrayNum) {
      iVar1 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                         (wchar_t *)local_28.Data.AllocatorInstance.Data);
      bVar4 = iVar1 == 0;
    }
    else {
      bVar4 = local_28.Data.ArrayNum + local_38.Data.ArrayNum == 1;
    }
    *param_3 = bVar4;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

