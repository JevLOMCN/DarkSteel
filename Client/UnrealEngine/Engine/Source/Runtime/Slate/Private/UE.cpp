// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 171

// Construct<FAnchors> @ 14269aec0

void __cdecl UE::CoreUObject::Private::Construct<FAnchors>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FAnchors> @ 14269aee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnchors>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FAnchors> @ 14269af00

void __cdecl UE::CoreUObject::Private::Destruct<FAnchors>(void *param_1)

{
  return;
}

// Copy<FAnchors> @ 14269af10

bool __cdecl UE::CoreUObject::Private::Copy<FAnchors>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizedToolMenu> @ 14269af50

void __cdecl UE::CoreUObject::Private::Construct<FCustomizedToolMenu>(void *param_1)

{
  memset(param_1,0,0x208);
  FCustomizedToolMenu::FCustomizedToolMenu(param_1);
  return;
}

// ConstructForTests<FCustomizedToolMenu> @ 14269af80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenu>(void *param_1)

{
  FToolMenuProfile::FToolMenuProfile(param_1);
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  return;
}

// Destruct<FCustomizedToolMenu> @ 14269af90

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizedToolMenu>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1f8));
  }
  *(undefined4 *)((longlong)param_1 + 0x1f0) = 0;
  if (*(void **)((longlong)param_1 + 0x1e8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1e8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1a8));
  FToolMenuProfile::~FToolMenuProfile(param_1);
  return;
}

// Copy<FCustomizedToolMenu> @ 14269b070

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizedToolMenu>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FToolMenuProfile::operator=(param_1,param_2);
    if ((FToolMenuProfile *)((longlong)param_1 + 0x1a8) !=
        (FToolMenuProfile *)((longlong)param_2 + 0x1a8)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(((FToolMenuProfile *)((longlong)param_1 + 0x1a8))->Entries).field_0x30,
                 (int *)&(((FToolMenuProfile *)((longlong)param_1 + 0x1a8))->Entries).field_0x40,
                 (ForElementType<FSetElementId> *)
                 &(((FToolMenuProfile *)((longlong)param_2 + 0x1a8))->Entries).field_0x30,
                 *(int *)&(((FToolMenuProfile *)((longlong)param_2 + 0x1a8))->Entries).field_0x40);
      TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x1a8),
                  (TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x1a8));
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)
               &(((FToolMenuProfile *)((longlong)param_1 + 0x1a8))->Entries).field_0x48,
               (TArray<FName,TSizedDefaultAllocator<32>_> *)
               &(((FToolMenuProfile *)((longlong)param_2 + 0x1a8))->Entries).field_0x48);
    param_2 = &(((FToolMenuProfile *)((longlong)param_2 + 0x1a8))->Sections).field_0x8;
    param_1 = &(((FToolMenuProfile *)((longlong)param_1 + 0x1a8))->Sections).field_0x8;
  }
  return true;
}

// Construct<FToolMenuProfile> @ 14269b1b0

void __cdecl UE::CoreUObject::Private::Construct<FToolMenuProfile>(void *param_1)

{
  memset(param_1,0,0x1a8);
  FToolMenuProfile::FToolMenuProfile(param_1);
  return;
}

// ConstructForTests<FToolMenuProfile> @ 14269b1e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FToolMenuProfile>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined ***)((longlong)param_1 + 0xb8) = &___7FNamePermissionList__6B_;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 2;
  *(undefined1 *)((longlong)param_1 + 0x1a0) = 0;
  return;
}

// Destruct<FToolMenuProfile> @ 14269b1f0

void __cdecl UE::CoreUObject::Private::Destruct<FToolMenuProfile>(void *param_1)

{
  FNamePermissionList::~FNamePermissionList((FNamePermissionList *)((longlong)param_1 + 0xb8));
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x58));
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FToolMenuProfile> @ 14269b200

bool __cdecl
UE::CoreUObject::Private::Copy<FToolMenuProfile>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      this = (TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(puVar3 + 1);
      *puVar3 = *puVar1;
      if (this != (TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(puVar1 + 1)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 8),(int *)(puVar3 + 10),
                   (ForElementType<FSetElementId> *)(puVar1 + 8),*(int *)(puVar1 + 10));
        iVar2 = *(int *)(puVar1 + 2);
        TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar2,(ForAnyElementType *)this,(int *)(puVar3 + 2),
                   (int *)((longlong)puVar3 + 0x14));
        *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(puVar1 + 7);
        *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)((longlong)puVar1 + 0x3c);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 3) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 3)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 3),
                     (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 3));
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this,*(void **)(puVar1 + 1),(longlong)iVar2 * 0x14);
        }
      }
      this_00 = (TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(puVar3 + 0xb);
      if (this_00 !=
          (TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(puVar1 + 0xb)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 0x12),(int *)(puVar3 + 0x14),
                   (ForElementType<FSetElementId> *)(puVar1 + 0x12),*(int *)(puVar1 + 0x14));
        iVar2 = *(int *)(puVar1 + 0xc);
        TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this_00,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar2,(ForAnyElementType *)this_00,(int *)(puVar3 + 0xc),
                   (int *)((longlong)puVar3 + 100));
        *(undefined4 *)(puVar3 + 0x11) = *(undefined4 *)(puVar1 + 0x11);
        *(undefined4 *)((longlong)puVar3 + 0x8c) = *(undefined4 *)((longlong)puVar1 + 0x8c);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 0xd) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 0xd)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(puVar3 + 0xd),
                     (TBitArray<FDefaultBitArrayAllocator> *)(puVar1 + 0xd));
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this_00,*(void **)(puVar1 + 0xb),(longlong)iVar2 * 0x14);
        }
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar3 + 0x15),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar1 + 0x15));
      if (puVar3 != puVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 0x21),(int *)(puVar3 + 0x23),
                   (ForElementType<FSetElementId> *)(puVar1 + 0x21),*(int *)(puVar1 + 0x23));
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar3 + 0x1a),
                    (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar1 + 0x1a));
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 0x2b),(int *)(puVar3 + 0x2d),
                   (ForElementType<FSetElementId> *)(puVar1 + 0x2b),*(int *)(puVar1 + 0x2d));
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar3 + 0x24),
                    (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar1 + 0x24));
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar3 + 0x2e),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar1 + 0x2e));
      if (puVar1 != puVar3) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar3 + 0x30),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar1 + 0x30));
      }
      *(undefined1 *)(puVar3 + 0x34) = *(undefined1 *)(puVar1 + 0x34);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x35;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizedToolMenuNameArray> @ 14269b4a0

void __cdecl UE::CoreUObject::Private::Construct<FCustomizedToolMenuNameArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCustomizedToolMenuNameArray> @ 14269b4b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenuNameArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCustomizedToolMenuNameArray> @ 14269b4c0

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizedToolMenuNameArray>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FCustomizedToolMenuNameArray> @ 14269b4e0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizedToolMenuNameArray>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizedToolMenuSection> @ 14269b530

void __cdecl UE::CoreUObject::Private::Construct<FCustomizedToolMenuSection>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FCustomizedToolMenuSection> @ 14269b540

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenuSection>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FCustomizedToolMenuSection> @ 14269b550

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizedToolMenuSection>(void *param_1)

{
  return;
}

// Copy<FCustomizedToolMenuSection> @ 14269b560

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizedToolMenuSection>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomizedToolMenuEntry> @ 14269b590

void __cdecl UE::CoreUObject::Private::Construct<FCustomizedToolMenuEntry>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FCustomizedToolMenuEntry> @ 14269b5a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomizedToolMenuEntry>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FCustomizedToolMenuEntry> @ 14269b5b0

void __cdecl UE::CoreUObject::Private::Destruct<FCustomizedToolMenuEntry>(void *param_1)

{
  return;
}

// Copy<FCustomizedToolMenuEntry> @ 14269b5c0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomizedToolMenuEntry>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVirtualKeyboardOptions> @ 14269b7c0

void __cdecl UE::CoreUObject::Private::Construct<FVirtualKeyboardOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FVirtualKeyboardOptions> @ 14269b7d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVirtualKeyboardOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FVirtualKeyboardOptions> @ 14269b7e0

void __cdecl UE::CoreUObject::Private::Destruct<FVirtualKeyboardOptions>(void *param_1)

{
  return;
}

// Copy<FVirtualKeyboardOptions> @ 14269b7f0

bool __cdecl
UE::CoreUObject::Private::Copy<FVirtualKeyboardOptions>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInputPreprocessorRegistrationKey> @ 14269bed0

void __cdecl UE::CoreUObject::Private::Construct<FInputPreprocessorRegistrationKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)param_1 = 6;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  return;
}

// ConstructForTests<FInputPreprocessorRegistrationKey> @ 14269bef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInputPreprocessorRegistrationKey>(void *param_1)

{
  *(undefined1 *)param_1 = 6;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  return;
}

// Destruct<FInputPreprocessorRegistrationKey> @ 14269bf10

void __cdecl UE::CoreUObject::Private::Destruct<FInputPreprocessorRegistrationKey>(void *param_1)

{
  return;
}

// Copy<FInputPreprocessorRegistrationKey> @ 14269bf20

bool __cdecl
UE::CoreUObject::Private::Copy<FInputPreprocessorRegistrationKey>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FAnimatedAttributeManager,FAnimatedAttributeManager_*_&> @ 14269dae0

FAnimatedAttributeManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FAnimatedAttributeManager,FAnimatedAttributeManager_*_&>
          (FAnimatedAttributeManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FMenuStack,FMenuStack_*_&> @ 14269db00

/* WARNING: Enum "Type": Some values do not have unique names */

FMenuStack * __cdecl
UE::Core::Private::DereferenceIfNecessary<FMenuStack,FMenuStack_*_&>(FMenuStack **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSlateApplication,FSlateApplication_*_&> @ 14269db20

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateApplication * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateApplication,FSlateApplication_*_&>
          (FSlateApplication **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMenuPanel,SMenuPanel_*_&> @ 14269db40

SMenuPanel * __cdecl
UE::Core::Private::DereferenceIfNecessary<SMenuPanel,SMenuPanel_*_&>(SMenuPanel **param_1)

{
  return *param_1;
}

// ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSharedRef<SWindow,1>_>_> @ 1426a0320

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::
ReallocForCopy<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TSharedRef<SWindow,1>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TSharedRef<SWindow,1>_> *param_5,int param_6,int *param_7)

{
  TSharedRef<SWindow,1> *_Src;
  TSharedRef<SWindow,1> *_Dst;
  ulonglong uVar1;
  ulonglong _Size;
  
  if (param_3 <= param_4) {
    *param_7 = param_4;
    return;
  }
  if ((-1 < param_3) && (param_1 - 1 < 0x7fffffff)) {
    _Dst = (TSharedRef<SWindow,1> *)0x0;
    uVar1 = (ulonglong)param_1 * (longlong)param_3;
    _Src = param_5->Data;
    if (uVar1 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar1,8);
      if ((_Src != (TSharedRef<SWindow,1> *)0x0) &&
         (_Size = (ulonglong)
                  *(uint *)((longlong)&_Src[-1].SharedReferenceCount.ReferenceController + 4),
         _Size != 0)) {
        if (uVar1 < _Size) {
          _Size = uVar1;
        }
        memcpy(_Dst,_Src,_Size);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    param_5->Data = _Dst;
    *param_7 = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidConcurrentLinearArrayAllocatorNum(param_3,(ulonglong)param_1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWindow,1>_>_> @ 1426a03f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWindow,1>_>_>
          (ushort param_1,ForElementType<TSharedRef<SWindow,1>_> *param_2,int *param_3)

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
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWindow,1>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 1426a04c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 8) {
      iVar8 = 7;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 8) {
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
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocTo<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_> @ 1426a05a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 8) {
      iVar1 = 7;
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
    TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// VerifyParentChildrenRelationship @ 1426e50c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Slate::Private::VerifyParentChildrenRelationship(TSharedRef<SWindow,1> *param_1)

{
  uint *puVar1;
  SWindow *pSVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  FChildren *this;
  ForAnyElementType FVar9;
  SWidget *pSVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  SWidget *pSVar14;
  ForElementType<unsigned_int> FVar15;
  ulonglong uVar16;
  undefined1 auStackY_f8 [32];
  bool local_c8 [8];
  uint local_c0;
  uint uStack_bc;
  TMap<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
  *pTStack_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [12];
  uint uStack_94;
  TMap<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
  *pTStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ForElementType<unsigned_int> local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pSVar2 = param_1->Object;
  if (pSVar2 == (SWindow *)SNullWidget::NullWidget.Object) {
    return;
  }
  pSVar10 = (SWidget *)0x0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_4c = 0x80;
  local_48 = -1;
  iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,1,(ForAnyElementType *)local_78,(int *)(local_78 + 8),
                     (int *)(local_78 + 0xc));
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                    ((TBitArray<FDefaultBitArrayAllocator> *)local_68,1);
  FVar15 = (ForElementType<unsigned_int>)local_68;
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_58;
  }
  uVar11 = iVar7 >> 0x1f & 0x1f;
  iVar7 = iVar7 + uVar11;
  puVar1 = (uint *)((longlong)FVar15 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar7 & 0x1f) - (char)uVar11 & 0x1f));
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_78,(FSparseArrayAllocationInfo *)local_a0,iVar6);
  pSVar14 = pSVar10;
  if (stack0xffffffffffffff68 != (SWindow *)0x0) {
    ((SWidget *)stack0xffffffffffffff68)->_padding_ = (longlong)pSVar2;
    ((SWidget *)stack0xffffffffffffff68)->_padding_ = 0;
    *(undefined4 *)&((SWidget *)stack0xffffffffffffff68)->_padding_ = 0xffffffff;
    pSVar14 = (SWidget *)stack0xffffffffffffff68;
  }
  uVar11 = ((uint)((ulonglong)pSVar14->_padding_ >> 0x14) & 0xffff ^
           (uint)((ulonglong)pSVar14->_padding_ >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  bVar5 = TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
          ::TryReplaceExisting
                    ((TSet<TTuple<SWidget_const_*,SWidget_const_*>,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>,FDefaultSetAllocator>
                      *)local_78,uVar11,
                     (TSparseSetElement<TTuple<SWidget_const_*,SWidget_const_*>_> *)pSVar14,
                     (int *)local_a0,(bool *)0x0);
  if (bVar5) goto LAB_1426e5478;
  uVar13 = 1;
  uVar12 = local_78._8_4_ - local_44;
  if (3 < uVar12) {
    uVar16 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar13 <= (int)local_30)) {
    uVar11 = local_30 - 1 & uVar11;
    *(uint *)((longlong)&pSVar14->_padding_ + 4) = uVar11;
    FVar9.Data = (FScriptContainerElement *)local_40;
    if ((ForElementType<FSetElementId>)local_38.Data != (ForElementType<FSetElementId>)0x0) {
      FVar9.Data = local_38.Data;
    }
    uVar16 = (longlong)(int)local_30 - 1U & (longlong)(int)uVar11;
    *(undefined4 *)&pSVar14->_padding_ = *(undefined4 *)((longlong)FVar9.Data + uVar16 * 4);
    *(undefined4 *)((longlong)FVar9.Data + uVar16 * 4) = local_a0._0_4_;
    goto LAB_1426e5478;
  }
  local_30 = uVar13;
  if ((ForElementType<FSetElementId>)local_38.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,4);
  }
  if (uVar13 != 0) {
    uVar11 = uVar13;
    if (uVar13 < 2) {
      if ((ForElementType<FSetElementId>)local_38.Data != (ForElementType<FSetElementId>)0x0) {
        uVar11 = 0;
        goto LAB_1426e5287;
      }
    }
    else {
LAB_1426e5287:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar11,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      pSVar14 = pSVar10;
      do {
        FVar9.Data = (FScriptContainerElement *)local_40;
        if ((ForElementType<FSetElementId>)local_38.Data != (ForElementType<FSetElementId>)0x0) {
          FVar9.Data = local_38.Data;
        }
        uVar8 = (ulonglong)pSVar14 & (longlong)(int)uVar13 - 1U;
        pSVar14 = (SWidget *)((longlong)&pSVar14->_padding_ + 1);
        *(undefined4 *)((longlong)FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_30 != 0) {
    pTStack_b8 = (TMap<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
                  *)local_68;
    local_c0 = 0;
    uStack_bc = 1;
    uStack_ac = 0;
    uStack_a8 = 0;
    if (local_50 != 0) {
      FVar15 = (ForElementType<unsigned_int>)local_68;
      if (local_58 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_58;
      }
      uVar11 = *(uint *)FVar15;
      pSVar14 = pSVar10;
      while (uVar11 == 0) {
        uStack_a8 = (int)pSVar14 + 0x20;
        pSVar14 = (SWidget *)(ulonglong)uStack_a8;
        iVar6 = (int)pSVar10;
        local_c0 = iVar6 + 1;
        pSVar10 = (SWidget *)(ulonglong)local_c0;
        if ((int)((local_50 - 1) + ((int)(local_50 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_c0)
        goto LAB_1426e5389;
        uVar11 = ((uint *)((longlong)FVar15 + 4))[iVar6];
      }
      uStack_bc = -uVar11 & uVar11;
      uVar16 = (ulonglong)uStack_bc * 2 + 1;
      lVar3 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_ac = (int)lVar3 + -1 + uStack_a8;
      pSVar10 = (SWidget *)(ulonglong)uStack_ac;
      if ((int)local_50 < (int)uStack_ac) {
LAB_1426e5389:
        pSVar10 = (SWidget *)(ulonglong)local_50;
        uStack_ac = local_50;
      }
    }
    local_b0 = 0xffffffff;
    local_a0._0_8_ = local_78;
    unique0x10000312 = (SWindow *)CONCAT44(uStack_bc,local_c0);
    local_88 = CONCAT44(uStack_ac,0xffffffff);
    uStack_80 = CONCAT44(uStack_a4,uStack_a8);
    pTStack_90 = pTStack_b8;
    if ((int)pSVar10 < (int)local_50) {
      do {
        iVar6 = (int)pSVar10;
        lVar3 = *(longlong *)local_a0._0_8_ + (longlong)iVar6 * 0x18;
        uVar16 = *(ulonglong *)(*(longlong *)local_a0._0_8_ + (longlong)iVar6 * 0x18);
        uVar11 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_30 - 1;
        *(uint *)(lVar3 + 0x14) = uVar11;
        FVar9.Data = (FScriptContainerElement *)local_40;
        if ((ForElementType<FSetElementId>)local_38.Data != (ForElementType<FSetElementId>)0x0) {
          FVar9.Data = local_38.Data;
        }
        uVar16 = (longlong)(int)local_30 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)((longlong)FVar9.Data + uVar16 * 4);
        *(int *)((longlong)FVar9.Data + uVar16 * 4) = iVar6;
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~uStack_94);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a0 + 8));
        pSVar10 = (SWidget *)(ulonglong)local_88._4_4_;
      } while ((int)local_88._4_4_ < *(int *)&pTStack_90->field_0x18);
    }
  }
LAB_1426e5478:
  pSVar2 = param_1->Object;
  local_c8[0] = true;
  this = (FChildren *)(**(code **)(pSVar2->_padding_ + 0x188))(pSVar2);
  local_a0._0_8_ = local_c8;
  pTStack_90 = (TMap<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
                *)local_78;
  unique0x100005bd = pSVar2;
  FChildren::
  ForEachWidget<_UE::Slate::Private::VerifyParentChildrenRelationship_Recursive_::__l2::<lambda_1>_>
            (this,(<lambda_1> *)local_a0);
  uVar4 = CVarSlateVerifyParentChildrenRelationship._8_8_;
  if (local_c8[0] == false) {
    local_a0._0_8_ = (bool *)0x0;
    local_c0 = (**(code **)(*(longlong *)CVarSlateVerifyParentChildrenRelationship._8_8_ + 0x18))
                         (CVarSlateVerifyParentChildrenRelationship._8_8_);
    lVar3 = *(longlong *)uVar4;
    uStack_bc = uStack_bc & 0xffffff00;
    pTStack_b8 = (TMap<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
                  *)0x0;
    local_b0 = local_b0 & 0xffffff00;
    uStack_ac = 0xf000000;
    uStack_a8 = 0x1000000;
    (**(code **)(lVar3 + 0xa8))(uVar4,local_a0,&local_c0);
    (**(code **)(lVar3 + 0xb0))(uVar4);
    `UE::Slate::Private::VerifyParentChildrenRelationship'::__l8::<lambda_1>::operator()(local_c8);
  }
  local_30 = 0;
  if ((ForElementType<FSetElementId>)local_38.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_38.Data);
  }
  iVar6 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_44 = 0;
  local_50 = 0;
  local_48 = -1;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)local_68,0);
  }
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// VerifyParentChildrenRelationship_Recursive @ 1426e55e0

bool __cdecl
UE::Slate::Private::VerifyParentChildrenRelationship_Recursive
          (SWidget *param_1,
          TMap<SWidget_const_*,SWidget_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,SWidget_const_*,0>_>
          *param_2)

{
  FChildren *this;
  bool local_res8 [8];
  <lambda_1> local_28;
  
  local_res8[0] = true;
  this = (FChildren *)(**(code **)(param_1->_padding_ + 0x188))();
  local_28.bResult = local_res8;
  local_28.Parent = param_1;
  local_28.AllWidgets = param_2;
  FChildren::
  ForEachWidget<_UE::Slate::Private::VerifyParentChildrenRelationship_Recursive_::__l2::<lambda_1>_>
            (this,&local_28);
  return local_res8[0];
}

// VerifyWidgetLayerId @ 1426e5640

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Slate::Private::VerifyWidgetLayerId(TSharedRef<SWindow,1> *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined1 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_1->Object != (SWindow *)SNullWidget::NullWidget.Object) {
    bVar3 = VerifyWidgetLayerId_Recursive((SWidget *)param_1->Object,false);
    uVar2 = CVarSlateVerifyWidgetLayerId._8_8_;
    if (!bVar3) {
      local_res8 = 0;
      local_2c = (**(code **)(*(longlong *)CVarSlateVerifyWidgetLayerId._8_8_ + 0x18))
                           (CVarSlateVerifyWidgetLayerId._8_8_);
      lVar1 = *(longlong *)uVar2;
      local_24 = local_res8;
      local_28 = 0;
      local_1c = 0;
      local_18 = 0xf000000;
      local_14 = 0x1000000;
      uVar4 = (**(code **)(lVar1 + 0xa8))(uVar2,local_38,&local_2c);
      (**(code **)(lVar1 + 0xb0))(uVar2,&u_0,uVar4);
      `UE::Slate::Private::VerifyWidgetLayerId'::__l8::<lambda_1>::operator()(&local_res8);
    }
  }
  return;
}

// VerifyWidgetLayerId_Recursive @ 1426e5700

bool __cdecl UE::Slate::Private::VerifyWidgetLayerId_Recursive(SWidget *param_1,bool param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  FChildren *this;
  bool local_res10 [8];
  <lambda_1> local_38;
  
  local_res10[0] = true;
  if (!param_2) {
    lVar5 = (**(code **)(param_1->_padding_ + 0x218))();
    if (lVar5 != 0) {
      param_2 = *(int *)(lVar5 + 0x80) == 2;
    }
  }
  uVar2 = param_1->LastPaintFrame;
  iVar3 = (param_1->PersistentState).LayerId;
  iVar4 = (param_1->PersistentState).OutgoingLayerId;
  this = (FChildren *)(**(code **)(param_1->_padding_ + 0x188))(param_1);
  local_38.bResult = local_res10;
  local_38.bInsideInvalidationRoot = param_2;
  local_38.LastPaintFrame = uVar2;
  local_38.bIsDeferredPaint = (param_1->PersistentState).bDeferredPainting;
  local_38.InLayerId = iVar3;
  local_38.OutLayerId = iVar4;
  FChildren::ForEachWidget<_UE::Slate::Private::VerifyWidgetLayerId_Recursive_::__l2::<lambda_1>_>
            (this,&local_38);
  return local_res10[0];
}

// Construct<FInputChord> @ 1426e6160

void __cdecl UE::CoreUObject::Private::Construct<FInputChord>(void *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  *(FName *)param_1 = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 8) = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffff0;
  return;
}

// ConstructForTests<FInputChord> @ 1426e61a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInputChord>(void *param_1)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  *(FName *)param_1 = EKeys::Invalid.KeyName;
  *(FKeyDetails **)((longlong)param_1 + 8) = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10) =
       EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffff0;
  return;
}

// Destruct<FInputChord> @ 1426e61e0

void __cdecl UE::CoreUObject::Private::Destruct<FInputChord>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FInputChord> @ 1426e61f0

bool __cdecl UE::CoreUObject::Private::Copy<FInputChord>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + (longlong)param_1);
      lVar1 = *(longlong *)((longlong)param_1 + lVar5 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar5 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar4 = (*(uint *)((longlong)param_1 + 0x18) ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) &
              1 ^ *(uint *)((longlong)param_1 + 0x18);
      *(uint *)((longlong)param_1 + 0x18) = uVar4;
      uVar4 = (uVar4 ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) & 2 ^ uVar4;
      *(uint *)((longlong)param_1 + 0x18) = uVar4;
      uVar4 = (uVar4 ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) & 4 ^ uVar4;
      *(uint *)((longlong)param_1 + 0x18) = uVar4;
      *(uint *)((longlong)param_1 + 0x18) =
           (uVar4 ^ *(uint *)((longlong)param_1 + lVar5 + 0x18)) & 8 ^ uVar4;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FInputChord> @ 1426e62d0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FInputChord>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return *(uint *)((longlong)param_1 + 0x18) & 0xf ^ uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// DereferenceIfNecessary<FTabSpawnerEntry,FTabSpawnerEntry_*_&> @ 1426ebae0

/* WARNING: Enum "Type": Some values do not have unique names */

FTabSpawnerEntry * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTabSpawnerEntry,FTabSpawnerEntry_*_&>
          (FTabSpawnerEntry **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FTabManager,FTabManager_*_&> @ 1426ebb00

/* WARNING: Enum "Type": Some values do not have unique names */

FTabManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FTabManager,FTabManager_*_&>(FTabManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SDockTab,SDockTab_*_&> @ 1426ebb20

/* WARNING: Enum "Type": Some values do not have unique names */

SDockTab * __cdecl
UE::Core::Private::DereferenceIfNecessary<SDockTab,SDockTab_*_&>(SDockTab **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SDockingArea,SDockingArea_*_&> @ 1426ebb40

/* WARNING: Enum "Type": Some values do not have unique names */

SDockingArea * __cdecl
UE::Core::Private::DereferenceIfNecessary<SDockingArea,SDockingArea_*_&>(SDockingArea **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SDockingNode,SDockingNode_*_&> @ 1426ebb60

SDockingNode * __cdecl
UE::Core::Private::DereferenceIfNecessary<SDockingNode,SDockingNode_*_&>(SDockingNode **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SDockingTabStack,SDockingTabStack_*_&> @ 1426ebb80

/* WARNING: Enum "Type": Some values do not have unique names */

SDockingTabStack * __cdecl
UE::Core::Private::DereferenceIfNecessary<SDockingTabStack,SDockingTabStack_*_&>
          (SDockingTabStack **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SDockingTarget,SDockingTarget_*_&> @ 1426ebba0

SDockingTarget * __cdecl
UE::Core::Private::DereferenceIfNecessary<SDockingTarget,SDockingTarget_*_&>
          (SDockingTarget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::Private::SPanelDrawerArea,UE::Slate::Private::SPanelDrawerArea_*_&> @ 1426ebbc0

/* WARNING: Enum "Type": Some values do not have unique names */

SPanelDrawerArea * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::Private::SPanelDrawerArea,UE::Slate::Private::SPanelDrawerArea_*_&>
          (SPanelDrawerArea **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STabDrawer,STabDrawer_*_&> @ 1426ebbe0

/* WARNING: Enum "Type": Some values do not have unique names */

STabDrawer * __cdecl
UE::Core::Private::DereferenceIfNecessary<STabDrawer,STabDrawer_*_&>(STabDrawer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STabDrawerButton,STabDrawerButton_*_&> @ 1426ebc00

/* WARNING: Enum "Type": Some values do not have unique names */

STabDrawerButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<STabDrawerButton,STabDrawerButton_*_&>
          (STabDrawerButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::Private::STabPanelDrawer,UE::Slate::Private::STabPanelDrawer_*_&> @ 1426ebc20

/* WARNING: Enum "Type": Some values do not have unique names */

STabPanelDrawer * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::Private::STabPanelDrawer,UE::Slate::Private::STabPanelDrawer_*_&>
          (STabPanelDrawer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STabSidebar,STabSidebar_*_&> @ 1426ebc40

/* WARNING: Enum "Type": Some values do not have unique names */

STabSidebar * __cdecl
UE::Core::Private::DereferenceIfNecessary<STabSidebar,STabSidebar_*_&>(STabSidebar **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWindowTitleBar,SWindowTitleBar_*_&> @ 1426ebc60

/* WARNING: Enum "Type": Some values do not have unique names */

SWindowTitleBar * __cdecl
UE::Core::Private::DereferenceIfNecessary<SWindowTitleBar,SWindowTitleBar_*_&>
          (SWindowTitleBar **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FLayoutExtender::FExtendedTab>_> @ 1426f38c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FLayoutExtender::FExtendedTab>_>
          (ushort param_1,ForElementType<FLayoutExtender::FExtendedTab> *param_2,int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FLayoutExtender::FExtendedTab>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_> @ 1426f3990

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
          (ushort param_1,ForElementType<FTabManager::FTab> *param_2,int *param_3)

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
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_> @ 1426f3a60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>_>
          (ushort param_1,ForElementType<TSharedRef<SWidget,1>_> *param_2,int *param_3)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<SWidget,1>_>
    ::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_> @ 1426f3b20

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FTabManager::FTab> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      iVar1 = 1;
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTabManager::FTab>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// GetTabManagerTopWindow @ 1427447c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __cdecl
UE::Slate::Private::GetTabManagerTopWindow
          (TSharedRef<SWindow,1> *__return_storage_ptr__,TSharedRef<SWindow,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  EWindowType EVar5;
  TSharedRef<SWindow,1> *pTVar6;
  SWindow *pSVar7;
  TSharedPtr<SWindow,1> local_18;
  
  __return_storage_ptr__->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pSVar7 = __return_storage_ptr__->Object;
  EVar5 = pSVar7->Type;
  if (EVar5 != Normal) {
    while (EVar5 != GameWindow) {
      SWindow::GetParentWindow(pSVar7,&local_18);
      if (local_18.Object == (SWindow *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
      if ((local_18.Object == (SWindow *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedRef<SWindow,1> *)(*pcVar2)();
        return pTVar6;
      }
      FVar3.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
      pSVar7 = local_18.Object;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_18.Object == (SWindow *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TSharedRef<SWindow,1> *)(*pcVar2)();
        return pTVar6;
      }
      pTVar1 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      __return_storage_ptr__->Object = pSVar7;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      pSVar7 = __return_storage_ptr__->Object;
      EVar5 = pSVar7->Type;
      if (EVar5 == Normal) {
        return __return_storage_ptr__;
      }
    }
  }
  return __return_storage_ptr__;
}

// IsHomeScreenEnabled @ 14274d060

bool __cdecl UE::Editor::HomeScreen::IsHomeScreenEnabled(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `bool___cdecl_UE::Editor::HomeScreen::IsHomeScreenEnabled(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`bool___cdecl_UE::Editor::HomeScreen::IsHomeScreenEnabled(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`bool___cdecl_UE::Editor::HomeScreen::IsHomeScreenEnabled(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
      }
      plVar4 = (longlong *)
               (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                         (IConsoleManager::Singleton,L"HomeScreen.EnableHomeScreen",1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        `bool___cdecl_UE::Editor::HomeScreen::IsHomeScreenEnabled(void)'::__l2::bIsHomeScreenEnabled
             = (bool)(**(code **)(*plVar4 + 0xc0))(plVar4);
      }
      `bool___cdecl_UE::Editor::HomeScreen::IsHomeScreenEnabled(void)'::__l2::ThreadSafeOnce18 = 1;
      _Init_thread_footer(&`bool___cdecl_UE::Editor::HomeScreen::IsHomeScreenEnabled(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  return `bool___cdecl_UE::Editor::HomeScreen::IsHomeScreenEnabled(void)'::__l2::
         bIsHomeScreenEnabled;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SWidget,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SWidget,1>_>_*_&> @ 14279c230

FObservableArrayPointer<TSharedPtr<SWidget,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SWidget,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SWidget,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<SWidget,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SWidget,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SWidget,1>_>_*_&> @ 14279c250

FSharedObservableArray<TSharedPtr<SWidget,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SWidget,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SWidget,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<SWidget,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<SWidget,1>_>,STableRow<TSharedPtr<SWidget,1>_>_*_&> @ 14279c270

STableRow<TSharedPtr<SWidget,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<SWidget,1>_>,STableRow<TSharedPtr<SWidget,1>_>_*_&>
          (STableRow<TSharedPtr<SWidget,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSlateAsyncTaskNotificationImpl,FSlateAsyncTaskNotificationImpl_*_&> @ 14279c290

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateAsyncTaskNotificationImpl * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FSlateAsyncTaskNotificationImpl,FSlateAsyncTaskNotificationImpl_*_&>
          (FSlateAsyncTaskNotificationImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSlateNotificationManager,FSlateNotificationManager_*_&> @ 14279c2b0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateNotificationManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateNotificationManager,FSlateNotificationManager_*_&>
          (FSlateNotificationManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SButtonRowBlock,SButtonRowBlock_*_&> @ 14279c2d0

SButtonRowBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<SButtonRowBlock,SButtonRowBlock_*_&>
          (SButtonRowBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SCheckBoxStack,SCheckBoxStack_*_&> @ 14279c2f0

SCheckBoxStack * __cdecl
UE::Core::Private::DereferenceIfNecessary<SCheckBoxStack,SCheckBoxStack_*_&>
          (SCheckBoxStack **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SClippingHorizontalBox,SClippingHorizontalBox_*_&> @ 14279c310

SClippingHorizontalBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SClippingHorizontalBox,SClippingHorizontalBox_*_&>
          (SClippingHorizontalBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SClippingVerticalBox,SClippingVerticalBox_*_&> @ 14279c330

SClippingVerticalBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SClippingVerticalBox,SClippingVerticalBox_*_&>
          (SClippingVerticalBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SEditableTextBlock,SEditableTextBlock_*_&> @ 14279c350

SEditableTextBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<SEditableTextBlock,SEditableTextBlock_*_&>
          (SEditableTextBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMenuEntryBlock,SMenuEntryBlock_*_&> @ 14279c370

/* WARNING: Enum "Type": Some values do not have unique names */

SMenuEntryBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<SMenuEntryBlock,SMenuEntryBlock_*_&>
          (SMenuEntryBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiBoxWidget,SMultiBoxWidget_*_&> @ 14279c390

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

SMultiBoxWidget * __cdecl
UE::Core::Private::DereferenceIfNecessary<SMultiBoxWidget,SMultiBoxWidget_*_&>
          (SMultiBoxWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSubMenuButton,SSubMenuButton_*_&> @ 14279c3b0

SSubMenuButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSubMenuButton,SSubMenuButton_*_&>
          (SSubMenuButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SToolBarButtonBlock,SToolBarButtonBlock_*_&> @ 14279c3d0

SToolBarButtonBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<SToolBarButtonBlock,SToolBarButtonBlock_*_&>
          (SToolBarButtonBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SToolBarComboButtonBlock,SToolBarComboButtonBlock_*_&> @ 14279c3f0

SToolBarComboButtonBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<SToolBarComboButtonBlock,SToolBarComboButtonBlock_*_&>
          (SToolBarComboButtonBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SToolBarStackButtonBlock,SToolBarStackButtonBlock_*_&> @ 14279c410

SToolBarStackButtonBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<SToolBarStackButtonBlock,SToolBarStackButtonBlock_*_&>
          (SToolBarStackButtonBlock **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1427a7630

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<int> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1427a77a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 1427bcfc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuEntryResizeParams * __thiscall
`UE::Slate::Private::ApplySectionOverridesToBlock'::__l14::<lambda_1>::operator()
          (void *this,FMenuEntryResizeParams *__return_storage_ptr__)

{
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar1;
  TOptional<bool> *pTVar2;
  FMenuEntryResizeParams *pFVar3;
  
  pFVar3 = TAttribute<FMenuEntryResizeParams>::Get(this);
  FMenuEntryResizeParams::FMenuEntryResizeParams(__return_storage_ptr__,pFVar3);
  if (((__return_storage_ptr__->Wrapping).Allow.bIsSet == false) &&
     (*(char *)((longlong)this + 0x149) != '\0')) {
    (__return_storage_ptr__->Wrapping).Allow.Value = *(bool *)((longlong)this + 0x148);
    (__return_storage_ptr__->Wrapping).Allow.bIsSet = *(bool *)((longlong)this + 0x149);
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(__return_storage_ptr__->Wrapping).Allow.Getter,
               (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x150))
    ;
  }
  if (((__return_storage_ptr__->Wrapping).Mode.bIsSet == false) &&
     (*(char *)((longlong)this + 0x189) != '\0')) {
    (__return_storage_ptr__->Wrapping).Mode.Value = *(EWrapMode *)((longlong)this + 0x188);
    (__return_storage_ptr__->Wrapping).Mode.bIsSet = *(bool *)((longlong)this + 0x189);
    TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              (&(__return_storage_ptr__->Wrapping).Mode.Getter,
               (TDelegate<UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
                *)((longlong)this + 400));
  }
  if (((__return_storage_ptr__->Wrapping).Priority.bIsSet == false) &&
     (*(char *)((longlong)this + 0x16c) != '\0')) {
    (__return_storage_ptr__->Wrapping).Priority.Value = *(int *)((longlong)this + 0x168);
    (__return_storage_ptr__->Wrapping).Priority.bIsSet = *(bool *)((longlong)this + 0x16c);
    TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&(__return_storage_ptr__->Wrapping).Priority.Getter,
               (TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)this + 0x170));
  }
  pTVar1 = &(__return_storage_ptr__->Wrapping).VerticalOverflowBehavior;
  if ((((__return_storage_ptr__->Wrapping).VerticalOverflowBehavior.bIsSet == false) &&
      (*(char *)((longlong)this + 0x1a9) != '\0')) &&
     ((TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *)
      ((longlong)this + 0x1a8) != pTVar1)) {
    pTVar1->TypedValue = *(EVerticalOverflowBehavior *)((longlong)this + 0x1a8);
    (__return_storage_ptr__->Wrapping).VerticalOverflowBehavior.bIsSet = true;
  }
  pTVar2 = &(__return_storage_ptr__->Wrapping).ForceNewLine;
  if ((((__return_storage_ptr__->Wrapping).ForceNewLine.bIsSet == false) &&
      (*(char *)((longlong)this + 0x1ab) != '\0')) &&
     ((TOptional<bool> *)((longlong)this + 0x1aa) != pTVar2)) {
    pTVar2->TypedValue = *(bool *)((longlong)this + 0x1aa);
    (__return_storage_ptr__->Wrapping).ForceNewLine.bIsSet = true;
  }
  return __return_storage_ptr__;
}

// ApplySectionOverridesToBlock @ 1427d1bf0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UE::Slate::Private::ApplySectionOverridesToBlock
          (TSharedRef<FMultiBlock,1> *param_1,TAttribute<FMenuEntryResizeParams> *param_2)

{
  TOptional<UE::Slate::PrioritizedWrapBox::EVerticalOverflowBehavior> *pTVar1;
  TOptional<bool> *pTVar2;
  FMultiBlock *pFVar3;
  bool bVar4;
  char cVar5;
  FMenuEntryResizeParams *pFVar6;
  FMenuEntryResizeParams *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FDestructionSentinel local_488;
  undefined1 *local_470;
  undefined1 local_468 [16];
  int local_458;
  undefined1 local_450 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_448;
  ForAnyElementType FStack_440;
  ulonglong local_438;
  undefined1 local_430 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_428;
  ForAnyElementType FStack_420;
  ulonglong local_418;
  undefined1 local_410 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_408;
  ForAnyElementType FStack_400;
  ulonglong local_3f8;
  undefined1 local_3f0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e8;
  ForAnyElementType FStack_3e0;
  ulonglong local_3d8;
  int local_3d0;
  bool local_3cc;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3c8;
  ForAnyElementType FStack_3c0;
  ulonglong local_3b8;
  undefined1 local_3b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3a8;
  ForAnyElementType FStack_3a0;
  ulonglong local_398;
  bool local_38f;
  bool local_38d;
  bool local_388;
  undefined1 local_380 [8];
  ForAnyElementType FStack_378;
  ulonglong local_370;
  undefined1 local_368 [208];
  undefined1 local_298 [8];
  ForAnyElementType FStack_290;
  int local_288;
  FMenuEntryResizeParams local_280;
  FMenuEntryResizeParams local_1b8;
  char local_f0;
  undefined1 local_e8 [8];
  ForAnyElementType FStack_e0;
  int local_d8;
  FMenuEntryResizeParams local_d0;
  
  if (param_2->bIsSet != false) {
    pFVar3 = param_1->Object;
    FMenuEntryResizeParams::FMenuEntryResizeParams
              ((FMenuEntryResizeParams *)local_368,&(pFVar3->ResizeParams).Value);
    local_368[200] = (pFVar3->ResizeParams).bIsSet;
    local_298 = (undefined1  [8])0x0;
    FStack_290.Data = (FScriptContainerElement *)0x0;
    local_288 = 0;
    TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy> *)
               local_298,&(pFVar3->ResizeParams).Getter);
    if (local_368[200] == false) {
      TAttribute<FMenuEntryResizeParams>::operator=
                ((TAttribute<FMenuEntryResizeParams> *)local_368,param_2);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FReadAccessScope *)&local_488);
      if (((local_288 == 0) || (FStack_290.Data == (FScriptContainerElement *)0x0)) ||
         (cVar5 = (**(code **)(*(longlong *)FStack_290.Data + 0x38))(), cVar5 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_488);
      pFVar6 = TAttribute<FMenuEntryResizeParams>::Get(param_2);
      if (bVar4) {
        FMenuEntryResizeParams::FMenuEntryResizeParams
                  (&local_1b8,(FMenuEntryResizeParams *)local_368);
        local_f0 = local_368[200];
        local_d8 = 0;
        local_e8 = (undefined1  [8])0x0;
        FStack_e0.Data = (FScriptContainerElement *)0x0;
        TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy> *)
                   local_e8,(TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>
                             *)local_298);
        FMenuEntryResizeParams::FMenuEntryResizeParams(&local_d0,pFVar6);
        local_468._0_8_ = (atomic<unsigned___int64>)0x0;
        local_468._8_8_ = (atomic<unsigned___int64> *)0x0;
        local_458 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_468,
                   (FWriteAccessScope *)&local_488);
        local_470 = local_468 + 8;
        puVar8 = Core::Private::DelegateAllocate(0x1c8,(FDelegateAllocation *)(local_468 + 8));
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFMenuEntryResizeParams__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &TBaseFunctorDelegateInstance<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy,`UE::Slate::Private::ApplySectionOverridesToBlock'::`14'::<lambda_1>_>
                     ::_vftable_;
          FMenuEntryResizeParams::FMenuEntryResizeParams
                    ((FMenuEntryResizeParams *)(puVar8 + 3),&local_1b8);
          *(char *)(puVar8 + 0x1c) = local_f0;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar8 + 0x1d),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e8);
          FMenuEntryResizeParams::FMenuEntryResizeParams
                    ((FMenuEntryResizeParams *)(puVar8 + 0x20),&local_d0);
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        memset(local_450,0,200);
        local_3d0 = 0;
        local_438 = 0;
        local_418 = 0;
        local_3f8 = 0;
        local_3d8 = 0;
        local_3b8 = 0;
        local_398 = 0;
        local_448.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_440.Data = (FScriptContainerElement *)0x0;
        local_430[0] = false;
        local_430[1] = false;
        local_428.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_420.Data = (FScriptContainerElement *)0x0;
        local_410[0] = false;
        local_410[1] = false;
        local_408.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_400.Data = (FScriptContainerElement *)0x0;
        local_3f0[0] = false;
        local_3f0[1] = false;
        local_3e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_3e0.Data = (FScriptContainerElement *)0x0;
        local_3cc = false;
        local_3c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_3c0.Data = (FScriptContainerElement *)0x0;
        local_3b0[0] = Preferred;
        local_3b0[1] = false;
        local_3a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_3a0.Data = (FScriptContainerElement *)0x0;
        local_38f = false;
        local_38d = false;
        local_388 = true;
        local_380 = (undefined1  [8])0x0;
        FStack_378.Data = (FScriptContainerElement *)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_468,
                   (FWriteAccessScope *)&local_488);
        if (FStack_378.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_378.Data);
        }
        FStack_378.Data = (FScriptContainerElement *)local_468._8_8_;
        local_370 = CONCAT44(local_370._4_4_,local_458);
        local_458 = 0;
        local_468._8_8_ = (atomic<unsigned___int64> *)0x0;
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_468,
                   (FWriteAccessScope *)&local_488);
        if ((local_458 != 0) &&
           ((atomic<unsigned___int64> *)local_468._8_8_ != (atomic<unsigned___int64> *)0x0)) {
          (**(code **)*(atomic<unsigned___int64> *)local_468._8_8_)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(local_468 + 8),0,0,0x10);
          local_458 = 0;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if ((atomic<unsigned___int64> *)local_468._8_8_ != (atomic<unsigned___int64> *)0x0) {
          FMemory::Free((void *)local_468._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_468);
        FMenuEntryResizeParams::~FMenuEntryResizeParams(&local_d0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
                   (FWriteAccessScope *)&local_488);
        if ((local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
          local_d8 = 0;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_e8);
        FMenuEntryResizeParams::~FMenuEntryResizeParams(&local_1b8);
        TAttribute<FMenuEntryResizeParams>::operator=
                  ((TAttribute<FMenuEntryResizeParams> *)local_368,
                   (TAttribute<FMenuEntryResizeParams> *)local_450);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_380,
                   (FWriteAccessScope *)&local_488);
        if (((int)local_370 != 0) && (FStack_378.Data != (FScriptContainerElement *)0x0)) {
          (**(code **)*(atomic<unsigned___int64> *)FStack_378.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_378,0,0,0x10)
          ;
          local_370 = local_370 & 0xffffffff00000000;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_378.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_378.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_380);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3a8,(FWriteAccessScope *)&local_488);
        if (((int)local_398 != 0) && (FStack_3a0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_3a0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a0,0,0,0x10)
          ;
          local_398 = local_398 & 0xffffffff00000000;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_3a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_3a0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3a8.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3c8,(FWriteAccessScope *)&local_488);
        if (((int)local_3b8 != 0) && (FStack_3c0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_3c0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3c0,0,0,0x10)
          ;
          local_3b8 = local_3b8 & 0xffffffff00000000;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_3c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_3c0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3c8.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_3e8,(FWriteAccessScope *)&local_488);
        if (((int)local_3d8 != 0) && (FStack_3e0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_3e0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e0,0,0,0x10)
          ;
          local_3d8 = local_3d8 & 0xffffffff00000000;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_3e0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_3e0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e8.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_408,(FWriteAccessScope *)&local_488);
        if (((int)local_3f8 != 0) && (FStack_400.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_400.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_400,0,0,0x10)
          ;
          local_3f8 = local_3f8 & 0xffffffff00000000;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_400.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_400.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_408.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_428,(FWriteAccessScope *)&local_488);
        if (((int)local_418 != 0) && (FStack_420.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_420.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_420,0,0,0x10)
          ;
          local_418 = local_418 & 0xffffffff00000000;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_420.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_420.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_428.AccessDetector);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_448,(FWriteAccessScope *)&local_488);
        if (((int)local_438 != 0) && (FStack_440.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_440.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_440,0,0,0x10)
          ;
          local_438 = local_438 & 0xffffffff00000000;
        }
        if (local_488.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
        }
        if (FStack_440.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_440.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_448.AccessDetector);
      }
      else {
        pFVar7 = TAttribute<FMenuEntryResizeParams>::Get
                           ((TAttribute<FMenuEntryResizeParams> *)local_368);
        FMenuEntryResizeParams::FMenuEntryResizeParams(&local_280,pFVar7);
        if ((local_280.Wrapping.Allow.bIsSet == false) && ((pFVar6->Wrapping).Allow.bIsSet != false)
           ) {
          local_280.Wrapping.Allow.Value = (pFVar6->Wrapping).Allow.Value;
          local_280.Wrapping.Allow.bIsSet = (pFVar6->Wrapping).Allow.bIsSet;
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    (&local_280.Wrapping.Allow.Getter,&(pFVar6->Wrapping).Allow.Getter);
        }
        if ((local_280.Wrapping.Mode.bIsSet == false) && ((pFVar6->Wrapping).Mode.bIsSet != false))
        {
          local_280.Wrapping.Mode.Value = (pFVar6->Wrapping).Mode.Value;
          local_280.Wrapping.Mode.bIsSet = (pFVar6->Wrapping).Mode.bIsSet;
          TDelegate<enum_UE::Slate::PrioritizedWrapBox::EWrapMode___cdecl(void),FDefaultDelegateUserPolicy>
          ::CopyFrom<FDefaultDelegateUserPolicy>
                    (&local_280.Wrapping.Mode.Getter,&(pFVar6->Wrapping).Mode.Getter);
        }
        if ((local_280.Wrapping.Priority.bIsSet == false) &&
           ((pFVar6->Wrapping).Priority.bIsSet != false)) {
          local_280.Wrapping.Priority.Value = (pFVar6->Wrapping).Priority.Value;
          local_280.Wrapping.Priority.bIsSet = (pFVar6->Wrapping).Priority.bIsSet;
          TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    (&local_280.Wrapping.Priority.Getter,&(pFVar6->Wrapping).Priority.Getter);
        }
        pTVar1 = &(pFVar6->Wrapping).VerticalOverflowBehavior;
        if (((local_280.Wrapping.VerticalOverflowBehavior.bIsSet == false) &&
            ((pFVar6->Wrapping).VerticalOverflowBehavior.bIsSet != false)) &&
           (pTVar1 != &local_280.Wrapping.VerticalOverflowBehavior)) {
          local_280.Wrapping.VerticalOverflowBehavior.TypedValue = pTVar1->TypedValue;
          local_280.Wrapping.VerticalOverflowBehavior.bIsSet = true;
        }
        pTVar2 = &(pFVar6->Wrapping).ForceNewLine;
        if (((local_280.Wrapping.ForceNewLine.bIsSet == false) &&
            ((pFVar6->Wrapping).ForceNewLine.bIsSet != false)) &&
           (pTVar2 != &local_280.Wrapping.ForceNewLine)) {
          local_280.Wrapping.ForceNewLine.TypedValue = pTVar2->TypedValue;
          local_280.Wrapping.ForceNewLine.bIsSet = true;
        }
        FMenuEntryResizeParams::FMenuEntryResizeParams
                  ((FMenuEntryResizeParams *)local_450,&local_280);
        local_388 = true;
        local_370 = 0;
        local_380 = (undefined1  [8])0x0;
        FStack_378.Data = (FScriptContainerElement *)0x0;
        FMenuEntryResizeParams::operator=
                  ((FMenuEntryResizeParams *)local_368,(FMenuEntryResizeParams *)local_450);
        local_368[200] = local_388;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_298,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_380);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_380,
                   (FWriteAccessScope *)local_468);
        if (((int)local_370 != 0) && (FStack_378.Data != (FScriptContainerElement *)0x0)) {
          (**(code **)*(atomic<unsigned___int64> *)FStack_378.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_378,0,0,0x10)
          ;
          local_370 = local_370 & 0xffffffff00000000;
        }
        if (local_458._0_1_ == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_468._8_8_,
                     (FDestructionSentinel *)local_468);
        }
        if (FStack_378.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_378.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_380);
        FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_450);
        FMenuEntryResizeParams::~FMenuEntryResizeParams(&local_280);
      }
    }
    TAttribute<FMenuEntryResizeParams>::operator=
              (&param_1->Object->ResizeParams,(TAttribute<FMenuEntryResizeParams> *)local_368);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
               (FWriteAccessScope *)&local_488);
    if ((local_288 != 0) && (FStack_290.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_290.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_290,0,0,0x10);
      local_288 = 0;
    }
    if (local_488.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_488.Accessor,&local_488);
    }
    if (FStack_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_290.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_298);
    FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_368);
    return;
  }
  return;
}

// GetBlockWidgetDisplayText @ 14280d610

FText * __cdecl
UE::MultiBoxUtils::GetBlockWidgetDisplayText
          (FText *__return_storage_ptr__,TArray<FText,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    pFVar6 = FText::GetEmpty();
  }
  else {
    uVar5 = 0;
    if ((int)(iVar1 - 1U) < iVar1) {
      uVar5 = ~(iVar1 - 1U) >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar3)();
        return pFVar6;
      }
    }
    pFVar6 = (FText *)((param_1->AllocatorInstance).Data +
                      (longlong)param_1->ArrayNum * 0x10 + -0x10);
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
  return __return_storage_ptr__;
}

// GetSearchHierarchyInfoText @ 142814150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
UE::MultiBoxUtils::GetSearchHierarchyInfoText
          (FText *__return_storage_ptr__,TArray<FText,TSizedDefaultAllocator<32>_> *param_1)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_e8;
  FText local_d8;
  FText local_c8;
  FTextFormat local_b8;
  FText local_a8;
  FFormatArgumentValue local_98;
  undefined4 local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  pFVar7 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar7->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar7->Flags;
  if (param_1->ArrayNum == 0) {
    return __return_storage_ptr__;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FText *)(*pcVar4)();
    return pFVar7;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  pIVar1 = (__return_storage_ptr__->TextData).Reference;
  pIVar3 = *(ITextData **)pFVar2;
  if (pIVar1 != pIVar3) {
    (__return_storage_ptr__->TextData).Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  uVar10 = 1;
  __return_storage_ptr__->Flags = *(uint *)(pFVar2 + 8);
  iVar9 = param_1->ArrayNum;
  if (1 < iVar9 + -1) {
    lVar11 = 0x10;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar9) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar4)();
        return pFVar7;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      local_d8.TextData.Reference = *(ITextData **)(pFVar2 + lVar11);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                  (local_d8.TextData.Reference,local_res18);
      }
      local_c8.TextData.Reference = (__return_storage_ptr__->TextData).Reference;
      local_d8.Flags = *(uint *)(pFVar2 + lVar11 + 8);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 8))
                  (local_c8.TextData.Reference,local_res20);
      }
      local_c8.Flags = __return_storage_ptr__->Flags;
      pFVar7 = FText::AsCultureInvariant(&local_58,L"{0}/{1}");
      pFVar8 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
      local_98.Type = Text;
      FText::FText((FText *)&local_98.TextValue,&local_c8);
      if ((local_98.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar4)();
        return pFVar7;
      }
      local_78 = 4;
      FText::FText(&local_68,&local_d8);
      if ((local_68.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar4)();
        return pFVar7;
      }
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_e8.AllocatorInstance.Data,&local_98,2);
      local_b8.TextFormatData.Object = (pFVar8->TextFormatData).Object;
      local_b8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_b8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_a8,&local_b8,&local_e8);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((FFormatArgumentValue *)local_e8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_98.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_98.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      FText::operator=(__return_storage_ptr__,&local_a8);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      iVar9 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar10 < iVar9 + -1);
  }
  return __return_storage_ptr__;
}

// GetTypeHash @ 142815e60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

uint __cdecl UE::Slate::PrioritizedWrapBox::GetTypeHash(FSlot *param_1)

{
  TSlateContainedAttribute<UE::Slate::PrioritizedWrapBox::EWrapMode,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  TVar1;
  TSlateContainedAttribute<int,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
  TVar2;
  uint uVar3;
  
  TVar2 = param_1->WrapPriority;
  TVar1 = param_1->WrapMode;
  uVar3 = ((uint)((ulonglong)param_1->_padding_ >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->_padding_ >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  return ((uint)TVar2 >> 2) + 0x9e3779b9 +
         ((uVar3 >> 0x10 ^ uVar3) + (uint)(byte)TVar1 * 0x40 + ((byte)TVar1 >> 2) + 0x9e3779b9 ^
         (uint)(byte)TVar1) + (int)TVar2 * 0x40 ^ (uint)TVar2;
}

// HandleToolMenuCustomization @ 142817730

void __cdecl
UE::ToolMenuCustomization::Private::HandleToolMenuCustomization
          (FCustomizedToolMenu *param_1,FCustomizedToolMenu *param_2)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  TMap<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
  *pTVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *_Src;
  code *pcVar8;
  TMap<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  longlong local_a8;
  longlong local_a0;
  TMap<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar6 = (param_2->SectionOrder).ArrayNum;
  if (0 < iVar6) {
    pTVar2 = &param_1->SectionOrder;
    if (pTVar2 != &param_2->SectionOrder) {
      _Src = (param_2->SectionOrder).AllocatorInstance.Data;
      piVar1 = &(param_1->SectionOrder).ArrayMax;
      (param_1->SectionOrder).ArrayNum = iVar6;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar6 << 3);
    }
  }
  iStack_90 = 0;
  puVar3 = &(param_2->EntryOrder).field_0x10;
  iVar6 = *(int *)&(param_2->EntryOrder).field_0x28;
  pTVar4 = &param_2->EntryOrder;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar6 != 0) {
    puVar16 = *(uint **)&(param_2->EntryOrder).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar3;
    }
    uVar14 = *puVar16;
    while (uVar14 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14281783d;
      uVar14 = puVar16[lVar11 + 1];
    }
    uStack_8c = -uVar14 & uVar14;
    uVar5 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res18;
    if (iVar6 < iStack_7c) {
      iStack_7c = iVar6;
    }
  }
LAB_14281783d:
  iStack_70 = *(int *)&(param_2->EntryOrder).field_0x8 - *(int *)&(param_2->EntryOrder).field_0x34;
  uVar14 = *(uint *)&(param_2->EntryOrder).field_0x28;
  uStack_80 = 0xffffffff;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar4;
  local_88 = puVar3;
  iStack_74 = iStack_7c;
  local_68 = pTVar4;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar14 < 0) || (iVar6 < (int)uVar14)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar7 = *(uint *)&(param_2->EntryOrder).field_0x28;
  if (uVar14 != uVar7) {
    puVar15 = *(undefined1 **)&(param_2->EntryOrder).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar3;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar14 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142817940;
      uVar14 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar5 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar7 < (int)uVar14) {
      uVar14 = uVar7;
    }
  }
LAB_142817940:
  while( true ) {
    pTVar9 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == uVar14) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar9 == pTVar4))
    break;
    local_a8 = *(longlong *)pTVar9 + (longlong)TStack_60.CurrentBitIndex * 0x20;
    local_a0 = local_a8 + 8;
    TSet<TTuple<FName,FCustomizedToolMenuNameArray>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FCustomizedToolMenuNameArray_const_&>_>
              ((TSet<TTuple<FName,FCustomizedToolMenuNameArray>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>,FDefaultSetAllocator>
                *)&param_1->EntryOrder,
               (TPairInitializer<FName_const_&,FCustomizedToolMenuNameArray_const_&> *)
               &stack0x00000020,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// HandleToolMenuProfile @ 1428179d0

void __cdecl
UE::ToolMenuCustomization::Private::HandleToolMenuProfile
          (FToolMenuProfile *param_1,FToolMenuProfile *param_2)

{
  undefined1 *puVar1;
  ECustomizedToolMenuVisibility *pEVar2;
  TMap<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  *pTVar3;
  ulonglong uVar4;
  int iVar5;
  ECustomizedToolMenuVisibility EVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  *pTVar9;
  TMap<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  *pTVar10;
  TMap<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FCustomizedToolMenuEntry *pFVar15;
  FCustomizedToolMenuSection *pFVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_178;
  undefined4 uStack_144;
  undefined1 local_138 [16];
  TMap<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  *local_128;
  TMap<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TMap<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  longlong local_90;
  ECustomizedToolMenuVisibility *local_88;
  longlong local_80;
  ECustomizedToolMenuVisibility *local_78;
  undefined4 local_54;
  
  if (param_2 != (FToolMenuProfile *)0x0) {
    if (((param_2->SuppressExtenders).ArrayNum != 0) && ((param_1->SuppressExtenders).ArrayNum == 0)
       ) {
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                (&param_1->SuppressExtenders,&param_2->SuppressExtenders);
    }
    iVar5 = *(int *)&(param_2->Entries).field_0x28;
    puVar1 = &(param_2->Entries).field_0x10;
    local_128 = &param_2->Entries;
    local_178 = 1;
    iVar19 = 0;
    iVar21 = 0;
    uVar13 = 1;
    iVar14 = 0;
    if (iVar5 != 0) {
      puVar22 = *(uint **)&(param_2->Entries).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar13 = *puVar22;
      iVar21 = 0;
      while (uVar13 == 0) {
        lVar17 = (longlong)iVar19;
        iVar21 = iVar21 + 0x20;
        iVar19 = iVar19 + 1;
        uVar13 = 1;
        iVar14 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_142817abe;
        uVar13 = puVar22[lVar17 + 1];
      }
      uVar13 = -uVar13 & uVar13;
      uVar4 = (ulonglong)uVar13 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar14 = iVar21 + -1 + (int)lVar17;
      if (iVar5 < iVar14) {
        iVar14 = iVar5;
      }
    }
LAB_142817abe:
    uVar18 = *(uint *)&(param_2->Entries).field_0x28;
    uVar23 = uVar18 & 0xffffffe0;
    TStack_e8._padding_ = CONCAT44(uVar13,iVar19);
    TStack_e8.CurrentBitIndex = iVar14;
    TStack_e8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar18 >> 5;
    TStack_e8._28_4_ = local_54;
    TStack_e8.BaseBitIndex = iVar21;
    uStack_c8 = CONCAT44(uStack_144,
                         *(int *)&(param_2->Entries).field_0x8 -
                         *(int *)&(param_2->Entries).field_0x34);
    local_f0 = local_128;
    TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar9 = local_128;
    uVar13 = *(uint *)&(param_2->Entries).field_0x28;
    if (uVar18 != uVar13) {
      puVar20 = *(undefined1 **)&(param_2->Entries).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
      while (uVar18 == 0) {
        lVar17 = (longlong)iVar19;
        uVar23 = uVar23 + 0x20;
        iVar19 = iVar19 + 1;
        uVar18 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142817be0;
        uVar18 = *(uint *)(puVar20 + lVar17 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar18 = (int)lVar17 + -1 + uVar23;
      if ((int)uVar13 < (int)uVar18) {
        uVar18 = uVar13;
      }
    }
LAB_142817be0:
    while( true ) {
      pTVar10 = local_f0;
      if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_e8.CurrentBitIndex == uVar18) &&
          (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar10 == pTVar9)) break;
      lVar7 = *(longlong *)pTVar10;
      lVar17 = lVar7 + (longlong)TStack_e8.CurrentBitIndex * 0x14;
      pFVar15 = TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                ::Find((TMapBase<FName,FCustomizedToolMenuEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>_>
                        *)&param_1->Entries,
                       *(FName *)(lVar7 + (longlong)TStack_e8.CurrentBitIndex * 0x14));
      pEVar2 = (ECustomizedToolMenuVisibility *)(lVar17 + 8);
      if (pFVar15 == (FCustomizedToolMenuEntry *)0x0) {
        local_90 = lVar17;
        local_88 = pEVar2;
        TSet<TTuple<FName,FCustomizedToolMenuEntry>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FCustomizedToolMenuEntry_const_&>_>
                  ((TSet<TTuple<FName,FCustomizedToolMenuEntry>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuEntry,0>,FDefaultSetAllocator>
                    *)&param_1->Entries,
                   (TPairInitializer<FName_const_&,FCustomizedToolMenuEntry_const_&> *)local_138,
                   (bool *)&local_90);
      }
      else {
        EVar6 = *pEVar2;
        if (EVar6 != None) {
          pFVar15->Visibility = EVar6;
        }
      }
      TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    }
    iStack_118 = 0;
    local_100 = 0;
    puVar1 = &(param_2->Sections).field_0x10;
    iVar5 = *(int *)&(param_2->Sections).field_0x28;
    pTVar3 = &param_2->Sections;
    iStack_104 = 0;
    if (iVar5 != 0) {
      puVar22 = *(uint **)&(param_2->Sections).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)puVar1;
      }
      uVar13 = *puVar22;
      while (uVar13 == 0) {
        lVar17 = (longlong)iStack_118;
        local_100 = local_100 + 0x20;
        iStack_118 = iStack_118 + 1;
        iStack_104 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) goto LAB_142817d01;
        uVar13 = puVar22[lVar17 + 1];
      }
      local_178 = -uVar13 & uVar13;
      uVar4 = (ulonglong)local_178 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_138._4_4_ = (undefined4)lVar17;
      iStack_104 = local_100 + -1 + local_138._4_4_;
      if (iVar5 < iStack_104) {
        iStack_104 = iVar5;
      }
    }
LAB_142817d01:
    uVar13 = *(uint *)&(param_2->Sections).field_0x28;
    uStack_114 = local_178;
    iStack_f8 = *(int *)&(param_2->Sections).field_0x8 - *(int *)&(param_2->Sections).field_0x34;
    uStack_108 = 0xffffffff;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_b8._padding_ = CONCAT44(local_178,iStack_118);
    TStack_b8.CurrentBitIndex = iStack_104;
    TStack_b8.UnvisitedBitMask = 0xffffffff;
    iVar19 = (int)uVar13 >> 5;
    TStack_b8._28_4_ = iVar14;
    TStack_b8.BaseBitIndex = local_100;
    uStack_98 = CONCAT44(uStack_f4,iStack_f8);
    local_120 = pTVar3;
    local_110 = puVar1;
    iStack_fc = iVar14;
    local_c0 = pTVar3;
    TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar23 = *(uint *)&(param_2->Sections).field_0x28;
    if (uVar13 != uVar23) {
      puVar20 = *(undefined1 **)&(param_2->Sections).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
      while (uVar13 == 0) {
        lVar17 = (longlong)iVar19;
        uVar18 = uVar18 + 0x20;
        iVar19 = iVar19 + 1;
        uVar13 = uVar23;
        if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
        goto LAB_142817e10;
        uVar13 = *(uint *)(puVar20 + lVar17 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar13 = (int)lVar17 + -1 + uVar18;
      if ((int)uVar23 < (int)uVar13) {
        uVar13 = uVar23;
      }
    }
LAB_142817e10:
    while( true ) {
      pTVar11 = local_c0;
      if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_b8.CurrentBitIndex == uVar13) &&
          (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar11 == pTVar3)) break;
      lVar7 = *(longlong *)pTVar11;
      lVar17 = lVar7 + (longlong)TStack_b8.CurrentBitIndex * 0x14;
      pFVar16 = TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                ::Find((TMapBase<FName,FCustomizedToolMenuSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>_>
                        *)&param_1->Sections,
                       *(FName *)(lVar7 + (longlong)TStack_b8.CurrentBitIndex * 0x14));
      pEVar2 = (ECustomizedToolMenuVisibility *)(lVar17 + 8);
      if (pFVar16 == (FCustomizedToolMenuSection *)0x0) {
        local_80 = lVar17;
        local_78 = pEVar2;
        TSet<TTuple<FName,FCustomizedToolMenuSection>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FCustomizedToolMenuSection_const_&>_>
                  ((TSet<TTuple<FName,FCustomizedToolMenuSection>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuSection,0>,FDefaultSetAllocator>
                    *)&param_1->Sections,
                   (TPairInitializer<FName_const_&,FCustomizedToolMenuSection_const_&> *)
                   (local_138 + 8),(bool *)&local_80);
      }
      else {
        EVar6 = *pEVar2;
        if (EVar6 != None) {
          pFVar16->Visibility = EVar6;
        }
      }
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    }
    FNamePermissionList::Append(&param_1->MenuPermissions,&param_2->MenuPermissions);
  }
  return;
}

// PrioritizedResize @ 14282d280

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl
UE::Slate::PrioritizedResize
          (float param_1,float param_2,FMargin *param_3,int param_4,
          TArray<UE::Slate::FClippingInfo,TSizedDefaultAllocator<32>_> *param_5,
          TOptional<float> *param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TArray<UE::Slate::FClippingInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  TOptional<float> *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  bool *pbVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FClippingInfo *pFVar16;
  FClippingInfo *pFVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  ForAnyElementType FVar21;
  FClippingInfo *pFVar22;
  int iVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  FIdentityFunctor local_res8 [8];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105 [5];
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  undefined1 local_e0;
  undefined1 local_df [7];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FClippingInfo *local_c8;
  FScriptContainerElement *local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [120];
  
  pTVar6 = param_6;
  pTVar5 = param_5;
  dVar24 = 0.0;
  dVar3 = 0.0;
  iVar23 = param_5->ArrayNum;
  pFVar15 = (param_5->AllocatorInstance).Data;
  uVar25 = 0;
  uVar26 = 0;
  pFVar20 = pFVar15 + (longlong)iVar23 * 0xf0;
  while( true ) {
    if (pTVar5->ArrayNum != iVar23) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<UE::Slate::FClippingInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar20) break;
    dVar3 = dVar3 + *(double *)(pFVar15 + 0xe0);
    if ((pFVar15[0x31] != (FScriptContainerElement)0x0) &&
       (pbVar11 = TAttribute<bool>::Get((TAttribute<bool> *)(pFVar15 + 0x30)), *pbVar11 == false)) {
      dVar24 = dVar24 + *(double *)(pFVar15 + 0xe0);
    }
    pFVar15 = pFVar15 + 0xf0;
  }
  lVar14 = (longlong)
           -((int)ROUND(__real_bf000000 -
                        (((param_1 - __real_38d1b717) + param_1) - __real_38d1b717)) >> 1);
  lVar12 = (longlong)
           ROUND(__real_bfe0000000000000 -
                 (((dVar3 - __real_3f1a36e2e0000000) + dVar3) - __real_3f1a36e2e0000000)) >> 1;
  if (-lVar14 != lVar12 && lVar14 <= -lVar12) {
    iVar23 = pTVar5->ArrayNum;
    pFVar15 = (pTVar5->AllocatorInstance).Data;
    pFVar20 = pFVar15 + (longlong)iVar23 * 0xf0;
    while( true ) {
      if (pTVar5->ArrayNum != iVar23) {
        param_5._0_1_ = 0;
        `TCheckedPointerIterator<UE::Slate::FClippingInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_5);
      }
      if (pFVar15 == pFVar20) break;
      if (pFVar15[0x51] == (FScriptContainerElement)0x0) {
        pFVar15[0xe9] = (FScriptContainerElement)FMenuEntryResizeParams::DefaultVisibleInOverflow;
        pFVar15 = pFVar15 + 0xf0;
      }
      else {
        pFVar13 = (FScriptContainerElement *)
                  TAttribute<bool>::Get((TAttribute<bool> *)(pFVar15 + 0x50));
        pFVar15[0xe9] = *pFVar13;
        pFVar15 = pFVar15 + 0xf0;
      }
    }
    iVar23 = pTVar5->ArrayNum;
    pFVar16 = (FClippingInfo *)(pTVar5->AllocatorInstance).Data;
    bVar8 = false;
    local_f0.Data = (FScriptContainerElement *)0x0;
    pFVar22 = pFVar16 + iVar23;
    local_e8 = 0;
    dVar4 = (double)(param_2 + param_3->Left + param_3->Right);
    local_e4 = 0;
    while( true ) {
      if (pTVar5->ArrayNum != iVar23) {
        local_108 = 0;
        `TCheckedPointerIterator<UE::Slate::FClippingInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (pFVar16 == pFVar22) break;
      local_c8 = pFVar16;
      if (((local_f0.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < local_f0.Data + (longlong)local_e4 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_e8 == local_e4) {
        local_e8 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_f0,&local_e4);
      }
      pFVar16 = pFVar16 + 1;
      *(FClippingInfo **)(local_f0.Data + (longlong)local_e8 * 8) = local_c8;
      local_e8 = local_e8 + 1;
    }
    AlgoImpl::
    StableSortInternal<UE::Slate::FClippingInfo_*,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo_*,_UE::Slate::PrioritizedResize_::__l17::<lambda_1>_>_>
              ((FClippingInfo **)local_f0.Data,local_e8,local_res8[0],(<lambda_1> *)&local_e0);
    iVar23 = 1;
    do {
      dVar2 = dVar24;
      if (bVar8) {
        dVar2 = dVar4 + dVar24;
      }
      uVar18 = 0;
      if (0 < local_e8) {
        lVar12 = 0;
        do {
          uVar19 = 0;
          if ((int)uVar18 < local_e8) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar14 = *(longlong *)(local_f0.Data + lVar12);
          if ((((*(char *)(lVar14 + 0x31) == '\0') ||
               (pbVar11 = TAttribute<bool>::Get((TAttribute<bool> *)(lVar14 + 0x30)),
               *pbVar11 != false)) &&
              (dVar2 = dVar2 + *(double *)(lVar14 + 0xe0), (double)param_1 < dVar2)) &&
             ((*(undefined1 *)(lVar14 + 0xea) = 1, *(char *)(lVar14 + 0xe9) != '\0' && (!bVar8)))) {
            bVar8 = true;
            iVar23 = iVar23 + 1;
            break;
          }
          uVar18 = uVar18 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar18 < local_e8);
      }
      iVar23 = iVar23 + -1;
    } while (0 < iVar23);
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    AlgoImpl::
    StableSortInternal<UE::Slate::FClippingInfo,FIdentityFunctor,TDereferenceWrapper<UE::Slate::FClippingInfo,_UE::Slate::PrioritizedResize_::__l2::<lambda_2>_>_>
              ((FClippingInfo *)(pTVar5->AllocatorInstance).Data,pTVar5->ArrayNum,local_res8[0],
               (<lambda_2> *)local_df);
    iVar23 = pTVar5->ArrayNum;
    dVar24 = 0.0;
    pFVar15 = (pTVar5->AllocatorInstance).Data;
    pFVar20 = pFVar15 + (longlong)iVar23 * 0xf0;
    while( true ) {
      if (pTVar5->ArrayNum != iVar23) {
        local_107 = 0;
        `TCheckedPointerIterator<UE::Slate::FClippingInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_107);
      }
      if (pFVar15 == pFVar20) break;
      if (pFVar15[0xea] == (FScriptContainerElement)0x0) {
        *(double *)(pFVar15 + 0xd8) = *(double *)(pFVar15 + 0xd8) - dVar24;
        pFVar15 = pFVar15 + 0xf0;
      }
      else {
        dVar24 = dVar24 + *(double *)(pFVar15 + 0xe0);
        pFVar15 = pFVar15 + 0xf0;
      }
    }
    pFVar16 = (FClippingInfo *)(pTVar5->AllocatorInstance).Data;
    iVar23 = 0;
    pFVar22 = (FClippingInfo *)0x0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    pFVar17 = pFVar16 + pTVar5->ArrayNum;
    local_d0 = 0;
    FVar21.Data = (FScriptContainerElement *)pFVar22;
    for (; pFVar16 != pFVar17; pFVar16 = pFVar16 + 1) {
      if ((pFVar16->bIsStretchable != false) && (pFVar16->bWasClipped == false)) {
        if ((FVar21.Data <= pFVar16) &&
           (local_d0._4_4_ = (int)((ulonglong)local_d0 >> 0x20), lVar12 = (longlong)local_d0._4_4_,
           pFVar16 < (FClippingInfo *)((longlong)FVar21.Data + lVar12 * 0xf0))) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar21.Data = local_d8.Data;
          iVar23 = (int)local_d0;
        }
        if (iVar23 == local_d0._4_4_) {
          iVar23 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8f0,&local_d8,(int *)((longlong)&local_d0 + 4));
          FVar21.Data = local_d8.Data;
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar23 + 1);
        FClippingInfo::FClippingInfo
                  ((FClippingInfo *)((longlong)FVar21.Data + (longlong)iVar23 * 0xf0),pFVar16);
        FVar21.Data = local_d8.Data;
        iVar23 = (int)local_d0;
      }
    }
    DestructItems<UE::Slate::FClippingInfo,int>((FClippingInfo *)FVar21.Data,iVar23);
    if ((FClippingInfo *)local_d8.Data != (FClippingInfo *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (0 < iVar23) {
      dVar2 = dVar4;
      if (!bVar8) {
        dVar2 = 0.0;
      }
      dVar24 = (((double)param_1 - dVar3) - dVar2) + dVar24;
      dVar3 = dVar24 / (double)iVar23;
      if (0.0 < dVar24) {
        iVar23 = pTVar5->ArrayNum;
        dVar24 = 0.0;
        pFVar15 = (pTVar5->AllocatorInstance).Data;
        pFVar20 = pFVar15 + (longlong)iVar23 * 0xf0;
        while( true ) {
          if (pTVar5->ArrayNum != iVar23) {
            local_106 = 0;
            `TCheckedPointerIterator<UE::Slate::FClippingInfo,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(&local_106);
          }
          if (pFVar15 == pFVar20) break;
          if ((pFVar15[0xea] == (FScriptContainerElement)0x0) &&
             (*(double *)(pFVar15 + 0xd8) = dVar24 + *(double *)(pFVar15 + 0xd8),
             pFVar15[0xe8] != (FScriptContainerElement)0x0)) {
            dVar24 = dVar24 + dVar3;
            *(double *)(pFVar15 + 0xe0) = dVar3 + *(double *)(pFVar15 + 0xe0);
          }
          pFVar15 = pFVar15 + 0xf0;
        }
      }
    }
    if ((bVar8) && (param_2 <= param_1)) {
      iVar23 = pTVar5->ArrayNum;
      pFVar15 = (pTVar5->AllocatorInstance).Data;
      local_100.Data = (FScriptContainerElement *)0x0;
      pFVar20 = pFVar15 + (longlong)iVar23 * 0xf0;
      local_f8 = 0;
      while( true ) {
        if (pTVar5->ArrayNum != iVar23) {
          local_105[0] = 0;
          `TCheckedPointerIterator<UE::Slate::FClippingInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_105);
          pFVar22 = (FClippingInfo *)(local_f8 & 0xffffffff);
        }
        iVar9 = (int)pFVar22;
        if (pFVar15 == pFVar20) break;
        if (pFVar15[0xea] == (FScriptContainerElement)0x0) {
          local_c0 = pFVar15;
          if ((local_100.Data <= (FScriptContainerElement *)&local_c0) &&
             ((FScriptContainerElement *)&local_c0 < local_100.Data + (longlong)local_f8._4_4_ * 8))
          {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar9 = (int)local_f8;
          }
          if (iVar9 == local_f8._4_4_) {
            iVar9 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_100,(int *)((longlong)&local_f8 + 4));
          }
          local_f8 = CONCAT44(local_f8._4_4_,iVar9 + 1U);
          *(FScriptContainerElement **)(local_100.Data + (longlong)iVar9 * 8) = local_c0;
          pFVar22 = (FClippingInfo *)(ulonglong)(iVar9 + 1U);
        }
        pFVar15 = pFVar15 + 0xf0;
      }
      dVar24 = 0.0;
      uVar18 = param_4;
      if (param_4 < 0) {
        uVar18 = iVar9 + param_4;
      }
      uVar19 = iVar9 - 1U;
      if ((int)uVar18 < (int)(iVar9 - 1U)) {
        uVar19 = uVar18;
      }
      uVar18 = 0;
      if (0 < (int)uVar19) {
        uVar18 = uVar19;
      }
      uVar19 = 0;
      dVar3 = 0.0;
      if (0 < (int)uVar18) {
        lVar12 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar19 < (int)pFVar22) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar22 = (FClippingInfo *)(local_f8 & 0xffffffff);
          }
          uVar19 = uVar19 + 1;
          lVar14 = lVar12 * 8;
          lVar12 = lVar12 + 1;
          dVar24 = dVar24 + *(double *)(*(longlong *)(local_100.Data + lVar14) + 0xe0);
          dVar3 = dVar24;
        } while (lVar12 < (int)uVar18);
      }
      pbVar11 = &pTVar6->bIsSet;
      if ((TOptional<float> *)local_b8 != pTVar6) {
        pTVar6->TypedValue = 0.0;
        *pbVar11 = true;
      }
      if (param_4 < 0) {
        if ((int)uVar18 < (int)pFVar22) {
          uVar19 = 0;
          if ((int)uVar18 < (int)pFVar22) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if (uVar19 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pFVar22 = (FClippingInfo *)(local_f8 & 0xffffffff);
          }
          uVar25 = (undefined4)
                   *(undefined8 *)(*(longlong *)(local_100.Data + (longlong)(int)uVar18 * 8) + 0xe0)
          ;
          uVar26 = (undefined4)
                   ((ulonglong)
                    *(undefined8 *)
                     (*(longlong *)(local_100.Data + (longlong)(int)uVar18 * 8) + 0xe0) >> 0x20);
        }
        if ((TOptional<float> *)local_b0 != pTVar6) {
          pTVar6->TypedValue =
               (float)((double)CONCAT44(uVar26,uVar25) + dVar3 + (double)param_3->Left);
          *pbVar11 = true;
        }
        uVar18 = uVar18 + 1;
      }
      else if ((TOptional<float> *)(local_b8 + 4) != pTVar6) {
        pTVar6->TypedValue = (float)((double)param_3->Left + dVar3);
        *pbVar11 = true;
      }
      if ((param_4 == -1) && ((TOptional<float> *)(local_b0 + 4) != pTVar6)) {
        pTVar6->TypedValue = (param_1 - param_2) - param_3->Right;
        *pbVar11 = true;
      }
      if ((int)pFVar22 != 0) {
        lVar12 = (longlong)(int)uVar18 * 8;
        do {
          if ((int)pFVar22 <= (int)uVar18) break;
          uVar19 = 0;
          if ((int)uVar18 < (int)pFVar22) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar18 = uVar18 + 1;
          pFVar15 = local_100.Data + lVar12;
          lVar12 = lVar12 + 8;
          *(double *)(*(longlong *)pFVar15 + 0xd8) =
               dVar4 + *(double *)(*(longlong *)pFVar15 + 0xd8);
          pFVar22 = (FClippingInfo *)(local_f8 & 0xffffffff);
        } while ((int)local_f8 != 0);
      }
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
    }
  }
  return;
}

// Construct<FCharRangeList> @ 14283c450

void __cdecl UE::CoreUObject::Private::Construct<FCharRangeList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCharRangeList> @ 14283c460

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCharRangeList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCharRangeList> @ 14283c470

void __cdecl UE::CoreUObject::Private::Destruct<FCharRangeList>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FCharRangeList> @ 14283c490

bool __cdecl UE::CoreUObject::Private::Copy<FCharRangeList>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 2);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCharRange> @ 14283c570

void __cdecl UE::CoreUObject::Private::Construct<FCharRange>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FCharRange> @ 14283c580

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCharRange>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FCharRange> @ 14283c590

void __cdecl UE::CoreUObject::Private::Destruct<FCharRange>(void *param_1)

{
  return;
}

// Copy<FCharRange> @ 14283c5a0

bool __cdecl UE::CoreUObject::Private::Copy<FCharRange>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FSlateHyperlinkRun,FSlateHyperlinkRun_*_&> @ 14283f770

FSlateHyperlinkRun * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateHyperlinkRun,FSlateHyperlinkRun_*_&>
          (FSlateHyperlinkRun **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SCheckBox,SCheckBox_*_&> @ 14283f790

SCheckBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SCheckBox,SCheckBox_*_&>(SCheckBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboButton,SComboButton_*_&> @ 14283f7b0

SComboButton * __cdecl
UE::Core::Private::DereferenceIfNecessary<SComboButton,SComboButton_*_&>(SComboButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SEditableLabel,SEditableLabel_*_&> @ 14283f7d0

/* WARNING: Enum "Type": Some values do not have unique names */

SEditableLabel * __cdecl
UE::Core::Private::DereferenceIfNecessary<SEditableLabel,SEditableLabel_*_&>
          (SEditableLabel **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SEditableTextBox,SEditableTextBox_*_&> @ 14283f7f0

/* WARNING: Enum "Type": Some values do not have unique names */

SEditableTextBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SEditableTextBox,SEditableTextBox_*_&>
          (SEditableTextBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SHyperlink,SHyperlink_*_&> @ 14283f810

SHyperlink * __cdecl
UE::Core::Private::DereferenceIfNecessary<SHyperlink,SHyperlink_*_&>(SHyperlink **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SThrobber,SThrobber_*_&> @ 14283f830

SThrobber * __cdecl
UE::Core::Private::DereferenceIfNecessary<SThrobber,SThrobber_*_&>(SThrobber **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>_> @ 142841d00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>_>
          (ushort param_1,ForElementType<FCurveHandle> *param_2,int *param_3)

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
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
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
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>_> @ 142841dd0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FCurveHandle> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 4) {
      iVar1 = 3;
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
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FString,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FString,1>_>_*_&> @ 1428aa3d0

FObservableArrayPointer<TSharedPtr<FString,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FString,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FString,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<FString,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FString,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FString,1>_>_*_&> @ 1428aa3f0

FSharedObservableArray<TSharedPtr<FString,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FString,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FString,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<FString,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboBox<TSharedPtr<FString,1>_>,SComboBox<TSharedPtr<FString,1>_>_*_&> @ 1428aa410

SComboBox<TSharedPtr<FString,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SComboBox<TSharedPtr<FString,1>_>,SComboBox<TSharedPtr<FString,1>_>_*_&>
          (SComboBox<TSharedPtr<FString,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<signed_char>,SSpinBox<signed_char>_*_&> @ 1428aa430

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<signed_char> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<signed_char>,SSpinBox<signed_char>_*_&>
          (SSpinBox<signed_char> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<unsigned_char>,SSpinBox<unsigned_char>_*_&> @ 1428aa450

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<unsigned_char> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<unsigned_char>,SSpinBox<unsigned_char>_*_&>
          (SSpinBox<unsigned_char> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<short>,SSpinBox<short>_*_&> @ 1428aa470

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<short> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<short>,SSpinBox<short>_*_&>
          (SSpinBox<short> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<unsigned_short>,SSpinBox<unsigned_short>_*_&> @ 1428aa490

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<unsigned_short> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<unsigned_short>,SSpinBox<unsigned_short>_*_&>
          (SSpinBox<unsigned_short> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<int>,SSpinBox<int>_*_&> @ 1428aa4b0

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<int> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<int>,SSpinBox<int>_*_&>(SSpinBox<int> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<unsigned_int>,SSpinBox<unsigned_int>_*_&> @ 1428aa4d0

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<unsigned_int> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<unsigned_int>,SSpinBox<unsigned_int>_*_&>
          (SSpinBox<unsigned_int> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<float>,SSpinBox<float>_*_&> @ 1428aa4f0

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<float> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<float>,SSpinBox<float>_*_&>
          (SSpinBox<float> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<double>,SSpinBox<double>_*_&> @ 1428aa510

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<double> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<double>,SSpinBox<double>_*_&>
          (SSpinBox<double> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<__int64>,SSpinBox<__int64>_*_&> @ 1428aa530

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<__int64> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<__int64>,SSpinBox<__int64>_*_&>
          (SSpinBox<__int64> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSpinBox<unsigned___int64>,SSpinBox<unsigned___int64>_*_&> @ 1428aa550

/* WARNING: Enum "Type": Some values do not have unique names */

SSpinBox<unsigned___int64> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSpinBox<unsigned___int64>,SSpinBox<unsigned___int64>_*_&>
          (SSpinBox<unsigned___int64> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FString,1>_>,STableRow<TSharedPtr<FString,1>_>_*_&> @ 1428aa570

STableRow<TSharedPtr<FString,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FString,1>_>,STableRow<TSharedPtr<FString,1>_>_*_&>
          (STableRow<TSharedPtr<FString,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SExpandableArea,SExpandableArea_*_&> @ 1428aa590

SExpandableArea * __cdecl
UE::Core::Private::DereferenceIfNecessary<SExpandableArea,SExpandableArea_*_&>
          (SExpandableArea **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SInputKeySelector,SInputKeySelector_*_&> @ 1428aa5b0

SInputKeySelector * __cdecl
UE::Core::Private::DereferenceIfNecessary<SInputKeySelector,SInputKeySelector_*_&>
          (SInputKeySelector **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMenuAnchor,SMenuAnchor_*_&> @ 1428aa5d0

/* WARNING: Enum "Type": Some values do not have unique names */

SMenuAnchor * __cdecl
UE::Core::Private::DereferenceIfNecessary<SMenuAnchor,SMenuAnchor_*_&>(SMenuAnchor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiLineEditableTextBox,SMultiLineEditableTextBox_*_&> @ 1428aa5f0

/* WARNING: Enum "Type": Some values do not have unique names */

SMultiLineEditableTextBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SMultiLineEditableTextBox,SMultiLineEditableTextBox_*_&>
          (SMultiLineEditableTextBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSafeZone,SSafeZone_*_&> @ 1428aa610

SSafeZone * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSafeZone,SSafeZone_*_&>(SSafeZone **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SScaleBox,SScaleBox_*_&> @ 1428aa630

SScaleBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SScaleBox,SScaleBox_*_&>(SScaleBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SScrollBar,SScrollBar_*_&> @ 1428aa650

SScrollBar * __cdecl
UE::Core::Private::DereferenceIfNecessary<SScrollBar,SScrollBar_*_&>(SScrollBar **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SScrollBarTrack,SScrollBarTrack_*_&> @ 1428aa670

SScrollBarTrack * __cdecl
UE::Core::Private::DereferenceIfNecessary<SScrollBarTrack,SScrollBarTrack_*_&>
          (SScrollBarTrack **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SScrollBorder,SScrollBorder_*_&> @ 1428aa690

SScrollBorder * __cdecl
UE::Core::Private::DereferenceIfNecessary<SScrollBorder,SScrollBorder_*_&>(SScrollBorder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SScrollBox,SScrollBox_*_&> @ 1428aa6b0

SScrollBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SScrollBox,SScrollBox_*_&>(SScrollBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSearchBox,SSearchBox_*_&> @ 1428aa6d0

SSearchBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSearchBox,SSearchBox_*_&>(SSearchBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSubMenuHandler,SSubMenuHandler_*_&> @ 1428aa6f0

/* WARNING: Enum "Type": Some values do not have unique names */

SSubMenuHandler * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSubMenuHandler,SSubMenuHandler_*_&>
          (SSubMenuHandler **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSuggestionTextBox,SSuggestionTextBox_*_&> @ 1428aa710

/* WARNING: Enum "Type": Some values do not have unique names */

SSuggestionTextBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSuggestionTextBox,SSuggestionTextBox_*_&>
          (SSuggestionTextBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STextComboBox,STextComboBox_*_&> @ 1428aa730

STextComboBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<STextComboBox,STextComboBox_*_&>(STextComboBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STextComboPopup,STextComboPopup_*_&> @ 1428aa750

STextComboPopup * __cdecl
UE::Core::Private::DereferenceIfNecessary<STextComboPopup,STextComboPopup_*_&>
          (STextComboPopup **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STextEntryPopup,STextEntryPopup_*_&> @ 1428aa770

STextEntryPopup * __cdecl
UE::Core::Private::DereferenceIfNecessary<STextEntryPopup,STextEntryPopup_*_&>
          (STextEntryPopup **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SVirtualJoystick,SVirtualJoystick_*_&> @ 1428aa790

SVirtualJoystick * __cdecl
UE::Core::Private::DereferenceIfNecessary<SVirtualJoystick,SVirtualJoystick_*_&>
          (SVirtualJoystick **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SVolumeControl,SVolumeControl_*_&> @ 1428aa7b0

SVolumeControl * __cdecl
UE::Core::Private::DereferenceIfNecessary<SVolumeControl,SVolumeControl_*_&>
          (SVolumeControl **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<SVirtualJoystick::FControlData>_> @ 1428ad170

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<SVirtualJoystick::FControlData>_>
          (uint param_1,uint param_2,ForElementType<SVirtualJoystick::FControlData> *param_3,
          int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<SVirtualJoystick::FControlData>::ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_> @ 1428ad3e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
          (ushort param_1,ForElementType<bool> *param_2,int *param_3)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>_> @ 1428ad4b0

/* WARNING: Removing unreachable block (ram,0x0001428ad4f7) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>_>
          (ushort param_1,ForElementType<int> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>_> @ 1428ad540

/* WARNING: Removing unreachable block (ram,0x0001428ad587) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>_>
          (ushort param_1,ForElementType<float> *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>::ResizeAllocation
              (param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<SVirtualJoystick::FControlData>_> @ 1428ad660

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<SVirtualJoystick::FControlData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<SVirtualJoystick::FControlData> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<SVirtualJoystick::FControlData>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>_> @ 1428ad7e0

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<int>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>_> @ 1428ad810

void __cdecl
UE::Core::Private::
ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int param_5,
          int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<float>::ResizeAllocation
              (param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// DereferenceIfNecessary<FSlateEditableTextLayout,FSlateEditableTextLayout_*_&> @ 1429b3ed0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateEditableTextLayout * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateEditableTextLayout,FSlateEditableTextLayout_*_&>
          (FSlateEditableTextLayout **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SErrorHint,SErrorHint_*_&> @ 1429b3ef0

SErrorHint * __cdecl
UE::Core::Private::DereferenceIfNecessary<SErrorHint,SErrorHint_*_&>(SErrorHint **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SErrorText,SErrorText_*_&> @ 1429b3f10

SErrorText * __cdecl
UE::Core::Private::DereferenceIfNecessary<SErrorText,SErrorText_*_&>(SErrorText **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SInlineEditableTextBlock,SInlineEditableTextBlock_*_&> @ 1429b3f30

/* WARNING: Enum "Type": Some values do not have unique names */

SInlineEditableTextBlock * __cdecl
UE::Core::Private::DereferenceIfNecessary<SInlineEditableTextBlock,SInlineEditableTextBlock_*_&>
          (SInlineEditableTextBlock **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SInvalidationPanel,SInvalidationPanel_*_&> @ 1429b3f50

SInvalidationPanel * __cdecl
UE::Core::Private::DereferenceIfNecessary<SInvalidationPanel,SInvalidationPanel_*_&>
          (SInvalidationPanel **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiLineEditableText,SMultiLineEditableText_*_&> @ 1429b3f70

/* WARNING: Enum "Type": Some values do not have unique names */

SMultiLineEditableText * __cdecl
UE::Core::Private::DereferenceIfNecessary<SMultiLineEditableText,SMultiLineEditableText_*_&>
          (SMultiLineEditableText **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SNotificationExtendable,SNotificationExtendable_*_&> @ 1429b3f90

/* WARNING: Enum "Type": Some values do not have unique names */

SNotificationExtendable * __cdecl
UE::Core::Private::DereferenceIfNecessary<SNotificationExtendable,SNotificationExtendable_*_&>
          (SNotificationExtendable **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SNotificationItemExternalImpl,SNotificationItemExternalImpl_*_&> @ 1429b3fb0

SNotificationItemExternalImpl * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SNotificationItemExternalImpl,SNotificationItemExternalImpl_*_&>
          (SNotificationItemExternalImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SNotificationItemImpl,SNotificationItemImpl_*_&> @ 1429b3fd0

SNotificationItemImpl * __cdecl
UE::Core::Private::DereferenceIfNecessary<SNotificationItemImpl,SNotificationItemImpl_*_&>
          (SNotificationItemImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SProgressBar,SProgressBar_*_&> @ 1429b3ff0

SProgressBar * __cdecl
UE::Core::Private::DereferenceIfNecessary<SProgressBar,SProgressBar_*_&>(SProgressBar **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SViewport,SViewport_*_&> @ 1429b4010

/* WARNING: Enum "Type": Some values do not have unique names */

SViewport * __cdecl
UE::Core::Private::DereferenceIfNecessary<SViewport,SViewport_*_&>(SViewport **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWindowTitleBarArea,SWindowTitleBarArea_*_&> @ 1429b4030

/* WARNING: Enum "Type": Some values do not have unique names */

SWindowTitleBarArea * __cdecl
UE::Core::Private::DereferenceIfNecessary<SWindowTitleBarArea,SWindowTitleBarArea_*_&>
          (SWindowTitleBarArea **param_1)

{
  return *param_1;
}

// GetAdjustedIndex @ 1429e8d20

int __cdecl
UE::Slate::Private::GetAdjustedIndex
          (int param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2)

{
  ForElementType<FSetElementId> FVar1;
  int iVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar6 = 0;
  iVar7 = param_1;
  if (0 < param_1) {
    do {
      if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
        FVar1 = (param_2->Hash).SecondaryData;
        FVar4 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar4 = FVar1;
        }
        iVar3 = *(int *)((longlong)FVar4 + (param_2->HashSize - 1 & uVar6) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int *)(*(longlong *)&param_2->Elements + (longlong)iVar3 * 0xc) == (int)uVar6)
            goto LAB_1429e8d8c;
            iVar3 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar3 * 0xc);
          } while (iVar3 != -1);
        }
      }
      iVar3 = -1;
LAB_1429e8d8c:
      iVar2 = iVar7 + -1;
      if (iVar3 == -1) {
        iVar2 = iVar7;
      }
      iVar7 = iVar2;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < param_1);
  }
  return iVar7;
}

// DereferenceIfNecessary<SHeaderRow::FColumn,SHeaderRow::FColumn_*_&> @ 142a16260

/* WARNING: Enum "Type": Some values do not have unique names */

FColumn * __cdecl
UE::Core::Private::DereferenceIfNecessary<SHeaderRow::FColumn,SHeaderRow::FColumn_*_&>
          (FColumn **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SExpanderArrow,SExpanderArrow_*_&> @ 142a16280

SExpanderArrow * __cdecl
UE::Core::Private::DereferenceIfNecessary<SExpanderArrow,SExpanderArrow_*_&>
          (SExpanderArrow **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SHeaderRow,SHeaderRow_*_&> @ 142a162a0

SHeaderRow * __cdecl
UE::Core::Private::DereferenceIfNecessary<SHeaderRow,SHeaderRow_*_&>(SHeaderRow **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableColumnHeader,STableColumnHeader_*_&> @ 142a162c0

/* WARNING: Enum "Type": Some values do not have unique names */

STableColumnHeader * __cdecl
UE::Core::Private::DereferenceIfNecessary<STableColumnHeader,STableColumnHeader_*_&>
          (STableColumnHeader **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableViewBase,STableViewBase_*_&> @ 142a162e0

STableViewBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<STableViewBase,STableViewBase_*_&>
          (STableViewBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STextScroller,STextScroller_*_&> @ 142a16300

STextScroller * __cdecl
UE::Core::Private::DereferenceIfNecessary<STextScroller,STextScroller_*_&>(STextScroller **param_1)

{
  return *param_1;
}

// operator() @ 1504926b0

bool __thiscall
`UE::Slate::Private::VerifyParentChildrenRelationship'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4662117889489248006>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4662117889489248006>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504926f0

bool __thiscall `UE::Slate::Private::VerifyWidgetLayerId'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4662117889489248019>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4662117889489248019>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

