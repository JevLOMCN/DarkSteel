// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a4c41d0

UScriptStruct * __cdecl FRigUnit_CollectionItems::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItems.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItems.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionItems,(UObject *)pUVar1,
                         L"RigUnit_CollectionItems");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_CollectionItems_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItems.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionItems.OuterSingleton;
}

// GetExecuteContextStruct @ 14a4c4250

UScriptStruct * __thiscall
FRigUnit_CollectionItems::GetExecuteContextStruct(FRigUnit_CollectionItems *this)

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

// Execute @ 14a4c4a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_CollectionItems::Execute(FRigUnit_CollectionItems *this)

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
  local_278.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  StaticExecute((FControlRigExecuteContext *)local_268,&local_278,this->bAllowDuplicates,
                &this->Collection);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// FRigUnit_CollectionItems @ 14a50d440

FRigUnit_CollectionItems * __thiscall
FRigUnit_CollectionItems::FRigUnit_CollectionItems(FRigUnit_CollectionItems *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint local_18;
  
  local_18 = CONCAT31(local_18._1_3_,1);
  piVar1 = &(this->Items).ArrayMax;
  this->_padding_ = (longlong)&___7FRigUnit_CollectionItems__6B_;
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Collection).Keys.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Collection).Keys.ArrayNum = 0;
  (this->Collection).Keys.ArrayMax = 0;
  *piVar1 = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40c,&(this->Items).AllocatorInstance,piVar1);
  (this->Items).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Items).AllocatorInstance.Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar3 * 0xc) = (ulonglong)local_18;
  *(undefined4 *)(pFVar2 + (longlong)iVar3 * 0xc + 8) = 0;
  this->bAllowDuplicates = false;
  return this;
}

// Execute @ 14a525810

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionItems::Execute(FRigUnit_CollectionItems *this,FControlRigExecuteContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRigElementKey_const_,int> local_18;
  
  local_18.DataPtr = (FRigElementKey *)(this->Items).AllocatorInstance.Data;
  iVar1 = (this->Items).ArrayNum;
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
  StaticExecute(param_1,&local_18,this->bAllowDuplicates,&this->Collection);
  return;
}

// RigVMExecute @ 14a5384e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionItems::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  int iVar1;
  FRigVMMemoryHandle *pFVar2;
  FRigElementKeyCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uchar *puVar7;
  uchar *puVar8;
  FControlRigExecuteContext *pFVar9;
  TArrayView<FRigElementKey_const_,int> local_28;
  
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
    puVar7 = pFVar2->Ptr;
  }
  else {
    puVar7 = FRigVMPropertyPath::GetData_Internal(pFVar2->PropertyPath,pFVar2->Ptr,pFVar2->Property)
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
  pFVar2 = param_2->DataPtr;
  if (pFVar2[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    puVar8 = pFVar2[1].Ptr;
  }
  else {
    puVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar2[1].PropertyPath,pFVar2[1].Ptr,pFVar2[1].Property);
  }
  bVar5 = (bool)*puVar8;
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar1 = *(int *)(puVar7 + 8);
  pFVar3 = (FRigElementKeyCollection *)param_2->DataPtr[2].Ptr;
  local_28.DataPtr = *(FRigElementKey **)puVar7;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28.ArrayNum = iVar1;
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,&local_28,bVar5,pFVar3);
  return;
}

// StaticExecute @ 14a569070

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionItems::StaticExecute
          (FControlRigExecuteContext *param_1,TArrayView<FRigElementKey_const_,int> *param_2,
          bool param_3,FRigElementKeyCollection *param_4)

{
  int *piVar1;
  FRigElementKey *pFVar2;
  FRigElementKey *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName *pFVar6;
  bool bVar7;
  int iVar8;
  FRigElementKey *pFVar9;
  
  piVar1 = &(param_4->Keys).ArrayMax;
  (param_4->Keys).ArrayNum = 0;
  if ((param_4->Keys).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)param_4,0,piVar1);
  }
  pFVar9 = param_2->DataPtr;
  pFVar2 = pFVar9 + param_2->ArrayNum;
  if (pFVar9 != pFVar2) {
    if (param_3) {
      do {
        pFVar3 = (FRigElementKey *)(param_4->Keys).AllocatorInstance.Data;
        if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + *piVar1)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (param_4->Keys).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,(ForAnyElementType *)param_4,piVar1);
        }
        (param_4->Keys).ArrayNum = iVar8 + 1;
        pFVar4 = (param_4->Keys).AllocatorInstance.Data;
        *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0xc) = *(undefined8 *)pFVar9;
        pFVar6 = &pFVar9->Name;
        pFVar9 = pFVar9 + 1;
        *(uint *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = pFVar6->Number;
      } while (pFVar9 != pFVar2);
    }
    else {
      do {
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FRigElementKey_const_&>
                  (&param_4->Keys,pFVar9);
        pFVar9 = pFVar9 + 1;
      } while (pFVar9 != pFVar2);
    }
  }
  return;
}

