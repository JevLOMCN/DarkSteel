// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 9

// ~TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_> @ 1431bd630

void __thiscall
TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
::
~TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          (TFutureState<TTuple<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
           *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    (this->Result).Pad[0x98] = '\0';
    (this->Result).Pad[0x99] = '\0';
    (this->Result).Pad[0x9a] = '\0';
    (this->Result).Pad[0x9b] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x90);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x50));
    (this->Result).Pad[0x48] = '\0';
    (this->Result).Pad[0x49] = '\0';
    (this->Result).Pad[0x4a] = '\0';
    (this->Result).Pad[0x4b] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->Result);
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431bd6db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_> @ 143226d30

void __thiscall
TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
::
~TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
          (TFutureState<TTuple<TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>,TMap<FGuid,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,unsigned_int,0>_>_>_>
           *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    (this->Result).Pad[0x98] = '\0';
    (this->Result).Pad[0x99] = '\0';
    (this->Result).Pad[0x9a] = '\0';
    (this->Result).Pad[0x9b] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x90);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x50));
    (this->Result).Pad[0x48] = '\0';
    (this->Result).Pad[0x49] = '\0';
    (this->Result).Pad[0x4a] = '\0';
    (this->Result).Pad[0x4b] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->Result);
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> @ 143226df0

void __thiscall
TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>::
~TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_>
          (TFutureState<TTuple<TSharedPtr<FBuildPatchAppManifest,1>,FString>_> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    pvVar1 = *(void **)((this->Result).Pad + 0x10);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Result).Pad + 8));
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TTuple<FString,bool,FGuid>_> @ 143226e70

void __thiscall
TFutureState<TTuple<FString,bool,FGuid>_>::~TFutureState<TTuple<FString,bool,FGuid>_>
          (TFutureState<TTuple<FString,bool,FGuid>_> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((this->field_0x68 != '\0') && (pvVar1 = *(void **)(this->Result).Pad, pvVar1 != (void *)0x0))
  {
    FMemory::Free(pvVar1);
  }
  if (*(FEvent **)&this->field_0x60 != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)&this->field_0x60);
    *(undefined8 *)&this->field_0x60 = 0;
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    plVar2 = (longlong *)&this->field_0x40;
    if (*(longlong **)&this->field_0x58 != (longlong *)0x0) {
      plVar2 = *(longlong **)&this->field_0x58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<BuildPatchServices::FFileManifestList> @ 143226ee0

void __thiscall
TFutureState<BuildPatchServices::FFileManifestList>::
~TFutureState<BuildPatchServices::FFileManifestList>
          (TFutureState<BuildPatchServices::FFileManifestList> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    DestructItems<BuildPatchServices::FFileManifest,int>
              (*(FFileManifest **)(this->Result).Pad,*(int *)((this->Result).Pad + 8));
    pvVar1 = *(void **)(this->Result).Pad;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<BuildPatchServices::FManifestResult> @ 143226f60

void __thiscall
TFutureState<BuildPatchServices::FManifestResult>::
~TFutureState<BuildPatchServices::FManifestResult>
          (TFutureState<BuildPatchServices::FManifestResult> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    (this->Result).Pad[0x58] = '\0';
    (this->Result).Pad[0x59] = '\0';
    (this->Result).Pad[0x5a] = '\0';
    (this->Result).Pad[0x5b] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x50);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((this->Result).Pad + 0x10));
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000143226fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> @ 143226ff0

void __thiscall
TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::
~TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>
          (TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (((char)this->_padding_ != '\0') &&
     (pvVar1 = *(void **)(this->Result).Pad, pvVar1 != (void *)0x0)) {
    FMemory::Free(pvVar1);
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00014322704a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 143227060

void __thiscall
TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TFutureState<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    DestructItems<FString,int>(*(FString **)(this->Result).Pad,*(int *)((this->Result).Pad + 8));
    pvVar1 = *(void **)(this->Result).Pad;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432270c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// ~TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 143286260

void __thiscall
TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>::
~TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *this)

{
  void *pvVar1;
  longlong *plVar2;
  
  if ((char)this->_padding_ != '\0') {
    (this->Result).Pad[0x48] = '\0';
    (this->Result).Pad[0x49] = '\0';
    (this->Result).Pad[0x4a] = '\0';
    (this->Result).Pad[0x4b] = '\0';
    pvVar1 = *(void **)((this->Result).Pad + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->Result);
  }
  if ((FEvent *)this->_padding_ != (FEvent *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)this->_padding_);
    this->_padding_ = 0;
  }
  if (this->_padding_ != 0) {
    plVar2 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar2 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001432862da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

