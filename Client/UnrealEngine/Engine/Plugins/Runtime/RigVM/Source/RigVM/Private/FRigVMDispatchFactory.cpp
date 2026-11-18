// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 40

// StaticStruct @ 14a06f410

UScriptStruct * __cdecl FRigVMDispatchFactory::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatchFactory,(UObject *)pUVar1,
                         L"RigVMDispatchFactory");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton;
}

// SupportsRenaming @ 14a06f450

bool __thiscall FRigVMDispatchFactory::SupportsRenaming(FRigVMDispatchFactory *this)

{
  return false;
}

// GetArgumentNameForOperandIndex @ 14a06f460

FName __thiscall
FRigVMDispatchFactory::GetArgumentNameForOperandIndex
          (FRigVMDispatchFactory *this,int param_1,int param_2,FRigVMRegistryHandle *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FName FVar4;
  longlong *plVar5;
  uint uVar6;
  uint in_register_00000014;
  undefined8 in_stack_00000028;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  lVar3 = (**(code **)(this->_padding_ + 0x30))(this,in_stack_00000028);
  if (*(int *)(lVar3 + 8) != (int)param_3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetArgumentInfos(InRegistry).Num() == InTotalOperands",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0xab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x30))(this,in_stack_00000028);
  uVar6 = 0;
  if (param_2 < (int)plVar5[1]) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FName)(*pcVar1)();
      return FVar4;
    }
  }
  *(undefined8 *)FVar4 = *(undefined8 *)(*plVar5 + (longlong)param_2 * 0x50);
  return FVar4;
}

// IsControlFlowBlockSliced @ 14a06f540

bool __thiscall
FRigVMDispatchFactory::IsControlFlowBlockSliced(FRigVMDispatchFactory *this,FName *param_1)

{
  return false;
}

// GetExecuteContextStruct @ 14a06f550

UScriptStruct * __thiscall
FRigVMDispatchFactory::GetExecuteContextStruct(FRigVMDispatchFactory *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// RegisterDependencyTypes_NoLock @ 14a06f590

void __thiscall
FRigVMDispatchFactory::RegisterDependencyTypes_NoLock
          (FRigVMDispatchFactory *this,FRigVMRegistryHandle *param_1)

{
  return;
}

// GetArgumentInfos @ 14a06f5a0

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::GetArgumentInfos(FRigVMDispatchFactory *this,FRigVMRegistryHandle *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigVMDispatchFactory::GetArgumentInfos'::__l2::
             _dynamic_atexit_destructor_for__EmptyArguments__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyArguments;
}

// OnNewArgumentType @ 14a06f610

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
FRigVMDispatchFactory::OnNewArgumentType
          (FRigVMDispatchFactory *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *__return_storage_ptr__,FName *param_1,TRigVMTypeIndex *param_2,
          FRigVMRegistryHandle *param_3)

{
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  return __return_storage_ptr__;
}

// GetPermutationsFromArgumentType @ 14a06f650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMDispatchFactory::GetPermutationsFromArgumentType
          (FRigVMDispatchFactory *this,FName *param_1,TRigVMTypeIndex *param_2,
          TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_3,FRigVMRegistryHandle *param_4)

{
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  FVar6;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *this_00;
  undefined1 auStack_d8 [32];
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  *local_b8;
  ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
  local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FName local_88;
  int local_80;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_80 = param_2->Index;
  local_88 = param_2->Name;
  local_b8 = (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)param_4;
  (**(code **)(this->_padding_ + 0x38))(local_88,&local_78,param_1,&local_88);
  if (local_78.Elements._8_4_ == local_78.Elements._52_4_) {
    bVar3 = false;
  }
  else {
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
             )param_3;
    if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )0x0) {
      FVar6 = FVar1;
    }
    if ((ulonglong)FVar6 <= &local_78) {
      FVar6 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
               )param_3;
      if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )0x0) {
        FVar6 = FVar1;
      }
      if (&local_78 <
          (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           *)((longlong)param_3->ArrayMax * 0x50 + (longlong)FVar6)) {
        local_a0 = (longlong)param_3->ArrayNum;
        local_98 = 0x50;
        local_b0 = (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                    )param_3;
        if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                      )0x0) {
          local_b0 = FVar1;
        }
        local_b8 = &local_78;
        local_a8 = (longlong)param_3->ArrayMax;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == param_3->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>_>
                        (0x850,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar5 + 1;
    FVar1 = (param_3->AllocatorInstance).SecondaryData;
    if (FVar1 != (ForElementType<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>_>
                  )0x0) {
      param_3 = (TArray<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar1;
    }
    this_00 = (TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
               *)((longlong)iVar5 * 0x50 + (longlong)param_3);
    *(undefined8 *)&this_00->Elements = 0;
    *(undefined8 *)&(this_00->Elements).field_0x8 = 0;
    *(undefined8 *)&(this_00->Elements).field_0x20 = 0;
    *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
    *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
    *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
    (this_00->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
    this_00->HashSize = 0;
    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::operator=(this_00,&local_78);
    bVar3 = true;
  }
  local_78.HashSize = 0;
  if (local_78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78.Elements);
  return bVar3;
}

// GetUpgradeInfo @ 14a06f800

FRigVMStructUpgradeInfo * __thiscall
FRigVMDispatchFactory::GetUpgradeInfo
          (FRigVMDispatchFactory *this,FRigVMStructUpgradeInfo *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMDispatchContext *param_2)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsSingleton @ 14a06f820

bool __thiscall FRigVMDispatchFactory::IsSingleton(FRigVMDispatchFactory *this)

{
  return false;
}

// GetDispatchFunctionImpl @ 14a06f830

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatchFactory::GetDispatchFunctionImpl
          (FRigVMDispatchFactory *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  return (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
          *)0x0;
}

// GetDispatchPredicatesImpl @ 14a06f8a0

TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::GetDispatchPredicatesImpl
          (FRigVMDispatchFactory *this,
          TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetExecuteArguments_Impl @ 14a06f8c0

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::GetExecuteArguments_Impl
          (FRigVMDispatchFactory *this,FRigVMDispatchContext *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigVMDispatchFactory::GetExecuteArguments_Impl'::__l2::
             _dynamic_atexit_destructor_for__EmptyArguments__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyArguments;
}

// GetControlFlowBlocks_Impl @ 14a06f950

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::GetControlFlowBlocks_Impl
          (FRigVMDispatchFactory *this,FRigVMDispatchContext *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigVMDispatchFactory::GetControlFlowBlocks_Impl'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// FRigVMDispatchFactory @ 14a0796b0

FRigVMDispatchFactory * __thiscall
FRigVMDispatchFactory::FRigVMDispatchFactory(FRigVMDispatchFactory *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  this->FactoryIndex = -1;
  this->_padding_ = (longlong)&___7FRigVMDispatchFactory__6B_;
  (this->FactoryName).ComparisonIndex = 0;
  (this->FactoryName).Number = 0;
  (this->FactoryNameString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FactoryNameString).Data.ArrayNum = 0;
  (this->FactoryNameString).Data.ArrayMax = 0;
  this->FactoryScriptStruct = (UScriptStruct *)0x0;
  this->CachedTemplate = (FRigVMTemplate *)0x0;
  this->OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
  *(undefined8 *)&this->ArgumentNamesMap = 0;
  *(undefined8 *)&(this->ArgumentNamesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ArgumentNamesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ArgumentNamesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ArgumentNamesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ArgumentNamesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ArgumentNamesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ArgumentNamesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ArgumentNamesMap).field_0x48 = 0;
  (this->CachedArgumentInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedArgumentInfos).ArrayNum = 0;
  (this->CachedArgumentInfos).ArrayMax = 0;
  lpCriticalSection = ::operator_new(0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    this->ArgumentNamesMutex = (FWindowsRecursiveMutex *)lpCriticalSection;
    return this;
  }
  this->ArgumentNamesMutex = (FWindowsRecursiveMutex *)0x0;
  return this;
}

// ~FRigVMDispatchFactory @ 14a07b920

void __thiscall FRigVMDispatchFactory::~FRigVMDispatchFactory(FRigVMDispatchFactory *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->ArgumentNamesMutex;
  this->_padding_ = (longlong)&___7FRigVMDispatchFactory__6B_;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x28);
  }
  DestructItems<FRigVMTemplateArgumentInfo,int>
            ((FRigVMTemplateArgumentInfo *)(this->CachedArgumentInfos).AllocatorInstance.Data,
             (this->CachedArgumentInfos).ArrayNum);
  pFVar1 = (this->CachedArgumentInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ArgumentNamesMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ArgumentNamesMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ArgumentNamesMap);
  pFVar1 = (this->FactoryNameString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// operator() @ 14a07e260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>::operator()
          (void *this,TRigVMTypeIndex *param_1)

{
  int *piVar1;
  TRigVMTypeIndex *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  TRigVMTypeIndex *pTVar9;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar10;
  ulonglong uVar11;
  ForAnyElementType *pFVar12;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_108 [32];
  TRigVMTypeIndex *local_e8;
  TRigVMTypeIndex *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [4];
  uint local_b4;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_b0;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  local_a8;
  TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
  *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (**(char **)this != '\0') {
    local_58 = (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)0x0;
    local_50 = 0;
    local_4c = 1;
    local_e8 = *(TRigVMTypeIndex **)((longlong)this + 0x18);
    (**(code **)(**(longlong **)((longlong)this + 8) + 0x40))
              (*(longlong **)((longlong)this + 8),*(undefined8 *)((longlong)this + 0x10),param_1,
               &local_a8);
    uVar11 = (ulonglong)(int)local_50;
    local_b4 = local_50;
    pTVar10 = &local_a8;
    if (local_58 !=
        (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
         *)0x0) {
      pTVar10 = local_58;
    }
    pTVar13 = pTVar10 + uVar11;
    local_b0 = pTVar13;
    while( true ) {
      if (local_50 != (uint)uVar11) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_b8);
      }
      if (pTVar10 == pTVar13) break;
      plVar16 = *(longlong **)((longlong)this + 0x20);
      uVar15 = 0;
      if (0 < (int)plVar16[1]) {
        lVar18 = 0;
        lVar14 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar15 < (int)plVar16[1]) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_e8 = (TRigVMTypeIndex *)(longlong)(int)uVar15;
            local_e0 = (TRigVMTypeIndex *)(longlong)(int)plVar16[1];
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          pTVar9 = TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                   ::Find((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                           *)pTVar10,*(FName *)(*plVar16 + lVar14));
          if (pTVar9 == (TRigVMTypeIndex *)0x0) {
            **(undefined1 **)this = 0;
            pTVar13 = local_b0;
            break;
          }
          plVar16 = *(longlong **)((longlong)this + 0x28);
          iVar8 = (int)plVar16[1];
          uVar7 = 0;
          if ((int)uVar15 < iVar8) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_e8 = (TRigVMTypeIndex *)(longlong)(int)uVar15;
            local_e0 = (TRigVMTypeIndex *)(longlong)iVar8;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          pFVar12 = (ForAnyElementType *)(*plVar16 + lVar18);
          pTVar2 = (TRigVMTypeIndex *)pFVar12->Data;
          if ((pTVar2 <= pTVar9) &&
             (lVar17 = (longlong)*(int *)((longlong)&pFVar12[1].Data + 4), pTVar9 < pTVar2 + lVar17)
             ) {
            local_d0 = (longlong)*(int *)&pFVar12[1].Data;
            local_c8 = 0xc;
            local_e8 = pTVar9;
            local_e0 = pTVar2;
            local_d8 = lVar17;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          iVar8 = *(int *)&pFVar12[1].Data;
          piVar1 = (int *)((longlong)&pFVar12[1].Data + 4);
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,pFVar12,piVar1);
          }
          uVar15 = uVar15 + 1;
          *(int *)&pFVar12[1].Data = iVar8 + 1;
          lVar14 = lVar14 + 0x50;
          lVar18 = lVar18 + 0x10;
          pFVar3 = pFVar12->Data;
          *(FName *)(pFVar3 + (longlong)iVar8 * 0xc) = pTVar9->Name;
          *(int *)(pFVar3 + (longlong)iVar8 * 0xc + 8) = pTVar9->Index;
          plVar16 = *(longlong **)((longlong)this + 0x20);
          pTVar13 = local_b0;
        } while ((int)uVar15 < (int)plVar16[1]);
      }
      if (**(char **)this == '\0') break;
      uVar11 = (ulonglong)local_b4;
      pTVar10 = pTVar10 + 1;
    }
    pTVar10 = &local_a8;
    if (local_58 !=
        (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
         *)0x0) {
      pTVar10 = local_58;
    }
    DestructItems<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>,int>
              (pTVar10,local_50);
    if (local_58 !=
        (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
         *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return true;
}

// BuildArgumentListFromPrimaryArgument @ 14a080aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument
          (FRigVMDispatchFactory *this,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_1,FName *param_2,
          FRigVMRegistryHandle *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FRigVMTemplateArgumentInfo *pFVar8;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar9;
  code **ppcVar10;
  longlong *plVar11;
  uint uVar12;
  FRigVMTemplateArgumentInfo *this_00;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar16;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  ForAnyElementType local_1d0;
  int local_1c8 [2];
  longlong local_1c0;
  FRigVMRegistryHandle *local_1b8;
  longlong local_1b0;
  TFunction<bool___cdecl(TRigVMTypeIndex_const_&,FRigVMRegistryHandle_const_&)> local_1a8;
  code *local_178 [2];
  code *local_168 [3];
  code **local_150;
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b8 = param_3;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  this_00 = (FRigVMTemplateArgumentInfo *)(param_1->AllocatorInstance).Data;
  uVar13 = param_1->ArrayNum;
  local_1b0 = (longlong)(int)uVar13;
  pFVar8 = this_00 + local_1b0;
  if (this_00 != pFVar8) {
    while (this_00->Name != *param_2) {
      this_00 = this_00 + 1;
      if (this_00 == pFVar8) {
        return __return_storage_ptr__;
      }
    }
    local_1d0.Data = (FScriptContainerElement *)0x0;
    local_1c8[0] = 0;
    local_1c8[1] = 0;
    if ((int)uVar13 < 1) {
      if ((int)uVar13 < 0) goto LAB_14a080f40;
    }
    else {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,uVar13,&local_1d0,local_1c8,local_1c8 + 1);
      memset(local_1d0.Data + (longlong)iVar6 * 0x10,0,(longlong)(int)uVar13 << 4);
    }
    FRigVMTemplateArgumentInfo::GetArgument_NoLock
              (this_00,(FRigVMTemplateArgument *)local_148,local_1b8);
    local_1d8[0] = (code)0x1;
    local_178[0] = (code *)0x0;
    local_150 = FMemory::Malloc(0x38,8);
    *local_150 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::`2'::<lambda_2>,0,1>
                          ::_vftable_;
    local_150[1] = (code *)local_1d8;
    local_150[2] = (code *)this;
    local_150[3] = (code *)param_2;
    local_150[4] = (code *)local_1b8;
    local_150[5] = (code *)param_1;
    local_150[6] = (code *)&local_1d0;
    if (local_150 + 1 != (code **)0x0) {
      local_178[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FRigVMDispatchFactory::BuildArgumentListFromPrimaryArgument'::__l2::<lambda_2>,bool,TRigVMTypeIndex>
                     ::Call;
    }
    FRigVMTemplateArgument::ForEachType
              ((FRigVMTemplateArgument *)local_148,
               (TFunction<bool___cdecl(TRigVMTypeIndex)> *)local_178,local_1b8);
    if (local_178[0] != (code *)0x0) {
      ppcVar10 = local_178 + 2;
      if (local_150 != (code **)0x0) {
        ppcVar10 = local_150;
      }
      (**(code **)(*ppcVar10 + 0x10))();
    }
    if (local_1d8[0] != (code)0x0) {
      if ((int)uVar13 < 0) {
LAB_14a080f40:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (*piVar1 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,0x10,uVar13,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      uVar13 = 0;
      if (0 < local_1b0) {
        lVar15 = 0;
        lVar14 = 0;
        local_1c0 = 0;
        do {
          lVar4 = local_1c0;
          uVar12 = ~uVar13 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar13 < param_1->ArrayNum) {
            uVar7 = uVar12;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          FRigVMTemplateArgumentInfo::GetArgument_NoLock
                    ((FRigVMTemplateArgumentInfo *)((param_1->AllocatorInstance).Data + lVar14),
                     (FRigVMTemplateArgument *)local_c8,local_1b8);
          uVar7 = 0;
          if ((int)uVar13 < local_1c8[0]) {
            uVar7 = uVar12;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar9;
          }
          pTVar16 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(local_1d0.Data + lVar4);
          if (pTVar16->ArrayNum == 0) {
            uVar7 = 0;
            if ((int)uVar13 < param_1->ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
              ;
              return pTVar9;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1050,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            local_1a8._0_8_ = 0;
            local_1a8._40_8_ = 0;
            FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                      ((FRigVMTemplateArgumentInfo *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x50),
                       *(FName *)(pFVar2 + lVar14),local_c8[0xc],
                       (TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *)
                       (local_c8 + 0x28),&local_1a8);
          }
          else {
            uVar7 = 0;
            if ((int)uVar13 < param_1->ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
              ;
              return pTVar9;
            }
            iVar6 = __return_storage_ptr__->ArrayNum;
            pFVar2 = (param_1->AllocatorInstance).Data;
            if (iVar6 == __return_storage_ptr__->ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x1050,&__return_storage_ptr__->AllocatorInstance,
                                 &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar6 + 1;
            FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                      ((FRigVMTemplateArgumentInfo *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x50),
                       *(FName *)(pFVar2 + lVar14),local_c8[0xc],pTVar16);
          }
          if (local_c8._64_8_ != 0) {
            plVar11 = (longlong *)(local_c8 + 0x50);
            if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
              plVar11 = (longlong *)local_c8._104_8_;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
          if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_c8._40_8_);
          }
          if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_c8._16_8_);
          }
          uVar13 = uVar13 + 1;
          local_1c0 = local_1c0 + 0x10;
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + 0x50;
        } while (lVar15 < local_1b0);
      }
    }
    if (local_148._64_8_ != 0) {
      plVar11 = (longlong *)(local_148 + 0x50);
      if ((longlong *)local_148._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_148._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((FScriptContainerElement *)local_148._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._40_8_);
    }
    if ((FScriptContainerElement *)local_148._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._16_8_);
    }
    DestructItems<TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)local_1d0.Data,local_1c8[0]);
    if ((TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)local_1d0.Data !=
        (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_1d0.Data);
    }
  }
  return __return_storage_ptr__;
}

// CopyProperty @ 14a082a70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FRigVMDispatchFactory::CopyProperty
          (FProperty *param_1,uchar *param_2,FProperty *param_3,uchar *param_4)

{
  float fVar1;
  double dVar2;
  EArrayPropertyFlags EVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  UPackage *pUVar11;
  longlong lVar12;
  FProperty *pFVar13;
  FProperty *pFVar14;
  longlong lVar15;
  uchar *puVar16;
  longlong lVar17;
  FProperty *pFVar18;
  wchar_t *pwVar19;
  undefined8 uVar20;
  uint uVar21;
  int iVar22;
  FProperty *pFVar23;
  ForElementType<FSetElementId> FVar24;
  FScriptArrayHelper FStack_f8;
  FString FStack_d8;
  wchar_t *pwStack_c8;
  undefined8 uStack_c0;
  wchar_t *pwStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  FString FStack_a0;
  FString FStack_90;
  FString FStack_80;
  FString FStack_70;
  FName FStack_60;
  FString FStack_58;
  
  pFVar23 = (FProperty *)0x0;
  iVar22 = 0;
  if ((param_1 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d6,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_3 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d7,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d9,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_3);
  if (cVar9 != '\0') goto LAB_14a0d391d;
  uVar5 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if (((uVar5 >> 8 & 1) == 0) || (param_1 == (FProperty *)0x0)) {
    if (((uVar5 >> 0x20 & 1) == 0) || (param_1 == (FProperty *)0x0)) {
      if ((uVar5 & 0x40) == 0) {
        if ((uVar5 >> 0x30 & 1) == 0) {
          if ((uVar5 >> 0x15 & 1) != 0) {
            if ((param_3 == (FProperty *)0x0) ||
               (pFVar13 = param_3, (*(uint *)(param_3->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
              pFVar13 = pFVar23;
            }
            if (pFVar13 != (FProperty *)0x0) {
              EVar3 = (EArrayPropertyFlags)param_1[1]._padding_;
              FStack_f8.ElementAlignment =
                   (**(code **)(*(longlong *)param_1[1]._padding_ + 0x168))();
              FStack_f8.InnerProperty = (FProperty *)param_1[1]._padding_;
              FStack_f8.ElementSize = (FStack_f8.InnerProperty)->ElementSize;
              FStack_f8.field1_0x8 = (FScriptArrayHelper_u_8)param_2;
              FStack_f8.ArrayFlags = EVar3;
              if ((FStack_f8.ElementSize < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              if ((FStack_f8.InnerProperty == (FProperty *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              lVar17 = pFVar13[1]._padding_;
              (**(code **)(*(longlong *)pFVar13[1]._padding_ + 0x168))();
              lStack_a8 = pFVar13[1]._padding_;
              iVar10 = *(int *)(lStack_a8 + 0x34);
              if ((iVar10 < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              if ((lStack_a8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              lVar15 = param_1[1]._padding_;
              uVar5 = *(ulonglong *)(*(longlong *)(lVar15 + 8) + 0x18);
              if ((uVar5 >> 8 & 1) == 0) {
                if ((uVar5 >> 0x20 & 1) == 0) {
                  if (lVar15 != 0) {
                    if ((uVar5 & 0x40) == 0) {
                      if ((((uVar5 >> 0x30 & 1) != 0) &&
                          (lVar17 = pFVar13[1]._padding_, lVar17 != 0)) &&
                         ((*(byte *)(*(longlong *)(lVar17 + 8) + 0x18) & 0x40) != 0)) {
                        if (*(longlong *)(lVar17 + 0x70) == 0) {
                          bVar7 = *(longlong *)(lVar15 + 0x78) == 0;
                        }
                        else {
                          bVar7 = *(longlong *)(lVar17 + 0x70) == *(longlong *)(lVar15 + 0x78);
                        }
LAB_14a0d3348:
                        if (bVar7) {
LAB_14a0d3353:
                          FProperty::CopyCompleteValue(param_1,param_2,param_4);
                          return true;
                        }
                      }
                    }
                    else {
                      lVar17 = pFVar13[1]._padding_;
                      if ((lVar17 != 0) &&
                         ((*(ulonglong *)(*(longlong *)(lVar17 + 8) + 0x18) & 0x1000000000000) != 0)
                         ) {
                        lVar12 = *(longlong *)(lVar17 + 0x78);
                        lVar17 = *(longlong *)(lVar15 + 0x70);
                        if (lVar17 != 0) goto LAB_14a0d3345;
                        bVar7 = lVar12 == 0;
                        goto LAB_14a0d3348;
                      }
                    }
                  }
                }
                else if ((*(uint *)(*(longlong *)(pFVar13[1]._padding_ + 8) + 0x18) >> 8 & 1) != 0)
                {
                  iVar22 = *(int *)(param_4 + 8);
                  if (-1 < iVar22) {
                    iVar4 = (FStack_f8.field1_0x8.FreezableArray)->ArrayNum;
                    if (iVar4 < iVar22) {
                      FScriptArrayHelper::AddValues(&FStack_f8,iVar22 - iVar4);
                    }
                    else if (iVar22 < iVar4) {
                      FScriptArrayHelper::RemoveValues(&FStack_f8,iVar22,iVar4 - iVar22);
                    }
                    pFVar13 = pFVar23;
                    while( true ) {
                      iVar22 = (int)pFVar13;
                      if ((FStack_f8.field1_0x8.FreezableArray)->ArrayNum <= iVar22) break;
                      pFVar18 = pFVar23;
                      if ((FStack_f8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                        puVar16 = (uchar *)(FStack_f8.field1_0x8.FreezableArray)->_padding_;
                        if (((FStack_f8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                           (((ulonglong)puVar16 & 1) != 0)) {
                          puVar16 = &(FStack_f8.field1_0x8.HeapArray)->field_0x0 +
                                    ((longlong)puVar16 >> 0x18);
                        }
                        pFVar18 = (FProperty *)
                                  (puVar16 + (longlong)FStack_f8.ElementSize * (longlong)iVar22);
                      }
                      pFVar14 = pFVar23;
                      if (*(int *)(param_4 + 8) != 0) {
                        puVar16 = *(uchar **)param_4;
                        if (((lVar17 & 1) != 0) && (((ulonglong)puVar16 & 1) != 0)) {
                          puVar16 = param_4 + ((longlong)puVar16 >> 0x18);
                        }
                        pFVar14 = (FProperty *)(puVar16 + (longlong)iVar10 * (longlong)iVar22);
                      }
                      pFVar13 = (FProperty *)(ulonglong)(iVar22 + 1);
                      pFVar18->_padding_ = (longlong)(double)*(float *)&pFVar14->_padding_;
                    }
                    return true;
                  }
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((longlong)iVar22);
                }
              }
              else if ((*(ulonglong *)(*(longlong *)(pFVar13[1]._padding_ + 8) + 0x18) & 0x100000000
                       ) != 0) {
                iVar22 = *(int *)(param_4 + 8);
                if (-1 < iVar22) {
                  iVar4 = (FStack_f8.field1_0x8.FreezableArray)->ArrayNum;
                  if (iVar4 < iVar22) {
                    FScriptArrayHelper::AddValues(&FStack_f8,iVar22 - iVar4);
                  }
                  else if (iVar22 < iVar4) {
                    FScriptArrayHelper::RemoveValues(&FStack_f8,iVar22,iVar4 - iVar22);
                  }
                  pFVar13 = pFVar23;
                  while( true ) {
                    iVar22 = (int)pFVar13;
                    if ((FStack_f8.field1_0x8.FreezableArray)->ArrayNum <= iVar22) break;
                    pFVar18 = pFVar23;
                    if ((FStack_f8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                      puVar16 = (uchar *)(FStack_f8.field1_0x8.FreezableArray)->_padding_;
                      if (((FStack_f8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                         (((ulonglong)puVar16 & 1) != 0)) {
                        puVar16 = &(FStack_f8.field1_0x8.HeapArray)->field_0x0 +
                                  ((longlong)puVar16 >> 0x18);
                      }
                      pFVar18 = (FProperty *)
                                (puVar16 + (longlong)FStack_f8.ElementSize * (longlong)iVar22);
                    }
                    pFVar14 = pFVar23;
                    if (*(int *)(param_4 + 8) != 0) {
                      puVar16 = *(uchar **)param_4;
                      if (((lVar17 & 1) != 0) && (((ulonglong)puVar16 & 1) != 0)) {
                        puVar16 = param_4 + ((longlong)puVar16 >> 0x18);
                      }
                      pFVar14 = (FProperty *)(puVar16 + (longlong)iVar10 * (longlong)iVar22);
                    }
                    pFVar13 = (FProperty *)(ulonglong)(iVar22 + 1);
                    *(float *)&pFVar18->_padding_ = (float)(double)pFVar14->_padding_;
                  }
                  return true;
                }
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((longlong)iVar22);
              }
            }
          }
        }
        else if ((param_3 != (FProperty *)0x0) &&
                ((*(byte *)(param_3->_padding_ + 0x18) & 0x40) != 0)) {
          lVar17 = param_3[1]._padding_;
          lVar12 = param_1[1]._padding_;
          if (lVar17 == 0) {
            bVar7 = lVar12 == 0;
          }
          else {
LAB_14a0d3345:
            bVar7 = lVar17 == lVar12;
          }
          goto LAB_14a0d3348;
        }
      }
      else if ((param_3 != (FProperty *)0x0) &&
              ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) != 0)) {
        if (param_1[1]._padding_ == 0) {
          bVar7 = param_3[1]._padding_ == 0;
        }
        else {
          bVar7 = param_1[1]._padding_ == param_3[1]._padding_;
        }
        if (bVar7) goto LAB_14a0d3353;
      }
    }
    else if (((param_3 != (FProperty *)0x0) &&
             ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) != 0)) &&
            (param_1->ArrayDim == param_3->ArrayDim)) {
      if (param_1->ArrayDim < 1) {
        return true;
      }
      do {
        fVar1 = *(float *)param_4;
        param_4 = (uchar *)((longlong)param_4 + 4);
        uVar21 = (int)pFVar23 + 1;
        pFVar23 = (FProperty *)(ulonglong)uVar21;
        *(double *)param_2 = (double)fVar1;
        param_2 = (uchar *)((longlong)param_2 + 8);
      } while ((int)uVar21 < param_1->ArrayDim);
      return true;
    }
  }
  else if (((param_3 != (FProperty *)0x0) &&
           ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) != 0)) &&
          (param_1->ArrayDim == param_3->ArrayDim)) {
    if (param_1->ArrayDim < 1) {
      return true;
    }
    do {
      dVar2 = *(double *)param_4;
      param_4 = (uchar *)((longlong)param_4 + 8);
      uVar21 = (int)pFVar23 + 1;
      pFVar23 = (FProperty *)(ulonglong)uVar21;
      *(float *)param_2 = (float)dVar2;
      param_2 = (uchar *)((longlong)param_2 + 4);
    } while ((int)uVar21 < param_1->ArrayDim);
    return true;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_3);
  if (cVar9 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`URigVMMemoryStorage::CopyProperty'::__l123::
             _dynamic_atexit_destructor_for__ReportedErrors__);
      _Init_thread_footer(&::_TSS0);
    }
    pwStack_c8 = (wchar_t *)0x0;
    uStack_c0 = 0;
    (**(code **)(param_1->_padding_ + 0x68))(param_1,&FStack_90,&pwStack_c8,0);
    iVar10 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&FStack_90,pwStack_c8,iVar10);
    RigVMTypeUtils::CleanupCPPType(&FStack_90);
    if (pwStack_c8 != (wchar_t *)0x0) {
      FMemory::Free(pwStack_c8);
    }
    if ((param_3 == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMTypeUtils.h"
                           ,0x1ca,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pwStack_b8 = (wchar_t *)0x0;
    uStack_b0 = 0;
    (**(code **)(param_3->_padding_ + 0x68))(param_3,&FStack_a0,&pwStack_b8,0);
    iVar10 = (int)uStack_b0 + -1;
    if ((int)uStack_b0 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&FStack_a0,pwStack_b8,iVar10);
    RigVMTypeUtils::CleanupCPPType(&FStack_a0);
    if (pwStack_b8 != (wchar_t *)0x0) {
      FMemory::Free(pwStack_b8);
    }
    pUVar11 = FField::GetOutermost((FField *)param_1);
    if (pUVar11 != (UPackage *)0x0) {
      FStack_60 = (FName)pUVar11->_padding_;
      ::FName::ToString(&FStack_60,&FStack_58);
    }
    bVar7 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar7) {
      ::FName::ToString((FName *)&param_1->_padding_,&FStack_70);
    }
    else {
      ::FString::FString(&FStack_70,L"None");
    }
    bVar7 = IsThisNotNull(param_3,"FField::GetName");
    if (bVar7) {
      ::FName::ToString((FName *)&param_3->_padding_,&FStack_80);
    }
    else {
      ::FString::FString(&FStack_80,L"None");
    }
    ::FString::PrintfImpl(&FStack_d8,L"Failed to copy %s (%s) to %s (%s) in package %s");
    if (FStack_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data.AllocatorInstance.Data);
    }
    if (FStack_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_70.Data.AllocatorInstance.Data);
    }
    if ((pUVar11 != (UPackage *)0x0) &&
       (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (FStack_d8.Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      iVar22 = FStack_d8.Data.ArrayNum + -1;
      pwVar19 = (wchar_t *)FStack_d8.Data.AllocatorInstance.Data;
    }
    uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar19);
    if (ReportedErrors.Elements._8_4_ != ReportedErrors.Elements._52_4_) {
      FVar24 = (ForElementType<FSetElementId>)0x154c97c08;
      if (ReportedErrors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar24 = ReportedErrors.Hash.SecondaryData;
      }
      iVar22 = *(int *)((longlong)FVar24 + (ulonglong)(ReportedErrors.HashSize - 1U & uVar21) * 4);
      lVar17 = ReportedErrors.Elements._0_8_;
      uVar20 = FStack_d8.Data._8_8_;
      while (iVar22 != -1) {
        lVar15 = (longlong)iVar22;
        iVar10 = *(int *)(lVar17 + 8 + lVar15 * 0x18);
        if (iVar10 == (int)uVar20) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar17 + lVar15 * 0x18),
                                (wchar_t *)FStack_d8.Data.AllocatorInstance.Data);
            bVar7 = iVar10 == 0;
            lVar17 = ReportedErrors.Elements._0_8_;
            uVar20 = FStack_d8.Data._8_8_;
            goto LAB_14a0d3895;
          }
LAB_14a0d38a7:
          if (iVar22 != -1) goto LAB_14a0d38ef;
          break;
        }
        bVar7 = iVar10 + (int)uVar20 == 1;
LAB_14a0d3895:
        if (bVar7) goto LAB_14a0d38a7;
        iVar22 = *(int *)(lVar17 + 0x10 + lVar15 * 0x18);
      }
    }
    if (1 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&ReportedErrors,(FString *)&stack0x00000020,(bool *)&FStack_d8);
LAB_14a0d38ef:
    if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
    }
    if (FStack_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a0.Data.AllocatorInstance.Data);
    }
    if (FStack_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.Data.AllocatorInstance.Data);
    }
    return false;
  }
LAB_14a0d391d:
  if (param_2 != param_4) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,param_2,param_4,param_1->ArrayDim);
    }
    else {
      memcpy(param_2,param_4,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  return true;
}

// CreateDispatchFunction_NoLock @ 14a082d60

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatchFactory::CreateDispatchFunction_NoLock
          (FRigVMDispatchFactory *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  FRigVMRegistry_NoLock *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMRegistry_NoLock *pFVar4;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var5;
  
  pFVar1 = this->OwnerRegistry;
  pFVar4 = FRigVMRegistryHandle::GetRegistry(param_2);
  if (pFVar4 != pFVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x123,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      p_Var5 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar2)();
      return p_Var5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014a082dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var5 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
            *)(**(code **)(this->_padding_ + 0x58))(this,param_1,param_2);
  return p_Var5;
}

// CreateDispatchPredicates_NoLock @ 14a082de0

TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::CreateDispatchPredicates_NoLock
          (FRigVMDispatchFactory *this,
          TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  FRigVMRegistry_NoLock *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMRegistry_NoLock *pFVar4;
  TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *pTVar5;
  
  pFVar1 = this->OwnerRegistry;
  pFVar4 = FRigVMRegistryHandle::GetRegistry(param_2);
  if (pFVar4 != pFVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x129,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  (**(code **)(this->_padding_ + 0x60))(this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateTemplateForArgumentInfos_NoLock @ 14a085050

FRigVMTemplate * __thiscall
FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock
          (FRigVMDispatchFactory *this,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_1,
          FRigVMRegistryHandle *param_2)

{
  int *piVar1;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName FVar4;
  FRigVMTemplateArgumentInfo *pFVar5;
  code *pcVar6;
  ForElementType<TAlignedBytes<16,16>_> FVar7;
  bool bVar8;
  FRigVMRegistry_NoLock *pFVar9;
  FRigVMTemplate *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  ForAnyElementType FStack_d0;
  int local_c8;
  FDestructionSentinel local_c0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pFVar9 = FRigVMRegistryHandle::GetRegistry(param_2);
  if (pFVar9 != this->OwnerRegistry) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x101,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRigVMTemplate *)(*pcVar6)();
      return pFVar10;
    }
  }
  if (this->CachedTemplate != (FRigVMTemplate *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedTemplate == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x102,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FRigVMTemplate *)(*pcVar6)();
      return pFVar10;
    }
  }
  FVar4 = this->FactoryName;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_48);
  local_30 = &local_100;
  puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_100);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock'::`2'::<lambda_1>_>
                ::_vftable_;
    *(FName *)(puVar11 + 3) = FVar4;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_c0);
  iVar3 = local_100.DelegateSize;
  FVar7 = local_100.DelegateAllocator;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  if (local_c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_a8);
  if (local_c8 != 0) {
    if (FStack_d0.Data == (FScriptContainerElement *)0x0) goto LAB_14a0851ed;
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
LAB_14a0851ed:
  FStack_d0.Data = (FScriptContainerElement *)FVar7;
  local_c8 = iVar3;
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_108,(FWriteAccessScope *)&local_90);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  pFVar9 = FRigVMRegistryHandle::operator->(param_2);
  local_res8 = this->FactoryName;
  pFVar10 = (FRigVMTemplate *)
            (**(code **)(pFVar9->_padding_ + 0x188))(pFVar9,&local_res8,param_1,&local_f0);
  this->CachedTemplate = pFVar10;
  UpdateArgumentNameCache_NoLock(this,param_1->ArrayNum,&this->OwnerRegistry->ThisHandle);
  pTVar2 = &this->CachedArgumentInfos;
  if (pTVar2 != param_1) {
    DestructItems<FRigVMTemplateArgumentInfo,int>
              ((FRigVMTemplateArgumentInfo *)(pTVar2->AllocatorInstance).Data,
               (this->CachedArgumentInfos).ArrayNum);
    iVar3 = param_1->ArrayNum;
    piVar1 = &(this->CachedArgumentInfos).ArrayMax;
    pFVar5 = (FRigVMTemplateArgumentInfo *)(param_1->AllocatorInstance).Data;
    (this->CachedArgumentInfos).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FRigVMTemplateArgumentInfo,FRigVMTemplateArgumentInfo,int>
                ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
    }
  }
  pFVar10 = this->CachedTemplate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_78);
  if ((local_c8 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)FStack_d0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)FStack_d0.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_60);
  if ((local_e0 != 0) && (local_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,0x10);
    local_e0 = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  return pFVar10;
}

// GetControlFlowBlocks @ 14a094b00

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::GetControlFlowBlocks
          (FRigVMDispatchFactory *this,FRigVMDispatchContext *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a094b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(**(code **)(this->_padding_ + 0x70))();
  return pTVar1;
}

// GetExecuteArguments_NoLock @ 14a095090

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::GetExecuteArguments_NoLock
          (FRigVMDispatchFactory *this,
          TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FRigVMDispatchContext *param_1,FRigVMRegistryHandle *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FRigVMRegistry_NoLock *pFVar6;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 *puVar8;
  FRigVMRegistry_NoLock *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FName local_28;
  uint local_20;
  
  pFVar9 = this->OwnerRegistry;
  pFVar6 = FRigVMRegistryHandle::GetRegistry(param_2);
  if (pFVar6 != pFVar9) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0xe2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  puVar8 = (undefined8 *)(**(code **)(this->_padding_ + 0x68))(this,param_1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = *(int *)(puVar8 + 1);
  _Src = (void *)*puVar8;
  __return_storage_ptr__->ArrayNum = iVar2;
  if (iVar2 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar2,0,&__return_storage_ptr__->AllocatorInstance,iVar2,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x18);
  }
  iVar2 = __return_storage_ptr__->ArrayNum;
  pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar10 = (FName *)(pFVar11 + 0xc);
  pFVar1 = pFVar11 + (longlong)iVar2 * 0x18;
LAB_14a095162:
  do {
    if (__return_storage_ptr__->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMExecuteArgument,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      return __return_storage_ptr__;
    }
    if (pFVar10[1].ComparisonIndex.Value != 0xffffffff) {
      pFVar9 = FRigVMRegistryHandle::operator->(param_2);
      local_20 = pFVar10[1].ComparisonIndex.Value;
      local_28 = *pFVar10;
      cVar5 = (**(code **)(pFVar9->_padding_ + 0x108))(pFVar9,&local_28);
      if (cVar5 != '\0') {
        pFVar11 = pFVar11 + 0x18;
        *pFVar10 = RigVMTypeUtils::TypeIndex::ExecuteArray.Name;
        pFVar10[1].ComparisonIndex.Value = RigVMTypeUtils::TypeIndex::ExecuteArray.Index;
        pFVar10 = pFVar10 + 3;
        goto LAB_14a095162;
      }
    }
    pFVar11 = pFVar11 + 0x18;
    *pFVar10 = RigVMTypeUtils::TypeIndex::Execute.Name;
    pFVar10[1].ComparisonIndex.Value = RigVMTypeUtils::TypeIndex::Execute.Index;
    pFVar10 = pFVar10 + 3;
  } while( true );
}

// GetFactoryName @ 14a0955a0

FName __thiscall FRigVMDispatchFactory::GetFactoryName(FRigVMDispatchFactory *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->FactoryName;
  return in_RDX;
}

// GetFactoryName @ 14a0955c0

FName __cdecl FRigVMDispatchFactory::GetFactoryName(UScriptStruct *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  UPackage *pUVar5;
  longlong in_RDX;
  ForAnyElementType FVar6;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (in_RDX == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFactoryStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x1c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FName)(*pcVar2)();
      return FVar4;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatchFactory,(UObject *)pUVar5,
                         L"RigVMDispatchFactory");
    if (Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a095636;
  }
  else {
LAB_14a095636:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton)->_padding_
    ;
    if ((*(int *)(in_RDX + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(in_RDX + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FRigVMDispatchFactory.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14a09567c;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InFactoryStruct->IsChildOf(FRigVMDispatchFactory::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                     ,0x1d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FName)(*pcVar2)();
    return FVar4;
  }
LAB_14a09567c:
  local_res8 = *(FName *)(in_RDX + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  ::FString::ConcatCF(&local_28,DispatchPrefix,&local_18);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar6.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetOrCreateDispatchFunction @ 14a0974f0

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatchFactory::GetOrCreateDispatchFunction
          (FRigVMDispatchFactory *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var8;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  FRigVMRegistryHandle::FRigVMRegistryHandle(&local_28,(FRigVMRegistry_NoLock *)pFVar7);
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = pFVar7->WriteLockOwnerThread;
  local_18 = pFVar7;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(*pcVar4)();
    return p_Var8;
  }
  p_Var8 = GetOrCreateDispatchFunction_NoLock(this,param_1,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                  *)(*pcVar4)();
        return p_Var8;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return p_Var8;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        p_Var8 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                  *)(*pcVar4)();
        return p_Var8;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return p_Var8;
}

// GetOrCreateDispatchFunction_NoLock @ 14a0976e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
* __thiscall
FRigVMDispatchFactory::GetOrCreateDispatchFunction_NoLock
          (FRigVMDispatchFactory *this,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FRigVMRegistry_NoLock *pFVar5;
  _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
  *p_Var6;
  longlong lVar7;
  FRigVMRegistry_NoLock *pFVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_108 [32];
  FString local_d8;
  FString local_c8;
  longlong local_b8 [5];
  longlong *plStack_90;
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar5 = FRigVMRegistryHandle::GetRegistry(param_2);
  if (pFVar5 != this->OwnerRegistry) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x116,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      p_Var6 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                *)(*pcVar1)();
      return p_Var6;
    }
  }
  FRigVMTemplate::GetStringFromArgumentTypes(&local_c8,param_1,param_2);
  RigVMStringUtils::JoinStrings
            (&local_d8,&this->FactoryNameString,&local_c8,L"::",(wchar_t *)0x0,(wchar_t *)0x0);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar5 = FRigVMRegistryHandle::operator->(param_2);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar10.Data = local_d8.Data.AllocatorInstance.Data;
  }
  uStack_50 = 0;
  local_68 = (void *)0x0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[4] = 0;
  plStack_90 = (longlong *)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  uStack_60 = 0x8000000000;
  local_58 = 0xffffffff;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  lVar7 = (**(code **)(pFVar5->_padding_ + 0x160))(pFVar5,FVar10.Data,local_b8);
  uStack_40 = uStack_40 & 0xffffffff00000000;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  uVar3 = uStack_60._4_4_;
  local_58 = 0xffffffff;
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  if (0x80 < uVar3) {
    uStack_60 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (local_b8[0] != 0) {
    plVar9 = local_b8 + 2;
    if (plStack_90 != (longlong *)0x0) {
      plVar9 = plStack_90;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (lVar7 == 0) {
    pFVar5 = this->OwnerRegistry;
    pFVar8 = FRigVMRegistryHandle::GetRegistry(param_2);
    if (pFVar8 != pFVar5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                         ,0x123,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        p_Var6 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
                  *)(*pcVar1)();
        return p_Var6;
      }
    }
    p_Var6 = (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)(**(code **)(this->_padding_ + 0x58))(this,param_1,param_2);
  }
  else {
    p_Var6 = *(_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
               **)(lVar7 + 0x28);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return p_Var6;
}

// GetPermutationName @ 14a097b40

FString * __thiscall
FRigVMDispatchFactory::GetPermutationName
          (FRigVMDispatchFactory *this,FString *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  FRigVMRegistry_NoLock *pFVar4;
  code *pcVar5;
  bool bVar6;
  atomic<unsigned_int> aVar7;
  FRigVMRegistry_RWLock *pFVar8;
  FRigVMRegistry_NoLock *pFVar9;
  FString *pFVar10;
  FString local_38;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  pFVar8 = FRigVMRegistry_RWLock::Get();
  FRigVMRegistryHandle::FRigVMRegistryHandle(&local_28,(FRigVMRegistry_NoLock *)pFVar8);
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = pFVar8->WriteLockOwnerThread;
  local_18 = pFVar8;
  aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar7) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar5)();
      return pFVar10;
    }
  }
  pFVar4 = this->OwnerRegistry;
  pFVar9 = FRigVMRegistryHandle::GetRegistry(&local_28);
  if (pFVar9 != pFVar4) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x135,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar5)();
      return pFVar10;
    }
  }
  FRigVMTemplate::GetStringFromArgumentTypes(&local_38,param_1,&local_28);
  RigVMStringUtils::JoinStrings
            (__return_storage_ptr__,&this->FactoryNameString,&local_38,L"::",(wchar_t *)0x0,
             (wchar_t *)0x0);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar5)();
          return pFVar10;
        }
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar7 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar7) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar5)();
          return pFVar10;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return __return_storage_ptr__;
}

// GetPermutationNameImpl @ 14a097d90

FString * __thiscall
FRigVMDispatchFactory::GetPermutationNameImpl
          (FRigVMDispatchFactory *this,FString *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  FString local_18;
  
  FRigVMTemplate::GetStringFromArgumentTypes(&local_18,param_1,param_2);
  RigVMStringUtils::JoinStrings
            (__return_storage_ptr__,&this->FactoryNameString,&local_18,L"::",(wchar_t *)0x0,
             (wchar_t *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPermutationName_NoLock @ 14a097e00

FString * __thiscall
FRigVMDispatchFactory::GetPermutationName_NoLock
          (FRigVMDispatchFactory *this,FString *__return_storage_ptr__,
          TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          *param_1,FRigVMRegistryHandle *param_2)

{
  FRigVMRegistry_NoLock *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRigVMRegistry_NoLock *pFVar4;
  FString *pFVar5;
  FString local_18;
  
  pFVar1 = this->OwnerRegistry;
  pFVar4 = FRigVMRegistryHandle::GetRegistry(param_2);
  if (pFVar4 != pFVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRegistry.GetRegistry() == OwnerRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                       ,0x135,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  FRigVMTemplate::GetStringFromArgumentTypes(&local_18,param_1,param_2);
  RigVMStringUtils::JoinStrings
            (__return_storage_ptr__,&this->FactoryNameString,&local_18,L"::",(wchar_t *)0x0,
             (wchar_t *)0x0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTemplate @ 14a098740

FRigVMTemplate * __thiscall FRigVMDispatchFactory::GetTemplate(FRigVMDispatchFactory *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  atomic<unsigned_int> aVar3;
  code *pcVar4;
  bool bVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  FRigVMTemplate *pFVar8;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  FRigVMRegistryHandle::FRigVMRegistryHandle(&local_28,(FRigVMRegistry_NoLock *)pFVar7);
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x0;
  aVar3 = pFVar7->WriteLockOwnerThread;
  local_18 = pFVar7;
  aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
  if (aVar3 != aVar6) {
    AcquireSRWLockShared((PSRWLOCK)&local_18->Lock);
  }
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if ((local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_4767296351463538103>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                              ,0x249,"DesiredLockType != LockType_Write"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FRigVMTemplate *)(*pcVar4)();
    return pFVar8;
  }
  pFVar8 = GetTemplate_NoLock(this,&local_28);
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if (((int)aVar2 + -1 < 0) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x26a,"CurrentLockCount >= 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRigVMTemplate *)(*pcVar4)();
        return pFVar8;
      }
      aVar3 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar3 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return pFVar8;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if ((aVar2 != (atomic<int>)0x1) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4767296351463538060>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                             ,0x274,"CurrentLockCount == 0"), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FRigVMTemplate *)(*pcVar4)();
        return pFVar8;
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return pFVar8;
}

// GetTemplateNotation @ 14a098910

FName __thiscall FRigVMDispatchFactory::GetTemplateNotation(FRigVMDispatchFactory *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  atomic<unsigned_int> aVar6;
  FRigVMRegistry_RWLock *pFVar7;
  FRigVMTemplate *this_00;
  FName *pFVar8;
  FName FVar9;
  FName in_RDX;
  FRigVMRegistryHandle local_28;
  char local_20;
  FRigVMRegistry_RWLock *local_18;
  atomic<FRigVMRegistry_NoLock::ELockType> local_10;
  
  pFVar7 = FRigVMRegistry_RWLock::Get();
  FRigVMRegistryHandle::FRigVMRegistryHandle(&local_28,(FRigVMRegistry_NoLock *)pFVar7);
  local_20 = '\x01';
  local_10 = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
  local_18 = pFVar7;
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar7->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  local_18->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &local_18->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    local_18->LockType = local_10;
    UNLOCK();
  }
  else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar9 = (FName)(*pcVar3)();
      return FVar9;
    }
  }
  this_00 = GetTemplate_NoLock(this,&local_28);
  if (this_00 == (FRigVMTemplate *)0x0) {
    *(FName *)in_RDX = (FName)0x0;
  }
  else {
    pFVar8 = FRigVMTemplate::GetNotation(this_00);
    *(FName *)in_RDX = *pFVar8;
  }
  if (local_20 != '\0') {
    LOCK();
    paVar1 = &local_18->LockCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      LOCK();
      local_18->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
      UNLOCK();
    }
    if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x0) {
      if ((int)aVar2 + -1 < 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538070>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x26a,"CurrentLockCount >= 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          FVar9 = (FName)(*pcVar3)();
          return FVar9;
        }
      }
      aVar5 = local_18->WriteLockOwnerThread;
      aVar6 = (atomic<unsigned_int>)GetCurrentThreadId();
      if (aVar5 != aVar6) {
        ReleaseSRWLockShared((PSRWLOCK)&local_18->Lock);
        return in_RDX;
      }
    }
    else if (local_10 == (atomic<FRigVMRegistry_NoLock::ELockType>)0x1) {
      if (aVar2 != (atomic<int>)0x1) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4767296351463538060>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                           ,0x274,"CurrentLockCount == 0");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          FVar9 = (FName)(*pcVar3)();
          return FVar9;
        }
      }
      LOCK();
      local_18->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
      UNLOCK();
      ReleaseSRWLockExclusive((PSRWLOCK)&local_18->Lock);
    }
  }
  return in_RDX;
}

// GetTemplateNotation_NoLock @ 14a098b00

FName __thiscall
FRigVMDispatchFactory::GetTemplateNotation_NoLock
          (FRigVMDispatchFactory *this,FRigVMRegistryHandle *param_1)

{
  FRigVMTemplate *this_00;
  FName *pFVar1;
  FRigVMRegistryHandle *in_R8;
  
  this_00 = GetTemplate_NoLock(this,in_R8);
  if (this_00 != (FRigVMTemplate *)0x0) {
    pFVar1 = FRigVMTemplate::GetNotation(this_00);
    param_1->Registry = (FRigVMRegistry_NoLock *)*pFVar1;
    return (FName)param_1;
  }
  param_1->Registry = (FRigVMRegistry_NoLock *)0x0;
  return (FName)param_1;
}

// GetTemplate_NoLock @ 14a098b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FRigVMTemplate * __thiscall
FRigVMDispatchFactory::GetTemplate_NoLock(FRigVMDispatchFactory *this,FRigVMRegistryHandle *param_1)

{
  FName FVar1;
  code *pcVar2;
  longlong lVar3;
  ForElementType<TAlignedBytes<16,16>_> FVar4;
  bool bVar5;
  int iVar6;
  FRigVMRegistry_NoLock *pFVar7;
  FRigVMDispatchFactory *this_00;
  FRigVMTemplate *pFVar8;
  FRigVMRegistry_NoLock *pFVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong *plVar13;
  FRigVMTemplateArgumentInfo *this_01;
  FRigVMTemplateArgumentInfo *pFVar14;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  FDelegateAllocation local_1c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b8;
  ForAnyElementType local_1b0;
  int local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  ForAnyElementType FStack_198;
  int local_190;
  FName local_188;
  FName local_180;
  FDestructionSentinel local_178;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar7 = FRigVMRegistryHandle::operator->(param_1);
  local_188 = this->FactoryName;
  this_00 = (FRigVMDispatchFactory *)(**(code **)(pFVar7->_padding_ + 400))(pFVar7,&local_188);
  if (this_00 != this) {
    pFVar8 = GetTemplate_NoLock(this_00,param_1);
    return pFVar8;
  }
  pFVar7 = this->OwnerRegistry;
  pFVar9 = FRigVMRegistryHandle::GetRegistry(param_1);
  if ((pFVar9 != pFVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                         ,0x1a6,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pFVar8 = (FRigVMTemplate *)(*pcVar2)();
    return pFVar8;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GetTemplateMutex);
  if (this->CachedTemplate == (FRigVMTemplate *)0x0) {
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x30))(this,param_1);
    lVar3 = plVar10[1];
    this_01 = (FRigVMTemplateArgumentInfo *)*plVar10;
    pFVar14 = this_01 + (int)lVar3;
    do {
      if ((int)plVar10[1] != (int)lVar3) {
        `TCheckedPointerIterator<FRigVMTemplateArgumentInfo_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1d8);
      }
      if (this_01 == pFVar14) {
        FVar1 = this->FactoryName;
        local_1b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_1b0.Data = (FScriptContainerElement *)0x0;
        local_1a8 = 0;
        local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_198.Data = (FScriptContainerElement *)0x0;
        local_190 = 0;
        local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1c8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1d0,(FWriteAccessScope *)&local_100);
        local_e8 = &local_1c8;
        puVar11 = UE::Core::Private::DelegateAllocate(0x20,&local_1c8);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6APEAUFRigVMDispatchFactory__AEBUFRigVMRegistryHandle___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &TBaseFunctorDelegateInstance<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy,`FRigVMDispatchFactory::GetTemplate_NoLock'::`2'::<lambda_2>_>
                      ::_vftable_;
          *(FName *)(puVar11 + 3) = FVar1;
        }
        if (local_100.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1d0,(FWriteAccessScope *)&local_178);
        iVar6 = local_1c8.DelegateSize;
        FVar4 = local_1c8.DelegateAllocator;
        local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1c8.DelegateSize = 0;
        if (local_178.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1a0,(FWriteAccessScope *)&local_160);
        if (local_190 == 0) {
LAB_14a098e80:
          if (FStack_198.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_198.Data);
          }
        }
        else if (FStack_198.Data != (FScriptContainerElement *)0x0) {
          (*(code *)**(undefined8 **)FStack_198.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10)
          ;
          local_190 = 0;
          goto LAB_14a098e80;
        }
        FStack_198.Data = (FScriptContainerElement *)FVar4;
        local_190 = iVar6;
        if (local_160.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1d0,(FWriteAccessScope *)&local_148);
        if ((local_1c8.DelegateSize != 0) &&
           (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_1c8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_1c8,0,0,0x10);
          local_1c8.DelegateSize = 0;
        }
        if (local_148.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
        }
        if (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_1c8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
        pFVar7 = FRigVMRegistryHandle::operator->(param_1);
        local_180 = this->FactoryName;
        pFVar8 = (FRigVMTemplate *)
                 (**(code **)(pFVar7->_padding_ + 0x188))(pFVar7,&local_180,plVar10,&local_1b8);
        this->CachedTemplate = pFVar8;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1a0,(FWriteAccessScope *)&local_130);
        if ((local_190 != 0) &&
           ((ForElementType<TAlignedBytes<16,16>_>)FStack_198.Data !=
            (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)FStack_198.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_198,0,0,0x10)
          ;
          local_190 = 0;
        }
        if (local_130.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
        }
        if ((ForElementType<TAlignedBytes<16,16>_>)FStack_198.Data !=
            (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free(FStack_198.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_1b8,(FWriteAccessScope *)&local_118);
        if ((local_1a8 != 0) && (local_1b0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_1b0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b0,0,0,0x10);
          local_1a8 = 0;
        }
        if (local_118.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
        }
        if (local_1b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b8.AccessDetector);
        goto LAB_14a099038;
      }
      FRigVMTemplateArgumentInfo::GetArgument_NoLock
                (this_01,(FRigVMTemplateArgument *)local_c8,param_1);
      iVar6 = FRigVMTemplateArgument::
              IndexOfByPredicate<_FRigVMDispatchFactory::GetTemplate_NoLock_::__l22::<lambda_1>_>
                        ((FRigVMTemplateArgument *)local_c8,(<lambda_1>)param_1,param_1);
      if (iVar6 != -1) goto LAB_14a098ce0;
      if (local_c8._64_8_ != 0) {
        plVar13 = (longlong *)(local_c8 + 0x50);
        if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
          plVar13 = (longlong *)local_c8._104_8_;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._40_8_);
      }
      if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._16_8_);
      }
      this_01 = this_01 + 1;
    } while( true );
  }
  bVar5 = FRigVMTemplate::IsValid(this->CachedTemplate);
  if (bVar5) {
    pFVar8 = this->CachedTemplate;
  }
  else {
    pFVar8 = (FRigVMTemplate *)0x0;
  }
LAB_14a099038:
  LeaveCriticalSection((LPCRITICAL_SECTION)&GetTemplateMutex);
  return pFVar8;
LAB_14a098ce0:
  if (1 < (byte)LogRigVM._0_1_) {
    ::FName::ToString(&this_01->Name,&local_e0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  if (local_c8._64_8_ != 0) {
    plVar10 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._40_8_);
  }
  if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  pFVar8 = (FRigVMTemplate *)0x0;
  goto LAB_14a099038;
}

// SupportsExecuteContextStruct @ 14a0a77d0

bool __thiscall
FRigVMDispatchFactory::SupportsExecuteContextStruct
          (FRigVMDispatchFactory *this,UScriptStruct *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x38) <= (int)param_1->_padding_) &&
       (*(longlong *)(param_1->_padding_ + (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
      return true;
    }
  }
  return false;
}

// UpdateArgumentNameCache @ 14a0a8490

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::UpdateArgumentNameCache
          (FRigVMDispatchFactory *this,int param_1,FRigVMRegistryHandle *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)this->ArgumentNamesMutex;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    pTVar1 = UpdateArgumentNameCache_NoLock(this,param_1,param_2);
    LeaveCriticalSection(lpCriticalSection);
    return pTVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateArgumentNameCache_NoLock @ 14a0a8500

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMDispatchFactory::UpdateArgumentNameCache_NoLock
          (FRigVMDispatchFactory *this,int param_1,FRigVMRegistryHandle *param_2)

{
  FRigVMRegistry_NoLock *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRigVMRegistry_NoLock *pFVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1> *this_00;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  TRawPtrProxy<TArray<FName,TSizedDefaultAllocator<32>_>_> local_res8;
  uint local_res10 [2];
  undefined1 local_res20 [8];
  
  pFVar1 = this->OwnerRegistry;
  local_res10[0] = param_1;
  pFVar6 = FRigVMRegistryHandle::GetRegistry(param_2);
  if ((pFVar6 != pFVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRegistry.GetRegistry() == OwnerRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMDispatchFactory.cpp"
                         ,0xcb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar7;
  }
  this_00 = TMapBase<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>,0>_>
                        *)&this->ArgumentNamesMap,local_res10[0],(int *)local_res10);
  if (this_00->Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = ::operator_new(0x10);
    pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
    local_res8.Object = pTVar11;
    if (pTVar7 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar7->ArrayNum = 0;
      pTVar7->ArrayMax = 0;
      local_res8.Object = pTVar7;
    }
    TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>::
    operator=<TArray<FName,TSizedDefaultAllocator<32>_>_>(this_00,&local_res8);
    if ((this_00->Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
    uVar9 = (ulonglong)local_res10[0];
    pTVar7 = this_00->Object;
    if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    if (pTVar7->ArrayMax < (int)local_res10[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_res10[0],&pTVar7->AllocatorInstance,pTVar7->ArrayNum,&pTVar7->ArrayMax);
      uVar9 = (ulonglong)local_res10[0];
    }
    if (0 < (int)uVar9) {
      do {
        uVar10 = (uint)uVar9;
        if ((this_00->Object == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), uVar10 = local_res10[0], bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        pTVar7 = this_00->Object;
        pFVar8 = (FScriptContainerElement *)
                 (**(code **)(this->_padding_ + 0x10))(this,local_res20,pTVar11,uVar10,param_2);
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + (longlong)pTVar7->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar7;
        }
        iVar5 = pTVar7->ArrayNum;
        if (iVar5 == pTVar7->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
        }
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        pTVar7->ArrayNum = iVar5 + 1;
        uVar10 = (int)pTVar11 + 1;
        pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar10;
        *(undefined8 *)(pFVar2 + (longlong)iVar5 * 8) = *(undefined8 *)pFVar8;
        uVar9 = (ulonglong)local_res10[0];
      } while ((int)uVar10 < (int)local_res10[0]);
    }
  }
  return this_00->Object;
}

// operator= @ 14a192470

FRigVMDispatchFactory * __thiscall
FRigVMDispatchFactory::operator=(FRigVMDispatchFactory *this,FRigVMDispatchFactory *param_1)

{
  int *piVar1;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FRigVMTemplateArgumentInfo *pFVar4;
  
  this->FactoryIndex = param_1->FactoryIndex;
  this->FactoryName = param_1->FactoryName;
  ::FString::operator=(&this->FactoryNameString,&param_1->FactoryNameString);
  this->FactoryScriptStruct = param_1->FactoryScriptStruct;
  this->CachedTemplate = param_1->CachedTemplate;
  this->OwnerRegistry = param_1->OwnerRegistry;
  if (&this->ArgumentNamesMap != &param_1->ArgumentNamesMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ArgumentNamesMap).field_0x38,
               (int *)&(this->ArgumentNamesMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ArgumentNamesMap).field_0x38,
               *(int *)&(param_1->ArgumentNamesMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->ArgumentNamesMap,
                (TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<TArray<FName,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->ArgumentNamesMap);
  }
  pTVar2 = &this->CachedArgumentInfos;
  this->ArgumentNamesMutex = param_1->ArgumentNamesMutex;
  if (pTVar2 != &param_1->CachedArgumentInfos) {
    DestructItems<FRigVMTemplateArgumentInfo,int>
              ((FRigVMTemplateArgumentInfo *)(pTVar2->AllocatorInstance).Data,
               (this->CachedArgumentInfos).ArrayNum);
    iVar3 = (param_1->CachedArgumentInfos).ArrayNum;
    piVar1 = &(this->CachedArgumentInfos).ArrayMax;
    pFVar4 = (FRigVMTemplateArgumentInfo *)(param_1->CachedArgumentInfos).AllocatorInstance.Data;
    (this->CachedArgumentInfos).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FRigVMTemplateArgumentInfo,FRigVMTemplateArgumentInfo,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

