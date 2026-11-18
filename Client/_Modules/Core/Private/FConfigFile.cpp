// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 59

// FConfigFile @ 141854e10

FConfigFile * __thiscall FConfigFile::FConfigFile(FConfigFile *this,FConfigFile *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->CommandlineOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandlineOptions).ArrayNum = 0;
  (this->CommandlineOptions).ArrayMax = 0;
  *(undefined8 *)&this->PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
  this->Branch = (FConfigBranch *)0x0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
  this->ChangeTracker = (FConfigCommandStream *)0x0;
  operator=(this,param_1);
  return this;
}

// FConfigFile @ 141854ec0

FConfigFile * __thiscall FConfigFile::FConfigFile(FConfigFile *this,FConfigFile *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->CommandlineOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandlineOptions).ArrayNum = 0;
  (this->CommandlineOptions).ArrayMax = 0;
  *(undefined8 *)&this->PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
  this->Branch = (FConfigBranch *)0x0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
  this->ChangeTracker = (FConfigCommandStream *)0x0;
  operator=(this,param_1);
  return this;
}

// FConfigFile @ 141854f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FConfigFile * __thiscall FConfigFile::FConfigFile(FConfigFile *this)

{
  undefined1 *puVar1;
  void *pvVar2;
  
  pvVar2 = ThreadLocalStoragePointer;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->Dirty = false;
  this->bPythonConfigParserMode = false;
  this->bHasPlatformName = false;
  this->NoSave = false;
  this->bCanSaveAllSections = true;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  (this->Tag).ComparisonIndex = 0;
  (this->Tag).Number = 0;
  (this->CommandlineOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandlineOptions).ArrayNum = 0;
  (this->CommandlineOptions).ArrayMax = 0;
  *(undefined8 *)&this->PerObjectConfigArrayOfStructKeys = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x20 = 0;
  this->Branch = (FConfigBranch *)0x0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34 = 0;
  *(undefined8 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x40 = 0;
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
  this->ChangeTracker = (FConfigCommandStream *)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSOnFConfigCreated'::__l2::_dynamic_atexit_destructor_for__Singleton__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  TMulticastDelegate<void___cdecl(FConfigFile_const_*),FDefaultTSDelegateUserPolicy>::Broadcast
            (&::Singleton,this);
  return this;
}

// ~FConfigFile @ 141857480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FConfigFile::~FConfigFile(FConfigFile *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  if (!GExitPurge) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
        ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
        ::Singleton._56_8_ = _UNK_150631d48;
        ::Singleton._40_8_ = 0;
        atexit(`FCoreDelegates::TSOnFConfigDeleted'::__l2::
               _dynamic_atexit_destructor_for__Singleton__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    TMulticastDelegate<void___cdecl(FConfigFile_const_*),FDefaultTSDelegateUserPolicy>::Broadcast
              (&::Singleton,this);
  }
  Cleanup(this);
  *(undefined4 *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PerObjectConfigArrayOfStructKeys).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PerObjectConfigArrayOfStructKeys);
  DestructItems<FConfigCommandlineOverride,int>
            ((FConfigCommandlineOverride *)(this->CommandlineOptions).AllocatorInstance.Data,
             (this->CommandlineOptions).ArrayNum);
  pFVar2 = (this->CommandlineOptions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 141858930

FConfigFile * __thiscall FConfigFile::operator=(FConfigFile *this,FConfigFile *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  TArray<FConfigCommandlineOverride,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FConfigCommandlineOverride,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  byte bVar6;
  
  AcquireSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,(int)this->_padding_);
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
    if (&this->_padding_ != &param_1->_padding_) {
      if (param_1->_padding_ == 0) {
        memmove(&this->_padding_,&param_1->_padding_,0x10);
      }
      if ((void *)this->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this->_padding_);
      }
      this->_padding_ = param_1->_padding_;
      param_1->_padding_ = 0;
      *(int *)&this->_padding_ = (int)param_1->_padding_;
      *(undefined4 *)((longlong)&this->_padding_ + 4) =
           *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      param_1->_padding_ = 0;
    }
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&param_1->_padding_ + 4) = 0;
    if (param_1->_padding_ == 0) {
      *(int *)&this->_padding_ = (int)param_1->_padding_;
    }
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)&param_1->_padding_ = 0;
  }
  pFVar1 = &param_1->PlatformName;
  pFVar2 = &this->PlatformName;
  bVar6 = (this->Dirty ^ param_1->Dirty) & 1U ^ this->field_0x50;
  this->field_0x50 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x50) & 2 ^ bVar6;
  this->field_0x50 = bVar6;
  bVar6 = (bVar6 ^ param_1->field_0x50) & 4 ^ bVar6;
  this->field_0x50 = bVar6;
  this->field_0x50 = (bVar6 ^ param_1->field_0x50) & 0x10 ^ bVar6;
  this->Name = param_1->Name;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PlatformName).Data.ArrayNum = (param_1->PlatformName).Data.ArrayNum;
    (this->PlatformName).Data.ArrayMax = (param_1->PlatformName).Data.ArrayMax;
    (param_1->PlatformName).Data.ArrayNum = 0;
    (param_1->PlatformName).Data.ArrayMax = 0;
  }
  pTVar3 = &param_1->CommandlineOptions;
  this->Tag = param_1->Tag;
  pTVar4 = &this->CommandlineOptions;
  this->Branch = param_1->Branch;
  if (pTVar4 != pTVar3) {
    DestructItems<FConfigCommandlineOverride,int>
              ((FConfigCommandlineOverride *)(pTVar4->AllocatorInstance).Data,
               (this->CommandlineOptions).ArrayNum);
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CommandlineOptions).ArrayNum = (param_1->CommandlineOptions).ArrayNum;
    (this->CommandlineOptions).ArrayMax = (param_1->CommandlineOptions).ArrayMax;
    (param_1->CommandlineOptions).ArrayNum = 0;
    (param_1->CommandlineOptions).ArrayMax = 0;
  }
  if (&this->PerObjectConfigArrayOfStructKeys != &param_1->PerObjectConfigArrayOfStructKeys) {
    TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                *)&this->PerObjectConfigArrayOfStructKeys,
               (TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
                *)&param_1->PerObjectConfigArrayOfStructKeys);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  return this;
}

// operator= @ 141858b40

FConfigFile * __thiscall FConfigFile::operator=(FConfigFile *this,FConfigFile *param_1)

{
  int *piVar1;
  TArray<FConfigCommandlineOverride,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FConfigCommandlineOverride *pFVar4;
  byte bVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                       *)param_1);
  bVar5 = (this->Dirty ^ param_1->Dirty) & 1U ^ this->field_0x50;
  this->field_0x50 = bVar5;
  bVar5 = (bVar5 ^ param_1->field_0x50) & 2 ^ bVar5;
  this->field_0x50 = bVar5;
  bVar5 = (bVar5 ^ param_1->field_0x50) & 4 ^ bVar5;
  this->field_0x50 = bVar5;
  bVar5 = (bVar5 ^ param_1->field_0x50) & 8 ^ bVar5;
  this->field_0x50 = bVar5;
  this->field_0x50 = (bVar5 ^ param_1->field_0x50) & 0x10 ^ bVar5;
  this->Name = param_1->Name;
  ::FString::operator=(&this->PlatformName,&param_1->PlatformName);
  this->Tag = param_1->Tag;
  pTVar2 = &this->CommandlineOptions;
  this->Branch = param_1->Branch;
  if (pTVar2 != &param_1->CommandlineOptions) {
    DestructItems<FConfigCommandlineOverride,int>
              ((FConfigCommandlineOverride *)(pTVar2->AllocatorInstance).Data,
               (this->CommandlineOptions).ArrayNum);
    iVar3 = (param_1->CommandlineOptions).ArrayNum;
    piVar1 = &(this->CommandlineOptions).ArrayMax;
    pFVar4 = (FConfigCommandlineOverride *)(param_1->CommandlineOptions).AllocatorInstance.Data;
    (this->CommandlineOptions).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FConfigCommandlineOverride,FConfigCommandlineOverride,int>
                ((pTVar2->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  if (&this->PerObjectConfigArrayOfStructKeys != &param_1->PerObjectConfigArrayOfStructKeys) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->PerObjectConfigArrayOfStructKeys).field_0x38
               ,(int *)&(this->PerObjectConfigArrayOfStructKeys).field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->PerObjectConfigArrayOfStructKeys).field_0x38,
               *(int *)&(param_1->PerObjectConfigArrayOfStructKeys).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->PerObjectConfigArrayOfStructKeys,
                (TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->PerObjectConfigArrayOfStructKeys);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  return this;
}

// operator== @ 141859420

bool __thiscall FConfigFile::operator==(FConfigFile *this,FConfigFile *param_1)

{
  ulonglong uVar1;
  FConfigFile *pFVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  FConfigFile *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  FConfigFile *local_60;
  int iStack_58;
  uint uStack_54;
  longlong *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if ((int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4) ==
      (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4)) {
    iVar4 = (int)this->_padding_;
    iStack_58 = 0;
    uStack_54 = 1;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
    iVar8 = iStack_58;
    iStack_3c = iStack_58;
    TStack_80.BaseBitIndex = iStack_58;
    uVar3 = 1;
    if (iVar4 != 0) {
      plVar6 = (longlong *)this->_padding_;
      if ((longlong *)this->_padding_ == (longlong *)0x0) {
        plVar6 = (longlong *)TStack_80.Array;
      }
      uVar3 = (uint)*plVar6;
      while (uVar3 == 0) {
        lVar5 = (longlong)iVar8;
        TStack_80.BaseBitIndex = TStack_80.BaseBitIndex + 0x20;
        iVar8 = iVar8 + 1;
        iStack_3c = iVar4;
        uVar3 = 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1418594fa;
        uVar3 = *(uint *)((longlong)plVar6 + lVar5 * 4 + 4);
      }
      uVar3 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uVar3 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_3c = TStack_80.BaseBitIndex + -1 + (int)lVar5;
      if (iVar4 < iStack_3c) {
        iStack_3c = iVar4;
      }
    }
LAB_1418594fa:
    iVar4 = (int)param_1->_padding_;
    TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_;
    TStack_b0._padding_ = CONCAT44(uVar3,iVar8);
    TStack_80._padding_ = TStack_b0._padding_;
    TStack_80._28_4_ = iStack_3c;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_3c;
    iStack_44 = iStack_58;
    local_40 = iStack_58;
    if (iVar4 != 0) {
      plVar6 = (longlong *)param_1->_padding_;
      if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
        plVar6 = (longlong *)TStack_b0.Array;
      }
      uVar3 = (uint)*plVar6;
      while (uVar3 == 0) {
        lVar5 = (longlong)iStack_58;
        local_40 = local_40 + 0x20;
        iStack_58 = iStack_58 + 1;
        iStack_44 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_1418595ba;
        uVar3 = *(uint *)((longlong)plVar6 + lVar5 * 4 + 4);
      }
      uStack_54 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = local_40 + -1 + (int)lVar5;
      if (iVar4 < iStack_44) {
        iStack_44 = iVar4;
      }
    }
LAB_1418595ba:
    TStack_b0._padding_ = CONCAT44(uStack_54,iStack_58);
    uStack_48 = 0xffffffff;
    TStack_b0.CurrentBitIndex = iStack_44;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    TStack_b0._28_4_ = iStack_3c;
    TStack_b0.BaseBitIndex = local_40;
    iVar4 = iStack_3c;
    local_88 = this;
    local_60 = param_1;
    local_50 = (longlong *)TStack_b0.Array;
    if (iStack_3c < (int)this->_padding_) {
      do {
        pFVar2 = local_88;
        if ((int)*(longlong *)&(TStack_b0.Array)->NumBits <= TStack_b0.CurrentBitIndex) break;
        lVar7 = (longlong)iVar4 * 0x110;
        lVar5 = (longlong)TStack_b0.CurrentBitIndex * 0x110;
        iVar4 = *(int *)(local_88->_padding_ + 8 + lVar7);
        iVar8 = *(int *)(param_1->_padding_ + 8 + lVar5);
        if (iVar4 == iVar8) {
          if (1 < iVar4) {
            iVar4 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(local_88->_padding_ + lVar7),
                               *(wchar_t **)(param_1->_padding_ + lVar5));
            bVar9 = iVar4 == 0;
            goto LAB_14185966a;
          }
        }
        else {
          bVar9 = iVar4 + iVar8 == 1;
LAB_14185966a:
          if (!bVar9) goto LAB_1418596c6;
        }
        bVar9 = FConfigSection::operator==
                          ((FConfigSection *)(pFVar2->_padding_ + 0x10 + lVar7),
                           (FConfigSection *)(param_1->_padding_ + 0x10 + lVar5));
        if (!bVar9) goto LAB_1418596c6;
        TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
        iVar4 = TStack_80.CurrentBitIndex;
      } while (TStack_80.CurrentBitIndex < (int)*(longlong *)&(TStack_80.Array)->NumBits);
    }
    bVar9 = true;
  }
  else {
LAB_1418596c6:
    bVar9 = false;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  return bVar9;
}

// operator!= @ 141859d10

bool __thiscall FConfigFile::operator!=(FConfigFile *this,FConfigFile *param_1)

{
  bool bVar1;
  
  bVar1 = operator==(this,param_1);
  return !bVar1;
}

// operator() @ 14185b5a0

void __thiscall `FConfigFile::UpdateSections'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *this_00;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((int)((*(longlong **)((longlong)this + 0x20))[1] - **(longlong **)((longlong)this + 0x20) >> 1
           ) != 0) {
    pFVar9 = *(FString **)((longlong)this + 0x18);
    this_00 = *(TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                **)this;
    AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    iVar2 = (pFVar9->Data).ArrayNum;
    iVar8 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar10 = L"";
      iVar8 = 0;
    }
    else {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
    iVar8 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(this_00,uVar7,pFVar9);
    ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (iVar8 == -1) {
      pFVar9 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               ::Find(*(TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        **)((longlong)this + 8),*(FString **)((longlong)this + 0x18));
      if (pFVar9 == (FString *)0x0) {
        local_18 = *(undefined8 *)((longlong)this + 0x18);
        local_10 = *(undefined8 *)((longlong)this + 0x20);
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&,TStringBuilderWithBuffer<wchar_t,128>_&>_>
                  (*(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     **)((longlong)this + 8),
                   (TPairInitializer<FString_&,TStringBuilderWithBuffer<wchar_t,128>_&> *)
                   &stack0x00000008,(bool *)&local_18);
      }
      else {
        pwVar10 = (wchar_t *)**(undefined8 **)((longlong)this + 0x20);
        ::FString::AppendChars
                  (pFVar9,pwVar10,
                   (int)((*(undefined8 **)((longlong)this + 0x20))[1] - (longlong)pwVar10 >> 1));
      }
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
    pFVar4 = *(FScriptContainerElement **)((longlong)this + 0x18);
    if (((pFVar3->Data <= pFVar4) &&
        (pFVar4 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    ::FString::FString((FString *)(pFVar3->Data + (longlong)iVar8 * 0x10),(FString *)pFVar4);
  }
  ::FString::Reset(*(FString **)((longlong)this + 0x18),0);
  (*(undefined8 **)((longlong)this + 0x20))[1] = **(undefined8 **)((longlong)this + 0x20);
  return;
}

// operator() @ 14185b750

void __thiscall
`FConfigFile::WriteToStringInternal'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ForAnyElementType FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  int iVar7;
  
  pFVar5 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find(*(TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    **)((longlong)this + 8),param_1);
  if ((pFVar5 != (FString *)0x0) &&
     (this_00 = *(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> **)
                 ((longlong)this + 0x10),
     *(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34)) {
    iVar4 = (param_1->Data).ArrayNum;
    if (iVar4 == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar7 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar6);
    iVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                      (this_00,uVar3,param_1);
    if (iVar4 != 0) {
      iVar7 = (pFVar5->Data).ArrayNum;
      iVar4 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars
                (*(FString **)this,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar4);
      iVar4 = BlankLine.Data.ArrayNum + -1;
      FVar1 = BlankLine.Data.AllocatorInstance;
      if (BlankLine.Data.ArrayNum == 0) {
        iVar4 = 0;
        FVar1.Data = (FScriptContainerElement *)L"";
      }
      bVar2 = ::FString::EndsWith(*(FString **)this,(wchar_t *)FVar1.Data,iVar4,CaseSensitive);
      if (!bVar2) {
        ::FString::AppendChars(*(FString **)this,L"\r\n",2);
      }
    }
  }
  return;
}

// AddMissingProperties @ 14185e7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FConfigFile::AddMissingProperties(FConfigFile *this,FConfigFile *param_1)

{
  FConfigFile *pFVar1;
  ForElementType<FConfigValue_const_*> FVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  FName FVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FConfigSection *this_00;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  FString *pFVar18;
  ForElementType<FConfigValue_const_*> FVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_278 [32];
  longlong *local_258;
  ForElementType<FConfigValue_const_*> local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined1 local_228 [8];
  longlong local_220;
  undefined1 local_218 [20];
  int iStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  FConfigFile *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  FName local_1b8;
  int local_1b0;
  int local_1ac;
  FConfigFile *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined4 local_164;
  undefined4 local_144;
  ForElementType<FConfigValue_const_*> local_140;
  int local_38;
  int local_34;
  ulonglong local_30;
  ulonglong uVar26;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_278;
  uVar12 = (uint)param_1->_padding_;
  TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_;
  uVar26 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar10 = 1;
  uVar21 = uVar26;
  uVar20 = uVar25;
  TStack_1e0.BaseBitIndex = uVar25;
  if (uVar12 != 0) {
    uVar21 = (ulonglong)uVar12;
    plVar16 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar16 = (longlong *)TStack_1e0.Array;
    }
    uVar11 = (uint)*plVar16;
    uVar15 = uVar26;
    uVar22 = uVar26;
    TStack_1e0.BaseBitIndex = uVar24;
    uVar20 = uVar24;
    while (uVar11 == 0) {
      iVar14 = (int)uVar15;
      TStack_1e0.BaseBitIndex = (int)uVar22 + 0x20;
      uVar22 = (ulonglong)(uint)TStack_1e0.BaseBitIndex;
      uVar20 = iVar14 + 1;
      uVar15 = (ulonglong)uVar20;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
      goto LAB_14185e88d;
      uVar11 = *(uint *)((longlong)plVar16 + (longlong)iVar14 * 4 + 4);
    }
    uVar10 = -uVar11 & uVar11;
    uVar21 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_1b0 = (int)lVar7;
    uVar11 = (TStack_1e0.BaseBitIndex - 1U) + local_1b0;
    if ((int)uVar12 < (int)uVar11) {
      uVar11 = uVar12;
    }
    uVar21 = (ulonglong)uVar11;
  }
LAB_14185e88d:
  TStack_1e0._padding_ = CONCAT44(uVar10,uVar20);
  TStack_1e0.CurrentBitIndex = (int)uVar21;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  TStack_1e0._28_4_ = local_164;
  TStack_1a0._padding_ = TStack_1e0._padding_;
  TStack_1a0.BaseBitIndex = TStack_1e0.BaseBitIndex;
  TStack_1a0._28_4_ = local_164;
  TStack_1a0.UnvisitedBitMask = 0xffffffff;
  local_1e8 = param_1;
  local_1a8 = param_1;
  TStack_1a0.Array = TStack_1e0.Array;
  TStack_1a0.CurrentBitIndex = TStack_1e0.CurrentBitIndex;
  if (TStack_1e0.CurrentBitIndex < (int)uVar12) {
    do {
      pFVar18 = (FString *)((longlong)(int)uVar21 * 0x110 + local_1a8->_padding_);
      pFVar1 = (FConfigFile *)(pFVar18 + 1);
      this_00 = FindOrAddSectionInternal(this,pFVar18);
      TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                 *)this_00,
                pFVar18[1].Data.ArrayNum -
                *(int *)((longlong)&pFVar18[4].Data.AllocatorInstance.Data + 4));
      uVar12 = pFVar18[3].Data.ArrayNum;
      unique0x00008e00 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar18 + 2);
      local_218._12_4_ = 1;
      uVar21 = uVar26;
      local_218._8_4_ = uVar25;
      local_1f8 = uVar25;
      if (uVar12 != 0) {
        pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar18[3].Data.AllocatorInstance.Data;
        uVar21 = (ulonglong)uVar12;
        pTVar23 = unique0x00008e00;
        if (pTVar3 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar23 = pTVar3;
        }
        uVar20 = (uint)*(longlong *)(pTVar23->AllocatorInstance).InlineData;
        uVar15 = uVar26;
        uVar22 = uVar26;
        local_1f8 = uVar24;
        local_218._8_4_ = uVar24;
        while (uVar20 == 0) {
          iVar14 = (int)uVar15;
          local_1f8 = (int)uVar22 + 0x20;
          uVar22 = (ulonglong)local_1f8;
          local_218._8_4_ = iVar14 + 1;
          uVar15 = (ulonglong)(uint)local_218._8_4_;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_218._8_4_)
          goto LAB_14185e98d;
          uVar20 = *(uint *)((longlong)(pTVar23->AllocatorInstance).InlineData +
                            (longlong)iVar14 * 4 + 4);
        }
        local_218._12_4_ = -uVar20 & uVar20;
        uVar21 = (ulonglong)(uint)local_218._12_4_ * 2 + 1;
        lVar7 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_1ac = (int)lVar7;
        uVar20 = (local_1f8 - 1) + local_1ac;
        if ((int)uVar12 < (int)uVar20) {
          uVar20 = uVar12;
        }
        uVar21 = (ulonglong)uVar20;
      }
LAB_14185e98d:
      uStack_200 = 0xffffffff;
      uStack_1fc = (uint)uVar21;
      uStack_1f4 = local_144;
      TStack_1e0._padding_ = CONCAT44(local_218._12_4_,local_218._8_4_);
      TStack_1e0.UnvisitedBitMask = 0xffffffff;
      TStack_1e0._28_4_ = local_144;
      TStack_1e0.BaseBitIndex = local_1f8;
      local_218._0_8_ = pFVar1;
      local_1e8 = pFVar1;
      TStack_1e0.Array = unique0x00008e00;
      TStack_1e0.CurrentBitIndex = uStack_1fc;
      if ((int)uStack_1fc < (int)uVar12) {
        do {
          FVar4 = *(FName *)(*(longlong *)&local_1e8->_padding_ + (longlong)(int)uVar21 * 0x28);
          local_1b8 = FVar4;
          uVar12 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
          uVar21 = uVar26;
          if ((int)this_00->_padding_ != *(int *)((longlong)&this_00->_padding_ + 4)) {
            plVar16 = &this_00->_padding_;
            if ((longlong *)this_00->_padding_ != (longlong *)0x0) {
              plVar16 = (longlong *)this_00->_padding_;
            }
            iVar14 = *(int *)((longlong)plVar16 +
                             (ulonglong)((int)this_00->_padding_ - 1U & FVar4.Number + uVar12) * 4);
            if (iVar14 != -1) {
              do {
                uVar21 = this_00->_padding_ + (longlong)iVar14 * 0x28;
                if (*(FName *)(this_00->_padding_ + (longlong)iVar14 * 0x28) == FVar4) break;
                iVar14 = *(int *)(uVar21 + 0x20);
                uVar21 = uVar26;
              } while (iVar14 != -1);
            }
          }
          uVar15 = uVar21 + 8;
          if (uVar21 == 0) {
            uVar15 = uVar26;
          }
          if (uVar15 == 0) {
            local_140.SecondaryData = (ForElementType<FConfigValue_const_*>)0x0;
            local_38 = 0;
            local_34 = 0x20;
            TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                      ((TBaseKeyIterator<1> *)local_218,
                       (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                        *)pFVar1,local_1b8);
            uVar6 = local_218._0_8_;
            if (local_218._16_4_ != -1) {
              lVar7 = CONCAT44(local_218._12_4_,local_218._8_4_);
              iVar13 = local_218._16_4_;
              iVar14 = iStack_204;
              do {
                local_220 = *(longlong *)
                             (TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)uVar6 + ((longlong)iVar13 * 5 + 1) * 8;
                FVar19 = (ForElementType<FConfigValue_const_*>)&local_140;
                if (local_140.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
                  FVar19 = local_140.SecondaryData;
                }
                if ((ulonglong)FVar19 <= &local_220) {
                  FVar19 = (ForElementType<FConfigValue_const_*>)&local_140;
                  if (local_140.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
                    FVar19 = local_140.SecondaryData;
                  }
                  if (&local_220 < (longlong *)((longlong)FVar19 + (longlong)local_34 * 8)) {
                    local_240 = (longlong)local_38;
                    local_238 = 8;
                    local_258 = &local_220;
                    local_250 = (ForElementType<FConfigValue_const_*>)&local_140;
                    if (local_140.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
                      local_250 = local_140.SecondaryData;
                    }
                    local_248 = (longlong)local_34;
                    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar9) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                }
                iVar13 = local_38;
                if (local_38 == local_34) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FConfigValue_const_*>_>
                                     (0x808,&local_140,&local_34);
                }
                local_38 = iVar13 + 1;
                FVar19 = (ForElementType<FConfigValue_const_*>)&local_140;
                if (local_140.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
                  FVar19 = local_140.SecondaryData;
                }
                *(longlong *)((longlong)FVar19 + (longlong)iVar13 * 8) = local_220;
                stack0xfffffffffffffdf8 =
                     (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(iStack_204,iVar14);
                if (iVar14 == -1) break;
                lVar5 = *(longlong *)
                         (TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)uVar6;
                iVar13 = iVar14;
                do {
                  iVar14 = *(int *)(lVar5 + 0x20 + (longlong)iVar13 * 0x28);
                  if (*(longlong *)(lVar5 + (longlong)iVar13 * 0x28) == lVar7) break;
                  iVar13 = iVar14;
                } while (iVar14 != -1);
                stack0xfffffffffffffdf8 =
                     (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(iVar14,iVar13);
              } while (iVar13 != -1);
            }
            FVar19 = (ForElementType<FConfigValue_const_*>)&local_140;
            if (local_140.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
              FVar19 = local_140.SecondaryData;
            }
            iVar14 = local_38 / 2;
            if (0 < iVar14) {
              puVar17 = (undefined8 *)((longlong)FVar19 + (longlong)(local_38 + -1) * 8);
              uVar21 = uVar26;
              do {
                uVar6 = *(undefined8 *)((longlong)FVar19 + uVar21 * 8);
                *(undefined8 *)((longlong)FVar19 + uVar21 * 8) = *puVar17;
                uVar21 = uVar21 + 1;
                *puVar17 = uVar6;
                puVar17 = puVar17 + -1;
              } while ((longlong)uVar21 < (longlong)iVar14);
            }
            iVar14 = local_38;
            FVar19 = (ForElementType<FConfigValue_const_*>)&local_140;
            if (local_140.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
              FVar19 = local_140.SecondaryData;
            }
            FVar2 = (ForElementType<FConfigValue_const_*>)
                    ((longlong)FVar19 + (longlong)local_38 * 8);
            while( true ) {
              if (local_38 != iVar14) {
                local_228[0] = 0;
                `TCheckedPointerIterator<FConfigValue_const_*,int,0>::operator!='::__l2::<lambda_1>
                ::operator()(local_228);
              }
              if (FVar19 == FVar2) break;
              TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::Emplace<FName_const_&,FConfigValue_const_&>
                        ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                          *)this_00,&local_1b8,*(FConfigValue **)FVar19);
              this->Dirty = true;
              FVar19 = (ForElementType<FConfigValue_const_*>)((longlong)FVar19 + 8);
            }
            if (local_140.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
              FMemory::Free((void *)local_140.SecondaryData);
            }
          }
          TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
          uVar21 = (ulonglong)(uint)TStack_1e0.CurrentBitIndex;
        } while (TStack_1e0.CurrentBitIndex < (int)*(longlong *)&(TStack_1e0.Array)->NumBits);
      }
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
      uVar21 = (ulonglong)(uint)TStack_1a0.CurrentBitIndex;
    } while (TStack_1a0.CurrentBitIndex < (int)*(longlong *)&(TStack_1a0.Array)->NumBits);
  }
  return;
}

// AddToSection @ 141861790

bool __thiscall
FConfigFile::AddToSection(FConfigFile *this,wchar_t *param_1,FName param_2,FString *param_3)

{
  FConfigCommandStream *this_00;
  uint uVar1;
  int iVar2;
  FConfigSection *this_01;
  FConfigExpansion *pFVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  wchar_t *local_res8;
  FName local_res18 [2];
  FString *local_68;
  FString local_60;
  FConfigValue local_50;
  
  local_res18[0] = param_2;
  ::FString::FString(&local_60,param_1);
  this_01 = FindOrAddSectionInternal(this,&local_60);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_50.SavedValue,param_3);
  iVar2 = local_50.SavedValue.Data.ArrayNum;
  local_50.ValueType = Combined;
  local_50.bExpandOnDemand = false;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_50.SavedValue.Data.ArrayNum != 0) {
    FVar4.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
  }
  local_50.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar4.Data,0);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (iVar2 != 0) {
    FVar4.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
  }
  pFVar3 = FindNextExpansion((wchar_t *)FVar4.Data,&local_res8);
  local_50.bExpandOnDemand = pFVar3 != (FConfigExpansion *)0x0;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)this_01,local_res18,&local_50);
  if (local_50.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.SavedValue.Data.AllocatorInstance.Data);
  }
  this->Dirty = true;
  this_00 = this->ChangeTracker;
  if (this_00 != (FConfigCommandStream *)0x0) {
    ::FString::FString(&local_60,param_1);
    iVar2 = local_60.Data.ArrayNum + -1;
    FVar4.Data = local_60.Data.AllocatorInstance.Data;
    if (local_60.Data.ArrayNum == 0) {
      iVar2 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar4.Data);
    iVar2 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                        *)this_00,uVar1,&local_60);
    if ((iVar2 == -1) ||
       (lVar5 = (longlong)iVar2 * 0xb8 + *(longlong *)&this_00->_padding_, lVar5 == 0)) {
      local_68 = &local_60;
      TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                  *)this_00,(uint)&local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar1,
                 (bool *)&local_68);
      lVar5 = (longlong)(int)local_res8 * 0xb8 + *(longlong *)&this_00->_padding_;
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_50.SavedValue,param_3);
    local_50.ValueType = ArrayAdd;
    local_50.bExpandOnDemand = false;
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_50.SavedValue.Data.ArrayNum != 0) {
      FVar4.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
    }
    local_50.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar4.Data,0);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_50.SavedValue.Data.ArrayNum != 0) {
      FVar4.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar3 = FindNextExpansion((wchar_t *)FVar4.Data,&local_res8);
    local_50.bExpandOnDemand = pFVar3 != (FConfigExpansion *)0x0;
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)(lVar5 + 0x10),local_res18,&local_50);
    if (local_50.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.SavedValue.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// AddUniqueToSection @ 141861be0

bool __thiscall
FConfigFile::AddUniqueToSection(FConfigFile *this,wchar_t *param_1,FName param_2,FString *param_3)

{
  FConfigCommandStream *this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  FConfigSection *this_01;
  FConfigExpansion *pFVar4;
  FConfigValue *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FName local_res18;
  int local_68 [2];
  FString *local_60;
  FString local_58;
  FConfigValue local_48;
  
  local_res18 = param_2;
  ::FString::FString(&local_58,param_1);
  this_01 = FindOrAddSectionInternal(this,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_48.SavedValue,param_3);
  iVar3 = local_48.SavedValue.Data.ArrayNum;
  local_48.ValueType = Combined;
  local_48.bExpandOnDemand = false;
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_48.SavedValue.Data.ArrayNum != 0) {
    FVar6.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
  }
  local_48.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar6.Data,0);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    FVar6.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
  }
  pFVar4 = FindNextExpansion((wchar_t *)FVar6.Data,(wchar_t **)&local_60);
  local_48.bExpandOnDemand = pFVar4 != (FConfigExpansion *)0x0;
  pFVar5 = TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::FindPair((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                       *)this_01,local_res18,&local_48);
  if (local_48.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SavedValue.Data.AllocatorInstance.Data);
  }
  if (pFVar5 == (FConfigValue *)0x0) {
    ::FString::FString(&local_48.SavedValue,param_3);
    iVar3 = local_48.SavedValue.Data.ArrayNum;
    local_48.ValueType = Combined;
    local_48.bExpandOnDemand = false;
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_48.SavedValue.Data.ArrayNum != 0) {
      FVar6.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
    }
    local_48.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar6.Data,0);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (iVar3 != 0) {
      FVar6.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar4 = FindNextExpansion((wchar_t *)FVar6.Data,(wchar_t **)&local_60);
    local_48.bExpandOnDemand = pFVar4 != (FConfigExpansion *)0x0;
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)this_01,&local_res18,&local_48);
    if (local_48.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.SavedValue.Data.AllocatorInstance.Data);
    }
    this->Dirty = true;
    this_00 = this->ChangeTracker;
    if (this_00 != (FConfigCommandStream *)0x0) {
      ::FString::FString(&local_58,param_1);
      iVar3 = local_58.Data.ArrayNum + -1;
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.ArrayNum == 0) {
        iVar3 = 0;
        FVar6.Data = (FScriptContainerElement *)L"";
      }
      uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar6.Data);
      iVar3 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                          *)this_00,uVar2,&local_58);
      if ((iVar3 == -1) ||
         (lVar7 = (longlong)iVar3 * 0xb8 + *(longlong *)&this_00->_padding_, lVar7 == 0)) {
        local_60 = &local_58;
        TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                    *)this_00,(uint)local_68,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar2,
                   (bool *)&local_60);
        lVar7 = (longlong)local_68[0] * 0xb8 + *(longlong *)&this_00->_padding_;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      ::FString::FString(&local_48.SavedValue,param_3);
      local_48.ValueType = ArrayAddUnique;
      local_48.bExpandOnDemand = false;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_48.SavedValue.Data.ArrayNum != 0) {
        FVar6.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
      }
      local_48.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar6.Data,0);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_48.SavedValue.Data.ArrayNum != 0) {
        FVar6.Data = local_48.SavedValue.Data.AllocatorInstance.Data;
      }
      pFVar4 = FindNextExpansion((wchar_t *)FVar6.Data,(wchar_t **)&local_60);
      local_48.bExpandOnDemand = pFVar4 != (FConfigExpansion *)0x0;
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName_const_&,FConfigValue>
                ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  *)(lVar7 + 0x10),&local_res18,&local_48);
      if (local_48.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.SavedValue.Data.AllocatorInstance.Data);
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// AppendExportedPropertyLine @ 141862620

void __cdecl
FConfigFile::AppendExportedPropertyLine(FString *param_1,FString *param_2,FString *param_3)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  wchar_t *pwVar9;
  bool bVar10;
  FString local_18;
  
  iVar8 = (param_2->Data).ArrayNum;
  iVar7 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar7 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7);
  ::FString::AppendChar(param_1,L'=');
  iVar8 = (param_3->Data).ArrayNum;
  bVar2 = false;
  bVar3 = false;
  if (iVar8 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pFVar5 = (FScriptContainerElement *)pwVar9;
  sVar4 = *pwVar9;
  if (*pwVar9 == 0) {
LAB_141862701:
    iVar7 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar7);
  }
  else {
    do {
      while( true ) {
        sVar1 = *(short *)(pFVar5 + 2);
        if (sVar4 == 0x22) {
          if (bVar2) break;
          bVar3 = !bVar3;
          bVar10 = pFVar5 == (FScriptContainerElement *)pwVar9;
          goto LAB_1418626dc;
        }
        if (((sVar4 != 0x5c) || (!bVar3)) || (bVar2)) break;
        bVar2 = true;
LAB_141862756:
        if (sVar1 == 0) goto LAB_141862793;
        if (!bVar2) {
LAB_1418626e2:
          if ((sVar1 == 0xd) || (sVar1 == 10)) goto LAB_141862793;
        }
        pFVar5 = pFVar5 + 2;
        sVar4 = sVar1;
        if (sVar1 == 0) goto LAB_141862701;
      }
      bVar2 = false;
      if (sVar4 == 0x20) {
        if (pFVar5 != (FScriptContainerElement *)pwVar9) {
          bVar10 = sVar1 == 0;
LAB_1418626dc:
          if (!bVar10) goto LAB_1418626e2;
        }
        break;
      }
      if (sVar4 == 0x22) {
        bVar10 = pFVar5 == (FScriptContainerElement *)pwVar9;
        goto LAB_1418626dc;
      }
      if (sVar4 == 0x5c) goto LAB_141862756;
      if (((sVar4 - 0x7bU & 0xfffd) == 0) && (!bVar3)) break;
      if ((sVar4 != 0x2f) || (sVar1 != 0x2f)) goto LAB_1418626e2;
      pFVar5 = pFVar5 + 2;
      sVar4 = sVar1;
    } while (bVar3);
LAB_141862793:
    ::FString::AppendChar(param_1,L'\"');
    local_18.Data.ArrayNum = (param_3->Data).ArrayNum;
    lVar6 = (longlong)local_18.Data.ArrayNum;
    pFVar5 = (param_3->Data).AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.Data.ArrayNum == 0) {
      local_18.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
                 &local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,pFVar5,lVar6 * 2);
    }
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_18,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    iVar8 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar8);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(param_1,L'\"');
  }
  ::FString::AppendChars(param_1,L"\r\n",LineTerminatorLen);
  return;
}

// ApplyFile @ 141863300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FConfigFile::ApplyFile(FConfigFile *this,FConfigCommandStream *param_1)

{
  FName *pFVar1;
  ulonglong uVar2;
  int iVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  FName _Src;
  code *pcVar7;
  FConfigCommandStream *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FConfigSection *this_00;
  longlong lVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  FString *pFVar21;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  uint local_1e4;
  FString local_1e0;
  FConfigCommandStream *local_1d0;
  FName local_1c8;
  FConfigFile *local_1c0;
  FConfigCommandStream *local_1b8;
  int iStack_1b0;
  uint uStack_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_190;
  undefined4 uStack_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  FName local_178;
  FString *local_170;
  FName local_168;
  FString *local_160;
  FString *local_158;
  int iStack_150;
  uint uStack_14c;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  undefined4 uStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  FString *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  FConfigCommandStream *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TStringView<wchar_t> local_b8 [2];
  undefined4 local_8c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  iVar3 = (int)param_1->_padding_;
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_;
  iStack_1b0 = 0;
  uStack_1ac = 1;
  local_198 = 0;
  iStack_19c = 0;
  if (iVar3 != 0) {
    plVar18 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar18 = (longlong *)pTVar20;
    }
    uVar17 = (uint)*plVar18;
    local_198 = 0;
    while (uVar17 == 0) {
      lVar12 = (longlong)iStack_1b0;
      local_198 = local_198 + 0x20;
      iStack_1b0 = iStack_1b0 + 1;
      iStack_19c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1b0) goto LAB_1418633cd;
      uVar17 = *(uint *)((longlong)plVar18 + lVar12 * 4 + 4);
    }
    uStack_1ac = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_1ac * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_188 = (int)lVar12;
    iStack_19c = local_198 + -1 + local_188;
    if (iVar3 < iStack_19c) {
      iStack_19c = iVar3;
    }
  }
LAB_1418633cd:
  uVar17 = (uint)param_1->_padding_;
  uVar16 = uVar17 & 0xffffffe0;
  iStack_190 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  TStack_f0._padding_ = CONCAT44(uStack_1ac,iStack_1b0);
  uStack_1a0 = 0xffffffff;
  TStack_f0.CurrentBitIndex = iStack_19c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_f0._28_4_ = local_8c;
  TStack_f0.BaseBitIndex = local_198;
  uStack_d0 = CONCAT44(uStack_18c,iStack_190);
  local_1e4 = uVar17;
  local_1d0 = param_1;
  local_1c0 = this;
  local_1b8 = param_1;
  local_1a8 = (longlong *)pTVar20;
  local_f8 = param_1;
  TStack_f0.Array = pTVar20;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  uVar11 = (uint)param_1->_padding_;
  if (uVar17 != uVar11) {
    plVar18 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar18 = (longlong *)pTVar20;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)plVar18 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar11;
      local_1e4 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_1418634e1;
      uVar17 = *(uint *)((longlong)plVar18 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_184 = (int)lVar12;
    uVar17 = local_184 + -1 + uVar16;
    local_1e4 = uVar17;
    if ((int)uVar11 < (int)uVar17) {
      uVar17 = uVar11;
      local_1e4 = uVar11;
    }
  }
LAB_1418634e1:
  do {
    pFVar8 = local_f8;
    if ((int)local_f8->_padding_ - *(int *)((longlong)&local_f8->_padding_ + 4) != (int)uStack_d0) {
      local_1e8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FConfigCommandStreamSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1e8);
    }
    if (((TStack_f0.CurrentBitIndex == uVar17) && (TStack_f0.Array == pTVar20)) &&
       (pFVar8 == param_1)) {
      return true;
    }
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._0_8_ = 0;
    pFVar21 = (FString *)((longlong)TStack_f0.CurrentBitIndex * 0xb8 + pFVar8->_padding_);
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    iVar14 = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_160 = pFVar21;
    this_00 = FindOrAddSectionInternal(this,pFVar21);
    FixupArrayOfStructKeysForSection<FConfigSection>
              (this_00,pFVar21,&this->PerObjectConfigArrayOfStructKeys);
    iVar3 = pFVar21[3].Data.ArrayNum;
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar21 + 2);
    local_170 = pFVar21 + 1;
    uStack_14c = 1;
    local_138 = 0;
    iStack_13c = local_138;
    if (iVar3 != 0) {
      pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar21[3].Data.AllocatorInstance.Data;
      pTVar19 = pTVar20;
      if (pTVar4 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar4;
      }
      uVar17 = *(uint *)&((ForAnyElementType *)(pTVar19->AllocatorInstance).InlineData)->Data;
      local_138 = 0;
      iVar14 = 0;
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar14;
        local_138 = local_138 + 0x20;
        iVar14 = iVar14 + 1;
        iStack_13c = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14186361d;
        uVar17 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar19->AllocatorInstance).InlineData)->Data +
                          lVar12 * 4 + 4);
      }
      uStack_14c = -uVar17 & uVar17;
      uVar2 = (ulonglong)uStack_14c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_180 = (int)lVar12;
      iStack_13c = local_138 + -1 + local_180;
      if (iVar3 < iStack_13c) {
        iStack_13c = iVar3;
      }
    }
LAB_14186361d:
    uVar17 = pFVar21[3].Data.ArrayNum;
    iStack_134 = iStack_19c;
    iStack_130 = pFVar21[1].Data.ArrayNum -
                 *(int *)((longlong)&pFVar21[4].Data.AllocatorInstance.Data + 4);
    uVar16 = uVar17 & 0xffffffe0;
    TStack_120._padding_ = CONCAT44(uStack_14c,iVar14);
    uStack_140 = 0xffffffff;
    TStack_120.CurrentBitIndex = iStack_13c;
    TStack_120.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar17 >> 5;
    TStack_120._28_4_ = iStack_19c;
    TStack_120.BaseBitIndex = local_138;
    uStack_100 = CONCAT44(uStack_12c,iStack_130);
    local_158 = local_170;
    iStack_150 = iVar14;
    local_148 = pTVar20;
    local_128 = local_170;
    TStack_120.Array = pTVar20;
    if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    uVar11 = pFVar21[3].Data.ArrayNum;
    param_1 = local_1d0;
    if (uVar17 != uVar11) {
      pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)pFVar21[3].Data.AllocatorInstance.Data;
      pTVar19 = pTVar20;
      if (pTVar4 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar4;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) &
               *(uint *)((longlong)
                         &((ForAnyElementType *)(pTVar19->AllocatorInstance).InlineData)->Data +
                        (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar12 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_141863730;
        uVar17 = *(uint *)((longlong)
                           &((ForAnyElementType *)(pTVar19->AllocatorInstance).InlineData)->Data +
                          lVar12 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_17c = (int)lVar12;
      uVar17 = local_17c + -1 + uVar16;
      if ((int)uVar11 < (int)uVar17) {
        uVar17 = uVar11;
      }
    }
LAB_141863730:
    while( true ) {
      pFVar21 = local_128;
      if ((local_128->Data).ArrayNum -
          *(int *)((longlong)&local_128[3].Data.AllocatorInstance.Data + 4) != (int)uStack_100) {
        local_1e7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1e7);
      }
      if (((TStack_120.CurrentBitIndex == uVar17) && (TStack_120.Array == pTVar20)) &&
         (pFVar21 == local_170)) break;
      pFVar5 = (pFVar21->Data).AllocatorInstance.Data;
      local_1e0.Data.ArrayNum =
           *(int *)(pFVar5 + (longlong)TStack_120.CurrentBitIndex * 0x28 + 0x10);
      lVar12 = (longlong)local_1e0.Data.ArrayNum;
      pFVar1 = (FName *)(pFVar5 + (longlong)TStack_120.CurrentBitIndex * 0x28);
      FVar6 = *pFVar1;
      _Src = pFVar1[1];
      local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8 = FVar6;
      if (local_1e0.Data.ArrayNum == 0) {
        local_1e0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1e0.Data.ArrayNum,0,(ForAnyElementType *)&local_1e0,
                   local_1e0.Data.ArrayNum,&local_1e0.Data.ArrayMax);
        memcpy(local_1e0.Data.AllocatorInstance.Data,(void *)_Src,lVar12 * 2);
      }
      param_1 = local_1d0;
      uVar16 = pFVar1[3].Number;
      if (local_1d0->bIsSavedConfigFile != '\0') {
        uVar11 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
        if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_88.Hash.SecondaryData;
          }
          for (iVar3 = *(int *)((longlong)FVar13 +
                               (ulonglong)(local_88.HashSize - 1U & FVar6.Number + uVar11) * 4);
              iVar3 != -1; iVar3 = *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar3 * 0x10)) {
            if (*(FName *)(local_88.Elements._0_8_ + (longlong)iVar3 * 0x10) == FVar6)
            goto LAB_141863894;
          }
        }
        local_168 = FVar6;
        if ((int)this_00->_padding_ != *(int *)((longlong)&this_00->_padding_ + 4)) {
          uVar11 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                               *)this_00,uVar11 + local_1c8.Number,&local_168);
        }
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&local_88,&local_178,(bool *)&local_1c8);
      }
LAB_141863894:
      local_c8 = (local_160->Data).AllocatorInstance.Data;
      iVar3 = (local_160->Data).ArrayNum;
      iStack_c0 = iVar3 + -1;
      if (iVar3 == 0) {
        iStack_c0 = 0;
      }
      local_b8[0]._12_4_ = uStack_bc;
      local_b8[0].Size = iStack_c0;
      local_b8[0].DataPtr = (wchar_t *)local_c8;
      ProcessCommand(local_1c0,this_00,local_b8,(EValueType)uVar16,FVar6,&local_1e0);
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_;
    this = local_1c0;
    uVar17 = local_1e4;
  } while( true );
}

// Cleanup @ 141866ad0

void __thiscall FConfigFile::Cleanup(FConfigFile *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  bVar3 = 1 < (int)this->_padding_;
  if (!bVar3) {
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar3) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x000141866b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  return;
}

// Combine @ 141867220

bool __thiscall FConfigFile::Combine(FConfigFile *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = FillFileFromDisk<FConfigFile>(this,param_1,true);
  return bVar1;
}

// CombineFromBuffer @ 141867340

void __thiscall FConfigFile::CombineFromBuffer(FConfigFile *this,FString *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  FillFileFromBuffer<FConfigFile>(this,&local_18,true,param_2);
  return;
}

// DoesSectionExist @ 14186a380

bool __thiscall FConfigFile::DoesSectionExist(FConfigFile *this,wchar_t *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar4.Data);
  iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar1,&local_18);
  lVar5 = 0;
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0x110 + this->_padding_;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  lVar2 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar2 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return lVar2 != 0;
}

// Dump @ 14186aa10

void __thiscall FConfigFile::Dump(FConfigFile *this,FOutputDevice *param_1)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *this_00;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  FName local_res18 [2];
  FString local_148;
  FString local_138;
  TArray<FConfigValue,TSizedDefaultAllocator<32>_> local_128;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  FString local_f8;
  FString local_e8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  longlong *local_c8;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_a0;
  FConfigFile *local_98;
  undefined2 local_90;
  FString local_88;
  FString local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  FOutputDevice::Log(param_1,L"FConfigFile::Dump");
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)this);
  local_90 = 0;
  stack0xffffffffffffff48 = local_68._16_16_;
  local_c8 = (longlong *)local_68._0_8_;
  auStack_c0._0_8_ = local_68._8_8_;
  local_a8 = local_48;
  pTStack_a0 = pTStack_40;
  uVar12 = local_68._24_8_ >> 0x20;
  local_98 = this;
  if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      plVar8 = local_c8;
      FOutputDevice::LogfImpl(param_1,L"[%s]");
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      this_00 = (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)((longlong)(int)uVar12 * 0x110 + *plVar8 + 0x10);
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::GetKeys<TSizedDefaultAllocator<32>_>
                ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  *)this_00,&local_d8);
      for (uVar17 = 0; (uVar12 = 0, -1 < (int)uVar17 && ((int)uVar17 < local_d8.ArrayNum));
          uVar17 = uVar17 + 1) {
        uVar10 = 0;
        if ((int)uVar17 < local_d8.ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_res18[0] = *(FName *)(local_d8.AllocatorInstance.Data + (longlong)(int)uVar17 * 8);
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0;
        TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
        ::MultiFind<TSizedDefaultAllocator<32>_>(this_00,local_res18[0],&local_128,true);
        uVar13 = (ulonglong)local_128.ArrayNum;
        if (local_128.ArrayNum < 2) {
          if ((local_128.ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_128.AllocatorInstance.Data[0x15] == (FScriptContainerElement)0x0) {
            iVar11 = *(int *)(local_128.AllocatorInstance.Data + 8);
            bVar6 = true;
            pvVar1 = *(void **)local_128.AllocatorInstance.Data;
            local_108.Data = (FScriptContainerElement *)0x0;
            local_100 = iVar11;
            if (iVar11 == 0) {
              local_fc = 0;
              FVar15.Data = local_108.Data;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar11,0,&local_108,iVar11,&local_fc);
              memcpy(local_108.Data,pvVar1,(longlong)iVar11 * 2);
              FVar15.Data = local_108.Data;
              iVar11 = local_100;
            }
          }
          else {
            bVar7 = true;
            local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_e8.Data.ArrayNum = 0;
            local_e8.Data.ArrayMax = 0;
            FConfigValue::ExpandValue((FString *)local_128.AllocatorInstance.Data,&local_e8);
            FVar15.Data = local_e8.Data.AllocatorInstance.Data;
            iVar11 = local_e8.Data.ArrayNum;
          }
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.Data.ArrayNum = iVar11;
          if (iVar11 == 0) {
            local_138.Data.ArrayNum = 0;
            local_138.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar11,0,(ForAnyElementType *)&local_138,iVar11,&local_138.Data.ArrayMax)
            ;
            memcpy(local_138.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar11 * 2);
          }
          if ((bVar6) && (bVar6 = false, local_108.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_108.Data);
          }
          if ((bVar7) &&
             (bVar7 = false, local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
             ) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          ::FString::ReplaceCharWithEscapedCharInline
                    (&local_138,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
          FVar15.Data = local_138.Data.AllocatorInstance.Data;
          local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.Data.ArrayNum = 0;
          local_138.Data.ArrayMax = 0;
          ::FName::ToString(local_res18,&local_78);
          FOutputDevice::LogfImpl(param_1,L"\t%s=%s");
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (FVar15.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar15.Data);
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar18 = uVar12;
          if (0 < local_128.ArrayNum) {
            do {
              uVar14 = (uint)uVar12;
              uVar10 = 0;
              if ((int)uVar14 < (int)uVar13) {
                uVar10 = ~uVar14 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar16 = local_128.AllocatorInstance.Data + uVar18;
              if (pFVar16[0x15] == (FScriptContainerElement)0x0) {
                iVar11 = *(int *)(pFVar16 + 8);
                pvVar1 = *(void **)pFVar16;
                bVar4 = true;
                local_118.Data = (FScriptContainerElement *)0x0;
                local_110 = iVar11;
                if (iVar11 == 0) {
                  local_10c = 0;
                  FVar15.Data = local_118.Data;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar11,0,&local_118,iVar11,&local_10c);
                  memcpy(local_118.Data,pvVar1,(longlong)iVar11 * 2);
                  FVar15.Data = local_118.Data;
                  iVar11 = local_110;
                }
              }
              else {
                bVar5 = true;
                local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_f8.Data.ArrayNum = 0;
                local_f8.Data.ArrayMax = 0;
                FConfigValue::ExpandValue((FString *)pFVar16,&local_f8);
                FVar15.Data = local_f8.Data.AllocatorInstance.Data;
                iVar11 = local_f8.Data.ArrayNum;
              }
              local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148.Data.ArrayNum = iVar11;
              if (iVar11 == 0) {
                local_148.Data.ArrayNum = 0;
                local_148.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar11,0,(ForAnyElementType *)&local_148,iVar11,
                           &local_148.Data.ArrayMax);
                memcpy(local_148.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar11 * 2);
              }
              if ((bVar4) && (bVar4 = false, local_118.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_118.Data);
              }
              if ((bVar5) &&
                 (bVar5 = false,
                 local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              ::FString::ReplaceCharWithEscapedCharInline
                        (&local_148,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
              FVar15.Data = local_148.Data.AllocatorInstance.Data;
              local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_148.Data.ArrayNum = 0;
              local_148.Data.ArrayMax = 0;
              ::FName::ToString(local_res18,&local_88);
              FOutputDevice::LogfImpl(param_1,L"\t%s[%i]=%s");
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (FVar15.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar15.Data);
              }
              if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_148.Data.AllocatorInstance.Data);
              }
              uVar13 = local_128._8_8_ & 0xffffffff;
              uVar12 = (ulonglong)(uVar14 + 1);
              uVar18 = uVar18 + 0x18;
            } while ((int)(uVar14 + 1) < local_128.ArrayNum);
          }
        }
        DestructItems<FConfigValue,int>
                  ((FConfigValue *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
        if ((FConfigValue *)local_128.AllocatorInstance.Data != (FConfigValue *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
      }
      FOutputDevice::Log(param_1,L"\r\n");
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
      uVar12 = (ulonglong)uStack_ac;
    } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      uVar17 = (int)local_98->_padding_ - *(int *)((longlong)&local_98->_padding_ + 4);
      if (uVar17 < 4) {
        iVar11 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar17) && ((int)local_98->_padding_ < iVar11)) ||
         (iVar11 < (int)local_98->_padding_)) {
        *(int *)&local_98->_padding_ = iVar11;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  *)local_98);
      }
    }
  }
  return;
}

// FillFileFromBuffer @ 14186d170

void __thiscall
FConfigFile::FillFileFromBuffer
          (FConfigFile *this,TStringView<wchar_t> *param_1,bool param_2,FString *param_3)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FillFileFromBuffer<FConfigFile>(this,&local_18,param_2,param_3);
  return;
}

// FillFileFromDisk @ 14186d1b0

bool __thiscall FConfigFile::FillFileFromDisk(FConfigFile *this,FString *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  FString FStack_58;
  FString FStack_48;
  FScriptContainerElement *pFStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> TStack_28;
  
  FStack_58.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar6 = (longlong)FStack_58.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FStack_58.Data.ArrayNum == 0) {
    FStack_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_58.Data.ArrayNum,0,(ForAnyElementType *)&FStack_58,FStack_58.Data.ArrayNum
               ,&FStack_58.Data.ArrayMax);
    memcpy(FStack_58.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  bVar2 = OverrideFileFromCommandline(&FStack_58);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (FStack_58.Data.ArrayNum != 0) {
    FVar5.Data = FStack_58.Data.AllocatorInstance.Data;
  }
  bVar3 = LoadConfigFileWrapper((wchar_t *)FVar5.Data,&FStack_48,bVar2);
  if (bVar3) {
    pFStack_38 = FStack_48.Data.AllocatorInstance.Data;
    iStack_30 = FStack_48.Data.ArrayNum + -1;
    if (FStack_48.Data.ArrayNum == 0) {
      iStack_30 = 0;
    }
    TStack_28._12_4_ = uStack_2c;
    TStack_28.Size = iStack_30;
    TStack_28.DataPtr = (wchar_t *)FStack_48.Data.AllocatorInstance.Data;
    FillFileFromBuffer<FConfigFile>(this,&TStack_28,param_2,param_1);
    bVar2 = true;
  }
  else {
    if ((bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bFoundOverride",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                           ,0x837,L"Failed to Load config override %s"), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    bVar2 = false;
  }
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// FindOrAddConfigSection @ 14186e610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConfigSection * __thiscall FConfigFile::FindOrAddConfigSection(FConfigFile *this,FString *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  FConfigSection *pFVar4;
  undefined1 auStackY_178 [32];
  TPairInitializer<FString_const_&,FConfigSection_&&> TStack_148;
  undefined1 *puStack_138;
  undefined1 auStack_128 [32];
  void *pvStack_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  void *pvStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [32];
  void *pvStack_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *pvStack_98;
  undefined4 uStack_90;
  ForAnyElementType FStack_88;
  undefined8 uStack_80;
  TBitArray<FDefaultBitArrayAllocator> TStack_78;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *pvStack_48;
  undefined4 uStack_40;
  undefined1 uStack_38;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  pFVar4 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                   *)this,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (pFVar4 == (FConfigSection *)0x0) {
    uStack_fc = 0x80;
    auStack_128._0_8_ = (FScriptContainerElement *)0x0;
    auStack_128._8_8_ = 0;
    pvStack_108 = (void *)0x0;
    uStack_100 = 0;
    uStack_f4 = 0;
    pvStack_e8 = (void *)0x0;
    uStack_e0 = 0;
    auStack_d8._0_8_ = (FScriptContainerElement *)0x0;
    auStack_d8._8_8_ = 0;
    pvStack_b8 = (void *)0x0;
    uStack_b0 = 0;
    uStack_a4 = 0;
    pvStack_98 = (void *)0x0;
    uStack_90 = 0;
    FStack_88.Data = (FScriptContainerElement *)0x0;
    uStack_80 = 0;
    TStack_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    TStack_78.NumBits = 0;
    uStack_54 = 0;
    pvStack_48 = (void *)0x0;
    uStack_40 = 0;
    uStack_f8 = 0xffffffff;
    uStack_ac = 0x80;
    uStack_a8 = 0xffffffff;
    TStack_78.MaxBits = 0x80;
    uStack_58 = 0xffffffff;
    uStack_38 = 1;
    AcquireSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
    puStack_138 = auStack_128;
    TStack_148.Value = (FConfigSection *)param_1;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FConfigSection_&&>_>
              ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)this,&TStack_148,(bool *)&TStack_148.Value);
    lVar1 = this->_padding_;
    ReleaseSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
    uStack_40 = 0;
    if (pvStack_48 != (void *)0x0) {
      FMemory::Free(pvStack_48);
    }
    uVar3 = uStack_80 >> 0x20;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&FStack_88,0,(int *)((longlong)&uStack_80 + 4));
    }
    uStack_58 = 0xffffffff;
    uStack_54 = 0;
    TStack_78.NumBits = 0;
    if (0x80 < (uint)TStack_78.MaxBits) {
      TStack_78.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&TStack_78,0);
    }
    if (TStack_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)TStack_78.AllocatorInstance.SecondaryData);
    }
    if (FStack_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.Data);
    }
    uStack_90 = 0;
    if (pvStack_98 != (void *)0x0) {
      FMemory::Free(pvStack_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_d8,0,auStack_d8._8_4_);
    iVar2 = SUB84(auStack_d8._8_8_,4);
    auStack_d8._8_8_ = auStack_d8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)auStack_d8,0,(int *)(auStack_d8 + 0xc));
    }
    uStack_a8 = 0xffffffff;
    uStack_a4 = 0;
    uStack_b0 = 0;
    if (0x80 < uStack_ac) {
      uStack_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_d8 + 0x10),0);
    }
    if (pvStack_b8 != (void *)0x0) {
      FMemory::Free(pvStack_b8);
    }
    if ((FScriptContainerElement *)auStack_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_d8._0_8_);
    }
    uStack_e0 = 0;
    if (pvStack_e8 != (void *)0x0) {
      FMemory::Free(pvStack_e8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)auStack_128,0,auStack_128._8_4_);
    iVar2 = SUB84(auStack_128._8_8_,4);
    auStack_128._8_8_ = auStack_128._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)auStack_128,0,(int *)(auStack_128 + 0xc));
    }
    uStack_f4 = 0;
    uStack_100 = 0;
    uStack_f8 = 0xffffffff;
    if (0x80 < uStack_fc) {
      uStack_fc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_128 + 0x10),0);
    }
    if (pvStack_108 != (void *)0x0) {
      FMemory::Free(pvStack_108);
    }
    if ((FScriptContainerElement *)auStack_128._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_128._0_8_);
    }
    pFVar4 = (FConfigSection *)((longlong)(int)TStack_148.Key * 0x110 + lVar1 + 0x10);
  }
  return pFVar4;
}

// FindOrAddSectionInternal @ 14186e680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConfigSection * __thiscall
FConfigFile::FindOrAddSectionInternal(FConfigFile *this,FString *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  FConfigSection *pFVar4;
  undefined1 auStackY_178 [32];
  TPairInitializer<FString_const_&,FConfigSection_&&> local_148;
  undefined1 *local_138;
  undefined1 local_128 [32];
  void *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  void *local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_98;
  undefined4 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  pFVar4 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                   *)this,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (pFVar4 == (FConfigSection *)0x0) {
    local_fc = 0x80;
    local_128._0_8_ = (FScriptContainerElement *)0x0;
    local_128._8_8_ = 0;
    local_108 = (void *)0x0;
    local_100 = 0;
    local_f4 = 0;
    local_e8 = (void *)0x0;
    local_e0 = 0;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    local_a4 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_78.NumBits = 0;
    local_54 = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_f8 = 0xffffffff;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_78.MaxBits = 0x80;
    local_58 = 0xffffffff;
    local_38 = 1;
    AcquireSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
    local_138 = local_128;
    local_148.Value = (FConfigSection *)param_1;
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FConfigSection_&&>_>
              ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                *)this,&local_148,(bool *)&local_148.Value);
    lVar1 = this->_padding_;
    ReleaseSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
    local_40 = 0;
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    uVar3 = local_80 >> 0x20;
    local_80 = local_80 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_78.NumBits = 0;
    if (0x80 < (uint)local_78.MaxBits) {
      local_78.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    local_90 = 0;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d8,0,local_d8._8_4_);
    iVar2 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    local_a8 = 0xffffffff;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    local_e0 = 0;
    if (local_e8 != (void *)0x0) {
      FMemory::Free(local_e8);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_128,0,local_128._8_4_);
    iVar2 = SUB84(local_128._8_8_,4);
    local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
    }
    local_f4 = 0;
    local_100 = 0;
    local_f8 = 0xffffffff;
    if (0x80 < local_fc) {
      local_fc = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free(local_108);
    }
    if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
    pFVar4 = (FConfigSection *)((longlong)(int)local_148.Key * 0x110 + lVar1 + 0x10);
  }
  return pFVar4;
}

// GenerateExportedPropertyLine @ 141872300

FString * __cdecl
FConfigFile::GenerateExportedPropertyLine
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AppendExportedPropertyLine(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetArray @ 141872710

int __thiscall
FConfigFile::GetArray
          (FConfigFile *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FConfigSection *pFVar5;
  ForAnyElementType FVar6;
  ForElementType<FSetElementId> FVar7;
  FConfigSection *this_00;
  FName local_res8;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar4 = 0;
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar6.Data);
  iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar2,&local_18);
  pFVar5 = (FConfigSection *)0x0;
  if (iVar3 != -1) {
    pFVar5 = (FConfigSection *)((longlong)iVar3 * 0x110 + this->_padding_);
  }
  this_00 = (FConfigSection *)&pFVar5->_padding_;
  if (pFVar5 == (FConfigSection *)0x0) {
    this_00 = (FConfigSection *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FConfigSection *)0x0) {
    iVar4 = 0;
  }
  else {
    ::FName::FName(&local_res8,param_2);
    DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    FConfigSection::MultiFind<TSizedDefaultAllocator<32>_>(this_00,local_res8,param_3,true);
    if (param_3->ArrayNum == 0) {
      uVar2 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
      if (*(int *)&(this_00->EmptyInitializedKeys).Elements.field_0x8 !=
          *(int *)&(this_00->EmptyInitializedKeys).Elements.field_0x34) {
        FVar7 = (this_00->EmptyInitializedKeys).Hash.SecondaryData;
        if (FVar7 == (ForElementType<FSetElementId>)0x0) {
          FVar7 = (ForElementType<FSetElementId>)&(this_00->EmptyInitializedKeys).Hash;
        }
        iVar3 = *(int *)((longlong)FVar7 +
                        (ulonglong)
                        ((this_00->EmptyInitializedKeys).HashSize - 1U & local_res8.Number + uVar2)
                        * 4);
        if (iVar3 != -1) {
          lVar1 = *(longlong *)&(this_00->EmptyInitializedKeys).Elements;
          do {
            if (*(FName *)(lVar1 + (longlong)iVar3 * 0x10) == local_res8) goto LAB_141872889;
            iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
          iVar4 = 0;
        }
      }
    }
    else {
LAB_141872889:
      iVar4 = 1;
    }
  }
  return iVar4;
}

// IsADefaultIniWrite @ 14187a830

bool __thiscall FConfigFile::IsADefaultIniWrite(FConfigFile *this,FString *param_1,int *param_2)

{
  longlong *plVar1;
  FConfigFileHierarchy *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FConfigBranch *pFVar6;
  code *pcVar7;
  FConfigFileHierarchy *pFVar8;
  undefined1 uVar9;
  FString *pFVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  FString local_b8;
  FString local_a8;
  FConfigFileHierarchy *local_98;
  int iStack_90;
  uint uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  FConfigFileHierarchy *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar6 = this->Branch;
  if (pFVar6 != (FConfigBranch *)0x0) {
    iVar12 = (param_1->Data).ArrayNum;
    iVar4 = (pFVar6->IniPath).Data.ArrayNum;
    if (iVar12 == iVar4) {
      if (iVar12 < 2) goto LAB_14187ab26;
      iVar12 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          (wchar_t *)(pFVar6->IniPath).Data.AllocatorInstance.Data);
      bVar17 = iVar12 == 0;
    }
    else {
      bVar17 = iVar12 + iVar4 == 1;
    }
    if (!bVar17) {
      *param_2 = 0x7fffffff;
      FPaths::GetCleanFilename(&local_b8,param_1);
      pFVar6 = this->Branch;
      iStack_90 = 0;
      iVar12 = (int)(pFVar6->Hierarchy)._padding_;
      plVar1 = &(pFVar6->Hierarchy)._padding_;
      uStack_8c = 1;
      local_78 = 0;
      pFVar2 = &pFVar6->Hierarchy;
      iStack_7c = 0;
      if (iVar12 != 0) {
        plVar16 = (longlong *)(pFVar6->Hierarchy)._padding_;
        if (plVar16 == (longlong *)0x0) {
          plVar16 = plVar1;
        }
        uVar14 = (uint)*plVar16;
        while (uVar14 == 0) {
          lVar11 = (longlong)iStack_90;
          local_78 = local_78 + 0x20;
          iStack_90 = iStack_90 + 1;
          iStack_7c = iVar12;
          if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90)
          goto LAB_14187a94d;
          uVar14 = *(uint *)((longlong)plVar16 + lVar11 * 4 + 4);
        }
        uStack_8c = -uVar14 & uVar14;
        uVar3 = (ulonglong)uStack_8c * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iStack_7c = (int)lVar11 + -1 + local_78;
        if (iVar12 < iStack_7c) {
          iStack_7c = iVar12;
        }
      }
LAB_14187a94d:
      iStack_70 = (int)(pFVar6->Hierarchy)._padding_ -
                  *(int *)((longlong)&(pFVar6->Hierarchy)._padding_ + 4);
      uVar14 = (uint)(pFVar6->Hierarchy)._padding_;
      uStack_80 = 0xffffffff;
      uVar13 = uVar14 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
      TStack_60.CurrentBitIndex = iStack_7c;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar14 >> 5;
      TStack_60._28_4_ = iStack_7c;
      TStack_60.BaseBitIndex = local_78;
      uStack_40 = CONCAT44(uStack_6c,iStack_70);
      local_98 = pFVar2;
      local_88 = plVar1;
      iStack_74 = iStack_7c;
      local_68 = pFVar2;
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
      if (((int)uVar14 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      uVar5 = (uint)(pFVar6->Hierarchy)._padding_;
      if (uVar14 != uVar5) {
        plVar16 = (longlong *)(pFVar6->Hierarchy)._padding_;
        if (plVar16 == (longlong *)0x0) {
          plVar16 = plVar1;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)plVar16 + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar11 = (longlong)iVar12;
          uVar13 = uVar13 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14187aa50;
          uVar14 = *(uint *)((longlong)plVar16 + lVar11 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = (int)lVar11 + -1 + uVar13;
        if ((int)uVar5 < (int)uVar14) {
          uVar14 = uVar5;
        }
      }
LAB_14187aa50:
      do {
        pFVar8 = local_68;
        if ((int)local_68->_padding_ - *(int *)((longlong)&local_68->_padding_ + 4) !=
            (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_60.CurrentBitIndex == uVar14) &&
            (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) &&
           (pFVar8 == pFVar2)) goto LAB_14187aaf1;
        piVar15 = (int *)((longlong)TStack_60.CurrentBitIndex * 0x20 + pFVar8->_padding_);
        pFVar10 = FPaths::GetCleanFilenameUtf8(&local_a8,(FUtf8String *)(piVar15 + 2));
        iVar12 = (pFVar10->Data).ArrayNum;
        if (iVar12 == local_b8.Data.ArrayNum) {
          if (iVar12 < 2) {
            bVar17 = true;
          }
          else {
            iVar12 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                                (wchar_t *)local_b8.Data.AllocatorInstance.Data);
            bVar17 = iVar12 == 0;
          }
        }
        else {
          bVar17 = local_b8.Data.ArrayNum + iVar12 == 1;
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar17) {
          *param_2 = *piVar15;
LAB_14187aaf1:
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          return true;
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while( true );
    }
  }
LAB_14187ab26:
  *param_2 = 0x7fffffff;
  return false;
}

// Num @ 14187f450

int __thiscall FConfigFile::Num(FConfigFile *this)

{
  int iVar1;
  longlong lVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  lVar2 = this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  return (int)lVar2 - iVar1;
}

// OverrideFromCommandline @ 141880420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FConfigFile::OverrideFromCommandline(FConfigFile *param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TArray<FConfigCommandlineOverride,TSizedDefaultAllocator<32>_> *pTVar3;
  wchar_t wVar4;
  code *pcVar5;
  wchar_t (*pawVar6) [6];
  wchar_t (*pawVar7) [3];
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  size_t sVar13;
  void *pvVar14;
  TStringView<wchar_t> *pTVar15;
  wchar_t *pwVar16;
  FString *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  IConsoleManager *pIVar20;
  longlong *plVar21;
  FScriptContainerElement *pFVar22;
  ulong64 uVar23;
  ForAnyElementType FVar24;
  wchar_t *pwVar25;
  wchar_t wVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  int iVar31;
  wchar_t wVar32;
  FConfigFile *this;
  bool bVar33;
  undefined1 auStackY_448 [32];
  uint local_3f8;
  int local_3f4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3f0;
  ForAnyElementType local_3e0;
  undefined8 local_3d8;
  FString local_3d0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3c0;
  FString local_3b0;
  FScriptContainerElement *local_3a0;
  FString local_398;
  FString local_388;
  FString local_378;
  int local_368;
  FString local_360;
  FScriptContainerElement *local_350;
  FConfigFile *local_348;
  size_t local_340;
  wchar_t *local_338;
  wchar_t *local_330;
  FString local_328;
  FString *local_318;
  FScriptContainerElement *local_310;
  FString local_308;
  TStringView<wchar_t> local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  TStringView<wchar_t> local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  int iStack_280;
  int iStack_27c;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [260];
  wchar_t local_50 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_348 = param_1;
  local_318 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar20 = IConsoleManager::Get();
    plVar21 = (longlong *)
              (**(code **)((longlong)*pIVar20 + 0xc0))(pIVar20,L"ini.UseNewDynamicLayers",1);
    iVar9 = (**(code **)(*plVar21 + 200))(plVar21);
    bUseNewDynamicLayers = iVar9 != 0;
    _Init_thread_footer(&::_TSS0);
  }
  pawVar6 = CommandlineOverrideSpecifiers::IniSwitchIdentifier;
  if (bUseNewDynamicLayers == false) {
    local_278.Base = local_258;
    iVar9 = 0;
    local_278.End = local_50;
    local_278.bIsDynamic = false;
    local_278.bIsExternal = false;
    local_278.CurPos = local_258;
    if (CommandlineOverrideSpecifiers::IniSwitchIdentifier != (wchar_t (*) [6])0x0) {
      sVar13 = wcslen(*CommandlineOverrideSpecifiers::IniSwitchIdentifier);
      iVar9 = (int)sVar13;
    }
    uVar23 = (ulong64)iVar9;
    pwVar16 = local_258;
    if (local_50 < local_258 + uVar23) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,uVar23);
      pwVar16 = local_278.CurPos;
    }
    if (iVar9 != 0) {
      pvVar14 = FGenericPlatformString::Memcpy(pwVar16,pawVar6,uVar23 * 2);
      local_278.CurPos = (wchar_t *)((longlong)pvVar14 + uVar23 * 2);
    }
    local_2f8.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    iVar9 = (param_2->Data).ArrayNum;
    local_2f8.Size = iVar9 + -1;
    if (iVar9 == 0) {
      local_2f8.Size = 0;
    }
    pTVar15 = FPathViews::GetBaseFilename(&local_298,&local_2f8);
    local_328.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)&pTVar15->DataPtr;
    local_328.Data.AllocatorInstance.Data._4_4_ = *(undefined4 *)((longlong)&pTVar15->DataPtr + 4);
    local_328.Data.ArrayNum = pTVar15->Size;
    local_328.Data.ArrayMax = *(int *)&pTVar15->field_0xc;
    iVar9 = (int)*(undefined8 *)&pTVar15->Size;
    uVar23 = (ulong64)iVar9;
    local_288 = local_328.Data.AllocatorInstance.Data._0_4_;
    uStack_284 = local_328.Data.AllocatorInstance.Data._4_4_;
    iStack_280 = local_328.Data.ArrayNum;
    iStack_27c = local_328.Data.ArrayMax;
    if (local_278.End < local_278.CurPos + uVar23) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,uVar23);
    }
    if (iVar9 != 0) {
      pvVar14 = FGenericPlatformString::Memcpy
                          (local_278.CurPos,
                           (void *)CONCAT44(local_328.Data.AllocatorInstance.Data._4_4_,
                                            local_328.Data.AllocatorInstance.Data._0_4_),uVar23 * 2)
      ;
      local_278.CurPos = (wchar_t *)((longlong)pvVar14 + uVar23 * 2);
    }
    if (local_278.End < local_278.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,1);
    }
    pvVar14 = FGenericPlatformString::Memcpy(local_278.CurPos,L":",2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar14 + 2);
    if (local_278.End < (wchar_t *)((longlong)pvVar14 + 4)) {
      TStringBuilderBase<wchar_t>::Extend(&local_278,1);
    }
    pwVar25 = local_278.Base;
    *local_278.CurPos = L'\0';
    pwVar16 = FCommandLine::Get();
    if ((pwVar25 != (wchar_t *)0x0) && (pwVar16 != (wchar_t *)0x0)) {
      wVar4 = *pwVar25;
      bVar8 = false;
      wVar32 = wVar4 + L'￠';
      if (0x19 < (ushort)(wVar4 + L'ﾟ')) {
        wVar32 = wVar4;
      }
      sVar13 = wcslen(pwVar25);
      bVar33 = false;
      wVar4 = *pwVar16;
      while (wVar4 != L'\0') {
        pwVar27 = pwVar16 + 1;
        wVar26 = wVar4 + L'￠';
        if (0x19 < (ushort)(wVar4 + L'ﾟ')) {
          wVar26 = wVar4;
        }
        if ((((!bVar33) && (!bVar8)) && (wVar26 == wVar32)) &&
           (iVar9 = FGenericPlatformStricmp::Strnicmp
                              (pwVar27,pwVar25 + 1,(longlong)((int)sVar13 + -1)), iVar9 == 0)) {
          if (pwVar16 != (wchar_t *)0x0) {
            if (local_278.End < local_278.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_278,1);
            }
            pwVar16 = local_278.Base;
            *local_278.CurPos = L'\0';
            local_338 = local_278.Base;
            local_340 = 0;
            if (local_278.Base != (wchar_t *)0x0) {
              local_340 = wcslen(local_278.Base);
            }
            sVar13 = local_340;
            local_330 = FCommandLine::Get();
            local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_360.Data.ArrayNum = 0;
            local_360.Data.ArrayMax = 0;
            bVar8 = FParse::Token(&local_330,&local_360,false,L'\0');
            if (bVar8) {
              do {
                bVar8 = ::FString::StartsWith(&local_360,pwVar16,(int)sVar13,IgnoreCase);
                if (bVar8) {
                  ::FString::RightChop(&local_360,&local_308,(int)sVar13);
                  local_3e0.Data = (FScriptContainerElement *)0x0;
                  local_350 = (FScriptContainerElement *)L"";
                  if (local_308.Data.ArrayNum != 0) {
                    local_350 = local_308.Data.AllocatorInstance.Data;
                  }
                  local_3d8 = 0;
                  local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3d0.Data.ArrayNum = 0;
                  local_3d0.Data.ArrayMax = 0;
                  bVar8 = FParse::Token((wchar_t **)&local_350,&local_3d0,false,L',');
                  if (bVar8) {
                    do {
                      if (((local_3e0.Data <= (FScriptContainerElement *)&local_3d0) &&
                          ((FScriptContainerElement *)&local_3d0 <
                           local_3e0.Data + (longlong)local_3d8._4_4_ * 0x10)) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar8)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar9 = (int)local_3d8;
                      if ((int)local_3d8 == local_3d8._4_4_) {
                        iVar9 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x810,&local_3e0,(int *)((longlong)&local_3d8 + 4));
                      }
                      local_3d8 = CONCAT44(local_3d8._4_4_,iVar9 + 1);
                      pFVar22 = local_3e0.Data + (longlong)iVar9 * 0x10;
                      *(undefined8 *)pFVar22 = 0;
                      *(FScriptContainerElement **)pFVar22 = local_3d0.Data.AllocatorInstance.Data;
                      local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      *(int *)(pFVar22 + 8) = local_3d0.Data.ArrayNum;
                      *(int *)(pFVar22 + 0xc) = local_3d0.Data.ArrayMax;
                      local_3d0.Data.ArrayNum = 0;
                      local_3d0.Data.ArrayMax = 0;
                      bVar8 = FParse::Token((wchar_t **)&local_350,&local_3d0,false,L',');
                    } while (bVar8);
                  }
                  if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
                  }
                  local_3f8 = 0;
                  if (0 < (int)local_3d8) {
                    do {
                      local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_398.Data.ArrayNum = 0;
                      local_398.Data.ArrayMax = 0;
                      local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_3b0.Data.ArrayNum = 0;
                      local_3b0.Data.ArrayMax = 0;
                      uVar10 = 0;
                      if ((int)local_3f8 < (int)local_3d8) {
                        uVar10 = ~local_3f8 >> 0x1f;
                      }
                      if ((uVar10 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pFVar22 = local_3e0.Data + (longlong)(int)local_3f8 * 0x10;
                      ::FString::FString(&local_328,L"=");
                      bVar8 = ::FString::Split((FString *)pFVar22,&local_328,&local_398,&local_3b0);
                      if ((void *)CONCAT44(local_328.Data.AllocatorInstance.Data._4_4_,
                                           local_328.Data.AllocatorInstance.Data._0_4_) !=
                          (void *)0x0) {
                        FMemory::Free((void *)CONCAT44(local_328.Data.AllocatorInstance.Data._4_4_,
                                                       local_328.Data.AllocatorInstance.Data._0_4_))
                        ;
                      }
                      pawVar7 = CommandlineOverrideSpecifiers::PropertyStartIdentifier;
                      if ((bVar8) &&
                         (CommandlineOverrideSpecifiers::PropertyStartIdentifier !=
                          (wchar_t (*) [3])0x0)) {
                        sVar13 = wcslen(*CommandlineOverrideSpecifiers::PropertyStartIdentifier);
                        iVar9 = ::FString::Find(&local_398,*pawVar7,(int)sVar13,IgnoreCase,FromEnd,
                                                -1);
                        this = local_348;
                        if (1 < iVar9 + 1U) {
                          pTVar3 = &local_348->CommandlineOptions;
                          uVar10 = (local_348->CommandlineOptions).ArrayNum;
                          piVar1 = &(local_348->CommandlineOptions).ArrayMax;
                          if (uVar10 == *piVar1) {
                            uVar10 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x840,&pTVar3->AllocatorInstance,piVar1);
                          }
                          (this->CommandlineOptions).ArrayNum = uVar10 + 1;
                          pFVar22 = (pTVar3->AllocatorInstance).Data;
                          lVar28 = (longlong)(int)uVar10 * 0x40;
                          *(undefined8 *)(pFVar22 + lVar28) = 0;
                          *(undefined8 *)(pFVar22 + lVar28 + 8) = 0;
                          *(undefined8 *)(pFVar22 + lVar28 + 0x10) = 0;
                          *(undefined8 *)(pFVar22 + lVar28 + 0x18) = 0;
                          *(undefined8 *)(pFVar22 + lVar28 + 0x20) = 0;
                          *(undefined8 *)(pFVar22 + lVar28 + 0x28) = 0;
                          *(undefined8 *)(pFVar22 + lVar28 + 0x30) = 0;
                          *(undefined8 *)(pFVar22 + lVar28 + 0x38) = 0;
                          uVar11 = 0;
                          if ((int)uVar10 < (this->CommandlineOptions).ArrayNum) {
                            uVar11 = ~uVar10 >> 0x1f;
                          }
                          if ((uVar11 == 0) &&
                             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar8)) {
                            pcVar5 = (code *)swi(3);
                            (*pcVar5)();
                            return;
                          }
                          pFVar22 = (pTVar3->AllocatorInstance).Data + lVar28;
                          local_310 = pFVar22;
                          pFVar17 = FPaths::GetBaseFilename(&local_2e8,local_318,true);
                          if ((pFVar17->Data).ArrayNum == 0) {
                            pwVar16 = L"";
                          }
                          else {
                            pwVar16 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
                          }
                          ::FString::operator=((FString *)pFVar22,pwVar16);
                          if (local_2e8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
                          }
                          iVar30 = 0;
                          iVar12 = local_398.Data.ArrayNum + -1;
                          if (local_398.Data.ArrayNum == 0) {
                            iVar12 = iVar30;
                          }
                          if (iVar9 < iVar12) {
                            iVar12 = iVar9;
                          }
                          iVar31 = iVar30;
                          if (0 < iVar12) {
                            iVar31 = iVar12;
                          }
                          FVar24.Data = (FScriptContainerElement *)L"";
                          if (local_398.Data.ArrayNum != 0) {
                            FVar24.Data = local_398.Data.AllocatorInstance.Data;
                          }
                          ::FString::ConstructFromPtrSize(&local_388,(wchar_t *)FVar24.Data,iVar31);
                          pFVar2 = pFVar22 + 0x10;
                          if (pFVar2 != (FScriptContainerElement *)&local_388) {
                            if (*(void **)pFVar2 != (void *)0x0) {
                              FMemory::Free(*(void **)pFVar2);
                            }
                            *(FScriptContainerElement **)pFVar2 =
                                 local_388.Data.AllocatorInstance.Data;
                            *(int *)(pFVar22 + 0x18) = local_388.Data.ArrayNum;
                            *(int *)(pFVar22 + 0x1c) = local_388.Data.ArrayMax;
                            local_388.Data.ArrayNum = 0;
                            local_388.Data.ArrayMax = 0;
                            local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          }
                          if (local_388.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_388.Data.AllocatorInstance.Data);
                          }
                          pFVar18 = (FScriptContainerElement *)
                                    ::FString::Replace((FString *)pFVar2,&local_2d8,
                                                       *CommandlineOverrideSpecifiers::
                                                        IniNameEndIdentifier,L"",IgnoreCase);
                          if (pFVar2 != pFVar18) {
                            if (*(void **)pFVar2 != (void *)0x0) {
                              FMemory::Free(*(void **)pFVar2);
                            }
                            *(undefined8 *)pFVar2 = *(undefined8 *)pFVar18;
                            *(undefined8 *)pFVar18 = 0;
                            *(int *)(pFVar22 + 0x18) = *(int *)(pFVar18 + 8);
                            *(int *)(pFVar22 + 0x1c) = *(int *)(pFVar18 + 0xc);
                            *(undefined8 *)(pFVar18 + 8) = 0;
                          }
                          if (local_2d8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
                          }
                          pFVar18 = (FScriptContainerElement *)
                                    ::FString::Replace((FString *)(pFVar22 + 0x10),&local_2c8,
                                                       *CommandlineOverrideSpecifiers::
                                                        PropertyStartIdentifier,L"",IgnoreCase);
                          pFVar2 = pFVar22 + 0x10;
                          if (pFVar2 != pFVar18) {
                            if (*(void **)pFVar2 != (void *)0x0) {
                              FMemory::Free(*(void **)pFVar2);
                            }
                            *(undefined8 *)pFVar2 = *(undefined8 *)pFVar18;
                            *(undefined8 *)pFVar18 = 0;
                            *(int *)(pFVar22 + 0x18) = *(int *)(pFVar18 + 8);
                            *(int *)(pFVar22 + 0x1c) = *(int *)(pFVar18 + 0xc);
                            *(undefined8 *)(pFVar18 + 8) = 0;
                          }
                          if (local_2c8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                          }
                          pFVar18 = (FScriptContainerElement *)
                                    ::FString::Replace((FString *)(pFVar22 + 0x10),&local_2b8,
                                                       *CommandlineOverrideSpecifiers::
                                                        SectionStartIdentifier,L"",IgnoreCase);
                          pFVar2 = pFVar22 + 0x10;
                          if (pFVar2 != pFVar18) {
                            if (*(void **)pFVar2 != (void *)0x0) {
                              FMemory::Free(*(void **)pFVar2);
                            }
                            *(undefined8 *)pFVar2 = *(undefined8 *)pFVar18;
                            *(undefined8 *)pFVar18 = 0;
                            *(int *)(pFVar22 + 0x18) = *(int *)(pFVar18 + 8);
                            *(int *)(pFVar22 + 0x1c) = *(int *)(pFVar18 + 0xc);
                            *(undefined8 *)(pFVar18 + 8) = 0;
                          }
                          if (local_2b8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                          }
                          ::FString::RightChop(&local_398,&local_378,iVar9 + 2);
                          pFVar2 = pFVar22 + 0x20;
                          if (pFVar2 != (FScriptContainerElement *)&local_378) {
                            if (*(void **)pFVar2 != (void *)0x0) {
                              FMemory::Free(*(void **)pFVar2);
                            }
                            *(FScriptContainerElement **)pFVar2 =
                                 local_378.Data.AllocatorInstance.Data;
                            *(int *)(pFVar22 + 0x28) = local_378.Data.ArrayNum;
                            *(int *)(pFVar22 + 0x2c) = local_378.Data.ArrayMax;
                            local_378.Data.ArrayNum = 0;
                            local_378.Data.ArrayMax = 0;
                            local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          }
                          if (local_378.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_378.Data.AllocatorInstance.Data);
                          }
                          iVar9 = local_3b0.Data.ArrayNum + -1;
                          if (local_3b0.Data.ArrayNum == 0) {
                            iVar9 = iVar30;
                          }
                          if (iVar9 < 2) {
LAB_141880e18:
                            iVar9 = local_3b0.Data.ArrayNum + -1;
                            if (local_3b0.Data.ArrayNum == 0) {
                              iVar9 = iVar30;
                            }
                            ::FString::AssignRange
                                      ((FString *)(pFVar22 + 0x30),
                                       (wchar_t *)local_3b0.Data.AllocatorInstance.Data,iVar9);
                          }
                          else {
                            bVar8 = ::FString::StartsWith(&local_3b0,L"\"",1,IgnoreCase);
                            if ((!bVar8) ||
                               (bVar8 = ::FString::EndsWith(&local_3b0,L"\"",1,IgnoreCase), !bVar8))
                            {
                              goto LAB_141880e18;
                            }
                            iVar9 = local_3b0.Data.ArrayNum + -3;
                            if (local_3b0.Data.ArrayNum == 0) {
                              iVar9 = -2;
                            }
                            pFVar19 = (FScriptContainerElement *)
                                      ::FString::Mid(&local_3b0,&local_2a8,1,iVar9);
                            pFVar18 = pFVar22 + 0x30;
                            if (pFVar18 != pFVar19) {
                              if (*(void **)pFVar18 != (void *)0x0) {
                                FMemory::Free(*(void **)pFVar18);
                              }
                              *(undefined8 *)pFVar18 = *(undefined8 *)pFVar19;
                              *(undefined8 *)pFVar19 = 0;
                              *(int *)(pFVar22 + 0x38) = *(int *)(pFVar19 + 8);
                              *(int *)(pFVar22 + 0x3c) = *(int *)(pFVar19 + 0xc);
                              *(undefined8 *)(pFVar19 + 8) = 0;
                            }
                            if (local_2a8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                            }
                          }
                          bVar8 = ::FString::StartsWith((FString *)pFVar2,L"-",1,IgnoreCase);
                          if (bVar8) {
                            ::FString::RemoveFromStart((FString *)pFVar2,L"-",1,IgnoreCase);
                            local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_3c0.ArrayNum = 0;
                            local_3c0.ArrayMax = 0;
                            if (*(int *)(pFVar22 + 0x28) == 0) {
                              pwVar16 = L"";
                            }
                            else {
                              pwVar16 = *(wchar_t **)(pFVar22 + 0x20);
                            }
                            if (*(int *)(pFVar22 + 0x18) == 0) {
                              pwVar25 = L"";
                            }
                            else {
                              pwVar25 = *(wchar_t **)(pFVar22 + 0x10);
                            }
                            GetArray(this,pwVar25,pwVar16,&local_3c0);
                            pFVar2 = pFVar22 + 0x30;
                            local_3a0 = local_3c0.AllocatorInstance.Data;
                            if ((local_3c0.AllocatorInstance.Data <= pFVar2) &&
                               (pFVar2 < local_3c0.AllocatorInstance.Data +
                                         (longlong)local_3c0.ArrayMax * 0x10)) {
                              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                );
                              if (bVar8) {
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                              local_3a0 = local_3c0.AllocatorInstance.Data;
                            }
                            pFVar18 = local_3a0;
                            lVar28 = (longlong)local_3c0.ArrayNum;
                            local_3c0.AllocatorInstance.Data = local_3a0;
                            if (local_3c0.ArrayNum != 0) {
                              iVar9 = *(int *)(local_3a0 + 8);
                              iVar12 = 0;
                              local_3f4 = 0;
                              lVar29 = 0;
                              if (iVar9 == *(int *)(pFVar22 + 0x38)) {
                                if (iVar9 < 2) {
                                  bVar8 = false;
                                }
                                else {
                                  iVar9 = FGenericPlatformStricmp::Stricmp
                                                    (*(wchar_t **)local_3a0,*(wchar_t **)pFVar2);
                                  bVar8 = iVar9 != 0;
                                }
                              }
                              else {
                                bVar8 = iVar9 + *(int *)(pFVar22 + 0x38) != 1;
                              }
                              do {
                                lVar29 = lVar29 + 1;
                                iVar9 = iVar12 + 1;
                                local_368 = iVar12;
                                if (lVar29 < lVar28) {
                                  pFVar19 = local_3a0 + lVar29 * 0x10;
                                  do {
                                    iVar12 = *(int *)(pFVar19 + 8);
                                    if (iVar12 == *(int *)(pFVar22 + 0x38)) {
                                      if (iVar12 < 2) {
                                        bVar33 = false;
                                      }
                                      else {
                                        iVar12 = FGenericPlatformStricmp::Stricmp
                                                           (*(wchar_t **)pFVar19,*(wchar_t **)pFVar2
                                                           );
                                        bVar33 = iVar12 != 0;
                                      }
                                    }
                                    else {
                                      bVar33 = *(int *)(pFVar22 + 0x38) + iVar12 != 1;
                                    }
                                    pFVar18 = local_3a0;
                                    if (bVar8 != bVar33) break;
                                    iVar9 = iVar9 + 1;
                                    lVar29 = lVar29 + 1;
                                    pFVar19 = pFVar19 + 0x10;
                                  } while (lVar29 < lVar28);
                                }
                                iVar12 = iVar9;
                                iVar9 = iVar12 - local_368;
                                if (bVar8 == false) {
                                  DestructItems<FString,int>
                                            ((FString *)(pFVar18 + (longlong)local_368 * 0x10),iVar9
                                            );
                                }
                                else {
                                  if (local_3f4 != local_368) {
                                    memmove(pFVar18 + (longlong)local_3f4 * 0x10,
                                            pFVar18 + (longlong)local_368 * 0x10,
                                            (longlong)iVar9 << 4);
                                  }
                                  local_3f4 = local_3f4 + iVar9;
                                }
                                bVar8 = (bool)(bVar8 ^ 1);
                              } while (lVar29 < lVar28);
                              local_3c0.ArrayNum = local_3f4;
                              this = local_348;
                              pFVar22 = local_310;
                            }
                            if (*(int *)(pFVar22 + 0x28) == 0) {
                              pwVar16 = L"";
                            }
                            else {
                              pwVar16 = *(wchar_t **)(pFVar22 + 0x20);
                            }
                            if (*(int *)(pFVar22 + 0x18) == 0) {
                              pwVar25 = L"";
                            }
                            else {
                              pwVar25 = *(wchar_t **)(pFVar22 + 0x10);
                            }
                            SetArray(this,pwVar25,pwVar16,&local_3c0);
                            DestructItems<FString,int>
                                      ((FString *)local_3c0.AllocatorInstance.Data,
                                       local_3c0.ArrayNum);
                            if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                            {
                              FMemory::Free(local_3c0.AllocatorInstance.Data);
                            }
                          }
                          else {
                            bVar8 = ::FString::StartsWith((FString *)pFVar2,L"+",1,IgnoreCase);
                            if (bVar8) {
                              ::FString::RemoveFromStart
                                        ((FString *)(pFVar22 + 0x20),L"+",1,IgnoreCase);
                              local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                              local_3f0.ArrayNum = 0;
                              local_3f0.ArrayMax = 0;
                              if (*(int *)(pFVar22 + 0x28) == 0) {
                                pwVar16 = L"";
                              }
                              else {
                                pwVar16 = *(wchar_t **)(pFVar22 + 0x20);
                              }
                              if (*(int *)(pFVar22 + 0x18) == 0) {
                                pwVar25 = L"";
                              }
                              else {
                                pwVar25 = *(wchar_t **)(pFVar22 + 0x10);
                              }
                              GetArray(this,pwVar25,pwVar16,&local_3f0);
                              pFVar2 = pFVar22 + 0x30;
                              if (((local_3f0.AllocatorInstance.Data <= pFVar2) &&
                                  (pFVar2 < local_3f0.AllocatorInstance.Data +
                                            (longlong)local_3f0.ArrayMax * 0x10)) &&
                                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                                    (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar8)) {
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                              iVar9 = local_3f0.ArrayNum;
                              if (local_3f0.ArrayNum == local_3f0.ArrayMax) {
                                iVar9 = UE::Core::Private::
                                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                  (0x810,&local_3f0.AllocatorInstance,
                                                   &local_3f0.ArrayMax);
                              }
                              local_3f0.ArrayNum = iVar9 + 1;
                              ::FString::FString((FString *)
                                                 (local_3f0.AllocatorInstance.Data +
                                                 (longlong)iVar9 * 0x10),(FString *)pFVar2);
                              if (*(int *)(pFVar22 + 0x28) == 0) {
                                pwVar16 = L"";
                              }
                              else {
                                pwVar16 = *(wchar_t **)(pFVar22 + 0x20);
                              }
                              if (*(int *)(pFVar22 + 0x18) == 0) {
                                pwVar25 = L"";
                              }
                              else {
                                pwVar25 = *(wchar_t **)(pFVar22 + 0x10);
                              }
                              SetArray(this,pwVar25,pwVar16,&local_3f0);
                              DestructItems<FString,int>
                                        ((FString *)local_3f0.AllocatorInstance.Data,
                                         local_3f0.ArrayNum);
                              if (local_3f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                                 ) {
                                FMemory::Free(local_3f0.AllocatorInstance.Data);
                              }
                            }
                            else {
                              if (*(int *)(pFVar22 + 0x38) == 0) {
                                pwVar16 = L"";
                              }
                              else {
                                pwVar16 = *(wchar_t **)(pFVar22 + 0x30);
                              }
                              if (*(int *)(pFVar22 + 0x28) == 0) {
                                pwVar25 = L"";
                              }
                              else {
                                pwVar25 = *(wchar_t **)(pFVar22 + 0x20);
                              }
                              if (*(int *)(pFVar22 + 0x18) == 0) {
                                SetString(this,L"",pwVar25,pwVar16);
                              }
                              else {
                                SetString(this,*(wchar_t **)(pFVar22 + 0x10),pwVar25,pwVar16);
                              }
                            }
                          }
                        }
                      }
                      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
                      }
                      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_398.Data.AllocatorInstance.Data);
                      }
                      local_3f8 = local_3f8 + 1;
                      sVar13 = local_340;
                    } while ((int)local_3f8 < (int)local_3d8);
                  }
                  DestructItems<FString,int>((FString *)local_3e0.Data,(int)local_3d8);
                  if (local_3e0.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3e0.Data);
                  }
                  pwVar16 = local_338;
                  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_308.Data.AllocatorInstance.Data);
                    pwVar16 = local_338;
                  }
                }
                bVar8 = FParse::Token(&local_330,&local_360,false,L'\0');
              } while (bVar8);
            }
            if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_360.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        if (((ushort)(wVar26 + L'﾿') < 0x1a) || ((ushort)(wVar26 + L'￐') < 10)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (wVar26 == L'\"') {
          bVar33 = !bVar33;
        }
        pwVar16 = pwVar27;
        wVar4 = *pwVar27;
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  }
  return;
}

// OverrideFromCommandline @ 1418813c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FConfigFile::OverrideFromCommandline(FConfigCommandStream *param_1,FString *param_2)

{
  int iVar1;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *this;
  wchar_t wVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  wchar_t (*pawVar8) [6];
  wchar_t (*pawVar9) [3];
  FConfigCommandStream *this_00;
  wchar_t *_Str;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  size_t sVar15;
  void *pvVar16;
  TStringView<wchar_t> *pTVar17;
  wchar_t *pwVar18;
  FString *pFVar19;
  FConfigExpansion *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulong64 uVar23;
  ForAnyElementType FVar24;
  longlong lVar25;
  wchar_t wVar26;
  TSparseSetElement<TTuple<FName,FConfigValue>_> *this_01;
  wchar_t *pwVar27;
  uint uVar28;
  undefined1 uVar29;
  wchar_t wVar30;
  ForAnyElementType FVar31;
  undefined1 auStackY_418 [32];
  FString local_3c0;
  FString local_3b0;
  uint local_3a0;
  ForAnyElementType local_398;
  undefined8 local_390;
  FString local_388;
  FString local_378;
  int local_368;
  int local_364;
  FString local_360;
  FString local_350;
  FScriptContainerElement *local_340;
  size_t local_338;
  wchar_t *local_330;
  wchar_t *local_328;
  FSparseArrayAllocationInfo local_320;
  FConfigCommandStream *local_310;
  FString *local_308;
  FString local_300;
  TStringView<wchar_t> local_2f0;
  FString local_2e0;
  wchar_t *local_2d0;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  TStringView<wchar_t> local_288;
  int local_278;
  undefined4 uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [260];
  wchar_t local_40 [4];
  ulonglong local_38;
  
  pawVar8 = CommandlineOverrideSpecifiers::IniSwitchIdentifier;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_268.Base = local_248;
  iVar11 = 0;
  local_268.End = local_40;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_310 = param_1;
  local_268.CurPos = local_248;
  if (CommandlineOverrideSpecifiers::IniSwitchIdentifier != (wchar_t (*) [6])0x0) {
    sVar15 = wcslen(*CommandlineOverrideSpecifiers::IniSwitchIdentifier);
    iVar11 = (int)sVar15;
  }
  uVar23 = (ulong64)iVar11;
  pwVar18 = local_248;
  if (local_40 < local_248 + uVar23) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar23);
    pwVar18 = local_268.CurPos;
  }
  if (iVar11 != 0) {
    pvVar16 = FGenericPlatformString::Memcpy(pwVar18,pawVar8,uVar23 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar16 + uVar23 * 2);
  }
  local_2f0.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar11 = (param_2->Data).ArrayNum;
  local_2f0.Size = iVar11 + -1;
  if (iVar11 == 0) {
    local_2f0.Size = 0;
  }
  pTVar17 = FPathViews::GetBaseFilename(&local_288,&local_2f0);
  local_320.Index = *(int *)&pTVar17->DataPtr;
  local_320._4_4_ = *(undefined4 *)((longlong)&pTVar17->DataPtr + 4);
  local_320.Pointer._0_4_ = pTVar17->Size;
  local_320.Pointer._4_4_ = *(undefined4 *)&pTVar17->field_0xc;
  iVar11 = (int)*(undefined8 *)&pTVar17->Size;
  uVar23 = (ulong64)iVar11;
  local_278 = local_320.Index;
  uStack_274 = local_320._4_4_;
  iStack_270 = (int)local_320.Pointer;
  uStack_26c = local_320.Pointer._4_4_;
  if (local_268.End < local_268.CurPos + uVar23) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar23);
  }
  if (iVar11 != 0) {
    pvVar16 = FGenericPlatformString::Memcpy
                        (local_268.CurPos,(void *)CONCAT44(local_320._4_4_,local_320.Index),
                         uVar23 * 2);
    local_268.CurPos = (wchar_t *)((longlong)pvVar16 + uVar23 * 2);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  pvVar16 = FGenericPlatformString::Memcpy(local_268.CurPos,L":",2);
  local_268.CurPos = (wchar_t *)((longlong)pvVar16 + 2);
  if (local_268.End < (wchar_t *)((longlong)pvVar16 + 4)) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  _Str = local_268.Base;
  *local_268.CurPos = L'\0';
  pwVar18 = FCommandLine::Get();
  if ((_Str != (wchar_t *)0x0) && (pwVar18 != (wchar_t *)0x0)) {
    wVar2 = *_Str;
    bVar10 = false;
    wVar30 = wVar2 + L'￠';
    if (0x19 < (ushort)(wVar2 + L'ﾟ')) {
      wVar30 = wVar2;
    }
    sVar15 = wcslen(_Str);
    bVar7 = false;
    wVar2 = *pwVar18;
    while (wVar2 != L'\0') {
      pwVar27 = pwVar18 + 1;
      wVar26 = wVar2 + L'￠';
      if (0x19 < (ushort)(wVar2 + L'ﾟ')) {
        wVar26 = wVar2;
      }
      if ((((!bVar7) && (!bVar10)) && (wVar26 == wVar30)) &&
         (iVar11 = FGenericPlatformStricmp::Strnicmp(pwVar27,_Str + 1,(longlong)((int)sVar15 + -1)),
         iVar11 == 0)) {
        if (pwVar18 != (wchar_t *)0x0) {
          if (local_268.End < local_268.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,1);
          }
          pwVar18 = local_268.Base;
          *local_268.CurPos = L'\0';
          local_330 = local_268.Base;
          local_338 = 0;
          if (local_268.Base != (wchar_t *)0x0) {
            local_338 = wcslen(local_268.Base);
          }
          sVar15 = local_338;
          local_328 = FCommandLine::Get();
          local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_350.Data.ArrayNum = 0;
          local_350.Data.ArrayMax = 0;
          bVar10 = FParse::Token(&local_328,&local_350,false,L'\0');
          if (bVar10) {
            do {
              bVar10 = ::FString::StartsWith(&local_350,pwVar18,(int)sVar15,IgnoreCase);
              if (bVar10) {
                ::FString::RightChop(&local_350,&local_300,(int)sVar15);
                local_398.Data = (FScriptContainerElement *)0x0;
                local_340 = (FScriptContainerElement *)L"";
                if (local_300.Data.ArrayNum != 0) {
                  local_340 = local_300.Data.AllocatorInstance.Data;
                }
                local_390 = 0;
                local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_388.Data.ArrayNum = 0;
                local_388.Data.ArrayMax = 0;
                bVar10 = FParse::Expression((wchar_t **)&local_340,&local_388,false,L',');
                if (bVar10) {
                  do {
                    if (((local_398.Data <= (FScriptContainerElement *)&local_388) &&
                        ((FScriptContainerElement *)&local_388 <
                         local_398.Data + (longlong)local_390._4_4_ * 0x10)) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar10)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar11 = (int)local_390;
                    if ((int)local_390 == local_390._4_4_) {
                      iVar11 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&local_398,(int *)((longlong)&local_390 + 4));
                    }
                    local_390 = CONCAT44(local_390._4_4_,iVar11 + 1);
                    pFVar22 = local_398.Data + (longlong)iVar11 * 0x10;
                    *(undefined8 *)pFVar22 = 0;
                    *(FScriptContainerElement **)pFVar22 = local_388.Data.AllocatorInstance.Data;
                    local_388.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    *(int *)(pFVar22 + 8) = local_388.Data.ArrayNum;
                    *(int *)(pFVar22 + 0xc) = local_388.Data.ArrayMax;
                    local_388.Data.ArrayNum = 0;
                    local_388.Data.ArrayMax = 0;
                    bVar10 = FParse::Expression((wchar_t **)&local_340,&local_388,false,L',');
                  } while (bVar10);
                }
                if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_388.Data.AllocatorInstance.Data);
                }
                local_3a0 = 0;
                if (0 < (int)local_390) {
                  do {
                    uVar21 = local_3a0;
                    local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_378.Data.ArrayNum = 0;
                    local_378.Data.ArrayMax = 0;
                    local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_3b0.Data.ArrayNum = 0;
                    local_3b0.Data.ArrayMax = 0;
                    uVar13 = 0;
                    uVar12 = uVar13;
                    if ((int)local_3a0 < (int)local_390) {
                      uVar12 = ~local_3a0 >> 0x1f;
                    }
                    if ((uVar12 == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar10)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar22 = local_398.Data + (longlong)(int)uVar21 * 0x10;
                    ::FString::FString(&local_2e0,L"=");
                    bVar10 = ::FString::Split((FString *)pFVar22,&local_2e0,&local_378,&local_3b0);
                    if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                    }
                    pawVar9 = CommandlineOverrideSpecifiers::PropertyStartIdentifier;
                    if ((bVar10) &&
                       (CommandlineOverrideSpecifiers::PropertyStartIdentifier !=
                        (wchar_t (*) [3])0x0)) {
                      sVar15 = wcslen(*CommandlineOverrideSpecifiers::PropertyStartIdentifier);
                      uVar12 = ::FString::Find(&local_378,*pawVar9,(int)sVar15,IgnoreCase,FromEnd,-1
                                              );
                      uVar21 = local_3a0;
                      if (1 < uVar12 + 1) {
                        uVar21 = local_378.Data.ArrayNum - 1;
                        if (local_378.Data.ArrayNum == 0) {
                          uVar21 = uVar13;
                        }
                        if ((int)uVar12 < (int)uVar21) {
                          uVar21 = uVar12;
                        }
                        uVar28 = uVar13;
                        if (0 < (int)uVar21) {
                          uVar28 = uVar21;
                        }
                        FVar24.Data = (FScriptContainerElement *)L"";
                        if (local_378.Data.ArrayNum != 0) {
                          FVar24.Data = local_378.Data.AllocatorInstance.Data;
                        }
                        ::FString::ConstructFromPtrSize(&local_3c0,(wchar_t *)FVar24.Data,uVar28);
                        pFVar19 = ::FString::Replace(&local_3c0,&local_2c8,
                                                     *CommandlineOverrideSpecifiers::
                                                      IniNameEndIdentifier,L"",IgnoreCase);
                        if (&local_3c0 != pFVar19) {
                          if (local_3c0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                          }
                          local_3c0.Data.AllocatorInstance.Data =
                               (pFVar19->Data).AllocatorInstance.Data;
                          (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_3c0.Data.ArrayNum = (pFVar19->Data).ArrayNum;
                          local_3c0.Data.ArrayMax = (pFVar19->Data).ArrayMax;
                          (pFVar19->Data).ArrayNum = 0;
                          (pFVar19->Data).ArrayMax = 0;
                        }
                        if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
                        }
                        pFVar19 = ::FString::Replace(&local_3c0,&local_2b8,
                                                     *CommandlineOverrideSpecifiers::
                                                      PropertyStartIdentifier,L"",IgnoreCase);
                        if (&local_3c0 != pFVar19) {
                          if (local_3c0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                          }
                          local_3c0.Data.AllocatorInstance.Data =
                               (pFVar19->Data).AllocatorInstance.Data;
                          (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_3c0.Data.ArrayNum = (pFVar19->Data).ArrayNum;
                          local_3c0.Data.ArrayMax = (pFVar19->Data).ArrayMax;
                          (pFVar19->Data).ArrayNum = 0;
                          (pFVar19->Data).ArrayMax = 0;
                        }
                        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
                        }
                        pFVar19 = ::FString::Replace(&local_3c0,&local_2a8,
                                                     *CommandlineOverrideSpecifiers::
                                                      SectionStartIdentifier,L"",IgnoreCase);
                        if (&local_3c0 != pFVar19) {
                          if (local_3c0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                          }
                          local_3c0.Data.AllocatorInstance.Data =
                               (pFVar19->Data).AllocatorInstance.Data;
                          (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_3c0.Data.ArrayNum = (pFVar19->Data).ArrayNum;
                          local_3c0.Data.ArrayMax = (pFVar19->Data).ArrayMax;
                          (pFVar19->Data).ArrayNum = 0;
                          (pFVar19->Data).ArrayMax = 0;
                        }
                        if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
                        }
                        ::FString::RightChop(&local_378,&local_360,uVar12 + 2);
                        uVar21 = local_3b0.Data.ArrayNum - 1;
                        if (local_3b0.Data.ArrayNum == 0) {
                          uVar21 = uVar13;
                        }
                        if (((1 < (int)uVar21) &&
                            (bVar10 = ::FString::StartsWith(&local_3b0,L"\"",1,IgnoreCase), bVar10))
                           && (bVar10 = ::FString::EndsWith(&local_3b0,L"\"",1,IgnoreCase), bVar10))
                        {
                          iVar11 = local_3b0.Data.ArrayNum + -3;
                          if (local_3b0.Data.ArrayNum == 0) {
                            iVar11 = -2;
                          }
                          pFVar19 = ::FString::Mid(&local_3b0,&local_298,1,iVar11);
                          if (&local_3b0 != pFVar19) {
                            if (local_3b0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
                            }
                            local_3b0.Data.AllocatorInstance.Data =
                                 (pFVar19->Data).AllocatorInstance.Data;
                            (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                            local_3b0.Data.ArrayNum = (pFVar19->Data).ArrayNum;
                            local_3b0.Data.ArrayMax = (pFVar19->Data).ArrayMax;
                            (pFVar19->Data).ArrayNum = 0;
                            (pFVar19->Data).ArrayMax = 0;
                          }
                          if (local_298.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_298.Data.AllocatorInstance.Data);
                          }
                        }
                        uVar29 = 0;
                        bVar10 = ::FString::StartsWith(&local_360,L"-",1,IgnoreCase);
                        if (bVar10) {
                          ::FString::RemoveFromStart(&local_360,L"-",1,IgnoreCase);
                          uVar29 = 3;
                        }
                        else {
                          bVar10 = ::FString::StartsWith(&local_360,L"+",1,IgnoreCase);
                          if (bVar10) {
                            ::FString::RemoveFromStart(&local_360,L"+",1,IgnoreCase);
                            uVar29 = 1;
                          }
                        }
                        if (local_3c0.Data.ArrayNum == 0) {
                          pwVar18 = L"";
                        }
                        else {
                          uVar13 = local_3c0.Data.ArrayNum - 1;
                          pwVar18 = (wchar_t *)local_3c0.Data.AllocatorInstance.Data;
                        }
                        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar18);
                        this_00 = local_310;
                        iVar11 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                                 ::FindIndexByHash<FString>
                                           ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                                             *)local_310,uVar13,&local_3c0);
                        if ((iVar11 == -1) ||
                           (lVar25 = (longlong)iVar11 * 0xb8 + this_00->_padding_, lVar25 == 0)) {
                          local_308 = &local_3c0;
                          TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                          ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                                    ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                                      *)this_00,(uint)&local_368,
                                     (TKeyInitializer<FString_const_&> *)(ulonglong)uVar13,
                                     (bool *)&local_308);
                          lVar25 = (longlong)local_368 * 0xb8 + this_00->_padding_;
                        }
                        FVar24.Data = local_3b0.Data.AllocatorInstance.Data;
                        iVar11 = local_3b0.Data.ArrayNum;
                        this = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                                *)(lVar25 + 0x10);
                        local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_364 = local_3b0.Data.ArrayMax;
                        local_3b0.Data.ArrayNum = 0;
                        local_3b0.Data.ArrayMax = 0;
                        if (iVar11 == 0) {
                          uVar13 = FCrc::StrCrc32<wchar_t>(L"",0);
                          pwVar18 = L"";
                        }
                        else {
                          uVar13 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar24.Data,0);
                          pwVar18 = (wchar_t *)FVar24.Data;
                        }
                        pFVar20 = FindNextExpansion(pwVar18,&local_2d0);
                        FVar31.Data = (FScriptContainerElement *)L"";
                        if (local_360.Data.ArrayNum != 0) {
                          FVar31.Data = local_360.Data.AllocatorInstance.Data;
                        }
                        if (*(int *)(lVar25 + 0x44) == 0) {
                          iVar14 = UE::Core::Private::
                                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x28,8,1,(ForAnyElementType *)this,
                                              (int *)(lVar25 + 0x18),(int *)(lVar25 + 0x1c));
                          TBitArray<FDefaultBitArrayAllocator>::Add
                                    ((TBitArray<FDefaultBitArrayAllocator> *)(lVar25 + 0x20),false);
                        }
                        else {
                          iVar14 = *(int *)(lVar25 + 0x40);
                          iVar1 = *(int *)(lVar25 + 0x44) + -1;
                          lVar4 = *(longlong *)&this->Elements;
                          iVar3 = *(int *)(lVar4 + 4 + (longlong)iVar14 * 0x28);
                          *(int *)(lVar25 + 0x40) = iVar3;
                          *(int *)(lVar25 + 0x44) = iVar1;
                          if (iVar1 != 0) {
                            *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x28) = 0xffffffff;
                          }
                        }
                        TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                         *)this,&local_320,iVar14);
                        this_01 = (TSparseSetElement<TTuple<FName,FConfigValue>_> *)
                                  CONCAT44(local_320.Pointer._4_4_,(int)local_320.Pointer);
                        if (this_01 == (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0) {
                          this_01 = (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0;
                        }
                        else {
                          ::FName::FName((FName *)this_01,(wchar_t *)FVar31.Data);
                          *(FScriptContainerElement **)&this_01->field_0x8 = FVar24.Data;
                          *(int *)&this_01->field_0x14 = local_364;
                          *(int *)&this_01->field_0x10 = iVar11;
                          this_01->field_0x1d = pFVar20 != (FConfigExpansion *)0x0;
                          *(uint *)&this_01->field_0x18 = uVar13;
                          this_01->field_0x1c = uVar29;
                          *(undefined4 *)&this_01->field_0x20 = 0xffffffff;
                          FVar24.Data = (FScriptContainerElement *)0x0;
                        }
                        uVar5 = *(undefined8 *)this_01;
                        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
                        TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                        ::RehashOrLink(this,(int)((ulonglong)uVar5 >> 0x20) + uVar13,this_01,
                                       local_320.Index);
                        if (FVar24.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(FVar24.Data);
                        }
                        if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_360.Data.AllocatorInstance.Data);
                        }
                        uVar21 = local_3a0;
                        if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                          uVar21 = local_3a0;
                        }
                      }
                    }
                    if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
                    }
                    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_378.Data.AllocatorInstance.Data);
                    }
                    local_3a0 = uVar21 + 1;
                    sVar15 = local_338;
                  } while ((int)local_3a0 < (int)local_390);
                }
                DestructItems<FString,int>((FString *)local_398.Data,(int)local_390);
                if (local_398.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_398.Data);
                }
                pwVar18 = local_330;
                if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_300.Data.AllocatorInstance.Data);
                  pwVar18 = local_330;
                }
              }
              bVar10 = FParse::Token(&local_328,&local_350,false,L'\0');
            } while (bVar10);
          }
          if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      if (((ushort)(wVar26 + L'﾿') < 0x1a) || ((ushort)(wVar26 + L'￐') < 10)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      if (wVar26 == L'\"') {
        bVar7 = !bVar7;
      }
      pwVar18 = pwVar27;
      wVar2 = *pwVar27;
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return;
}

// ProcessCommand @ 141885dd0

void __thiscall
FConfigFile::ProcessCommand
          (FConfigFile *this,FConfigSection *param_1,TStringView<wchar_t> *param_2,
          EValueType param_3,FName param_4,FString *param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FConfigValue *pFVar5;
  FConfigExpansion *pFVar6;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *this_00;
  ForAnyElementType FVar7;
  FName local_res20;
  wchar_t *local_58;
  FString local_50;
  uint local_40;
  undefined2 local_3c;
  TBaseKeyIterator<0> local_38;
  FConfigValue local_20;
  
  switch(param_3) {
  case Set:
    bVar4 = FConfigSection::HandleArrayOfKeyedStructsCommand(param_1,param_4,param_5);
    if (!bVar4) {
      pFVar5 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
               ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                       *)param_1,param_4);
      if (pFVar5 == (FConfigValue *)0x0) {
        pFVar5 = FConfigValue::FConfigValue(&local_20,param_1,param_4,param_5,Combined);
        TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
        ::Emplace<FName_const_&,FConfigValue>
                  ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)param_1,&param_4,pFVar5);
        if (local_20.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_20.SavedValue.Data.AllocatorInstance.Data);
        }
      }
      else {
        FConfigValue::operator=(pFVar5,param_5);
      }
    }
    break;
  case ArrayAdd:
    bVar4 = true;
    goto LAB_141885e8b;
  case ArrayAddUnique:
    bVar4 = false;
LAB_141885e8b:
    FConfigSection::HandleAddCommand(param_1,param_4,param_5,bVar4);
    break;
  case Remove:
    ::FString::FString(&local_50,param_5);
    local_3c = 8;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar7.Data = local_50.Data.AllocatorInstance.Data;
    }
    local_40 = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar7.Data,0);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_50.Data.ArrayNum != 0) {
      FVar7.Data = local_50.Data.AllocatorInstance.Data;
    }
    pFVar6 = FindNextExpansion((wchar_t *)FVar7.Data,&local_58);
    local_3c = CONCAT11(pFVar6 != (FConfigExpansion *)0x0,(undefined1)local_3c);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_38,
               (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                *)param_1,param_4);
    if (local_38.Index != -1) {
      lVar2 = *(longlong *)&(local_38.Set)->Elements;
      do {
        if (*(uint *)(lVar2 + 0x18 + (longlong)local_38.Index * 0x28) == local_40) {
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                           *)param_1,local_38.Index);
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          ::CompactStable((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                           *)param_1);
          break;
        }
        if (local_38.NextIndex == -1) break;
        do {
          iVar1 = *(int *)(lVar2 + 0x20 + (longlong)local_38.NextIndex * 0x28);
          local_38.Index = local_38.NextIndex;
          if (*(FName *)(lVar2 + (longlong)local_38.NextIndex * 0x28) == local_38.Key) break;
          local_38.Index = iVar1;
          local_38.NextIndex = iVar1;
        } while (iVar1 != -1);
        local_38.NextIndex = iVar1;
      } while (local_38.Index != -1);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    break;
  case Clear:
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::RemoveStable((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)param_1,param_4);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&param_1->EmptyInitializedKeys,param_4);
    break;
  case InitializeToEmpty:
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&param_1->EmptyInitializedKeys,&local_res20,(bool *)&param_4);
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::RemoveStable((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)param_1,param_4);
    break;
  case ArrayOfStructKey:
    TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
    Emplace<FName_const_&,FString>
              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)&param_1->ArrayOfStructKeys,&param_4,param_5);
    break;
  case POCArrayOfStructKey:
    this_00 = FindOrAddHeterogeneous<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,TStringView<wchar_t>_>
                        (&this->PerObjectConfigArrayOfStructKeys,param_2);
    TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
    Emplace<FName_const_&,FString>
              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)this_00,&param_4,param_5);
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
                       ,0x704,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// ProcessInputFileContents @ 141886070

void __thiscall
FConfigFile::ProcessInputFileContents
          (FConfigFile *this,TStringView<wchar_t> *param_1,FString *param_2)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FillFileFromBuffer<FConfigFile>(this,&local_18,false,param_2);
  return;
}

// ProcessPropertyAndWriteForDefaults @ 1418860a0

void __thiscall
FConfigFile::ProcessPropertyAndWriteForDefaults
          (FConfigFile *this,int param_1,
          TArray<FConfigValue_const_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3,
          FString *param_4,FString *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res8 [8];
  FString local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  if (0 < (int)(this->Branch->Hierarchy)._padding_ -
          *(int *)((longlong)&(this->Branch->Hierarchy)._padding_ + 4)) {
    local_68.Data.ArrayNum = (param_5->Data).ArrayNum;
    lVar6 = (longlong)local_68.Data.ArrayNum;
    pFVar9 = (param_5->Data).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar9,lVar6 * 2);
    }
    bVar2 = ::FString::RemoveFromStart(&local_68,L"+",1,IgnoreCase);
    bVar3 = ::FString::RemoveFromStart(&local_68,L"!",1,IgnoreCase);
    ::FString::ConcatCF(&local_38,L"-",&local_68);
    if ((bVar3) && (param_2->ArrayNum == 1)) {
      puVar1 = *(undefined8 **)(param_2->AllocatorInstance).Data;
      if (*(int *)(puVar1 + 1) == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)*puVar1;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp(pwVar5,L"__ClearArray__");
      if (iVar4 == 0) {
        GetSourceProperties(&local_48,&this->Branch->Hierarchy,param_1,param_4,&local_68);
        iVar4 = local_48.ArrayNum;
        pFVar9 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x10;
        FVar7.Data = local_48.AllocatorInstance.Data;
        while( true ) {
          if (local_48.ArrayNum != iVar4) {
            `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (FVar7.Data == pFVar9) break;
          local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.ArrayNum = 0;
          local_58.ArrayMax = 0;
          AppendExportedPropertyLine((FString *)&local_58,&local_38,(FString *)FVar7.Data);
          iVar10 = local_58.ArrayNum + -1;
          if (local_58.ArrayNum == 0) {
            iVar10 = 0;
          }
          ::FString::AppendChars(param_3,(wchar_t *)local_58.AllocatorInstance.Data,iVar10);
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
          FVar7.Data = FVar7.Data + 0x10;
        }
        DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        return;
      }
    }
    if ((bVar2) || (1 < param_2->ArrayNum)) {
      GetSourceProperties(&local_58,&this->Branch->Hierarchy,param_1,param_4,&local_68);
      iVar4 = local_58.ArrayNum;
      pFVar9 = local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 0x10;
      FVar7.Data = local_58.AllocatorInstance.Data;
      while( true ) {
        if (local_58.ArrayNum != iVar4) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar7.Data == pFVar9) break;
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        AppendExportedPropertyLine((FString *)&local_48,&local_38,(FString *)FVar7.Data);
        iVar10 = local_48.ArrayNum + -1;
        if (local_48.ArrayNum == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(param_3,(wchar_t *)local_48.AllocatorInstance.Data,iVar10);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        FVar7.Data = FVar7.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar4 = param_2->ArrayNum;
  pFVar9 = pFVar8 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar4) {
      `TCheckedPointerIterator<FConfigValue_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    AppendExportedPropertyLine((FString *)&local_48,param_5,*(FString **)pFVar8);
    iVar10 = local_48.ArrayNum + -1;
    if (local_48.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(param_3,(wchar_t *)local_48.AllocatorInstance.Data,iVar10);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// ProcessSourceAndCheckAgainstBackup @ 141886400

void __thiscall FConfigFile::ProcessSourceAndCheckAgainstBackup(FConfigFile *this)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3162,"ProcessSourceAndCheckAgainstBackup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ConfigCacheIni.cpp"
               ,0xc5a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3162);
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// Read @ 141886940

void __thiscall FConfigFile::Read(FConfigFile *this,FString *param_1)

{
  FillFileFromDisk<FConfigFile>(this,param_1,false);
  return;
}

// RemoveFromSection @ 14188b000

bool __thiscall
FConfigFile::RemoveFromSection(FConfigFile *this,wchar_t *param_1,FName param_2,FString *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  FConfigExpansion *pFVar4;
  FConfigValue *pFVar5;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar6;
  ForAnyElementType FVar7;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar8;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *this_00;
  undefined4 local_res8 [2];
  FString local_68;
  FConfigValue local_58;
  TBaseKeyIterator<0> local_40;
  
  pTVar8 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            *)0x0;
  local_res8[0] = 0;
  ::FString::FString(&local_68,param_1);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  iVar3 = local_68.Data.ArrayNum + -1;
  FVar7.Data = local_68.Data.AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar7.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar7.Data);
  iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar2,&local_68);
  pTVar6 = pTVar8;
  if (iVar3 != -1) {
    pTVar6 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)((longlong)iVar3 * 0x110 + this->_padding_);
  }
  this_00 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
             *)&(pTVar6->Elements).field_0x10;
  if (pTVar6 == (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                 *)0x0) {
    this_00 = pTVar8;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (this_00 !=
      (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
       *)0x0) {
    ::FString::FString(&local_58.SavedValue,param_3);
    iVar3 = local_58.SavedValue.Data.ArrayNum;
    local_58.ValueType = Combined;
    local_58.bExpandOnDemand = false;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_58.SavedValue.Data.ArrayNum != 0) {
      FVar7.Data = local_58.SavedValue.Data.AllocatorInstance.Data;
    }
    local_58.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar7.Data,0);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (iVar3 != 0) {
      FVar7.Data = local_58.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar4 = FindNextExpansion((wchar_t *)FVar7.Data,(wchar_t **)local_res8);
    local_58.bExpandOnDemand = pFVar4 != (FConfigExpansion *)0x0;
    pTVar8 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)&DAT_00000001;
    pFVar5 = TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
             ::FindPair((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                         *)this_00,param_2,&local_58);
    if (pFVar5 != (FConfigValue *)0x0) {
      bVar1 = false;
      goto LAB_14188b117;
    }
  }
  bVar1 = true;
LAB_14188b117:
  if ((pTVar8 != (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                  *)0x0) &&
     (local_58.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.SavedValue.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    bVar1 = false;
  }
  else {
    ::FString::FString(&local_58.SavedValue,param_3);
    local_58.ValueType = Combined;
    local_58.bExpandOnDemand = false;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_58.SavedValue.Data.ArrayNum != 0) {
      FVar7.Data = local_58.SavedValue.Data.AllocatorInstance.Data;
    }
    local_58.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar7.Data,0);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_58.SavedValue.Data.ArrayNum != 0) {
      FVar7.Data = local_58.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar4 = FindNextExpansion((wchar_t *)FVar7.Data,(wchar_t **)local_res8);
    local_58.bExpandOnDemand = pFVar4 != (FConfigExpansion *)0x0;
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>(&local_40,this_00,param_2);
joined_r0x00014188b191:
    if (local_40.Index != -1) {
      if (*(uint *)(*(longlong *)&(local_40.Set)->Elements + 0x18 + (longlong)local_40.Index * 0x28)
          == local_58.SavedValueHash) {
        TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
        ::RemoveByIndex(local_40.Set,local_40.Index);
      }
      if (local_40.NextIndex == -1) goto LAB_14188b1ef;
      local_40.Index = local_40.NextIndex;
      do {
        local_40.NextIndex =
             *(int *)(*(longlong *)&(local_40.Set)->Elements + 0x20 +
                     (longlong)local_40.Index * 0x28);
        if (*(FName *)(*(longlong *)&(local_40.Set)->Elements + (longlong)local_40.Index * 0x28) ==
            local_40.Key) break;
        local_40.Index = local_40.NextIndex;
      } while (local_40.NextIndex != -1);
      goto joined_r0x00014188b191;
    }
LAB_14188b1ef:
    if (local_58.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.SavedValue.Data.AllocatorInstance.Data);
    }
    this->Dirty = true;
    bVar1 = true;
  }
  return bVar1;
}

// RemoveKeyFromSection @ 14188b460

bool __thiscall FConfigFile::RemoveKeyFromSection(FConfigFile *this,wchar_t *param_1,FName param_2)

{
  FConfigCommandStream *this_00;
  FName FVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FConfigExpansion *pFVar5;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar6;
  ForAnyElementType FVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *this_01;
  FName local_res8 [2];
  FName local_res18;
  FString *local_res20;
  FString local_68;
  FConfigValue local_58;
  
  local_res18 = param_2;
  ::FString::FString(&local_68,param_1);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar7.Data = local_68.Data.AllocatorInstance.Data;
  }
  iVar4 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar7.Data);
  iVar4 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar3,&local_68);
  pTVar6 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            *)0x0;
  if (iVar4 != -1) {
    pTVar6 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)((longlong)iVar4 * 0x110 + this->_padding_);
  }
  this_01 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
             *)&(pTVar6->Elements).field_0x10;
  if (pTVar6 == (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                 *)0x0) {
    this_01 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
               *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FVar1 = local_res18;
  if (this_01 !=
      (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
       *)0x0) {
    uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
    FVar2 = local_res18;
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      FVar8 = (this_01->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this_01->Hash;
      }
      iVar4 = *(int *)((longlong)FVar8 +
                      (ulonglong)(this_01->HashSize - 1U & FVar1.Number + uVar3) * 4);
      if (iVar4 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this_01->Elements + (longlong)iVar4 * 0x28) == FVar1) {
            local_res8[0] = local_res18;
            uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
            TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(this_01,FVar2.Number + uVar3,local_res8);
            this->Dirty = true;
            this_00 = this->ChangeTracker;
            if (this_00 != (FConfigCommandStream *)0x0) {
              ::FString::FString(&local_68,param_1);
              iVar4 = local_68.Data.ArrayNum + -1;
              FVar7.Data = local_68.Data.AllocatorInstance.Data;
              if (local_68.Data.ArrayNum == 0) {
                iVar4 = 0;
                FVar7.Data = (FScriptContainerElement *)L"";
              }
              uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar7.Data);
              iVar4 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>
                                ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                                  *)this_00,uVar3,&local_68);
              if ((iVar4 == -1) ||
                 (lVar9 = (longlong)iVar4 * 0xb8 + *(longlong *)&this_00->_padding_, lVar9 == 0)) {
                local_res20 = &local_68;
                TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                          ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                            *)this_00,(uint)local_res8,
                           (TKeyInitializer<FString_const_&> *)(ulonglong)uVar3,(bool *)&local_res20
                          );
                lVar9 = (longlong)(int)local_res8[0].ComparisonIndex.Value * 0xb8 +
                        *(longlong *)&this_00->_padding_;
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              FVar1 = local_res18;
              local_res8[0] = local_res18;
              if (*(int *)(lVar9 + 0x18) != *(int *)(lVar9 + 0x44)) {
                uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
                TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                                     *)(lVar9 + 0x10),FVar1.Number + uVar3,local_res8);
              }
              ::FString::FString(&local_58.SavedValue,L"__Clear__");
              local_58.ValueType = Clear;
              local_58.bExpandOnDemand = false;
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_58.SavedValue.Data.ArrayNum != 0) {
                FVar7.Data = local_58.SavedValue.Data.AllocatorInstance.Data;
              }
              local_58.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar7.Data,0);
              FVar7.Data = (FScriptContainerElement *)L"";
              if (local_58.SavedValue.Data.ArrayNum != 0) {
                FVar7.Data = local_58.SavedValue.Data.AllocatorInstance.Data;
              }
              pFVar5 = FindNextExpansion((wchar_t *)FVar7.Data,(wchar_t **)local_res8);
              local_58.bExpandOnDemand = pFVar5 != (FConfigExpansion *)0x0;
              TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::Emplace<FName_const_&,FConfigValue>
                        ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                          *)(lVar9 + 0x10),&local_res18,&local_58);
              if (local_58.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_58.SavedValue.Data.AllocatorInstance.Data);
              }
            }
            return true;
          }
          iVar4 = *(int *)(*(longlong *)&this_01->Elements + 0x20 + (longlong)iVar4 * 0x28);
        } while (iVar4 != -1);
      }
    }
  }
  return false;
}

// ResetKeyInSection @ 14188ca10

bool __thiscall FConfigFile::ResetKeyInSection(FConfigFile *this,wchar_t *param_1,FName param_2)

{
  FConfigCommandStream *this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar4;
  ForAnyElementType FVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  FNameEntryId FVar8;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *this_01;
  FName local_res8 [2];
  FName local_res18;
  FString *local_res20;
  FString local_48;
  
  local_res18 = param_2;
  ::FString::FString(&local_48,param_1);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar5.Data);
  iVar2 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar1,&local_48);
  pTVar4 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            *)0x0;
  if (iVar2 != -1) {
    pTVar4 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)((longlong)iVar2 * 0x110 + this->_padding_);
  }
  this_01 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
             *)&(pTVar4->Elements).field_0x10;
  if (pTVar4 == (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                 *)0x0) {
    this_01 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
               *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this_01 !=
      (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
       *)0x0) {
    FVar8 = param_2.ComparisonIndex.Value;
    uVar1 = ::GetTypeHash(FVar8);
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      FVar6 = (this_01->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&this_01->Hash;
      }
      iVar2 = *(int *)((longlong)FVar6 +
                      (ulonglong)(this_01->HashSize - 1U & param_2.Number + uVar1) * 4);
      if (iVar2 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this_01->Elements + (longlong)iVar2 * 0x28) == param_2) {
            local_res8[0] = param_2;
            uVar3 = ::GetTypeHash(FVar8);
            uVar1 = local_res18.Number;
            TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(this_01,uVar3 + local_res18.Number,local_res8);
            this_00 = this->ChangeTracker;
            if (this_00 != (FConfigCommandStream *)0x0) {
              ::FString::FString(&local_48,param_1);
              iVar2 = local_48.Data.ArrayNum + -1;
              FVar5.Data = local_48.Data.AllocatorInstance.Data;
              if (local_48.Data.ArrayNum == 0) {
                iVar2 = 0;
                FVar5.Data = (FScriptContainerElement *)L"";
              }
              uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,(wchar_t *)FVar5.Data);
              iVar2 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                      ::FindIndexByHash<FString>
                                ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                                  *)this_00,uVar3,&local_48);
              if ((iVar2 == -1) ||
                 (lVar7 = (longlong)iVar2 * 0xb8 + *(longlong *)&this_00->_padding_, lVar7 == 0)) {
                local_res20 = &local_48;
                TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                          ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                            *)this_00,(uint)local_res8,
                           (TKeyInitializer<FString_const_&> *)(ulonglong)uVar3,(bool *)&local_res20
                          );
                lVar7 = (longlong)(int)local_res8[0].ComparisonIndex.Value * 0xb8 +
                        *(longlong *)&this_00->_padding_;
              }
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
              if (*(int *)(lVar7 + 0x18) != *(int *)(lVar7 + 0x44)) {
                local_res8[0] = param_2;
                uVar3 = ::GetTypeHash(FVar8);
                TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                                     *)(lVar7 + 0x10),uVar3 + uVar1,local_res8);
              }
            }
            this->Dirty = true;
            return true;
          }
          iVar2 = *(int *)(*(longlong *)&this_01->Elements + 0x20 + (longlong)iVar2 * 0x28);
        } while (iVar2 != -1);
      }
    }
  }
  return false;
}

// SaveSourceToBackupFile @ 14188e450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConfigFile::SaveSourceToBackupFile(FConfigFile *this)

{
  bool bVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FConfigFile *pFVar8;
  int iVar9;
  uint uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  FName local_res8;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f8;
  TIterator local_e8;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  longlong *local_88;
  undefined1 auStack_80 [16];
  uint uStack_70;
  uint uStack_6c;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_60;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *local_58;
  undefined2 local_50;
  FString local_48;
  undefined4 local_2c;
  
  iVar12 = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  pTVar2 = &FPaths::ProjectIntermediateDir(&local_128)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_f8,pTVar2,0x20 - (uint)(pTVar2->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_f8,L"Config/CoalescedSourceConfigs/",0x1e);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&this->Name,&local_128);
  iVar13 = 0;
  ::FString::PrintfImpl(&local_108,L"%s%s.ini");
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pFVar8 = &this->Branch->FinalCombinedLayers;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_e8,
             (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)pFVar8);
  uStack_70 = (undefined4)local_e8._padding_;
  auStack_80._8_8_ = local_e8._padding_;
  uStack_6c = local_e8._padding_._4_4_;
  auStack_80._0_8_ = CONCAT44(local_e8._padding_._4_4_,(int)local_e8._padding_);
  local_50 = 0;
  local_88 = (longlong *)local_e8._padding_;
  pTStack_60 = local_e8.Set;
  uVar4 = auStack_80._16_8_ >> 0x20;
  local_58 = (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)pFVar8;
  if (local_e8._padding_._4_4_ < *(int *)(local_e8._padding_ + 0x18)) {
    iVar15 = 1;
    do {
      plVar14 = (longlong *)(*local_88 + 0x10 + (longlong)(int)uVar4 * 0x110);
      ::FString::PrintfImpl(&local_128,L"[%s]\r\n");
      iVar9 = local_128.Data.ArrayNum + -1;
      if (local_128.Data.ArrayNum == 0) {
        iVar9 = iVar13;
      }
      ::FString::AppendChars(&local_138,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar9);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      iVar9 = (int)plVar14[5];
      local_e8._padding_ = (longlong)(plVar14 + 2);
      local_e8._padding_._4_4_ = 1;
      local_e8._padding_._0_4_ = iVar13;
      local_e8._padding_._0_4_ = iVar13;
      local_e8._padding_._4_4_ = 0;
      if (iVar9 != 0) {
        pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)local_e8._padding_;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar11 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
        }
        local_e8._padding_._4_4_ = *(uint *)(pTVar11->AllocatorInstance).InlineData;
        local_e8._padding_._0_4_ = iVar12;
        local_e8._padding_._0_4_ = iVar12;
        while (local_e8._padding_._4_4_ == 0) {
          lVar5 = (longlong)(int)local_e8._padding_;
          local_e8._padding_._0_4_ = (int)local_e8._padding_ + 0x20;
          local_e8._padding_._0_4_ = (int)local_e8._padding_ + 1;
          local_e8._padding_._4_4_ = 1;
          local_e8._padding_._4_4_ = iVar9;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_e8._padding_)
          goto LAB_14188e68a;
          local_e8._padding_._4_4_ =
               *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar5 * 4 + 4);
        }
        local_e8._padding_._4_4_ = -local_e8._padding_._4_4_ & local_e8._padding_._4_4_;
        uVar4 = (ulonglong)local_e8._padding_._4_4_ * 2 + 1;
        lVar5 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_e8._padding_._4_4_ = (int)local_e8._padding_ + -1 + (int)lVar5;
        if (iVar9 < local_e8._padding_._4_4_) {
          local_e8._padding_._4_4_ = iVar9;
        }
      }
LAB_14188e68a:
      local_e8._padding_._0_4_ = 0xffffffff;
      local_e8._padding_._4_4_ = local_2c;
      TStack_b0._padding_ = CONCAT44(local_e8._padding_._4_4_,(int)local_e8._padding_);
      TStack_b0.CurrentBitIndex = local_e8._padding_._4_4_;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      TStack_b0._28_4_ = local_2c;
      TStack_b0.BaseBitIndex = (int)local_e8._padding_;
      local_e8._padding_ = (longlong)plVar14;
      local_b8 = plVar14;
      TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8._padding_;
      iVar7 = local_e8._padding_._4_4_;
      if (local_e8._padding_._4_4_ < iVar9) {
        do {
          local_res8 = *(FName *)(*local_b8 + (longlong)iVar7 * 0x28);
          lVar5 = *local_b8;
          pFVar3 = ::FName::ToString(&local_res8,&local_48);
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          AppendExportedPropertyLine
                    (&local_118,pFVar3,(FString *)(lVar5 + ((longlong)iVar7 * 5 + 1) * 8));
          iVar9 = local_118.Data.ArrayNum + -1;
          if (local_118.Data.ArrayNum == 0) {
            iVar9 = iVar12;
          }
          ::FString::AppendChars(&local_138,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar9);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
          iVar7 = TStack_b0.CurrentBitIndex;
        } while (TStack_b0.CurrentBitIndex < (TStack_b0.Array)->NumBits);
      }
      ::FString::AppendChars(&local_138,L"\r\n",2);
      uStack_70 = uStack_70 & ~auStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_80);
      uVar4 = (ulonglong)uStack_6c;
    } while ((int)uStack_6c < *(int *)(auStack_80._8_8_ + 0x18));
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      uVar10 = *(int *)&(local_58->Elements).field_0x8 - *(int *)&(local_58->Elements).field_0x34;
      if (3 < uVar10) {
        uVar4 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar10) && (local_58->HashSize < iVar15)) || (iVar15 < local_58->HashSize)) {
        local_58->HashSize = iVar15;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::Rehash(local_58);
      }
    }
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar6.Data = local_108.Data.AllocatorInstance.Data;
  }
  bVar1 = SaveConfigFileWrapper((wchar_t *)FVar6.Data,&local_138);
  if ((!bVar1) && (2 < (byte)LogConfig._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogConfig);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// SetArray @ 14188f080

void __thiscall
FConfigFile::SetArray
          (FConfigFile *this,wchar_t *param_1,wchar_t *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *this_00;
  FName FVar1;
  FScriptContainerElement *pFVar2;
  FConfigCommandStream *this_01;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FConfigSection *this_02;
  FName *pFVar8;
  FConfigExpansion *pFVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  int local_res8 [2];
  wchar_t *local_res10;
  FName local_res20;
  FString local_f8;
  FConfigValue local_e8;
  FConfigValue local_d0;
  FConfigValue local_b8;
  FName local_a0;
  FString *local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FString local_78;
  FName local_68;
  FName local_60;
  wchar_t *local_58;
  FName local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  
  local_res10 = param_1;
  ::FString::FString(&local_78,param_1);
  this_02 = FindOrAddSectionInternal(this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar8 = ::FName::FName(&local_68,param_2);
  FVar1 = *pFVar8;
  local_res20 = FVar1;
  if ((int)this_02->_padding_ != *(int *)((longlong)&this_02->_padding_ + 4)) {
    uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar6 = TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                                 *)this_02,FVar1.Number + uVar5,&local_res20);
    if (0 < iVar6) {
      this->Dirty = true;
    }
  }
  iVar6 = param_3->ArrayNum;
  uVar5 = 0;
  if (0 < iVar6) {
    do {
      uVar7 = 0;
      if ((int)uVar5 < iVar6) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_3->AllocatorInstance).Data;
      ::FName::FName(&local_60,param_2);
      ::FString::FString(&local_e8.SavedValue,(FString *)(pFVar2 + (longlong)(int)uVar5 * 0x10));
      iVar6 = local_e8.SavedValue.Data.ArrayNum;
      local_e8.ValueType = Combined;
      local_e8.bExpandOnDemand = false;
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_e8.SavedValue.Data.ArrayNum != 0) {
        FVar10.Data = local_e8.SavedValue.Data.AllocatorInstance.Data;
      }
      local_e8.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar10.Data,0);
      FVar10.Data = (FScriptContainerElement *)L"";
      if (iVar6 != 0) {
        FVar10.Data = local_e8.SavedValue.Data.AllocatorInstance.Data;
      }
      pFVar9 = FindNextExpansion((wchar_t *)FVar10.Data,&local_58);
      local_e8.bExpandOnDemand = pFVar9 != (FConfigExpansion *)0x0;
      ::FName::FName(&local_a0,param_2);
      TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
      ::Emplace<FName,FConfigValue>
                ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                  *)this_02,&local_a0,&local_e8);
      if (local_e8.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.SavedValue.Data.AllocatorInstance.Data);
      }
      this->Dirty = true;
      uVar5 = uVar5 + 1;
      iVar6 = param_3->ArrayNum;
      param_1 = local_res10;
    } while ((int)uVar5 < iVar6);
  }
  this_01 = this->ChangeTracker;
  if (this_01 != (FConfigCommandStream *)0x0) {
    ::FString::FString(&local_f8,param_1);
    iVar6 = local_f8.Data.ArrayNum + -1;
    FVar10.Data = local_f8.Data.AllocatorInstance.Data;
    if (local_f8.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar10.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar10.Data);
    iVar6 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                        *)this_01,uVar5,&local_f8);
    if ((iVar6 == -1) ||
       (lVar11 = (longlong)iVar6 * 0xb8 + *(longlong *)&this_01->_padding_, lVar11 == 0)) {
      local_98 = &local_f8;
      TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                  *)this_01,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar5,
                 (bool *)&local_98);
      lVar11 = (longlong)local_res8[0] * 0xb8 + *(longlong *)&this_01->_padding_;
    }
    this_00 = (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
               *)(lVar11 + 0x10);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    pFVar8 = ::FName::FName(&local_50,param_2);
    FVar1 = *pFVar8;
    local_90 = FVar1;
    if (*(int *)(lVar11 + 0x18) != *(int *)(lVar11 + 0x44)) {
      uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      iVar6 = TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              ::RemoveImpl<FName>(this_00,FVar1.Number + uVar5,&local_90);
      if (0 < iVar6) {
        ::FString::FString(&local_d0.SavedValue,L"__Clear__");
        local_d0.ValueType = Clear;
        local_d0.bExpandOnDemand = false;
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_d0.SavedValue.Data.ArrayNum != 0) {
          FVar10.Data = local_d0.SavedValue.Data.AllocatorInstance.Data;
        }
        local_d0.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar10.Data,0);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_d0.SavedValue.Data.ArrayNum != 0) {
          FVar10.Data = local_d0.SavedValue.Data.AllocatorInstance.Data;
        }
        pFVar9 = FindNextExpansion((wchar_t *)FVar10.Data,&local_48);
        local_d0.bExpandOnDemand = pFVar9 != (FConfigExpansion *)0x0;
        ::FName::FName(&local_88,param_2);
        TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
        ::Emplace<FName,FConfigValue>
                  ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this_00,&local_88,&local_d0);
        if (local_d0.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.SavedValue.Data.AllocatorInstance.Data);
        }
      }
    }
    iVar6 = param_3->ArrayNum;
    uVar5 = 0;
    if (0 < iVar6) {
      do {
        uVar7 = 0;
        if ((int)uVar5 < iVar6) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::FString(&local_b8.SavedValue,
                           (FString *)
                           ((param_3->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x10));
        iVar6 = local_b8.SavedValue.Data.ArrayNum;
        local_b8.ValueType = ArrayAdd;
        local_b8.bExpandOnDemand = false;
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_b8.SavedValue.Data.ArrayNum != 0) {
          FVar10.Data = local_b8.SavedValue.Data.AllocatorInstance.Data;
        }
        local_b8.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar10.Data,0);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (iVar6 != 0) {
          FVar10.Data = local_b8.SavedValue.Data.AllocatorInstance.Data;
        }
        pFVar9 = FindNextExpansion((wchar_t *)FVar10.Data,&local_40);
        local_b8.bExpandOnDemand = pFVar9 != (FConfigExpansion *)0x0;
        ::FName::FName(&local_80,param_2);
        TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
        ::Emplace<FName,FConfigValue>
                  ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this_00,&local_80,&local_b8);
        if (local_b8.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.SavedValue.Data.AllocatorInstance.Data);
        }
        iVar6 = param_3->ArrayNum;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar6);
    }
  }
  return;
}

// SetBool @ 14188f6e0

void __thiscall
FConfigFile::SetBool(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,bool param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"False";
  if (param_3) {
    pwVar1 = L"True";
  }
  SetString(this,param_1,param_2,pwVar1);
  return;
}

// SetDouble @ 14188faa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigFile::SetDouble(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,double param_3)

{
  undefined1 auStack_848 [32];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  TCString<wchar_t>::SprintfImpl(local_828,L"%.*g");
  SetString(this,param_1,param_2,local_828);
  return;
}

// SetFloat @ 14188fe90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigFile::SetFloat(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,float param_3)

{
  undefined1 auStack_848 [32];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  TCString<wchar_t>::SprintfImpl(local_828,L"%.*g");
  SetString(this,param_1,param_2,local_828);
  return;
}

// SetInSection @ 141890060

bool __thiscall
FConfigFile::SetInSection(FConfigFile *this,wchar_t *param_1,FName param_2,FString *param_3)

{
  FConfigCommandStream *this_00;
  FName FVar1;
  uint uVar2;
  int iVar3;
  FConfigSection *this_01;
  FConfigExpansion *pFVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  FName local_res8;
  FName local_res18 [2];
  FString *local_68;
  FString local_60;
  FConfigValue local_50;
  
  local_res18[0] = param_2;
  ::FString::FString(&local_60,param_1);
  this_01 = FindOrAddSectionInternal(this,&local_60);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  FVar1 = local_res18[0];
  local_res8 = local_res18[0];
  if ((int)this_01->_padding_ != *(int *)((longlong)&this_01->_padding_ + 4)) {
    uVar2 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                         *)this_01,FVar1.Number + uVar2,&local_res8);
  }
  ::FString::FString(&local_50.SavedValue,param_3);
  iVar3 = local_50.SavedValue.Data.ArrayNum;
  local_50.ValueType = Combined;
  local_50.bExpandOnDemand = false;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_50.SavedValue.Data.ArrayNum != 0) {
    FVar5.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
  }
  local_50.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar5.Data,0);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (iVar3 != 0) {
    FVar5.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
  }
  pFVar4 = FindNextExpansion((wchar_t *)FVar5.Data,(wchar_t **)&local_res8);
  local_50.bExpandOnDemand = pFVar4 != (FConfigExpansion *)0x0;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  ::Emplace<FName_const_&,FConfigValue>
            ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)this_01,local_res18,&local_50);
  if (local_50.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.SavedValue.Data.AllocatorInstance.Data);
  }
  this->Dirty = true;
  this_00 = this->ChangeTracker;
  if (this_00 != (FConfigCommandStream *)0x0) {
    ::FString::FString(&local_60,param_1);
    iVar3 = local_60.Data.ArrayNum + -1;
    FVar5.Data = local_60.Data.AllocatorInstance.Data;
    if (local_60.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar5.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar5.Data);
    iVar3 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                        *)this_00,uVar2,&local_60);
    if ((iVar3 == -1) ||
       (lVar6 = (longlong)iVar3 * 0xb8 + *(longlong *)&this_00->_padding_, lVar6 == 0)) {
      local_68 = &local_60;
      TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                ((TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
                  *)this_00,(uint)&local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar2,
                 (bool *)&local_68);
      lVar6 = (longlong)(int)local_res8.ComparisonIndex.Value * 0xb8 +
              *(longlong *)&this_00->_padding_;
    }
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    FVar1 = local_res18[0];
    local_res8 = local_res18[0];
    if (*(int *)(lVar6 + 0x18) != *(int *)(lVar6 + 0x44)) {
      uVar2 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
      TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                           *)(lVar6 + 0x10),FVar1.Number + uVar2,&local_res8);
    }
    ::FString::FString(&local_50.SavedValue,param_3);
    local_50.ValueType = Set;
    local_50.bExpandOnDemand = false;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_50.SavedValue.Data.ArrayNum != 0) {
      FVar5.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
    }
    local_50.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar5.Data,0);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_50.SavedValue.Data.ArrayNum != 0) {
      FVar5.Data = local_50.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar4 = FindNextExpansion((wchar_t *)FVar5.Data,(wchar_t **)&local_res8);
    local_50.bExpandOnDemand = pFVar4 != (FConfigExpansion *)0x0;
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)(lVar6 + 0x10),local_res18,&local_50);
    if (local_50.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.SavedValue.Data.AllocatorInstance.Data);
    }
  }
  return true;
}

// SetInt64 @ 1418903b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigFile::SetInt64(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,long64 param_3)

{
  undefined1 auStack_848 [32];
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_848;
  TCString<wchar_t>::SprintfImpl(local_828,L"%lld");
  SetString(this,param_1,param_2,local_828);
  return;
}

// SetString @ 141890c30

void __thiscall
FConfigFile::SetString(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int iVar1;
  FConfigSection *this_00;
  FName *pFVar2;
  FConfigValue *this_01;
  FConfigExpansion *pFVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  wchar_t *_Str1;
  FName local_58;
  FName local_50;
  wchar_t *local_48;
  FString local_40;
  FConfigValue local_30;
  
  ::FString::FString(&local_40,param_1);
  this_00 = FindOrAddSectionInternal(this,&local_40);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FName::FName(&local_58,param_2);
  this_01 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                    *)this_00,*pFVar2);
  if (this_01 == (FConfigValue *)0x0) {
    ::FName::FName(&local_50,param_2);
    ::FString::FString(&local_30.SavedValue,param_3);
    local_30.ValueType = Combined;
    local_30.bExpandOnDemand = false;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_30.SavedValue.Data.ArrayNum != 0) {
      FVar5.Data = local_30.SavedValue.Data.AllocatorInstance.Data;
    }
    local_30.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar5.Data,0);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_30.SavedValue.Data.ArrayNum != 0) {
      FVar5.Data = local_30.SavedValue.Data.AllocatorInstance.Data;
    }
    pFVar3 = FindNextExpansion((wchar_t *)FVar5.Data,&local_48);
    local_30.bExpandOnDemand = pFVar3 != (FConfigExpansion *)0x0;
    ::FName::FName(&local_58,param_2);
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName,FConfigValue>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)this_00,&local_58,&local_30);
    if (local_30.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SavedValue.Data.AllocatorInstance.Data);
    }
    this->Dirty = true;
  }
  else {
    if ((this_01->SavedValue).Data.ArrayNum == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = (wchar_t *)(this_01->SavedValue).Data.AllocatorInstance.Data;
    }
    iVar1 = wcscmp(_Str1,param_3);
    if (iVar1 != 0) {
      this->Dirty = true;
      pFVar4 = ::FString::FString(&local_40,param_3);
      FConfigValue::operator=(this_01,pFVar4);
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetText @ 141890f60

void __thiscall
FConfigFile::SetText(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,FText *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  FConfigSection *this_00;
  FName *pFVar4;
  FConfigValue *pFVar5;
  FConfigExpansion *pFVar6;
  wchar_t *_Str1;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  FName local_68;
  FName local_60;
  wchar_t *local_58;
  undefined1 local_50 [16];
  FString local_40;
  FConfigValue local_30;
  
  ::FString::FString(&local_40,param_1);
  this_00 = FindOrAddSectionInternal(this,&local_40);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  local_50._0_8_ = (FScriptContainerElement *)0x0;
  local_50._8_4_ = 0;
  local_50._12_4_ = 0;
  FTextStringHelper::WriteToBuffer((FString *)local_50,param_3,false,false);
  pFVar4 = ::FName::FName(&local_68,param_2);
  pFVar5 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)this_00,*pFVar4);
  pFVar8 = (FScriptContainerElement *)local_50._0_8_;
  if (pFVar5 == (FConfigValue *)0x0) {
    ::FName::FName(&local_60,param_2);
    pwVar9 = (wchar_t *)local_50._0_8_;
    uVar1 = local_50._8_4_;
    local_30.SavedValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_50._0_8_;
    local_50._0_8_ = (FScriptContainerElement *)0x0;
    local_30.SavedValue.Data.ArrayNum = local_50._8_4_;
    local_30.SavedValue.Data.ArrayMax = local_50._12_4_;
    local_50._8_4_ = 0;
    local_50._12_4_ = 0;
    local_30.ValueType = Combined;
    if (uVar1 == 0) {
      pwVar9 = L"";
    }
    local_30.SavedValueHash = FCrc::StrCrc32<wchar_t>(pwVar9,0);
    pFVar6 = FindNextExpansion(pwVar9,&local_58);
    local_30.bExpandOnDemand = pFVar6 != (FConfigExpansion *)0x0;
    ::FName::FName(&local_68,param_2);
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName,FConfigValue>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)this_00,&local_68,&local_30);
    if (local_30.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.SavedValue.Data.AllocatorInstance.Data);
    }
    this->Dirty = true;
    pFVar8 = (FScriptContainerElement *)local_50._0_8_;
  }
  else {
    pwVar9 = L"";
    pFVar7 = (FScriptContainerElement *)L"";
    if (local_50._8_4_ != 0) {
      pFVar7 = (FScriptContainerElement *)local_50._0_8_;
    }
    if ((pFVar5->SavedValue).Data.ArrayNum == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = (wchar_t *)(pFVar5->SavedValue).Data.AllocatorInstance.Data;
    }
    iVar2 = wcscmp(_Str1,(wchar_t *)pFVar7);
    if (iVar2 != 0) {
      this->Dirty = true;
      if (pFVar5 != (FConfigValue *)local_50) {
        pFVar7 = (pFVar5->SavedValue).Data.AllocatorInstance.Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
          pFVar8 = (FScriptContainerElement *)local_50._0_8_;
        }
        (pFVar5->SavedValue).Data.AllocatorInstance.Data = pFVar8;
        local_50._0_8_ = (FScriptContainerElement *)0x0;
        (pFVar5->SavedValue).Data.ArrayNum = local_50._8_4_;
        (pFVar5->SavedValue).Data.ArrayMax = local_50._12_4_;
        local_50._8_4_ = 0;
        local_50._12_4_ = 0;
      }
      if ((pFVar5->SavedValue).Data.ArrayNum == 0) {
        uVar3 = FCrc::StrCrc32<wchar_t>(L"",0);
        pFVar5->SavedValueHash = uVar3;
      }
      else {
        uVar3 = FCrc::StrCrc32<wchar_t>
                          ((wchar_t *)(pFVar5->SavedValue).Data.AllocatorInstance.Data,0);
        pFVar5->SavedValueHash = uVar3;
        pwVar9 = (wchar_t *)(pFVar5->SavedValue).Data.AllocatorInstance.Data;
      }
      pFVar6 = FindNextExpansion(pwVar9,&local_58);
      pFVar5->bExpandOnDemand = pFVar6 != (FConfigExpansion *)0x0;
      pFVar8 = (FScriptContainerElement *)local_50._0_8_;
    }
  }
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// ShouldExportQuotedString @ 141891440

bool __cdecl FConfigFile::ShouldExportQuotedString(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  short sVar6;
  wchar_t *pwVar7;
  bool bVar8;
  
  bVar3 = false;
  bVar4 = false;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  sVar2 = *pwVar7;
  pFVar1 = (FScriptContainerElement *)pwVar7;
joined_r0x00014189146a:
  do {
    pFVar5 = pFVar1;
    sVar6 = sVar2;
    if (sVar2 == 0) {
      return false;
    }
    while( true ) {
      sVar2 = *(short *)(pFVar5 + 2);
      pFVar1 = pFVar5 + 2;
      if (sVar6 == 0x22) {
        if (bVar3) goto LAB_1418914a5;
        bVar4 = !bVar4;
        bVar8 = pFVar5 == (FScriptContainerElement *)pwVar7;
        goto LAB_1418914b6;
      }
      if (((sVar6 == 0x5c) && (bVar4)) && (!bVar3)) break;
LAB_1418914a5:
      bVar3 = false;
      if (sVar6 == 0x20) {
        if (pFVar5 == (FScriptContainerElement *)pwVar7) {
          return true;
        }
        bVar8 = sVar2 == 0;
LAB_1418914b6:
        if (bVar8) {
          return true;
        }
        goto LAB_1418914b8;
      }
      if (sVar6 == 0x22) {
        bVar8 = pFVar5 == (FScriptContainerElement *)pwVar7;
        goto LAB_1418914b6;
      }
      if (sVar6 == 0x5c) goto LAB_1418914eb;
      if (((sVar6 - 0x7bU & 0xfffd) == 0) && (!bVar4)) {
        return true;
      }
      if ((sVar6 != 0x2f) || (sVar2 != 0x2f)) goto LAB_1418914b8;
      pFVar5 = pFVar1;
      sVar6 = sVar2;
      if (!bVar4) {
        return true;
      }
    }
    bVar3 = true;
LAB_1418914eb:
    if (sVar2 == 0) {
      return true;
    }
    if (bVar3) goto joined_r0x00014189146a;
LAB_1418914b8:
    if ((sVar2 == 0xd) || (sVar2 == 10)) {
      return true;
    }
  } while( true );
}

// Shrink @ 141892940

void __thiscall FConfigFile::Shrink(FConfigFile *this)

{
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *this_00;
  undefined1 *puVar1;
  code *pcVar2;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  LARGE_INTEGER local_res20;
  undefined4 uStack_ec;
  LARGE_INTEGER local_e8 [2];
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_b0;
  FConfigFile *local_a8;
  undefined2 local_a0;
  TMap<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  bVar4 = IsInGameThread();
  if (bVar4) {
    QueryPerformanceCounter(&local_res20);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (__real_c170000000000000 -
         (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            *)this);
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)this);
  uVar6 = 1;
  local_a0 = 0;
  stack0xffffffffffffff38 = local_68._16_16_;
  local_d8 = (longlong *)local_68._0_8_;
  auStack_d0._0_8_ = local_68._8_8_;
  local_b8 = local_48;
  pTStack_b0 = pTStack_40;
  uVar8 = local_68._24_8_ >> 0x20;
  local_a8 = this;
  if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
      ::Shrink((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                *)(*local_d8 + 0x10 + (longlong)(int)uVar8 * 0x110));
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar8 = (ulonglong)uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
      uVar11 = (int)local_a8->_padding_ - *(int *)((longlong)&local_a8->_padding_ + 4);
      if (uVar11 < 4) {
        iVar5 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_res10 = (undefined4)lVar9;
        iVar5 = 1 << ((byte)lVar9 & 0x1f);
      }
      if (((0 < (int)uVar11) && ((int)local_a8->_padding_ < iVar5)) ||
         (iVar5 < (int)local_a8->_padding_)) {
        *(int *)&local_a8->_padding_ = iVar5;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  *)local_a8);
      }
    }
  }
  this_00 = &this->PerObjectConfigArrayOfStructKeys;
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
  ::Shrink((TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
            *)this_00);
  iVar12 = 0;
  puVar1 = &(this->PerObjectConfigArrayOfStructKeys).field_0x10;
  iVar5 = *(int *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)&(this->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141892b2e;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar8 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar7 = iVar14 + -1 + local_res18;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_141892b2e:
  uVar11 = *(uint *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar6,iVar12);
  TStack_90.CurrentBitIndex = iVar7;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar5 = (int)uVar11 >> 5;
  TStack_90._28_4_ = iVar7;
  TStack_90.BaseBitIndex = iVar14;
  uStack_70 = CONCAT44(uStack_ec,
                       *(int *)&(this->PerObjectConfigArrayOfStructKeys).field_0x8 -
                       *(int *)&(this->PerObjectConfigArrayOfStructKeys).field_0x34);
  local_98 = this_00;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar11 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = *(uint *)&(this->PerObjectConfigArrayOfStructKeys).field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->PerObjectConfigArrayOfStructKeys).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar5 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar5;
      uVar10 = uVar10 + 0x20;
      iVar5 = iVar5 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_141892c40;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_141892c40:
  while( true ) {
    pTVar3 = local_98;
    if (*(int *)(&local_98->field_0x0 + 8) - *(int *)(&local_98->field_0x0 + 0x34) != (int)uStack_70
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_90.CurrentBitIndex == uVar11) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar3 == this_00))
    break;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Shrink((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
            *)((longlong)TStack_90.CurrentBitIndex * 0x68 + *(longlong *)&pTVar3->field_0x0 + 0x10))
    ;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  bVar4 = IsInGameThread();
  if (bVar4) {
    QueryPerformanceCounter(local_e8);
    GConfigShrinkTime =
         GConfigShrinkTime +
         (double)local_e8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
                    /* WARNING: Could not recover jumptable at 0x000141892cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&ConfigFileMapLock);
  return;
}

// UpdateSections @ 141896840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigFile::UpdateSections(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  FConfigBranch *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  void *pvVar8;
  int iVar9;
  ulong64 uVar10;
  undefined1 auStackY_5b8 [32];
  FString local_578;
  FString local_568;
  TArray<FString,TSizedDefaultAllocator<32>_> local_558;
  FString local_548;
  FScriptContainerElement *local_538;
  FString local_530;
  FConfigFile *local_520;
  wchar_t *local_518;
  FString local_510;
  FString local_500;
  FString local_4f0;
  FConfigFile *local_4e0;
  undefined1 *local_4d8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_4d0;
  FString *local_4c8;
  TStringBuilderBase<wchar_t> *local_4c0;
  FString local_4b8;
  FConfigContext local_4a8;
  undefined1 local_2b8 [32];
  void *local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  undefined4 local_284;
  void *local_278;
  undefined4 local_270;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [128];
  FConfigFile local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.End = (wchar_t *)&local_148;
  local_4d8 = local_2b8;
  local_4d0 = &local_558;
  local_4c8 = &local_568;
  local_4c0 = &local_268;
  local_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_548.Data.ArrayNum = 0;
  local_548.Data.ArrayMax = 0;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_2b8._0_8_ = (FScriptContainerElement *)0x0;
  local_2b8._8_8_ = 0;
  local_298 = (void *)0x0;
  local_290 = 0;
  local_28c = 0x80;
  local_288 = 0xffffffff;
  local_284 = 0;
  local_278 = (void *)0x0;
  local_270 = 0;
  local_558.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_558.ArrayNum = 0;
  local_558.ArrayMax = 0;
  local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.Data.ArrayNum = 0;
  local_568.Data.ArrayMax = 0;
  local_520 = this;
  local_518 = param_3;
  local_4e0 = this;
  bVar4 = LoadConfigFileWrapper(param_1,&local_548,false);
  if (bVar4) {
    iVar6 = local_548.Data.ArrayNum + -1;
    if (local_548.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      local_538 = (FScriptContainerElement *)L"";
      if (local_548.Data.ArrayNum != 0) {
        local_538 = local_548.Data.AllocatorInstance.Data;
      }
      bVar4 = local_538 == (FScriptContainerElement *)0x0;
      if (local_538 != (FScriptContainerElement *)0x0) {
        do {
          local_578.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_578.Data.ArrayNum = 0;
          local_578.Data.ArrayMax = 0;
          bVar5 = FParse::Line((wchar_t **)&local_538,&local_578,true);
          if (bVar5) {
            ::FString::TrimEndInline(&local_578);
            iVar6 = local_578.Data.ArrayNum + -1;
            if (local_578.Data.ArrayNum == 0) {
              iVar6 = 0;
            }
            iVar9 = local_578.Data.ArrayNum;
            if ((3 < iVar6) && (*(short *)local_578.Data.AllocatorInstance.Data == 0x5b)) {
              iVar6 = local_578.Data.ArrayNum + -2;
              if (local_578.Data.ArrayNum == 0) {
                iVar6 = -1;
              }
              if (iVar6 < 0) {
code_r0x000141896a3c:
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                iVar9 = local_578.Data.ArrayNum + -1;
                if (local_578.Data.ArrayNum == 0) {
                  iVar9 = 0;
                }
                if (iVar9 <= iVar6) goto code_r0x000141896a3c;
              }
              iVar9 = local_578.Data.ArrayNum;
              if (*(short *)(local_578.Data.AllocatorInstance.Data + (longlong)iVar6 * 2) == 0x5d) {
                `FConfigFile::UpdateSections'::__l2::<lambda_1>::operator()(&local_4e0);
                iVar6 = local_578.Data.ArrayNum + -3;
                if (local_578.Data.ArrayNum == 0) {
                  iVar6 = -2;
                }
                pFVar7 = ::FString::Mid(&local_578,&local_4b8,1,iVar6);
                if (&local_568 != pFVar7) {
                  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_568.Data.AllocatorInstance.Data);
                  }
                  local_568.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
                  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_568.Data.ArrayNum = (pFVar7->Data).ArrayNum;
                  local_568.Data.ArrayMax = (pFVar7->Data).ArrayMax;
                  (pFVar7->Data).ArrayNum = 0;
                  (pFVar7->Data).ArrayMax = 0;
                }
                if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
                }
                iVar9 = local_578.Data.ArrayNum;
              }
            }
            FVar3.Data = local_578.Data.AllocatorInstance.Data;
            iVar6 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar6 = 0;
            }
            uVar10 = (ulong64)iVar6;
            if (local_268.End < (FConfigFile *)(local_268.CurPos + uVar10)) {
              TStringBuilderBase<wchar_t>::Extend(&local_268,uVar10);
            }
            if (iVar6 != 0) {
              pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,FVar3.Data,uVar10 * 2);
              local_268.CurPos = (wchar_t *)((longlong)pvVar8 + uVar10 * 2);
            }
            if (local_268.End < (FConfigFile *)(local_268.CurPos + 2)) {
              TStringBuilderBase<wchar_t>::Extend(&local_268,2);
            }
            pvVar8 = FGenericPlatformString::Memcpy(local_268.CurPos,L"\r\n",4);
            local_268.CurPos = (wchar_t *)((longlong)pvVar8 + 4);
          }
          else {
            bVar4 = true;
          }
          if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_578.Data.AllocatorInstance.Data);
          }
          param_3 = local_518;
          this = local_520;
        } while (!bVar4);
      }
    }
  }
  `FConfigFile::UpdateSections'::__l2::<lambda_1>::operator()(&local_4e0);
  if (param_2 != (wchar_t *)0x0) {
    FConfigFile(&local_148);
    ::FString::FString(&local_510,param_1);
    ::FString::FString(&local_500,param_3);
    FConfigContext::FConfigContext(&local_4a8,(FConfigCacheIni *)0x0,true,&local_500,&local_148);
    FVar3.Data = local_510.Data.AllocatorInstance.Data;
    local_4a8.StartSkippingAtFilename.Data.ArrayNum = local_510.Data.ArrayNum;
    if ((local_510.Data.ArrayNum == 0) && (local_4a8.StartSkippingAtFilename.Data.ArrayMax == 0)) {
      local_4a8.StartSkippingAtFilename.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_510.Data.ArrayNum,local_4a8.StartSkippingAtFilename.Data.ArrayMax,
                 (ForAnyElementType *)&local_4a8.StartSkippingAtFilename,local_510.Data.ArrayNum,
                 &local_4a8.StartSkippingAtFilename.Data.ArrayMax);
      if (local_510.Data.ArrayNum != 0) {
        memcpy(local_4a8.StartSkippingAtFilename.Data.AllocatorInstance.Data,FVar3.Data,
               (longlong)local_510.Data.ArrayNum * 2);
      }
    }
    if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_500.Data.AllocatorInstance.Data);
    }
    if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_510.Data.AllocatorInstance.Data);
    }
    local_530.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_530.Data.ArrayNum = 0;
    local_530.Data.ArrayMax = 0;
    FConfigContext::Load(&local_4a8,param_2,&local_530);
    if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_530.Data.AllocatorInstance.Data);
    }
    operator=(&this->Branch->FinalCombinedLayers,&local_148);
    pFVar1 = this->Branch;
    if (&pFVar1->Hierarchy != &(local_4a8.Branch)->Hierarchy) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(pFVar1->Hierarchy)._padding_,
                 (int *)&(pFVar1->Hierarchy)._padding_,
                 (ForElementType<FSetElementId> *)&((local_4a8.Branch)->Hierarchy)._padding_,
                 (int)((local_4a8.Branch)->Hierarchy)._padding_);
      TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pFVar1->Hierarchy,
                  (TSparseArray<TSparseSetElement<TTuple<int,FUtf8String>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&(local_4a8.Branch)->Hierarchy);
    }
    (pFVar1->Hierarchy).KeyGen = ((local_4a8.Branch)->Hierarchy).KeyGen;
    ::FString::operator=(&this->Branch->IniPath,L"");
    FConfigContext::~FConfigContext(&local_4a8);
    ~FConfigFile(&local_148);
  }
  ::FString::FString(&local_4f0,param_1);
  WriteInternal(this,&local_4f0,true,
                (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *)local_2b8,&local_558);
  if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
  }
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_558.AllocatorInstance.Data,local_558.ArrayNum);
  if (local_558.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.AllocatorInstance.Data);
  }
  local_270 = 0;
  if (local_278 != (void *)0x0) {
    FMemory::Free(local_278);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_2b8,0,local_2b8._8_4_);
  bVar4 = local_2b8._12_4_ != 0;
  local_2b8._8_8_ = (ulonglong)(uint)local_2b8._12_4_ << 0x20;
  if (bVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
  }
  local_284 = 0;
  local_290 = 0;
  local_288 = 0xffffffff;
  if (0x80 < local_28c) {
    local_28c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
  }
  if (local_298 != (void *)0x0) {
    FMemory::Free(local_298);
  }
  if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2b8._0_8_);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateSinglePropertyInSection @ 141896ec0

bool __thiscall
FConfigFile::UpdateSinglePropertyInSection
          (FConfigFile *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  undefined8 _Src;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  FConfigValue *pFVar8;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *pTVar9;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *this_00;
  longlong lVar10;
  FName local_res8;
  undefined1 local_e8 [16];
  FSinglePropertyConfigHelper local_d8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_e8._12_4_ = -1;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_4_ = 0;
  ::FString::FString(&local_58,param_3);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  iVar6 = local_58.Data.ArrayNum + -1;
  FVar2.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
  iVar6 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar5,&local_58);
  pTVar9 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
            *)0x0;
  if (iVar6 != -1) {
    pTVar9 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              *)((longlong)iVar6 * 0x110 + this->_padding_);
  }
  this_00 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
             *)&(pTVar9->Pairs).Elements.field_0x10;
  if (pTVar9 == (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *)0x0) {
    this_00 = (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
               *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (this_00 !=
      (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
       *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,param_2);
    pFVar8 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
             ::Find(this_00,*pFVar7);
    if ((pFVar8 != (FConfigValue *)0x0) && (pFVar8 != (FConfigValue *)local_e8)) {
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
      ::FString::FString((FString *)local_e8,&pFVar8->SavedValue);
      if ((local_e8._12_4_ == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  ::FString::FString(&local_28,param_2);
  ::FString::FString(&local_38,param_3);
  ::FString::FString(&local_48,param_1);
  FVar2.Data = local_48.Data.AllocatorInstance.Data;
  local_d8.IniFilename.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_d8.IniFilename.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_48.Data.ArrayNum,
               &local_d8.IniFilename.Data.ArrayMax);
    memcpy(local_d8.IniFilename.Data.AllocatorInstance.Data,FVar2.Data,
           (longlong)local_48.Data.ArrayNum * 2);
  }
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  local_d8.SectionName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_d8.SectionName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_d8.SectionName,
               local_38.Data.ArrayNum,&local_d8.SectionName.Data.ArrayMax);
    memcpy(local_d8.SectionName.Data.AllocatorInstance.Data,FVar2.Data,
           (longlong)local_38.Data.ArrayNum * 2);
  }
  FVar2.Data = local_28.Data.AllocatorInstance.Data;
  local_d8.PropertyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_d8.PropertyName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_d8.PropertyName,
               local_28.Data.ArrayNum,&local_d8.PropertyName.Data.ArrayMax);
    memcpy(local_d8.PropertyName.Data.AllocatorInstance.Data,FVar2.Data,
           (longlong)local_28.Data.ArrayNum * 2);
  }
  _Src = local_e8._0_8_;
  local_d8.bUpdateLayer = false;
  local_d8.PropertyValue.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_d8.PropertyValue.field0_0x0.TypedValue.Data.ArrayNum = 0;
  local_d8.PropertyValue.field0_0x0.TypedValue.Data.ArrayMax = -1;
  if (local_e8._12_4_ != -1) {
    lVar10 = (longlong)(int)local_e8._8_4_;
    local_d8.PropertyValue.field0_0x0.TypedValue.Data.ArrayNum = local_e8._8_4_;
    if (local_e8._8_4_ == 0) {
      local_d8.PropertyValue.field0_0x0.TypedValue.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_e8._8_4_,0,(ForAnyElementType *)&local_d8.PropertyValue,local_e8._8_4_,
                 (int *)((longlong)&local_d8.PropertyValue.field0_0x0 + 0xc));
      memcpy((void *)local_d8.PropertyValue.field0_0x0.TypedValue.Data.AllocatorInstance.Data,
             (void *)_Src,lVar10 * 2);
    }
  }
  local_d8.IniFileMakeup.Section.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.IniFileMakeup.Section.Data.ArrayNum = 0;
  local_d8.IniFileMakeup.Section.Data.ArrayMax = 0;
  local_d8.IniFileMakeup.BeforeSection.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.IniFileMakeup.BeforeSection.Data.ArrayNum = 0;
  local_d8.IniFileMakeup.BeforeSection.Data.ArrayMax = 0;
  local_d8.IniFileMakeup.AfterSection.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.IniFileMakeup.AfterSection.Data.ArrayNum = 0;
  local_d8.IniFileMakeup.AfterSection.Data.ArrayMax = 0;
  FSinglePropertyConfigHelper::PopulateFileContentHelper(&local_d8);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar3 = FSinglePropertyConfigHelper::UpdateConfigFile(&local_d8);
  if (local_d8.IniFileMakeup.AfterSection.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.IniFileMakeup.AfterSection.Data.AllocatorInstance.Data);
  }
  if (local_d8.IniFileMakeup.BeforeSection.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.IniFileMakeup.BeforeSection.Data.AllocatorInstance.Data);
  }
  if (local_d8.IniFileMakeup.Section.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_d8.IniFileMakeup.Section.Data.AllocatorInstance.Data);
  }
  if ((local_d8.PropertyValue.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (local_d8.PropertyValue.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_d8.PropertyValue.field0_0x0.TypedValue.Data.AllocatorInstance.Data);
  }
  if (local_d8.PropertyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.PropertyName.Data.AllocatorInstance.Data);
  }
  if (local_d8.SectionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.SectionName.Data.AllocatorInstance.Data);
  }
  if (local_d8.IniFilename.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.IniFilename.Data.AllocatorInstance.Data);
  }
  if ((local_e8._12_4_ != -1) &&
     ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  return bVar3;
}

// Write @ 141898760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FConfigFile::Write(FConfigFile *this,FString *param_1,bool param_2,FString *param_3)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 auStackY_e8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a8;
  TPairInitializer<FString_&&,FString_const_&> local_98;
  FString *local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  if (1 < (param_3->Data).ArrayNum) {
    local_98.Value = &local_a8;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    local_88 = param_3;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_78,&local_98,(bool *)&local_98.Value);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = WriteInternal(this,param_1,param_2,
                        (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                         *)local_78,&local_b8);
  FVar2.Data = local_b8.AllocatorInstance.Data;
  DestructItems<FString,int>((FString *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return bVar3;
}

// WriteInternal @ 141898910

bool __thiscall
FConfigFile::WriteInternal
          (FConfigFile *this,FString *param_1,bool param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  FRemoteConfig *this_00;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  bool bVar7;
  int local_48 [2];
  FString local_40;
  FString local_30;
  
  bVar7 = false;
  local_48[0] = 0x7fffffff;
  bVar2 = IsADefaultIniWrite(this,param_1,local_48);
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  WriteToStringInternal(this,&local_40,bVar2,local_48[0],param_3,param_4);
  if (bVar2) {
LAB_1418989bb:
    bVar2 = false;
  }
  else {
    pFVar4 = ::FString::TrimStart(&local_40,&local_30);
    bVar7 = true;
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) goto LAB_1418989bb;
    bVar2 = true;
  }
  if ((bVar7) && (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    DeleteConfigFileWrapper(pwVar6);
  }
  else if (this->Dirty == true && !this->NoSave) {
    bVar2 = AreWritesAllowedGlobally();
    if (bVar2) {
      pwVar6 = L"";
      if (param_2) {
        this_00 = FRemoteConfig::Get();
        if ((param_1->Data).ArrayNum == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        FRemoteConfig::Write(this_00,pwVar5,&local_40);
      }
      if ((param_1->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar2 = SaveConfigFileWrapper(pwVar6,&local_40);
      this->Dirty = !bVar2;
      goto LAB_1418989f2;
    }
  }
  bVar2 = true;
LAB_1418989f2:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// WriteTempFileThenMove @ 141898aa0

bool __cdecl FConfigFile::WriteTempFileThenMove(void)

{
  return false;
}

// WriteToString @ 141898ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FConfigFile::WriteToString(FConfigFile *this,FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void **local_a0;
  FString *local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_c8._8_8_ = (FString *)0x0;
  local_b8 = 0;
  if (1 < (param_3->Data).ArrayNum) {
    local_a0 = &local_b0;
    local_b0 = (void *)0x0;
    local_a8 = 0;
    local_98 = param_3;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_88,(TPairInitializer<FString_&&,FString_const_&> *)local_c8,
               (bool *)&local_a0);
    if (local_b0 != (void *)0x0) {
      FMemory::Free(local_b0);
    }
  }
  local_c8._0_4_ = 0x7fffffff;
  bVar2 = IsADefaultIniWrite(this,param_2,(int *)local_c8);
  WriteToStringInternal
            (this,param_1,bVar2,local_c8._0_4_,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_88,(TArray<FString,TSizedDefaultAllocator<32>_> *)(local_c8 + 8));
  DestructItems<FString,int>((FString *)local_c8._8_8_,(int)local_b8);
  if ((FString *)local_c8._8_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// WriteToStringInternal @ 141898c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001418991d1) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FConfigFile::WriteToStringInternal
          (FConfigFile *this,FString *param_1,bool param_2,int param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4,TArray<FString,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 *puVar1;
  ForElementType<FConfigValue_const_*> FVar2;
  FConfigBranch *pFVar3;
  FName FVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  *pTVar9;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FConfigSection *pFVar15;
  FName *pFVar16;
  FString *pFVar17;
  FConfigCommandStreamSection *this_01;
  FConfigExpansion *pFVar18;
  FConfigValue *pFVar19;
  longlong lVar20;
  longlong lVar21;
  FString *pFVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  ForElementType<FSetElementId> FVar26;
  ForElementType<FSetElementId> FVar27;
  wchar_t *pwVar28;
  int iVar29;
  ForElementType<FConfigValue_const_*> FVar30;
  FConfigSection *pFVar31;
  ForAnyElementType FVar32;
  uint uVar33;
  FConfigFile *pFVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  uint uVar38;
  undefined1 *puVar39;
  ForElementType<unsigned_int> FVar40;
  FScriptContainerElement *pFVar41;
  bool bVar42;
  bool bVar43;
  double dVar44;
  double dVar45;
  undefined1 auStackY_5d8 [32];
  undefined1 local_587;
  undefined1 local_586;
  undefined1 local_585;
  undefined1 local_584;
  undefined1 local_583;
  FIdentityFunctor local_582 [2];
  uint local_580;
  TArray<FString,TSizedDefaultAllocator<32>_> local_578;
  int local_568;
  TArray<FConfigValue_const_*,TSizedDefaultAllocator<32>_> local_560;
  ForAnyElementType local_550;
  undefined8 local_548;
  ForAnyElementType local_540;
  undefined8 local_538;
  ulonglong local_530;
  undefined1 local_528 [8];
  FName local_520;
  FConfigFile *local_518;
  FString local_510;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_500;
  longlong local_4f8;
  FString *local_4f0;
  FConfigSection *local_4e8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_4e0;
  longlong lStack_4d8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4d0;
  uint uStack_4c8;
  uint uStack_4c4;
  undefined8 uStack_4c0;
  int local_4b8;
  undefined4 uStack_4b4;
  int local_4b0;
  FScriptContainerElement *local_4a8;
  TBaseKeyIterator<1> local_4a0;
  FString local_488;
  FConfigSection *local_478;
  FString local_470;
  FConfigValue local_460;
  FString *local_448;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_440;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f0;
  FName local_3d0;
  undefined4 local_3c8;
  int local_3c4;
  FString local_3c0;
  FScriptContainerElement *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  longlong *local_388;
  undefined1 auStack_380 [16];
  uint uStack_370;
  uint uStack_36c;
  longlong local_368;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_360;
  FConfigFile *local_358;
  undefined2 local_350;
  FString local_348;
  undefined4 local_338;
  TBaseKeyIterator<1> local_330;
  FScriptContainerElement *local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_310;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_2f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2e8;
  undefined8 uStack_2c8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_2c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b8;
  undefined8 uStack_298;
  undefined1 local_288 [12];
  uint uStack_27c;
  undefined1 local_278 [16];
  longlong local_268;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_260;
  FConfigFile *local_258;
  undefined2 local_250;
  TBaseKeyIterator<1> local_248;
  wchar_t *local_230;
  FName local_228;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  undefined1 local_1e0 [32];
  longlong local_1c0;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_1b8;
  undefined1 local_1b0 [32];
  longlong local_190;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  *pTStack_188;
  undefined4 local_164;
  undefined1 local_158 [32];
  ForElementType<unsigned_int> local_138;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  ForElementType<FSetElementId> local_118;
  int local_110;
  undefined1 local_108 [32];
  ForElementType<unsigned_int> local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  TArray<FConfigValue_const_*,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  bVar43 = false;
  bVar42 = false;
  local_580 = 0;
  iVar13 = (param_1->Data).ArrayNum;
  iVar29 = 0;
  uVar38 = 0;
  local_500 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_4;
  local_568 = iVar13 + -1;
  if (iVar13 == 0) {
    local_568 = 0;
  }
  local_518 = this;
  local_4f0 = param_1;
  local_4b0 = param_3;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_1e0,
             (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)this);
  local_250._0_1_ = false;
  local_250._1_1_ = false;
  local_278 = local_1e0._16_16_;
  local_288._0_8_ = local_1e0._0_8_;
  stack0xfffffffffffffd80 = local_1e0._8_8_;
  local_268 = local_1c0;
  pTStack_260 = pTStack_1b8;
  uVar24 = local_1e0._24_8_ >> 0x20;
  iVar13 = 0;
  local_258 = this;
  if (local_1e0._28_4_ < *(int *)(local_1e0._16_8_ + 0x18)) {
    do {
      lVar25 = (longlong)(int)uVar24 * 0x110;
      uVar37 = *(int *)(lVar25 + 0x18 + *(longlong *)local_288._0_8_) -
               *(int *)(lVar25 + 0x44 + *(longlong *)local_288._0_8_);
      uVar33 = uVar37;
      if ((int)uVar37 < (int)uVar38) {
        uVar33 = uVar38;
      }
      uVar38 = uVar33;
      iVar29 = iVar13 + uVar37 * 0x5a + 0x5a;
      local_278._8_4_ = local_278._8_4_ & ~uStack_27c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_288 + 8));
      uVar24 = (ulonglong)(uint)local_278._12_4_;
      iVar13 = iVar29;
    } while ((int)local_278._12_4_ < *(int *)(local_278._0_8_ + 0x18));
  }
  TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
  ::TIterator::~TIterator((TIterator *)local_288);
  iVar13 = 0x8000000;
  if (iVar29 < 0x8000000) {
    iVar13 = iVar29;
  }
  ::FString::Reserve(param_1,iVar13 + local_568);
  iVar13 = param_5->ArrayNum;
  local_578.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.ArrayNum = 0;
  local_578.ArrayMax = 0;
  iVar29 = Num(this);
  uVar33 = iVar29 + iVar13;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  if (local_578.ArrayMax < (int)uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar33,&local_578.AllocatorInstance,local_578.ArrayNum,&local_578.ArrayMax);
  }
  if ((&local_578 == param_5) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = param_5->ArrayNum;
  if (iVar13 != 0) {
    iVar29 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar13,&local_578.AllocatorInstance,&local_578.ArrayNum,
                        &local_578.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_578.AllocatorInstance.Data + (longlong)iVar29 * 0x10,
               (FString *)(param_5->AllocatorInstance).Data,iVar13);
  }
  iVar13 = param_5->ArrayNum;
  iVar29 = Num(this);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)param_4,iVar13 + iVar29);
  local_dc = 0x80;
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.ArrayNum = 0;
  local_560.ArrayMax = 0;
  local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.Data.ArrayNum = 0;
  local_488.Data.ArrayMax = 0;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (ForElementType<unsigned_int>)0x0;
  local_e0 = 0;
  local_d8 = -1;
  local_d4 = 0;
  local_c8 = (ForElementType<FSetElementId>)0x0;
  local_c0 = 0;
  local_530 = 1;
  if (uVar38 != 0) {
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar38);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_108,uVar38);
    iVar13 = 1;
    if (3 < uVar38) {
      uVar24 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_338 = (undefined4)lVar25;
      iVar13 = 1 << ((byte)lVar25 & 0x1f);
    }
    if ((local_c0 == 0) || (local_c0 < iVar13)) {
      local_c0 = iVar13;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_108);
    }
  }
  local_580 = 0;
  if ((param_2) || (this->bCanSaveAllSections)) {
    pFVar15 = (FConfigSection *)0x0;
    local_4e8 = (FConfigSection *)0x0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
    pFVar15 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
              ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                      *)this,&SectionsToSaveStr);
    local_4e8 = pFVar15;
    ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  }
  local_540.Data = (FScriptContainerElement *)0x0;
  local_538 = 0;
  pFVar31 = (FConfigSection *)0x0;
  if (pFVar15 != (FConfigSection *)0x0) {
    local_b8.AllocatorInstance.SecondaryData = (ForElementType<FConfigValue_const_*>)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 10;
    pFVar16 = ::FName::FName(&local_228,"Section");
    TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::MultiFindPointer<TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
              ((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)pFVar15,*pFVar16,&local_b8,false);
    uVar24 = (ulonglong)(uint)local_b8.ArrayNum;
    if (local_b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar24);
    }
    if (local_538._4_4_ < local_b8.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_b8.ArrayNum,&local_540,(int)local_538,
                 (int *)((longlong)&local_538 + 4));
      uVar24 = (ulonglong)(uint)local_b8.ArrayNum;
    }
    iVar13 = (int)uVar24;
    FVar30 = (ForElementType<FConfigValue_const_*>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
      FVar30 = local_b8.AllocatorInstance.SecondaryData;
    }
    FVar2 = (ForElementType<FConfigValue_const_*>)((longlong)FVar30 + (longlong)iVar13 * 8);
    while( true ) {
      if ((int)uVar24 != iVar13) {
        local_587 = 0;
        `TCheckedPointerIterator<FConfigValue_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_587);
      }
      if (FVar30 == FVar2) break;
      pFVar17 = *(FString **)FVar30;
      if (*(char *)((longlong)&pFVar17[1].Data.AllocatorInstance.Data + 5) == '\0') {
        bVar42 = true;
        pFVar17 = ::FString::FString(&local_220,pFVar17);
      }
      else {
        bVar43 = true;
        local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_470.Data.ArrayNum = 0;
        local_470.Data.ArrayMax = 0;
        FConfigValue::ExpandValue(pFVar17,&local_470);
        pFVar17 = &local_470;
      }
      ::FString::FString(&local_510,pFVar17);
      if ((bVar42) &&
         (bVar42 = false, local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_220.Data.AllocatorInstance.Data);
      }
      if ((bVar43) &&
         (bVar43 = false, local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
      if (((local_540.Data <= (FScriptContainerElement *)&local_510) &&
          ((FScriptContainerElement *)&local_510 < local_540.Data + (longlong)local_538._4_4_ * 0x10
          )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar29 = (int)local_538;
      if ((int)local_538 == local_538._4_4_) {
        iVar29 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_540,(int *)((longlong)&local_538 + 4));
      }
      local_538 = CONCAT44(local_538._4_4_,iVar29 + 1);
      lVar25 = (longlong)iVar29;
      *(undefined8 *)(local_540.Data + lVar25 * 0x10) = 0;
      *(FScriptContainerElement **)(local_540.Data + lVar25 * 0x10) =
           local_510.Data.AllocatorInstance.Data;
      local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_540.Data + lVar25 * 0x10 + 8) = local_510.Data.ArrayNum;
      *(int *)(local_540.Data + lVar25 * 0x10 + 0xc) = local_510.Data.ArrayMax;
      local_510.Data.ArrayNum = 0;
      local_510.Data.ArrayMax = 0;
      uVar24 = (ulonglong)(uint)local_b8.ArrayNum;
      FVar30 = (ForElementType<FConfigValue_const_*>)((longlong)FVar30 + 8);
    }
    pFVar31 = local_4e8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FConfigValue_const_*>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
      pFVar31 = local_4e8;
    }
  }
  pFVar34 = local_518;
  TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_1b0,
             (TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
              *)local_518);
  local_358 = pFVar34;
  local_350 = 0;
  stack0xfffffffffffffc88 = local_1b0._16_16_;
  local_388 = (longlong *)local_1b0._0_8_;
  auStack_380._0_8_ = local_1b0._8_8_;
  local_368 = local_190;
  pTStack_360 = pTStack_188;
  uVar24 = local_1b0._24_8_ >> 0x20;
  if (local_1b0._28_4_ < *(int *)(local_1b0._16_8_ + 0x18)) {
    do {
      pFVar41 = (FScriptContainerElement *)((longlong)(int)uVar24 * 0x110 + *local_388);
      pFVar35 = pFVar41 + 0x10;
      local_4a8 = pFVar41;
      if (pFVar31 == (FConfigSection *)0x0) {
LAB_141899387:
        pFVar3 = pFVar34->Branch;
        local_478 = (FConfigSection *)0x0;
        if (pFVar3 != (FConfigBranch *)0x0) {
          AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
          lVar25 = (pFVar3->FinalCombinedLayers)._padding_;
          iVar13 = *(int *)((longlong)&(pFVar3->FinalCombinedLayers)._padding_ + 4);
          ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
          if (0 < (int)lVar25 - iVar13) {
            pFVar3 = pFVar34->Branch;
            AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
            local_478 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                        ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                                *)&pFVar3->FinalCombinedLayers,(FString *)pFVar41);
            ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
          }
        }
        iVar14 = local_568;
        iVar29 = (param_1->Data).ArrayNum;
        iVar13 = iVar29 + -1;
        if (iVar29 == 0) {
          iVar13 = 0;
        }
        iVar29 = iVar13;
        if (local_568 < iVar13) {
          iVar29 = local_568;
        }
        iVar23 = 0;
        if (0 < iVar29) {
          iVar23 = iVar29;
        }
        ::FString::RemoveAt(param_1,iVar23,iVar13 - iVar23,No);
        if (local_108._8_4_ != local_d4) {
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_108);
          bVar42 = (longlong)local_108._8_8_ < 0;
          local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
          if (bVar42) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
          }
          local_d8 = -1;
          local_d4 = 0;
          local_e0 = 0;
        }
        local_410._padding_._4_4_ = (uint)local_530;
        local_410.Array = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar41 + 0x20);
        local_410._padding_._0_4_ = 0;
        local_410.UnvisitedBitMask = 0xffffffff;
        local_410.CurrentBitIndex = 0;
        local_410.BaseBitIndex = 0;
        if (*(int *)(pFVar41 + 0x38) != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_410);
        }
        lStack_4d8 = CONCAT44(local_410._padding_._4_4_,(undefined4)local_410._padding_);
        uStack_4c4 = local_410.CurrentBitIndex;
        uStack_4c8 = local_410.UnvisitedBitMask;
        uStack_4c0 = CONCAT44(local_410._28_4_,local_410.BaseBitIndex);
        pTStack_4d0 = local_410.Array;
        TStack_3a8._padding_._0_4_ = (undefined4)local_410._padding_;
        TStack_3a8._padding_._4_4_ = local_410._padding_._4_4_;
        TStack_3a8.Array = local_410.Array;
        TStack_3a8.UnvisitedBitMask = local_410.UnvisitedBitMask;
        TStack_3a8.CurrentBitIndex = local_410.CurrentBitIndex;
        TStack_3a8.BaseBitIndex = local_410.BaseBitIndex;
        TStack_3a8._28_4_ = local_410._28_4_;
        iVar13 = local_410.CurrentBitIndex;
        local_4e0 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)pFVar35;
        local_3b0 = pFVar35;
        if (local_410.CurrentBitIndex < (local_410.Array)->NumBits) {
          do {
            FVar4 = *(FName *)(*(longlong *)local_3b0 + (longlong)iVar13 * 0x28);
            lVar25 = *(longlong *)local_3b0 + (longlong)iVar13 * 0x28;
            local_520 = FVar4;
            uVar38 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
            if (local_108._8_4_ != local_d4) {
              FVar26 = (ForElementType<FSetElementId>)local_d0;
              if (local_c8 != (ForElementType<FSetElementId>)0x0) {
                FVar26 = local_c8;
              }
              for (iVar13 = *(int *)((longlong)FVar26 +
                                    (ulonglong)(local_c0 - 1U & FVar4.Number + uVar38) * 4);
                  iVar13 != -1; iVar13 = *(int *)(local_108._0_8_ + (longlong)iVar13 * 0x10 + 8)) {
                if (*(FName *)(local_108._0_8_ + (longlong)iVar13 * 0x10) == FVar4)
                goto LAB_141899c15;
              }
            }
            if ((pFVar34->Branch == (FConfigBranch *)0x0) ||
               (this_01 = TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
                          ::Find((TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
                                  *)&pFVar34->Branch->CommandLineOverrides,(FString *)pFVar41),
               this_01 == (FConfigCommandStreamSection *)0x0)) {
              bVar42 = false;
            }
            else {
              ::FString::FString(&local_460.SavedValue,(FString *)(lVar25 + 8));
              iVar13 = local_460.SavedValue.Data.ArrayNum;
              local_460.ValueType = Combined;
              local_460.bExpandOnDemand = false;
              FVar32.Data = (FScriptContainerElement *)L"";
              if (local_460.SavedValue.Data.ArrayNum != 0) {
                FVar32.Data = local_460.SavedValue.Data.AllocatorInstance.Data;
              }
              local_460.SavedValueHash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar32.Data,0);
              FVar32.Data = (FScriptContainerElement *)L"";
              if (iVar13 != 0) {
                FVar32.Data = local_460.SavedValue.Data.AllocatorInstance.Data;
              }
              pFVar18 = FindNextExpansion((wchar_t *)FVar32.Data,&local_230);
              local_460.bExpandOnDemand = pFVar18 != (FConfigExpansion *)0x0;
              pFVar19 = TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                        ::FindPair((TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                                    *)this_01,local_520,&local_460);
              bVar42 = pFVar19 != (FConfigValue *)0x0;
              if (local_460.SavedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_460.SavedValue.Data.AllocatorInstance.Data);
              }
            }
            iVar13 = *(int *)(pFVar41 + 8);
            if (iVar13 == CurrentIniVersionStr.Data.ArrayNum) {
              if (1 < iVar13) {
                iVar13 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)pFVar41,
                                    (wchar_t *)CurrentIniVersionStr.Data.AllocatorInstance.Data);
                bVar43 = iVar13 == 0;
                goto LAB_141899691;
              }
LAB_141899698:
              if (local_520 != VersionSectionName) goto LAB_1418996a9;
              bVar43 = true;
            }
            else {
              bVar43 = iVar13 + CurrentIniVersionStr.Data.ArrayNum == 1;
LAB_141899691:
              if (bVar43) goto LAB_141899698;
LAB_1418996a9:
              bVar43 = false;
            }
            pFVar15 = local_478;
            if (((param_2) || (bVar43)) || (bVar43 = false, local_478 == (FConfigSection *)0x0)) {
LAB_141899822:
              pFVar34 = local_518;
              if (!bVar42) {
                iVar29 = (param_1->Data).ArrayNum;
                iVar13 = iVar29 + -1;
                if (iVar29 == 0) {
                  iVar13 = 0;
                }
                if (iVar13 == local_568) {
                  ::FString::AppendfImpl(param_1,L"[%s]\r\n");
                  pFVar35 = pFVar41 + 0x60;
                  local_430._padding_._4_4_ = (uint)local_530;
                  local_430.Array = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar41 + 0x70);
                  local_430._padding_._0_4_ = 0;
                  local_430.UnvisitedBitMask = 0xffffffff;
                  local_430.CurrentBitIndex = 0;
                  local_430.BaseBitIndex = 0;
                  if (*(int *)(pFVar41 + 0x88) != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_430);
                  }
                  lStack_4d8 = CONCAT44(local_430._padding_._4_4_,(undefined4)local_430._padding_);
                  uStack_4c4 = local_430.CurrentBitIndex;
                  uStack_4c8 = local_430.UnvisitedBitMask;
                  uStack_4c0 = CONCAT44(local_430._28_4_,local_430.BaseBitIndex);
                  pTStack_4d0 = local_430.Array;
                  TStack_310._padding_._0_4_ = (undefined4)local_430._padding_;
                  TStack_310._padding_._4_4_ = local_430._padding_._4_4_;
                  TStack_310.Array = local_430.Array;
                  TStack_310.UnvisitedBitMask = local_430.UnvisitedBitMask;
                  TStack_310.CurrentBitIndex = local_430.CurrentBitIndex;
                  TStack_310.BaseBitIndex = local_430.BaseBitIndex;
                  TStack_310._28_4_ = local_430._28_4_;
                  iVar13 = local_430.CurrentBitIndex;
                  local_4e0 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                               *)pFVar35;
                  local_318 = pFVar35;
                  if (local_430.CurrentBitIndex < (local_430.Array)->NumBits) {
                    do {
                      ::FName::ToString((FName *)(*(longlong *)local_318 + (longlong)iVar13 * 0x20),
                                        &local_1f0);
                      ::FString::AppendfImpl(param_1,L"@%s=%s\r\n");
                      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
                      }
                      TStack_310.UnvisitedBitMask =
                           TStack_310.UnvisitedBitMask & ~TStack_310._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_310);
                      iVar13 = TStack_310.CurrentBitIndex;
                    } while (TStack_310.CurrentBitIndex < (TStack_310.Array)->NumBits);
                  }
                }
                local_560.ArrayNum = 0;
                if ((local_560.ArrayMax < 0) && (local_560.ArrayMax != 0)) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,0,&local_560.AllocatorInstance,0,&local_560.ArrayMax);
                }
                TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                          (&local_4a0,
                           (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                            *)(pFVar41 + 0x10),local_520);
                FVar4 = local_4a0.Key;
                pTVar9 = local_4a0.Set;
                iVar13 = local_4a0.NextIndex;
joined_r0x0001418999f3:
                local_4a0.NextIndex = iVar13;
                if (local_4a0.Index != -1) {
                  local_4f8 = *(longlong *)&pTVar9->Elements +
                              ((longlong)local_4a0.Index * 5 + 1) * 8;
                  if (((local_560.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4f8)
                      && ((FScriptContainerElement *)&local_4f8 <
                          local_560.AllocatorInstance.Data + (longlong)local_560.ArrayMax * 8)) &&
                     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar42)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (local_560.ArrayNum == local_560.ArrayMax) {
                    local_560.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_560.AllocatorInstance,&local_560.ArrayMax);
                  }
                  uVar38 = local_560.ArrayNum + 1;
                  *(longlong *)(local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 8)
                       = local_4f8;
                  local_4a0.Index = iVar13;
                  local_560.ArrayNum = uVar38;
                  if (iVar13 == -1) goto LAB_141899b08;
                  lVar25 = *(longlong *)&pTVar9->Elements;
                  do {
                    iVar13 = *(int *)(lVar25 + 0x20 + (longlong)local_4a0.Index * 0x28);
                    if (*(FName *)(lVar25 + (longlong)local_4a0.Index * 0x28) == FVar4) break;
                    local_4a0.Index = iVar13;
                  } while (iVar13 != -1);
                  goto joined_r0x0001418999f3;
                }
LAB_141899b08:
                lVar25 = 0;
                if (0 < local_560.ArrayNum / 2) {
                  pFVar35 = local_560.AllocatorInstance.Data +
                            (longlong)(int)(local_560.ArrayNum - 1) * 8;
                  do {
                    uVar5 = *(undefined8 *)(local_560.AllocatorInstance.Data + lVar25 * 8);
                    *(undefined8 *)(local_560.AllocatorInstance.Data + lVar25 * 8) =
                         *(undefined8 *)pFVar35;
                    lVar25 = lVar25 + 1;
                    *(undefined8 *)pFVar35 = uVar5;
                    pFVar35 = pFVar35 + -8;
                  } while (lVar25 < local_560.ArrayNum / 2);
                }
                if (param_2) {
                  pFVar17 = ::FName::ToString(&local_520,&local_210);
                  pFVar34 = local_518;
                  ProcessPropertyAndWriteForDefaults
                            (local_518,local_4b0,&local_560,param_1,(FString *)pFVar41,pFVar17);
                  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_210.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  ::FString::Reset(&local_488,0x40b);
                  ::FName::AppendString(&local_520,&local_488);
                  iVar13 = local_560.ArrayNum;
                  uVar24 = (ulonglong)local_560.ArrayNum;
                  pFVar35 = local_560.AllocatorInstance.Data + uVar24 * 8;
                  FVar32.Data = local_560.AllocatorInstance.Data;
                  while( true ) {
                    if ((uint)uVar24 != iVar13) {
                      local_586 = 0;
                      `TCheckedPointerIterator<FConfigValue_const_*,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(&local_586);
                    }
                    pFVar34 = local_518;
                    if (FVar32.Data == pFVar35) break;
                    AppendExportedPropertyLine(param_1,&local_488,*(FString **)FVar32.Data);
                    uVar24 = (ulonglong)(uint)local_560.ArrayNum;
                    FVar32.Data = FVar32.Data + 8;
                  }
                }
                TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                          ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_108,
                           &local_3d0,(bool *)&local_520);
              }
            }
            else {
              bVar11 = FDefaultValueHelper::IsStringValidFloat((FString *)(lVar25 + 8));
              TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                        (&local_248,
                         (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                          *)pFVar15,local_520);
              local_330._16_8_ = ZEXT48((uint)local_248.Index);
              local_330.Set = local_248.Set;
              local_330.Key = local_248.Key;
              param_1 = local_4f0;
              uVar38 = local_248.Index;
              if (local_248.Index == 0xffffffff) goto LAB_141899822;
              do {
                pFVar34 = local_518;
                if (bVar43) goto LAB_141899c15;
                iVar13 = *(int *)(lVar25 + 0x10);
                lVar21 = *(longlong *)&(local_330.Set)->Elements;
                lVar20 = (longlong)(int)uVar38;
                iVar29 = *(int *)(lVar21 + 0x10 + lVar20 * 0x28);
                iVar14 = iVar13 + -1;
                iVar23 = iVar29 + -1;
                if (iVar29 == 0) {
                  iVar23 = 0;
                }
                if (iVar13 == 0) {
                  iVar14 = 0;
                }
                if (iVar23 == iVar14) {
                  if (iVar29 == iVar13) {
                    if (1 < iVar29) {
                      iVar13 = FGenericPlatformStricmp::Stricmp
                                         (*(wchar_t **)(lVar21 + 8 + lVar20 * 0x28),
                                          *(wchar_t **)(lVar25 + 8));
                      bVar43 = iVar13 == 0;
                      goto LAB_141899787;
                    }
                  }
                  else {
                    bVar43 = iVar29 + iVar13 == 1;
LAB_141899787:
                    if (!bVar43) goto LAB_14189978e;
                  }
LAB_1418997f5:
                  bVar43 = true;
                }
                else {
LAB_14189978e:
                  bVar43 = false;
                  if (bVar11) {
                    lVar20 = lVar21 + lVar20 * 0x28;
                    bVar12 = FDefaultValueHelper::IsStringValidFloat((FString *)(lVar20 + 8));
                    if (bVar12) {
                      if (*(int *)(lVar21 + 0x10 + (longlong)(int)uVar38 * 0x28) == 0) {
                        pwVar28 = L"";
                      }
                      else {
                        pwVar28 = *(wchar_t **)(lVar20 + 8);
                      }
                      dVar44 = _wtof(pwVar28);
                      if (*(int *)(lVar25 + 0x10) == 0) {
                        pwVar28 = L"";
                      }
                      else {
                        pwVar28 = *(wchar_t **)(lVar25 + 8);
                      }
                      dVar45 = _wtof(pwVar28);
                      if ((float)dVar44 == (float)dVar45) goto LAB_1418997f5;
                    }
                  }
                }
                TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                ::TBaseKeyIterator<1>::operator++(&local_330);
                uVar38 = local_330.Index;
              } while (local_330.Index != 0xffffffff);
              pFVar34 = local_518;
              param_1 = local_4f0;
              pFVar41 = local_4a8;
              if (!bVar43) goto LAB_141899822;
            }
LAB_141899c15:
            TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
            param_1 = local_4f0;
            pFVar41 = local_4a8;
            iVar14 = local_568;
            iVar13 = TStack_3a8.CurrentBitIndex;
          } while (TStack_3a8.CurrentBitIndex < (TStack_3a8.Array)->NumBits);
        }
        param_4 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)local_500;
        iVar29 = (param_1->Data).ArrayNum;
        iVar13 = iVar29 + -1;
        if (iVar29 == 0) {
          iVar13 = 0;
        }
        if (iVar14 < iVar13) {
          pFVar17 = ::FString::RightChop(param_1,&local_200,iVar14);
          if (*(int *)(pFVar41 + 8) == 0) {
            pwVar28 = L"";
            iVar13 = 0;
          }
          else {
            pwVar28 = *(wchar_t **)pFVar41;
            iVar13 = *(int *)(pFVar41 + 8) + -1;
          }
          uVar38 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar28);
          param_4 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                     *)local_500;
          pFVar22 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    ::FindOrAddImpl<FString_const_&>
                              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                                *)local_500,uVar38,(FString *)pFVar41);
          if (pFVar22 != pFVar17) {
            pFVar35 = (pFVar22->Data).AllocatorInstance.Data;
            if (pFVar35 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar35);
            }
            (pFVar22->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
            (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar22->Data).ArrayNum = (pFVar17->Data).ArrayNum;
            (pFVar22->Data).ArrayMax = (pFVar17->Data).ArrayMax;
            (pFVar17->Data).ArrayNum = 0;
            (pFVar17->Data).ArrayMax = 0;
          }
          if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data.AllocatorInstance.Data);
          }
          if (((local_578.AllocatorInstance.Data <= pFVar41) &&
              (pFVar41 < local_578.AllocatorInstance.Data + (longlong)local_578.ArrayMax * 0x10)) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar42)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = local_578.ArrayNum;
          if (local_578.ArrayNum == local_578.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_578.AllocatorInstance,&local_578.ArrayMax);
          }
          local_578.ArrayNum = iVar13 + 1;
          ::FString::FString((FString *)(local_578.AllocatorInstance.Data + (longlong)iVar13 * 0x10)
                             ,(FString *)pFVar41);
          iVar29 = (param_1->Data).ArrayNum;
          iVar13 = iVar29 + -1;
          if (iVar29 == 0) {
            iVar13 = 0;
          }
          local_580 = local_580 + 4 + (iVar13 - local_568);
        }
        else if (*(int *)&(local_500->Elements).field_0x8 !=
                 *(int *)&(local_500->Elements).field_0x34) {
          if (*(int *)(pFVar41 + 8) == 0) {
            pwVar28 = L"";
            iVar13 = 0;
          }
          else {
            pwVar28 = *(wchar_t **)pFVar41;
            iVar13 = *(int *)(pFVar41 + 8) + -1;
          }
          uVar38 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar28);
          FVar26 = (((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)param_4)->Hash).SecondaryData;
          FVar27 = (ForElementType<FSetElementId>)
                   &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)param_4)->Hash;
          if (FVar26 != (ForElementType<FSetElementId>)0x0) {
            FVar27 = FVar26;
          }
          iVar13 = *(int *)((longlong)FVar27 +
                           ((longlong)
                            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                              *)param_4)->HashSize - 1U & (longlong)(int)uVar38) * 4);
          while (iVar13 != -1) {
            lVar25 = *(longlong *)
                      &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)param_4)->Elements;
            lVar21 = (longlong)iVar13;
            iVar29 = *(int *)(lVar25 + 8 + lVar21 * 0x28);
            if (iVar29 == *(int *)(pFVar41 + 8)) {
              if (1 < iVar29) {
                iVar29 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(lVar25 + lVar21 * 0x28),*(wchar_t **)pFVar41);
                bVar42 = iVar29 == 0;
                goto LAB_141899e51;
              }
LAB_141899e66:
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                               *)param_4,iVar13);
              break;
            }
            bVar42 = iVar29 + *(int *)(pFVar41 + 8) == 1;
LAB_141899e51:
            if (bVar42) goto LAB_141899e66;
            iVar13 = *(int *)(lVar25 + 0x20 + lVar21 * 0x28);
          }
        }
      }
      else {
        pFVar36 = local_540.Data + (longlong)(int)local_538 * 0x10;
        param_4 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)local_500;
        for (FVar32.Data = local_540.Data;
            local_500 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)param_4, FVar32.Data != pFVar36; FVar32.Data = FVar32.Data + 0x10) {
          iVar13 = *(int *)(FVar32.Data + 8);
          if (iVar13 == *(int *)(pFVar41 + 8)) {
            if (iVar13 < 2) goto LAB_141899387;
            iVar13 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)FVar32.Data,*(wchar_t **)pFVar41)
            ;
            bVar42 = iVar13 == 0;
          }
          else {
            bVar42 = iVar13 + *(int *)(pFVar41 + 8) == 1;
          }
          if (bVar42) goto LAB_141899387;
          param_4 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                     *)local_500;
        }
      }
      uStack_370 = uStack_370 & ~auStack_380._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_380);
      uVar24 = (ulonglong)uStack_36c;
      pFVar31 = local_4e8;
      pFVar34 = local_518;
    } while ((int)uStack_36c < *(int *)(auStack_380._8_8_ + 0x18));
    if (((char)local_350 != '\0') && (local_350._1_1_ != '\0')) {
      uVar38 = (int)local_358->_padding_ - *(int *)((longlong)&local_358->_padding_ + 4);
      iVar13 = (int)local_530;
      if (3 < uVar38) {
        uVar24 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_3d0.Number = (uint)lVar25;
        iVar13 = (int)local_530 << ((byte)lVar25 & 0x1f);
      }
      if (((0 < (int)uVar38) && ((int)local_358->_padding_ < iVar13)) ||
         (iVar13 < (int)local_358->_padding_)) {
        *(int *)&local_358->_padding_ = iVar13;
        TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                  *)local_358);
      }
    }
  }
  iVar14 = local_568;
  iVar29 = (param_1->Data).ArrayNum;
  iVar13 = iVar29 + -1;
  if (iVar29 == 0) {
    iVar13 = 0;
  }
  iVar29 = iVar13;
  if (local_568 < iVar13) {
    iVar29 = local_568;
  }
  iVar23 = 0;
  if (0 < iVar29) {
    iVar23 = iVar29;
  }
  ::FString::RemoveAt(param_1,iVar23,iVar13 - iVar23,No);
  ::FString::Reserve(param_1,local_580 + iVar14);
  local_158._0_8_ = (FScriptContainerElement *)0x0;
  local_158._8_8_ = 0;
  local_138 = (ForElementType<unsigned_int>)0x0;
  local_130 = 0;
  local_12c = 0x80;
  local_128 = -1;
  local_124 = 0;
  local_118 = (ForElementType<FSetElementId>)0x0;
  local_110 = 0;
  uVar38 = *(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)param_4)->Elements)->Elements).field_0x8 -
           *(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)param_4)->Elements)->Elements).field_0x34;
  if (uVar38 != 0) {
    if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar38);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_158,uVar38);
    iVar13 = (int)local_530;
    if (3 < uVar38) {
      uVar24 = (ulonglong)((uVar38 >> 1) + 7) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_3c8 = (undefined4)lVar25;
      iVar13 = (int)local_530 << ((byte)lVar25 & 0x1f);
    }
    if ((local_110 == 0) || (local_110 < iVar13)) {
      local_110 = iVar13;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_158);
    }
  }
  puVar1 = &(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)param_4)->Elements)->Elements).field_0x10;
  local_3f0._padding_._4_4_ = (undefined4)local_530;
  local_3f0.UnvisitedBitMask = 0xffffffff;
  local_3f0._padding_._0_4_ = 0;
  local_3f0.CurrentBitIndex = 0;
  local_3f0.BaseBitIndex = 0;
  local_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)param_4)->Elements)->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f0);
  }
  uVar38 = *(uint *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                             *)param_4)->Elements)->Elements).field_0x28;
  lStack_4d8 = CONCAT44(local_3f0._padding_._4_4_,(undefined4)local_3f0._padding_);
  uStack_4c4 = local_3f0.CurrentBitIndex;
  uStack_4c8 = local_3f0.UnvisitedBitMask;
  uStack_4c0._4_4_ = local_3f0._28_4_;
  uStack_4c0._0_4_ = local_3f0.BaseBitIndex;
  local_4b8 = *(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                               *)param_4)->Elements)->Elements).field_0x8 -
              *(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                               *)param_4)->Elements)->Elements).field_0x34;
  pTStack_4d0 = local_3f0.Array;
  uVar33 = uVar38 & 0xffffffe0;
  iVar13 = (int)uVar38 >> 5;
  uStack_2c8 = CONCAT44(uStack_4b4,local_4b8);
  TStack_2e8.Array = local_3f0.Array;
  local_4e0 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_4;
  local_2f0 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_4;
  TStack_2e8._padding_ = lStack_4d8;
  TStack_2e8._16_8_ = _uStack_4c8;
  TStack_2e8._24_8_ = uStack_4c0;
  if (((int)uVar38 < 0) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar42)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar37 = *(uint *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                             *)param_4)->Elements)->Elements).field_0x28;
  if (uVar38 != uVar37) {
    puVar6 = *(undefined1 **)
              &(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)param_4)->Elements)->Elements).field_0x20;
    puVar39 = puVar1;
    if (puVar6 != (undefined1 *)0x0) {
      puVar39 = puVar6;
    }
    uVar38 = -1 << ((byte)uVar38 & 0x1f) & *(uint *)(puVar39 + (longlong)iVar13 * 4);
    while (uVar38 == 0) {
      lVar25 = (longlong)iVar13;
      uVar33 = uVar33 + 0x20;
      iVar13 = iVar13 + 1;
      uVar38 = uVar37;
      if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_14189a0c0;
      uVar38 = *(uint *)(puVar39 + lVar25 * 4 + 4);
    }
    uVar24 = (ulonglong)(~(uVar38 - 1) & uVar38) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_3c4 = (int)lVar25;
    uVar38 = local_3c4 + -1 + uVar33;
    if ((int)uVar37 < (int)uVar38) {
      uVar38 = uVar37;
    }
  }
LAB_14189a0c0:
  while( true ) {
    pTVar10 = local_2f0;
    if (*(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&local_2f0->Elements)->Elements).field_0x8 -
        *(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)&local_2f0->Elements)->Elements).field_0x34 != (int)uStack_2c8) {
      local_585 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_585);
    }
    if (((TStack_2e8.CurrentBitIndex == uVar38) &&
        (TStack_2e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar10 ==
        (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
         *)param_4)) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_158,&local_3c0
               ,(bool *)(*(longlong *)
                          &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                             *)&pTVar10->Elements)->Elements +
                        (longlong)TStack_2e8.CurrentBitIndex * 0x28));
    TStack_2e8.UnvisitedBitMask = TStack_2e8.UnvisitedBitMask & ~TStack_2e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2e8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FString::FString(&BlankLine,L"\r\n\r\n");
    atexit(`FConfigFile::WriteToStringInternal'::__l2::_dynamic_atexit_destructor_for__BlankLine__);
    _Init_thread_footer(&::_TSS3);
  }
  local_438 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_158;
  iVar29 = 0;
  local_348.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.Data.ArrayNum = 0;
  local_348.Data.ArrayMax = 0;
  local_448 = param_1;
  local_440 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)param_4;
  `FConfigFile::WriteToStringInternal'::__l2::<lambda_1>::operator()(&local_448,&local_348);
  iVar13 = local_578.ArrayNum;
  uVar24 = (ulonglong)local_578.ArrayNum;
  pFVar35 = local_578.AllocatorInstance.Data + uVar24 * 0x10;
  FVar32.Data = local_578.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar24 != iVar13) {
      local_584 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_584)
      ;
    }
    if (FVar32.Data == pFVar35) break;
    pFVar17 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)param_4,(FString *)FVar32.Data);
    if ((pFVar17 != (FString *)0x0) && (local_158._8_4_ != local_124)) {
      if (*(int *)(FVar32.Data + 8) == 0) {
        pwVar28 = L"";
        iVar14 = iVar29;
      }
      else {
        pwVar28 = *(wchar_t **)FVar32.Data;
        iVar14 = *(int *)(FVar32.Data + 8) + -1;
      }
      uVar38 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar28);
      iVar14 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                         ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_158
                          ,uVar38,(FString *)FVar32.Data);
      if (iVar14 != 0) {
        iVar14 = (pFVar17->Data).ArrayNum;
        iVar23 = iVar14 + -1;
        if (iVar14 == 0) {
          iVar23 = iVar29;
        }
        ::FString::AppendChars(param_1,(wchar_t *)(pFVar17->Data).AllocatorInstance.Data,iVar23);
        iVar14 = BlankLine.Data.ArrayNum + -1;
        FVar8 = BlankLine.Data.AllocatorInstance;
        if (BlankLine.Data.ArrayNum == 0) {
          iVar14 = iVar29;
          FVar8.Data = (FScriptContainerElement *)L"";
        }
        bVar42 = ::FString::EndsWith(param_1,(wchar_t *)FVar8.Data,iVar14,CaseSensitive);
        if (!bVar42) {
          ::FString::AppendChars(param_1,L"\r\n",2);
        }
      }
    }
    uVar24 = local_578._8_8_ & 0xffffffff;
    FVar32.Data = FVar32.Data + 0x10;
  }
  if (0 < local_158._8_4_ - local_124) {
    local_550.Data = (FScriptContainerElement *)0x0;
    local_548 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_158._8_4_ - local_124,&local_550,0,(int *)((longlong)&local_548 + 4));
    uVar33 = local_130;
    uVar38 = 0;
    uStack_4c4 = uVar38;
    uStack_4c0._0_4_ = uVar38;
    if (local_130 != 0) {
      FVar40 = (ForElementType<unsigned_int>)((longlong)local_158 + 0x10);
      if (local_138 != (ForElementType<unsigned_int>)0x0) {
        FVar40 = local_138;
      }
      uVar37 = *(uint *)FVar40;
      uStack_4c0._0_4_ = 0;
      uVar38 = 0;
      while (uVar37 == 0) {
        lVar25 = (longlong)(int)uVar38;
        uStack_4c0._0_4_ = (uint)uStack_4c0 + 0x20;
        uVar38 = uVar38 + 1;
        uStack_4c4 = local_130;
        if ((int)((local_130 - 1) + ((int)(local_130 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar38)
        goto LAB_14189a365;
        uVar37 = ((uint *)((longlong)FVar40 + 4))[lVar25];
      }
      local_530 = (ulonglong)(-uVar37 & uVar37);
      uVar24 = local_530 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_3c0.Data.AllocatorInstance.Data._4_4_ = (int)lVar25;
      uStack_4c4 = local_3c0.Data.AllocatorInstance.Data._4_4_ + -1 + (uint)uStack_4c0;
      if ((int)local_130 < (int)uStack_4c4) {
        uStack_4c4 = local_130;
      }
    }
LAB_14189a365:
    local_4e0 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)local_158;
    pTStack_4d0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10);
    uVar37 = local_130 & 0xffffffe0;
    local_4b8 = local_158._8_4_ - local_124;
    uStack_4c8 = 0xffffffff;
    local_580 = -1 << ((byte)local_130 & 0x1f);
    lStack_4d8 = CONCAT44((int)local_530,uVar38);
    uStack_4c0._4_4_ = local_164;
    iVar13 = (int)local_130 >> 5;
    uStack_298 = CONCAT44(uStack_4b4,local_4b8);
    TStack_2b8.UnvisitedBitMask = 0xffffffff;
    TStack_2b8.CurrentBitIndex = uStack_4c4;
    TStack_2b8.BaseBitIndex = (uint)uStack_4c0;
    TStack_2b8._28_4_ = local_164;
    local_2c0 = local_4e0;
    TStack_2b8._padding_ = lStack_4d8;
    TStack_2b8.Array = pTStack_4d0;
    if (((int)local_130 < 0) &&
       (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar42)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (uVar33 != local_130) {
      FVar40 = (ForElementType<unsigned_int>)((longlong)local_158 + 0x10);
      if (local_138 != (ForElementType<unsigned_int>)0x0) {
        FVar40 = local_138;
      }
      uVar38 = local_580 & *(uint *)((longlong)FVar40 + (longlong)iVar13 * 4);
      while (uVar38 == 0) {
        lVar25 = (longlong)iVar13;
        uVar37 = uVar37 + 0x20;
        iVar13 = iVar13 + 1;
        uVar33 = local_130;
        if ((int)((local_130 - 1) + ((int)(local_130 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14189a4b0;
        uVar38 = ((uint *)((longlong)FVar40 + 4))[lVar25];
      }
      uVar24 = (ulonglong)(-uVar38 & uVar38) * 2 + 1;
      lVar25 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_3c0.Data.ArrayNum = (int)lVar25;
      uVar33 = local_3c0.Data.ArrayNum + -1 + uVar37;
      if ((int)local_130 < (int)uVar33) {
        uVar33 = local_130;
      }
    }
LAB_14189a4b0:
    while( true ) {
      pTVar10 = local_2c0;
      if (*(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&local_2c0->Elements)->Elements).field_0x8 -
          *(int *)&(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&local_2c0->Elements)->Elements).field_0x34 != (int)uStack_298) {
        local_583 = 0;
        `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_583);
      }
      if (((TStack_2b8.CurrentBitIndex == uVar33) &&
          (TStack_2b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10))) &&
         (pTVar10 ==
          (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)local_158)) break;
      pFVar35 = (FScriptContainerElement *)
                (*(longlong *)
                  &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&pTVar10->Elements)->Elements + (longlong)TStack_2b8.CurrentBitIndex * 0x18);
      if (((local_550.Data <= pFVar35) &&
          (pFVar35 < local_550.Data + (longlong)local_548._4_4_ * 0x10)) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar42)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (int)local_548;
      if ((int)local_548 == local_548._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_550,(int *)((longlong)&local_548 + 4));
      }
      local_548 = CONCAT44(local_548._4_4_,iVar13 + 1);
      ::FString::FString((FString *)(local_550.Data + (longlong)iVar13 * 0x10),(FString *)pFVar35);
      TStack_2b8.UnvisitedBitMask = TStack_2b8.UnvisitedBitMask & ~TStack_2b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b8);
    }
    AlgoImpl::
    IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
              ((FString *)local_550.Data,(int)local_548,local_582[0],(TLess<void> *)local_582);
    this_00 = local_438;
    pTVar10 = local_440;
    pFVar17 = local_448;
    iVar13 = (int)local_548;
    pFVar35 = local_550.Data + (longlong)(int)local_548 * 0x10;
    FVar32.Data = local_550.Data;
    while( true ) {
      if ((int)local_548 != iVar13) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_528);
      }
      if (FVar32.Data == pFVar35) break;
      pFVar22 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                        *)pTVar10,(FString *)FVar32.Data);
      if ((pFVar22 != (FString *)0x0) &&
         (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34)) {
        if (*(int *)(FVar32.Data + 8) == 0) {
          iVar29 = 0;
          pwVar28 = L"";
        }
        else {
          pwVar28 = *(wchar_t **)FVar32.Data;
          iVar29 = *(int *)(FVar32.Data + 8) + -1;
        }
        uVar38 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar29,pwVar28);
        iVar29 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                           (this_00,uVar38,(FString *)FVar32.Data);
        if (iVar29 != 0) {
          iVar14 = (pFVar22->Data).ArrayNum;
          iVar29 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar29 = 0;
          }
          ::FString::AppendChars(pFVar17,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data,iVar29);
          pwVar28 = L"";
          iVar29 = BlankLine.Data.ArrayNum;
          if (iVar29 != 0) {
            pwVar28 = (wchar_t *)BlankLine.Data.AllocatorInstance;
          }
          iVar14 = iVar29 + -1;
          if (iVar29 == 0) {
            iVar14 = 0;
          }
          bVar42 = ::FString::EndsWith(pFVar17,pwVar28,iVar14,CaseSensitive);
          if (!bVar42) {
            ::FString::AppendChars(pFVar17,L"\r\n",2);
          }
        }
      }
      FVar32.Data = FVar32.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_550.Data,(int)local_548);
    if (local_550.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_550.Data);
    }
  }
  local_110 = 0;
  if (local_118 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_158);
  DestructItems<FString,int>((FString *)local_540.Data,(int)local_538);
  if (local_540.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data);
  }
  local_c0 = 0;
  if (local_c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_108);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_578.AllocatorInstance.Data,local_578.ArrayNum);
  if (local_578.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.AllocatorInstance.Data);
  }
  return;
}

// begin @ 14189a840

TBaseIterator<1,1> * __thiscall
FConfigFile::begin(FConfigFile *this,TBaseIterator<1,1> *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 uStack_c;
  
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  iVar3 = (int)this->_padding_;
  iVar7 = 0;
  uVar4 = 1;
  iVar5 = 0;
  iVar8 = iVar7;
  if (iVar3 != 0) {
    plVar9 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar9 = &this->_padding_;
    }
    uVar2 = (uint)*plVar9;
    while (uVar2 == 0) {
      lVar6 = (longlong)iVar7;
      iVar8 = iVar8 + 0x20;
      iVar7 = iVar7 + 1;
      iVar5 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_14189a8e9;
      uVar2 = *(uint *)((longlong)plVar9 + lVar6 * 4 + 4);
    }
    uVar4 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (int)lVar6 + -1 + iVar8;
    if (iVar3 < iVar5) {
      iVar5 = iVar3;
    }
  }
LAB_14189a8e9:
  lVar6 = this->_padding_;
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)this;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar4,iVar7);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)&this->_padding_;
  *(undefined4 *)&(__return_storage_ptr__->ElementIt)._padding_ = 0xffffffff;
  *(int *)((longlong)&(__return_storage_ptr__->ElementIt)._padding_ + 4) = iVar5;
  *(int *)&(__return_storage_ptr__->ElementIt)._padding_ = iVar8;
  *(int *)((longlong)&(__return_storage_ptr__->ElementIt)._padding_ + 4) = iVar5;
  (__return_storage_ptr__->ElementIt).InitialNum = (int)lVar6 - iVar3;
  *(undefined4 *)&(__return_storage_ptr__->ElementIt).field_0x2c = uStack_c;
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  return __return_storage_ptr__;
}

// end @ 14189a970

TBaseIterator<1,1> * __thiscall
FConfigFile::end(FConfigFile *this,TBaseIterator<1,1> *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TBaseIterator<1,1> *pTVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  undefined4 local_5c;
  undefined4 uStack_2c;
  
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  uVar9 = (uint)this->_padding_;
  bVar7 = (byte)uVar9 & 0x1f;
  iVar10 = (int)uVar9 >> 5;
  uVar14 = 1 << bVar7;
  uVar11 = -1 << bVar7;
  uVar12 = uVar9 & 0xffffffe0;
  if (((int)uVar9 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TBaseIterator<1,1> *)(*pcVar4)();
    return pTVar6;
  }
  uVar2 = (uint)this->_padding_;
  if (uVar9 != uVar2) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = &this->_padding_;
    }
    uVar9 = uVar11 & *(uint *)((longlong)plVar13 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14189aa5c;
      uVar11 = 0xffffffff;
      uVar9 = *(uint *)((longlong)plVar13 + lVar8 * 4 + 4);
    }
    uVar14 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar14 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar2 < (int)uVar9) {
      uVar9 = uVar2;
    }
  }
LAB_14189aa5c:
  lVar8 = this->_padding_;
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)this;
  (__return_storage_ptr__->ElementIt)._padding_ = CONCAT44(uVar14,iVar10);
  (__return_storage_ptr__->ElementIt)._padding_ = (longlong)&this->_padding_;
  *(uint *)&(__return_storage_ptr__->ElementIt)._padding_ = uVar11;
  *(uint *)((longlong)&(__return_storage_ptr__->ElementIt)._padding_ + 4) = uVar9;
  *(uint *)&(__return_storage_ptr__->ElementIt)._padding_ = uVar12;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ElementIt)._padding_ + 4) = local_5c;
  (__return_storage_ptr__->ElementIt).InitialNum = (int)lVar8 - iVar3;
  *(undefined4 *)&(__return_storage_ptr__->ElementIt).field_0x2c = uStack_2c;
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  return __return_storage_ptr__;
}

// GetString @ 1418e1900

bool __thiscall
FConfigFile::GetString(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  FConfigSection *pFVar4;
  ForAnyElementType FVar5;
  FConfigSection *this_00;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar5.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar5.Data);
  iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar2,&local_18);
  pFVar4 = (FConfigSection *)0x0;
  if (iVar3 != -1) {
    pFVar4 = (FConfigSection *)((longlong)iVar3 * 0x110 + this->_padding_);
  }
  this_00 = (FConfigSection *)&pFVar4->_padding_;
  if (pFVar4 == (FConfigSection *)0x0) {
    this_00 = (FConfigSection *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FConfigSection *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = FConfigSection::GetString(this_00,param_2,param_3);
  }
  return bVar1;
}

