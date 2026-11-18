// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 20

// Construct<FSoundWaveCuePoint> @ 14452a770

void __cdecl UE::CoreUObject::Private::Construct<FSoundWaveCuePoint>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FSoundWaveCuePoint> @ 14452a7e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSoundWaveCuePoint>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FSoundWaveCuePoint> @ 14452a810

void __cdecl UE::CoreUObject::Private::Destruct<FSoundWaveCuePoint>(void *param_1)

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

// Copy<FSoundWaveCuePoint> @ 14452a830

bool __cdecl
UE::CoreUObject::Private::Copy<FSoundWaveCuePoint>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_1 + lVar1 + 8));
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x28);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAudioParameter> @ 14452af70

void __cdecl UE::CoreUObject::Private::Construct<FAudioParameter>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x81) = 0;
  *(undefined1 *)((longlong)param_1 + 0x83) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FAudioParameter> @ 14452aff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioParameter>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FAudioParameter> @ 14452b060

void __cdecl UE::CoreUObject::Private::Destruct<FAudioParameter>(void *param_1)

{
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
            (*(TSharedPtr<Audio::IProxyData,1> **)((longlong)param_1 + 0x90),
             *(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x70),*(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
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
    return;
  }
  return;
}

// Copy<FAudioParameter> @ 14452b120

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioParameter>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  TSharedPtr<Audio::IProxyData,1> *pTVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    pvVar5 = param_2;
    puVar6 = param_1;
    do {
      *puVar6 = *(undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)pvVar5 + 8);
      *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)pvVar5 + 0xc);
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)((longlong)pvVar5 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar5 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar5 + 0x18));
      }
      puVar6[3] = *(undefined8 *)((longlong)pvVar5 + 0x18);
      ::FString::operator=((FString *)(puVar6 + 4),(FString *)((longlong)pvVar5 + 0x20));
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar6 + 6),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x30));
      TArray<bool,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<bool,TSizedDefaultAllocator<32>_> *)(puVar6 + 8),
                 (TArray<bool,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x40));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar6 + 10),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x50));
      TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)(puVar6 + 0xc),
                 (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar5 + 0x60));
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar6 + 0xe),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x70));
      *(undefined1 *)(puVar6 + 0x10) = *(undefined1 *)((longlong)pvVar5 + 0x80);
      pFVar2 = (ForAnyElementType *)(puVar6 + 0x12);
      *(undefined8 *)((longlong)puVar6 + 0x84) = *(undefined8 *)((longlong)pvVar5 + 0x84);
      if (pFVar2 != (ForAnyElementType *)((longlong)pvVar5 + 0x90)) {
        DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
                  ((TSharedPtr<Audio::IProxyData,1> *)pFVar2->Data,*(int *)(puVar6 + 0x13));
        iVar3 = *(int *)((longlong)pvVar5 + 0x98);
        piVar1 = (int *)((longlong)puVar6 + 0x9c);
        pTVar4 = (TSharedPtr<Audio::IProxyData,1> *)
                 ((ForAnyElementType *)((longlong)pvVar5 + 0x90))->Data;
        *(int *)(puVar6 + 0x13) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
          ConstructItems<TSharedPtr<Audio::IProxyData,1>,TSharedPtr<Audio::IProxyData,1>,int>
                    (pFVar2->Data,pTVar4,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0xa0);
      puVar6 = puVar6 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSoundGeneratorOutput> @ 14452b670

void __cdecl UE::CoreUObject::Private::Construct<FSoundGeneratorOutput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FSoundGeneratorOutput> @ 14452b680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSoundGeneratorOutput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FSoundGeneratorOutput> @ 14452b690

void __cdecl UE::CoreUObject::Private::Destruct<FSoundGeneratorOutput>(void *param_1)

{
  return;
}

// Copy<FSoundGeneratorOutput> @ 14452b8f0

bool __cdecl
UE::CoreUObject::Private::Copy<FSoundGeneratorOutput>(void *param_1,void *param_2,int param_3)

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

// Construct<FSoundWaveCloudStreamingPlatformSettings> @ 14452bb50

void __cdecl
UE::CoreUObject::Private::Construct<FSoundWaveCloudStreamingPlatformSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FSoundWaveCloudStreamingPlatformSettings> @ 14452bb60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSoundWaveCloudStreamingPlatformSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FSoundWaveCloudStreamingPlatformSettings> @ 14452bb70

void __cdecl
UE::CoreUObject::Private::Destruct<FSoundWaveCloudStreamingPlatformSettings>(void *param_1)

{
  return;
}

// Copy<FSoundWaveCloudStreamingPlatformSettings> @ 14452bc00

bool __cdecl
UE::CoreUObject::Private::Copy<FSoundWaveCloudStreamingPlatformSettings>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FSoundWaveCloudStreamingPlatformProjectSettings> @ 14452bdc0

void __cdecl
UE::CoreUObject::Private::Construct<FSoundWaveCloudStreamingPlatformProjectSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FSoundWaveCloudStreamingPlatformProjectSettings> @ 14452bdd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSoundWaveCloudStreamingPlatformProjectSettings>
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FSoundWaveCloudStreamingPlatformProjectSettings> @ 14452bde0

void __cdecl
UE::CoreUObject::Private::Destruct<FSoundWaveCloudStreamingPlatformProjectSettings>(void *param_1)

{
  return;
}

// Copy<FSoundWaveCloudStreamingPlatformProjectSettings> @ 14452bea0

bool __cdecl
UE::CoreUObject::Private::Copy<FSoundWaveCloudStreamingPlatformProjectSettings>
          (void *param_1,void *param_2,int param_3)

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

