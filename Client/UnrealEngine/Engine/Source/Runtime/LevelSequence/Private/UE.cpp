// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 53

// Construct<FLevelSequenceAnimSequenceLinkItem> @ 146c43c40

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceAnimSequenceLinkItem>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x61) = 0;
  *(undefined1 *)((longlong)param_1 + 99) = 0;
  *(undefined2 *)((longlong)param_1 + 0x75) = 0;
  *(undefined1 *)((longlong)param_1 + 0x77) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x1000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x78;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x70) = 1;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  return;
}

// ConstructForTests<FLevelSequenceAnimSequenceLinkItem> @ 146c43cc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequenceAnimSequenceLinkItem>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x1010101;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x1000000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x78;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x70) = 1;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  return;
}

// Destruct<FLevelSequenceAnimSequenceLinkItem> @ 146c43d30

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceAnimSequenceLinkItem>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x48),*(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FLevelSequenceAnimSequenceLinkItem> @ 146c43dd0

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceAnimSequenceLinkItem>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      uVar2 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(puVar4 + 2),(FSoftObjectPath *)((longlong)pvVar3 + 0x10));
      *(undefined1 *)(puVar4 + 6) = *(undefined1 *)((longlong)pvVar3 + 0x30);
      *(undefined1 *)((longlong)puVar4 + 0x31) = *(undefined1 *)((longlong)pvVar3 + 0x31);
      *(undefined1 *)((longlong)puVar4 + 0x32) = *(undefined1 *)((longlong)pvVar3 + 0x32);
      *(undefined1 *)((longlong)puVar4 + 0x33) = *(undefined1 *)((longlong)pvVar3 + 0x33);
      *(undefined1 *)((longlong)puVar4 + 0x34) = *(undefined1 *)((longlong)pvVar3 + 0x34);
      *(undefined1 *)((longlong)puVar4 + 0x35) = *(undefined1 *)((longlong)pvVar3 + 0x35);
      *(undefined1 *)((longlong)puVar4 + 0x36) = *(undefined1 *)((longlong)pvVar3 + 0x36);
      *(undefined1 *)((longlong)puVar4 + 0x37) = *(undefined1 *)((longlong)pvVar3 + 0x37);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar4 + 7),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar3 + 0x38));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar4 + 9),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar3 + 0x48));
      *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)((longlong)pvVar3 + 0x58);
      *(undefined4 *)((longlong)puVar4 + 0x5c) = *(undefined4 *)((longlong)pvVar3 + 0x5c);
      *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)((longlong)pvVar3 + 0x60);
      *(undefined4 *)((longlong)puVar4 + 100) = *(undefined4 *)((longlong)pvVar3 + 100);
      *(undefined4 *)(puVar4 + 0xd) = *(undefined4 *)((longlong)pvVar3 + 0x68);
      *(undefined8 *)((longlong)puVar4 + 0x6c) = *(undefined8 *)((longlong)pvVar3 + 0x6c);
      *(undefined1 *)((longlong)puVar4 + 0x74) = *(undefined1 *)((longlong)pvVar3 + 0x74);
      puVar4[0xf] = *(undefined8 *)((longlong)pvVar3 + 0x78);
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x80);
      puVar4 = puVar4 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBoundActorProxy> @ 146c44260

void __cdecl UE::CoreUObject::Private::Construct<FBoundActorProxy>(void *param_1)

{
  return;
}

// ConstructForTests<FBoundActorProxy> @ 146c44270

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBoundActorProxy>(void *param_1)

{
  return;
}

// Construct<FLegacyLazyObjectPtrFragment> @ 146c443f0

void __cdecl UE::CoreUObject::Private::Construct<FLegacyLazyObjectPtrFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLegacyLazyObjectPtrFragment> @ 146c44400

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLegacyLazyObjectPtrFragment>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLegacyLazyObjectPtrFragment> @ 146c44410

void __cdecl UE::CoreUObject::Private::Destruct<FLegacyLazyObjectPtrFragment>(void *param_1)

{
  return;
}

// Copy<FLegacyLazyObjectPtrFragment> @ 146c44420

bool __cdecl
UE::CoreUObject::Private::Copy<FLegacyLazyObjectPtrFragment>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FLegacyLazyObjectPtrFragment> @ 146c44450

bool __cdecl
UE::CoreUObject::Private::Identical<FLegacyLazyObjectPtrFragment>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  *param_4 = ((*(int *)((longlong)param_1 + 0xc) == *(int *)((longlong)param_2 + 0xc) &&
              *(int *)((longlong)param_1 + 8) == *(int *)((longlong)param_2 + 8)) &&
             *(int *)((longlong)param_1 + 4) == *(int *)((longlong)param_2 + 4)) &&
             *(int *)param_1 == *(int *)param_2;
  return true;
}

// GetStructTypeHash<FLegacyLazyObjectPtrFragment> @ 146c44540

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FLegacyLazyObjectPtrFragment>(void *param_1)

{
  ulong64 uVar1;
  
  uVar1 = CityHash64(param_1,0x10);
  return (uint)uVar1;
}

// Construct<FLevelSequencePlayerSnapshot> @ 146c457b0

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequencePlayerSnapshot>(void *param_1)

{
  memset(param_1,0,0xa8);
  FLevelSequencePlayerSnapshot::FLevelSequencePlayerSnapshot(param_1);
  return;
}

// ConstructForTests<FLevelSequencePlayerSnapshot> @ 146c457e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequencePlayerSnapshot>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x18;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x18;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x88))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x88),0);
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  return;
}

// Destruct<FLevelSequencePlayerSnapshot> @ 146c45800

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequencePlayerSnapshot>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLevelSequencePlayerSnapshot> @ 146c458b0

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequencePlayerSnapshot>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(FScriptContainerElement **)((longlong)param_1 + 0x20) =
         (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(FScriptContainerElement **)((longlong)param_1 + 0x40) =
         (((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(FScriptContainerElement **)((longlong)param_1 + 0x50) =
         (((FString *)((longlong)param_2 + 0x50))->Data).AllocatorInstance.Data;
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x60),(FString *)((longlong)param_2 + 0x60));
    *(FScriptContainerElement **)((longlong)param_1 + 0x70) =
         (((FString *)((longlong)param_2 + 0x70))->Data).AllocatorInstance.Data;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0x78),
               (FSoftObjectPath *)((longlong)param_2 + 0x78));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x98) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x98));
    }
    *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0xa0);
    param_1 = (int *)((longlong)param_1 + 0xa8);
    param_2 = (int *)((longlong)param_2 + 0xa8);
  }
  return true;
}

// Construct<FLevelSequenceObjectReferenceMap> @ 146c45c40

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceObjectReferenceMap>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FLevelSequenceObjectReferenceMap> @ 146c45d40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequenceObjectReferenceMap>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FLevelSequenceObjectReferenceMap> @ 146c45d70

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceObjectReferenceMap>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceLegacyObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceLegacyObjectReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// SerializeArchive<FLevelSequenceObjectReferenceMap> @ 146c45db0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FLevelSequenceObjectReferenceMap>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FLevelSequenceObjectReferenceMap::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FLevelSequenceObjectReferenceMap> @ 146c45e20

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceObjectReferenceMap>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
      ::operator=(this,(TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
                        *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLevelSequenceObject> @ 146c47050

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceObject>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8 [4];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x28);
  local_res8[0] = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)local_res8);
  return;
}

// ConstructForTests<FLevelSequenceObject> @ 146c47090

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLevelSequenceObject>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8 [4];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x28);
  local_res8[0] = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)local_res8);
  return;
}

// Destruct<FLevelSequenceObject> @ 146c470d0

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceObject>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FLevelSequenceObject> @ 146c47130

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceObject>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar2;
    puVar3[2] = puVar1[2];
    ::FString::operator=
              ((FString *)(puVar3 + 3),
               (FString *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    puVar1 = puVar1 + 6;
    puVar3[5] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    puVar3 = puVar3 + 6;
  }
  return true;
}

// Construct<FLevelSequenceLegacyObjectReference> @ 146c47210

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceLegacyObjectReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FLevelSequenceLegacyObjectReference> @ 146c47230

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequenceLegacyObjectReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FLevelSequenceLegacyObjectReference> @ 146c47250

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceLegacyObjectReference>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
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

// Copy<FLevelSequenceLegacyObjectReference> @ 146c47340

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceLegacyObjectReference>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      ::FString::operator=
                ((FString *)(puVar3 + 2),
                 (FString *)((longlong)puVar3 + ((longlong)param_2 - (longlong)param_1) + 0x10));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLevelSequenceCameraSettings> @ 146c476a0

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceCameraSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  return;
}

// ConstructForTests<FLevelSequenceCameraSettings> @ 146c476b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequenceCameraSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  return;
}

// Destruct<FLevelSequenceCameraSettings> @ 146c47700

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceCameraSettings>(void *param_1)

{
  return;
}

// Copy<FLevelSequenceCameraSettings> @ 146c47810

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceCameraSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLevelSequenceBindingReferences> @ 146c47880

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceBindingReferences>(void *param_1)

{
  memset(param_1,0,0xf0);
  FLevelSequenceBindingReferences::FLevelSequenceBindingReferences(param_1);
  return;
}

// ConstructForTests<FLevelSequenceBindingReferences> @ 146c478b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequenceBindingReferences>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  return;
}

// Destruct<FLevelSequenceBindingReferences> @ 146c478c0

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceBindingReferences>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa0));
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FLevelSequenceBindingReferences> @ 146c478d0

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceBindingReferences>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&this[1].field_0x18,
                 (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&pTVar1[1].field_0x18)
      ;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&this[2].field_0x30,
                 (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)&pTVar1[2].field_0x30)
      ;
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[4].field_0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUpgradedLevelSequenceBindingReferences> @ 146c479c0

void __cdecl
UE::CoreUObject::Private::Construct<FUpgradedLevelSequenceBindingReferences>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FUpgradedLevelSequenceBindingReferences> @ 146c479d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUpgradedLevelSequenceBindingReferences>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FUpgradedLevelSequenceBindingReferences> @ 146c47ae0

void __cdecl
UE::CoreUObject::Private::Destruct<FUpgradedLevelSequenceBindingReferences>(void *param_1)

{
  DestructItems<FMovieSceneBindingReference,int>
            (*(FMovieSceneBindingReference **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FUpgradedLevelSequenceBindingReferences> @ 146c47ba0

bool __cdecl
UE::CoreUObject::Private::Copy<FUpgradedLevelSequenceBindingReferences>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FMovieSceneBindingReference *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FMovieSceneBindingReference,int>
                  ((FMovieSceneBindingReference *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FMovieSceneBindingReference *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FMovieSceneBindingReference,FMovieSceneBindingReference,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FUpgradedLevelSequenceBindingReferences> @ 146c47c90

bool __cdecl
UE::CoreUObject::Private::
StructuredSerializeFromMismatchedTag<FUpgradedLevelSequenceBindingReferences>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FUpgradedLevelSequenceBindingReferences::SerializeFromMismatchedTag
                    (param_3,param_1,param_2);
  return bVar1;
}

// Construct<FLevelSequenceBindingReferenceArray> @ 146c47d70

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceBindingReferenceArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLevelSequenceBindingReferenceArray> @ 146c47d80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequenceBindingReferenceArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLevelSequenceBindingReferenceArray> @ 146c47d90

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceBindingReferenceArray>(void *param_1)

{
  DestructItems<FLevelSequenceBindingReference,int>
            (*(FLevelSequenceBindingReference **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLevelSequenceBindingReferenceArray> @ 146c47dd0

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceBindingReferenceArray>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FLevelSequenceBindingReference *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FLevelSequenceBindingReference,int>
                  ((FLevelSequenceBindingReference *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FLevelSequenceBindingReference *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FLevelSequenceBindingReference,FLevelSequenceBindingReference,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLevelSequenceBindingReference> @ 146c48040

void __cdecl UE::CoreUObject::Private::Construct<FLevelSequenceBindingReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FLevelSequenceBindingReference> @ 146c48070

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelSequenceBindingReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FLevelSequenceBindingReference> @ 146c480a0

void __cdecl UE::CoreUObject::Private::Destruct<FLevelSequenceBindingReference>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// PostSerialize<FLevelSequenceBindingReference> @ 146c481f0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FLevelSequenceBindingReference>
          (FArchive *param_1,void *param_2)

{
  FString local_28;
  TStringView<wchar_t> local_18;
  
  if (((param_1->field_0x28 & 1) != 0) && (1 < *(int *)((longlong)param_2 + 8))) {
    ::FString::ConcatFC((FString *)&local_18,param_2,L".");
    ::FString::ConcatFF(&local_28,(FString *)&local_18,(FString *)((longlong)param_2 + 0x30));
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
    local_18.Size = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath((FSoftObjectPath *)((longlong)param_2 + 0x10),&local_18);
    ::FString::Reset((FString *)((longlong)param_2 + 0x30),0);
    ::FString::Reset(param_2,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Copy<FLevelSequenceBindingReference> @ 146c482b0

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelSequenceBindingReference>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0x10),
               (FSoftObjectPath *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (FString *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Decay<TObjectPtr<ALevelSequenceActor>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<ALevelSequenceActor>_>,ALevelSequenceActor_*> @ 146c4a950

ALevelSequenceActor ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<ALevelSequenceActor>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<ALevelSequenceActor>_>,ALevelSequenceActor_*>
          (TObjectPtr<ALevelSequenceActor> *param_1)

{
  return (ALevelSequenceActor **)param_1;
}

// DereferenceIfNecessary<ULevelSequenceBurnIn,ULevelSequenceBurnIn_*_&> @ 146c4a960

ULevelSequenceBurnIn * __cdecl
UE::Core::Private::DereferenceIfNecessary<ULevelSequenceBurnIn,ULevelSequenceBurnIn_*_&>
          (ULevelSequenceBurnIn **param_1)

{
  return *param_1;
}

