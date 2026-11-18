// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 12

// Construct<FMediaPlayerOptions> @ 146befe40

void __cdecl UE::CoreUObject::Private::Construct<FMediaPlayerOptions>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0xffffffffffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  *(undefined2 *)((longlong)param_1 + 0x70) = 1;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// ConstructForTests<FMediaPlayerOptions> @ 146befee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaPlayerOptions>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0xffffffffffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  *(undefined2 *)((longlong)param_1 + 0x70) = 1;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// Destruct<FMediaPlayerOptions> @ 146beff80

void __cdecl UE::CoreUObject::Private::Destruct<FMediaPlayerOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  return;
}

// Copy<FMediaPlayerOptions> @ 146beff90

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaPlayerOptions>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int *this;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    this = (int *)((longlong)param_1 + 0x20);
    puVar2 = param_1;
    puVar3 = param_2;
    do {
      uVar1 = puVar3[1];
      *puVar2 = *puVar3;
      puVar2[1] = uVar1;
      puVar2[2] = puVar3[2];
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 3);
      ::FString::operator=
                ((FString *)this,
                 (FString *)((longlong)puVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)));
      ::FString::operator=
                ((FString *)(this + 4),
                 (FString *)((longlong)puVar2 + (longlong)param_2 + (0x30 - (longlong)param_1)));
      ::FString::operator=
                ((FString *)(this + 8),
                 (FString *)((longlong)puVar2 + (longlong)param_2 + (0x40 - (longlong)param_1)));
      ::FString::operator=
                ((FString *)(this + 0xc),
                 (FString *)((longlong)puVar2 + (longlong)param_2 + (0x50 - (longlong)param_1)));
      *(undefined1 *)(puVar2 + 0xc) =
           *(undefined1 *)((longlong)puVar2 + (longlong)param_2 + (0x60 - (longlong)param_1));
      puVar2[0xd] = *(undefined8 *)
                     ((longlong)puVar2 + (longlong)param_2 + (0x68 - (longlong)param_1));
      *(undefined1 *)(puVar2 + 0xe) =
           *(undefined1 *)((longlong)puVar2 + (longlong)param_2 + (0x70 - (longlong)param_1));
      *(undefined1 *)((longlong)puVar2 + 0x71) =
           *(undefined1 *)((longlong)puVar2 + (longlong)param_2 + (0x71 - (longlong)param_1));
      *(undefined1 *)((longlong)puVar2 + 0x72) =
           *(undefined1 *)((longlong)puVar2 + (longlong)param_2 + (0x72 - (longlong)param_1));
      TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                   *)(puVar2 + 0xf),
                  (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                   *)((longlong)puVar2 + (longlong)param_2 + (0x78 - (longlong)param_1)));
      puVar3 = puVar3 + 0x19;
      this = this + 0x32;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x19;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaPlayerInitialTrackLanguageSelection> @ 146bf00c0

void __cdecl
UE::CoreUObject::Private::Construct<FMediaPlayerInitialTrackLanguageSelection>(void *param_1)

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

// ConstructForTests<FMediaPlayerInitialTrackLanguageSelection> @ 146bf00f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMediaPlayerInitialTrackLanguageSelection>
          (void *param_1)

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

// Destruct<FMediaPlayerInitialTrackLanguageSelection> @ 146bf0120

void __cdecl
UE::CoreUObject::Private::Destruct<FMediaPlayerInitialTrackLanguageSelection>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMediaPlayerInitialTrackLanguageSelection> @ 146bf0180

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaPlayerInitialTrackLanguageSelection>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (FString *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FMediaPlayerTrackOptions> @ 146bf0210

void __cdecl UE::CoreUObject::Private::Construct<FMediaPlayerTrackOptions>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0xffffffffffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  return;
}

// ConstructForTests<FMediaPlayerTrackOptions> @ 146bf0240

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaPlayerTrackOptions>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0xffffffffffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  return;
}

// Destruct<FMediaPlayerTrackOptions> @ 146bf0270

void __cdecl UE::CoreUObject::Private::Destruct<FMediaPlayerTrackOptions>(void *param_1)

{
  return;
}

// Copy<FMediaPlayerTrackOptions> @ 146bf0280

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaPlayerTrackOptions>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

