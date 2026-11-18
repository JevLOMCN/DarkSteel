// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4bde80

UScriptStruct * __cdecl FRigUnit_SetMultiControlBool::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool,(UObject *)pUVar1,
                         L"RigUnit_SetMultiControlBool");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_SetMultiControlBool_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlBool.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SetMultiControlBool.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4bdf00

UScriptStruct * __thiscall
FRigUnit_SetMultiControlBool::GetExecuteContextStruct(FRigUnit_SetMultiControlBool *this)

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

// Execute @ 14a4be430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SetMultiControlBool::Execute(FRigUnit_SetMultiControlBool *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_298 [32];
  TArrayView<FRigUnit_SetMultiControlBool_Entry_const_,int> local_278;
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
  local_278.DataPtr = (FRigUnit_SetMultiControlBool_Entry *)(this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,&this->CachedControlIndices);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_SetMultiControlBool @ 14a515920

FRigUnit_SetMultiControlBool * __thiscall
FRigUnit_SetMultiControlBool::FRigUnit_SetMultiControlBool(FRigUnit_SetMultiControlBool *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint local_10;
  
  piVar1 = &(this->Entries).ArrayMax;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  this->_padding_ = (longlong)&___7FRigUnit_SetMultiControlBool__6B_;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->CachedControlIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedControlIndices).ArrayNum = 0;
  (this->CachedControlIndices).ArrayMax = 0;
  *piVar1 = 0;
  local_10 = local_10 & 0xffffff00;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&(this->Entries).AllocatorInstance,piVar1);
  (this->Entries).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar3 * 0xc) = 0;
  *(uint *)(pFVar2 + (longlong)iVar3 * 0xc + 8) = local_10;
  return this;
}

// Execute @ 14a52cdf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SetMultiControlBool::Execute
          (FRigUnit_SetMultiControlBool *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigUnit_SetMultiControlBool_Entry_const_,int> local_18;
  
  local_18.DataPtr = (FRigUnit_SetMultiControlBool_Entry *)(this->Entries).AllocatorInstance.Data;
  iVar1 = (this->Entries).ArrayNum;
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
  StaticExecute(param_1,&local_18,&this->CachedControlIndices);
  return;
}

// RigVMExecute @ 14a5530e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_SetMultiControlBool::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar *puVar5;
  FRigVMSlice *pFVar6;
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *pTVar7;
  FControlRigExecuteContext *pFVar8;
  TArrayView<FRigUnit_SetMultiControlBool_Entry_const_,int> local_18;
  
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
    puVar5 = pFVar2->Ptr;
  }
  else {
    puVar5 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  pFVar6 = FRigVMExtendedExecuteContext::GetSlice(param_1);
  pTVar7 = (TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *)
           FRigVMMemoryHandle::GetData_Internal
                     (param_2->DataPtr + 1,false,pFVar6->Offset + pFVar6->Index);
  local_18.DataPtr = *(FRigUnit_SetMultiControlBool_Entry **)puVar5;
  local_18.ArrayNum = *(int *)(puVar5 + 8);
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
  pFVar8 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar8,&local_18,pTVar7);
  return;
}

// StaticExecute @ 14a592d70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FRigUnit_SetMultiControlBool::StaticExecute
          (FControlRigExecuteContext *param_1,
          TArrayView<FRigUnit_SetMultiControlBool_Entry_const_,int> *param_2,
          TArray<FCachedRigElement,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  bool local_res8 [8];
  
  if (param_1->Hierarchy != (URigHierarchy *)0x0) {
    TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::SetNum(param_3,param_2->ArrayNum,Default)
    ;
    iVar7 = param_2->ArrayNum;
    uVar6 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = ~uVar6 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar6 < iVar7) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res8[0] = (&param_2->DataPtr->BoolValue)[lVar8];
        uVar4 = 0;
        if ((int)uVar6 < param_3->ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_3->AllocatorInstance).Data;
        uVar4 = 0;
        if ((int)uVar6 < param_2->ArrayNum) {
          uVar4 = uVar5;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FRigUnit_SetControlBool::StaticExecute
                  (param_1,&param_2->DataPtr[(int)uVar6].Control,local_res8,
                   (FCachedRigElement *)(pFVar1 + (longlong)(int)uVar6 * 0x20));
        iVar7 = param_2->ArrayNum;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0xc;
      } while ((int)uVar6 < iVar7);
    }
  }
  return;
}

