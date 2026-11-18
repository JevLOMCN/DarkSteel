// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 69

// Construct<FFastArraySerializer> @ 1441c3df0

void __cdecl UE::CoreUObject::Private::Construct<FFastArraySerializer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x100) = 2;
  return;
}

// ConstructForTests<FFastArraySerializer> @ 1441c3e00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFastArraySerializer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x100) = 2;
  return;
}

// Destruct<FFastArraySerializer> @ 1441c3e10

void __cdecl UE::CoreUObject::Private::Destruct<FFastArraySerializer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x58));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FFastArraySerializer> @ 1441c3e20

bool __cdecl
UE::CoreUObject::Private::Copy<FFastArraySerializer>(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar2;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar2 = (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)this + ((longlong)param_2 - (longlong)param_1));
      if (this != pTVar2) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar2 + 1),*(int *)&pTVar2[1].field_0x10);
        iVar1 = *(int *)&pTVar2->field_0x8;
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar1);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                   (int *)&this->field_0xc);
        *(undefined4 *)&this->field_0x30 = *(undefined4 *)&pTVar2->field_0x30;
        *(undefined4 *)&this->field_0x34 = *(undefined4 *)&pTVar2->field_0x34;
        if (&this->field_0x10 != &pTVar2->field_0x10) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                     (TBitArray<FDefaultBitArrayAllocator> *)&pTVar2->field_0x10);
        }
        if (iVar1 != 0) {
          memcpy(*(void **)this,*(void **)pTVar2,(longlong)iVar1 << 4);
        }
      }
      *(undefined4 *)&this[1].field_0x18 = *(undefined4 *)&pTVar2[1].field_0x18;
      *(undefined4 *)&this[1].field_0x1c = *(undefined4 *)&pTVar2[1].field_0x1c;
      if (&this[1].field_0x20 != &pTVar2[1].field_0x20) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&this[2].field_0x20,(int *)&this[2].field_0x30,
                   (ForElementType<FSetElementId> *)&pTVar2[2].field_0x20,
                   *(int *)&pTVar2[2].field_0x30);
        TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this[1].field_0x20,
                    (TSparseArray<TSparseSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&pTVar2[1].field_0x20);
      }
      TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
                   *)(this + 3),
                  (TSet<TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>,0>,FDefaultSetAllocator>
                   *)(pTVar2 + 3));
      *(undefined4 *)&this[4].field_0x18 = *(undefined4 *)&pTVar2[4].field_0x18;
      *(undefined4 *)&this[4].field_0x1c = *(undefined4 *)&pTVar2[4].field_0x1c;
      this[4].field_0x20 = pTVar2[4].field_0x20;
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[4].field_0x28;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetAnalyticsDataConfig> @ 1441c4190

void __cdecl UE::CoreUObject::Private::Construct<FNetAnalyticsDataConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNetAnalyticsDataConfig> @ 1441c41a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetAnalyticsDataConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNetAnalyticsDataConfig> @ 1441c41b0

void __cdecl UE::CoreUObject::Private::Destruct<FNetAnalyticsDataConfig>(void *param_1)

{
  return;
}

// Copy<FNetAnalyticsDataConfig> @ 1441c41c0

bool __cdecl
UE::CoreUObject::Private::Copy<FNetAnalyticsDataConfig>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFastArraySerializerItem> @ 1441c42f0

void __cdecl UE::CoreUObject::Private::Construct<FFastArraySerializerItem>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// ConstructForTests<FFastArraySerializerItem> @ 1441c4310

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFastArraySerializerItem>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// Destruct<FFastArraySerializerItem> @ 1441c4330

void __cdecl UE::CoreUObject::Private::Destruct<FFastArraySerializerItem>(void *param_1)

{
  return;
}

// Copy<FFastArraySerializerItem> @ 1441c4340

bool __cdecl
UE::CoreUObject::Private::Copy<FFastArraySerializerItem>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if (param_2 != param_1) {
      *puVar1 = 0xffffffff;
      *(undefined8 *)(puVar1 + 1) = 0xffffffffffffffff;
    }
    puVar1 = puVar1 + 3;
  }
  return true;
}

// Construct<FStateStruct> @ 1441c7a90

void __cdecl UE::CoreUObject::Private::Construct<FStateStruct>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateStruct__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FStateStruct> @ 1441c7b10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FStateStruct>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateStruct__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FStateStruct> @ 1441c7b30

void __cdecl UE::CoreUObject::Private::Destruct<FStateStruct>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FStateStruct__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FStateStruct> @ 1441c7b50

bool __cdecl UE::CoreUObject::Private::Copy<FStateStruct>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FString *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (8 - (longlong)param_1);
      this = (FString *)((longlong)pvVar2 + 8);
      pvVar2 = (void *)((longlong)pvVar2 + 0x18);
      ::FString::operator=(this,(FString *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetFaultState> @ 1441c7bb0

void __cdecl UE::CoreUObject::Private::Construct<FNetFaultState>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffff0000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffff00ff;
  *(undefined4 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FNetFaultState__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffff0000;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0xffff;
  return;
}

// ConstructForTests<FNetFaultState> @ 1441c7c00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetFaultState>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffff0000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FNetFaultState__6B_;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x36) = 0xffffffff;
  return;
}

// Destruct<FNetFaultState> @ 1441c7c50

void __cdecl UE::CoreUObject::Private::Destruct<FNetFaultState>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FStateStruct__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FNetFaultState> @ 1441c7c90

bool __cdecl UE::CoreUObject::Private::Copy<FNetFaultState>(void *param_1,void *param_2,int param_3)

{
  FEscalationState *pFVar1;
  FEscalationState *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FEscalationState *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FEscalationState::operator=(this,pFVar1);
      *(char *)&this[1]._padding_ = (char)pFVar1[1]._padding_;
      *(undefined2 *)((longlong)&this[1]._padding_ + 2) =
           *(undefined2 *)((longlong)&pFVar1[1]._padding_ + 2);
      *(undefined1 *)((longlong)&this[1]._padding_ + 4) =
           *(undefined1 *)((longlong)&pFVar1[1]._padding_ + 4);
      *(undefined2 *)((longlong)&this[1]._padding_ + 6) =
           *(undefined2 *)((longlong)&pFVar1[1]._padding_ + 6);
      *(char *)&this[1]._padding_ = (char)pFVar1[1]._padding_;
      *(undefined1 *)((longlong)&this[1]._padding_ + 1) =
           *(undefined1 *)((longlong)&pFVar1[1]._padding_ + 1);
      param_3 = param_3 + -1;
      this = (FEscalationState *)&this[1]._padding_;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEscalationState> @ 1441c7ff0

void __cdecl UE::CoreUObject::Private::Construct<FEscalationState>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FEscalationState__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffff0000;
  return;
}

// ConstructForTests<FEscalationState> @ 1441c8030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEscalationState>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffff0000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FEscalationState__6B_;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FEscalationState> @ 1441c8070

void __cdecl UE::CoreUObject::Private::Destruct<FEscalationState>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FStateStruct__6B_;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FEscalationState> @ 1441c80b0

bool __cdecl
UE::CoreUObject::Private::Copy<FEscalationState>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
    *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
    *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)((longlong)param_2 + 0x1a);
    *(undefined2 *)((longlong)param_1 + 0x1c) = *(undefined2 *)((longlong)param_2 + 0x1c);
    *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
    if (pFVar3 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      iVar2 = *(int *)((longlong)param_2 + 0x28);
      piVar1 = (int *)((longlong)param_1 + 0x2c);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,*piVar1,pFVar3,iVar2,piVar1);
        if (iVar2 != 0) {
          memcpy(pFVar3->Data,_Src,(longlong)iVar2);
        }
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x30);
  }
  return true;
}

// CopyFunc<UE::Net::FNetResult> @ 1441c9b30

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>(void *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = ::operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DeleterFunc<UE::Net::FNetResult>;
    puVar1[1] = CopyFunc<UE::Net::FNetResult>;
    puVar1[2] = *(undefined8 *)param_1;
    puVar1[3] = *(undefined8 *)((longlong)param_1 + 8);
    puVar1[4] = *(undefined8 *)((longlong)param_1 + 0x10);
    ::FString::FString((FString *)(puVar1 + 5),(FString *)((longlong)param_1 + 0x18));
    puVar1[7] = 0;
    if (*(longlong *)((longlong)param_1 + 0x28) != 0) {
      uVar2 = (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + -8))();
      puVar1[7] = uVar2;
    }
    return puVar1 + 2;
  }
  return &DAT_00000010;
}

// DeleterFunc<UE::Net::FNetResult> @ 1441c9d70

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  ::operator_delete(param_1,0x40);
  return;
}

// DereferenceIfNecessary<UE::Net::Private::FNetPropertyConditionManager,UE::Net::Private::FNetPropertyConditionManager_*_&> @ 1441c9dc0

FNetPropertyConditionManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Net::Private::FNetPropertyConditionManager,UE::Net::Private::FNetPropertyConditionManager_*_&>
          (FNetPropertyConditionManager **param_1)

{
  return *param_1;
}

// QuantizeVector<UE::Math::TVector<float>_> @ 1441cdf20

TVector<float> * __cdecl
UE::Net::Private::QuantizeVector<UE::Math::TVector<float>_>
          (TVector<float> *__return_storage_ptr__,int param_1,TVector<float> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TVector<float> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res18 [8];
  
  iVar3 = _finite((double)(param_2->field0_0x0)._s_0.X);
  if (((iVar3 == 0) || (iVar3 = _finite((double)(param_2->field0_0x0)._s_0.Y), iVar3 == 0)) ||
     (iVar3 = _finite((double)(param_2->field0_0x0)._s_0.Z), iVar3 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (`struct_UE::Math::TVector<float>___cdecl_UE::Net::Private::QuantizeVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64)'
          ::__l8::OnceOnly == false) {
        UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
        `struct_UE::Math::TVector<float>___cdecl_UE::Net::Private::QuantizeVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64)'
        ::__l8::OnceOnly = true;
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
        return __return_storage_ptr__;
      }
    }
    else {
      `UE::Net::Private::QuantizeVector<UE::Math::TVector<float>_>'::__l13::<lambda_1>::operator()
                (local_res18);
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    if ((param_1 != (short)param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2))
    {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float> *)(*pcVar1)();
      return pTVar4;
    }
    fVar7 = (param_2->field0_0x0)._s_0.X;
    fVar8 = (param_2->field0_0x0)._s_0.Y;
    fVar5 = (param_2->field0_0x0)._s_0.Z;
    fVar11 = (float)(int)(short)param_1;
    fVar10 = fVar11 * fVar7;
    fVar9 = fVar11 * fVar8;
    fVar11 = fVar11 * fVar5;
    fVar6 = (float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar6 = (float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    if (fVar6 <= (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar6 = (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    if (__real_4e800000 <= fVar6) {
      fVar7 = (param_2->field0_0x0)._s_0.Z;
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar7;
    }
    else {
      fVar6 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if ((float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar6 = (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      if ((float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar6) {
        fVar6 = (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      if (__real_4b000000 <= fVar6) {
        fVar6 = __real_3f000000;
        if ((fVar7 <= 0.0) && (fVar6 = __real_bf000000, 0.0 <= fVar7)) {
          fVar6 = 0.0;
        }
        fVar9 = __real_3f000000;
        if ((fVar8 <= 0.0) && (fVar9 = __real_bf000000, 0.0 <= fVar8)) {
          fVar9 = 0.0;
        }
        fVar10 = __real_3f000000;
        if ((fVar5 <= 0.0) && (fVar10 = __real_bf000000, 0.0 <= fVar5)) {
          fVar10 = 0.0;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(int)(fVar7 + fVar6);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(int)(fVar8 + fVar9);
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(int)(fVar5 + fVar10);
      }
      else {
        fVar7 = __real_3f000000;
        if ((fVar10 <= 0.0) && (fVar7 = __real_bf000000, 0.0 <= fVar10)) {
          fVar7 = 0.0;
        }
        fVar8 = __real_3f000000;
        if ((fVar9 <= 0.0) && (fVar8 = __real_bf000000, 0.0 <= fVar9)) {
          fVar8 = 0.0;
        }
        fVar5 = __real_3f000000;
        if ((fVar11 <= 0.0) && (fVar5 = __real_bf000000, 0.0 <= fVar11)) {
          fVar5 = 0.0;
        }
        fVar6 = __real_3f800000 / (float)param_1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)(int)(fVar11 + fVar5) * fVar6;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (float)(int)(fVar10 + fVar7) * fVar6;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)(int)(fVar9 + fVar8) * fVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// QuantizeVector<UE::Math::TVector<double>_> @ 1441ce230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
UE::Net::Private::QuantizeVector<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TVector<double> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_res18 [8];
  
  iVar3 = _finite((param_2->field0_0x0)._s_0.X);
  if (((iVar3 == 0) || (iVar3 = _finite((param_2->field0_0x0)._s_0.Y), iVar3 == 0)) ||
     (iVar3 = _finite((param_2->field0_0x0)._s_0.Z), iVar3 == 0)) {
    if (GEnsureOnNANDiagnostic == 0) {
      if (`struct_UE::Math::TVector<double>___cdecl_UE::Net::Private::QuantizeVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64)'
          ::__l8::OnceOnly == false) {
        UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
        `struct_UE::Math::TVector<double>___cdecl_UE::Net::Private::QuantizeVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64)'
        ::__l8::OnceOnly = true;
        (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
        return __return_storage_ptr__;
      }
    }
    else {
      `UE::Net::Private::QuantizeVector<UE::Math::TVector<double>_>'::__l13::<lambda_1>::operator()
                (local_res18);
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    if ((param_1 != (short)param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2))
    {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
    dVar9 = (param_2->field0_0x0)._s_0.X;
    dVar10 = (param_2->field0_0x0)._s_0.Y;
    dVar6 = (param_2->field0_0x0)._s_0.Z;
    dVar12 = (double)(int)(short)param_1;
    dVar8 = dVar12 * dVar9;
    dVar11 = dVar12 * dVar10;
    dVar12 = dVar12 * dVar6;
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar7 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar7 <= dVar5) {
      dVar7 = dVar5;
    }
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar7 <= dVar5) {
      dVar7 = dVar5;
    }
    if (___real_43d0000000000000 <= dVar7) {
      dVar10 = (param_2->field0_0x0)._s_0.Y;
      dVar9 = (param_2->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar10;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
    }
    else {
      dVar7 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar5 <= dVar7) {
        dVar7 = dVar5;
      }
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar5 <= dVar7) {
        dVar7 = dVar5;
      }
      if (__real_4330000000000000 <= dVar7) {
        dVar8 = __real_3fe0000000000000;
        if ((dVar9 <= 0.0) && (dVar8 = __real_bfe0000000000000, 0.0 <= dVar9)) {
          dVar8 = 0.0;
        }
        dVar7 = __real_3fe0000000000000;
        if ((dVar10 <= 0.0) && (dVar7 = __real_bfe0000000000000, 0.0 <= dVar10)) {
          dVar7 = 0.0;
        }
        dVar5 = __real_3fe0000000000000;
        if ((dVar6 <= 0.0) && (dVar5 = __real_bfe0000000000000, 0.0 <= dVar6)) {
          dVar5 = 0.0;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(longlong)(dVar9 + dVar8);
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(longlong)(dVar10 + dVar7);
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(longlong)(dVar6 + dVar5);
      }
      else {
        dVar9 = __real_3fe0000000000000;
        if ((dVar8 <= 0.0) && (dVar9 = __real_bfe0000000000000, 0.0 <= dVar8)) {
          dVar9 = 0.0;
        }
        dVar10 = __real_3fe0000000000000;
        if ((dVar11 <= 0.0) && (dVar10 = __real_bfe0000000000000, 0.0 <= dVar11)) {
          dVar10 = 0.0;
        }
        dVar6 = __real_3fe0000000000000;
        if ((dVar12 <= 0.0) && (dVar6 = __real_bfe0000000000000, 0.0 <= dVar12)) {
          dVar6 = 0.0;
        }
        dVar7 = __real_3ff0000000000000 / (double)param_1;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(longlong)(dVar8 + dVar9) * dVar7;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(longlong)(dVar11 + dVar10) * dVar7;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(longlong)(dVar12 + dVar6) * dVar7;
      }
    }
  }
  return __return_storage_ptr__;
}

// ReadQuantizedVector<UE::Math::TVector<float>_> @ 1441ce550

bool __cdecl
UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>
          (int param_1,TVector<float> *param_2,FArchive *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong local_res18;
  uint local_res20 [2];
  ulonglong local_48;
  undefined8 local_40;
  float local_38;
  undefined4 uStack_34;
  double local_30;
  
  local_res20[0] = 0;
  (**(code **)(*(longlong *)param_3 + 0x198))(param_3,local_res20,0x80);
  uVar2 = local_res20[0];
  pcVar1 = *(code **)(*(longlong *)param_3 + 400);
  uVar6 = local_res20[0] & 0x3f;
  if (uVar6 == 0) {
    if (local_res20[0] >> 6 == 0) {
      (*pcVar1)(param_3,&local_40,0x60);
      iVar4 = _finite((double)(float)local_40);
      if (iVar4 != 0) {
        iVar4 = _finite((double)local_40._4_4_);
        if ((iVar4 != 0) && (iVar4 = _finite((double)local_38), iVar4 != 0)) {
          *(double *)&param_2->field0_0x0 = local_40;
          (param_2->field0_0x0)._s_0.Z = local_38;
          return true;
        }
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
            ::__l34::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
          ::__l34::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>'::__l39::<lambda_2>::
        operator()(&local_res18);
      }
    }
    else {
      (*pcVar1)(param_3,&local_40,0xc0);
      iVar4 = _finite(local_40);
      if (((iVar4 != 0) && (iVar4 = _finite((double)CONCAT44(uStack_34,local_38)), iVar4 != 0)) &&
         (iVar4 = _finite(local_30), iVar4 != 0)) {
        (param_2->field0_0x0)._s_0.X = (float)local_40;
        (param_2->field0_0x0)._s_0.Y = (float)(double)CONCAT44(uStack_34,local_38);
        (param_2->field0_0x0)._s_0.Z = (float)local_30;
        return true;
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
            ::__l21::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
          ::__l21::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>'::__l26::<lambda_1>::
        operator()(&local_res18);
      }
    }
    *(undefined8 *)&param_2->field0_0x0 = 0;
    bVar3 = false;
    (param_2->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    local_res18 = 0;
    local_48 = 0;
    local_40 = 0.0;
    (*pcVar1)(param_3,&local_res18,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&local_48,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&local_40,uVar6);
    uVar5 = 1L << ((char)uVar6 - 1U & 0x3f);
    fVar8 = (float)(longlong)((uVar5 ^ local_res18) - uVar5);
    fVar9 = (float)(longlong)((uVar5 ^ local_48) - uVar5);
    fVar10 = (float)(longlong)((uVar5 ^ (ulonglong)local_40) - uVar5);
    if (uVar2 >> 6 != 0) {
      fVar7 = __real_3f800000 / (float)param_1;
      fVar10 = fVar7 * fVar10;
      fVar9 = fVar7 * fVar9;
      fVar8 = fVar7 * fVar8;
    }
    (param_2->field0_0x0)._s_0.X = fVar8;
    bVar3 = true;
    (param_2->field0_0x0)._s_0.Y = fVar9;
    (param_2->field0_0x0)._s_0.Z = fVar10;
  }
  return bVar3;
}

// ReadQuantizedVector<UE::Math::TVector<double>_> @ 1441ce7e0

bool __cdecl
UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>
          (int param_1,TVector<double> *param_2,FArchive *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong local_res18;
  uint local_res20 [2];
  ulonglong local_48;
  undefined8 local_40;
  float fStack_38;
  undefined4 uStack_34;
  double local_30;
  
  local_res20[0] = 0;
  (**(code **)(*(longlong *)param_3 + 0x198))(param_3,local_res20,0x80);
  uVar2 = local_res20[0];
  pcVar1 = *(code **)(*(longlong *)param_3 + 400);
  uVar6 = local_res20[0] & 0x3f;
  if (uVar6 == 0) {
    if (local_res20[0] >> 6 == 0) {
      (*pcVar1)(param_3,&local_40,0x60);
      iVar4 = _finite((double)(float)local_40);
      if (iVar4 != 0) {
        iVar4 = _finite((double)local_40._4_4_);
        if ((iVar4 != 0) && (iVar4 = _finite((double)fStack_38), iVar4 != 0)) {
          (param_2->field0_0x0)._s_0.X = (double)(float)local_40;
          (param_2->field0_0x0)._s_0.Y = (double)local_40._4_4_;
          (param_2->field0_0x0)._s_0.Z = (double)fStack_38;
          return true;
        }
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
            ::__l34::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
          ::__l34::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>'::__l39::<lambda_2>::
        operator()(&local_res18);
      }
    }
    else {
      (*pcVar1)(param_3,&local_40,0xc0);
      iVar4 = _finite(local_40);
      if (((iVar4 != 0) && (iVar4 = _finite((double)CONCAT44(uStack_34,fStack_38)), iVar4 != 0)) &&
         (iVar4 = _finite(local_30), iVar4 != 0)) {
        (param_2->field0_0x0)._s_0.X = local_40;
        (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uStack_34,fStack_38);
        (param_2->field0_0x0)._s_0.Z = local_30;
        return true;
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
            ::__l21::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
          ::__l21::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>'::__l26::<lambda_1>::
        operator()(&local_res18);
      }
    }
    (param_2->field0_0x0)._s_0.X = 0.0;
    bVar3 = false;
    (param_2->field0_0x0)._s_0.Y = 0.0;
    (param_2->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    local_res18 = 0;
    local_48 = 0;
    local_40 = 0.0;
    (*pcVar1)(param_3,&local_res18,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&local_48,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&local_40,uVar6);
    uVar5 = 1L << ((char)uVar6 - 1U & 0x3f);
    dVar8 = (double)(longlong)((uVar5 ^ local_res18) - uVar5);
    dVar9 = (double)(longlong)((uVar5 ^ local_48) - uVar5);
    dVar10 = (double)(longlong)((uVar5 ^ (ulonglong)local_40) - uVar5);
    if (uVar2 >> 6 != 0) {
      dVar7 = __real_3ff0000000000000 / (double)param_1;
      dVar10 = dVar7 * dVar10;
      dVar9 = dVar7 * dVar9;
      dVar8 = dVar7 * dVar8;
    }
    (param_2->field0_0x0)._s_0.X = dVar8;
    bVar3 = true;
    (param_2->field0_0x0)._s_0.Y = dVar9;
    (param_2->field0_0x0)._s_0.Z = dVar10;
  }
  return bVar3;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1441cea80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 7) {
      iVar8 = 6;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 7) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetResultHandler_*>_> @ 1441ceb50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetResultHandler_*>_>
          (ushort param_1,ForElementType<UE::Net::FNetResultHandler_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FNetResultHandler_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 1441cec20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 1441cece0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (ushort param_1,ForElementType<UE::Net::FNetToken> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1441ceda0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_> @ 1441cee70

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::FEscalationCounter> *param_4,int *param_5,int *param_6)

{
  ForElementType<UE::Net::FEscalationCounter> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<UE::Net::FEscalationCounter> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 7) {
    _Src = param_4->SecondaryData;
    uVar8 = 6;
LAB_1441cef26:
    uVar6 = uVar8;
    if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) goto LAB_1441cef7a;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 4);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 7) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 7) goto LAB_1441cef26;
    iVar5 = iVar1;
    if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 4);
      goto LAB_1441cef7a;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_1441cef7a:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_> @ 1441cefb0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::FEscalationCounter> *param_4,int *param_5,int *param_6)

{
  ForElementType<UE::Net::FEscalationCounter> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ForElementType<UE::Net::FEscalationCounter> _Src;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 0x61) {
    _Src = param_4->SecondaryData;
    uVar8 = 0x60;
LAB_1441cf06b:
    uVar6 = uVar8;
    if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) goto LAB_1441cf0bf;
    memmove(param_4,(void *)_Src,(longlong)iVar1 << 4);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 0x61) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    _Src = *this;
    uVar8 = uVar6;
    if (uVar6 < 0x61) goto LAB_1441cf06b;
    iVar5 = iVar1;
    if (_Src == (ForElementType<UE::Net::FEscalationCounter>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 << 4);
      goto LAB_1441cf0bf;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_1441cf0bf:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_> @ 1441cf0f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Net::FEscalationCounter> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x80;
    uVar8 = (ulonglong)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x81) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FEscalationCounter>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_> @ 1441cf1d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FNetTracePacketContentEvent> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x100;
    uVar8 = (ulonglong)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x101) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNetTracePacketContentEvent>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_> @ 1441cf2b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Net::FNetToken> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_> @ 1441cf380

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned___int64> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    iVar7 = 0x80;
    uVar8 = (ulonglong)param_1;
    if (0x80 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x81) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0);
      iVar7 = (int)(uVar4 / uVar8);
      if (iVar7 < (int)uVar1) {
        iVar7 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1441cf460

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_> @ 1441cf520

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
          (uint param_1,uint param_2,ForElementType<UE::Net::FEscalationCounter> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x80;
  if (0x80 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Net::FEscalationCounter>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_> @ 1441cf5e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
          (uint param_1,uint param_2,ForElementType<FNetTracePacketContentEvent> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x100;
  if (0x100 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNetTracePacketContentEvent>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 1441cf6a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,ForElementType<FName> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 1441cf760

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_> @ 1441cf7e0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned___int64> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x81) {
      iVar1 = 0x80;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// WriteQuantizedVector<UE::Math::TVector<float>_> @ 1441d0540

bool __cdecl
UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>
          (int param_1,TVector<float> *param_2,FArchive *param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  uint local_78;
  uint local_74;
  undefined1 local_70 [8];
  TVector<float> local_68 [6];
  
  iVar8 = _finite((double)(param_2->field0_0x0)._s_0.X);
  if (((iVar8 != 0) && (iVar8 = _finite((double)(param_2->field0_0x0)._s_0.Y), iVar8 != 0)) &&
     (iVar8 = _finite((double)(param_2->field0_0x0)._s_0.Z), iVar8 != 0)) {
    if ((param_1 != (short)param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    fVar13 = (param_2->field0_0x0)._s_0.X;
    fVar2 = (param_2->field0_0x0)._s_0.Y;
    fVar3 = (param_2->field0_0x0)._s_0.Z;
    fVar14 = (float)(int)(short)param_1;
    fVar15 = fVar14 * fVar13;
    fVar16 = fVar14 * fVar2;
    fVar14 = fVar14 * fVar3;
    fVar12 = (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar12 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    if (fVar12 <= (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar12 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    if (__real_4e800000 <= fVar12) {
      local_70._4_4_ = 0.0;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,local_70 + 4,0x80);
      uVar10 = 0x60;
    }
    else {
      fVar12 = (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if ((float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar12 = (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      if ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar12) {
        fVar12 = (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      fVar11 = __real_3f000000;
      if (fVar12 < __real_4b000000) {
        fVar13 = __real_3f000000;
        if ((fVar15 <= 0.0) && (fVar13 = __real_bf000000, 0.0 <= fVar15)) {
          fVar13 = 0.0;
        }
        local_res20[0] = (uint)(fVar15 + fVar13);
        fVar13 = __real_3f000000;
        if ((fVar16 <= 0.0) && (fVar13 = __real_bf000000, 0.0 <= fVar16)) {
          fVar13 = 0.0;
        }
        local_78 = (uint)(fVar16 + fVar13);
        if ((fVar14 <= 0.0) && (fVar11 = __real_bf000000, 0.0 <= fVar14)) {
          fVar11 = 0.0;
        }
      }
      else {
        fVar14 = __real_3f000000;
        if ((fVar13 <= 0.0) && (fVar14 = __real_bf000000, 0.0 <= fVar13)) {
          fVar14 = 0.0;
        }
        local_res20[0] = (uint)(fVar13 + fVar14);
        fVar13 = __real_3f000000;
        if ((fVar2 <= 0.0) && (fVar13 = __real_bf000000, 0.0 <= fVar2)) {
          fVar13 = 0.0;
        }
        local_78 = (uint)(fVar2 + fVar13);
        fVar14 = fVar3;
        if ((fVar3 <= 0.0) && (fVar11 = __real_bf000000, 0.0 <= fVar3)) {
          fVar11 = 0.0;
        }
      }
      local_70._0_4_ = (undefined4)(fVar14 + fVar11);
      uVar1 = (ulonglong)(uint)((int)local_70._0_4_ >> 0x1f ^ local_70._0_4_) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 0x20 - (int)lVar4;
      uVar1 = (ulonglong)((int)local_78 >> 0x1f ^ local_78) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar9 = 0x20 - (int)lVar4;
      if (0x21U - iVar8 < 0x21U - iVar9) {
        iVar8 = iVar9;
      }
      uVar1 = (ulonglong)((int)local_res20[0] >> 0x1f ^ local_res20[0]) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar9 = 0x20 - (int)lVar4;
      if (0x21U - iVar8 < 0x21U - iVar9) {
        iVar8 = iVar9;
      }
      uVar10 = 0x21 - iVar8;
      local_74 = (uint)(fVar12 < __real_4b000000) << 6 | uVar10;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,&local_74,0x80);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,local_res20,uVar10);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,&local_78,uVar10);
      param_2 = (TVector<float> *)local_70;
    }
    (**(code **)(*(longlong *)param_3 + 400))(param_3,param_2,uVar10);
    return true;
  }
  if (GEnsureOnNANDiagnostic == 0) {
    if (`bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64,FArchive&___ptr64)'
        ::__l8::OnceOnly == false) {
      UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
      `bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64,FArchive&___ptr64)'
      ::__l8::OnceOnly = true;
    }
  }
  else {
    `UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>'::__l13::<lambda_1>::
    operator()(local_res10);
  }
  local_68[0].field0_0x0._0_8_ = 0;
  local_68[0].field0_0x0._s_0.Z = 0;
  WriteQuantizedVector<UE::Math::TVector<float>_>(param_1,(TVector<float> *)(local_70 + 8),param_3);
  return false;
}

// WriteQuantizedVector<UE::Math::TVector<double>_> @ 1441d0900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>
          (int param_1,TVector<double> *param_2,FArchive *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  undefined4 local_98 [2];
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80 [24];
  undefined8 local_68;
  
  iVar8 = _finite((param_2->field0_0x0)._s_0.X);
  if (((iVar8 != 0) && (iVar8 = _finite((param_2->field0_0x0)._s_0.Y), iVar8 != 0)) &&
     (iVar8 = _finite((param_2->field0_0x0)._s_0.Z), iVar8 != 0)) {
    if ((param_1 != (short)param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    dVar15 = (param_2->field0_0x0)._s_0.X;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    dVar16 = (double)(int)(short)param_1;
    dVar17 = dVar16 * dVar15;
    dVar18 = dVar16 * dVar1;
    dVar16 = dVar16 * dVar2;
    uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar12 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar14 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar14 <= (double)CONCAT44(uVar12,uVar11)) {
      dVar14 = (double)CONCAT44(uVar12,uVar11);
    }
    dVar13 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar14 <= dVar13) {
      dVar14 = dVar13;
    }
    if (___real_43d0000000000000 <= dVar14) {
      local_98[0] = 0x40;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,local_98,0x80);
      uVar11 = 0xc0;
    }
    else {
      dVar14 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      uVar11 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar12 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar12,uVar11) <= dVar14) {
        dVar14 = (double)CONCAT44(uVar12,uVar11);
      }
      dVar13 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar13 <= dVar14) {
        dVar14 = dVar13;
      }
      dVar13 = __real_3fe0000000000000;
      if (dVar14 < __real_4330000000000000) {
        dVar15 = __real_3fe0000000000000;
        if ((dVar17 <= 0.0) && (dVar15 = __real_bfe0000000000000, 0.0 <= dVar17)) {
          dVar15 = 0.0;
        }
        local_90 = (ulonglong)(dVar17 + dVar15);
        dVar15 = __real_3fe0000000000000;
        if ((dVar18 <= 0.0) && (dVar15 = __real_bfe0000000000000, 0.0 <= dVar18)) {
          dVar15 = 0.0;
        }
        local_88 = (ulonglong)(dVar18 + dVar15);
        if ((dVar16 <= 0.0) && (dVar13 = __real_bfe0000000000000, 0.0 <= dVar16)) {
          dVar13 = 0.0;
        }
      }
      else {
        dVar16 = __real_3fe0000000000000;
        if ((dVar15 <= 0.0) && (dVar16 = __real_bfe0000000000000, 0.0 <= dVar15)) {
          dVar16 = 0.0;
        }
        local_90 = (ulonglong)(dVar15 + dVar16);
        dVar15 = __real_3fe0000000000000;
        if ((dVar1 <= 0.0) && (dVar15 = __real_bfe0000000000000, 0.0 <= dVar1)) {
          dVar15 = 0.0;
        }
        local_88 = (ulonglong)(dVar1 + dVar15);
        dVar16 = dVar2;
        if ((dVar2 <= 0.0) && (dVar13 = __real_bfe0000000000000, 0.0 <= dVar2)) {
          dVar13 = 0.0;
        }
      }
      local_80._0_8_ = (undefined8)(dVar16 + dVar13);
      uVar9 = (longlong)local_80._0_8_ >> 0x3f ^ local_80._0_8_;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = (int)lVar3;
      if (uVar9 == 0) {
        iVar8 = -1;
      }
      uVar9 = (longlong)local_88 >> 0x3f ^ local_88;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = (int)lVar3;
      if (uVar9 == 0) {
        iVar10 = -1;
      }
      iVar5 = 0x3f - iVar8;
      if (0x41U - (0x3f - iVar8) < 0x41U - (0x3f - iVar10)) {
        iVar5 = 0x3f - iVar10;
      }
      uVar9 = (longlong)local_90 >> 0x3f ^ local_90;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = (int)lVar3;
      if (uVar9 == 0) {
        iVar8 = -1;
      }
      if (0x41U - iVar5 < 0x41U - (0x3f - iVar8)) {
        iVar5 = 0x3f - iVar8;
      }
      uVar11 = 0x41 - iVar5;
      local_res20[0] = (uint)(dVar14 < __real_4330000000000000) << 6 | uVar11;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,local_res20,0x80);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,&local_90,uVar11);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,&local_88,uVar11);
      param_2 = (TVector<double> *)local_80;
    }
    (**(code **)(*(longlong *)param_3 + 400))(param_3,param_2,uVar11);
    return true;
  }
  if (GEnsureOnNANDiagnostic == 0) {
    if (`bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64,FArchive&___ptr64)'
        ::__l8::OnceOnly == false) {
      UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
      `bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64,FArchive&___ptr64)'
      ::__l8::OnceOnly = true;
    }
  }
  else {
    `UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>'::__l13::<lambda_1>::
    operator()(local_res10);
  }
  local_68 = 0;
  local_80._8_8_ = 0.0;
  local_80._16_8_ = 0.0;
  WriteQuantizedVector<UE::Math::TVector<double>_>
            (param_1,(TVector<double> *)(local_80 + 8),param_3);
  return false;
}

// CreatePersistentNetDebugName @ 1441d8100

FNetDebugName * __cdecl UE::Net::CreatePersistentNetDebugName(wchar_t *param_1,uint param_2)

{
  FPersistentNetDebugNames *this;
  FNetDebugName *local_res18 [2];
  
  this = FPersistentNetDebugNames::Get();
  FPersistentNetDebugNames::CreatePersistentNetDebugName(this,param_1,param_2,local_res18);
  return local_res18[0];
}

// IsSpecialNetConditionGroup @ 1441e1040

bool __cdecl UE::Net::IsSpecialNetConditionGroup(FName param_1)

{
  if ((param_1 != NetGroupOwner) && (param_1 != NetGroupReplay)) {
    return false;
  }
  return true;
}

// LexToString @ 1441e17d0

wchar_t * __cdecl UE::Net::LexToString(EEscalateReason param_1)

{
  if (param_1 == QuotaLimit) {
    return L"QuotaLimit";
  }
  if (param_1 != AutoEscalate) {
    if (param_1 != Deescalate) {
      return L"Unknown";
    }
    return L"Deescalate";
  }
  return L"AutoEscalate";
}

// NetResultToString @ 1441e22c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::Private::NetResultToString
          (FString *param_1,wchar_t *param_2,FString *param_3,ENetResultString param_4)

{
  void *pvVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  ulong64 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  undefined1 auStack_1088 [48];
  TStringBuilderBase<wchar_t> local_1058;
  wchar_t local_1038 [2048];
  ulonglong local_38 [2];
  
  local_38[1] = 0x1441e22ea;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_1088;
  local_1058.bIsDynamic = false;
  local_1058.bIsExternal = false;
  local_1058.CurPos = local_1038;
  local_1058.Base = local_1038;
  local_1058.End = (wchar_t *)local_38;
  if (param_4 == WithChain) {
    if (1 < (param_1->Data).ArrayNum) {
      pvVar1 = FGenericPlatformString::Memcpy(local_1038,L", ",4);
      local_1058.CurPos = (wchar_t *)((longlong)pvVar1 + 4);
    }
    if (local_1058.End < local_1058.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_1058,1);
    }
    *local_1058.CurPos = L'(';
    local_1058.CurPos = local_1058.CurPos + 1;
  }
  if (local_1058.End < local_1058.CurPos + 7) {
    TStringBuilderBase<wchar_t>::Extend(&local_1058,7);
  }
  pvVar1 = FGenericPlatformString::Memcpy(local_1058.CurPos,L"Result=",0xe);
  pwVar3 = (wchar_t *)((longlong)pvVar1 + 0xe);
  iVar5 = 0;
  local_1058.CurPos = pwVar3;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    iVar5 = (int)sVar2;
  }
  uVar4 = (ulong64)iVar5;
  if (local_1058.End < pwVar3 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_1058,uVar4);
    pwVar3 = local_1058.CurPos;
  }
  if (iVar5 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy(pwVar3,param_2,uVar4 * 2);
    pwVar3 = (wchar_t *)((longlong)pvVar1 + uVar4 * 2);
    local_1058.CurPos = pwVar3;
  }
  if (local_1058.End < pwVar3 + 0x10) {
    TStringBuilderBase<wchar_t>::Extend(&local_1058,0x10);
    pwVar3 = local_1058.CurPos;
  }
  pvVar1 = FGenericPlatformString::Memcpy(pwVar3,L", ErrorContext=\"",0x20);
  pwVar3 = (wchar_t *)((longlong)pvVar1 + 0x20);
  local_1058.CurPos = pwVar3;
  if ((param_3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    iVar5 = 0;
    if ((FScriptContainerElement *)pwVar6 == (FScriptContainerElement *)0x0) goto LAB_1441e248b;
  }
  sVar2 = wcslen(pwVar6);
  iVar5 = (int)sVar2;
LAB_1441e248b:
  uVar4 = (ulong64)iVar5;
  if (local_1058.End < pwVar3 + uVar4) {
    TStringBuilderBase<wchar_t>::Extend(&local_1058,uVar4);
    pwVar3 = local_1058.CurPos;
  }
  if (iVar5 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy(pwVar3,pwVar6,uVar4 * 2);
    pwVar3 = (wchar_t *)((longlong)pvVar1 + uVar4 * 2);
    local_1058.CurPos = pwVar3;
  }
  if (local_1058.End < pwVar3 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_1058,1);
    pwVar3 = local_1058.CurPos;
  }
  *pwVar3 = L'\"';
  pwVar3 = local_1058.CurPos + 1;
  if (param_4 == WithChain) {
    pwVar6 = local_1058.CurPos + 2;
    local_1058.CurPos = pwVar3;
    if (local_1058.End < pwVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_1058,1);
    }
    *local_1058.CurPos = L')';
    pwVar3 = local_1058.CurPos + 1;
  }
  local_1058.CurPos = pwVar3;
  if (local_1058.End < pwVar3 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_1058,1);
  }
  *local_1058.CurPos = L'\0';
  sVar2 = wcslen(local_1058.Base);
  ::FString::AppendChars(param_1,local_1058.Base,(int)sVar2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1058);
  return;
}

// QuantizeVector @ 1441e4380

TVector<float> * __cdecl
UE::Net::QuantizeVector(TVector<float> *__return_storage_ptr__,int param_1,TVector<float> *param_2)

{
  Private::QuantizeVector<UE::Math::TVector<float>_>(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// QuantizeVector @ 1441e43a0

TVector<double> * __cdecl
UE::Net::QuantizeVector
          (TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  Private::QuantizeVector<UE::Math::TVector<double>_>(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ReadQuantizedVector @ 1441e43c0

bool __cdecl UE::Net::ReadQuantizedVector(int param_1,TVector<float> *param_2,FArchive *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uStackX_18;
  uint auStackX_20 [2];
  ulonglong uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined4 uStack_34;
  double dStack_30;
  
  auStackX_20[0] = 0;
  (**(code **)(*(longlong *)param_3 + 0x198))(param_3,auStackX_20,0x80);
  uVar2 = auStackX_20[0];
  pcVar1 = *(code **)(*(longlong *)param_3 + 400);
  uVar6 = auStackX_20[0] & 0x3f;
  if (uVar6 == 0) {
    if (auStackX_20[0] >> 6 == 0) {
      (*pcVar1)(param_3,&uStack_40,0x60);
      iVar4 = _finite((double)(float)uStack_40);
      if (iVar4 != 0) {
        iVar4 = _finite((double)uStack_40._4_4_);
        if ((iVar4 != 0) && (iVar4 = _finite((double)fStack_38), iVar4 != 0)) {
          *(double *)&param_2->field0_0x0 = uStack_40;
          (param_2->field0_0x0)._s_0.Z = fStack_38;
          return true;
        }
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
            ::__l34::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
          ::__l34::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>'::__l39::<lambda_2>::
        operator()(&uStackX_18);
      }
    }
    else {
      (*pcVar1)(param_3,&uStack_40,0xc0);
      iVar4 = _finite(uStack_40);
      if (((iVar4 != 0) && (iVar4 = _finite((double)CONCAT44(uStack_34,fStack_38)), iVar4 != 0)) &&
         (iVar4 = _finite(dStack_30), iVar4 != 0)) {
        (param_2->field0_0x0)._s_0.X = (float)uStack_40;
        (param_2->field0_0x0)._s_0.Y = (float)(double)CONCAT44(uStack_34,fStack_38);
        (param_2->field0_0x0)._s_0.Z = (float)dStack_30;
        return true;
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
            ::__l21::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'
          ::__l21::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>'::__l26::<lambda_1>::
        operator()(&uStackX_18);
      }
    }
    *(undefined8 *)&param_2->field0_0x0 = 0;
    bVar3 = false;
    (param_2->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    uStackX_18 = 0;
    uStack_48 = 0;
    uStack_40 = 0.0;
    (*pcVar1)(param_3,&uStackX_18,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&uStack_48,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&uStack_40,uVar6);
    uVar5 = 1L << ((char)uVar6 - 1U & 0x3f);
    fVar8 = (float)(longlong)((uVar5 ^ uStackX_18) - uVar5);
    fVar9 = (float)(longlong)((uVar5 ^ uStack_48) - uVar5);
    fVar10 = (float)(longlong)((uVar5 ^ (ulonglong)uStack_40) - uVar5);
    if (uVar2 >> 6 != 0) {
      fVar7 = __real_3f800000 / (float)param_1;
      fVar10 = fVar7 * fVar10;
      fVar9 = fVar7 * fVar9;
      fVar8 = fVar7 * fVar8;
    }
    (param_2->field0_0x0)._s_0.X = fVar8;
    bVar3 = true;
    (param_2->field0_0x0)._s_0.Y = fVar9;
    (param_2->field0_0x0)._s_0.Z = fVar10;
  }
  return bVar3;
}

// ReadQuantizedVector @ 1441e43d0

bool __cdecl UE::Net::ReadQuantizedVector(int param_1,TVector<double> *param_2,FArchive *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uStackX_18;
  uint auStackX_20 [2];
  ulonglong uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined4 uStack_34;
  double dStack_30;
  
  auStackX_20[0] = 0;
  (**(code **)(*(longlong *)param_3 + 0x198))(param_3,auStackX_20,0x80);
  uVar2 = auStackX_20[0];
  pcVar1 = *(code **)(*(longlong *)param_3 + 400);
  uVar6 = auStackX_20[0] & 0x3f;
  if (uVar6 == 0) {
    if (auStackX_20[0] >> 6 == 0) {
      (*pcVar1)(param_3,&uStack_40,0x60);
      iVar4 = _finite((double)(float)uStack_40);
      if (iVar4 != 0) {
        iVar4 = _finite((double)uStack_40._4_4_);
        if ((iVar4 != 0) && (iVar4 = _finite((double)fStack_38), iVar4 != 0)) {
          (param_2->field0_0x0)._s_0.X = (double)(float)uStack_40;
          (param_2->field0_0x0)._s_0.Y = (double)uStack_40._4_4_;
          (param_2->field0_0x0)._s_0.Z = (double)fStack_38;
          return true;
        }
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
            ::__l34::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
          ::__l34::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>'::__l39::<lambda_2>::
        operator()(&uStackX_18);
      }
    }
    else {
      (*pcVar1)(param_3,&uStack_40,0xc0);
      iVar4 = _finite(uStack_40);
      if (((iVar4 != 0) && (iVar4 = _finite((double)CONCAT44(uStack_34,fStack_38)), iVar4 != 0)) &&
         (iVar4 = _finite(dStack_30), iVar4 != 0)) {
        (param_2->field0_0x0)._s_0.X = uStack_40;
        (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uStack_34,fStack_38);
        (param_2->field0_0x0)._s_0.Z = dStack_30;
        return true;
      }
      if (GEnsureOnNANDiagnostic == 0) {
        if (`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
            ::__l21::OnceOnly == false) {
          UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
          `bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'
          ::__l21::OnceOnly = true;
        }
      }
      else {
        `UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>'::__l26::<lambda_1>::
        operator()(&uStackX_18);
      }
    }
    (param_2->field0_0x0)._s_0.X = 0.0;
    bVar3 = false;
    (param_2->field0_0x0)._s_0.Y = 0.0;
    (param_2->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    uStackX_18 = 0;
    uStack_48 = 0;
    uStack_40 = 0.0;
    (*pcVar1)(param_3,&uStackX_18,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&uStack_48,uVar6);
    (**(code **)(*(longlong *)param_3 + 400))(param_3,&uStack_40,uVar6);
    uVar5 = 1L << ((char)uVar6 - 1U & 0x3f);
    dVar8 = (double)(longlong)((uVar5 ^ uStackX_18) - uVar5);
    dVar9 = (double)(longlong)((uVar5 ^ uStack_48) - uVar5);
    dVar10 = (double)(longlong)((uVar5 ^ (ulonglong)uStack_40) - uVar5);
    if (uVar2 >> 6 != 0) {
      dVar7 = __real_3ff0000000000000 / (double)param_1;
      dVar10 = dVar7 * dVar10;
      dVar9 = dVar7 * dVar9;
      dVar8 = dVar7 * dVar8;
    }
    (param_2->field0_0x0)._s_0.X = dVar8;
    bVar3 = true;
    (param_2->field0_0x0)._s_0.Y = dVar9;
    (param_2->field0_0x0)._s_0.Z = dVar10;
  }
  return bVar3;
}

// ResetPersistentNetDebugNameIds @ 1441e9fb0

void __cdecl UE::Net::ResetPersistentNetDebugNameIds(void)

{
  FPersistentNetDebugNames::Get();
  FPersistentNetDebugNames::ResetNameIds();
  return;
}

// WriteQuantizedVector @ 1441f1bb0

bool __cdecl UE::Net::WriteQuantizedVector(int param_1,TVector<float> *param_2,FArchive *param_3)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackX_10 [16];
  uint auStackX_20 [2];
  uint uStack_78;
  uint uStack_74;
  undefined1 auStack_70 [8];
  TVector<float> aTStack_68 [6];
  
  iVar8 = _finite((double)(param_2->field0_0x0)._s_0.X);
  if (((iVar8 != 0) && (iVar8 = _finite((double)(param_2->field0_0x0)._s_0.Y), iVar8 != 0)) &&
     (iVar8 = _finite((double)(param_2->field0_0x0)._s_0.Z), iVar8 != 0)) {
    if ((param_1 != (short)param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    fVar13 = (param_2->field0_0x0)._s_0.X;
    fVar2 = (param_2->field0_0x0)._s_0.Y;
    fVar3 = (param_2->field0_0x0)._s_0.Z;
    fVar14 = (float)(int)(short)param_1;
    fVar15 = fVar14 * fVar13;
    fVar16 = fVar14 * fVar2;
    fVar14 = fVar14 * fVar3;
    fVar12 = (float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar12 = (float)((uint)fVar15 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    if (fVar12 <= (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar12 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    if (__real_4e800000 <= fVar12) {
      auStack_70._4_4_ = 0.0;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,auStack_70 + 4,0x80);
      uVar10 = 0x60;
    }
    else {
      fVar12 = (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if ((float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          (float)((uint)fVar13 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        fVar12 = (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      if ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar12) {
        fVar12 = (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      fVar11 = __real_3f000000;
      if (fVar12 < __real_4b000000) {
        fVar13 = __real_3f000000;
        if ((fVar15 <= 0.0) && (fVar13 = __real_bf000000, 0.0 <= fVar15)) {
          fVar13 = 0.0;
        }
        auStackX_20[0] = (uint)(fVar15 + fVar13);
        fVar13 = __real_3f000000;
        if ((fVar16 <= 0.0) && (fVar13 = __real_bf000000, 0.0 <= fVar16)) {
          fVar13 = 0.0;
        }
        uStack_78 = (uint)(fVar16 + fVar13);
        if ((fVar14 <= 0.0) && (fVar11 = __real_bf000000, 0.0 <= fVar14)) {
          fVar11 = 0.0;
        }
      }
      else {
        fVar14 = __real_3f000000;
        if ((fVar13 <= 0.0) && (fVar14 = __real_bf000000, 0.0 <= fVar13)) {
          fVar14 = 0.0;
        }
        auStackX_20[0] = (uint)(fVar13 + fVar14);
        fVar13 = __real_3f000000;
        if ((fVar2 <= 0.0) && (fVar13 = __real_bf000000, 0.0 <= fVar2)) {
          fVar13 = 0.0;
        }
        uStack_78 = (uint)(fVar2 + fVar13);
        fVar14 = fVar3;
        if ((fVar3 <= 0.0) && (fVar11 = __real_bf000000, 0.0 <= fVar3)) {
          fVar11 = 0.0;
        }
      }
      auStack_70._0_4_ = (undefined4)(fVar14 + fVar11);
      uVar1 = (ulonglong)(uint)((int)auStack_70._0_4_ >> 0x1f ^ auStack_70._0_4_) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 0x20 - (int)lVar4;
      uVar1 = (ulonglong)((int)uStack_78 >> 0x1f ^ uStack_78) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar9 = 0x20 - (int)lVar4;
      if (0x21U - iVar8 < 0x21U - iVar9) {
        iVar8 = iVar9;
      }
      uVar1 = (ulonglong)((int)auStackX_20[0] >> 0x1f ^ auStackX_20[0]) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar9 = 0x20 - (int)lVar4;
      if (0x21U - iVar8 < 0x21U - iVar9) {
        iVar8 = iVar9;
      }
      uVar10 = 0x21 - iVar8;
      uStack_74 = (uint)(fVar12 < __real_4b000000) << 6 | uVar10;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,&uStack_74,0x80);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,auStackX_20,uVar10);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,&uStack_78,uVar10);
      param_2 = (TVector<float> *)auStack_70;
    }
    (**(code **)(*(longlong *)param_3 + 400))(param_3,param_2,uVar10);
    return true;
  }
  if (GEnsureOnNANDiagnostic == 0) {
    if (`bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64,FArchive&___ptr64)'
        ::__l8::OnceOnly == false) {
      UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
      `bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64,FArchive&___ptr64)'
      ::__l8::OnceOnly = true;
    }
  }
  else {
    `UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>'::__l13::<lambda_1>::
    operator()(auStackX_10);
  }
  aTStack_68[0].field0_0x0._0_8_ = 0;
  aTStack_68[0].field0_0x0._s_0.Z = 0;
  Private::WriteQuantizedVector<UE::Math::TVector<float>_>
            (param_1,(TVector<float> *)(auStack_70 + 8),param_3);
  return false;
}

// WriteQuantizedVector @ 1441f1bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl UE::Net::WriteQuantizedVector(int param_1,TVector<double> *param_2,FArchive *param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStackX_10 [16];
  uint auStackX_20 [2];
  undefined4 auStack_98 [2];
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  iVar8 = _finite((param_2->field0_0x0)._s_0.X);
  if (((iVar8 != 0) && (iVar8 = _finite((param_2->field0_0x0)._s_0.Y), iVar8 != 0)) &&
     (iVar8 = _finite((param_2->field0_0x0)._s_0.Z), iVar8 != 0)) {
    if ((param_1 != (short)param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    dVar15 = (param_2->field0_0x0)._s_0.X;
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    dVar16 = (double)(int)(short)param_1;
    dVar17 = dVar16 * dVar15;
    dVar18 = dVar16 * dVar1;
    dVar16 = dVar16 * dVar2;
    uVar11 = SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar12 = (uint)((ulonglong)dVar17 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar14 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar14 <= (double)CONCAT44(uVar12,uVar11)) {
      dVar14 = (double)CONCAT44(uVar12,uVar11);
    }
    dVar13 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar14 <= dVar13) {
      dVar14 = dVar13;
    }
    if (___real_43d0000000000000 <= dVar14) {
      auStack_98[0] = 0x40;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,auStack_98,0x80);
      uVar11 = 0xc0;
    }
    else {
      dVar14 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      uVar11 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar12 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((double)CONCAT44(uVar12,uVar11) <= dVar14) {
        dVar14 = (double)CONCAT44(uVar12,uVar11);
      }
      dVar13 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      if (dVar13 <= dVar14) {
        dVar14 = dVar13;
      }
      dVar13 = __real_3fe0000000000000;
      if (dVar14 < __real_4330000000000000) {
        dVar15 = __real_3fe0000000000000;
        if ((dVar17 <= 0.0) && (dVar15 = __real_bfe0000000000000, 0.0 <= dVar17)) {
          dVar15 = 0.0;
        }
        uStack_90 = (ulonglong)(dVar17 + dVar15);
        dVar15 = __real_3fe0000000000000;
        if ((dVar18 <= 0.0) && (dVar15 = __real_bfe0000000000000, 0.0 <= dVar18)) {
          dVar15 = 0.0;
        }
        uStack_88 = (ulonglong)(dVar18 + dVar15);
        if ((dVar16 <= 0.0) && (dVar13 = __real_bfe0000000000000, 0.0 <= dVar16)) {
          dVar13 = 0.0;
        }
      }
      else {
        dVar16 = __real_3fe0000000000000;
        if ((dVar15 <= 0.0) && (dVar16 = __real_bfe0000000000000, 0.0 <= dVar15)) {
          dVar16 = 0.0;
        }
        uStack_90 = (ulonglong)(dVar15 + dVar16);
        dVar15 = __real_3fe0000000000000;
        if ((dVar1 <= 0.0) && (dVar15 = __real_bfe0000000000000, 0.0 <= dVar1)) {
          dVar15 = 0.0;
        }
        uStack_88 = (ulonglong)(dVar1 + dVar15);
        dVar16 = dVar2;
        if ((dVar2 <= 0.0) && (dVar13 = __real_bfe0000000000000, 0.0 <= dVar2)) {
          dVar13 = 0.0;
        }
      }
      auStack_80._0_8_ = (undefined8)(dVar16 + dVar13);
      uVar9 = (longlong)auStack_80._0_8_ >> 0x3f ^ auStack_80._0_8_;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = (int)lVar3;
      if (uVar9 == 0) {
        iVar8 = -1;
      }
      uVar9 = (longlong)uStack_88 >> 0x3f ^ uStack_88;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = (int)lVar3;
      if (uVar9 == 0) {
        iVar10 = -1;
      }
      iVar5 = 0x3f - iVar8;
      if (0x41U - (0x3f - iVar8) < 0x41U - (0x3f - iVar10)) {
        iVar5 = 0x3f - iVar10;
      }
      uVar9 = (longlong)uStack_90 >> 0x3f ^ uStack_90;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar8 = (int)lVar3;
      if (uVar9 == 0) {
        iVar8 = -1;
      }
      if (0x41U - iVar5 < 0x41U - (0x3f - iVar8)) {
        iVar5 = 0x3f - iVar8;
      }
      uVar11 = 0x41 - iVar5;
      auStackX_20[0] = (uint)(dVar14 < __real_4330000000000000) << 6 | uVar11;
      (**(code **)(*(longlong *)param_3 + 0x198))(param_3,auStackX_20,0x80);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,&uStack_90,uVar11);
      (**(code **)(*(longlong *)param_3 + 400))(param_3,&uStack_88,uVar11);
      param_2 = (TVector<double> *)auStack_80;
    }
    (**(code **)(*(longlong *)param_3 + 400))(param_3,param_2,uVar11);
    return true;
  }
  if (GEnsureOnNANDiagnostic == 0) {
    if (`bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64,FArchive&___ptr64)'
        ::__l8::OnceOnly == false) {
      UEAsserts_Private::InternalLogNANDiagnosticMessage(L"%s");
      `bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64,FArchive&___ptr64)'
      ::__l8::OnceOnly = true;
    }
  }
  else {
    `UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>'::__l13::<lambda_1>::
    operator()(auStackX_10);
  }
  uStack_68 = 0;
  auStack_80._8_8_ = 0.0;
  auStack_80._16_8_ = 0.0;
  Private::WriteQuantizedVector<UE::Math::TVector<double>_>
            (param_1,(TVector<double> *)(auStack_80 + 8),param_3);
  return false;
}

// operator() @ 1504b1bd0

bool __thiscall
`UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>'::__l26::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908581>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908581>,
                       &`public:___cdecl_`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'::`26'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1c20

bool __thiscall
`UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>'::__l26::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908581>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908581>,
                       &`public:___cdecl_`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'::`26'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1c70

bool __thiscall
`UE::Net::Private::QuantizeVector<UE::Math::TVector<float>_>'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908627>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908627>,
                       &`public:___cdecl_`struct_UE::Math::TVector<float>___cdecl_UE::Net::Private::QuantizeVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64)'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1cc0

bool __thiscall
`UE::Net::Private::QuantizeVector<UE::Math::TVector<double>_>'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908627>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908627>,
                       &`public:___cdecl_`struct_UE::Math::TVector<double>___cdecl_UE::Net::Private::QuantizeVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64)'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1d10

bool __thiscall
`UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908474>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908474>,
                       &`public:___cdecl_`bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>_const&___ptr64,FArchive&___ptr64)'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1d60

bool __thiscall
`UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908474>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908474>,
                       &`public:___cdecl_`bool___cdecl_UE::Net::Private::WriteQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>_const&___ptr64,FArchive&___ptr64)'::`13'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1df0

bool __thiscall
`UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>'::__l39::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908595>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908595>,
                       &`public:___cdecl_`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<float>_>(int,UE::Math::TVector<float>&___ptr64,FArchive&___ptr64)'::`39'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b1e40

bool __thiscall
`UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>'::__l39::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6589999052190908595>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6589999052190908595>,
                       &`public:___cdecl_`bool___cdecl_UE::Net::Private::ReadQuantizedVector<UE::Math::TVector<double>_>(int,UE::Math::TVector<double>&___ptr64,FArchive&___ptr64)'::`39'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

