// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4f5e10

UScriptStruct * __cdecl FRigUnit_HierarchyGetParentWeights::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentWeights.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentWeights.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights,
                         (UObject *)pUVar1,L"RigUnit_HierarchyGetParentWeights");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentWeights_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentWeights.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_HierarchyGetParentWeights.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4f5e90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_HierarchyGetParentWeights::GetExecuteContextStruct
          (FRigUnit_HierarchyGetParentWeights *this)

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

// Execute @ 14a4f6110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetParentWeights::Execute(FRigUnit_HierarchyGetParentWeights *this)

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
  FRigUnit_HierarchyGetParentWeightsArray::StaticExecute
            ((FControlRigExecuteContext *)local_268,&this->Child,&this->Weights,
             &(this->Parents).Keys);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetUpgradeInfo @ 14a4f6220

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_HierarchyGetParentWeights::GetUpgradeInfo
          (FRigUnit_HierarchyGetParentWeights *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForAnyElementType local_30;
  undefined8 local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  iVar4 = 0;
  if ((TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *)&local_30 != &this->Weights) {
    uVar1 = (this->Weights).ArrayNum;
    pFVar3 = (this->Weights).AllocatorInstance.Data;
    local_28 = (ulonglong)uVar1;
    iVar4 = 0;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar1,0,&local_30,uVar1,(int *)((longlong)&local_28 + 4));
      memcpy(local_30.Data,pFVar3,(longlong)(int)uVar1 * 0xc);
      iVar4 = local_18._4_4_;
    }
  }
  if ((FRigElementKeyCollection *)&local_20 != &this->Parents) {
    iVar2 = (this->Parents).Keys.ArrayNum;
    pFVar3 = (this->Parents).Keys.AllocatorInstance.Data;
    local_18 = CONCAT44(local_18._4_4_,iVar2);
    if ((iVar2 == 0) && (iVar4 == 0)) {
      local_18 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar2,iVar4,&local_20,iVar2,(int *)((longlong)&local_18 + 4));
      if (iVar2 != 0) {
        memcpy(local_20.Data,pFVar3,(longlong)iVar2 * 0xc);
      }
    }
  }
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  return __return_storage_ptr__;
}

// Execute @ 14a5298c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_HierarchyGetParentWeights::Execute
          (FRigUnit_HierarchyGetParentWeights *this,FControlRigExecuteContext *param_1)

{
  FRigUnit_HierarchyGetParentWeightsArray::StaticExecute
            (param_1,&this->Child,&this->Weights,&(this->Parents).Keys);
  return;
}

// RigVMExecute @ 14a547d90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParentWeights::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FRigElementKey *pFVar7;
  FControlRigExecuteContext *pFVar8;
  
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FRigElementKey *)pFVar2->Ptr;
  }
  else {
    pFVar7 = (FRigElementKey *)
             FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
    ;
  }
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
  pTVar3 = (TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[1].Ptr;
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
  pTVar4 = (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)param_2->DataPtr[2].Ptr;
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  FRigUnit_HierarchyGetParentWeightsArray::StaticExecute(pFVar8,pFVar7,pTVar3,pTVar4);
  return;
}

// StaticExecute @ 14a580ac0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_HierarchyGetParentWeights::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *param_3,
          FRigElementKeyCollection *param_4)

{
  URigHierarchy *this;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FRigBaseElement *pFVar3;
  TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> TStack_38;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> TStack_28;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    iVar2 = URigHierarchy::GetIndex(this,param_2,true);
    pFVar3 = URigHierarchy::Get(this,iVar2);
    if (pFVar3 != (FRigBaseElement *)0x0) {
      pTVar4 = URigHierarchy::GetParentWeightArray(param_1->Hierarchy,&TStack_38,pFVar3,false);
      if (param_3 != pTVar4) {
        pFVar1 = (param_3->AllocatorInstance).Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
        (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        param_3->ArrayNum = pTVar4->ArrayNum;
        param_3->ArrayMax = pTVar4->ArrayMax;
        pTVar4->ArrayNum = 0;
        pTVar4->ArrayMax = 0;
      }
      if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_38.AllocatorInstance.Data);
      }
      TStack_38.AllocatorInstance.Data = *(FScriptContainerElement **)&pFVar3->Key;
      TStack_38.ArrayNum = (pFVar3->Key).Name.Number;
      pTVar5 = URigHierarchy::GetParents
                         (param_1->Hierarchy,&TStack_28,(FRigElementKey *)&TStack_38,false);
      if (&param_4->Keys != pTVar5) {
        pFVar1 = (param_4->Keys).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_4->Keys).AllocatorInstance.Data = (pTVar5->AllocatorInstance).Data;
        (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (param_4->Keys).ArrayNum = pTVar5->ArrayNum;
        (param_4->Keys).ArrayMax = pTVar5->ArrayMax;
        pTVar5->ArrayNum = 0;
        pTVar5->ArrayMax = 0;
      }
      if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_28.AllocatorInstance.Data);
      }
    }
  }
  return;
}

