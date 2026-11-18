// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// StaticStruct @ 14a4be5a0

UScriptStruct * __cdecl FRigUnit_CollectionNameSearchArray::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearchArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearchArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray,
                         (UObject *)pUVar1,L"RigUnit_CollectionNameSearchArray");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr =
         Z_Construct_UScriptStruct_FRigUnit_CollectionNameSearchArray_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearchArray.
                    OuterSingleton,&local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_CollectionNameSearchArray.OuterSingleton;
}

// Execute @ 14a525900

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionNameSearchArray::Execute
          (FRigUnit_CollectionNameSearchArray *this,FControlRigExecuteContext *param_1)

{
  StaticExecute(param_1,&this->PartialName,this->TypeToSearch,&this->Items);
  return;
}

// Execute @ 14a525920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_CollectionNameSearchArray::Execute(FRigUnit_CollectionNameSearchArray *this)

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
  StaticExecute((FControlRigExecuteContext *)local_268,&this->PartialName,this->TypeToSearch,
                &this->Items);
  FControlRigExecuteContext::~FControlRigExecuteContext((FControlRigExecuteContext *)local_268);
  return;
}

// GetExecuteContextStruct @ 14a530a60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_CollectionNameSearchArray::GetExecuteContextStruct
          (FRigUnit_CollectionNameSearchArray *this)

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

// RigVMExecute @ 14a5389c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionNameSearchArray::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  ERigElementType EVar1;
  int iVar2;
  FRigVMMemoryHandle *pFVar3;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  ERigElementType *pEVar8;
  FControlRigExecuteContext *pFVar9;
  
  iVar2 = param_2->ArrayNum;
  if (iVar2 < 1) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3->PropertyPath == (FRigVMPropertyPath *)0x0) {
    pFVar7 = (FName *)pFVar3->Ptr;
  }
  else {
    pFVar7 = (FName *)FRigVMPropertyPath::GetData_Internal
                                (pFVar3->PropertyPath,pFVar3->Ptr,pFVar3->Property);
  }
  if (iVar2 < 2) {
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
  pFVar3 = param_2->DataPtr;
  if (pFVar3[1].PropertyPath == (FRigVMPropertyPath *)0x0) {
    pEVar8 = pFVar3[1].Ptr;
  }
  else {
    pEVar8 = FRigVMPropertyPath::GetData_Internal
                       (pFVar3[1].PropertyPath,pFVar3[1].Ptr,pFVar3[1].Property);
  }
  EVar1 = *pEVar8;
  if (iVar2 < 3) {
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
  pFVar9 = FRigVMExtendedExecuteContext::GetPublicData<FControlRigExecuteContext>(param_1);
  StaticExecute(pFVar9,pFVar7,EVar1,pTVar4);
  return;
}

// StaticExecute @ 14a5692e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl
FRigUnit_CollectionNameSearchArray::StaticExecute
          (FControlRigExecuteContext *param_1,FName *param_2,ERigElementType param_3,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FName FVar2;
  URigHierarchy *this;
  ForAnyElementType _Src;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UScriptStruct *pUVar6;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  longlong lVar9;
  uint local_res8 [2];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_48;
  FRigElementKeyCollection local_38;
  
  if (param_1->Hierarchy == (URigHierarchy *)0x0) {
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
      return;
    }
  }
  else {
    pUVar6 = StaticStruct();
    FVar2 = *param_2;
    uVar3 = ((uint)((ulonglong)pUVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar6 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = param_1->Hierarchy->TopologyVersion;
    uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar5 = uVar5 + FVar2.Number;
    uVar4 = ((uVar4 >> 0x10 ^ uVar4) + uVar3 * 0x11) - uVar5 ^ uVar5 >> 0xd;
    uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar4 << 8;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xd;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
    uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
    uVar3 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf;
    iVar8 = uVar3 + (uint)param_3 * -8;
    uVar4 = iVar8 * 0x100 ^ 0x9e3779b9 - uVar3;
    uVar5 = ((uint)param_3 * 8 - uVar4) - iVar8 ^ uVar4 >> 0xd;
    this = param_1->Hierarchy;
    uVar3 = (iVar8 - uVar5) - uVar4 ^ uVar5 >> 0xc;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 0x10;
    uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar4 >> 5;
    uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
    uVar3 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf;
    pTVar7 = &URigHierarchy::FindCachedCollection(this,uVar3)->Keys;
    if (pTVar7 == (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar7 = &FRigElementKeyCollection::MakeFromName(&local_38,this,param_2,param_3)->Keys;
      if (&local_48 != pTVar7) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        local_48.AllocatorInstance.Data =
             (((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pTVar7->AllocatorInstance)->
             AllocatorInstance).Data;
        (((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)&pTVar7->AllocatorInstance)->
        AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = pTVar7->ArrayNum;
        local_48.ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (local_38.Keys.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Keys.AllocatorInstance.Data);
      }
      local_res8[0] = uVar3;
      TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
      ::Emplace<unsigned_int_const_&,FRigElementKeyCollection_const_&>
                ((TMapBase<unsigned_int,FRigElementKeyCollection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FRigElementKeyCollection,0>_>
                  *)&param_1->Hierarchy->KeyCollectionCache,local_res8,
                 (FRigElementKeyCollection *)&local_48);
    }
    else {
      TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=(&local_48,pTVar7);
    }
    _Src.Data = local_48.AllocatorInstance.Data;
    if (param_4 != &local_48) {
      iVar8 = local_48.ArrayNum;
      lVar9 = (longlong)local_48.ArrayNum;
      piVar1 = &param_4->ArrayMax;
      param_4->ArrayNum = local_48.ArrayNum;
      if ((local_48.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,local_48.ArrayNum,*piVar1,&param_4->AllocatorInstance,local_48.ArrayNum,
                   piVar1);
        if (iVar8 != 0) {
          memcpy((param_4->AllocatorInstance).Data,_Src.Data,lVar9 * 0xc);
        }
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

