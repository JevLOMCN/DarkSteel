// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4f9600

UScriptStruct * __cdecl FRigUnit_HierarchySetParentWeights::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetParentWeights.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetParentWeights.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights,
                         (UObject *)pUVar1,L"RigUnit_HierarchySetParentWeights");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchySetParentWeights_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetParentWeights.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchySetParentWeights.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f96e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchySetParentWeights::GetExecuteContextStruct
          (FRigUnit_HierarchySetParentWeights *this)

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

// Execute @ 14a4f98f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchySetParentWeights::Execute(FRigUnit_HierarchySetParentWeights *this)

{
  code *pcVar1;
  undefined8 uVar2;
  URigHierarchy *this_00;
  bool bVar3;
  int iVar4;
  int iVar5;
  FRigBaseElement *pFVar6;
  undefined1 auStack_2b8 [32];
  TArrayView<FRigElementWeight_const_,int> local_288;
  longlong local_278;
  longlong local_270;
  undefined1 local_268 [356];
  int local_104;
  URigHierarchy *local_a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
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
  local_288.DataPtr = (FRigElementWeight *)(this->Weights).AllocatorInstance.Data;
  iVar4 = (this->Weights).ArrayNum;
  if (iVar4 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = local_a0;
  local_288.ArrayNum = iVar4;
  if ((local_a0 != (URigHierarchy *)0x0) && ((local_a0->Elements).ArrayNum < local_104)) {
    iVar4 = URigHierarchy::GetIndex(local_a0,&this->Child,true);
    pFVar6 = URigHierarchy::Get(this_00,iVar4);
    iVar4 = local_288.ArrayNum;
    if (pFVar6 != (FRigBaseElement *)0x0) {
      iVar5 = URigHierarchy::GetNumberOfParents(local_a0,pFVar6);
      if (iVar4 == iVar5) {
        URigHierarchy::SetParentWeightArray(local_a0,pFVar6,&local_288,false,true);
        uVar2 = local_268._8_8_;
        FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName);
        if (uVar2 != local_278) {
          FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName);
          if (local_268._8_8_ != local_270) goto LAB_14a4f9a6c;
        }
        URigHierarchy::SetParentWeightArray(local_a0,pFVar6,&local_288,true,true);
      }
    }
  }
LAB_14a4f9a6c:
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52a060

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchySetParentWeights::Execute
          (FRigUnit_HierarchySetParentWeights *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementWeight_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementWeight *)(this->Weights).AllocatorInstance.Data;
  iVar1 = (this->Weights).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  StaticExecute(param_1,&this->Child,&local_18);
  return;
}

// RigVMExecute @ 14a548fe0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchySetParentWeights::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRigElementKey *pFVar5;
  uchar *puVar6;
  FControlRigExecuteContext *pFVar7;
  TArrayView<FRigElementWeight_const_,int> local_18;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar5 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar5 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar6 = pFVar2[1].Ptr;
  }
  else {
    puVar6 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  local_18.DataPtr = *(FRigElementWeight **)puVar6;
  iVar1 = *(int *)(puVar6 + 8);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar7 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar7,pFVar5,&local_18);
  return;
}

// StaticExecute @ 14a5823f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchySetParentWeights::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          TArrayView<FRigElementWeight_const_,int> *param_3)

{
  URigHierarchy *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  FRigBaseElement *pFVar4;
  
  this = param_1->Hierarchy;
  if ((this != (URigHierarchy *)0x0) &&
     ((this->Elements).ArrayNum < (param_1->UnitContext).HierarchySettings.ProceduralElementLimit))
  {
    iVar2 = URigHierarchy::GetIndex(this,param_2,true);
    pFVar4 = URigHierarchy::Get(this,iVar2);
    if ((pFVar4 != (FRigBaseElement *)0x0) &&
       (iVar2 = param_3->ArrayNum,
       iVar3 = URigHierarchy::GetNumberOfParents(param_1->Hierarchy,pFVar4), iVar2 == iVar3)) {
      URigHierarchy::SetParentWeightArray(param_1->Hierarchy,pFVar4,param_3,false,true);
      bVar1 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1);
      if (bVar1) {
        URigHierarchy::SetParentWeightArray(param_1->Hierarchy,pFVar4,param_3,true,true);
      }
    }
  }
  return;
}

