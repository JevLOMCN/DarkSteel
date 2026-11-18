// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4ec140

UScriptStruct * __cdecl FRigUnit_AddAvailableSpaces::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_AddAvailableSpaces.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_AddAvailableSpaces.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AddAvailableSpaces,(UObject *)pUVar1,
                         L"RigUnit_AddAvailableSpaces");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_AddAvailableSpaces_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_AddAvailableSpaces.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_AddAvailableSpaces.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4ec1c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_AddAvailableSpaces::GetExecuteContextStruct(FRigUnit_AddAvailableSpaces *this)

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

// Execute @ 14a4ec480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_AddAvailableSpaces::Execute(FRigUnit_AddAvailableSpaces *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigElementKeyWithLabel_const_,int> local_278;
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
  local_278.DataPtr = (FRigElementKeyWithLabel *)(this->Spaces).AllocatorInstance.Data;
  iVar1 = (this->Spaces).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->Control,&local_278);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_AddAvailableSpaces @ 14a50b1f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_AddAvailableSpaces * __thiscall
FRigUnit_AddAvailableSpaces::FRigUnit_AddAvailableSpaces(FRigUnit_AddAvailableSpaces *this)

{
  TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  uint local_38;
  
  pTVar1 = &this->Spaces;
  local_38 = CONCAT31(local_38._1_3_,4);
  piVar2 = &(this->Spaces).ArrayMax;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_AddAvailableSpaces__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  uVar4 = (ulonglong)local_38;
  (this->Control).Type = (char)uVar4;
  *(int3 *)&(this->Control).field_0x1 = (int3)(uVar4 >> 8);
  (this->Control).Name.ComparisonIndex = (FNameEntryId)(int)(uVar4 >> 0x20);
  (this->Control).Name.Number = 0;
  (this->Spaces).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,1,*piVar2,&pTVar1->AllocatorInstance,1,piVar2);
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(ulonglong *)pFVar3 = (ulonglong)CONCAT41((uint)local_38._1_3_,4);
  *(ulonglong *)(pFVar3 + 8) = 0;
  *(undefined4 *)(pFVar3 + 0x10) = 0;
  return this;
}

// Execute @ 14a5241b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_AddAvailableSpaces::Execute
          (FRigUnit_AddAvailableSpaces *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKeyWithLabel_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKeyWithLabel *)(this->Spaces).AllocatorInstance.Data;
  iVar1 = (this->Spaces).ArrayNum;
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
  StaticExecute(param_1,&this->Control,&local_18);
  return;
}

// RigVMExecute @ 14a5340f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AddAvailableSpaces::RigVMExecute
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
  TArrayView<FRigElementKeyWithLabel_const_,int> local_18;
  
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
  local_18.DataPtr = *(FRigElementKeyWithLabel **)puVar6;
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

// StaticExecute @ 14a55dae0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_AddAvailableSpaces::StaticExecute
          (FControlRigExecuteContext *param_1,FRigElementKey *param_2,
          TArrayView<FRigElementKeyWithLabel_const_,int> *param_3)

{
  FRigElementKeyWithLabel *pFVar1;
  URigHierarchy *pUVar2;
  FRigElementKeyWithLabel *pFVar3;
  bool bVar4;
  int iVar5;
  FRigControlElement *pFVar6;
  URigHierarchyController *this;
  FRigTransformElement *pFVar7;
  
  if (((param_1->Hierarchy != (URigHierarchy *)0x0) &&
      (bVar4 = FControlRigExecuteContext::IsRunningAConstructionEvent(param_1), bVar4)) &&
     (pUVar2 = param_1->Hierarchy,
     (pUVar2->Elements).ArrayNum < (param_1->UnitContext).HierarchySettings.ProceduralElementLimit))
  {
    iVar5 = URigHierarchy::GetIndex(pUVar2,param_2,true);
    pFVar6 = URigHierarchy::Get<FRigControlElement>(pUVar2,iVar5);
    if (pFVar6 != (FRigControlElement *)0x0) {
      pUVar2 = param_1->Hierarchy;
      bVar4 = pUVar2->bIsControllerAvailable;
      pUVar2->bIsControllerAvailable = true;
      this = URigHierarchy::GetController(param_1->Hierarchy,true);
      if (this != (URigHierarchyController *)0x0) {
        pFVar3 = param_3->DataPtr;
        pFVar1 = pFVar3 + param_3->ArrayNum;
        for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
          pFVar7 = URigHierarchy::Find<FRigTransformElement>(param_1->Hierarchy,&pFVar3->Key);
          if (pFVar7 != (FRigTransformElement *)0x0) {
            URigHierarchyController::AddAvailableSpace(this,pFVar6,pFVar7,&pFVar3->Label);
          }
        }
      }
      pUVar2->bIsControllerAvailable = bVar4;
    }
  }
  return;
}

