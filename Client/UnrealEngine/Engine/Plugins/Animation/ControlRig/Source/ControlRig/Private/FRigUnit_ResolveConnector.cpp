// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4ece10

UScriptStruct * __cdecl FRigUnit_ResolveConnector::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_ResolveConnector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_ResolveConnector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ResolveConnector,(UObject *)pUVar1,
                         L"RigUnit_ResolveConnector");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_ResolveConnector_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_ResolveConnector.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_ResolveConnector.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ecef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_ResolveConnector::GetExecuteContextStruct(FRigUnit_ResolveConnector *this)

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

// Execute @ 14a4ed830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_ResolveConnector::Execute(FRigUnit_ResolveConnector *this)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStackY_2a8 [32];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_278;
  undefined1 local_268 [592];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
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
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 0;
  local_278.ArrayMax = 0;
  FRigUnit_ResolveArrayConnector::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Connector,this->SkipSocket,&local_278,
             &this->bIsConnected);
  if (local_278.ArrayNum == 0) {
    uVar3 = *(undefined3 *)&(this->Connector).field_0x1;
    FVar4.Value = (this->Connector).Name.ComparisonIndex.Value;
    (this->Result).Type = (this->Connector).Type;
    *(undefined3 *)&(this->Result).field_0x1 = uVar3;
    (this->Result).Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
    uVar6 = (this->Connector).Name.Number;
  }
  else {
    if (local_278.ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = *(undefined8 *)local_278.AllocatorInstance.Data;
    (this->Result).Type = (char)uVar1;
    *(int3 *)&(this->Result).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
    (this->Result).Name.ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
    uVar6 = *(uint *)(local_278.AllocatorInstance.Data + 8);
  }
  (this->Result).Name.Number = uVar6;
  if (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52bf90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_ResolveConnector::Execute
          (FRigUnit_ResolveConnector *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Connector,this->SkipSocket,&this->Result,&this->bIsConnected);
  return;
}

// RigVMExecute @ 14a54f200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ResolveConnector::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigElementKey *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  FRigElementKey *pFVar6;
  uchar *puVar7;
  FRigVMMemoryHandle *pFVar8;
  bool *pbVar9;
  FControlRigExecuteContext *pFVar10;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar6 = (FRigElementKey *)pFVar8->Ptr;
  }
  else {
    pFVar6 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar8->PropertyPath,pFVar8->Ptr,pFVar8->Property)
    ;
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar8 = param_2->DataPtr;
  if (pFVar8[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar7 = pFVar8[1].Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal
                       (pFVar8[1].PropertyPath,pFVar8[1].Ptr,pFVar8[1].Property);
  }
  bVar4 = (bool)*puVar7;
  if (iVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (FRigElementKey *)param_2->DataPtr[2].Ptr;
  pFVar8 = TArrayView<FRigVMMemoryHandle,int>::operator[](param_2,3);
  pbVar9 = (bool *)FRigVMMemoryHandle::GetData_Internal(pFVar8,false,-1);
  pFVar10 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar10,pFVar6,bVar4,pFVar2,pbVar9);
  return;
}

// StaticExecute @ 14a58c060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_ResolveConnector::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,bool param_3,
          FRigElementKey *param_4,bool *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  bool bVar5;
  uint uVar6;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FRigUnit_ResolveArrayConnector::StaticExecute(param_1,param_2,param_3,&local_18,param_5);
  if (local_18.ArrayNum == 0) {
    uVar3 = *(undefined3 *)&param_2->field_0x1;
    FVar4.Value = (param_2->Name).ComparisonIndex.Value;
    param_4->Type = param_2->Type;
    *(undefined3 *)&param_4->field_0x1 = uVar3;
    (param_4->Name).ComparisonIndex = (FNameEntryId)FVar4.Value;
    uVar6 = (param_2->Name).Number;
  }
  else {
    if (local_18.ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar1 = *(undefined8 *)local_18.AllocatorInstance.Data;
    param_4->Type = (char)uVar1;
    *(int3 *)&param_4->field_0x1 = (int3)((ulonglong)uVar1 >> 8);
    (param_4->Name).ComparisonIndex = (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
    uVar6 = *(uint *)(local_18.AllocatorInstance.Data + 8);
  }
  (param_4->Name).Number = uVar6;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

