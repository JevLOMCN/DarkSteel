// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ~TThreadInstanceProvider<TSmoothie<1>_> @ 141cf14e0

void __thiscall
TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>::~TThreadInstanceProvider<TSmoothie<1>_>
          (TThreadInstanceProvider<TSmoothie<1>_> *this)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
  TlsFree(*(DWORD *)&this->field_0x40);
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar1 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TThreadInstanceProvider<FBanana> @ 141cf1530

void __thiscall
TTypeContainer<1>::TThreadInstanceProvider<FBanana>::~TThreadInstanceProvider<FBanana>
          (TThreadInstanceProvider<FBanana> *this)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
  TlsFree(*(DWORD *)&this->field_0x40);
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar1 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// ~TThreadInstanceProvider<FStrawberry> @ 141cf1580

void __thiscall
TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>::~TThreadInstanceProvider<FStrawberry>
          (TThreadInstanceProvider<FStrawberry> *this)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FThreadInstanceProvider___TTypeContainer__00__6B_;
  TlsFree(*(DWORD *)&this->field_0x40);
  if (*(longlong *)&this->field_0x10 != 0) {
    plVar1 = (longlong *)&this->field_0x20;
    if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  *(undefined ***)this = &___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// GetInstance @ 141d00650

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>::GetInstance
          (TThreadInstanceProvider<TSmoothie<1>_> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FTlsAutoCleanup FVar2;
  bool bVar3;
  bool bVar4;
  FTlsAutoCleanup *this_00;
  undefined8 uVar5;
  longlong *plVar6;
  FTlsAutoCleanup FVar7;
  uint uStackX_c;
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup local_10;
  
  bVar4 = false;
  bVar3 = false;
  this_00 = TlsGetValue(*(DWORD *)&this->field_0x40);
  if (this_00 == (FTlsAutoCleanup *)0x0) {
    this_00 = ::operator_new(0x18);
    if (this_00 == (FTlsAutoCleanup *)0x0) {
      FVar7 = (FTlsAutoCleanup)((ulonglong)uStackX_c << 0x20);
      this_00 = (FTlsAutoCleanup *)0x0;
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
      pcVar1 = *(code **)&this->field_0x10;
      plVar6 = (longlong *)&this->field_0x20;
      if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
        plVar6 = *(longlong **)&this->field_0x38;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(&local_18,uVar5);
      FVar7 = local_10;
      if (local_10 == (FTlsAutoCleanup)0x0) {
        *this_00 = (FTlsAutoCleanup)
                   &___7__TTlsAutoCleanupValue_V__TSharedPtr_U__TSmoothie__00___00____6B_;
        bVar4 = true;
        bVar3 = true;
        this_00[1] = local_18;
        this_00[2] = (FTlsAutoCleanup)0x0;
      }
      else {
        LOCK();
        *(atomic<int> *)((longlong)local_10 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_10 + 8) + 1);
        UNLOCK();
        *this_00 = (FTlsAutoCleanup)
                   &___7__TTlsAutoCleanupValue_V__TSharedPtr_U__TSmoothie__00___00____6B_;
        this_00[1] = local_18;
        this_00[2] = local_10;
        LOCK();
        *(atomic<int> *)((longlong)local_10 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_10 + 8) + 1);
        UNLOCK();
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar7);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_10);
    }
    FTlsAutoCleanup::Register(this_00);
    TlsSetValue(*(DWORD *)&this->field_0x40,this_00);
  }
  FVar7 = this_00[2];
  FVar2 = this_00[1];
  if (FVar7 == (FTlsAutoCleanup)0x0) {
    __return_storage_ptr__->Object = (void *)FVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    *(atomic<int> *)((longlong)FVar7 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar7 + 8) + 1);
    UNLOCK();
    __return_storage_ptr__->Object = (void *)FVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)FVar7;
    LOCK();
    *(atomic<int> *)((longlong)FVar7 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar7 + 8) + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar7);
  return __return_storage_ptr__;
}

// GetInstance @ 141d00790

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TThreadInstanceProvider<FBanana>::GetInstance
          (TThreadInstanceProvider<FBanana> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FTlsAutoCleanup FVar2;
  bool bVar3;
  bool bVar4;
  FTlsAutoCleanup *this_00;
  undefined8 uVar5;
  longlong *plVar6;
  FTlsAutoCleanup FVar7;
  uint uStackX_c;
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup local_10;
  
  bVar4 = false;
  bVar3 = false;
  this_00 = TlsGetValue(*(DWORD *)&this->field_0x40);
  if (this_00 == (FTlsAutoCleanup *)0x0) {
    this_00 = ::operator_new(0x18);
    if (this_00 == (FTlsAutoCleanup *)0x0) {
      FVar7 = (FTlsAutoCleanup)((ulonglong)uStackX_c << 0x20);
      this_00 = (FTlsAutoCleanup *)0x0;
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
      pcVar1 = *(code **)&this->field_0x10;
      plVar6 = (longlong *)&this->field_0x20;
      if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
        plVar6 = *(longlong **)&this->field_0x38;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(&local_18,uVar5);
      FVar7 = local_10;
      if (local_10 == (FTlsAutoCleanup)0x0) {
        *this_00 = (FTlsAutoCleanup)&___7__TTlsAutoCleanupValue_V__TSharedPtr_UFBanana___00____6B_;
        bVar4 = true;
        bVar3 = true;
        this_00[1] = local_18;
        this_00[2] = (FTlsAutoCleanup)0x0;
      }
      else {
        LOCK();
        *(atomic<int> *)((longlong)local_10 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_10 + 8) + 1);
        UNLOCK();
        *this_00 = (FTlsAutoCleanup)&___7__TTlsAutoCleanupValue_V__TSharedPtr_UFBanana___00____6B_;
        this_00[1] = local_18;
        this_00[2] = local_10;
        LOCK();
        *(atomic<int> *)((longlong)local_10 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_10 + 8) + 1);
        UNLOCK();
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar7);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_10);
    }
    FTlsAutoCleanup::Register(this_00);
    TlsSetValue(*(DWORD *)&this->field_0x40,this_00);
  }
  FVar7 = this_00[2];
  FVar2 = this_00[1];
  if (FVar7 == (FTlsAutoCleanup)0x0) {
    __return_storage_ptr__->Object = (void *)FVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    *(atomic<int> *)((longlong)FVar7 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar7 + 8) + 1);
    UNLOCK();
    __return_storage_ptr__->Object = (void *)FVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)FVar7;
    LOCK();
    *(atomic<int> *)((longlong)FVar7 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar7 + 8) + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar7);
  return __return_storage_ptr__;
}

// GetInstance @ 141d008d0

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>::GetInstance
          (TThreadInstanceProvider<FStrawberry> *this,TSharedPtr<void,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FTlsAutoCleanup FVar2;
  bool bVar3;
  bool bVar4;
  FTlsAutoCleanup *this_00;
  undefined8 uVar5;
  longlong *plVar6;
  FTlsAutoCleanup FVar7;
  uint uStackX_c;
  FTlsAutoCleanup local_18;
  FTlsAutoCleanup local_10;
  
  bVar4 = false;
  bVar3 = false;
  this_00 = TlsGetValue(*(DWORD *)&this->field_0x40);
  if (this_00 == (FTlsAutoCleanup *)0x0) {
    this_00 = ::operator_new(0x18);
    if (this_00 == (FTlsAutoCleanup *)0x0) {
      FVar7 = (FTlsAutoCleanup)((ulonglong)uStackX_c << 0x20);
      this_00 = (FTlsAutoCleanup *)0x0;
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->field_0x10);
      pcVar1 = *(code **)&this->field_0x10;
      plVar6 = (longlong *)&this->field_0x20;
      if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
        plVar6 = *(longlong **)&this->field_0x38;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(&local_18,uVar5);
      FVar7 = local_10;
      if (local_10 == (FTlsAutoCleanup)0x0) {
        *this_00 = (FTlsAutoCleanup)
                   &___7__TTlsAutoCleanupValue_V__TSharedPtr_UFStrawberry___00____6B_;
        bVar4 = true;
        bVar3 = true;
        this_00[1] = local_18;
        this_00[2] = (FTlsAutoCleanup)0x0;
      }
      else {
        LOCK();
        *(atomic<int> *)((longlong)local_10 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_10 + 8) + 1);
        UNLOCK();
        *this_00 = (FTlsAutoCleanup)
                   &___7__TTlsAutoCleanupValue_V__TSharedPtr_UFStrawberry___00____6B_;
        this_00[1] = local_18;
        this_00[2] = local_10;
        LOCK();
        *(atomic<int> *)((longlong)local_10 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)local_10 + 8) + 1);
        UNLOCK();
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar7);
    }
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_10);
    }
    FTlsAutoCleanup::Register(this_00);
    TlsSetValue(*(DWORD *)&this->field_0x40,this_00);
  }
  FVar7 = this_00[2];
  FVar2 = this_00[1];
  if (FVar7 == (FTlsAutoCleanup)0x0) {
    __return_storage_ptr__->Object = (void *)FVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    *(atomic<int> *)((longlong)FVar7 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar7 + 8) + 1);
    UNLOCK();
    __return_storage_ptr__->Object = (void *)FVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)FVar7;
    LOCK();
    *(atomic<int> *)((longlong)FVar7 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FVar7 + 8) + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar7);
  return __return_storage_ptr__;
}

