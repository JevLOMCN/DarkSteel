// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4a1430

UScriptStruct * __cdecl FRigUnit_SetControlDrivenList::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetControlDrivenList.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetControlDrivenList.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList,(UObject *)pUVar1,
                         L"RigUnit_SetControlDrivenList");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetControlDrivenList_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetControlDrivenList.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetControlDrivenList.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4a14d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SetControlDrivenList::GetExecuteContextStruct(FRigUnit_SetControlDrivenList *this)

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

// Execute @ 14a4a1690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetControlDrivenList::Execute(FRigUnit_SetControlDrivenList *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigElementKey_const_,int> local_278;
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
  local_278.DataPtr = (FRigElementKey *)(this->Driven).AllocatorInstance.Data;
  iVar1 = (this->Driven).ArrayNum;
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
  local_278.ArrayNum = iVar1;
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,&local_278,
                &this->CachedControlIndex);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// Execute @ 14a52c8c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetControlDrivenList::Execute
          (FRigUnit_SetControlDrivenList *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Driven).AllocatorInstance.Data;
  iVar1 = (this->Driven).ArrayNum;
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
  StaticExecute(param_1,&this->Control,&local_18,&this->CachedControlIndex);
  return;
}

// RigVMExecute @ 14a550ef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlDrivenList::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  FName *pFVar5;
  uchar *puVar6;
  FRigVMSlice *pFVar7;
  FCachedRigElement *pFVar8;
  FControlRigExecuteContext *pFVar9;
  TArrayView<FRigElementKey_const_,int> local_18;
  
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
    pFVar5 = (FName *)pFVar2->Ptr;
  }
  else {
    pFVar5 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property);
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
  if (iVar1 < 3) {
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
  pFVar7 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pFVar8 = (FCachedRigElement *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 2,false,pFVar7->Offset + pFVar7->Index);
  local_18.DataPtr = *(FRigElementKey **)puVar6;
  local_18.ArrayNum = *(int *)(puVar6 + 8);
  if (local_18.ArrayNum < 0) {
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
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar5,&local_18,pFVar8);
  return;
}

// StaticExecute @ 14a590ce0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetControlDrivenList::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,
          TArrayView<FRigElementKey_const_,int> *param_3,FCachedRigElement *param_4)

{
  int *piVar1;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  URigHierarchy *this;
  FRigElementKey *_Src;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  FRigControlElement *pFVar10;
  undefined1 local_18 [8];
  uint uStack_10;
  undefined4 uStack_c;
  
  this = param_1->Hierarchy;
  if (this != (URigHierarchy *)0x0) {
    local_18._4_4_ = (*param_2).ComparisonIndex;
    uStack_10 = (*param_2).Number;
    local_18[0] = Control;
    bVar8 = FCachedRigElement::UpdateCache(param_4,(FRigElementKey *)local_18,this);
    if (bVar8) {
      uVar9 = 0xffffffff;
      if (param_4->Index != 0xffff) {
        uVar9 = (uint)param_4->Index;
      }
      pFVar10 = URigHierarchy::GetChecked<FRigControlElement>(this,uVar9);
      pTVar2 = &(pFVar10->Settings).DrivenControls;
      iVar3 = (pFVar10->Settings).DrivenControls.ArrayNum;
      if ((iVar3 != param_3->ArrayNum) ||
         (bVar8 = CompareItems<FRigElementKey,int>
                            (param_3->DataPtr,(FRigElementKey *)(pTVar2->AllocatorInstance).Data,
                             iVar3), !bVar8)) {
        iVar3 = (pFVar10->Settings).PreviouslyDrivenControls.ArrayNum;
        iVar4 = (pFVar10->Settings).PreviouslyDrivenControls.ArrayMax;
        piVar1 = &(pFVar10->Settings).DrivenControls.ArrayMax;
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        iVar6 = (pFVar10->Settings).DrivenControls.ArrayNum;
        iVar7 = (pFVar10->Settings).DrivenControls.ArrayMax;
        (pTVar2->AllocatorInstance).Data =
             (pFVar10->Settings).PreviouslyDrivenControls.AllocatorInstance.Data;
        (pFVar10->Settings).DrivenControls.ArrayNum = iVar3;
        (pFVar10->Settings).DrivenControls.ArrayMax = iVar4;
        (pFVar10->Settings).PreviouslyDrivenControls.AllocatorInstance.Data = pFVar5;
        (pFVar10->Settings).PreviouslyDrivenControls.ArrayNum = iVar6;
        (pFVar10->Settings).PreviouslyDrivenControls.ArrayMax = iVar7;
        iVar3 = param_3->ArrayNum;
        _Src = param_3->DataPtr;
        iVar4 = *piVar1;
        (pFVar10->Settings).DrivenControls.ArrayNum = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0xc);
          }
        }
        local_18._0_4_ = SUB84(pFVar10,0);
        local_18._4_4_ = (undefined4)((ulonglong)pFVar10 >> 0x20);
        uStack_10 = 0;
        uStack_c = 0;
        URigHierarchy::Notify(this,ControlDrivenListChanged,(FRigNotificationSubject *)local_18);
      }
    }
  }
  return;
}

