// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 82

// Construct<FGatherTextFileExtension> @ 146b33900

void __cdecl UE::CoreUObject::Private::Construct<FGatherTextFileExtension>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FGatherTextFileExtension> @ 146b33910

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGatherTextFileExtension>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGatherTextFileExtension> @ 146b33920

void __cdecl UE::CoreUObject::Private::Destruct<FGatherTextFileExtension>(void *param_1)

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

// Copy<FGatherTextFileExtension> @ 146b33940

bool __cdecl
UE::CoreUObject::Private::Copy<FGatherTextFileExtension>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGatherTextExcludePath> @ 146b33bc0

void __cdecl UE::CoreUObject::Private::Construct<FGatherTextExcludePath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGatherTextExcludePath> @ 146b359e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGatherTextExcludePath>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGatherTextExcludePath> @ 146b35a30

void __cdecl UE::CoreUObject::Private::Destruct<FGatherTextExcludePath>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
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

// Copy<FGatherTextExcludePath> @ 146b35a90

bool __cdecl
UE::CoreUObject::Private::Copy<FGatherTextExcludePath>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      ::FString::operator=
                ((FString *)(puVar1 + 8),
                 (FString *)(puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGatherTextIncludePath> @ 146b35be0

void __cdecl UE::CoreUObject::Private::Construct<FGatherTextIncludePath>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGatherTextIncludePath> @ 146b35c00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGatherTextIncludePath>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGatherTextIncludePath> @ 146b35c20

void __cdecl UE::CoreUObject::Private::Destruct<FGatherTextIncludePath>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
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

// Copy<FGatherTextIncludePath> @ 146b35c40

bool __cdecl
UE::CoreUObject::Private::Copy<FGatherTextIncludePath>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      ::FString::operator=
                ((FString *)(puVar1 + 8),
                 (FString *)(puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGatherTextSearchDirectory> @ 146b35ca0

void __cdecl UE::CoreUObject::Private::Construct<FGatherTextSearchDirectory>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGatherTextSearchDirectory> @ 146b35cc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGatherTextSearchDirectory>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGatherTextSearchDirectory> @ 146b35ce0

void __cdecl UE::CoreUObject::Private::Destruct<FGatherTextSearchDirectory>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
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

// Copy<FGatherTextSearchDirectory> @ 146b35d00

bool __cdecl
UE::CoreUObject::Private::Copy<FGatherTextSearchDirectory>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      ::FString::operator=
                ((FString *)(puVar1 + 8),
                 (FString *)(puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLocalizationTargetSettings> @ 146b36820

void __cdecl UE::CoreUObject::Private::Construct<FLocalizationTargetSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FGuid::NewGuid((FGuid *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  FGatherTextFromTextFilesConfiguration::FGatherTextFromTextFilesConfiguration
            ((FGatherTextFromTextFilesConfiguration *)((longlong)param_1 + 0x58));
  FGatherTextFromPackagesConfiguration::FGatherTextFromPackagesConfiguration
            ((FGatherTextFromPackagesConfiguration *)((longlong)param_1 + 0x98));
  *(undefined1 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined1 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x1000000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x100;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x1a0),L"ImportedDialogue");
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  return;
}

// ConstructForTests<FLocalizationTargetSettings> @ 146b36830

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLocalizationTargetSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FGuid::NewGuid((FGuid *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  FGatherTextFromTextFilesConfiguration::FGatherTextFromTextFilesConfiguration
            ((FGatherTextFromTextFilesConfiguration *)((longlong)param_1 + 0x58));
  FGatherTextFromPackagesConfiguration::FGatherTextFromPackagesConfiguration
            ((FGatherTextFromPackagesConfiguration *)((longlong)param_1 + 0x98));
  *(undefined1 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined1 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0x1000000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x100;
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x1a0),L"ImportedDialogue");
  *(undefined1 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  return;
}

// Destruct<FLocalizationTargetSettings> @ 146b36840

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizationTargetSettings>(void *param_1)

{
  DestructItems<FCultureStatistics,int>
            (*(FCultureStatistics **)((longlong)param_1 + 0x1c0),*(int *)((longlong)param_1 + 0x1c8)
            );
  if (*(void **)((longlong)param_1 + 0x1c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c0));
  }
  if (*(void **)((longlong)param_1 + 0x1a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a0));
  }
  if (*(void **)((longlong)param_1 + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 400));
  }
  FGatherTextFromMetaDataConfiguration::~FGatherTextFromMetaDataConfiguration
            ((FGatherTextFromMetaDataConfiguration *)((longlong)param_1 + 0x108));
  FGatherTextFromPackagesConfiguration::~FGatherTextFromPackagesConfiguration
            ((FGatherTextFromPackagesConfiguration *)((longlong)param_1 + 0x98));
  FGatherTextFromTextFilesConfiguration::~FGatherTextFromTextFilesConfiguration
            ((FGatherTextFromTextFilesConfiguration *)((longlong)param_1 + 0x58));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x48),*(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FFilePath,int>
            (*(FFilePath **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLocalizationTargetSettings> @ 146b36890

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizationTargetSettings>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FString *pFVar4;
  int iVar5;
  int iVar6;
  void *_Src;
  FFilePath *pFVar7;
  FCultureStatistics *pFVar8;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    iVar5 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    iVar6 = (((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax;
    piVar1 = &(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    piVar2 = &(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum = iVar5;
    (((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax = iVar6;
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    if (piVar2 != piVar1) {
      iVar5 = *(int *)&(((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
      piVar3 = (int *)((longlong)
                       &(((FString *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data + 4);
      _Src = *(void **)piVar1;
      iVar6 = *piVar3;
      *(int *)&(((FString *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data = iVar5;
      if ((iVar5 == 0) && (iVar6 == 0)) {
        *piVar3 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar5,iVar6,(ForAnyElementType *)piVar2,iVar5,piVar3);
        if (iVar5 != 0) {
          memcpy(*(void **)piVar2,_Src,(longlong)iVar5 << 4);
        }
      }
    }
    piVar1 = &(((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum;
    piVar2 = &(((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum;
    if (piVar2 != piVar1) {
      DestructItems<FFilePath,int>
                (*(FFilePath **)piVar2,
                 *(int *)&(((FString *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data);
      iVar5 = *(int *)&(((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data;
      piVar3 = (int *)((longlong)
                       &(((FString *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data + 4);
      pFVar7 = *(FFilePath **)piVar1;
      iVar6 = *piVar3;
      *(int *)&(((FString *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data = iVar5;
      if ((iVar5 == 0) && (iVar6 == 0)) {
        *piVar3 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar5,iVar6,(ForAnyElementType *)piVar2,iVar5,piVar3);
        ConstructItems<FFilePath,FFilePath,int>(*(void **)piVar2,pFVar7,iVar5);
      }
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)
               &(((FString *)((longlong)param_1 + 0x40))->Data).ArrayNum,
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               &(((FString *)((longlong)param_2 + 0x40))->Data).ArrayNum);
    FGatherTextFromTextFilesConfiguration::operator=
              ((FGatherTextFromTextFilesConfiguration *)
               &(((FString *)((longlong)param_1 + 0x50))->Data).ArrayNum,
               (FGatherTextFromTextFilesConfiguration *)
               &(((FString *)((longlong)param_2 + 0x50))->Data).ArrayNum);
    FGatherTextFromPackagesConfiguration::operator=
              ((FGatherTextFromPackagesConfiguration *)
               &(((FString *)((longlong)param_1 + 0x90))->Data).ArrayNum,
               (FGatherTextFromPackagesConfiguration *)
               &(((FString *)((longlong)param_2 + 0x90))->Data).ArrayNum);
    FGatherTextFromMetaDataConfiguration::operator=
              ((FGatherTextFromMetaDataConfiguration *)
               &(((FString *)((longlong)param_1 + 0x100))->Data).ArrayNum,
               (FGatherTextFromMetaDataConfiguration *)
               &(((FString *)((longlong)param_2 + 0x100))->Data).ArrayNum);
    (((FString *)((longlong)param_1 + 0x180))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x180))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x180))->Data).ArrayMax =
         (((FString *)((longlong)param_2 + 0x180))->Data).ArrayMax;
    ::FString::operator=((FString *)((longlong)param_1 + 400),(FString *)((longlong)param_2 + 400));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x1a0),(FString *)((longlong)param_2 + 0x1a0));
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x1b0))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x1b0))->Data).AllocatorInstance.Data;
    pFVar4 = (FString *)((longlong)param_1 + 0x1c0);
    (((FString *)((longlong)param_1 + 0x1b0))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x1b0))->Data).ArrayNum;
    if (pFVar4 != (FString *)((longlong)param_2 + 0x1c0)) {
      DestructItems<FCultureStatistics,int>
                ((FCultureStatistics *)(pFVar4->Data).AllocatorInstance.Data,
                 (((FString *)((longlong)param_1 + 0x1c0))->Data).ArrayNum);
      iVar5 = (((FString *)((longlong)param_2 + 0x1c0))->Data).ArrayNum;
      piVar1 = &(((FString *)((longlong)param_1 + 0x1c0))->Data).ArrayMax;
      pFVar8 = (FCultureStatistics *)
               (((FString *)((longlong)param_2 + 0x1c0))->Data).AllocatorInstance.Data;
      iVar6 = *piVar1;
      (((FString *)((longlong)param_1 + 0x1c0))->Data).ArrayNum = iVar5;
      if ((iVar5 == 0) && (iVar6 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar5,iVar6,(ForAnyElementType *)pFVar4,iVar5,piVar1);
        ConstructItems<FCultureStatistics,FCultureStatistics,int>
                  ((pFVar4->Data).AllocatorInstance.Data,pFVar8,iVar5);
      }
    }
    param_1 = (FString *)((longlong)param_1 + 0x1d0);
    param_2 = (FString *)((longlong)param_2 + 0x1d0);
  }
  return true;
}

// Construct<FCultureStatistics> @ 146b36cd0

void __cdecl UE::CoreUObject::Private::Construct<FCultureStatistics>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FCultureStatistics> @ 146b36cf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCultureStatistics>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FCultureStatistics> @ 146b36d10

void __cdecl UE::CoreUObject::Private::Destruct<FCultureStatistics>(void *param_1)

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

// Copy<FCultureStatistics> @ 146b36d30

bool __cdecl
UE::CoreUObject::Private::Copy<FCultureStatistics>(void *param_1,void *param_2,int param_3)

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

// Construct<FLocalizationImportDialogueSettings> @ 146b36eb0

void __cdecl UE::CoreUObject::Private::Construct<FLocalizationImportDialogueSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x10),L"ImportedDialogue");
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FLocalizationImportDialogueSettings> @ 146b36ef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizationImportDialogueSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  ::FString::FString((FString *)((longlong)param_1 + 0x10),L"ImportedDialogue");
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FLocalizationImportDialogueSettings> @ 146b36f30

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizationImportDialogueSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLocalizationImportDialogueSettings> @ 146b36f70

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizationImportDialogueSettings>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x20) =
         *(undefined1 *)&(pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FLocalizationCompilationSettings> @ 146b371a0

void __cdecl UE::CoreUObject::Private::Construct<FLocalizationCompilationSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  return;
}

// ConstructForTests<FLocalizationCompilationSettings> @ 146b371b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizationCompilationSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  return;
}

// Destruct<FLocalizationCompilationSettings> @ 146b371c0

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizationCompilationSettings>(void *param_1)

{
  return;
}

// Copy<FLocalizationCompilationSettings> @ 146b371d0

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizationCompilationSettings>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FLocalizationExportingSettings> @ 146b375c0

void __cdecl UE::CoreUObject::Private::Construct<FLocalizationExportingSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1000000;
  return;
}

// ConstructForTests<FLocalizationExportingSettings> @ 146b375d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLocalizationExportingSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1000000;
  return;
}

// Destruct<FLocalizationExportingSettings> @ 146b375e0

void __cdecl UE::CoreUObject::Private::Destruct<FLocalizationExportingSettings>(void *param_1)

{
  return;
}

// Copy<FLocalizationExportingSettings> @ 146b37770

bool __cdecl
UE::CoreUObject::Private::Copy<FLocalizationExportingSettings>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FGatherTextFromMetaDataConfiguration> @ 146b37960

void __cdecl
UE::CoreUObject::Private::Construct<FGatherTextFromMetaDataConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FGatherTextFromMetaDataConfiguration> @ 146b379b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGatherTextFromMetaDataConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FGatherTextFromMetaDataConfiguration> @ 146b37a00

void __cdecl UE::CoreUObject::Private::Destruct<FGatherTextFromMetaDataConfiguration>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x68),*(int *)((longlong)param_1 + 0x70));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
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
  DestructItems<FMetaDataKeyGatherSpecification,int>
            (*(FMetaDataKeyGatherSpecification **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FGatherTextExcludePath,int>
            (*(FGatherTextExcludePath **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FGatherTextIncludePath,int>
            (*(FGatherTextIncludePath **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10))
  ;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FGatherTextFromMetaDataConfiguration> @ 146b37a10

bool __cdecl
UE::CoreUObject::Private::Copy<FGatherTextFromMetaDataConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FMetaDataKeyGatherSpecification *pFVar4;
  void *pvVar5;
  undefined1 *puVar6;
  
  if (param_3 != 0) {
    pvVar5 = param_2;
    puVar6 = param_1;
    do {
      *puVar6 = puVar6[(longlong)param_2 - (longlong)param_1];
      TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_> *)(puVar6 + 8),
                 (TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar5 + 8));
      TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x18),
                 (TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar5 + 0x18));
      pFVar1 = (ForAnyElementType *)(puVar6 + 0x28);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar5 + 0x28)) {
        DestructItems<FMetaDataKeyGatherSpecification,int>
                  ((FMetaDataKeyGatherSpecification *)pFVar1->Data,*(int *)(puVar6 + 0x30));
        iVar3 = *(int *)((longlong)pvVar5 + 0x30);
        piVar2 = (int *)(puVar6 + 0x34);
        pFVar4 = (FMetaDataKeyGatherSpecification *)
                 ((ForAnyElementType *)((longlong)pvVar5 + 0x28))->Data;
        *(int *)(puVar6 + 0x30) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FMetaDataKeyGatherSpecification,FMetaDataKeyGatherSpecification,int>
                    (pFVar1->Data,pFVar4,iVar3);
        }
      }
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x38),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x38));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x48),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x48));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x58),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x58));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x68),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x68));
      puVar6[0x78] = *(undefined1 *)((longlong)pvVar5 + 0x78);
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0x80);
      puVar6 = puVar6 + 0x80;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaDataKeyGatherSpecification> @ 146b37b70

void __cdecl UE::CoreUObject::Private::Construct<FMetaDataKeyGatherSpecification>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMetaDataKeyGatherSpecification> @ 146b37b90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaDataKeyGatherSpecification>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMetaDataKeyGatherSpecification> @ 146b37bb0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaDataKeyGatherSpecification>(void *param_1)

{
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

// Copy<FMetaDataKeyGatherSpecification> @ 146b37c00

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaDataKeyGatherSpecification>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FUserGeneratedContentLocalizationDescriptor> @ 146b37c80

void __cdecl
UE::CoreUObject::Private::Construct<FUserGeneratedContentLocalizationDescriptor>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FUserGeneratedContentLocalizationDescriptor> @ 146b37cb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUserGeneratedContentLocalizationDescriptor>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FUserGeneratedContentLocalizationDescriptor> @ 146b37cd0

void __cdecl
UE::CoreUObject::Private::Destruct<FUserGeneratedContentLocalizationDescriptor>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FUserGeneratedContentLocalizationDescriptor> @ 146b37d20

bool __cdecl
UE::CoreUObject::Private::Copy<FUserGeneratedContentLocalizationDescriptor>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x20) =
         *(undefined1 *)&(pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FMetaDataKeyName> @ 146b37db0

void __cdecl UE::CoreUObject::Private::Construct<FMetaDataKeyName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetaDataKeyName> @ 146b37dc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaDataKeyName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetaDataKeyName> @ 146b37dd0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaDataKeyName>(void *param_1)

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

// Copy<FMetaDataKeyName> @ 146b37df0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaDataKeyName>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaDataTextKeyPattern> @ 146b37e80

void __cdecl UE::CoreUObject::Private::Construct<FMetaDataTextKeyPattern>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetaDataTextKeyPattern> @ 146b37e90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaDataTextKeyPattern>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetaDataTextKeyPattern> @ 146b37ea0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaDataTextKeyPattern>(void *param_1)

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

// Copy<FMetaDataTextKeyPattern> @ 146b37ec0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaDataTextKeyPattern>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGatherTextFromPackagesConfiguration> @ 146b37f10

void __cdecl
UE::CoreUObject::Private::Construct<FGatherTextFromPackagesConfiguration>(void *param_1)

{
  ForAnyElementType *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStackX_8 [8];
  undefined1 auStack_48 [8];
  FString FStack_40;
  
  pvVar5 = ThreadLocalStoragePointer;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::<lambda_1>::
      operator()(auStackX_8,&DefaultPackageFileExtensions);
      atexit(`FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultPackageFileExtensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1->Data = (FScriptContainerElement *)0x0;
  FVar4 = DefaultPackageFileExtensions.AllocatorInstance;
  iVar7 = DefaultPackageFileExtensions.ArrayNum;
  *(int *)((longlong)param_1 + 0x30) = iVar7;
  if (iVar7 == 0) {
    *(int *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,pFVar1,iVar7,(int *)((longlong)param_1 + 0x34));
    ConstructItems<FGatherTextFileExtension,FGatherTextFileExtension,int>
              (pFVar1->Data,(FGatherTextFileExtension *)FVar4.Data,iVar7);
  }
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  auStack_48[0] = 0;
  FStack_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_40.Data.ArrayNum = 0;
  FStack_40.Data.ArrayMax = 0;
  ::FString::operator=(&FStack_40,L"Content/L10N/*");
  if ((*(undefined1 **)((longlong)param_1 + 0x18) <= auStack_48) &&
     (auStack_48 <
      *(undefined1 **)((longlong)param_1 + 0x18) +
      (longlong)*(int *)((longlong)param_1 + 0x24) * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = *(int *)((longlong)param_1 + 0x20);
  if (iVar7 == *(int *)((longlong)param_1 + 0x24)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)((longlong)param_1 + 0x18),
                       (int *)((longlong)param_1 + 0x24));
  }
  FVar4.Data = FStack_40.Data.AllocatorInstance.Data;
  *(int *)((longlong)param_1 + 0x20) = iVar7 + 1;
  puVar2 = (undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + (longlong)iVar7 * 0x18);
  *puVar2 = auStack_48[0];
  pFVar1 = (ForAnyElementType *)(puVar2 + 8);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  lVar8 = (longlong)FStack_40.Data.ArrayNum;
  *(int *)(puVar2 + 0x10) = FStack_40.Data.ArrayNum;
  if (FStack_40.Data.ArrayNum == 0) {
    *(int *)(puVar2 + 0x14) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_40.Data.ArrayNum,0,pFVar1,FStack_40.Data.ArrayNum,(int *)(puVar2 + 0x14));
    memcpy(pFVar1->Data,FVar4.Data,lVar8 * 2);
  }
  if (FStack_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data.AllocatorInstance.Data);
  }
  return;
}

// ConstructForTests<FGatherTextFromPackagesConfiguration> @ 146b37f20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGatherTextFromPackagesConfiguration>(void *param_1)

{
  ForAnyElementType *pFVar1;
  undefined1 *puVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStackX_8 [8];
  undefined1 auStack_48 [8];
  FString FStack_40;
  
  pvVar5 = ThreadLocalStoragePointer;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::<lambda_1>::
      operator()(auStackX_8,&DefaultPackageFileExtensions);
      atexit(`FGatherTextFromPackagesConfiguration::GetDefaultPackageFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultPackageFileExtensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1->Data = (FScriptContainerElement *)0x0;
  FVar4 = DefaultPackageFileExtensions.AllocatorInstance;
  iVar7 = DefaultPackageFileExtensions.ArrayNum;
  *(int *)((longlong)param_1 + 0x30) = iVar7;
  if (iVar7 == 0) {
    *(int *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,pFVar1,iVar7,(int *)((longlong)param_1 + 0x34));
    ConstructItems<FGatherTextFileExtension,FGatherTextFileExtension,int>
              (pFVar1->Data,(FGatherTextFileExtension *)FVar4.Data,iVar7);
  }
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  auStack_48[0] = 0;
  FStack_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_40.Data.ArrayNum = 0;
  FStack_40.Data.ArrayMax = 0;
  ::FString::operator=(&FStack_40,L"Content/L10N/*");
  if ((*(undefined1 **)((longlong)param_1 + 0x18) <= auStack_48) &&
     (auStack_48 <
      *(undefined1 **)((longlong)param_1 + 0x18) +
      (longlong)*(int *)((longlong)param_1 + 0x24) * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar7 = *(int *)((longlong)param_1 + 0x20);
  if (iVar7 == *(int *)((longlong)param_1 + 0x24)) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)((longlong)param_1 + 0x18),
                       (int *)((longlong)param_1 + 0x24));
  }
  FVar4.Data = FStack_40.Data.AllocatorInstance.Data;
  *(int *)((longlong)param_1 + 0x20) = iVar7 + 1;
  puVar2 = (undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + (longlong)iVar7 * 0x18);
  *puVar2 = auStack_48[0];
  pFVar1 = (ForAnyElementType *)(puVar2 + 8);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  lVar8 = (longlong)FStack_40.Data.ArrayNum;
  *(int *)(puVar2 + 0x10) = FStack_40.Data.ArrayNum;
  if (FStack_40.Data.ArrayNum == 0) {
    *(int *)(puVar2 + 0x14) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,FStack_40.Data.ArrayNum,0,pFVar1,FStack_40.Data.ArrayNum,(int *)(puVar2 + 0x14));
    memcpy(pFVar1->Data,FVar4.Data,lVar8 * 2);
  }
  if (FStack_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data.AllocatorInstance.Data);
  }
  return;
}

// Destruct<FGatherTextFromPackagesConfiguration> @ 146b37f30

void __cdecl UE::CoreUObject::Private::Destruct<FGatherTextFromPackagesConfiguration>(void *param_1)

{
  DestructItems<FSoftClassPath,int>
            (*(FSoftClassPath **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  DestructItems<FGatherTextFileExtension,int>
            (*(FGatherTextFileExtension **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FGatherTextExcludePath,int>
            (*(FGatherTextExcludePath **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FGatherTextIncludePath,int>
            (*(FGatherTextIncludePath **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10))
  ;
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FGatherTextFromPackagesConfiguration> @ 146b37f40

bool __cdecl
UE::CoreUObject::Private::Copy<FGatherTextFromPackagesConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FSoftClassPath *pFVar3;
  void *pvVar4;
  ForAnyElementType *pFVar5;
  undefined1 *puVar6;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar6 = param_1;
    do {
      *puVar6 = puVar6[(longlong)param_2 - (longlong)param_1];
      TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_> *)(puVar6 + 8),
                 (TArray<FGatherTextIncludePath,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar4 + 8));
      TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x18),
                 (TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar4 + 0x18));
      TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x28),
                 (TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar4 + 0x28));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x38),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 0x38));
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x48),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 0x48));
      pFVar5 = (ForAnyElementType *)(puVar6 + 0x58);
      if (pFVar5 != (ForAnyElementType *)((longlong)pvVar4 + 0x58)) {
        DestructItems<FSoftClassPath,int>((FSoftClassPath *)pFVar5->Data,*(int *)(puVar6 + 0x60));
        iVar2 = *(int *)((longlong)pvVar4 + 0x60);
        piVar1 = (int *)(puVar6 + 100);
        pFVar3 = (FSoftClassPath *)((ForAnyElementType *)((longlong)pvVar4 + 0x58))->Data;
        *(int *)(puVar6 + 0x60) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          ConstructItems<FSoftClassPath,FSoftClassPath,int>(pFVar5->Data,pFVar3,iVar2);
        }
      }
      puVar6[0x68] = *(undefined1 *)((longlong)pvVar4 + 0x68);
      puVar6[0x69] = *(undefined1 *)((longlong)pvVar4 + 0x69);
      puVar6[0x6a] = *(undefined1 *)((longlong)pvVar4 + 0x6a);
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x70);
      puVar6 = puVar6 + 0x70;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGatherTextFromTextFilesConfiguration> @ 146b380a0

void __cdecl
UE::CoreUObject::Private::Construct<FGatherTextFromTextFilesConfiguration>(void *param_1)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStackX_8 [8];
  
  pvVar4 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::<lambda_1>::
      operator()(auStackX_8,&DefaultTextFileExtensions);
      atexit(`FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultTextFileExtensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1->Data = (FScriptContainerElement *)0x0;
  FVar3 = DefaultTextFileExtensions.AllocatorInstance;
  iVar6 = DefaultTextFileExtensions.ArrayNum;
  *(int *)((longlong)param_1 + 0x30) = iVar6;
  if (iVar6 == 0) {
    *(int *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,pFVar1,iVar6,(int *)((longlong)param_1 + 0x34));
    ConstructItems<FGatherTextFileExtension,FGatherTextFileExtension,int>
              (pFVar1->Data,(FGatherTextFileExtension *)FVar3.Data,iVar6);
  }
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FGatherTextFromTextFilesConfiguration> @ 146b380b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGatherTextFromTextFilesConfiguration>(void *param_1)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  void *pvVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStackX_8 [8];
  
  pvVar4 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x28);
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  lVar2 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::<lambda_1>::
      operator()(auStackX_8,&DefaultTextFileExtensions);
      atexit(`FGatherTextFromTextFilesConfiguration::GetDefaultTextFileExtensions'::__l2::
             _dynamic_atexit_destructor_for__DefaultTextFileExtensions__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1->Data = (FScriptContainerElement *)0x0;
  FVar3 = DefaultTextFileExtensions.AllocatorInstance;
  iVar6 = DefaultTextFileExtensions.ArrayNum;
  *(int *)((longlong)param_1 + 0x30) = iVar6;
  if (iVar6 == 0) {
    *(int *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,pFVar1,iVar6,(int *)((longlong)param_1 + 0x34));
    ConstructItems<FGatherTextFileExtension,FGatherTextFileExtension,int>
              (pFVar1->Data,(FGatherTextFileExtension *)FVar3.Data,iVar6);
  }
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FGatherTextFromTextFilesConfiguration> @ 146b380c0

void __cdecl
UE::CoreUObject::Private::Destruct<FGatherTextFromTextFilesConfiguration>(void *param_1)

{
  DestructItems<FGatherTextFileExtension,int>
            (*(FGatherTextFileExtension **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FGatherTextExcludePath,int>
            (*(FGatherTextExcludePath **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FGatherTextSearchDirectory,int>
            (*(FGatherTextSearchDirectory **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FGatherTextFromTextFilesConfiguration> @ 146b380d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGatherTextFromTextFilesConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  FGatherTextSearchDirectory *pFVar5;
  undefined1 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = puVar6 + ((longlong)param_2 - (longlong)param_1);
      pFVar1 = (ForAnyElementType *)(puVar6 + 8);
      *puVar6 = *puVar3;
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 8)) {
        DestructItems<FGatherTextSearchDirectory,int>
                  ((FGatherTextSearchDirectory *)pFVar1->Data,*(int *)(puVar6 + 0x10));
        iVar4 = *(int *)(puVar3 + 0x10);
        piVar2 = (int *)(puVar6 + 0x14);
        pFVar5 = (FGatherTextSearchDirectory *)((ForAnyElementType *)(puVar3 + 8))->Data;
        *(int *)(puVar6 + 0x10) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FGatherTextSearchDirectory,FGatherTextSearchDirectory,int>
                    (pFVar1->Data,pFVar5,iVar4);
        }
      }
      TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x18),
                 (TArray<FGatherTextExcludePath,TSizedDefaultAllocator<32>_> *)(puVar3 + 0x18));
      TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x28),
                 (TArray<FGatherTextFileExtension,TSizedDefaultAllocator<32>_> *)(puVar3 + 0x28));
      puVar6[0x38] = puVar3[0x38];
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 0x40;
    } while (param_3 != 0);
  }
  return true;
}

// CountRichTextTags @ 146b53440

void __cdecl
UE::TextLocalizationResourceGenerator::Private::CountRichTextTags
          (TStringView<wchar_t> *param_1,int *param_2,int *param_3)

{
  int iVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  iVar8 = 0;
  iVar6 = param_1->Size;
  bVar5 = false;
  if (0 < iVar6) {
    lVar9 = -2;
    iVar7 = -1;
    do {
      iVar10 = iVar7 + 1;
      if (((iVar10 < 0) || (iVar6 <= iVar10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      sVar2 = *(short *)(lVar9 + 2 + (longlong)param_1->DataPtr);
      if (sVar2 == 0x3c) {
        bVar5 = true;
        iVar8 = 0;
      }
      else if (bVar5) {
        if (sVar2 == 0x3e) {
          if (((iVar7 < 0) || (param_1->Size <= iVar7)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && Index < Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                 ,0x234,
                                 L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(short *)(lVar9 + (longlong)param_1->DataPtr) == 0x2f) {
            if (iVar8 == 1) {
              *param_3 = *param_3 + 1;
            }
          }
          else {
            if (iVar8 == 2) {
              if (((iVar7 + -1 < 0) || (param_1->Size <= iVar7 + -1)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index >= 0 && Index < Size",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                     ,0x234,
                                     L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                    ), bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(short *)(lVar9 + -2 + (longlong)param_1->DataPtr) == 0x62) {
                if (((iVar7 < 0) || (param_1->Size <= iVar7)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index >= 0 && Index < Size",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                       ,0x234,
                                       L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (*(short *)(lVar9 + (longlong)param_1->DataPtr) == 0x72) goto LAB_146b535df;
              }
            }
            *param_2 = *param_2 + 1;
          }
LAB_146b535df:
          bVar5 = false;
        }
        iVar8 = iVar8 + 1;
      }
      iVar6 = param_1->Size;
      iVar1 = iVar7 + 2;
      lVar9 = lVar9 + 2;
      iVar7 = iVar10;
    } while (iVar1 < iVar6);
  }
  return;
}

// MakeStringValue @ 146b7fdb0

GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> * __cdecl
UE::Json::MakeStringValue
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
           *__return_storage_ptr__,TStringView<wchar_t> *param_1,FAllocatorImpl *param_2)

{
  wchar_t **ppwVar1;
  uint uVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar6;
  wchar_t *_Src;
  
  pwVar3 = param_1->DataPtr;
  uVar2 = param_1->Size;
  _Src = L"";
  if (pwVar3 != (wchar_t *)0x0) {
    _Src = pwVar3;
  }
  (__return_storage_ptr__->data_).n = (Number)0x0;
  (__return_storage_ptr__->data_).s.str = (wchar_t *)0x0;
  if ((pwVar3 == (wchar_t *)0x0) && (uVar2 != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("str != 0 || len == 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x1a1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pGVar6 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               (*pcVar4)();
      return pGVar6;
    }
  }
  if (uVar2 < 7) {
    (__return_storage_ptr__->data_).f.flags = 0x1c05;
    (__return_storage_ptr__->data_).ss.str[6] = L'\x06' - (short)uVar2;
    pGVar6 = __return_storage_ptr__;
  }
  else {
    (__return_storage_ptr__->data_).f.flags = 0xc05;
    (__return_storage_ptr__->data_).s.length = uVar2;
    pGVar6 = FMemory::Malloc((ulonglong)(uVar2 + 1) * 2,0);
    ppwVar1 = &(__return_storage_ptr__->data_).s.str;
    *ppwVar1 = (wchar_t *)((ulonglong)*ppwVar1 & 0xffff000000000000);
    ppwVar1 = &(__return_storage_ptr__->data_).s.str;
    *ppwVar1 = (wchar_t *)((ulonglong)*ppwVar1 | (ulonglong)pGVar6);
  }
  memcpy(pGVar6,_Src,(ulonglong)uVar2 * 2);
  *(undefined2 *)((longlong)&pGVar6->data_ + (ulonglong)uVar2 * 2) = 0;
  return __return_storage_ptr__;
}

// ValidateRichTextTags @ 146b91c10

bool __cdecl
UE::TextLocalizationResourceGenerator::Private::ValidateRichTextTags
          (TStringView<wchar_t> *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  int iVar2;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = 0;
  local_res20[0] = 0;
  CountRichTextTags(param_2,local_res18,local_res20);
  iVar2 = local_res20[0];
  iVar1 = local_res18[0];
  if (local_res18[0] != local_res20[0]) {
    local_res18[0] = 0;
    local_res20[0] = 0;
    CountRichTextTags(param_1,local_res18,local_res20);
    if ((local_res18[0] != iVar1) || (local_res20[0] != iVar2)) {
      return false;
    }
  }
  return true;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f8df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[3]> *param_3,int *param_4)

{
  FLogField local_28;
  
  local_28.Name = *param_3->Name;
  local_28.WriteValue = FLogField::Write<int>;
  local_28.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f8e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[5]> *param_3,FString *param_4,
          TLogFieldName<char_const_(&)[6]> *param_5,FString *param_6,
          TLogFieldName<char_const_(&)[3]> *param_7,int *param_8)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  char (*local_50) [6];
  FString *local_48;
  code *local_40;
  char (*local_38) [3];
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.Name = *param_3->Name;
  local_68.WriteValue = FLogField::Write<FString>;
  local_40 = FLogField::Write<FString>;
  local_50 = param_5->Name;
  local_48 = param_6;
  local_38 = param_7->Name;
  local_30 = param_8;
  local_28 = FLogField::Write<int>;
  local_68.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[21]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f8ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[21]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[5]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[9]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[13]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[7]> *param_9,wchar_t **param_10,
          TLogFieldName<char_const_(&)[15]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[5]> *param_13,wchar_t **param_14,
          TLogFieldName<char_const_(&)[13]> *param_15,wchar_t **param_16,
          TLogFieldName<char_const_(&)[17]> *param_17,wchar_t **param_18,
          TLogFieldName<char_const_(&)[13]> *param_19,wchar_t **param_20,
          TLogFieldName<char_const_(&)[21]> *param_21,wchar_t **param_22,
          TLogFieldName<char_const_(&)[3]> *param_23,int *param_24)

{
  undefined1 auStack_148 [32];
  FLogField local_128;
  char (*local_110) [9];
  wchar_t **local_108;
  code *local_100;
  char (*local_f8) [13];
  wchar_t **local_f0;
  code *local_e8;
  char (*local_e0) [7];
  wchar_t **local_d8;
  code *local_d0;
  char (*local_c8) [15];
  wchar_t **local_c0;
  code *local_b8;
  char (*local_b0) [5];
  wchar_t **local_a8;
  code *local_a0;
  char (*local_98) [13];
  wchar_t **local_90;
  code *local_88;
  char (*local_80) [17];
  wchar_t **local_78;
  code *local_70;
  char (*local_68) [13];
  wchar_t **local_60;
  code *local_58;
  char (*local_50) [21];
  wchar_t **local_48;
  code *local_40;
  char (*local_38) [3];
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.Name = *param_3->Name;
  local_128.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_100 = FLogField::Write<wchar_t_const_*>;
  local_110 = param_5->Name;
  local_108 = param_6;
  local_e8 = FLogField::Write<wchar_t_const_*>;
  local_d0 = FLogField::Write<wchar_t_const_*>;
  local_f8 = param_7->Name;
  local_f0 = param_8;
  local_b8 = FLogField::Write<wchar_t_const_*>;
  local_a0 = FLogField::Write<wchar_t_const_*>;
  local_e0 = param_9->Name;
  local_d8 = param_10;
  local_88 = FLogField::Write<wchar_t_const_*>;
  local_70 = FLogField::Write<wchar_t_const_*>;
  local_c8 = param_11->Name;
  local_c0 = param_12;
  local_58 = FLogField::Write<wchar_t_const_*>;
  local_40 = FLogField::Write<wchar_t_const_*>;
  local_b0 = param_13->Name;
  local_a8 = param_14;
  local_98 = param_15->Name;
  local_90 = param_16;
  local_80 = param_17->Name;
  local_78 = param_18;
  local_68 = param_19->Name;
  local_60 = param_20;
  local_50 = param_21->Name;
  local_48 = param_22;
  local_38 = param_23->Name;
  local_30 = param_24;
  local_28 = FLogField::Write<int>;
  local_128.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_128,0xb);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[5]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[13]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[7]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[15]> *param_9,wchar_t **param_10,
          TLogFieldName<char_const_(&)[5]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[13]> *param_13,wchar_t **param_14,
          TLogFieldName<char_const_(&)[3]> *param_15,int *param_16)

{
  undefined1 auStack_e8 [32];
  FLogField local_c8;
  char (*local_b0) [13];
  wchar_t **local_a8;
  code *local_a0;
  char (*local_98) [7];
  wchar_t **local_90;
  code *local_88;
  char (*local_80) [15];
  wchar_t **local_78;
  code *local_70;
  char (*local_68) [5];
  wchar_t **local_60;
  code *local_58;
  char (*local_50) [13];
  wchar_t **local_48;
  code *local_40;
  char (*local_38) [3];
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.Name = *param_3->Name;
  local_c8.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_a0 = FLogField::Write<wchar_t_const_*>;
  local_b0 = param_5->Name;
  local_a8 = param_6;
  local_88 = FLogField::Write<wchar_t_const_*>;
  local_70 = FLogField::Write<wchar_t_const_*>;
  local_98 = param_7->Name;
  local_90 = param_8;
  local_58 = FLogField::Write<wchar_t_const_*>;
  local_40 = FLogField::Write<wchar_t_const_*>;
  local_80 = param_9->Name;
  local_78 = param_10;
  local_68 = param_11->Name;
  local_60 = param_12;
  local_50 = param_13->Name;
  local_48 = param_14;
  local_38 = param_15->Name;
  local_30 = param_16;
  local_28 = FLogField::Write<int>;
  local_c8.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_c8,7);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,FString_const_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[6]> *param_3,FString *param_4,
          TLogFieldName<char_const_(&)[3]> *param_5,int *param_6)

{
  FLogField local_38;
  char (*local_20) [3];
  int *local_18;
  code *local_10;
  
  local_38.Name = *param_3->Name;
  local_38.WriteValue = FLogField::Write<FString>;
  local_20 = param_5->Name;
  local_18 = param_6;
  local_10 = FLogField::Write<int>;
  local_38.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f91e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[6]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[3]> *param_5,int *param_6)

{
  FLogField local_38;
  char (*local_20) [3];
  int *local_18;
  code *local_10;
  
  local_38.Name = *param_3->Name;
  local_38.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_20 = param_5->Name;
  local_18 = param_6;
  local_10 = FLogField::Write<int>;
  local_38.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[7]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[3]> *param_5,int *param_6)

{
  FLogField local_38;
  char (*local_20) [3];
  int *local_18;
  code *local_10;
  
  local_38.Name = *param_3->Name;
  local_38.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_20 = param_5->Name;
  local_18 = param_6;
  local_10 = FLogField::Write<int>;
  local_38.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f92a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[7]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[12]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[3]> *param_7,int *param_8)

{
  undefined1 auStack_88 [32];
  FLogField local_68;
  char (*local_50) [12];
  wchar_t **local_48;
  code *local_40;
  char (*local_38) [3];
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.Name = *param_3->Name;
  local_68.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_40 = FLogField::Write<wchar_t_const_*>;
  local_50 = param_5->Name;
  local_48 = param_6;
  local_38 = param_7->Name;
  local_30 = param_8;
  local_28 = FLogField::Write<int>;
  local_68.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_68,3);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[9]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[5]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[13]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[7]> *param_9,wchar_t **param_10,
          TLogFieldName<char_const_(&)[15]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[5]> *param_13,wchar_t **param_14,
          TLogFieldName<char_const_(&)[13]> *param_15,wchar_t **param_16,
          TLogFieldName<char_const_(&)[3]> *param_17,int *param_18)

{
  undefined1 auStack_f8 [32];
  FLogField local_d8;
  char (*local_c0) [5];
  wchar_t **local_b8;
  code *local_b0;
  char (*local_a8) [13];
  wchar_t **local_a0;
  code *local_98;
  char (*local_90) [7];
  wchar_t **local_88;
  code *local_80;
  char (*local_78) [15];
  wchar_t **local_70;
  code *local_68;
  char (*local_60) [5];
  wchar_t **local_58;
  code *local_50;
  char (*local_48) [13];
  wchar_t **local_40;
  code *local_38;
  char (*local_30) [3];
  int *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.Name = *param_3->Name;
  local_d8.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_b0 = FLogField::Write<wchar_t_const_*>;
  local_c0 = param_5->Name;
  local_b8 = param_6;
  local_98 = FLogField::Write<wchar_t_const_*>;
  local_80 = FLogField::Write<wchar_t_const_*>;
  local_a8 = param_7->Name;
  local_a0 = param_8;
  local_68 = FLogField::Write<wchar_t_const_*>;
  local_50 = FLogField::Write<wchar_t_const_*>;
  local_90 = param_9->Name;
  local_88 = param_10;
  local_38 = FLogField::Write<wchar_t_const_*>;
  local_78 = param_11->Name;
  local_70 = param_12;
  local_60 = param_13->Name;
  local_58 = param_14;
  local_48 = param_15->Name;
  local_40 = param_16;
  local_30 = param_17->Name;
  local_28 = param_18;
  local_20 = FLogField::Write<int>;
  local_d8.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_d8,8);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[9]> *param_3,FString *param_4,
          TLogFieldName<char_const_(&)[12]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[13]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[7]> *param_9,wchar_t **param_10,
          TLogFieldName<char_const_(&)[5]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[3]> *param_13,int *param_14)

{
  undefined1 auStack_c8 [32];
  FLogField local_a8;
  char (*local_90) [12];
  wchar_t **local_88;
  code *local_80;
  char (*local_78) [13];
  wchar_t **local_70;
  code *local_68;
  char (*local_60) [7];
  wchar_t **local_58;
  code *local_50;
  char (*local_48) [5];
  wchar_t **local_40;
  code *local_38;
  char (*local_30) [3];
  int *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.Name = *param_3->Name;
  local_a8.WriteValue = FLogField::Write<FString>;
  local_90 = param_5->Name;
  local_88 = param_6;
  local_80 = FLogField::Write<wchar_t_const_*>;
  local_68 = FLogField::Write<wchar_t_const_*>;
  local_78 = param_7->Name;
  local_70 = param_8;
  local_50 = FLogField::Write<wchar_t_const_*>;
  local_38 = FLogField::Write<wchar_t_const_*>;
  local_60 = param_9->Name;
  local_58 = param_10;
  local_48 = param_11->Name;
  local_40 = param_12;
  local_30 = param_13->Name;
  local_28 = param_14;
  local_20 = FLogField::Write<int>;
  local_a8.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_a8,6);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[6]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[9]> *param_3,FString *param_4,
          TLogFieldName<char_const_(&)[12]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[13]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[7]> *param_9,wchar_t **param_10,
          TLogFieldName<char_const_(&)[5]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[6]> *param_13,wchar_t **param_14,
          TLogFieldName<char_const_(&)[3]> *param_15,int *param_16)

{
  undefined1 auStack_e8 [32];
  FLogField local_c8;
  char (*local_b0) [12];
  wchar_t **local_a8;
  code *local_a0;
  char (*local_98) [13];
  wchar_t **local_90;
  code *local_88;
  char (*local_80) [7];
  wchar_t **local_78;
  code *local_70;
  char (*local_68) [5];
  wchar_t **local_60;
  code *local_58;
  char (*local_50) [6];
  wchar_t **local_48;
  code *local_40;
  char (*local_38) [3];
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.Name = *param_3->Name;
  local_c8.WriteValue = FLogField::Write<FString>;
  local_a0 = FLogField::Write<wchar_t_const_*>;
  local_88 = FLogField::Write<wchar_t_const_*>;
  local_b0 = param_5->Name;
  local_a8 = param_6;
  local_70 = FLogField::Write<wchar_t_const_*>;
  local_58 = FLogField::Write<wchar_t_const_*>;
  local_98 = param_7->Name;
  local_90 = param_8;
  local_40 = FLogField::Write<wchar_t_const_*>;
  local_80 = param_9->Name;
  local_78 = param_10;
  local_68 = param_11->Name;
  local_60 = param_12;
  local_50 = param_13->Name;
  local_48 = param_14;
  local_38 = param_15->Name;
  local_30 = param_16;
  local_28 = FLogField::Write<int>;
  local_c8.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_c8,7);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f96a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[12]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[3]> *param_5,int *param_6)

{
  FLogField local_38;
  char (*local_20) [3];
  int *local_18;
  code *local_10;
  
  local_38.Name = *param_3->Name;
  local_38.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_20 = param_5->Name;
  local_18 = param_6;
  local_10 = FLogField::Write<int>;
  local_38.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[16]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[16]>,FString,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[12]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[13]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[7]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[16]> *param_9,FString *param_10,
          TLogFieldName<char_const_(&)[5]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[3]> *param_13,int *param_14)

{
  undefined1 auStack_c8 [32];
  FLogField local_a8;
  char (*local_90) [13];
  wchar_t **local_88;
  code *local_80;
  char (*local_78) [7];
  wchar_t **local_70;
  code *local_68;
  char (*local_60) [16];
  FString *local_58;
  code *local_50;
  char (*local_48) [5];
  wchar_t **local_40;
  code *local_38;
  char (*local_30) [3];
  int *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8.Name = *param_3->Name;
  local_a8.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_90 = param_5->Name;
  local_88 = param_6;
  local_80 = FLogField::Write<wchar_t_const_*>;
  local_68 = FLogField::Write<wchar_t_const_*>;
  local_78 = param_7->Name;
  local_70 = param_8;
  local_38 = FLogField::Write<wchar_t_const_*>;
  local_60 = param_9->Name;
  local_58 = param_10;
  local_50 = FLogField::Write<FString>;
  local_48 = param_11->Name;
  local_40 = param_12;
  local_30 = param_13->Name;
  local_28 = param_14;
  local_20 = FLogField::Write<int>;
  local_a8.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_a8,6);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[21]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[21]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[13]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[7]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[15]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[5]> *param_9,wchar_t **param_10,
          TLogFieldName<char_const_(&)[13]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[17]> *param_13,wchar_t **param_14,
          TLogFieldName<char_const_(&)[13]> *param_15,wchar_t **param_16,
          TLogFieldName<char_const_(&)[21]> *param_17,wchar_t **param_18,
          TLogFieldName<char_const_(&)[3]> *param_19,int *param_20)

{
  undefined1 auStack_118 [32];
  FLogField local_f8;
  char (*local_e0) [7];
  wchar_t **local_d8;
  code *local_d0;
  char (*local_c8) [15];
  wchar_t **local_c0;
  code *local_b8;
  char (*local_b0) [5];
  wchar_t **local_a8;
  code *local_a0;
  char (*local_98) [13];
  wchar_t **local_90;
  code *local_88;
  char (*local_80) [17];
  wchar_t **local_78;
  code *local_70;
  char (*local_68) [13];
  wchar_t **local_60;
  code *local_58;
  char (*local_50) [21];
  wchar_t **local_48;
  code *local_40;
  char (*local_38) [3];
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.Name = *param_3->Name;
  local_f8.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_d0 = FLogField::Write<wchar_t_const_*>;
  local_e0 = param_5->Name;
  local_d8 = param_6;
  local_b8 = FLogField::Write<wchar_t_const_*>;
  local_a0 = FLogField::Write<wchar_t_const_*>;
  local_c8 = param_7->Name;
  local_c0 = param_8;
  local_88 = FLogField::Write<wchar_t_const_*>;
  local_70 = FLogField::Write<wchar_t_const_*>;
  local_b0 = param_9->Name;
  local_a8 = param_10;
  local_58 = FLogField::Write<wchar_t_const_*>;
  local_40 = FLogField::Write<wchar_t_const_*>;
  local_98 = param_11->Name;
  local_90 = param_12;
  local_80 = param_13->Name;
  local_78 = param_14;
  local_68 = param_15->Name;
  local_60 = param_16;
  local_50 = param_17->Name;
  local_48 = param_18;
  local_38 = param_19->Name;
  local_30 = param_20;
  local_28 = FLogField::Write<int>;
  local_f8.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_f8,9);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&> @ 1504f9970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,
          TLogFieldName<char_const_(&)[13]> *param_3,wchar_t **param_4,
          TLogFieldName<char_const_(&)[7]> *param_5,wchar_t **param_6,
          TLogFieldName<char_const_(&)[15]> *param_7,wchar_t **param_8,
          TLogFieldName<char_const_(&)[5]> *param_9,wchar_t **param_10,
          TLogFieldName<char_const_(&)[13]> *param_11,wchar_t **param_12,
          TLogFieldName<char_const_(&)[12]> *param_13,wchar_t **param_14,
          TLogFieldName<char_const_(&)[3]> *param_15,int *param_16)

{
  undefined1 auStack_e8 [32];
  FLogField local_c8;
  char (*local_b0) [7];
  wchar_t **local_a8;
  code *local_a0;
  char (*local_98) [15];
  wchar_t **local_90;
  code *local_88;
  char (*local_80) [5];
  wchar_t **local_78;
  code *local_70;
  char (*local_68) [13];
  wchar_t **local_60;
  code *local_58;
  char (*local_50) [12];
  wchar_t **local_48;
  code *local_40;
  char (*local_38) [3];
  int *local_30;
  code *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_c8.Name = *param_3->Name;
  local_c8.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_a0 = FLogField::Write<wchar_t_const_*>;
  local_b0 = param_5->Name;
  local_a8 = param_6;
  local_88 = FLogField::Write<wchar_t_const_*>;
  local_70 = FLogField::Write<wchar_t_const_*>;
  local_98 = param_7->Name;
  local_90 = param_8;
  local_58 = FLogField::Write<wchar_t_const_*>;
  local_40 = FLogField::Write<wchar_t_const_*>;
  local_80 = param_9->Name;
  local_78 = param_10;
  local_68 = param_11->Name;
  local_60 = param_12;
  local_50 = param_13->Name;
  local_48 = param_14;
  local_38 = param_15->Name;
  local_30 = param_16;
  local_28 = FLogField::Write<int>;
  local_c8.Value = param_4;
  LogWithFieldArray(param_1,param_2,&local_c8,7);
  return;
}

