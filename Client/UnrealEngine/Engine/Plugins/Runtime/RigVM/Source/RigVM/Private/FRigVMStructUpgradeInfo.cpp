// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 11

// FRigVMStructUpgradeInfo @ 14a0bf940

FRigVMStructUpgradeInfo * __thiscall
FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(FRigVMStructUpgradeInfo *this)

{
  (this->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  this->OldStruct = (UScriptStruct *)0x0;
  this->NewStruct = (UScriptStruct *)0x0;
  (this->OldDispatchFunction).ComparisonIndex = 0;
  (this->OldDispatchFunction).Number = 0;
  (this->NewDispatchFunction).ComparisonIndex = 0;
  (this->NewDispatchFunction).Number = 0;
  *(undefined8 *)&this->InputLinkMap = 0;
  *(undefined8 *)&(this->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(this->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(this->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(this->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->InputLinkMap).field_0x34 = 0;
  *(undefined4 *)&(this->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(this->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&this->OutputLinkMap = 0;
  *(undefined8 *)&(this->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(this->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(this->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(this->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputLinkMap).field_0x34 = 0;
  *(undefined4 *)&(this->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(this->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&this->DefaultValues = 0;
  *(undefined8 *)&(this->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(this->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultValues).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultValues).field_0x48 = 0;
  (this->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggregatePins).ArrayNum = 0;
  (this->AggregatePins).ArrayMax = 0;
  return this;
}

// ~FRigVMStructUpgradeInfo @ 14a0c3230

void __thiscall FRigVMStructUpgradeInfo::~FRigVMStructUpgradeInfo(FRigVMStructUpgradeInfo *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->AggregatePins).AllocatorInstance.Data,(this->AggregatePins).ArrayNum)
  ;
  pFVar1 = (this->AggregatePins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DefaultValues).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DefaultValues).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DefaultValues);
  *(undefined4 *)&(this->OutputLinkMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OutputLinkMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OutputLinkMap);
  *(undefined4 *)&(this->InputLinkMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InputLinkMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InputLinkMap);
  pFVar1 = (this->NodePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// AddAggregatePin @ 14a0ca8b0

FString * __thiscall
FRigVMStructUpgradeInfo::AddAggregatePin
          (FRigVMStructUpgradeInfo *this,FString *__return_storage_ptr__,FString *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FName *this_00;
  FString *pFVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FName local_res8;
  undefined1 local_res10 [8];
  FString local_78;
  FString local_68;
  FStructOnScope local_58;
  
  if ((param_1->Data).ArrayNum < 2) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    FStructOnScope::FStructOnScope(&local_58,(UStruct *)this->NewStruct);
    iVar8 = (this->AggregatePins).ArrayNum;
    if (iVar8 == 0) {
      ::FString::operator=(&local_78,L"B");
    }
    else {
      uVar7 = 0;
      if ((int)(iVar8 - 1U) < iVar8) {
        uVar7 = ~(iVar8 - 1U) >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pFVar9 = (FString *)(*pcVar4)();
          return pFVar9;
        }
      }
      iVar8 = (this->AggregatePins).ArrayNum;
      pFVar5 = (this->AggregatePins).AllocatorInstance.Data;
      iVar3 = *(int *)(pFVar5 + (longlong)iVar8 * 0x10 + -8);
      uVar7 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar7 = 0;
      }
      ::FString::AssignRange(&local_78,*(wchar_t **)(pFVar5 + (longlong)iVar8 * 0x10 + -0x10),uVar7)
      ;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar10.Data = local_78.Data.AllocatorInstance.Data;
    }
    pcVar4 = *(code **)(*(longlong *)local_58.SampleStructMemory + 0x60);
    ::FName::FName(&local_res8,(wchar_t *)FVar10.Data);
    this_00 = (FName *)(*pcVar4)(local_58.SampleStructMemory,local_res10,&local_res8);
    pFVar9 = ::FName::ToString(this_00,&local_68);
    if (param_1 != pFVar9) {
      pFVar5 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (param_1->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_1->Data).ArrayNum = (pFVar9->Data).ArrayNum;
      (param_1->Data).ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    FStructOnScope::~FStructOnScope(&local_58);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pTVar2 = &this->AggregatePins;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)(this->AggregatePins).ArrayMax * 0x10)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FString *)(*pcVar4)();
      return pFVar9;
    }
  }
  iVar8 = (this->AggregatePins).ArrayNum;
  piVar1 = &(this->AggregatePins).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AggregatePins).ArrayNum = iVar8 + 1;
  ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10),param_1)
  ;
  iVar8 = (this->AggregatePins).ArrayNum;
  uVar11 = iVar8 - 1;
  uVar7 = 0;
  if ((int)uVar11 < iVar8) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FString *)(*pcVar4)();
      return pFVar9;
    }
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((pTVar2->AllocatorInstance).Data +
                     (longlong)((this->AggregatePins).ArrayNum + -1) * 0x10));
  pFVar5 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  return __return_storage_ptr__;
}

// AddRemappedPin @ 14a0cceb0

void __thiscall
FRigVMStructUpgradeInfo::AddRemappedPin
          (FRigVMStructUpgradeInfo *this,FString *param_1,FString *param_2,bool param_3,bool param_4
          )

{
  FString *local_18;
  FString *local_10;
  
  if (param_3) {
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->InputLinkMap,
               (TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000020,
               (bool *)&local_18);
  }
  if (param_4 != false) {
    local_18 = param_1;
    local_10 = param_2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->OutputLinkMap,(TPairInitializer<FString_const_&,FString_const_&> *)&param_4
               ,(bool *)&local_18);
  }
  return;
}

// GetDefaultValueForPin @ 14a0e37e0

FString * __thiscall
FRigVMStructUpgradeInfo::GetDefaultValueForPin(FRigVMStructUpgradeInfo *this,FName *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigVMStructUpgradeInfo::GetDefaultValueForPin'::__l2::
             _dynamic_atexit_destructor_for__EmptyString__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *)&this->DefaultValues,*param_1);
  pFVar2 = &::EmptyString;
  if (pFVar1 != (FString *)0x0) {
    pFVar2 = pFVar1;
  }
  return pFVar2;
}

// GetTypeMapFromStruct @ 14a0f1110

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __cdecl FRigVMStructUpgradeInfo::GetTypeMapFromStruct
                    (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                     *__return_storage_ptr__,UScriptStruct *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  return __return_storage_ptr__;
}

// IsValid @ 14a0f9fe0

bool __thiscall FRigVMStructUpgradeInfo::IsValid(FRigVMStructUpgradeInfo *this)

{
  if ((((this->NodePath).Data.ArrayNum < 2) && (this->OldStruct != (UScriptStruct *)0x0)) &&
     (this->NewStruct != (UScriptStruct *)0x0)) {
    return true;
  }
  return false;
}

// MakeFromStructToFactory @ 14a0fc4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FRigVMStructUpgradeInfo * __cdecl
FRigVMStructUpgradeInfo::MakeFromStructToFactory
          (FRigVMStructUpgradeInfo *__return_storage_ptr__,UScriptStruct *param_1,
          UScriptStruct *param_2,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  FName *pFVar3;
  atomic<int> aVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar9;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *pTVar10;
  ForElementType<FSetElementId> FVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ForElementType<FSetElementId> FVar20;
  bool bVar21;
  atomic<unsigned_int> aVar22;
  int iVar23;
  FRigVMStructUpgradeInfo *pFVar24;
  FRigVMRegistry_RWLock *pFVar25;
  FRigVMDispatchFactory *pFVar26;
  ForAnyElementType *pFVar27;
  int *piVar28;
  TTuple<FName,TRigVMTypeIndex> *pTVar29;
  FString *pFVar30;
  FString *pFVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ForAnyElementType FVar34;
  FName FVar35;
  uint uVar36;
  int *piVar37;
  undefined1 *puVar38;
  uint *puVar39;
  uint uVar40;
  FRigVMTemplateArgumentInfo *pFVar41;
  undefined8 uVar42;
  undefined1 auStackY_4d8 [32];
  undefined1 local_498 [8];
  ForAnyElementType local_490;
  undefined8 local_488;
  undefined1 local_480 [4];
  uint local_47c;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_478;
  undefined8 local_470;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_468;
  int iStack_460;
  uint uStack_45c;
  undefined1 *local_458;
  undefined4 uStack_450;
  int iStack_44c;
  int local_448;
  undefined4 uStack_444;
  int iStack_440;
  undefined4 uStack_43c;
  FRigVMTemplateArgumentInfo *local_438;
  undefined8 local_430;
  FRigVMStructUpgradeInfo *local_428;
  UScriptStruct *local_420;
  UScriptStruct *local_418;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_408;
  int local_3e8;
  undefined1 local_3e4 [12];
  int local_3d8;
  undefined1 local_3d4 [8];
  FName local_3cc;
  FName local_3c4;
  FRigVMDispatchFactory *local_3b8;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FName local_380;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 uStack_350;
  FString *local_348;
  FString *local_340;
  FRigVMTemplateArgumentInfo *local_338;
  longlong local_330;
  FRigVMTemplateArgumentInfo *local_328;
  undefined1 *local_320;
  FString *local_318;
  FString *local_310;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FConditionalScopeLock local_2d8;
  undefined4 local_29c;
  undefined4 local_27c;
  FRigVMStructUpgradeInfo local_278;
  undefined1 local_148 [32];
  int *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ForElementType<FSetElementId> FStack_110;
  undefined8 uStack_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ForElementType<FSetElementId> FStack_c0;
  ulonglong uStack_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ForElementType<FSetElementId> FStack_70;
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_478 = param_3;
  local_428 = __return_storage_ptr__;
  local_420 = param_1;
  local_418 = param_2;
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRigVMStruct",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                          ,100,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    pFVar24 = (FRigVMStructUpgradeInfo *)(*pcVar8)();
    return pFVar24;
  }
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFactoryStruct",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                          ,0x65,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    pFVar24 = (FRigVMStructUpgradeInfo *)(*pcVar8)();
    return pFVar24;
  }
  pFVar25 = FRigVMRegistry_RWLock::Get();
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar25->Lock);
  aVar22 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  pFVar25->WriteLockOwnerThread = aVar22;
  UNLOCK();
  local_470 = 1;
  LOCK();
  paVar2 = &pFVar25->LockCount;
  aVar4 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if (aVar4 == (atomic<int>)0x0) {
    LOCK();
    pFVar25->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4767296351463538103>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                        ,0x249,"DesiredLockType != LockType_Write");
    if (bVar21) {
      pcVar8 = (code *)swi(3);
      pFVar24 = (FRigVMStructUpgradeInfo *)(*pcVar8)();
      return pFVar24;
    }
  }
  local_438 = (FRigVMTemplateArgumentInfo *)0x0;
  local_430 = 0;
  pFVar26 = (FRigVMDispatchFactory *)(**(code **)(pFVar25->_padding_ + 0x38))(pFVar25,param_2);
  local_3b8 = pFVar26;
  DestructItems<FRigVMTemplateArgumentInfo,int>(local_438,(int)local_430);
  if (local_438 != (FRigVMTemplateArgumentInfo *)0x0) {
    FMemory::Free(local_438);
  }
  LOCK();
  paVar2 = &pFVar25->LockCount;
  aVar4 = *paVar2;
  *paVar2 = (atomic<int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar4 == (atomic<int>)0x1) {
    LOCK();
    pFVar25->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar21 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4767296351463538060>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                        ,0x274,"CurrentLockCount == 0");
    if (bVar21) {
      pcVar8 = (code *)swi(3);
      pFVar24 = (FRigVMStructUpgradeInfo *)(*pcVar8)();
      return pFVar24;
    }
  }
  LOCK();
  pFVar25->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar25->Lock);
  if ((pFVar26 == (FRigVMDispatchFactory *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Factory",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                          ,0x69,L""), bVar21)) {
    pcVar8 = (code *)swi(3);
    pFVar24 = (FRigVMStructUpgradeInfo *)(*pcVar8)();
    return pFVar24;
  }
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_128 = (int *)0x0;
  uStack_120 = 0x8000000000;
  FStack_110.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_100 = (ulonglong)uStack_100._4_4_ << 0x20;
  local_490.Data = (FScriptContainerElement *)0x0;
  local_488 = 0;
  local_118 = 0xffffffff;
  FRigVMRegistry_RWLock::FConditionalScopeLock::FConditionalScopeLock
            (&local_2d8,pFVar25,LockType_Read,true);
  pFVar27 = (ForAnyElementType *)(**(code **)(pFVar26->_padding_ + 0x30))(pFVar26,&local_2d8);
  if (&local_490 != pFVar27) {
    DestructItems<FRigVMTemplateArgumentInfo,int>
              ((FRigVMTemplateArgumentInfo *)local_490.Data,(uint)local_488);
    iVar23 = *(int *)&pFVar27[1].Data;
    pFVar41 = (FRigVMTemplateArgumentInfo *)pFVar27->Data;
    local_488 = CONCAT44(local_488._4_4_,iVar23);
    if ((iVar23 == 0) && (local_488._4_4_ == 0)) {
      local_488 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,iVar23,local_488._4_4_,&local_490,iVar23,
                 (int *)((longlong)&local_488 + 4));
      ConstructItems<FRigVMTemplateArgumentInfo,FRigVMTemplateArgumentInfo,int>
                (local_490.Data,pFVar41,iVar23);
    }
  }
  uVar33 = 0;
  FRigVMRegistry_RWLock::FConditionalScopeLock::~FConditionalScopeLock(&local_2d8);
  uVar32 = (ulonglong)(int)(uint)local_488;
  if ((local_148._8_4_ - local_118._4_4_ == 1) && ((uint)local_488 == 1)) {
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_88 = (int *)0x0;
    uStack_80 = 0x8000000000;
    local_78 = 0xffffffff;
    FStack_70.SecondaryData = (ForElementType<FSetElementId>)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    if (local_118._4_4_ == 0) {
      iVar23 = local_148._8_4_ + -1;
    }
    else {
      piVar37 = (int *)(local_148 + 0x10);
      if (local_128 != (int *)0x0) {
        piVar37 = local_128;
      }
      piVar28 = piVar37;
      uVar32 = uVar33;
      if ((int)uStack_120 + 0x1fU >> 5 != 0) {
LAB_14a0fc836:
        if (*piVar28 == 0) goto code_r0x00014a0fc83b;
        local_3e8 = 0;
        bVar21 = piVar37[uVar32] != 0;
        if (bVar21) {
          for (; ((uint)piVar37[uVar32] >> local_3e8 & 1) == 0; local_3e8 = local_3e8 + 1) {
          }
        }
        iVar23 = 0x20;
        if (bVar21) {
          iVar23 = local_3e8;
        }
        iVar23 = iVar23 + (int)uVar32 * 0x20;
        if ((int)uStack_120 <= iVar23) goto LAB_14a0fc863;
        goto LAB_14a0fc868;
      }
LAB_14a0fc863:
      iVar23 = -1;
    }
LAB_14a0fc868:
    if (iVar23 != -1) {
      uVar33 = (longlong)iVar23 * 0x1c + local_148._0_8_;
    }
    local_338 = (FRigVMTemplateArgumentInfo *)local_490.Data;
    local_330 = uVar33 + 8;
    TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
              ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                *)local_a8,(TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)local_3e4,
               (bool *)&local_338);
    FVar20 = FStack_70.SecondaryData;
    uVar18 = FStack_70._0_8_;
    uVar17 = local_78;
    uVar16 = uStack_80;
    uVar15 = local_88;
    uVar14 = local_a8._24_8_;
    uVar13 = local_a8._16_8_;
    uVar12 = local_a8._8_8_;
    uVar42 = local_a8._0_8_;
    uVar33 = uStack_100;
    FVar11 = FStack_110.SecondaryData;
    local_a8._0_8_ = local_148._0_8_;
    local_a8._8_8_ = local_148._8_8_;
    local_88 = local_128;
    uStack_80 = uStack_120;
    FStack_70.SecondaryData = FStack_110.SecondaryData;
    local_a8._16_8_ = local_148._16_8_;
    local_a8._24_8_ = local_148._24_8_;
    local_78 = local_118;
    FStack_70.InlineData[0] = FStack_110.InlineData[0];
    FStack_70.InlineData[1] = FStack_110.InlineData[1];
    FStack_70.InlineData[2] = FStack_110.InlineData[2];
    FStack_70.InlineData[3] = FStack_110.InlineData[3];
    FStack_70._padding_ = FStack_110._padding_;
    uVar19 = FStack_70._0_8_;
    local_148._0_8_ = uVar42;
    local_148._8_8_ = uVar12;
    local_148._16_8_ = uVar13;
    local_148._24_8_ = uVar14;
    local_128 = (int *)uVar15;
    uStack_120 = uVar16;
    local_118 = uVar17;
    FStack_70.InlineData[0] = (uchar)uVar18;
    FStack_70.InlineData[1] = SUB81(uVar18,1);
    FStack_70.InlineData[2] = SUB81(uVar18,2);
    FStack_70.InlineData[3] = SUB81(uVar18,3);
    FStack_70._padding_ = SUB84(uVar18,4);
    FStack_110.InlineData[0] = FStack_70.InlineData[0];
    FStack_110.InlineData[1] = FStack_70.InlineData[1];
    FStack_110.InlineData[2] = FStack_70.InlineData[2];
    FStack_110.InlineData[3] = FStack_70.InlineData[3];
    FStack_110._padding_ = FStack_70._padding_;
    FStack_110.SecondaryData = FVar20;
    uStack_100 = uStack_60;
    uStack_60 = uVar33 & 0xffffffff00000000;
    FStack_70._0_8_ = uVar19;
    if (FVar11 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar11);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  else {
    pFVar41 = (FRigVMTemplateArgumentInfo *)(local_490.Data + uVar32 * 0x50);
    local_f8._0_8_ = 0;
    local_f8._8_8_ = 0;
    local_d8 = (int *)0x0;
    uStack_d0 = 0x8000000000;
    local_c8 = 0xffffffff;
    FStack_c0.SecondaryData = (ForElementType<FSetElementId>)0x0;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    local_47c = (uint)local_488;
    uVar33 = uVar32;
    FVar34.Data = local_490.Data;
    uVar42 = 1;
    while( true ) {
      uVar40 = (uint)uVar42;
      if ((int)uVar32 != (int)uVar33) {
        local_498[0] = 0;
        `TCheckedPointerIterator<FRigVMTemplateArgumentInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_498);
      }
      FVar20 = FStack_c0.SecondaryData;
      uVar18 = FStack_c0._0_8_;
      uVar17 = local_c8;
      uVar16 = uStack_d0;
      uVar15 = local_d8;
      uVar14 = local_f8._24_8_;
      uVar13 = local_f8._16_8_;
      uVar12 = local_f8._8_8_;
      uVar42 = local_f8._0_8_;
      uVar33 = uStack_100;
      FVar11 = FStack_110.SecondaryData;
      if ((FRigVMTemplateArgumentInfo *)FVar34.Data == pFVar41) break;
      iVar23 = *(int *)&param_3->field_0x28;
      local_458 = &param_3->field_0x10;
      FVar35 = ((FRigVMTemplateArgumentInfo *)FVar34.Data)->Name;
      iStack_460 = 0;
      local_448 = 0;
      iStack_44c = 0;
      if (iVar23 != 0) {
        puVar39 = (uint *)local_458;
        if (*(uint **)&param_3->field_0x20 != (uint *)0x0) {
          puVar39 = *(uint **)&param_3->field_0x20;
        }
        uVar36 = *puVar39;
        while (uVar36 == 0) {
          iStack_460 = iStack_460 + 1;
          local_448 = local_448 + 0x20;
          iStack_44c = iVar23;
          if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_460)
          goto LAB_14a0fca5f;
          uVar36 = puVar39[iStack_460];
        }
        uVar40 = -uVar36 & uVar36;
        uVar33 = (ulonglong)uVar40 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_3e4._4_4_ = (undefined4)lVar7;
        iStack_44c = local_448 + -1 + local_3e4._4_4_;
        if (iVar23 < iStack_44c) {
          iStack_44c = iVar23;
        }
      }
LAB_14a0fca5f:
      local_468 = local_478;
      uStack_444 = local_29c;
      uStack_450 = 0xffffffff;
      TStack_408._padding_ = CONCAT44(uVar40,iStack_460);
      TStack_408.UnvisitedBitMask = 0xffffffff;
      local_410 = local_478;
      TStack_408._28_4_ = local_29c;
      TStack_408.BaseBitIndex = local_448;
      uStack_45c = uVar40;
      TStack_408.CurrentBitIndex = iStack_44c;
      TStack_408.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_458;
      if (iStack_44c < iVar23) {
        do {
          pFVar3 = (FName *)(*(longlong *)local_410 + (longlong)TStack_408.CurrentBitIndex * 0x18);
          if (*(FName *)(*(longlong *)local_410 + 8 + (longlong)TStack_408.CurrentBitIndex * 0x18)
              == FVar35) {
            if (pFVar3 != (FName *)0x0) {
              FVar35 = *pFVar3;
            }
            break;
          }
          TStack_408.UnvisitedBitMask = TStack_408.UnvisitedBitMask & ~TStack_408._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_408);
        } while (TStack_408.CurrentBitIndex < (TStack_408.Array)->NumBits);
      }
      pTVar29 = TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                        *)local_148,FVar35);
      if ((pTVar29 == (TTuple<FName,TRigVMTypeIndex> *)0x0) ||
         (&pTVar29->field_0x8 == (undefined1 *)0x0)) {
        if (1 < (byte)LogRigVM._0_1_) {
          ::FName::ToString((FName *)FVar34.Data,&local_308);
          local_3cc = (FName)local_418->_padding_;
          ::FName::ToString(&local_3cc,&local_3a0);
          local_3c4 = (FName)local_420->_padding_;
          ::FName::ToString(&local_3c4,&local_3b0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
          }
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
        }
        pFVar24 = local_428;
        FRigVMStructUpgradeInfo(local_428);
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        if (FStack_c0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_c0.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_f8);
        DestructItems<FRigVMTemplateArgumentInfo,int>
                  ((FRigVMTemplateArgumentInfo *)local_490.Data,(uint)local_488);
        if ((FRigVMTemplateArgumentInfo *)local_490.Data != (FRigVMTemplateArgumentInfo *)0x0) {
          FMemory::Free(local_490.Data);
        }
        uStack_100 = uStack_100 & 0xffffffff00000000;
        if (FStack_110.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FStack_110.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_148);
        return pFVar24;
      }
      local_328 = (FRigVMTemplateArgumentInfo *)FVar34.Data;
      local_320 = &pTVar29->field_0x8;
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
                ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)local_f8,
                 (TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)(local_3e4 + 8),
                 (bool *)&local_328);
      uVar32 = local_488 & 0xffffffff;
      FVar34.Data = FVar34.Data + 0x50;
      uVar33 = (ulonglong)local_47c;
      param_3 = local_478;
      uVar42 = local_470;
    }
    local_f8._0_8_ = local_148._0_8_;
    local_f8._8_8_ = local_148._8_8_;
    local_d8 = local_128;
    uStack_d0 = uStack_120;
    FStack_c0.SecondaryData = FStack_110.SecondaryData;
    local_f8._16_8_ = local_148._16_8_;
    local_f8._24_8_ = local_148._24_8_;
    local_c8 = local_118;
    FStack_c0.InlineData[0] = FStack_110.InlineData[0];
    FStack_c0.InlineData[1] = FStack_110.InlineData[1];
    FStack_c0.InlineData[2] = FStack_110.InlineData[2];
    FStack_c0.InlineData[3] = FStack_110.InlineData[3];
    FStack_c0._padding_ = FStack_110._padding_;
    uVar19 = FStack_c0._0_8_;
    local_148._0_8_ = uVar42;
    local_148._8_8_ = uVar12;
    local_148._16_8_ = uVar13;
    local_148._24_8_ = uVar14;
    local_128 = (int *)uVar15;
    uStack_120 = uVar16;
    local_118 = uVar17;
    FStack_c0.InlineData[0] = (uchar)uVar18;
    FStack_c0.InlineData[1] = SUB81(uVar18,1);
    FStack_c0.InlineData[2] = SUB81(uVar18,2);
    FStack_c0.InlineData[3] = SUB81(uVar18,3);
    FStack_c0._padding_ = SUB84(uVar18,4);
    FStack_110.InlineData[0] = FStack_c0.InlineData[0];
    FStack_110.InlineData[1] = FStack_c0.InlineData[1];
    FStack_110.InlineData[2] = FStack_c0.InlineData[2];
    FStack_110.InlineData[3] = FStack_c0.InlineData[3];
    FStack_110._padding_ = FStack_c0._padding_;
    FStack_110.SecondaryData = FVar20;
    uStack_100 = uStack_b0;
    uStack_b0 = uVar33 & 0xffffffff00000000;
    FStack_c0._0_8_ = uVar19;
    if (FVar11 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar11);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
    __return_storage_ptr__ = local_428;
  }
  iVar23 = 0;
  DestructItems<FRigVMTemplateArgumentInfo,int>
            ((FRigVMTemplateArgumentInfo *)local_490.Data,(uint)local_488);
  if ((FRigVMTemplateArgumentInfo *)local_490.Data != (FRigVMTemplateArgumentInfo *)0x0) {
    FMemory::Free(local_490.Data);
  }
  FRigVMDispatchFactory::GetPermutationName
            (local_3b8,&local_390,
             (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
              *)local_148);
  local_278.OldStruct = local_420;
  FVar34.Data = (FScriptContainerElement *)L"";
  if (local_390.Data.ArrayNum != 0) {
    FVar34.Data = local_390.Data.AllocatorInstance.Data;
  }
  local_278.NewStruct = local_418;
  local_278.NodePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.NodePath.Data.ArrayNum = 0;
  local_278.NodePath.Data.ArrayMax = 0;
  local_278.OldDispatchFunction.ComparisonIndex.Value = 0;
  local_278.OldDispatchFunction.Number = 0;
  local_278.InputLinkMap._0_8_ = 0;
  local_278.InputLinkMap._8_8_ = 0;
  local_278.InputLinkMap._32_8_ = 0;
  local_278.InputLinkMap._40_4_ = 0;
  local_278.InputLinkMap._44_4_ = 0x80;
  local_278.InputLinkMap._48_4_ = 0xffffffff;
  local_278.InputLinkMap._52_4_ = 0;
  local_278.InputLinkMap._64_8_ = 0;
  local_278.InputLinkMap._72_4_ = 0;
  local_278.OutputLinkMap._0_8_ = 0;
  local_278.OutputLinkMap._8_8_ = 0;
  local_278.OutputLinkMap._32_8_ = 0;
  local_278.OutputLinkMap._40_4_ = 0;
  local_278.OutputLinkMap._44_4_ = 0x80;
  local_278.OutputLinkMap._48_4_ = 0xffffffff;
  local_278.OutputLinkMap._52_4_ = 0;
  local_278.OutputLinkMap._64_8_ = 0;
  local_278.OutputLinkMap._72_4_ = 0;
  local_278.DefaultValues._0_8_ = 0;
  local_278.DefaultValues._8_8_ = 0;
  local_278.DefaultValues._32_8_ = 0;
  local_278.DefaultValues._40_4_ = 0;
  local_278.DefaultValues._44_4_ = 0x80;
  local_278.DefaultValues._48_4_ = 0xffffffff;
  local_278.DefaultValues._52_4_ = 0;
  local_278.DefaultValues._64_8_ = 0;
  local_278.DefaultValues._72_4_ = 0;
  local_278.AggregatePins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.AggregatePins.ArrayNum = 0;
  local_278.AggregatePins.ArrayMax = 0;
  ::FName::FName(&local_380,(wchar_t *)FVar34.Data);
  puVar1 = &param_3->field_0x10;
  local_278.NewDispatchFunction = local_380;
  iVar5 = *(int *)&param_3->field_0x28;
  iStack_460 = iVar23;
  local_448 = iVar23;
  if (iVar5 == 0) {
LAB_14a0fcf40:
    uStack_45c = (uint)local_470;
    iStack_44c = iVar23;
  }
  else {
    puVar39 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar39 = (uint *)puVar1;
    }
    uStack_45c = *puVar39;
    while (uStack_45c == 0) {
      iStack_460 = iStack_460 + 1;
      local_448 = local_448 + 0x20;
      iVar23 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_460) goto LAB_14a0fcf40;
      uStack_45c = puVar39[iStack_460];
    }
    uStack_45c = -uStack_45c & uStack_45c;
    uVar33 = (ulonglong)uStack_45c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_3d8 = (int)lVar7;
    iStack_44c = local_448 + -1 + local_3d8;
    if (iVar5 < iStack_44c) {
      iStack_44c = iVar5;
    }
  }
  uStack_444 = local_27c;
  iStack_440 = *(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34;
  uVar40 = *(uint *)&param_3->field_0x28;
  uStack_450 = 0xffffffff;
  uVar36 = uVar40 & 0xffffffe0;
  TStack_370._padding_ = CONCAT44(uStack_45c,iStack_460);
  TStack_370.CurrentBitIndex = iStack_44c;
  TStack_370.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar40 >> 5;
  TStack_370._28_4_ = local_27c;
  TStack_370.BaseBitIndex = local_448;
  uStack_350 = CONCAT44(uStack_43c,iStack_440);
  local_468 = param_3;
  local_458 = puVar1;
  local_378 = param_3;
  TStack_370.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar40 < 0) || (iVar5 < (int)uVar40)) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar21) {
      pcVar8 = (code *)swi(3);
      pFVar24 = (FRigVMStructUpgradeInfo *)(*pcVar8)();
      return pFVar24;
    }
  }
  pTVar9 = local_478;
  uVar6 = *(uint *)&param_3->field_0x28;
  if (uVar40 != uVar6) {
    puVar38 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar38 = puVar1;
    }
    uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar23 * 4);
    while (uVar40 == 0) {
      iVar23 = iVar23 + 1;
      uVar36 = uVar36 + 0x20;
      uVar40 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar23) goto LAB_14a0fd040;
      uVar40 = *(uint *)(puVar38 + (longlong)iVar23 * 4);
    }
    uVar33 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar40 = (int)lVar7 + -1 + uVar36;
    if ((int)uVar6 < (int)uVar40) {
      uVar40 = uVar6;
    }
  }
LAB_14a0fd040:
  while( true ) {
    pTVar10 = local_378;
    if (*(int *)&local_378->field_0x8 - *(int *)&local_378->field_0x34 != (int)uStack_350) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_480);
    }
    if (((TStack_370.CurrentBitIndex == uVar40) &&
        (TStack_370.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar9)
       ) break;
    pFVar3 = (FName *)(*(longlong *)pTVar10 + (longlong)TStack_370.CurrentBitIndex * 0x18);
    pFVar30 = ::FName::ToString(pFVar3 + 1,&local_2e8);
    pFVar31 = ::FName::ToString(pFVar3,&local_2f8);
    local_318 = pFVar31;
    local_310 = pFVar30;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)((longlong)&local_278 + 0x30),
               (TPairInitializer<FString_const_&,FString_const_&> *)local_3d4,(bool *)&local_318);
    local_348 = pFVar31;
    local_340 = pFVar30;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)((longlong)&local_278 + 0x80),
               (TPairInitializer<FString_const_&,FString_const_&> *)(local_3d4 + 4),
               (bool *)&local_348);
    if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
    }
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
  }
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data =
       local_278.NodePath.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = local_278.NodePath.Data.ArrayNum;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = local_278.NodePath.Data.ArrayMax;
  __return_storage_ptr__->OldStruct = local_278.OldStruct;
  __return_storage_ptr__->NewStruct = local_278.NewStruct;
  __return_storage_ptr__->OldDispatchFunction = local_278.OldDispatchFunction;
  __return_storage_ptr__->NewDispatchFunction = local_278.NewDispatchFunction;
  local_278.NodePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.NodePath.Data.ArrayNum = 0;
  local_278.NodePath.Data.ArrayMax = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->InputLinkMap,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)&local_278 + 0x30));
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->OutputLinkMap,
             (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)&local_278 + 0x80));
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x0 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->DefaultValues,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)((longlong)&local_278 + 0xd0));
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data =
       local_278.AggregatePins.AllocatorInstance.Data;
  (__return_storage_ptr__->AggregatePins).ArrayNum = local_278.AggregatePins.ArrayNum;
  (__return_storage_ptr__->AggregatePins).ArrayMax = local_278.AggregatePins.ArrayMax;
  local_278.AggregatePins.ArrayNum = 0;
  local_278.AggregatePins.ArrayMax = 0;
  local_278.AggregatePins.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ~FRigVMStructUpgradeInfo(&local_278);
  if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_390.Data.AllocatorInstance.Data);
  }
  uStack_100 = uStack_100 & 0xffffffff00000000;
  if (FStack_110.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_110.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  return __return_storage_ptr__;
code_r0x00014a0fc83b:
  uVar40 = (int)uVar32 + 1;
  piVar28 = piVar28 + 1;
  uVar32 = (ulonglong)uVar40;
  if ((int)((int)uStack_120 + 0x1fU >> 5) <= (int)uVar40) goto LAB_14a0fc863;
  goto LAB_14a0fc836;
}

// RemapPin @ 14a107210

FString * __thiscall
FRigVMStructUpgradeInfo::RemapPin
          (FRigVMStructUpgradeInfo *this,FString *__return_storage_ptr__,FString *param_1,
          bool param_2,bool param_3)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  FString *pFVar10;
  FString *pFVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  ForElementType<unsigned_int> FVar18;
  uint uVar19;
  undefined1 local_res18 [16];
  FString local_138;
  uint local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  longlong *local_f0;
  FString local_e8;
  longlong *local_d8;
  uint uStack_d0;
  uint uStack_cc;
  ForElementType<unsigned_int> local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  FString local_a0;
  longlong *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FString local_60;
  FString local_50;
  
  iVar14 = (param_1->Data).ArrayNum;
  uVar16 = 0;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = iVar14;
  uVar15 = 0;
  if (iVar14 == 0) {
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar14,0,(ForAnyElementType *)&local_138,iVar14,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar14 * 2);
  }
  if (param_3) {
    ::FString::FString(&local_60,L".");
    bVar6 = ::FString::Split(&local_138,&local_60,&local_110,&local_138,IgnoreCase,FromStart);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      ::FString::FString(__return_storage_ptr__,param_1);
      goto joined_r0x00014a10779b;
    }
  }
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar8 = 0x30;
  if (!param_2) {
    lVar8 = 0x80;
  }
  local_120.Data.ArrayNum = 0;
  local_120.Data.ArrayMax = 0;
  local_f0 = (longlong *)((longlong)&(this->NodePath).Data.AllocatorInstance.Data + lVar8);
  lVar8 = 0x40;
  if (!param_2) {
    lVar8 = 0x90;
  }
  uStack_cc = 1;
  FVar18 = (ForElementType<unsigned_int>)
           ((longlong)&(this->NodePath).Data.AllocatorInstance.Data + lVar8);
  uVar13 = 0;
  uVar12 = *(int *)((longlong)FVar18 + 0x18);
  uStack_bc = uVar13;
  local_b8 = uVar13;
  if (uVar12 != 0) {
    FVar17 = *(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar18;
    }
    uVar7 = *(uint *)FVar17;
    local_b8 = 0;
    uVar15 = 0;
    while (uVar7 == 0) {
      lVar8 = (longlong)(int)uVar15;
      local_b8 = local_b8 + 0x20;
      uVar15 = uVar15 + 1;
      uStack_bc = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_14a1073ce;
      uVar7 = ((uint *)((longlong)FVar17 + 4))[lVar8];
    }
    uStack_cc = -uVar7 & uVar7;
    uVar1 = (ulonglong)uStack_cc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_a8 = (int)lVar8;
    uStack_bc = (local_b8 - 1) + local_a8;
    if ((int)uVar12 < (int)uStack_bc) {
      uStack_bc = uVar12;
    }
  }
LAB_14a1073ce:
  lVar8 = 100;
  if (!param_2) {
    lVar8 = 0xb4;
  }
  TStack_88._padding_ = CONCAT44(uStack_cc,uVar15);
  uStack_c0 = 0xffffffff;
  lVar9 = 0x38;
  if (!param_2) {
    lVar9 = 0x88;
  }
  TStack_88.CurrentBitIndex = uStack_bc;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iStack_b0 = *(int *)((longlong)&(this->NodePath).Data.AllocatorInstance.Data + lVar9) -
              *(int *)((longlong)&(this->NodePath).Data.AllocatorInstance.Data + lVar8);
  TStack_88._28_4_ = uStack_bc;
  TStack_88.BaseBitIndex = local_b8;
  uStack_68 = CONCAT44(uStack_ac,iStack_b0);
  lVar8 = 0x58;
  if (!param_2) {
    lVar8 = 0xa8;
  }
  uVar7 = *(uint *)((longlong)&(this->NodePath).Data.AllocatorInstance.Data + lVar8);
  iVar14 = (int)uVar7 >> 5;
  uVar19 = uVar7 & 0xffffffe0;
  local_d8 = local_f0;
  uStack_d0 = uVar15;
  local_c8 = FVar18;
  uStack_b4 = uStack_bc;
  local_90 = local_f0;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar18;
  if ((((int)uVar7 < 0) || ((int)uVar12 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar3)();
    return pFVar10;
  }
  uVar15 = *(uint *)((longlong)FVar18 + 0x18);
  if (uVar7 != uVar15) {
    FVar17 = *(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar17 = FVar18;
    }
    uVar12 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)((longlong)FVar17 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar7 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14a107510;
      uVar12 = ((uint *)((longlong)FVar17 + 4))[lVar8];
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = (int)lVar8 + -1 + uVar19;
    if ((int)uVar15 < (int)uVar7) {
      uVar7 = uVar15;
    }
  }
LAB_14a107510:
  do {
    plVar5 = local_90;
    if ((int)local_90[1] - *(int *)((longlong)local_90 + 0x34) != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar7) &&
        ((ForElementType<unsigned_int>)TStack_88.Array == FVar18)) && (plVar5 == local_f0))
    goto LAB_14a1076e2;
    pFVar10 = (FString *)(*plVar5 + (longlong)TStack_88.CurrentBitIndex * 0x28);
    iVar14 = (pFVar10->Data).ArrayNum;
    if (iVar14 == local_138.Data.ArrayNum) {
      if (iVar14 < 2) break;
      iVar14 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                          (wchar_t *)local_138.Data.AllocatorInstance.Data);
      bVar6 = iVar14 == 0;
    }
    else {
      bVar6 = iVar14 + local_138.Data.ArrayNum == 1;
    }
    if (bVar6) break;
    ::FString::ConcatFC(&local_e8,pFVar10,L".");
    uVar15 = local_e8.Data.ArrayNum - 1;
    FVar4.Data = local_e8.Data.AllocatorInstance.Data;
    if (local_e8.Data.ArrayNum == 0) {
      uVar15 = uVar13;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    bVar6 = ::FString::StartsWith(&local_138,(wchar_t *)FVar4.Data,uVar15,IgnoreCase);
    if (bVar6) {
      uVar15 = local_e8.Data.ArrayNum - 1;
      if (local_e8.Data.ArrayNum == 0) {
        uVar15 = uVar13;
      }
      if ((int)uVar16 < (int)uVar15) {
        iVar14 = (pFVar10->Data).ArrayNum;
        uVar16 = iVar14 - 1;
        if (iVar14 == 0) {
          uVar16 = uVar13;
        }
        local_128 = uVar15;
        pFVar11 = ::FString::RightChop(&local_138,&local_50,uVar16);
        ::FString::ConcatFF(&local_100,pFVar10 + 1,pFVar11);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        local_120.Data.AllocatorInstance.Data = local_100.Data.AllocatorInstance.Data;
        local_120.Data.ArrayNum = local_100.Data.ArrayNum;
        local_120.Data.ArrayMax = local_100.Data.ArrayMax;
        local_100.Data.ArrayNum = 0;
        local_100.Data.ArrayMax = 0;
        local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar16 = local_128;
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
          uVar16 = local_128;
        }
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  } while( true );
  if (&local_138 != pFVar10 + 1) {
    iVar14 = pFVar10[1].Data.ArrayNum;
    pFVar2 = pFVar10[1].Data.AllocatorInstance.Data;
    local_138.Data.ArrayNum = iVar14;
    if ((iVar14 == 0) && (local_138.Data.ArrayMax == 0)) {
      local_138.Data.ArrayNum = 0;
      local_138.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar14,local_138.Data.ArrayMax,(ForAnyElementType *)&local_138,iVar14,
                 &local_138.Data.ArrayMax);
      if (iVar14 != 0) {
        memcpy(local_138.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar14 * 2);
      }
    }
  }
  ::FString::Reset(&local_120,0);
LAB_14a1076e2:
  if (1 < local_120.Data.ArrayNum) {
    uVar15 = local_120.Data.ArrayNum - 1;
    if (local_120.Data.ArrayNum == 0) {
      uVar15 = uVar13;
    }
    ::FString::AssignRange(&local_138,(wchar_t *)local_120.Data.AllocatorInstance.Data,uVar15);
  }
  if (param_3) {
    ::FString::PrintfImpl(&local_a0,L"%s.%s");
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    local_138.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data;
    local_138.Data.ArrayMax = 0;
    local_138.Data.ArrayNum = local_a0.Data.ArrayNum;
  }
  else {
    local_a0.Data.ArrayMax = local_138.Data.ArrayMax;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_a0.Data.ArrayMax;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = local_138.Data.ArrayNum;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
joined_r0x00014a10779b:
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetDefaultValueForPin @ 14a111000

void __thiscall
FRigVMStructUpgradeInfo::SetDefaultValueForPin
          (FRigVMStructUpgradeInfo *this,FName *param_1,FString *param_2)

{
  FName FVar1;
  uint uVar2;
  FString *this_00;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->DefaultValues,uVar2 + FVar1.Number,param_1);
  ::FString::operator=(this_00,param_2);
  return;
}

// SetDefaultValues @ 14a1111d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMStructUpgradeInfo::SetDefaultValues(FRigVMStructUpgradeInfo *this,FRigVMStruct *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *pTVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->NewStruct == (UScriptStruct *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                       ,0x147,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FRigVMStruct *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNewStructMemory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                       ,0x148,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar3 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)FRigVMStruct::GetDefaultValues
                        (param_1,(TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                  *)local_68,this->NewStruct);
  if ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
       *)&this->DefaultValues != pTVar3) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)&this->DefaultValues,pTVar3);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

