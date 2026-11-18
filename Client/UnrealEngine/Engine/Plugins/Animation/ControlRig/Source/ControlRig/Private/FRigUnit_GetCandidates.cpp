// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a47b060

UScriptStruct * __cdecl FRigUnit_GetCandidates::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_GetCandidates.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_GetCandidates.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetCandidates,(UObject *)pUVar1,
                         L"RigUnit_GetCandidates");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_GetCandidates_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_GetCandidates.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_GetCandidates.OuterSingleton;
}

// GetExecuteContextStruct @ 14a47b150

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_GetCandidates::GetExecuteContextStruct(FRigUnit_GetCandidates *this)

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

// Execute @ 14a47b900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_GetCandidates::Execute(FRigUnit_GetCandidates *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Connector,&this->Candidates);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a527e70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_GetCandidates::Execute(FRigUnit_GetCandidates *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->Connector,&this->Candidates);
  return;
}

// RigVMExecute @ 14a5404e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetCandidates::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigElementKey *pFVar2;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FControlRigExecuteContext *pFVar6;
  
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
  pFVar2 = (FRigElementKey *)param_2->DataPtr->Ptr;
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
  pTVar3 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[1].Ptr;
  pFVar6 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar6,pFVar2,pTVar3);
  return;
}

// StaticExecute @ 14a575fe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_GetCandidates::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined3 uVar5;
  FNameEntryId FVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_res20;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar2 = *(longlong *)&param_1->field_0x8;
  FLazyName::Resolve(&FRigUnit_ConnectorExecution::EventName);
  if (lVar2 == local_res20) {
    pFVar9 = (param_1->UnitContext).ConnectionResolve.Matches.AllocatorInstance.Data;
    iVar1 = (param_1->UnitContext).ConnectionResolve.Matches.ArrayNum;
    pFVar10 = pFVar9 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((param_1->UnitContext).ConnectionResolve.Matches.ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRigElementResolveResult_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar9 == pFVar10) break;
      local_30 = *(undefined4 *)(pFVar9 + 8);
      pFVar3 = (param_3->AllocatorInstance).Data;
      local_38 = *(undefined8 *)pFVar9;
      if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
         ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)param_3->ArrayMax * 0xc)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = param_3->ArrayNum;
      if (iVar8 == param_3->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
        param_3->ArrayNum = iVar8;
      }
      pFVar9 = pFVar9 + 0x20;
      param_3->ArrayNum = iVar8 + 1;
      pFVar3 = (param_3->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0xc) = local_38;
      *(undefined4 *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = local_30;
    }
    uVar5 = *(undefined3 *)&(param_1->UnitContext).ConnectionResolve.Connector.field_0x1;
    FVar6.Value = (param_1->UnitContext).ConnectionResolve.Connector.Name.ComparisonIndex.Value;
    param_2->Type = (param_1->UnitContext).ConnectionResolve.Connector.Type;
    *(undefined3 *)&param_2->field_0x1 = uVar5;
    (param_2->Name).ComparisonIndex = (FNameEntryId)FVar6.Value;
    (param_2->Name).Number = (param_1->UnitContext).ConnectionResolve.Connector.Name.Number;
  }
  return;
}

