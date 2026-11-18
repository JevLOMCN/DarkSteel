// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 49

// Construct<FMetaSoundQualitySettings> @ 14b2c4fb0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundQualitySettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMetaSoundQualitySettings> @ 14b2c4fe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundQualitySettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMetaSoundQualitySettings> @ 14b2c5000

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundQualitySettings>(void *param_1)

{
  return;
}

// Copy<FMetaSoundQualitySettings> @ 14b2c5270

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundQualitySettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FMetaSoundAsyncAssetDependencies> @ 14b2c5c10

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundAsyncAssetDependencies>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMetaSoundAsyncAssetDependencies> @ 14b2c5c40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundAsyncAssetDependencies>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMetaSoundAsyncAssetDependencies> @ 14b2c5ea0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundAsyncAssetDependencies>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28));
  DestructItems<FSoftObjectPath,int>
            (*(FSoftObjectPath **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FMetaSoundAsyncAssetDependencies> @ 14b2c6130

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundAsyncAssetDependencies>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar5 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar5 + 8);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
                 (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar5 + 0x10));
      lVar2 = *(longlong *)((longlong)param_1 + lVar5 + 0x28);
      uVar3 = *(undefined8 *)((longlong)param_1 + lVar5 + 0x20);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar3;
      *(longlong *)((longlong)param_1 + 0x28) = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundAssetDirectory> @ 14b2c86e0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundAssetDirectory>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetaSoundAssetDirectory> @ 14b2c8750

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundAssetDirectory>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetaSoundAssetDirectory> @ 14b2c8810

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundAssetDirectory>(void *param_1)

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

// Copy<FMetaSoundAssetDirectory> @ 14b2c8b70

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundAssetDirectory>(void *param_1,void *param_2,int param_3)

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

// Construct<FMetaSoundPageSettings> @ 14b2ca2e0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundPageSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(FGuid *)param_1 = Metasound::Frontend::DefaultPageID;
  ::FName::FName((FName *)((longlong)param_1 + 0x10),L"Default");
  return;
}

// ConstructForTests<FMetaSoundPageSettings> @ 14b2ca390

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundPageSettings>(void *param_1)

{
  *(FGuid *)param_1 = Metasound::Frontend::DefaultPageID;
  ::FName::FName((FName *)((longlong)param_1 + 0x10),L"Default");
  return;
}

// Destruct<FMetaSoundPageSettings> @ 14b2ca4a0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundPageSettings>(void *param_1)

{
  return;
}

// Copy<FMetaSoundPageSettings> @ 14b2ca8c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundPageSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDefaultMetaSoundAssetAutoUpdateSettings> @ 14b2ce170

void __cdecl
UE::CoreUObject::Private::Construct<FDefaultMetaSoundAssetAutoUpdateSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDefaultMetaSoundAssetAutoUpdateSettings> @ 14b2ce190

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDefaultMetaSoundAssetAutoUpdateSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FDefaultMetaSoundAssetAutoUpdateSettings> @ 14b2ce1b0

void __cdecl
UE::CoreUObject::Private::Destruct<FDefaultMetaSoundAssetAutoUpdateSettings>(void *param_1)

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

// Copy<FDefaultMetaSoundAssetAutoUpdateSettings> @ 14b2ce480

bool __cdecl
UE::CoreUObject::Private::Copy<FDefaultMetaSoundAssetAutoUpdateSettings>
          (void *param_1,void *param_2,int param_3)

{
  FSoftObjectPath *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FSoftObjectPath::operator=
                (this,(FSoftObjectPath *)(((longlong)param_2 - (longlong)param_1) + (longlong)this))
      ;
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundOutput> @ 14b2d3bd0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundOutput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetaSoundOutput> @ 14b2d3c10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundOutput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetaSoundOutput> @ 14b2d3cb0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundOutput>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b2d3cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Copy<FMetaSoundOutput> @ 14b2d3fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundOutput>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *local_res8;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if (puVar3 != puVar1) {
        *puVar3 = *puVar1;
        plVar2 = (longlong *)puVar1[1];
        if (plVar2 != (longlong *)0x0) {
          plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_res8);
          plVar4 = puVar3 + 1;
          if (plVar4 != plVar2) {
            puVar1 = (undefined8 *)*plVar4;
            *plVar4 = *plVar2;
            *plVar2 = 0;
            if (puVar1 != (undefined8 *)0x0) {
              (**(code **)*puVar1)(puVar1,1);
            }
          }
          if (local_res8 != (undefined8 *)0x0) {
            (**(code **)*local_res8)(local_res8,1);
          }
        }
      }
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundBuilderOptions> @ 14b2ed870

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundBuilderOptions>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMetaSoundBuilderOptions> @ 14b2ed8e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundBuilderOptions>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x100;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMetaSoundBuilderOptions> @ 14b2ed9d0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundBuilderOptions>(void *param_1)

{
  return;
}

// Copy<FMetaSoundBuilderOptions> @ 14b2eddb0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundBuilderOptions>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + lVar2 + 8);
      *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_1 + lVar2 + 9);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMetaSoundNodeHandle> @ 14b2f0040

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundNodeHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMetaSoundNodeHandle> @ 14b2f0070

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMetaSoundNodeHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMetaSoundNodeHandle> @ 14b2f0310

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundNodeHandle>(void *param_1)

{
  return;
}

// Copy<FMetaSoundNodeHandle> @ 14b2f0ef0

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundNodeHandle>(void *param_1,void *param_2,int param_3)

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

// Construct<FMetaSoundBuilderNodeOutputHandle> @ 14b2f35d0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundBuilderNodeOutputHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMetaSoundBuilderNodeOutputHandle> @ 14b2f3b40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundBuilderNodeOutputHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMetaSoundBuilderNodeOutputHandle> @ 14b2f3d50

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundBuilderNodeOutputHandle>(void *param_1)

{
  return;
}

// Copy<FMetaSoundBuilderNodeOutputHandle> @ 14b2f4010

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundBuilderNodeOutputHandle>
          (void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FMetaSoundBuilderNodeOutputHandle> @ 14b2f5900

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMetaSoundBuilderNodeOutputHandle>(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  return *(int *)((longlong)param_1 + 0x1c) + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
}

// Construct<FMetaSoundBuilderNodeInputHandle> @ 14b2fb6f0

void __cdecl UE::CoreUObject::Private::Construct<FMetaSoundBuilderNodeInputHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMetaSoundBuilderNodeInputHandle> @ 14b2fb750

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMetaSoundBuilderNodeInputHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMetaSoundBuilderNodeInputHandle> @ 14b2fb7d0

void __cdecl UE::CoreUObject::Private::Destruct<FMetaSoundBuilderNodeInputHandle>(void *param_1)

{
  return;
}

// Copy<FMetaSoundBuilderNodeInputHandle> @ 14b2fbd60

bool __cdecl
UE::CoreUObject::Private::Copy<FMetaSoundBuilderNodeInputHandle>
          (void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FMetaSoundBuilderNodeInputHandle> @ 14b2fc330

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMetaSoundBuilderNodeInputHandle>(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  return *(int *)((longlong)param_1 + 0x1c) + -0x61c88647 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
}

// DeleterFunc<FMetaSoundQualitySettings> @ 14b30d7c0

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FMetaSoundQualitySettings>(void *param_1)

{
  ::operator_delete(param_1,0x30);
  return;
}

// DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&> @ 14b30d7d0

FMetasoundGeneratorHandle * __cdecl
UE::Core::Private::
DereferenceIfNecessary<Metasound::FMetasoundGeneratorHandle,Metasound::FMetasoundGeneratorHandle_*_&>
          (FMetasoundGeneratorHandle **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<Metasound::Frontend::IDocumentBuilderTransactionListener,Metasound::Frontend::IDocumentBuilderTransactionListener_*_&> @ 14b30d7f0

IDocumentBuilderTransactionListener * __cdecl
UE::Core::Private::
DereferenceIfNecessary<Metasound::Frontend::IDocumentBuilderTransactionListener,Metasound::Frontend::IDocumentBuilderTransactionListener_*_&>
          (IDocumentBuilderTransactionListener **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMetaSoundAssetSubsystem,UMetaSoundAssetSubsystem_*_&> @ 14b30d810

UMetaSoundAssetSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMetaSoundAssetSubsystem,UMetaSoundAssetSubsystem_*_&>
          (UMetaSoundAssetSubsystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMetaSoundBuilderBase,UMetaSoundBuilderBase_*_&> @ 14b30d830

UMetaSoundBuilderBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMetaSoundBuilderBase,UMetaSoundBuilderBase_*_&>
          (UMetaSoundBuilderBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMetaSoundSourceBuilder,UMetaSoundSourceBuilder_*_&> @ 14b30d850

UMetaSoundSourceBuilder * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMetaSoundSourceBuilder,UMetaSoundSourceBuilder_*_&>
          (UMetaSoundSourceBuilder **param_1)

{
  return *param_1;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,wchar_t_const_*> @ 1505634f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,wchar_t_const_*>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,wchar_t **param_3,wchar_t **param_4)

{
  FLogField local_38;
  undefined8 local_20;
  wchar_t **local_18;
  code *local_10;
  
  local_38.Name = (char *)0x0;
  local_38.WriteValue = FLogField::Write<wchar_t_const_*>;
  local_20 = 0;
  local_10 = FLogField::Write<wchar_t_const_*>;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

