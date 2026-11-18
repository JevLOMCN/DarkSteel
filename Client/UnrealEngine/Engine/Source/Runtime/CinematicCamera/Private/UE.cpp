// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 36

// Construct<FCameraFocusSettings> @ 146ab16e0

void __cdecl UE::CoreUObject::Private::Construct<FCameraFocusSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x47c35000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x41000000;
  return;
}

// ConstructForTests<FCameraFocusSettings> @ 146ab16f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraFocusSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x47c35000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(byte *)((longlong)param_1 + 0x48) = *(byte *)((longlong)param_1 + 0x48) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(byte *)((longlong)param_1 + 0x50) = *(byte *)((longlong)param_1 + 0x50) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x41000000;
  return;
}

// Destruct<FCameraFocusSettings> @ 146ab1700

void __cdecl UE::CoreUObject::Private::Destruct<FCameraFocusSettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FCameraFocusSettings> @ 146ab1720

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraFocusSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[lVar3];
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar2 + lVar3 + 4);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 8),
                 (TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + lVar3 + 8));
      uVar1 = *(undefined8 *)(puVar2 + lVar3 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)(puVar2 + lVar3 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)(puVar2 + lVar3 + 0x40);
      *(byte *)((longlong)param_1 + 0x48) =
           *(byte *)((longlong)param_1 + 0x48) ^
           (*(byte *)((longlong)param_1 + 0x48) ^ puVar2[lVar3 + 0x48]) & 1;
      param_1 = (void *)((longlong)param_1 + 0x60);
      puVar2[0x50] = puVar2[0x50] ^ (puVar2[0x50] ^ puVar2[lVar3 + 0x50]) & 1;
      *(undefined4 *)(puVar2 + 0x54) = *(undefined4 *)(puVar2 + lVar3 + 0x54);
      *(undefined4 *)(puVar2 + 0x58) = *(undefined4 *)(puVar2 + lVar3 + 0x58);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x60;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraTrackingFocusSettings> @ 146ab1b80

void __cdecl UE::CoreUObject::Private::Construct<FCameraTrackingFocusSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FCameraTrackingFocusSettings> @ 146ab1bd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraTrackingFocusSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(byte *)((longlong)param_1 + 0x40) = *(byte *)((longlong)param_1 + 0x40) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FCameraTrackingFocusSettings> @ 146ab1c20

void __cdecl UE::CoreUObject::Private::Destruct<FCameraTrackingFocusSettings>(void *param_1)

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

// Copy<FCameraTrackingFocusSettings> @ 146ab1c40

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraTrackingFocusSettings>
          (void *param_1,void *param_2,int param_3)

{
  FUtf8String *pFVar1;
  byte bVar2;
  FName FVar3;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TPersistentObjectPtr<FSoftObjectPath>::operator=(param_1,param_2);
    FVar3 = (((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28))->ObjectID).
            AssetPath.PackageName;
    bVar2 = *(byte *)&(((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28))->
                      ObjectID).SubPathString.Data.AllocatorInstance.Data;
    ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28))->WeakPtr =
         ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28))->WeakPtr;
    (((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28))->ObjectID).AssetPath.
    PackageName = FVar3;
    (((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28))->ObjectID).AssetPath.
    AssetName = (((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28))->ObjectID).
                AssetPath.AssetName;
    pTVar4 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28);
    param_2 = &(((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_2 + 0x28))->ObjectID).
               SubPathString.Data.ArrayNum;
    pFVar1 = &(((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28))->ObjectID).
              SubPathString;
    *(byte *)&(pFVar1->Data).AllocatorInstance.Data =
         *(byte *)&(pFVar1->Data).AllocatorInstance.Data ^
         (bVar2 ^ *(byte *)&(pTVar4->ObjectID).SubPathString.Data.AllocatorInstance.Data) & 1;
    param_1 = &(((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)param_1 + 0x28))->ObjectID).
               SubPathString.Data.ArrayNum;
  }
  return true;
}

// Construct<FNamedPlateCropPreset> @ 146ab1e40

void __cdecl UE::CoreUObject::Private::Construct<FNamedPlateCropPreset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNamedPlateCropPreset> @ 146ab1e60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamedPlateCropPreset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FNamedPlateCropPreset> @ 146ab1e80

void __cdecl UE::CoreUObject::Private::Destruct<FNamedPlateCropPreset>(void *param_1)

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

// Copy<FNamedPlateCropPreset> @ 146ab1ea0

bool __cdecl
UE::CoreUObject::Private::Copy<FNamedPlateCropPreset>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPlateCropSettings> @ 146ab1fe0

void __cdecl UE::CoreUObject::Private::Construct<FPlateCropSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FPlateCropSettings> @ 146ab1ff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPlateCropSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FPlateCropSettings> @ 146ab2000

void __cdecl UE::CoreUObject::Private::Destruct<FPlateCropSettings>(void *param_1)

{
  return;
}

// Copy<FPlateCropSettings> @ 146ab2010

bool __cdecl
UE::CoreUObject::Private::Copy<FPlateCropSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FNamedLensPreset> @ 146ab2240

void __cdecl UE::CoreUObject::Private::Construct<FNamedLensPreset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 5;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  return;
}

// ConstructForTests<FNamedLensPreset> @ 146ab2290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamedLensPreset>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x42480000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 5;
  return;
}

// Destruct<FNamedLensPreset> @ 146ab22e0

void __cdecl UE::CoreUObject::Private::Destruct<FNamedLensPreset>(void *param_1)

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

// Copy<FNamedLensPreset> @ 146ab2340

bool __cdecl
UE::CoreUObject::Private::Copy<FNamedLensPreset>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      iVar2 = pFVar1[1].Data.ArrayNum;
      iVar3 = pFVar1[1].Data.ArrayMax;
      this[1].Data.AllocatorInstance.Data = pFVar1[1].Data.AllocatorInstance.Data;
      this[1].Data.ArrayNum = iVar2;
      this[1].Data.ArrayMax = iVar3;
      this[2].Data.AllocatorInstance.Data = pFVar1[2].Data.AllocatorInstance.Data;
      this[2].Data.ArrayNum = pFVar1[2].Data.ArrayNum;
      param_3 = param_3 + -1;
      this = this + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraLensSettings> @ 146ab2740

void __cdecl UE::CoreUObject::Private::Construct<FCameraLensSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 5;
  return;
}

// ConstructForTests<FCameraLensSettings> @ 146ab2780

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraLensSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 5;
  return;
}

// Destruct<FCameraLensSettings> @ 146ab27c0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraLensSettings>(void *param_1)

{
  return;
}

// Copy<FCameraLensSettings> @ 146ab27d0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraLensSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FNamedFilmbackPreset> @ 146ab2970

void __cdecl UE::CoreUObject::Private::Construct<FNamedFilmbackPreset>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x41c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3faa3d71;
  return;
}

// ConstructForTests<FNamedFilmbackPreset> @ 146ab29d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamedFilmbackPreset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x41c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3faa3d71;
  return;
}

// Destruct<FNamedFilmbackPreset> @ 146ab2a20

void __cdecl UE::CoreUObject::Private::Destruct<FNamedFilmbackPreset>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FNamedFilmbackPreset> @ 146ab2de0

bool __cdecl
UE::CoreUObject::Private::Copy<FNamedFilmbackPreset>(void *param_1,void *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined1 local_res18 [16];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar1 = (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    pFVar2 = *(FScriptContainerElement **)((longlong)param_1 + 0x10);
    if (pFVar2 != pFVar1) {
      *(FScriptContainerElement **)((longlong)param_1 + 0x10) = pFVar1;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,local_res18);
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2);
      }
    }
    *(int *)((longlong)param_1 + 0x18) = *(int *)((longlong)param_2 + 0x18);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    param_1 = (int *)((longlong)param_1 + 0x38);
    param_2 = (int *)((longlong)param_2 + 0x38);
  }
  return true;
}

// Construct<FCameraFilmbackSettings> @ 146ab3250

void __cdecl UE::CoreUObject::Private::Construct<FCameraFilmbackSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41c71eb8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3faa3d71;
  return;
}

// ConstructForTests<FCameraFilmbackSettings> @ 146ab3280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraFilmbackSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41c71eb8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3faa3d71;
  return;
}

// Destruct<FCameraFilmbackSettings> @ 146ab32b0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraFilmbackSettings>(void *param_1)

{
  return;
}

// Copy<FCameraFilmbackSettings> @ 146ab32c0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraFilmbackSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraLookatTrackingSettings> @ 146ab3740

void __cdecl UE::CoreUObject::Private::Construct<FCameraLookatTrackingSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 8) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x10) = dVar2;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x68) = *(byte *)((longlong)param_1 + 0x68) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
  return;
}

// ConstructForTests<FCameraLookatTrackingSettings> @ 146ab3750

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraLookatTrackingSettings>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 8) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x10) = dVar2;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x40),0);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x68) = *(byte *)((longlong)param_1 + 0x68) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
  return;
}

// Destruct<FCameraLookatTrackingSettings> @ 146ab3760

void __cdecl UE::CoreUObject::Private::Destruct<FCameraLookatTrackingSettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
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

// Copy<FCameraLookatTrackingSettings> @ 146ab3780

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraLookatTrackingSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte *pbVar3;
  void *pvVar4;
  
  if (param_3 != 0) {
    pbVar3 = param_1;
    pvVar4 = param_2;
    do {
      bVar2 = (*pbVar3 ^ pbVar3[(longlong)param_2 - (longlong)param_1]) & 1 ^ *pbVar3;
      *pbVar3 = bVar2;
      *pbVar3 = (bVar2 ^ pbVar3[(longlong)param_2 - (longlong)param_1]) & 2 ^ bVar2;
      *(undefined4 *)(pbVar3 + 4) = *(undefined4 *)((longlong)pvVar4 + 4);
      uVar1 = *(undefined8 *)((longlong)pvVar4 + 0x10);
      *(undefined8 *)(pbVar3 + 8) = *(undefined8 *)((longlong)pvVar4 + 8);
      *(undefined8 *)(pbVar3 + 0x10) = uVar1;
      *(undefined8 *)(pbVar3 + 0x18) = *(undefined8 *)((longlong)pvVar4 + 0x18);
      *(undefined4 *)(pbVar3 + 0x20) = *(undefined4 *)((longlong)pvVar4 + 0x20);
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(pbVar3 + 0x28),
                 (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pvVar4 + 0x28));
      uVar1 = *(undefined8 *)((longlong)pvVar4 + 0x58);
      *(undefined8 *)(pbVar3 + 0x50) = *(undefined8 *)((longlong)pvVar4 + 0x50);
      *(undefined8 *)(pbVar3 + 0x58) = uVar1;
      *(undefined8 *)(pbVar3 + 0x60) = *(undefined8 *)((longlong)pvVar4 + 0x60);
      pbVar3[0x68] = pbVar3[0x68] ^ (pbVar3[0x68] ^ *(byte *)((longlong)pvVar4 + 0x68)) & 1;
      param_3 = param_3 + -1;
      pbVar3 = pbVar3 + 0x70;
      pvVar4 = (void *)((longlong)pvVar4 + 0x70);
    } while (param_3 != 0);
  }
  return true;
}

