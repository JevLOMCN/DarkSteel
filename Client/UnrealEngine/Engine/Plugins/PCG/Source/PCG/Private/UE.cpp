// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 974

// Construct<FPCGInteractiveToolWorkingDataContext> @ 149720210

void __cdecl
UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingDataContext>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingDataContext__6B_;
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingDataContext> @ 149720230

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingDataContext>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingDataContext__6B_;
  return;
}

// Destruct<FPCGInteractiveToolWorkingDataContext> @ 149720250

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingDataContext>(void *param_1)

{
  return;
}

// Copy<FPCGInteractiveToolWorkingDataContext> @ 149720260

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingDataContext>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGCrc> @ 149720270

void __cdecl UE::CoreUObject::Private::Construct<FPCGCrc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FPCGCrc> @ 149720280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGCrc>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FPCGCrc> @ 1497202a0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGCrc>(void *param_1)

{
  return;
}

// Copy<FPCGCrc> @ 1497202b0

bool __cdecl UE::CoreUObject::Private::Copy<FPCGCrc>(void *param_1,void *param_2,int param_3)

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

// Construct<FPCGInteractiveToolWorkingDataGeneratedResources> @ 1497203e0

void __cdecl
UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingDataGeneratedResources>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingDataGeneratedResources__6B_;
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingDataGeneratedResources> @ 149720400

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingDataGeneratedResources>
          (void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingDataGeneratedResources__6B_;
  return;
}

// Destruct<FPCGInteractiveToolWorkingDataGeneratedResources> @ 149720420

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingDataGeneratedResources>(void *param_1)

{
  return;
}

// Copy<FPCGInteractiveToolWorkingDataGeneratedResources> @ 149720430

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingDataGeneratedResources>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGProjectionParams> @ 149720660

void __cdecl UE::CoreUObject::Private::Construct<FPCGProjectionParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)param_1 = 0x101;
  ::FString::FString((FString *)((longlong)param_1 + 8),L"");
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x700;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  return;
}

// ConstructForTests<FPCGProjectionParams> @ 1497206a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGProjectionParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0x101;
  ::FString::FString((FString *)((longlong)param_1 + 8),L"");
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x700;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  return;
}

// Destruct<FPCGProjectionParams> @ 1497206e0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGProjectionParams>(void *param_1)

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

// Copy<FPCGProjectionParams> @ 149720700

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGProjectionParams>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_1 + lVar1 + 2);
      *(undefined1 *)((longlong)param_1 + 3) = *(undefined1 *)((longlong)param_1 + lVar1 + 3);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_1 + lVar1 + 8));
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x19);
      *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x1a);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPreConfiguredSettingsInfo> @ 1497208f0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPreConfiguredSettingsInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  FText::FText((FText *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FPCGPreConfiguredSettingsInfo> @ 149720920

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGPreConfiguredSettingsInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  FText::FText((FText *)((longlong)param_1 + 8));
  return;
}

// Destruct<FPCGPreConfiguredSettingsInfo> @ 149720940

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPreConfiguredSettingsInfo>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014972094c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Copy<FPCGPreConfiguredSettingsInfo> @ 149720960

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPreConfiguredSettingsInfo>
          (void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      plVar1 = *(longlong **)((longlong)param_1 + lVar3 + 8);
      plVar2 = *(longlong **)((longlong)param_1 + 8);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 8) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPreconfiguredInfo> @ 149720a00

void __cdecl UE::CoreUObject::Private::Construct<FPCGPreconfiguredInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  FText::FText((FText *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FPCGPreconfiguredInfo> @ 149720a30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPreconfiguredInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  FText::FText((FText *)((longlong)param_1 + 8));
  return;
}

// Destruct<FPCGPreconfiguredInfo> @ 149720a50

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPreconfiguredInfo>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149720a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Copy<FPCGPreconfiguredInfo> @ 149720a70

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPreconfiguredInfo>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      plVar1 = *(longlong **)((longlong)param_1 + lVar3 + 8);
      plVar2 = *(longlong **)((longlong)param_1 + 8);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 8) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGAttributeIdentifier> @ 149720b10

void __cdecl UE::CoreUObject::Private::Construct<FPCGAttributeIdentifier>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGAttributeIdentifier> @ 149720b40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGAttributeIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGAttributeIdentifier> @ 149720b60

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAttributeIdentifier>(void *param_1)

{
  return;
}

// Copy<FPCGAttributeIdentifier> @ 149720b70

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributeIdentifier>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FPCGAttributeIdentifier> @ 149720bb0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGAttributeIdentifier>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar1 = *(undefined8 *)param_1;
  uVar5 = *(byte *)((longlong)param_1 + 8) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar4 = (uVar3 - uVar5) - uVar2 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = ((int)((ulonglong)uVar1 >> 0x20) - uVar2) + uVar3 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xf;
}

// Construct<FPCGMetadataDomainID> @ 149720fd0

void __cdecl UE::CoreUObject::Private::Construct<FPCGMetadataDomainID>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  return;
}

// ConstructForTests<FPCGMetadataDomainID> @ 149720ff0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGMetadataDomainID>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGMetadataDomainID> @ 149721050

void __cdecl UE::CoreUObject::Private::Destruct<FPCGMetadataDomainID>(void *param_1)

{
  return;
}

// Copy<FPCGMetadataDomainID> @ 149721060

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGMetadataDomainID>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FPCGMetadataDomainID> @ 149721150

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGMetadataDomainID>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((longlong)param_1 + 4);
  uVar3 = *(byte *)param_1 - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar4 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 0xc;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar1 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 << 10;
  return (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xf;
}

// Construct<FPCGPerExecutionCacheBounds> @ 1497213c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPerExecutionCacheBounds>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGPerExecutionCacheBounds__6B_;
  return;
}

// ConstructForTests<FPCGPerExecutionCacheBounds> @ 1497213f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPerExecutionCacheBounds>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGPerExecutionCacheBounds__6B_;
  return;
}

// Destruct<FPCGPerExecutionCacheBounds> @ 149721410

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPerExecutionCacheBounds>(void *param_1)

{
  return;
}

// Copy<FPCGPerExecutionCacheBounds> @ 149721460

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPerExecutionCacheBounds>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar1 = (undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar3);
    uVar2 = puVar1[1];
    *(undefined8 *)((longlong)pvVar3 + 8) = *puVar1;
    *(undefined8 *)((longlong)pvVar3 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x18) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x20) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x28) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x30) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x38) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    pvVar3 = (void *)((longlong)pvVar3 + 0x40);
  }
  return true;
}

// Construct<FPCGPerExecutionCachePCGData> @ 1497217b0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPerExecutionCachePCGData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGPerExecutionCachePCGData__6B_;
  return;
}

// ConstructForTests<FPCGPerExecutionCachePCGData> @ 1497217d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGPerExecutionCachePCGData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGPerExecutionCachePCGData__6B_;
  return;
}

// Destruct<FPCGPerExecutionCachePCGData> @ 1497217f0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPerExecutionCachePCGData>(void *param_1)

{
  return;
}

// Copy<FPCGPerExecutionCachePCGData> @ 149721840

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPerExecutionCachePCGData>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x10);
  }
  return true;
}

// Construct<FPCGPerExecutionCacheData> @ 149721af0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPerExecutionCacheData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGPerExecutionCacheData__6B_;
  return;
}

// ConstructForTests<FPCGPerExecutionCacheData> @ 149721b10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPerExecutionCacheData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGPerExecutionCacheData__6B_;
  return;
}

// Destruct<FPCGPerExecutionCacheData> @ 149721b30

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPerExecutionCacheData>(void *param_1)

{
  return;
}

// Copy<FPCGPerExecutionCacheData> @ 149721b40

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPerExecutionCacheData>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGInteractiveToolWorkingData_PointArrayData> @ 149721b50

void __cdecl
UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData_PointArrayData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_PointArrayData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingData_PointArrayData> @ 149721bb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData_PointArrayData>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_PointArrayData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGInteractiveToolWorkingData_PointArrayData> @ 149721bd0

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData_PointArrayData>(void *param_1)

{
  return;
}

// Copy<FPCGInteractiveToolWorkingData_PointArrayData> @ 149721c20

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData_PointArrayData>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x18);
  }
  return true;
}

// Construct<FPCGComputeGraphs> @ 149721d90

void __cdecl UE::CoreUObject::Private::Construct<FPCGComputeGraphs>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGComputeGraphs> @ 149721da0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGComputeGraphs>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGComputeGraphs> @ 149721db0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGComputeGraphs>(void *param_1)

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

// Copy<FPCGComputeGraphs> @ 149721e50

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGComputeGraphs>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<TObjectPtr<UPCGComputeGraph>,TObjectPtr<UPCGComputeGraph>,int>
                    (pFVar6->Data,(TObjectPtr<UPCGComputeGraph> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGGraphTasks> @ 1497221d0

void __cdecl UE::CoreUObject::Private::Construct<FPCGGraphTasks>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGGraphTasks> @ 149722220

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGraphTasks>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGGraphTasks> @ 149722230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGraphTasks>(void *param_1)

{
  DestructItems<FPCGGraphTask,int>(*(FPCGGraphTask **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPCGGraphTasks> @ 1497222b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UE::CoreUObject::Private::Copy<FPCGGraphTasks>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FPCGGraphTask *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FPCGGraphTask,int>((FPCGGraphTask *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FPCGGraphTask *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x148,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FPCGGraphTask,FPCGGraphTask,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGInteractiveToolDataContainer> @ 1497223a0

void __cdecl UE::CoreUObject::Private::Construct<FPCGInteractiveToolDataContainer>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolDataContainer__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGInteractiveToolDataContainer> @ 1497223c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolDataContainer>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolDataContainer__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGInteractiveToolDataContainer> @ 1497223e0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGInteractiveToolDataContainer>(void *param_1)

{
  DestructItems<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,int>
            (*(TInstancedStruct<FPCGInteractiveToolWorkingBaseData> **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGInteractiveToolDataContainer> @ 149722420

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolDataContainer>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  void *pvVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pvVar5 = param_1;
    do {
      pFVar6 = (ForAnyElementType *)((longlong)param_2 + (longlong)pvVar5 + (8 - (longlong)param_1))
      ;
      pFVar4 = (ForAnyElementType *)((longlong)pvVar5 + 8);
      if (pFVar4 != pFVar6) {
        DestructItems<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,int>
                  ((TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)pFVar4->Data,
                   *(int *)((longlong)pvVar5 + 0x10));
        iVar2 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)pvVar5 + 0x14);
        pFVar3 = pFVar6->Data;
        *(int *)((longlong)pvVar5 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,TInstancedStruct<FPCGInteractiveToolWorkingBaseData>,int>
                    (pFVar4->Data,(TInstancedStruct<FPCGInteractiveToolWorkingBaseData> *)pFVar3,
                     iVar2);
        }
      }
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGGraphToolData> @ 149722880

void __cdecl UE::CoreUObject::Private::Construct<FPCGGraphToolData>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined ***)param_1 = &___7FPCGGraphToolData__6B_;
  FText::FText((FText *)((longlong)param_1 + 8));
  FText::FText((FText *)((longlong)param_1 + 0x18));
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  *(UClass **)((longlong)param_1 + 0x38) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FPCGGraphToolData> @ 1497228d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGraphToolData>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined ***)param_1 = &___7FPCGGraphToolData__6B_;
  FText::FText((FText *)((longlong)param_1 + 8));
  FText::FText((FText *)((longlong)param_1 + 0x18));
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  pUVar1 = Z_Construct_UClass_AActor_NoRegister();
  *(UClass **)((longlong)param_1 + 0x38) = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FPCGGraphToolData> @ 1497228e0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGraphToolData>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(longlong **)((longlong)param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x10))();
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149722923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Copy<FPCGGraphToolData> @ 149722a60

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGGraphToolData>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  UObject *pUVar3;
  void *pvVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  pvVar4 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    plVar1 = *(longlong **)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar4);
    plVar2 = *(longlong **)((longlong)pvVar4 + 8);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)pvVar4 + 8) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,local_res18);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)pvVar4 + 0x10) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x10 - (longlong)param_1));
    plVar1 = *(longlong **)((longlong)pvVar4 + (longlong)param_2 + (0x18 - (longlong)param_1));
    plVar2 = *(longlong **)((longlong)pvVar4 + 0x18);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)pvVar4 + 0x18) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,local_res8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)pvVar4 + 0x20) =
         *(undefined4 *)((longlong)pvVar4 + (longlong)param_2 + (0x20 - (longlong)param_1));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar4 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 = *(UObject **)((longlong)pvVar4 + (longlong)param_2 + (0x38 - (longlong)param_1)),
       pUVar3 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar3);
    }
    *(undefined8 *)((longlong)pvVar4 + 0x38) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar4 + 0x40) =
         *(undefined8 *)((longlong)pvVar4 + (longlong)param_2 + (0x40 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar4 + 0x48) =
         *(undefined1 *)((longlong)pvVar4 + (longlong)param_2 + (0x48 - (longlong)param_1));
    pvVar4 = (void *)((longlong)pvVar4 + 0x50);
  }
  return true;
}

// Construct<FPCGGrammarSelection> @ 149722e30

void __cdecl UE::CoreUObject::Private::Construct<FPCGGrammarSelection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x18));
  return;
}

// ConstructForTests<FPCGGrammarSelection> @ 149722e60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGrammarSelection>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x18));
  return;
}

// Destruct<FPCGGrammarSelection> @ 149722e80

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGrammarSelection>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x40),*(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGGrammarSelection> @ 149722ed0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGGrammarSelection>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x24);
      *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x2c);
      *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x34);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar1 + 0x40));
      param_2 = (void *)((longlong)param_2 + 0x58);
      *(undefined1 *)((longlong)param_1 + 0x50) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x50);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGGraphInstanceToolDataOverrides> @ 149722f90

void __cdecl UE::CoreUObject::Private::Construct<FPCGGraphInstanceToolDataOverrides>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FPCGGraphInstanceToolDataOverrides> @ 149722fd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGGraphInstanceToolDataOverrides>(void *param_1)

{
  FText::FText(param_1);
  FText::FText((FText *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FPCGGraphInstanceToolDataOverrides> @ 149723040

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGraphInstanceToolDataOverrides>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x10))();
  }
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149723068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FPCGGraphInstanceToolDataOverrides> @ 149723080

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGGraphInstanceToolDataOverrides>
          (void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      plVar1 = *(longlong **)(lVar3 + (longlong)param_1);
      plVar2 = *(longlong **)param_1;
      if (plVar2 != plVar1) {
        *(longlong **)param_1 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar3 + 8);
      plVar1 = *(longlong **)((longlong)param_1 + lVar3 + 0x10);
      plVar2 = *(longlong **)((longlong)param_1 + 0x10);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 0x10) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res8);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x20);
      param_3 = param_3 + -1;
      param_1 = (longlong *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGInteractiveToolWorkingBaseData> @ 149723240

void __cdecl UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingBaseData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingBaseData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingBaseData> @ 149723260

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingBaseData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingBaseData__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGInteractiveToolWorkingBaseData> @ 149723280

void __cdecl UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingBaseData>(void *param_1)

{
  return;
}

// Copy<FPCGInteractiveToolWorkingBaseData> @ 1497232d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingBaseData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined8 *)((longlong)pvVar1 + 8) =
           *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDeterminismSettings> @ 149723300

void __cdecl UE::CoreUObject::Private::Construct<FPCGDeterminismSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FPCGDeterminismSettings> @ 149723350

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDeterminismSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGDeterminismSettings> @ 149723370

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDeterminismSettings>(void *param_1)

{
  return;
}

// Copy<FPCGDeterminismSettings> @ 149723380

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDeterminismSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGInteractiveToolWorkingData> @ 149723520

void __cdecl UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData__6B_;
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingData> @ 149723540

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData__6B_;
  return;
}

// Destruct<FPCGInteractiveToolWorkingData> @ 149723560

void __cdecl UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData>(void *param_1)

{
  return;
}

// Copy<FPCGInteractiveToolWorkingData> @ 149723570

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined8 *)((longlong)pvVar1 + 8) =
           *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataTableRowToParamDataTestStruct> @ 1497235a0

void __cdecl
UE::CoreUObject::Private::Construct<FPCGDataTableRowToParamDataTestStruct>(void *param_1)

{
  memset(param_1,0,0xa0);
  FPCGDataTableRowToParamDataTestStruct::FPCGDataTableRowToParamDataTestStruct(param_1);
  return;
}

// ConstructForTests<FPCGDataTableRowToParamDataTestStruct> @ 1497235d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDataTableRowToParamDataTestStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  ::FString::FString((FString *)((longlong)param_1 + 8),"");
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x38))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FPCGDataTableRowToParamDataTestStruct> @ 1497235e0

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGDataTableRowToParamDataTestStruct>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGDataTableRowToParamDataTestStruct> @ 1497236e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTableRowToParamDataTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x80),
                 (FSoftObjectPath *)((longlong)param_2 + 0x80));
      param_2 = (void *)((longlong)param_2 + 0xa0);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xa0);
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UPCGBasePointData>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGBasePointData>_>,UPCGBasePointData_*> @ 149723fc0

UPCGBasePointData ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UPCGBasePointData>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGBasePointData>_>,UPCGBasePointData_*>
          (TObjectPtr<UPCGBasePointData> *param_1)

{
  return (UPCGBasePointData **)param_1;
}

// Construct<FPCGInteractiveToolWorkingData_Volume> @ 14972bd10

void __cdecl
UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData_Volume>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  FPCGInteractiveToolWorkingData_Volume::FPCGInteractiveToolWorkingData_Volume(param_1);
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingData_Volume> @ 14972bd40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData_Volume>(void *param_1)

{
  undefined8 uStackX_8;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_Volume__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x18),(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x58))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x58),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x40),(FObjectPtr)&uStackX_8);
  return;
}

// Destruct<FPCGInteractiveToolWorkingData_Volume> @ 14972bd50

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData_Volume>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPCGInteractiveToolWorkingData_Volume> @ 14972bd90

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData_Volume>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0x20),
               (FSoftObjectPath *)((longlong)param_2 + 0x20));
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0x48),
               (FSoftObjectPath *)((longlong)param_2 + 0x48));
    param_2 = (void *)((longlong)param_2 + 0x68);
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return true;
}

// Construct<FPCGInteractiveToolWorkingData_SplineSurface> @ 14972c330

void __cdecl
UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData_SplineSurface>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_Spline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x28))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_SplineSurface__6B_;
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingData_SplineSurface> @ 14972c380

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData_SplineSurface>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_Spline__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x28))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_SplineSurface__6B_;
  return;
}

// Destruct<FPCGInteractiveToolWorkingData_SplineSurface> @ 14972c3d0

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData_SplineSurface>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x28);
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

// Copy<FPCGInteractiveToolWorkingData_SplineSurface> @ 14972c3f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData_SplineSurface>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)pvVar1 + 0x18),
               (FSoftObjectPath *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x38);
  }
  return true;
}

// Construct<FPCGInteractiveToolWorkingData_Spline> @ 14972c860

void __cdecl
UE::CoreUObject::Private::Construct<FPCGInteractiveToolWorkingData_Spline>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_Spline__6B_;
  (((FUtf8String *)((longlong)param_1 + 0x28))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  return;
}

// ConstructForTests<FPCGInteractiveToolWorkingData_Spline> @ 14972c8a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInteractiveToolWorkingData_Spline>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FPCGInteractiveToolWorkingData_Spline__6B_;
  (((FUtf8String *)((longlong)param_1 + 0x28))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  return;
}

// Destruct<FPCGInteractiveToolWorkingData_Spline> @ 14972c960

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGInteractiveToolWorkingData_Spline>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x28);
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

// Copy<FPCGInteractiveToolWorkingData_Spline> @ 14972ca00

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInteractiveToolWorkingData_Spline>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0x10) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)pvVar1 + 0x18),
               (FSoftObjectPath *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x38);
  }
  return true;
}

// Construct<FPCGProceduralISMComponentDescriptor> @ 14972d8d0

void __cdecl
UE::CoreUObject::Private::Construct<FPCGProceduralISMComponentDescriptor>(void *param_1)

{
  memset(param_1,0,0xe0);
  FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor(param_1);
  *(undefined ***)param_1 = &___7FPCGProceduralISMComponentDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FPCGProceduralISMComponentDescriptor> @ 14972d920

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGProceduralISMComponentDescriptor>(void *param_1)

{
  FProceduralISMComponentDescriptor::FProceduralISMComponentDescriptor(param_1);
  *(undefined ***)param_1 = &___7FPCGProceduralISMComponentDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FPCGProceduralISMComponentDescriptor> @ 14972d960

void __cdecl UE::CoreUObject::Private::Destruct<FPCGProceduralISMComponentDescriptor>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FPCGProceduralISMComponentDescriptor> @ 14972d9c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGProceduralISMComponentDescriptor>
          (void *param_1,void *param_2,int param_3)

{
  FProceduralISMComponentDescriptor *pFVar1;
  FProceduralISMComponentDescriptor *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FProceduralISMComponentDescriptor *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FProceduralISMComponentDescriptor::operator=(this,pFVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(this + 1),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = (FProceduralISMComponentDescriptor *)&this[1].StaticMesh;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGProceduralISMComponentDescriptor> @ 14972da50

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGProceduralISMComponentDescriptor>(void *param_1)

{
  if (*(int *)((longlong)param_1 + 8) == 0) {
    (**(code **)(*(longlong *)param_1 + 8))();
    return *(uint *)((longlong)param_1 + 8);
  }
  return *(uint *)((longlong)param_1 + 8);
}

// Decay<TObjectPtr<UPCGPointData>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGPointData>_>,UPCGPointData_*> @ 14972fc60

UPCGPointData ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UPCGPointData>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGPointData>_>,UPCGPointData_*>
          (TObjectPtr<UPCGPointData> *param_1)

{
  return (UPCGPointData **)param_1;
}

// Construct<FPCGKernelAttributeTable> @ 149789160

void __cdecl UE::CoreUObject::Private::Construct<FPCGKernelAttributeTable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGKernelAttributeTable> @ 149789170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGKernelAttributeTable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGKernelAttributeTable> @ 149789180

void __cdecl UE::CoreUObject::Private::Destruct<FPCGKernelAttributeTable>(void *param_1)

{
  DestructItems<FPCGKernelAttributeKey,int>
            (*(FPCGKernelAttributeKey **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPCGKernelAttributeTable> @ 1497891c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGKernelAttributeTable>(void *param_1,void *param_2,int param_3)

{
  TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGKernelAttributeKey> @ 149789210

void __cdecl UE::CoreUObject::Private::Construct<FPCGKernelAttributeKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x18) = 3;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_
  ;
  return;
}

// ConstructForTests<FPCGKernelAttributeKey> @ 149789250

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGKernelAttributeKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 3;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x58) = 0;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_
  ;
  return;
}

// Destruct<FPCGKernelAttributeKey> @ 1497892a0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGKernelAttributeKey>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x48),*(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
    return;
  }
  return;
}

// Copy<FPCGKernelAttributeKey> @ 1497892e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGKernelAttributeKey>(void *param_1,void *param_2,int param_3)

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
    *(undefined1 *)(puVar3 + 3) =
         *(undefined1 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)(puVar3 + 5) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar3 + 0x2c) =
         *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined8 *)((longlong)puVar3 + 0x34) =
         *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined8 *)((longlong)puVar3 + 0x3c) =
         *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x3c - (longlong)param_1));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar3 + 9),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)puVar3 + (longlong)param_2 + (0x48 - (longlong)param_1)));
    puVar1 = puVar1 + 0xc;
    *(undefined1 *)(puVar3 + 0xb) =
         *(undefined1 *)((longlong)puVar3 + (longlong)param_2 + (0x58 - (longlong)param_1));
    puVar3 = puVar3 + 0xc;
  }
  return true;
}

// GetStructTypeHash<FPCGKernelAttributeKey> @ 149789450

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGKernelAttributeKey>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  uVar3 = *(byte *)((longlong)param_1 + 0x18) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar2 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// Construct<FPCGDataToDebug> @ 1497896e0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataToDebug>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FPCGDataToDebug> @ 149789730

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataToDebug>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FPCGDataToDebug> @ 149789780

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataToDebug>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  return;
}

// Copy<FPCGDataToDebug> @ 1497897c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataToDebug>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar2 + 5),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar1 + 5));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0xf;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSpawnerPrimitives> @ 149789c10

void __cdecl UE::CoreUObject::Private::Construct<FPCGSpawnerPrimitives>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  return;
}

// ConstructForTests<FPCGSpawnerPrimitives> @ 149789c50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSpawnerPrimitives>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FPCGSpawnerPrimitives> @ 149789c90

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSpawnerPrimitives>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FPCGSpawnerPrimitives> @ 149789d60

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSpawnerPrimitives>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar5 = *(undefined8 *)(lVar9 + (longlong)param_1);
      lVar6 = *(longlong *)(lVar9 + 8 + (longlong)param_1);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = uVar5;
      *(longlong *)((longlong)param_1 + 8) = lVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar9 + 0x10);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      if (pFVar2 != pFVar1) {
        iVar4 = *(int *)((longlong)param_1 + lVar9 + 0x18);
        piVar3 = (int *)((longlong)param_1 + 0x1c);
        pFVar7 = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar7,(longlong)iVar4 * 0x38);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar9 + 0x20);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x20);
      if (pFVar2 != pFVar1) {
        iVar4 = *(int *)((longlong)param_1 + lVar9 + 0x28);
        piVar3 = (int *)((longlong)param_1 + 0x2c);
        pFVar7 = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x28) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar7,(longlong)iVar4 << 2);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar9 + 0x38);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + lVar9 + 0x30);
      if (pFVar2 != pFVar1) {
        iVar4 = *(int *)((longlong)param_1 + lVar9 + 0x40);
        piVar3 = (int *)((longlong)param_1 + 0x44);
        pFVar7 = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x40) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          if (iVar4 != 0) {
            memcpy(pFVar2->Data,pFVar7,(longlong)iVar4 << 4);
          }
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_1 + lVar9 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataTypeInfoPoint> @ 14978a1a0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPoint__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoPoint> @ 14978a1c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoPoint>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPoint__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoPoint> @ 14978a1e0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoPoint>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoPoint> @ 14978a1f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoPoint>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGKernelOverridableParam> @ 14978a260

void __cdecl UE::CoreUObject::Private::Construct<FPCGKernelOverridableParam>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPCGKernelOverridableParam> @ 14978a280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGKernelOverridableParam>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPCGKernelOverridableParam> @ 14978a2a0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGKernelOverridableParam>(void *param_1)

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

// Copy<FPCGKernelOverridableParam> @ 14978a2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGKernelOverridableParam>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar1 + 8));
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x19);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGKernelLogEntry> @ 14978a4a0

void __cdecl UE::CoreUObject::Private::Construct<FPCGKernelLogEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FText::FText(param_1);
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGKernelLogEntry> @ 14978a4d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGKernelLogEntry>(void *param_1)

{
  FText::FText(param_1);
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGKernelLogEntry> @ 14978a500

void __cdecl UE::CoreUObject::Private::Destruct<FPCGKernelLogEntry>(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014978a50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FPCGKernelLogEntry> @ 14978a520

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGKernelLogEntry>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      plVar1 = *(longlong **)(lVar3 + (longlong)param_1);
      plVar2 = *(longlong **)param_1;
      if (plVar2 != plVar1) {
        *(longlong **)param_1 = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar3 + 8);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (longlong *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPointOutputRange> @ 14978a790

void __cdecl UE::CoreUObject::Private::Construct<FPCGPointOutputRange>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FPCGPointOutputRange> @ 14978a7b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPointOutputRange>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FPCGPointOutputRange> @ 14978a7d0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPointOutputRange>(void *param_1)

{
  return;
}

// Copy<FPCGPointOutputRange> @ 14978a7e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPointOutputRange>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPinDataLabels> @ 14978a970

void __cdecl UE::CoreUObject::Private::Construct<FPCGPinDataLabels>(void *param_1)

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

// ConstructForTests<FPCGPinDataLabels> @ 14978a9f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPinDataLabels>(void *param_1)

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

// Destruct<FPCGPinDataLabels> @ 14978aa20

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPinDataLabels>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FPCGPinDataLabels> @ 14978aa60

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPinDataLabels>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FName,FPCGDataLabels>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPointInputRange> @ 14978aaf0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPointInputRange>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FPCGPointInputRange> @ 14978ab10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPointInputRange>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FPCGPointInputRange> @ 14978ab30

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPointInputRange>(void *param_1)

{
  return;
}

// Copy<FPCGPointInputRange> @ 14978ab40

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPointInputRange>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataLabels> @ 14978abd0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataLabels>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGDataLabels> @ 14978ac00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataLabels>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGDataLabels> @ 14978ac10

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataLabels>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPCGDataLabels> @ 14978ac80

bool __cdecl UE::CoreUObject::Private::Copy<FPCGDataLabels>(void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataTypeInfoRawBuffer> @ 14978ad90

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoRawBuffer>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoRawBuffer__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoRawBuffer> @ 14978adb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoRawBuffer>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoRawBuffer__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoRawBuffer> @ 14978add0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoRawBuffer>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoRawBuffer> @ 14978ade0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoRawBuffer>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGKernelPin> @ 14978af70

void __cdecl UE::CoreUObject::Private::Construct<FPCGKernelPin>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FPCGKernelPin> @ 14978b040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGKernelPin>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FPCGKernelPin> @ 14978b0a0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGKernelPin>(void *param_1)

{
  return;
}

// Copy<FPCGKernelPin> @ 14978b0b0

bool __cdecl UE::CoreUObject::Private::Copy<FPCGKernelPin>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FPCGKernelPin> @ 14978b0e0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGKernelPin>(void *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 4);
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  iVar4 = uVar3 + (int)((ulonglong)uVar2 >> 0x20);
  iVar5 = iVar4 - (uint)bVar1;
  uVar7 = 0x9e3779b9U - iVar4 ^ iVar5 * 0x100;
  uVar3 = (bVar1 - uVar7) - iVar5 ^ uVar7 >> 0xd;
  uVar6 = (iVar5 - uVar3) - uVar7 ^ uVar3 >> 0xc;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 << 0x10;
  uVar3 = (uVar3 - uVar6) - uVar7 ^ uVar7 >> 5;
  uVar6 = (uVar6 - uVar3) - uVar7 ^ uVar3 >> 3;
  uVar7 = (uVar7 - uVar6) - uVar3 ^ uVar6 << 10;
  uVar6 = (uVar3 - uVar7) - uVar6 ^ uVar7 >> 0xf;
  uVar3 = *(int *)param_1 - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (-0x61c88647 - uVar3) - uVar6 ^ uVar3 << 8;
  uVar6 = (uVar6 - uVar7) - uVar3 ^ uVar7 >> 0xd;
  uVar3 = (uVar3 - uVar6) - uVar7 ^ uVar6 >> 0xc;
  uVar7 = (uVar7 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar6 = (uVar6 - uVar7) - uVar3 ^ uVar7 >> 5;
  uVar3 = (uVar3 - uVar6) - uVar7 ^ uVar6 >> 3;
  uVar7 = (uVar7 - uVar3) - uVar6 ^ uVar3 << 10;
  return (uVar6 - uVar7) - uVar3 ^ uVar7 >> 0xf;
}

// Construct<FPCGDataTypeInfoProxyForGPU> @ 14978b170

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoProxyForGPU>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoProxyForGPU__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoProxyForGPU> @ 14978b190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoProxyForGPU>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoProxyForGPU__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoProxyForGPU> @ 14978b1b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoProxyForGPU>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoProxyForGPU> @ 14978b200

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoProxyForGPU>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGCustomHLSLParsedSource> @ 14978b990

void __cdecl UE::CoreUObject::Private::Construct<FPCGCustomHLSLParsedSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGCustomHLSLParsedSource> @ 14978b9a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGCustomHLSLParsedSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGCustomHLSLParsedSource> @ 14978b9b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGCustomHLSLParsedSource>(void *param_1)

{
  DestructItems<FPCGParsedAttributeFunction,int>
            (*(FPCGParsedAttributeFunction **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPCGCustomHLSLParsedSource> @ 14978ba30

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGCustomHLSLParsedSource>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FPCGParsedAttributeFunction *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FPCGParsedAttributeFunction,int>
                  ((FPCGParsedAttributeFunction *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FPCGParsedAttributeFunction *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FPCGParsedAttributeFunction,FPCGParsedAttributeFunction,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPinPropertiesGPU> @ 14978bce0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPinPropertiesGPU>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  FPCGPinProperties::FPCGPinProperties(param_1);
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x60) = 1;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return;
}

// ConstructForTests<FPCGPinPropertiesGPU> @ 14978bd70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPinPropertiesGPU>(void *param_1)

{
  FPCGPinProperties::FPCGPinProperties(param_1);
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined2 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x60) = 1;
  *(undefined1 *)((longlong)param_1 + 100) = 1;
  return;
}

// Destruct<FPCGPinPropertiesGPU> @ 14978be10

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPinPropertiesGPU>(void *param_1)

{
  DestructItems<FPCGKernelAttributeKey,int>
            (*(FPCGKernelAttributeKey **)((longlong)param_1 + 0x68),
             *(int *)((longlong)param_1 + 0x70));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FPCGPinPropertiesGPU> @ 14978be60

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPinPropertiesGPU>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
      FPCGDataTypeIdentifier::operator=
                ((FPCGDataTypeIdentifier *)((longlong)param_1 + 0x10),
                 (FPCGDataTypeIdentifier *)((longlong)param_2 + 0x10));
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_2 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
      *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
      *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
      FPCGPinPropertiesGPUStruct::operator=
                ((FPCGPinPropertiesGPUStruct *)((longlong)param_1 + 0x30),
                 (FPCGPinPropertiesGPUStruct *)((longlong)param_2 + 0x30));
      param_2 = (void *)((longlong)param_2 + 0x78);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x78);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGPinPropertiesGPU> @ 14978bf50

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGPinPropertiesGPU>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = ::GetTypeHash((FPCGDataTypeIdentifier *)((longlong)param_1 + 0x10));
  uVar5 = ((int)((ulonglong)uVar1 >> 0x20) + uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar6 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar3 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar5 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar2 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x2b);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 0x2b) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x28);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 0x28) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 8);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 8) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x29);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 0x29) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x2a);
  uVar5 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar3 = (*(byte *)((longlong)param_1 + 0x2a) - uVar5) - iVar4 ^ uVar5 >> 0xd;
  uVar2 = (iVar4 - uVar3) - uVar5 ^ uVar3 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
}

// Construct<FPCGParsedCopyElementFunction> @ 14978bfa0

void __cdecl UE::CoreUObject::Private::Construct<FPCGParsedCopyElementFunction>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPCGParsedCopyElementFunction> @ 14978bfc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGParsedCopyElementFunction>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPCGParsedCopyElementFunction> @ 14978bfe0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGParsedCopyElementFunction>(void *param_1)

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

// Copy<FPCGParsedCopyElementFunction> @ 14978c160

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGParsedCopyElementFunction>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGParsedAttributeFunction> @ 14978ca70

void __cdecl UE::CoreUObject::Private::Construct<FPCGParsedAttributeFunction>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// ConstructForTests<FPCGParsedAttributeFunction> @ 14978cab0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGParsedAttributeFunction>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// Destruct<FPCGParsedAttributeFunction> @ 14978cae0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGParsedAttributeFunction>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
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

// Copy<FPCGParsedAttributeFunction> @ 14978cb80

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGParsedAttributeFunction>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum);
    pFVar1 = (FString *)((longlong)param_2 + 0x30);
    param_2 = (void *)((longlong)param_2 + 0x40);
    (((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum = (pFVar1->Data).ArrayNum;
    param_1 = (FString *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FPCGPinPropertiesGPUStruct> @ 14978cce0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPinPropertiesGPUStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x30) = 1;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FPCGPinPropertiesGPUStruct> @ 14978cd40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPinPropertiesGPUStruct>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0x30) = 1;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// Destruct<FPCGPinPropertiesGPUStruct> @ 14978cd90

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPinPropertiesGPUStruct>(void *param_1)

{
  DestructItems<FPCGKernelAttributeKey,int>
            (*(FPCGKernelAttributeKey **)((longlong)param_1 + 0x38),
             *(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGPinPropertiesGPUStruct> @ 14978ce20

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPinPropertiesGPUStruct>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 8));
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
      *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
      TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x38),
                 (TArray<FPCGKernelAttributeKey,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x38));
      param_2 = (void *)((longlong)param_2 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<int>_const_*>_> @ 1497d6a80

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<int>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<int>_const_*> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<int>_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<float>_const_*>_> @ 1497d6b20

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<float>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<float>_const_*> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<float>_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<double>_const_*>_> @ 1497d6bc0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<double>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<double>_const_*> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<double>_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>_> @ 1497d6c60

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>_> @ 1497d6d00

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>_> @ 1497d6da0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>_> @ 1497d6e40

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>_> @ 1497d6ee0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>_> @ 1497d6f80

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>_> @ 1497d7020

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*> *param_5,int param_6,
          int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>_> @ 1497d70c0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*> *param_5,int param_6,
          int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FName>_const_*>_> @ 1497d7160

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FName>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<FName>_const_*> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<FName>_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FString>_const_*>_> @ 1497d7200

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FString>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<FString>_const_*> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<FString>_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<__int64>_const_*>_> @ 1497d72a0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<__int64>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<__int64>_const_*> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<__int64>_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<bool>_const_*>_> @ 1497d7340

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<bool>_const_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPCGMetadataAttribute<bool>_const_*> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPCGMetadataAttribute<bool>_const_*>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<int>_const_*>_> @ 1497d73e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<int>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<int>_const_*> *param_2,int *param_3)

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
    ForElementType<FPCGMetadataAttribute<int>_const_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<float>_const_*>_> @ 1497d74b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<float>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<float>_const_*> *param_2,int *param_3
          )

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
    ForElementType<FPCGMetadataAttribute<float>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<double>_const_*>_> @ 1497d7580

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<double>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<double>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<double>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>_> @ 1497d7650

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>_>
          (ushort param_1,
          ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<UE::Math::TQuat<double>_>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>_> @ 1497d7720

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>_>
          (ushort param_1,
          ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<UE::Math::TRotator<double>_>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>_> @ 1497d77f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>_>
          (ushort param_1,
          ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<UE::Math::TTransform<double>_>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>_> @ 1497d78c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>_>
          (ushort param_1,
          ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<UE::Math::TVector2<double>_>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>_> @ 1497d7990

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>_>
          (ushort param_1,
          ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<UE::Math::TVector4<double>_>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>_> @ 1497d7a60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>_>
          (ushort param_1,
          ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<UE::Math::TVector<double>_>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>_> @ 1497d7b30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<FSoftClassPath>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>_> @ 1497d7c00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<FSoftObjectPath>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FName>_const_*>_> @ 1497d7cd0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FName>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<FName>_const_*> *param_2,int *param_3
          )

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
    ForElementType<FPCGMetadataAttribute<FName>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FString>_const_*>_> @ 1497d7da0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<FString>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<FString>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<FString>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<__int64>_const_*>_> @ 1497d7e70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<__int64>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<__int64>_const_*> *param_2,
          int *param_3)

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
    ForElementType<FPCGMetadataAttribute<__int64>_const_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<bool>_const_*>_> @ 1497d7f40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGMetadataAttribute<bool>_const_*>_>
          (ushort param_1,ForElementType<FPCGMetadataAttribute<bool>_const_*> *param_2,int *param_3)

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
    ForElementType<FPCGMetadataAttribute<bool>_const_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,double>_>_> @ 1497d8010

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,double>_>_>
          (ushort param_1,ForElementType<TTuple<int,double>_> *param_2,int *param_3)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<int,double>_>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>_> @ 1497d80d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>_>
          (ushort param_1,ForElementType<TTuple<__int64,float>_> *param_2,int *param_3)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>
    ::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>_> @ 1497d8190

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>_>
          (ushort param_1,ForElementType<PCGPointOctree::FPointRef> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGPointOctree::FPointRef>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 1497d8260

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,int param_3,ForElementType<double> *param_4,int *param_5,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_> @ 1497d8330

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TQuat<double>_> *param_4,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TQuat<double>_>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 1497d8400

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TTransform<double>_> *param_4,int *param_5,int *param_6)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 1497d84d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector4<double>_> *param_4,int *param_5,int *param_6)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1497d85a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1497d8670

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 1497d8750

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64> *param_4,int *param_5,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 1497d8820

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,ForElementType<double> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_> @ 1497d88e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TQuat<double>_> *param_3,int param_4,
          int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TQuat<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 1497d89a0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TTransform<double>_> *param_3,
          int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 1497d8a60

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector4<double>_> *param_3,
          int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1497d8b20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<double>_> *param_3,int param_4
          ,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1497d8be0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,ForElementType<FString> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 1497d8ca0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,ForElementType<__int64> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>_> @ 1497d8d60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef>_>
          (uint param_1,uint param_2,int param_3,ForElementType<PCGPointOctree::FPointRef> *param_4,
          int param_5,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGPointOctree::FPointRef>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Copy<FPCGDataTypeInfoTexture2D> @ 149852590

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoTexture2D>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoSpatial> @ 1498529a0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSpatial>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoSpatial__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoSpatial> @ 1498529c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSpatial>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoSpatial__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoSpatial> @ 149852a60

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSpatial>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoSpatial> @ 149852ab0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSpatial>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoBaseTexture2D> @ 149853210

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoBaseTexture2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoBaseTexture2D__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoBaseTexture2D> @ 1498538e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoBaseTexture2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoBaseTexture2D__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoBaseTexture2D> @ 149853980

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoBaseTexture2D>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoBaseTexture2D> @ 149853ac0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoBaseTexture2D>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeIdentifier> @ 149853c80

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeIdentifier>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  return;
}

// ConstructForTests<FPCGDataTypeIdentifier> @ 149853cb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeIdentifier>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGDataTypeIdentifier> @ 149853cd0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeIdentifier>(void *param_1)

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

// Construct<FPCGInitializeFromDataParams> @ 149853df0

void __cdecl UE::CoreUObject::Private::Construct<FPCGInitializeFromDataParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x10101;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FPCGInitializeFromDataParams> @ 149853e20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGInitializeFromDataParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x10101;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FPCGInitializeFromDataParams> @ 149853e50

void __cdecl UE::CoreUObject::Private::Destruct<FPCGInitializeFromDataParams>(void *param_1)

{
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (*(TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> **)
              ((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FPCGDataTypeIdentifier> @ 149853ea0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeIdentifier>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                    (pFVar6->Data,(FPCGDataTypeBaseId *)pFVar5,iVar3);
        }
      }
      *(undefined4 *)&pFVar6[2].Data = *(undefined4 *)&pFVar2[2].Data;
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FPCGInitializeFromDataParams> @ 149854120

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGInitializeFromDataParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
      *(undefined1 *)((longlong)puVar2 + 0x11) = *(undefined1 *)((longlong)puVar1 + 0x11);
      *(undefined1 *)((longlong)puVar2 + 0x12) = *(undefined1 *)((longlong)puVar1 + 0x12);
      *(undefined1 *)((longlong)puVar2 + 0x13) = *(undefined1 *)((longlong)puVar1 + 0x13);
      FPCGMetadataInitializeParams::operator=
                ((FPCGMetadataInitializeParams *)(puVar2 + 3),
                 (FPCGMetadataInitializeParams *)(puVar1 + 3));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FPCGDataTypeIdentifier> @ 149854200

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPCGDataTypeIdentifier>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FPCGDataTypeIdentifier::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// GetStructTypeHash<FPCGDataTypeIdentifier> @ 149854260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGDataTypeIdentifier>(void *param_1)

{
  ulonglong *puVar1;
  ForElementType<int> FVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ForElementType<int> FVar12;
  uint uVar13;
  undefined1 auStackY_d8 [32];
  undefined1 uStack_88;
  FIdentityFunctor aFStack_87 [3];
  uint uStack_84;
  undefined1 auStack_80 [8];
  ForElementType<int> FStack_78;
  uint uStack_30;
  uint uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar10 = 0;
  uStack_2c = 0x10;
  FStack_78.SecondaryData = (ForElementType<int>)0x0;
  uVar6 = *(uint *)((longlong)param_1 + 8);
  uStack_30 = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  uVar8 = uVar10;
  if (0x10 < (int)uVar6) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar6,&FStack_78,0,(int *)&uStack_2c);
    uVar8 = (ulonglong)uStack_30;
  }
  puVar11 = *(ulonglong **)param_1;
  iVar3 = *(int *)((longlong)param_1 + 8);
  puVar1 = puVar11 + iVar3;
  while( true ) {
    uVar6 = (uint)uVar8;
    if (*(int *)((longlong)param_1 + 8) != iVar3) {
      uStack_88 = 0;
      `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&uStack_88);
      uVar6 = uStack_30;
    }
    if (puVar11 == puVar1) break;
    uVar7 = ((uint)(*puVar11 >> 0x14) & 0xffff ^ (uint)(*puVar11 >> 4)) * -0x7a143595;
    uStack_84 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uStack_84 = uStack_84 >> 0x10 ^ uStack_84;
    FVar12 = (ForElementType<int>)&FStack_78;
    if (FStack_78.SecondaryData != (ForElementType<int>)0x0) {
      FVar12 = FStack_78.SecondaryData;
    }
    if ((ulonglong)FVar12 <= &uStack_84) {
      FVar12 = (ForElementType<int>)&FStack_78;
      if (FStack_78.SecondaryData != (ForElementType<int>)0x0) {
        FVar12 = FStack_78.SecondaryData;
      }
      if ((&uStack_84 < (uint *)((longlong)FVar12 + (longlong)(int)uStack_2c * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar6 = uStack_30, bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    if (uVar6 == uStack_2c) {
      uVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                        (0x404,&FStack_78,(int *)&uStack_2c);
    }
    uStack_30 = uVar6 + 1;
    FVar12 = (ForElementType<int>)&FStack_78;
    if (FStack_78.SecondaryData != (ForElementType<int>)0x0) {
      FVar12 = FStack_78.SecondaryData;
    }
    puVar11 = puVar11 + 1;
    *(uint *)((longlong)FVar12 + (longlong)(int)uVar6 * 4) = uStack_84;
    uVar8 = (ulonglong)uStack_30;
  }
  FVar12 = (ForElementType<int>)&FStack_78;
  if (FStack_78.SecondaryData != (ForElementType<int>)0x0) {
    FVar12 = FStack_78.SecondaryData;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)FVar12,uVar6,aFStack_87[0],(TLess<void> *)aFStack_87);
  uVar7 = uStack_30;
  uVar8 = (ulonglong)(int)uStack_30;
  uVar6 = *(uint *)((longlong)param_1 + 0x10);
  FVar12 = (ForElementType<int>)&FStack_78;
  if (FStack_78.SecondaryData != (ForElementType<int>)0x0) {
    FVar12 = FStack_78.SecondaryData;
  }
  FVar2 = (ForElementType<int>)((longlong)FVar12 + uVar8 * 4);
  while( true ) {
    if ((uint)uVar8 != uVar7) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_80);
      uVar8 = (ulonglong)uStack_30;
    }
    uVar9 = (uint)uVar10;
    if (FVar12 == FVar2) break;
    uVar10 = (ulonglong)(uVar9 ^ uVar9 * 0x40 + -0x61c88647 + (int)(uVar10 >> 2) + *(uint *)FVar12);
    FVar12 = (ForElementType<int>)((longlong)FVar12 + 4);
  }
  uVar9 = uVar9 - uVar6 ^ uVar6 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - uVar6 ^ uVar9 << 8;
  uVar13 = (uVar6 - uVar7) - uVar9 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 0xc;
  uVar6 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 0x10;
  uVar13 = (uVar13 - uVar6) - uVar9 ^ uVar6 >> 5;
  uVar7 = (uVar9 - uVar13) - uVar6 ^ uVar13 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar13 ^ uVar7 << 10;
  if (FStack_78.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FStack_78.SecondaryData);
  }
  return (uVar13 - uVar6) - uVar7 ^ uVar6 >> 0xf;
}

// Construct<FPCGDataTypeInfoSurface> @ 1498545d0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSurface>(void *param_1)

{
  *(undefined ***)param_1 = &FPCGDataTypeInfoSurface::_vftable_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoSurface> @ 1498545f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSurface>(void *param_1)

{
  *(undefined ***)param_1 = &FPCGDataTypeInfoSurface::_vftable_;
  return;
}

// Destruct<FPCGDataTypeInfoSurface> @ 149854610

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSurface>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoSurface> @ 1498546a0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSurface>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoResource> @ 149854850

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoResource>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoResource__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoResource> @ 149854870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoResource>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoResource__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoResource> @ 149854890

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoResource>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoResource> @ 149854920

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoResource>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoStaticMeshResource> @ 149854b50

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoStaticMeshResource>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoStaticMeshResource__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoStaticMeshResource> @ 149854b70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoStaticMeshResource>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoStaticMeshResource__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoStaticMeshResource> @ 149854b90

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoStaticMeshResource>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoStaticMeshResource> @ 149854be0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoStaticMeshResource>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoDynamicMesh> @ 149854cf0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoDynamicMesh>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoDynamicMesh__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoDynamicMesh> @ 149854d10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoDynamicMesh>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoDynamicMesh__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoDynamicMesh> @ 149854d70

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoDynamicMesh>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoDynamicMesh> @ 149854dc0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoDynamicMesh>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoOther> @ 149854ed0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoOther>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoOther__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoOther> @ 149854ef0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoOther>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoOther__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoOther> @ 149854f50

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoOther>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoOther> @ 1498550a0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoOther>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGSplineStruct> @ 149855270

void __cdecl UE::CoreUObject::Private::Construct<FPCGSplineStruct>(void *param_1)

{
  memset(param_1,0,0x1d0);
  FPCGSplineStruct::FPCGSplineStruct(param_1);
  return;
}

// ConstructForTests<FPCGSplineStruct> @ 1498552a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSplineStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(double (*) [2])param_1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined1 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined1 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 10;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  FSpline::FSpline((FSpline *)((longlong)param_1 + 0x168));
  *(undefined1 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0;
  return;
}

// Destruct<FPCGSplineStruct> @ 1498552b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSplineStruct>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c0));
  }
  FSpline::~FSpline((FSpline *)((longlong)param_1 + 0x168));
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  if (*(void **)((longlong)param_1 + 0x120) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x120));
  }
  if (*(void **)((longlong)param_1 + 0x108) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x108));
  }
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
    return;
  }
  return;
}

// PostSerialize<FPCGSplineStruct> @ 1498552c0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGSplineStruct>(FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGSplineStruct> @ 149855310

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSplineStruct>(void *param_1,void *param_2,int param_3)

{
  FInterpCurveVector *pFVar1;
  FInterpCurveVector *pFVar2;
  undefined1 *puVar3;
  int iVar4;
  ForAnyElementType _Src;
  undefined8 uVar5;
  FInterpCurveVector *this;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int local_res18;
  
  if (param_3 != 0) {
    this = (FInterpCurveVector *)((longlong)param_1 + 0xf0);
    puVar6 = param_1;
    puVar7 = param_2;
    local_res18 = param_3;
    do {
      FInterpCurveVector::operator=
                (this,(FInterpCurveVector *)
                      ((longlong)puVar6 + (longlong)param_2 + (0xf0 - (longlong)param_1)));
      pFVar1 = (FInterpCurveVector *)
               ((longlong)puVar6 + (longlong)param_2 + (0x108 - (longlong)param_1));
      pFVar2 = this + 1;
      if (pFVar2 != pFVar1) {
        iVar4 = *(int *)((longlong)puVar6 + (longlong)param_2 + (0x110 - (longlong)param_1));
        puVar3 = &this[1].field_0xc;
        _Src.Data = *(FScriptContainerElement **)pFVar1;
        *(int *)&this[1].field_0x8 = iVar4;
        if ((iVar4 == 0) && (*(int *)puVar3 == 0)) {
          *(undefined4 *)puVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,iVar4,*(int *)puVar3,(ForAnyElementType *)pFVar2,iVar4,(int *)puVar3)
          ;
          if (iVar4 != 0) {
            memcpy(*(FScriptContainerElement **)pFVar2,_Src.Data,(longlong)iVar4 << 7);
          }
        }
      }
      this[1].field_0x10 =
           *(undefined1 *)((longlong)puVar6 + (longlong)param_2 + (0x118 - (longlong)param_1));
      *(undefined4 *)&this[1].field_0x14 =
           *(undefined4 *)((longlong)puVar6 + (longlong)param_2 + (0x11c - (longlong)param_1));
      FInterpCurveVector::operator=
                (this + 2,(FInterpCurveVector *)
                          ((longlong)puVar6 + (longlong)param_2 + (0x120 - (longlong)param_1)));
      FInterpCurveFloat::operator=
                ((FInterpCurveFloat *)(this + 3),
                 (FInterpCurveFloat *)
                 ((longlong)puVar6 + (longlong)param_2 + (0x138 - (longlong)param_1)));
      *(undefined4 *)(this + 4) =
           *(undefined4 *)((longlong)puVar6 + (longlong)param_2 + (0x150 - (longlong)param_1));
      FSpline::operator=((FSpline *)(puVar6 + 0x2d),
                         (FSpline *)
                         ((longlong)puVar6 + (longlong)param_2 + (0x168 - (longlong)param_1)));
      uVar5 = puVar7[1];
      *puVar6 = *puVar7;
      puVar6[1] = uVar5;
      uVar5 = puVar7[3];
      puVar6[2] = puVar7[2];
      puVar6[3] = uVar5;
      uVar5 = puVar7[5];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar5;
      uVar5 = puVar7[7];
      puVar6[6] = puVar7[6];
      puVar6[7] = uVar5;
      uVar5 = puVar7[9];
      puVar6[8] = puVar7[8];
      puVar6[9] = uVar5;
      uVar5 = puVar7[0xb];
      puVar6[10] = puVar7[10];
      puVar6[0xb] = uVar5;
      uVar5 = *(undefined8 *)((longlong)puVar6 + (longlong)param_2 + (0x68 - (longlong)param_1));
      puVar6[0xc] = *(undefined8 *)
                     ((longlong)puVar6 + (longlong)param_2 + (0x60 - (longlong)param_1));
      puVar6[0xd] = uVar5;
      puVar6[0xe] = *(undefined8 *)
                     ((longlong)puVar6 + (longlong)param_2 + (0x70 - (longlong)param_1));
      *(undefined4 *)(puVar6 + 0xf) =
           *(undefined4 *)((longlong)puVar6 + (longlong)param_2 + (0x78 - (longlong)param_1));
      *(undefined1 *)((longlong)puVar6 + 0x7c) =
           *(undefined1 *)((longlong)puVar6 + (longlong)param_2 + (0x7c - (longlong)param_1));
      uVar5 = *(undefined8 *)((longlong)puVar6 + (longlong)param_2 + (0xc0 - (longlong)param_1));
      puVar6[0x17] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (0xb8 - (longlong)param_1));
      puVar6[0x18] = uVar5;
      uVar5 = *(undefined8 *)((longlong)puVar6 + (longlong)param_2 + (0xd0 - (longlong)param_1));
      puVar6[0x19] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (200 - (longlong)param_1));
      puVar6[0x1a] = uVar5;
      uVar5 = *(undefined8 *)((longlong)puVar6 + (longlong)param_2 + (0xe0 - (longlong)param_1));
      puVar6[0x1b] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (0xd8 - (longlong)param_1));
      puVar6[0x1c] = uVar5;
      puVar6[0x1d] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (0xe8 - (longlong)param_1));
      uVar5 = *(undefined8 *)((longlong)puVar6 + (longlong)param_2 + (0x88 - (longlong)param_1));
      puVar6[0x10] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (0x80 - (longlong)param_1));
      puVar6[0x11] = uVar5;
      uVar5 = *(undefined8 *)((longlong)puVar6 + (longlong)param_2 + (0x98 - (longlong)param_1));
      puVar6[0x12] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (0x90 - (longlong)param_1));
      puVar6[0x13] = uVar5;
      uVar5 = *(undefined8 *)((longlong)puVar6 + (longlong)param_2 + (0xa8 - (longlong)param_1));
      puVar6[0x14] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (0xa0 - (longlong)param_1));
      puVar6[0x15] = uVar5;
      puVar6[0x16] = *(undefined8 *)
                      ((longlong)puVar6 + (longlong)param_2 + (0xb0 - (longlong)param_1));
      TArray<__int64,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<__int64,TSizedDefaultAllocator<32>_> *)(puVar6 + 0x2b),
                 (TArray<__int64,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar6 + (longlong)param_2 + (0x158 - (longlong)param_1)));
      local_res18 = local_res18 + -1;
      this = (FInterpCurveVector *)&this[0x13].field_0x8;
      puVar6 = puVar6 + 0x3a;
      puVar7 = puVar7 + 0x3a;
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FPCGDataTypeInfoRenderTarget2D> @ 1498555b0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoRenderTarget2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoRenderTarget2D__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoRenderTarget2D> @ 1498555d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoRenderTarget2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoRenderTarget2D__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoRenderTarget2D> @ 1498555f0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoRenderTarget2D>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoRenderTarget2D> @ 149855710

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoRenderTarget2D>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoPolygon2D> @ 149855910

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoPolygon2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPolygon2D__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoPolygon2D> @ 149855930

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoPolygon2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPolygon2D__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoPolygon2D> @ 149855950

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoPolygon2D>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoPolygon2D> @ 149855c30

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoPolygon2D>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoPrimitive> @ 149856060

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoPrimitive>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPrimitive__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoPrimitive> @ 149856080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoPrimitive>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPrimitive__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoPrimitive> @ 149856160

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoPrimitive>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoPrimitive> @ 149856170

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoPrimitive>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeBaseId> @ 149856180

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeBaseId>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FPCGDataTypeBaseId> @ 149856190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeBaseId>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FPCGDataTypeBaseId> @ 1498561a0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeBaseId>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeBaseId> @ 1498561b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeBaseId>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGDataTypeBaseId> @ 149856240

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGDataTypeBaseId>(void *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// Construct<FPCGDataTypeInfoPolyline> @ 1498563f0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoPolyline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPolyline__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoPolyline> @ 149856410

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoPolyline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoPolyline__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoPolyline> @ 149856430

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoPolyline>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoPolyline> @ 149856440

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoPolyline>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfo> @ 1498565b0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfo__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfo> @ 1498565d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfo>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfo__6B_;
  return;
}

// Destruct<FPCGDataTypeInfo> @ 149856670

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfo>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfo> @ 149856740

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfo>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGWorldQueryActorFilterCache> @ 149856d20

void __cdecl UE::CoreUObject::Private::Construct<FPCGWorldQueryActorFilterCache>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)param_1 + 0x60),4000);
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FPCGWorldQueryActorFilterCache> @ 149856d90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGWorldQueryActorFilterCache>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)param_1 + 0x60),4000);
  *(undefined1 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FPCGWorldQueryActorFilterCache> @ 149856df0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGWorldQueryActorFilterCache>(void *param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 0x60));
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectKey<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  DestructItems<TSoftObjectPtr<AActor>,int>
            (*(TSoftObjectPtr<AActor> **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Construct<FPCGWorldRayHitQueryParams> @ 149856f90

void __cdecl UE::CoreUObject::Private::Construct<FPCGWorldRayHitQueryParams>(void *param_1)

{
  memset(param_1,0,0x118);
  FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams(param_1);
  return;
}

// ConstructForTests<FPCGWorldRayHitQueryParams> @ 149856fc0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGWorldRayHitQueryParams>(void *param_1)

{
  undefined8 uVar1;
  
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams(param_1);
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) & 0x80;
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xe0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xe8) = uVar1;
  *(double *)((longlong)param_1 + 0xf0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0x40f86a0000000000;
  return;
}

// Destruct<FPCGWorldRayHitQueryParams> @ 149856fd0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGWorldRayHitQueryParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// PostSerialize<FPCGWorldRayHitQueryParams> @ 149856fe0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGWorldRayHitQueryParams>(FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGWorldRayHitQueryParams> @ 149856ff0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGWorldRayHitQueryParams>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FPCGWorldRaycastQueryParams *pFVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FPCGWorldRaycastQueryParams::operator=(param_1,param_2);
    *(char *)&((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ =
         (char)((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    lVar1 = ((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    ((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ =
         ((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    ((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ = lVar1;
    ((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ =
         ((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    lVar1 = ((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    ((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ =
         ((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    ((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ = lVar1;
    ((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ =
         ((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    pFVar2 = (FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8);
    param_2 = &((FPCGWorldRaycastQueryParams *)((longlong)param_2 + 0xd8))->_padding_;
    ((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_ = pFVar2->_padding_;
    param_1 = &((FPCGWorldRaycastQueryParams *)((longlong)param_1 + 0xd8))->_padding_;
  }
  return true;
}

// Construct<FPCGDataTypeInfoLandscapeSpline> @ 1498577e0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoLandscapeSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoLandscapeSpline__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoLandscapeSpline> @ 149857800

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoLandscapeSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoLandscapeSpline__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoLandscapeSpline> @ 149857820

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoLandscapeSpline>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoLandscapeSpline> @ 149857830

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoLandscapeSpline>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGCollisionShape> @ 1498578f0

void __cdecl UE::CoreUObject::Private::Construct<FPCGCollisionShape>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x42c80000;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// ConstructForTests<FPCGCollisionShape> @ 1498579b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGCollisionShape>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)param_1 = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x42c80000;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// Destruct<FPCGCollisionShape> @ 149857a20

void __cdecl UE::CoreUObject::Private::Destruct<FPCGCollisionShape>(void *param_1)

{
  return;
}

// Copy<FPCGCollisionShape> @ 149857c00

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGCollisionShape>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGWorldVolumetricQueryParams> @ 149857e80

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FPCGWorldVolumetricQueryParams>(void *param_1)

{
  memset(param_1,0,0xd0);
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams(param_1);
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// ConstructForTests<FPCGWorldVolumetricQueryParams> @ 149857f00

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGWorldVolumetricQueryParams>(void *param_1)

{
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams(param_1);
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// Destruct<FPCGWorldVolumetricQueryParams> @ 149857f30

void __cdecl UE::CoreUObject::Private::Destruct<FPCGWorldVolumetricQueryParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// PostSerialize<FPCGWorldVolumetricQueryParams> @ 149857f40

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGWorldVolumetricQueryParams>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGWorldVolumetricQueryParams> @ 149857f50

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGWorldVolumetricQueryParams>
          (void *param_1,void *param_2,int param_3)

{
  FPCGWorldCommonQueryParams *pFVar1;
  FPCGWorldCommonQueryParams *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FPCGWorldCommonQueryParams *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPCGWorldCommonQueryParams::operator=(this,pFVar1);
      this[1].bIgnorePCGHits = pFVar1[1].bIgnorePCGHits;
      param_3 = param_3 + -1;
      this = (FPCGWorldCommonQueryParams *)&this[1].ActorTagsList;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGWorldRaycastQueryParams> @ 149858270

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FPCGWorldRaycastQueryParams>(void *param_1)

{
  memset(param_1,0,0xd8);
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams(param_1);
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) & 0x80;
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  return;
}

// ConstructForTests<FPCGWorldRaycastQueryParams> @ 149858310

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGWorldRaycastQueryParams>(void *param_1)

{
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams(param_1);
  *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) & 0x80;
  *(byte *)((longlong)param_1 + 0xd0) = *(byte *)((longlong)param_1 + 0xd0) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  return;
}

// Destruct<FPCGWorldRaycastQueryParams> @ 149858510

void __cdecl UE::CoreUObject::Private::Destruct<FPCGWorldRaycastQueryParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// PostSerialize<FPCGWorldRaycastQueryParams> @ 1498586e0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGWorldRaycastQueryParams>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGWorldRaycastQueryParams> @ 149858770

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGWorldRaycastQueryParams>(void *param_1,void *param_2,int param_3)

{
  FPCGWorldCommonQueryParams *pFVar1;
  byte bVar2;
  undefined3 uVar3;
  bool bVar4;
  FPCGWorldCommonQueryParams *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FPCGWorldCommonQueryParams *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPCGWorldCommonQueryParams::operator=(this,pFVar1);
      bVar4 = (bool)((this[1].bIgnorePCGHits ^ pFVar1[1].bIgnorePCGHits) & 1U ^
                    this[1].bIgnorePCGHits);
      this[1].bIgnorePCGHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnorePCGHits) & 2U ^ bVar4);
      this[1].bIgnorePCGHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnorePCGHits) & 4U ^ bVar4);
      this[1].bIgnorePCGHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnorePCGHits) & 8U ^ bVar4);
      this[1].bIgnorePCGHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnorePCGHits) & 0x10U ^ bVar4);
      this[1].bIgnorePCGHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnorePCGHits) & 0x20U ^ bVar4);
      this[1].bIgnorePCGHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnorePCGHits) & 0x40U ^ bVar4);
      this[1].bIgnorePCGHits = bVar4;
      this[1].bIgnorePCGHits =
           (bool)((bVar4 ^ pFVar1[1].bIgnorePCGHits) & 0x7fU ^ pFVar1[1].bIgnorePCGHits);
      bVar4 = (bool)((this[1].bIgnoreSelfHits ^ pFVar1[1].bIgnoreSelfHits) & 1U ^
                    this[1].bIgnoreSelfHits);
      this[1].bIgnoreSelfHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnoreSelfHits) & 2U ^ bVar4);
      this[1].bIgnoreSelfHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnoreSelfHits) & 4U ^ bVar4);
      this[1].bIgnoreSelfHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnoreSelfHits) & 8U ^ bVar4);
      this[1].bIgnoreSelfHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnoreSelfHits) & 0x10U ^ bVar4);
      this[1].bIgnoreSelfHits = bVar4;
      bVar4 = (bool)((bVar4 ^ pFVar1[1].bIgnoreSelfHits) & 0x20U ^ bVar4);
      this[1].bIgnoreSelfHits = bVar4;
      this[1].bIgnoreSelfHits = (bool)((bVar4 ^ pFVar1[1].bIgnoreSelfHits) & 0x40U ^ bVar4);
      uVar3 = *(undefined3 *)&pFVar1[1].field_0x5;
      this[1].ActorTagFilter = pFVar1[1].ActorTagFilter;
      *(undefined3 *)&this[1].field_0x5 = uVar3;
      bVar2 = *(byte *)&this[1].ActorTagsList.Data.AllocatorInstance.Data;
      *(byte *)&this[1].ActorTagsList.Data.AllocatorInstance.Data =
           (bVar2 ^ *(byte *)&pFVar1[1].ActorTagsList.Data.AllocatorInstance.Data) & 1 ^ bVar2;
      *(undefined4 *)((longlong)&this[1].ActorTagsList.Data.AllocatorInstance.Data + 4) =
           *(undefined4 *)((longlong)&pFVar1[1].ActorTagsList.Data.AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = (FPCGWorldCommonQueryParams *)&this[1].ActorTagsList.Data.ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataPtrWrapper> @ 149858a20

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataPtrWrapper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGDataPtrWrapper> @ 149858a60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataPtrWrapper>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGDataPtrWrapper> @ 149858a70

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataPtrWrapper>(void *param_1)

{
  FPCGDataPtrWrapper::DecRefCount
            ((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)((longlong)param_1 + 8));
  return;
}

// SerializeArchive<FPCGDataPtrWrapper> @ 149858ab0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FPCGDataPtrWrapper>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UObject *pUVar1;
  FLLMScope local_res8 [2];
  FName local_res10;
  UObject *local_28;
  FWeakObjectPtr local_20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_18,&local_res10,true);
  local_20 = *(FWeakObjectPtr *)((longlong)param_2 + 8);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,param_2);
  if ((param_1->field_0x28 & 1) != 0) {
    pUVar1 = *(UObject **)param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UObject *)0x0) {
        GC::MarkAsReachable(pUVar1);
      }
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
    }
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    local_28 = pUVar1;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_28);
    *(FName *)((longlong)param_2 + 8) = local_res10;
    if (*(UPCGData **)param_2 != (UPCGData *)0x0) {
      UPCGData::IncCollectionRefCount(*(UPCGData **)param_2);
    }
    FPCGDataPtrWrapper::DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_20);
  }
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res8);
  return true;
}

// Copy<FPCGDataPtrWrapper> @ 149858c10

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataPtrWrapper>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  UPCGData *this;
  undefined8 *puVar2;
  FWeakObjectPtr local_res8;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      local_res8 = *(FWeakObjectPtr *)(puVar2 + 1);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      this = (UPCGData *)*puVar1;
      *puVar2 = this;
      puVar2[1] = puVar1[1];
      if (this != (UPCGData *)0x0) {
        UPCGData::IncCollectionRefCount(this);
      }
      FPCGDataPtrWrapper::DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_res8)
      ;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ImportTextItem<FPCGDataPtrWrapper> @ 149858cc0

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FPCGDataPtrWrapper>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  UObject *pUVar1;
  UScriptStruct *this;
  UPackage *pUVar2;
  FName local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_38;
  FString local_30;
  
  local_38 = *(FWeakObjectPtr *)((longlong)param_2 + 8);
  if (Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataPtrWrapper,(UObject *)pUVar2,
                         L"PCGDataPtrWrapper");
  }
  this = Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataPtrWrapper,(UObject *)pUVar2,
                         L"PCGDataPtrWrapper");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_30);
  UScriptStruct::ImportText(this,*param_1,param_2,param_4,param_3,param_5,&local_30,false);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pUVar1 = *(UObject **)param_2;
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      GC::MarkAsReachable(pUVar1);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  *(FName *)((longlong)param_2 + 8) = local_res8;
  if (*(UPCGData **)param_2 != (UPCGData *)0x0) {
    UPCGData::IncCollectionRefCount(*(UPCGData **)param_2);
  }
  FPCGDataPtrWrapper::DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_38);
  return true;
}

// StructuredSerializeFromMismatchedTag<FPCGDataPtrWrapper> @ 149858f30

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPCGDataPtrWrapper>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  ulonglong uVar1;
  UObject *pUVar2;
  FNameEntryId FVar3;
  FName FVar4;
  undefined4 extraout_var;
  UObject *local_res8;
  FWeakObjectPtr local_res20;
  UObject *local_18 [2];
  
  local_res8 = (UObject *)CONCAT44(local_res8._4_4_,(param_1->TypeName).Index);
  FVar4 = FPropertyTypeName::GetName((FPropertyTypeName *)&local_res8);
  uVar1 = *(ulonglong *)FVar4;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_res20);
  if (uVar1 == *(uint *)CONCAT44(extraout_var,FVar3.Value)) {
    local_res8 = (UObject *)0x0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x150))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res8);
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_res8);
    }
    pUVar2 = local_res8;
    *(UObject **)param_3 = local_res8;
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (local_res8 != (UObject *)0x0) {
        GC::MarkAsReachable(local_res8);
      }
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_18[0] = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
    *(FWeakObjectPtr *)((longlong)param_3 + 8) = local_res20;
    if (*(UPCGData **)param_3 != (UPCGData *)0x0) {
      UPCGData::IncCollectionRefCount(*(UPCGData **)param_3);
    }
    return true;
  }
  return false;
}

// Construct<FPCGDataTypeInfoSpline> @ 149859210

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoSpline__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoSpline> @ 149859230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSpline>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoSpline__6B_;
  return;
}

// Construct<FPCGWorldCommonQueryParams> @ 149859250

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FPCGWorldCommonQueryParams>(void *param_1)

{
  memset(param_1,0,200);
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams(param_1);
  return;
}

// Destruct<FPCGDataTypeInfoSpline> @ 149859280

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSpline>(void *param_1)

{
  return;
}

// ConstructForTests<FPCGWorldCommonQueryParams> @ 149859290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGWorldCommonQueryParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x30));
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

// Destruct<FPCGWorldCommonQueryParams> @ 1498592e0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGWorldCommonQueryParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x58),*(int *)((longlong)param_1 + 0x60));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FPCGDataTypeInfoSpline> @ 1498592f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSpline>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Copy<FPCGWorldCommonQueryParams> @ 149859300

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGWorldCommonQueryParams>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
      *(undefined1 *)((longlong)param_1 + 3) = *(undefined1 *)((longlong)param_2 + 3);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_2 + 4);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x20));
      }
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_2 + 0x28);
      FPCGAttributePropertySelector::operator=
                ((FPCGAttributePropertySelector *)((longlong)param_1 + 0x30),
                 (FPCGAttributePropertySelector *)((longlong)param_2 + 0x30));
      *(undefined1 *)((longlong)param_1 + 0x70) = *(undefined1 *)((longlong)param_2 + 0x70);
      *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
      *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 ((longlong)param_1 + 0x78),
                 (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                 ((longlong)param_2 + 0x78));
      param_2 = (void *)((longlong)param_2 + 200);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 200);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataTypeInfoLandscape> @ 149859460

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoLandscape>(void *param_1)

{
  *(undefined ***)param_1 = &FPCGDataTypeInfoLandscape::_vftable_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoLandscape> @ 149859480

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoLandscape>(void *param_1)

{
  *(undefined ***)param_1 = &FPCGDataTypeInfoLandscape::_vftable_;
  return;
}

// Destruct<FPCGDataTypeInfoLandscape> @ 1498594a0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoLandscape>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoLandscape> @ 1498594c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoLandscape>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGPointDataCache> @ 149859d50

void __cdecl UE::CoreUObject::Private::Construct<FPCGPointDataCache>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FPCGPointDataCache> @ 149859da0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPointDataCache>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FPCGPointDataCache> @ 149859dc0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPointDataCache>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGPointDataCache> @ 149859f10

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPointDataCache>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 1);
      *puVar6 = *puVar3;
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 1)) {
        iVar4 = *(int *)(puVar3 + 2);
        piVar2 = (int *)((longlong)puVar6 + 0x14);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 1))->Data;
        *(int *)(puVar6 + 2) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy(pFVar1->Data,pFVar5,(longlong)iVar4 * 0x38);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 3);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 3)) {
        iVar4 = *(int *)(puVar3 + 4);
        piVar2 = (int *)((longlong)puVar6 + 0x24);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 3))->Data;
        *(int *)(puVar6 + 4) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<UPCGBasePointData_const_>,TObjectPtr<UPCGBasePointData_const_>,int>
                    (pFVar1->Data,(TObjectPtr<UPCGBasePointData_const_> *)pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGLandscapeDataProps> @ 14985a070

void __cdecl UE::CoreUObject::Private::Construct<FPCGLandscapeDataProps>(void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  *(undefined2 *)((longlong)param_1 + 4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// ConstructForTests<FPCGLandscapeDataProps> @ 14985a0d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGLandscapeDataProps>(void *param_1)

{
  *(undefined4 *)param_1 = 0x100;
  *(undefined2 *)((longlong)param_1 + 4) = 0x100;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// Destruct<FPCGLandscapeDataProps> @ 14985a0f0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGLandscapeDataProps>(void *param_1)

{
  return;
}

// Construct<FPCGDataTypeInfoVolume> @ 14985a1d0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoVolume>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoVolume__6B_;
  return;
}

// Copy<FPCGLandscapeDataProps> @ 14985a1f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGLandscapeDataProps>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined2 *)(lVar3 + 4 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 6 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar2;
      *(undefined1 *)((longlong)param_1 + 6) = uVar1;
      param_1 = (void *)((longlong)param_1 + 7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FPCGDataTypeInfoVolume> @ 14985a230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoVolume>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoVolume__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoVolume> @ 14985a310

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoVolume>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoVolume> @ 14985a360

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoVolume>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoComposite> @ 14985a6b0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoComposite>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoComposite__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoComposite> @ 14985a6d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoComposite>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoComposite__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoComposite> @ 14985a6f0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoComposite>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoComposite> @ 14985a850

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoComposite>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoVirtualTexture> @ 14985a920

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoVirtualTexture>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoVirtualTexture__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoVirtualTexture> @ 14985a940

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoVirtualTexture>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoVirtualTexture__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoVirtualTexture> @ 14985a960

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoVirtualTexture>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoVirtualTexture> @ 14985a9b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoVirtualTexture>
          (void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoConcrete> @ 14985acc0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoConcrete>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoConcrete__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoConcrete> @ 14985ade0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoConcrete>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoConcrete__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoConcrete> @ 14985ae10

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoConcrete>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoConcrete> @ 14985ae80

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoConcrete>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoTexture2D> @ 14985b090

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoTexture2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoTexture2D__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoTexture2D> @ 14985b0b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoTexture2D>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoTexture2D__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoTexture2D> @ 14985b0d0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoTexture2D>(void *param_1)

{
  return;
}

// ArcLength<double,UE::Math::TVector2<double>_> @ 14985dc60

double __cdecl
UE::Geometry::CurveUtil::ArcLength<double,UE::Math::TVector2<double>_>
          (TArrayView<UE::Math::TVector2<double>_const_,int> *param_1,bool param_2)

{
  int iVar1;
  TVector2<double> *pTVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 in_XMM0 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar12 [16];
  double dVar13;
  
  iVar1 = param_1->ArrayNum;
  uVar6 = 1;
  dVar10 = 0.0;
  dVar11 = 0.0;
  if (1 < (longlong)iVar1) {
    lVar8 = 0x10;
    lVar9 = (longlong)iVar1 + -1;
    do {
      uVar7 = 0;
      if ((int)(uVar6 - 1) < param_1->ArrayNum) {
        uVar7 = -uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        dVar10 = (double)(*pcVar3)();
        return dVar10;
      }
      pTVar2 = param_1->DataPtr;
      uVar7 = 0;
      if ((int)uVar6 < param_1->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        dVar10 = (double)(*pcVar3)();
        return dVar10;
      }
      uVar6 = uVar6 + 1;
      dVar11 = *(double *)(lVar8 + -8 + (longlong)pTVar2) -
               *(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8 + 8);
      dVar13 = *(double *)((longlong)&pTVar2[-1].field0_0x0 + lVar8) -
               *(double *)((longlong)&param_1->DataPtr->field0_0x0 + lVar8);
      lVar8 = lVar8 + 0x10;
      auVar12._0_8_ = dVar11 * dVar11 + dVar13 * dVar13;
      auVar12._8_8_ = 0;
      in_XMM0 = sqrtpd(auVar12,auVar12);
      dVar10 = dVar10 + in_XMM0._0_8_;
      lVar9 = lVar9 + -1;
      dVar11 = dVar10;
    } while (lVar9 != 0);
  }
  if ((param_2) && (1 < iVar1)) {
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       in_XMM0 = extraout_XMM0, bVar5)) {
      pcVar3 = (code *)swi(3);
      dVar10 = (double)(*pcVar3)();
      return dVar10;
    }
    uVar7 = iVar1 - 1;
    pTVar2 = param_1->DataPtr;
    uVar6 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       in_XMM0 = extraout_XMM0_00, bVar5)) {
      pcVar3 = (code *)swi(3);
      dVar10 = (double)(*pcVar3)();
      return dVar10;
    }
    dVar10 = (pTVar2->field0_0x0)._s_0.Y - param_1->DataPtr[(int)uVar7].field0_0x0._s_0.Y;
    dVar13 = (pTVar2->field0_0x0)._s_0.X - param_1->DataPtr[(int)uVar7].field0_0x0._s_0.X;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar10 * dVar10 + dVar13 * dVar13;
    auVar12 = sqrtpd(in_XMM0,auVar4);
    dVar11 = auVar12._0_8_ + dVar11;
  }
  return dVar11;
}

// GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData> @ 149863370

FPCGInteractiveToolWorkingBaseData * __cdecl
UE::StructUtils::GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FPCGInteractiveToolWorkingBaseData *pFVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPCGInteractiveToolWorkingBaseData *)0x0;
  }
  local_res8 = param_1;
  pUVar3 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
  if (local_res8 == pUVar3) {
    return param_2;
  }
  pUVar3 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return param_2;
    }
  }
  local_res10[0] = &local_res8;
  bVar2 = `UE::StructUtils::
          GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>'::__l7
          ::<lambda_1>::operator()(local_res10);
  pFVar4 = (FPCGInteractiveToolWorkingBaseData *)0x0;
  if (bVar2) {
    pFVar4 = param_2;
  }
  return pFVar4;
}

// GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData> @ 149863410

FPCGInteractiveToolWorkingBaseData * __cdecl
UE::StructUtils::GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPCGInteractiveToolWorkingBaseData *)0x0;
  }
  local_res8 = param_1;
  pUVar3 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
  if (local_res8 != pUVar3) {
    pUVar3 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)local_res8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
    local_res10[0] = &local_res8;
    bVar2 = `UE::StructUtils::
            GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>'::
            __l7::<lambda_1>::operator()(local_res10);
    if (!bVar2) {
      return (FPCGInteractiveToolWorkingBaseData *)0x0;
    }
  }
  return param_2;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_> @ 149889b10

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FPhysicsShapeReference_Chaos> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
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
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
  ForElementType<FPhysicsShapeReference_Chaos>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<ULandscapeHeightfieldCollisionComponent_*>_> @ 149889bb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<ULandscapeHeightfieldCollisionComponent_*>_>
          (ushort param_1,ForElementType<ULandscapeHeightfieldCollisionComponent_*> *param_2,
          int *param_3)

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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<ULandscapeHeightfieldCollisionComponent_*>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGPoint_const_*,float>_>_> @ 149889c80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGPoint_const_*,float>_>_>
          (ushort param_1,ForElementType<TTuple<FPCGPoint_const_*,float>_> *param_2,int *param_3)

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
    ForElementType<TTuple<FPCGPoint_const_*,float>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_> @ 149889d50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> *param_2,
          int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>_> @ 149889e20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>_>
          (ushort param_1,ForElementType<FCollisionShape> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>_> @ 149889fc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>_>
          (ushort param_1,ForElementType<FPCGPointRef> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeAdapter_Chaos>_> @ 14988a090

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeAdapter_Chaos>_>
          (ushort param_1,ForElementType<FPhysicsShapeAdapter_Chaos> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPhysicsShapeAdapter_Chaos>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_> @ 14988a160

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector2<double>_> *param_4,int *param_5,int *param_6)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>_> @ 14988a230

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGPoint> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 14988a310

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftObjectPath> *param_4,
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 14988a3f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_> @ 14988a4d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector2<double>_> *param_3,
          int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>_> @ 14988a590

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>_>
          (uint param_1,uint param_2,ForElementType<FPCGPoint> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPoint>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 14988a650

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftObjectPath> *param_3,int param_4,
          int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 14988a710

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,ForElementType<__int64> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_> @ 14988a7d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x101) {
      iVar1 = 0x100;
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Math::TTransform<double>,UE::Math::TBox<double>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>_> @ 14988a850

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FCollisionShape> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x101) {
      iVar1 = 0x100;
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FCollisionShape>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>_> @ 14988a8d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGPointRef> *param_4,int param_5,
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGPointRef>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FEnumSelector> @ 149900a80

void __cdecl UE::CoreUObject::Private::Construct<FEnumSelector>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FEnumSelector> @ 149900a90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnumSelector>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FEnumSelector> @ 149900aa0

void __cdecl UE::CoreUObject::Private::Destruct<FEnumSelector>(void *param_1)

{
  return;
}

// Copy<FEnumSelector> @ 149900af0

bool __cdecl UE::CoreUObject::Private::Copy<FEnumSelector>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGGraphEditorCustomization> @ 149901150

void __cdecl UE::CoreUObject::Private::Construct<FPCGGraphEditorCustomization>(void *param_1)

{
  memset(param_1,0,0xd0);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0xffffffff;
  return;
}

// ConstructForTests<FPCGGraphEditorCustomization> @ 1499011a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGGraphEditorCustomization>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  return;
}

// Destruct<FPCGGraphEditorCustomization> @ 149901240

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGraphEditorCustomization>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  TSparseArray<TSparseSetElement<TSoftObjectPtr<UPCGGraph>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSoftObjectPtr<UPCGGraph>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TSoftObjectPtr<UPCGGraph>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x68));
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FPCGGraphEditorCustomization> @ 149901250

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGGraphEditorCustomization>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar3 + 1);
      *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar6 + 2),
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(puVar3 + 2));
      *(undefined1 *)(puVar6 + 0xc) = *(undefined1 *)(puVar3 + 0xc);
      *(undefined4 *)((longlong)puVar6 + 100) = *(undefined4 *)((longlong)puVar3 + 100);
      TSet<TSoftObjectPtr<UPCGGraph>,DefaultKeyFuncs<TSoftObjectPtr<UPCGGraph>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TSoftObjectPtr<UPCGGraph>,DefaultKeyFuncs<TSoftObjectPtr<UPCGGraph>,0>,FDefaultSetAllocator>
                   *)(puVar6 + 0xd),
                  (TSet<TSoftObjectPtr<UPCGGraph>,DefaultKeyFuncs<TSoftObjectPtr<UPCGGraph>,0>,FDefaultSetAllocator>
                   *)(puVar3 + 0xd));
      *(undefined1 *)(puVar6 + 0x17) = *(undefined1 *)(puVar3 + 0x17);
      *(undefined4 *)((longlong)puVar6 + 0xbc) = *(undefined4 *)((longlong)puVar3 + 0xbc);
      pFVar2 = (ForAnyElementType *)(puVar6 + 0x18);
      if (pFVar2 != (ForAnyElementType *)(puVar3 + 0x18)) {
        iVar4 = *(int *)(puVar3 + 0x19);
        piVar1 = (int *)((longlong)puVar6 + 0xcc);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 0x18))->Data;
        *(int *)(puVar6 + 0x19) = iVar4;
        if ((iVar4 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar1,pFVar2,iVar4,piVar1);
          ConstructItems<TSubclassOf<UPCGSettings>,TSubclassOf<UPCGSettings>,int>
                    (pFVar2->Data,(TSubclassOf<UPCGSettings> *)pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGGraphCommentNodeData> @ 149901850

void __cdecl UE::CoreUObject::Private::Construct<FPCGGraphCommentNodeData>(void *param_1)

{
  return;
}

// ConstructForTests<FPCGGraphCommentNodeData> @ 149901860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGraphCommentNodeData>(void *param_1)

{
  return;
}

// Construct<FPCGSubdivisionModuleAttributeNames> @ 149902d00

void __cdecl UE::CoreUObject::Private::Construct<FPCGSubdivisionModuleAttributeNames>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(FName *)param_1 = PCGSubdivisionBase::Constants::SymbolAttributeName;
  *(FName *)((longlong)param_1 + 8) = PCGSubdivisionBase::Constants::SizeAttributeName;
  *(FName *)((longlong)param_1 + 0x14) = PCGSubdivisionBase::Constants::ScalableAttributeName;
  *(FName *)((longlong)param_1 + 0x20) = PCGSubdivisionBase::Constants::DebugColorAttributeName;
  return;
}

// ConstructForTests<FPCGSubdivisionModuleAttributeNames> @ 149902d50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGSubdivisionModuleAttributeNames>(void *param_1)

{
  *(FName *)param_1 = PCGSubdivisionBase::Constants::SymbolAttributeName;
  *(FName *)((longlong)param_1 + 8) = PCGSubdivisionBase::Constants::SizeAttributeName;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(FName *)((longlong)param_1 + 0x14) = PCGSubdivisionBase::Constants::ScalableAttributeName;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(FName *)((longlong)param_1 + 0x20) = PCGSubdivisionBase::Constants::DebugColorAttributeName;
  return;
}

// Destruct<FPCGSubdivisionModuleAttributeNames> @ 149902d90

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSubdivisionModuleAttributeNames>(void *param_1)

{
  return;
}

// Copy<FPCGSubdivisionModuleAttributeNames> @ 149902da0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSubdivisionModuleAttributeNames>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSubdivisionSubmodule> @ 1499032c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGSubdivisionSubmodule>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4059000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGSubdivisionSubmodule> @ 149903310

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSubdivisionSubmodule>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4059000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGSubdivisionSubmodule> @ 149903350

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSubdivisionSubmodule>(void *param_1)

{
  return;
}

// Copy<FPCGSubdivisionSubmodule> @ 149903360

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSubdivisionSubmodule>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSelectGrammarCriteriaAttributeNames> @ 149903d20

void __cdecl
UE::CoreUObject::Private::Construct<FPCGSelectGrammarCriteriaAttributeNames>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  ::FName::FName(param_1,L"Key");
  ::FName::FName((FName *)((longlong)param_1 + 8),L"Comparator");
  ::FName::FName((FName *)((longlong)param_1 + 0x10),L"FirstValue");
  ::FName::FName((FName *)((longlong)param_1 + 0x18),L"SecondValue");
  ::FName::FName((FName *)((longlong)param_1 + 0x20),L"Grammar");
  return;
}

// ConstructForTests<FPCGSelectGrammarCriteriaAttributeNames> @ 149903d90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGSelectGrammarCriteriaAttributeNames>(void *param_1)

{
  ::FName::FName(param_1,L"Key");
  ::FName::FName((FName *)((longlong)param_1 + 8),L"Comparator");
  ::FName::FName((FName *)((longlong)param_1 + 0x10),L"FirstValue");
  ::FName::FName((FName *)((longlong)param_1 + 0x18),L"SecondValue");
  ::FName::FName((FName *)((longlong)param_1 + 0x20),L"Grammar");
  return;
}

// Destruct<FPCGSelectGrammarCriteriaAttributeNames> @ 149903df0

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGSelectGrammarCriteriaAttributeNames>(void *param_1)

{
  return;
}

// Copy<FPCGSelectGrammarCriteriaAttributeNames> @ 149903e50

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSelectGrammarCriteriaAttributeNames>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSelectGrammarCriterion> @ 149904130

void __cdecl UE::CoreUObject::Private::Construct<FPCGSelectGrammarCriterion>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0x22;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FPCGSelectGrammarCriterion> @ 149904160

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSelectGrammarCriterion>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x22;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FPCGSelectGrammarCriterion> @ 149904190

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSelectGrammarCriterion>(void *param_1)

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

// Copy<FPCGSelectGrammarCriterion> @ 1499041b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSelectGrammarCriterion>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 8) = *(undefined2 *)((longlong)param_1 + lVar1 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x18);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_1 + lVar1 + 0x20)
                );
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo> @ 1499aa1f0

FPCGDataTypeInfo * __cdecl
UE::StructUtils::GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FPCGDataTypeInfo *pFVar4;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPCGDataTypeInfo *)0x0;
  }
  local_res8 = param_1;
  pUVar3 = FPCGDataTypeInfo::StaticStruct();
  if (local_res8 == pUVar3) {
    return param_2;
  }
  pUVar3 = FPCGDataTypeInfo::StaticStruct();
  if (pUVar3 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)local_res8->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return param_2;
    }
  }
  local_res10[0] = &local_res8;
  bVar2 = `UE::StructUtils::GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo>'::__l7::<lambda_1>::
          operator()(local_res10);
  pFVar4 = (FPCGDataTypeInfo *)0x0;
  if (bVar2) {
    pFVar4 = param_2;
  }
  return pFVar4;
}

// GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo> @ 1499aa290

FPCGDataTypeInfo * __cdecl
UE::StructUtils::GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPCGDataTypeInfo *)0x0;
  }
  local_res8 = param_1;
  pUVar3 = FPCGDataTypeInfo::StaticStruct();
  if (local_res8 != pUVar3) {
    pUVar3 = FPCGDataTypeInfo::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)local_res8->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(local_res8->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
    local_res10[0] = &local_res8;
    bVar2 = `UE::StructUtils::GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo>'::__l7::<lambda_1>::
            operator()(local_res10);
    if (!bVar2) {
      return (FPCGDataTypeInfo *)0x0;
    }
  }
  return param_2;
}

// GetStructRef<FPCGDataTypeInfo> @ 1499aa320

FPCGDataTypeInfo * __cdecl
UE::StructUtils::GetStructRef<FPCGDataTypeInfo>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPCGDataTypeInfo *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeInfo *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeInfo *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FPCGDataTypeInfo::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FPCGDataTypeInfo::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FPCGDataTypeInfo::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGDataTypeInfo *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_> @ 1499bb830

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
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
  TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGDataTypeHierarchy::FNode_const_*>_> @ 1499bb8d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGDataTypeHierarchy::FNode_const_*>_>
          (ushort param_1,ForElementType<PCGDataTypeHierarchy::FNode_const_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGDataTypeHierarchy::FNode_const_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_> @ 1499bb9a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_>
          (ushort param_1,ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_> *param_2,
          int *param_3)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_> @ 1499bba70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_>
          (ushort param_1,ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_> *param_2,
          int *param_3)

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
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGExportSelectedAttributes::FAccessorData>_> @ 1499bbb40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGExportSelectedAttributes::FAccessorData>_>
          (ushort param_1,ForElementType<PCGExportSelectedAttributes::FAccessorData> *param_2,
          int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGExportSelectedAttributes::FAccessorData>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>_> @ 1499bbc10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>_>
          (ushort param_1,ForElementType<FPCGDataTypeBaseId> *param_2,int *param_3)

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
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>_> @ 1499bbce0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>_>
          (ushort param_1,ForElementType<FPCGDataTypeIdentifier> *param_2,int *param_3)

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
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGSelectGrammarCriterion>_> @ 1499bbdb0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGSelectGrammarCriterion>_>
          (ushort param_1,ForElementType<FPCGSelectGrammarCriterion> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPCGSelectGrammarCriterion>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 1499bbe80

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_char> *param_4,int *param_5
          ,int *param_6)

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
    iVar7 = 0x1800;
    uVar8 = (ulonglong)param_1;
    if (0x1800 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x1801) {
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
    TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1499bbf60

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 1499bc040

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 1499bc120

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,int param_3,ForElementType<double> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_> @ 1499bc200

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TQuat<double>_> *param_4,
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
    ForElementType<UE::Math::TQuat<double>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_> @ 1499bc2e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TRotator<double>_> *param_4,int *param_5,int *param_6)

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
    ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 1499bc3c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TTransform<double>_> *param_4,int *param_5,int *param_6)

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
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_> @ 1499bc4a0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector2<double>_> *param_4,int *param_5,int *param_6)

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
    ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 1499bc580

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector4<double>_> *param_4,int *param_5,int *param_6)

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
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1499bc660

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

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
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_> @ 1499bc740

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftClassPath> *param_4,
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 1499bc820

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1499bc900

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_> @ 1499bc9d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,int param_3,ForElementType<bool> *param_4,int *param_5,
          int *param_6)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<0,TFixedAllocator<4>::ForElementType<bool>_> @ 1499bcab0

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<4>::ForElementType<bool>_>
          (uint param_1,uint param_2,int param_3,ForElementType<bool> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (4 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 4;
  }
  return iVar5;
}

// ReallocShrink<2,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_> @ 1499bcb30

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>_>
          (uint param_1,uint param_2,ForElementType<unsigned_char> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x1800;
  if (0x1800 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<6144,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 1499bcbf0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 1499bccb0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,ForElementType<float> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 1499bcd70

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,ForElementType<double> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_> @ 1499bce30

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TQuat<double>_> *param_3,int param_4,
          int *param_5)

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
    ForElementType<UE::Math::TQuat<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_> @ 1499bcef0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TRotator<double>_> *param_3,
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
    ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 1499bcfb0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TTransform<double>_> *param_3,
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
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_> @ 1499bd070

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>_>
          (uint param_1,uint param_2,
          ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<PCGDataTypeHierarchy::FNode_*,int>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_> @ 1499bd130

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_>
          (uint param_1,uint param_2,
          ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_> @ 1499bd1f0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector2<double>_> *param_3,
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
    ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 1499bd2b0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector4<double>_> *param_3,
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
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 1499bd370

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<double>_> *param_3,int param_4
          ,int *param_5)

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
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>_> @ 1499bd430

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>_>
          (uint param_1,uint param_2,ForElementType<FPCGDataTypeBaseId> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeBaseId>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_> @ 1499bd4f0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftClassPath> *param_3,int param_4,
          int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 1499bd5b0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,ForElementType<FName> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 1499bd670

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,ForElementType<FString> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_> @ 1499bd730

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
          (uint param_1,uint param_2,ForElementType<bool> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_> @ 1499bd7f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<PCGDataTypeHierarchy::FNode_const_*,int>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGExportSelectedAttributes::FAccessorData>_> @ 1499bd870

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGExportSelectedAttributes::FAccessorData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<PCGExportSelectedAttributes::FAccessorData> *param_4,int param_5,
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGExportSelectedAttributes::FAccessorData>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>_> @ 1499bd8f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGDataTypeIdentifier> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataTypeIdentifier>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FPCGActorSelectorSettings> @ 149a154f0

void __cdecl UE::CoreUObject::Private::Construct<FPCGActorSelectorSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x18));
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x1010000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x1010101;
  return;
}

// ConstructForTests<FPCGActorSelectorSettings> @ 149a15550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGActorSelectorSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x18));
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x1010000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x1010101;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FPCGActorSelectorSettings> @ 149a155b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGActorSelectorSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x40),*(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
    return;
  }
  return;
}

// Copy<FPCGActorSelectorSettings> @ 149a15700

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGActorSelectorSettings>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      puVar2[1] = *(undefined1 *)((longlong)pvVar1 + 1);
      puVar2[2] = *(undefined1 *)((longlong)pvVar1 + 2);
      puVar2[3] = *(undefined1 *)((longlong)pvVar1 + 3);
      puVar2[4] = *(undefined1 *)((longlong)pvVar1 + 4);
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)((longlong)pvVar1 + 0x10);
      FPCGAttributePropertySelector::operator=
                ((FPCGAttributePropertySelector *)(puVar2 + 0x18),
                 (FPCGAttributePropertySelector *)((longlong)pvVar1 + 0x18));
      puVar2[0x58] = *(undefined1 *)((longlong)pvVar1 + 0x58);
      puVar2[0x59] = *(undefined1 *)((longlong)pvVar1 + 0x59);
      puVar2[0x5a] = *(undefined1 *)((longlong)pvVar1 + 0x5a);
      puVar2[0x5b] = *(undefined1 *)((longlong)pvVar1 + 0x5b);
      puVar2[0x5c] = *(undefined1 *)((longlong)pvVar1 + 0x5c);
      puVar2[0x5d] = *(undefined1 *)((longlong)pvVar1 + 0x5d);
      puVar2[0x5e] = *(undefined1 *)((longlong)pvVar1 + 0x5e);
      puVar2[0x5f] = *(undefined1 *)((longlong)pvVar1 + 0x5f);
      iVar3 = *(int *)((longlong)pvVar1 + 0x68) + -1;
      if (*(int *)((longlong)pvVar1 + 0x68) == 0) {
        iVar3 = 0;
      }
      ::FString::AssignRange
                ((FString *)(puVar2 + 0x60),*(wchar_t **)((longlong)pvVar1 + 0x60),iVar3);
      puVar2[0x70] = *(undefined1 *)((longlong)pvVar1 + 0x70);
      puVar2[0x71] = *(undefined1 *)((longlong)pvVar1 + 0x71);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x78);
      puVar2 = puVar2 + 0x78;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSelectionKey> @ 149a15e70

void __cdecl UE::CoreUObject::Private::Construct<FPCGSelectionKey>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  *(undefined2 *)param_1 = 0x403;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x40));
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FPCGSelectionKey> @ 149a15ec0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSelectionKey>(void *param_1)

{
  *(undefined2 *)param_1 = 0x403;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x40));
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FPCGSelectionKey> @ 149a15f20

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSelectionKey>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FPCGSelectionKey> @ 149a15f60

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSelectionKey>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      puVar2[1] = *(undefined1 *)((longlong)pvVar1 + 1);
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)pvVar1 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)((longlong)pvVar1 + 0x10);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(puVar2 + 0x18),(FSoftObjectPath *)((longlong)pvVar1 + 0x18));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x38) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x38));
      }
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)((longlong)pvVar1 + 0x38);
      if ((FInstancedStruct *)(puVar2 + 0x40) != (FInstancedStruct *)((longlong)pvVar1 + 0x40)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar2 + 0x40),
                   (((FInstancedStruct *)((longlong)pvVar1 + 0x40))->ScriptStruct).field0_0x0.
                   DebugPtr,*(uchar **)((longlong)pvVar1 + 0x48));
      }
      ::FString::operator=((FString *)(puVar2 + 0x50),(FString *)((longlong)pvVar1 + 0x50));
      puVar2[0x60] = *(undefined1 *)((longlong)pvVar1 + 0x60);
      *(undefined8 *)(puVar2 + 0x68) = *(undefined8 *)((longlong)pvVar1 + 0x68);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x70);
      puVar2 = puVar2 + 0x70;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGSelectionKey> @ 149a16080

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGSelectionKey>(void *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FPCGCustomSelectionKey *pFVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 4);
  iVar7 = (uint)*(byte *)param_1 - (uint)*(byte *)((longlong)param_1 + 1);
  uVar5 = 0x9e3779b9 - *(byte *)param_1 ^ iVar7 * 0x100;
  uVar4 = (*(byte *)((longlong)param_1 + 1) - uVar5) - iVar7 ^ uVar5 >> 0xd;
  uVar8 = (iVar7 - uVar4) - uVar5 ^ uVar4 >> 0xc;
  uVar6 = (uVar5 - uVar8) - uVar4 ^ uVar8 << 0x10;
  uVar5 = (uVar4 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 10;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar4 = uVar4 + (int)((ulonglong)uVar1 >> 0x20);
  uVar6 = ((uVar5 - uVar6) - uVar8 ^ uVar6 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar6) - uVar4 ^ uVar6 << 8;
  uVar8 = (uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xd;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xc;
  uVar4 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 0x10;
  uVar8 = (uVar8 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar8 >> 3;
  uVar5 = (uVar4 - uVar8) - uVar6 ^ uVar6 << 10;
  uVar4 = ((uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 0x10) >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar8 = ((uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
  uVar6 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar4 = (uVar5 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar8 ^ uVar4 >> 5;
  uVar8 = (uVar8 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar5 = (uVar4 - uVar8) - uVar6 ^ uVar8 << 10;
  uVar4 = ((uint)(*(ulonglong *)((longlong)param_1 + 0x38) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)param_1 + 0x38) >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x20);
  uVar8 = ((uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar5 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
  uVar6 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xd;
  uVar9 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xc;
  uVar4 = (uVar5 - uVar9) - uVar6 ^ uVar9 << 0x10;
  uVar8 = (uVar6 - uVar4) - uVar9 ^ uVar4 >> 5;
  uVar9 = (uVar9 - uVar8) - uVar4 ^ uVar8 >> 3;
  uVar6 = (uVar4 - uVar9) - uVar8 ^ uVar9 << 10;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  uVar5 = uVar5 + (int)((ulonglong)uVar2 >> 0x20);
  uVar5 = uVar5 * 0x40 + uVar4 + (int)((ulonglong)uVar1 >> 0x20) + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5
  ;
  if (1 < *(int *)((longlong)param_1 + 0x30)) {
    uVar4 = FCrc::Strihash_DEPRECATED<char8_t>
                      (*(int *)((longlong)param_1 + 0x30) + -1,*(uchar **)((longlong)param_1 + 0x28)
                      );
    uVar5 = uVar5 ^ uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2);
  }
  uVar6 = ((uVar8 - uVar6) - uVar9 ^ uVar6 >> 0xf) - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar5) - uVar6 ^ uVar6 << 8;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 5;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
  uVar4 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf;
  if ((*(void **)((longlong)param_1 + 0x48) != (void *)0x0) &&
     (*(UScriptStruct **)((longlong)param_1 + 0x40) != (UScriptStruct *)0x0)) {
    pFVar3 = StructUtils::GetStructRef<FPCGCustomSelectionKey>
                       (*(UScriptStruct **)((longlong)param_1 + 0x40),
                        *(void **)((longlong)param_1 + 0x48));
    uVar5 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3);
    uVar6 = uVar4 - uVar5 ^ uVar5 >> 0xd;
    uVar8 = (-0x61c88647 - uVar5) - uVar6 ^ uVar6 << 8;
    uVar4 = (uVar5 - uVar8) - uVar6 ^ uVar8 >> 0xd;
    uVar5 = (uVar6 - uVar4) - uVar8 ^ uVar4 >> 0xc;
    uVar6 = (uVar8 - uVar5) - uVar4 ^ uVar5 << 0x10;
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 << 10;
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 >> 0xf;
  }
  return uVar4;
}

// Construct<FPCGCustomSelectionKey> @ 149a168c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGCustomSelectionKey>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGCustomSelectionKey__6B_;
  return;
}

// ConstructForTests<FPCGCustomSelectionKey> @ 149a168e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGCustomSelectionKey>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGCustomSelectionKey__6B_;
  return;
}

// Destruct<FPCGCustomSelectionKey> @ 149a16900

void __cdecl UE::CoreUObject::Private::Destruct<FPCGCustomSelectionKey>(void *param_1)

{
  return;
}

// Copy<FPCGCustomSelectionKey> @ 149a16910

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGCustomSelectionKey>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// GetStructTypeHash<FPCGCustomSelectionKey> @ 149a16ab0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGCustomSelectionKey>(void *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149a16ab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x20))();
  return uVar1;
}

// Construct<FPCGAttributeFilterThresholdSettings> @ 149a16e50

void __cdecl
UE::CoreUObject::Private::Construct<FPCGAttributeFilterThresholdSettings>(void *param_1)

{
  memset((void *)((longlong)param_1 + 2),0,0x1be);
  *(undefined2 *)param_1 = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x50));
  return;
}

// ConstructForTests<FPCGAttributeFilterThresholdSettings> @ 149a16f10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributeFilterThresholdSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x50));
  return;
}

// Destruct<FPCGAttributeFilterThresholdSettings> @ 149a16f80

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAttributeFilterThresholdSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a8));
  }
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPCGAttributeFilterThresholdSettings> @ 149a16fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributeFilterThresholdSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      FPCGAttributePropertySelector::operator=
                ((FPCGAttributePropertySelector *)((longlong)param_1 + 8),
                 (FPCGAttributePropertySelector *)((longlong)param_2 + 8));
      *(undefined1 *)((longlong)param_1 + 0x48) = *(undefined1 *)((longlong)param_2 + 0x48);
      FPCGMetadataTypesConstantStruct::operator=
                ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x50),
                 (FPCGMetadataTypesConstantStruct *)((longlong)param_2 + 0x50));
      param_2 = (void *)((longlong)param_2 + 0x1c0);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x1c0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGComponentSelectorSettings> @ 149a18c80

void __cdecl UE::CoreUObject::Private::Construct<FPCGComponentSelectorSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42) = 0;
  *(undefined2 *)((longlong)param_1 + 0x46) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FPCGComponentSelectorSettings> @ 149a18cd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGComponentSelectorSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x101;
  return;
}

// Destruct<FPCGComponentSelectorSettings> @ 149a18d00

void __cdecl UE::CoreUObject::Private::Destruct<FPCGComponentSelectorSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FPCGComponentSelectorSettings> @ 149a18d40

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGComponentSelectorSettings>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  FScriptContainerElement *_Src;
  void *pvVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_res18;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    local_res18 = param_3;
    do {
      *puVar4 = puVar4[(longlong)param_2 - (longlong)param_1];
      *(undefined8 *)(puVar4 + 4) = *(undefined8 *)((longlong)pvVar3 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar3 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar3 + 0x10));
      }
      *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)((longlong)pvVar3 + 0x10);
      pFVar1 = (ForAnyElementType *)(puVar4 + 0x20);
      puVar4[0x18] = *(undefined1 *)((longlong)pvVar3 + 0x18);
      puVar4[0x19] = *(undefined1 *)((longlong)pvVar3 + 0x19);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar3 + 0x20)) {
        iVar5 = *(int *)((longlong)pvVar3 + 0x28);
        piVar2 = (int *)(puVar4 + 0x2c);
        _Src = ((ForAnyElementType *)((longlong)pvVar3 + 0x20))->Data;
        *(int *)(puVar4 + 0x28) = iVar5;
        if ((iVar5 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar5,*piVar2,pFVar1,iVar5,piVar2);
          if (iVar5 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar5 << 3);
          }
        }
      }
      iVar5 = *(int *)((longlong)pvVar3 + 0x38) + -1;
      if (*(int *)((longlong)pvVar3 + 0x38) == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange
                ((FString *)(puVar4 + 0x30),*(wchar_t **)((longlong)pvVar3 + 0x30),iVar5);
      local_res18 = local_res18 + -1;
      puVar4[0x40] = *(undefined1 *)((longlong)pvVar3 + 0x40);
      puVar4[0x41] = *(undefined1 *)((longlong)pvVar3 + 0x41);
      pvVar3 = (void *)((longlong)pvVar3 + 0x48);
      puVar4 = puVar4 + 0x48;
    } while (local_res18 != 0);
  }
  return true;
}

// GetStructRef<FPCGCustomSelectionKey> @ 149a9f9f0

FPCGCustomSelectionKey * __cdecl
UE::StructUtils::GetStructRef<FPCGCustomSelectionKey>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPCGCustomSelectionKey *pFVar4;
  UPackage *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGCustomSelectionKey *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGCustomSelectionKey *)(*pcVar2)();
    return pFVar4;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGCustomSelectionKey,(UObject *)pUVar5,
                         L"PCGCustomSelectionKey");
  }
  if (param_1 == Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton) {
    return param_2;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGCustomSelectionKey,(UObject *)pUVar5,
                         L"PCGCustomSelectionKey");
    if (Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_149a9faeb;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    return param_2;
  }
LAB_149a9faeb:
  if (Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGCustomSelectionKey,(UObject *)pUVar5,
                         L"PCGCustomSelectionKey");
  }
  UObjectBaseUtility::GetPathName
            ((UObjectBaseUtility *)
             Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton,&local_18,
             (UObject *)0x0);
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                     ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return param_2;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FPCGCustomSelectionKey *)(*pcVar2)();
  return pFVar4;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_> @ 149aca6a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
          (uint param_1,uint param_2,
          ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
          *param_3,int *param_4)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>::
    ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_> @ 149aca770

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
          (ushort param_1,ForElementType<UActorComponent_*> *param_2,int *param_3)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 149aca840

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (ushort param_1,ForElementType<__int64> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 149aca910

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 149aca9f0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int *param_5,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
              (param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 149acaac0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 149acaba0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,int param_3,ForElementType<double> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 149acac80

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,int param_3,ForElementType<double> *param_4,int *param_5,
          int *param_6)

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
    iVar7 = 0x400;
    uVar8 = (ulonglong)param_1;
    if (0x400 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x401) {
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
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_> @ 149acad60

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UActorComponent_*> *param_4,
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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_> @ 149acae40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TQuat<double>_> *param_4,
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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TQuat<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_> @ 149acaf20

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TRotator<double>_> *param_4,int *param_5,int *param_6)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_> @ 149acaff0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TRotator<double>_> *param_4,int *param_5,int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 149acb0d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TTransform<double>_> *param_4,int *param_5,int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_> @ 149acb1b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector2<double>_> *param_4,int *param_5,int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 149acb290

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector4<double>_> *param_4,int *param_5,int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 149acb370

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 149acb450

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_> @ 149acb530

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
          *param_4,int *param_5,int *param_6)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_> @ 149acb610

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftClassPath> *param_4,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_> @ 149acb6e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftClassPath> *param_4,
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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 149acb7c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftObjectPath> *param_4,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 149acb890

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftObjectPath> *param_4,
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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 149acb970

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 149acba50

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 149acbb30

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<int>_> @ 149acbc10

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<float>_> @ 149acbc90

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<float>_>
          (uint param_1,uint param_2,int param_3,ForElementType<float> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<double>_> @ 149acbd10

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<double>_>
          (uint param_1,uint param_2,int param_3,ForElementType<double> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TQuat<double>_>_> @ 149acbd90

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TQuat<double>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TRotator<double>_>_> @ 149acbe10

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TRotator<double>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TTransform<double>_>_> @ 149acbe90

int __cdecl
UE::Core::Private::
ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TTransform<double>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector2<double>_>_> @ 149acbf10

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector2<double>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector4<double>_>_> @ 149acbf90

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Math::TVector4<double>_> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector<double>_>_> @ 149acc010

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftClassPath>_> @ 149acc090

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftClassPath> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftObjectPath>_> @ 149acc110

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FSoftObjectPath> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<FName>_> @ 149acc190

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<FString>_> @ 149acc210

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<__int64>_> @ 149acc290

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<__int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_> @ 149acc310

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<256>::ForElementType<bool>_>
          (uint param_1,uint param_2,int param_3,ForElementType<bool> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0x100 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 0x100;
  }
  return iVar5;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 149acc390

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 149acc450

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,ForElementType<float> *param_3,int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 149acc510

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (uint param_1,uint param_2,ForElementType<float> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 149acc5d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,ForElementType<double> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 149acc690

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (uint param_1,uint param_2,ForElementType<double> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x400;
  if (0x400 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_> @ 149acc750

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TQuat<double>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TQuat<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_> @ 149acc810

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TRotator<double>_> *param_3,
          int param_4,int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_> @ 149acc8d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TRotator<double>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TRotator<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_> @ 149acc990

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TTransform<double>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TTransform<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_> @ 149acca50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector2<double>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_> @ 149accb10

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector4<double>_> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector4<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 149accbd0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<double>_> *param_3,int param_4
          ,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 149accc90

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<double>_> *param_3,int param_4
          ,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_> @ 149accd50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
          (uint param_1,uint param_2,
          ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_> @ 149acce10

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftClassPath> *param_3,int param_4,
          int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_> @ 149acced0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftClassPath> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 149accf90

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftObjectPath> *param_3,int param_4,
          int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 149acd050

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftObjectPath> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 149acd110

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,ForElementType<FString> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 149acd1d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,ForElementType<__int64> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<int>_> @ 149acd290

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<float>_> @ 149acd2f0

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<float>_>
          (uint param_1,uint param_2,ForElementType<float> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<double>_> @ 149acd350

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<double>_>
          (uint param_1,uint param_2,ForElementType<double> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TQuat<double>_>_> @ 149acd3b0

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TQuat<double>_> *param_3,int param_4,
          int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TRotator<double>_>_> @ 149acd410

void __cdecl
UE::Core::Private::
ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TRotator<double>_> *param_3,
          int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TTransform<double>_>_> @ 149acd470

void __cdecl
UE::Core::Private::
ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TTransform<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TTransform<double>_> *param_3,
          int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector2<double>_>_> @ 149acd4d0

void __cdecl
UE::Core::Private::
ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector2<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector2<double>_> *param_3,
          int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector4<double>_>_> @ 149acd530

void __cdecl
UE::Core::Private::
ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector4<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector4<double>_> *param_3,
          int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector<double>_>_> @ 149acd590

void __cdecl
UE::Core::Private::
ReallocShrink<0,TFixedAllocator<256>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,ForElementType<UE::Math::TVector<double>_> *param_3,int param_4
          ,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<FSoftClassPath>_> @ 149acd5f0

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<FSoftClassPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftClassPath> *param_3,int param_4,
          int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<FSoftObjectPath>_> @ 149acd650

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<FSoftObjectPath>_>
          (uint param_1,uint param_2,ForElementType<FSoftObjectPath> *param_3,int param_4,
          int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<FName>_> @ 149acd6b0

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<FName>_>
          (uint param_1,uint param_2,ForElementType<FName> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<FString>_> @ 149acd710

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<FString>_>
          (uint param_1,uint param_2,ForElementType<FString> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<__int64>_> @ 149acd770

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<__int64>_>
          (uint param_1,uint param_2,ForElementType<__int64> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<256>::ForElementType<bool>_> @ 149acd7d0

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<256>::ForElementType<bool>_>
          (uint param_1,uint param_2,ForElementType<bool> *param_3,int param_4,int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((0x100 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 0x100) {
    *param_5 = 0x100;
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_> @ 149acd830

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UActorComponent_*> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_> @ 149acd8b0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Math::TVector<double>_> *param_4
          ,int param_5,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector<double>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_> @ 149acd930

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>
          *param_4,int param_5,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGClusterElement::FClusteringData::FExpectationMaximizationData::FGaussian>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 149acd9b0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x101) {
      iVar1 = 0x100;
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FPCGFilterByAttributeThresholdSettingsRange> @ 149b32430

void __cdecl
UE::CoreUObject::Private::Construct<FPCGFilterByAttributeThresholdSettingsRange>(void *param_1)

{
  memset((void *)((longlong)param_1 + 1),0,0x1cf);
  *(undefined1 *)param_1 = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x50));
  *(undefined1 *)((longlong)param_1 + 0x1c0) = 0;
  return;
}

// ConstructForTests<FPCGFilterByAttributeThresholdSettingsRange> @ 149b32480

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGFilterByAttributeThresholdSettingsRange>
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x50));
  *(undefined1 *)((longlong)param_1 + 0x1c0) = 0;
  return;
}

// Destruct<FPCGFilterByAttributeThresholdSettingsRange> @ 149b324c0

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGFilterByAttributeThresholdSettingsRange>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a8));
  }
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPCGFilterByAttributeThresholdSettingsRange> @ 149b32510

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGFilterByAttributeThresholdSettingsRange>
          (void *param_1,void *param_2,int param_3)

{
  FPCGFilterByAttributeThresholdSettings *pFVar1;
  FPCGFilterByAttributeThresholdSettings *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FPCGFilterByAttributeThresholdSettings *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPCGFilterByAttributeThresholdSettings::operator=(this,pFVar1);
      this[1].bUseConstantThreshold = pFVar1[1].bUseConstantThreshold;
      param_3 = param_3 + -1;
      this = (FPCGFilterByAttributeThresholdSettings *)&this[1].ThresholdAttribute.field_0x8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGFilterByAttributeThresholdSettings> @ 149b32bc0

void __cdecl
UE::CoreUObject::Private::Construct<FPCGFilterByAttributeThresholdSettings>(void *param_1)

{
  memset((void *)((longlong)param_1 + 1),0,0x1bf);
  *(undefined1 *)param_1 = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x50));
  return;
}

// ConstructForTests<FPCGFilterByAttributeThresholdSettings> @ 149b32c00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGFilterByAttributeThresholdSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x50));
  return;
}

// Destruct<FPCGFilterByAttributeThresholdSettings> @ 149b32c30

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGFilterByAttributeThresholdSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a8));
  }
  if (*(void **)((longlong)param_1 + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x188));
  }
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPCGFilterByAttributeThresholdSettings> @ 149b32d00

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGFilterByAttributeThresholdSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar3);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x14);
      *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x1c);
      *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x24);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar3 + 0x30));
      *(undefined1 *)((longlong)param_1 + 0x40) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x40);
      *(undefined1 *)((longlong)param_1 + 0x50) = *(undefined1 *)((longlong)param_2 + 0x50);
      *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
      *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
      *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x88);
      *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
      *(undefined8 *)((longlong)param_1 + 0x88) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xa8);
      *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
      *(undefined8 *)((longlong)param_1 + 0xa8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xb8);
      *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
      *(undefined8 *)((longlong)param_1 + 0xb8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 200);
      *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
      *(undefined8 *)((longlong)param_1 + 200) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xd8);
      *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
      *(undefined8 *)((longlong)param_1 + 0xd8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xe8);
      *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0xe0);
      *(undefined8 *)((longlong)param_1 + 0xe8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xf8);
      *(undefined8 *)((longlong)param_1 + 0xf0) = *(undefined8 *)((longlong)param_2 + 0xf0);
      *(undefined8 *)((longlong)param_1 + 0xf8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x108);
      *(undefined8 *)((longlong)param_1 + 0x100) = *(undefined8 *)((longlong)param_2 + 0x100);
      *(undefined8 *)((longlong)param_1 + 0x108) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x118);
      *(undefined8 *)((longlong)param_1 + 0x110) = *(undefined8 *)((longlong)param_2 + 0x110);
      *(undefined8 *)((longlong)param_1 + 0x118) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x128);
      *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
      *(undefined8 *)((longlong)param_1 + 0x128) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x138);
      *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
      *(undefined8 *)((longlong)param_1 + 0x138) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x140),(FString *)((longlong)param_2 + 0x140));
      *(undefined1 *)((longlong)param_1 + 0x150) = *(undefined1 *)((longlong)param_2 + 0x150);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x160);
      *(undefined8 *)((longlong)param_1 + 0x158) = *(undefined8 *)((longlong)param_2 + 0x158);
      *(undefined8 *)((longlong)param_1 + 0x160) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x168) = *(undefined8 *)((longlong)param_2 + 0x168);
      *(undefined8 *)((longlong)param_1 + 0x170) = *(undefined8 *)((longlong)param_2 + 0x170);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x178),
                 (FSoftObjectPath *)((longlong)param_2 + 0x178));
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x198),
                 (FSoftObjectPath *)((longlong)param_2 + 0x198));
      puVar1 = (undefined1 *)((longlong)param_2 + 0x1b8);
      param_2 = (void *)((longlong)param_2 + 0x1c0);
      *(undefined1 *)((longlong)param_1 + 0x1b8) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x1c0);
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UPCGBlueprintBaseElement>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGBlueprintBaseElement>_>,UPCGBlueprintBaseElement_*> @ 149b44b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintBaseElement ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UPCGBlueprintBaseElement>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGBlueprintBaseElement>_>,UPCGBlueprintBaseElement_*>
          (TObjectPtr<UPCGBlueprintBaseElement> *param_1)

{
  return (UPCGBlueprintBaseElement **)param_1;
}

// Decay<TObjectPtr<UPCGBlueprintElement>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGBlueprintElement>_>,UPCGBlueprintElement_*> @ 149b44b50

UPCGBlueprintElement ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UPCGBlueprintElement>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGBlueprintElement>_>,UPCGBlueprintElement_*>
          (TObjectPtr<UPCGBlueprintElement> *param_1)

{
  return (UPCGBlueprintElement **)param_1;
}

// GetStructPtr<FPCGInteractiveToolWorkingData> @ 149b4ea90

/* WARNING: Removing unreachable block (ram,0x000149b4eaf3) */

FPCGInteractiveToolWorkingData * __cdecl
UE::StructUtils::GetStructPtr<FPCGInteractiveToolWorkingData>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FPCGInteractiveToolWorkingData::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FPCGInteractiveToolWorkingData::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FPCGInteractiveToolWorkingData *)0x0;
    }
  }
  return (FPCGInteractiveToolWorkingData *)0x0;
}

// GetStructPtr<FPCGInteractiveToolWorkingData,FPCGInteractiveToolWorkingBaseData> @ 149b4eb30

FPCGInteractiveToolWorkingData * __cdecl
UE::StructUtils::GetStructPtr<FPCGInteractiveToolWorkingData,FPCGInteractiveToolWorkingBaseData>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar3 = FPCGInteractiveToolWorkingData::StaticStruct();
    if (param_1 == pUVar3) {
      return param_2;
    }
    pUVar3 = FPCGInteractiveToolWorkingData::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
  }
  return (FPCGInteractiveToolWorkingData *)0x0;
}

// GetStructPtr<FPCGInteractiveToolWorkingData,FPCGInteractiveToolWorkingBaseData> @ 149b4ebb0

FPCGInteractiveToolWorkingData * __cdecl
UE::StructUtils::GetStructPtr<FPCGInteractiveToolWorkingData,FPCGInteractiveToolWorkingBaseData>
          (UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar3 = FPCGInteractiveToolWorkingData::StaticStruct();
    if (param_1 == pUVar3) {
      return param_2;
    }
    pUVar3 = FPCGInteractiveToolWorkingData::StaticStruct();
    if (pUVar3 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return param_2;
      }
    }
  }
  return (FPCGInteractiveToolWorkingData *)0x0;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 149b53c70

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
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
    iVar8 = 0x1000;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x1000 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x1001) {
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
    TSizedInlineAllocator<4096,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_> @ 149b53d40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
          (ushort param_1,ForElementType<UActorComponent_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_> @ 149b53e10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
          (ushort param_1,ForElementType<UPCGComponent_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 149b53ee0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_> @ 149b53fb0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UPCGComponent_*> *param_4,
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
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 2) {
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_> @ 149b54090

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
          (uint param_1,uint param_2,ForElementType<UPCGComponent_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 2) {
    iVar2 = 1;
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_> @ 149b54150

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UActorComponent_*> *param_4,
          int param_5,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UActorComponent_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_> @ 149b541d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UPCGComponent_*> *param_4,
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
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGComponent_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 149b54250

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FString> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FPCGSelfPruningParameters> @ 149b9ef90

void __cdecl UE::CoreUObject::Private::Construct<FPCGSelfPruningParameters>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined4 *)((longlong)param_1 + 0x91) = 0;
  *(undefined2 *)((longlong)param_1 + 0x95) = 0;
  *(undefined1 *)((longlong)param_1 + 0x97) = 0;
  *(undefined1 *)param_1 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3e800000;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x50));
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// ConstructForTests<FPCGSelfPruningParameters> @ 149b9f010

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSelfPruningParameters>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3e800000;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x50));
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// Destruct<FPCGSelfPruningParameters> @ 149b9f050

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSelfPruningParameters>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x78),*(int *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPCGSelfPruningParameters> @ 149b9f0b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSelfPruningParameters>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      FPCGAttributePropertyInputSelector::operator=
                ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8),
                 (FPCGAttributePropertyInputSelector *)((longlong)param_2 + 8));
      *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
      *(undefined1 *)((longlong)param_1 + 0x4c) = *(undefined1 *)((longlong)param_2 + 0x4c);
      *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_2 + 0x4d);
      FPCGAttributePropertyInputSelector::operator=
                ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x50),
                 (FPCGAttributePropertyInputSelector *)((longlong)param_2 + 0x50));
      puVar1 = (undefined1 *)((longlong)param_2 + 0x90);
      param_2 = (void *)((longlong)param_2 + 0x98);
      *(undefined1 *)((longlong)param_1 + 0x90) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x98);
    } while (param_3 != 0);
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef_const_*>_> @ 149be30a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef_const_*>_>
          (ushort param_1,ForElementType<PCGPointOctree::FPointRef_const_*> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGPointOctree::FPointRef_const_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef_const_*>_> @ 149be3170

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGPointOctree::FPointRef_const_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<PCGPointOctree::FPointRef_const_*> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x101) {
      iVar1 = 0x100;
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGPointOctree::FPointRef_const_*>::ResizeAllocation(param_4,param_5,iVar1,uVar3)
    ;
  }
  return;
}

// Construct<FPCGSplineSamplerParams> @ 149c3a390

void __cdecl UE::CoreUObject::Private::Construct<FPCGSplineSamplerParams>(void *param_1)

{
  memset(param_1,0,0x138);
  FPCGSplineSamplerParams::FPCGSplineSamplerParams(param_1);
  return;
}

// ConstructForTests<FPCGSplineSamplerParams> @ 149c3a3c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSplineSamplerParams>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 8;
  *(undefined4 *)((longlong)param_1 + 0x10) = 8;
  *(undefined8 *)((longlong)param_1 + 0x14) = 8;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x38));
  *(undefined1 *)((longlong)param_1 + 0xc0) = 0;
  *(FName *)((longlong)param_1 + 0xc4) = PCGSplineSamplerConstants::NextDirectionDeltaAttributeName;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  *(FName *)((longlong)param_1 + 0xd0) = PCGSplineSamplerConstants::CurvatureAttributeName;
  *(undefined1 *)((longlong)param_1 + 0xd8) = 0;
  *(FName *)((longlong)param_1 + 0xdc) = PCGSplineSamplerConstants::SegmentIndexAttributeName;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  *(FName *)((longlong)param_1 + 0xe8) = PCGSplineSamplerConstants::SubsegmentIndexAttributeName;
  *(undefined1 *)((longlong)param_1 + 0xf0) = 0;
  *(FName *)((longlong)param_1 + 0xf4) = PCGSplineSamplerConstants::ArriveTangentAttributeName;
  *(FName *)((longlong)param_1 + 0xfc) = PCGSplineSamplerConstants::LeaveTangentAttributeName;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  *(FName *)((longlong)param_1 + 0x108) = PCGSplineSamplerConstants::AlphaAttributeName;
  *(undefined1 *)((longlong)param_1 + 0x110) = 0;
  *(FName *)((longlong)param_1 + 0x114) = PCGSplineSamplerConstants::DistanceAttributeName;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(FName *)((longlong)param_1 + 0x120) = PCGSplineSamplerConstants::InputKeyAttributeName;
  *(undefined1 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f000000;
  *(undefined2 *)((longlong)param_1 + 0x130) = 0;
  *(undefined1 *)((longlong)param_1 + 0x132) = 0;
  return;
}

// Destruct<FPCGSplineSamplerParams> @ 149c3a490

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSplineSamplerParams>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  *(undefined ***)((longlong)param_1 + 0x38) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x40));
  return;
}

// Copy<FPCGSplineSamplerParams> @ 149c3a510

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSplineSamplerParams>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  void *pvVar4;
  undefined1 *puVar5;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar5 = param_1;
    do {
      puVar2 = puVar5 + ((longlong)param_2 - (longlong)param_1);
      *puVar5 = *puVar2;
      puVar5[1] = *(undefined1 *)((longlong)pvVar4 + 1);
      puVar5[2] = *(undefined1 *)((longlong)pvVar4 + 2);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)((longlong)pvVar4 + 4);
      *(undefined4 *)(puVar5 + 8) = *(undefined4 *)((longlong)pvVar4 + 8);
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)((longlong)pvVar4 + 0xc);
      *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)((longlong)pvVar4 + 0x10);
      *(undefined4 *)(puVar5 + 0x14) = *(undefined4 *)((longlong)pvVar4 + 0x14);
      *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)((longlong)pvVar4 + 0x18);
      *(undefined4 *)(puVar5 + 0x1c) = *(undefined4 *)((longlong)pvVar4 + 0x1c);
      *(undefined4 *)(puVar5 + 0x20) = *(undefined4 *)((longlong)pvVar4 + 0x20);
      puVar5[0x24] = *(undefined1 *)((longlong)pvVar4 + 0x24);
      *(undefined4 *)(puVar5 + 0x28) = *(undefined4 *)((longlong)pvVar4 + 0x28);
      *(undefined4 *)(puVar5 + 0x2c) = *(undefined4 *)((longlong)pvVar4 + 0x2c);
      puVar5[0x30] = *(undefined1 *)((longlong)pvVar4 + 0x30);
      puVar5[0x31] = *(undefined1 *)((longlong)pvVar4 + 0x31);
      puVar5[0x32] = *(undefined1 *)((longlong)pvVar4 + 0x32);
      *(undefined4 *)(puVar5 + 0xa0) = *(undefined4 *)(puVar2 + 0xa0);
      puVar5[0xa4] = puVar2[0xa4];
      puVar5[0xa5] = puVar2[0xa5];
      if (puVar5 != puVar2) {
        iVar3 = *(int *)(puVar2 + 0xb0);
        piVar1 = (int *)(puVar5 + 0xb4);
        _Src = *(void **)(puVar2 + 0xa8);
        *(int *)(puVar5 + 0xb0) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,(ForAnyElementType *)(puVar5 + 0xa8),iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)(puVar5 + 0xa8))->Data,_Src,(longlong)iVar3 * 0x1c);
          }
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(puVar2 + 0xb8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)(puVar2 + 0xb8));
      }
      param_3 = param_3 + -1;
      *(undefined8 *)(puVar5 + 0xb8) = *(undefined8 *)(puVar2 + 0xb8);
      puVar5[0xc0] = *(undefined1 *)((longlong)pvVar4 + 0xc0);
      *(undefined8 *)(puVar5 + 0xc4) = *(undefined8 *)((longlong)pvVar4 + 0xc4);
      puVar5[0xcc] = *(undefined1 *)((longlong)pvVar4 + 0xcc);
      *(undefined8 *)(puVar5 + 0xd0) = *(undefined8 *)((longlong)pvVar4 + 0xd0);
      puVar5[0xd8] = *(undefined1 *)((longlong)pvVar4 + 0xd8);
      *(undefined8 *)(puVar5 + 0xdc) = *(undefined8 *)((longlong)pvVar4 + 0xdc);
      puVar5[0xe4] = *(undefined1 *)((longlong)pvVar4 + 0xe4);
      *(undefined8 *)(puVar5 + 0xe8) = *(undefined8 *)((longlong)pvVar4 + 0xe8);
      puVar5[0xf0] = *(undefined1 *)((longlong)pvVar4 + 0xf0);
      *(undefined8 *)(puVar5 + 0xf4) = *(undefined8 *)((longlong)pvVar4 + 0xf4);
      *(undefined8 *)(puVar5 + 0xfc) = *(undefined8 *)((longlong)pvVar4 + 0xfc);
      puVar5[0x104] = *(undefined1 *)((longlong)pvVar4 + 0x104);
      *(undefined8 *)(puVar5 + 0x108) = *(undefined8 *)((longlong)pvVar4 + 0x108);
      puVar5[0x110] = *(undefined1 *)((longlong)pvVar4 + 0x110);
      *(undefined8 *)(puVar5 + 0x114) = *(undefined8 *)((longlong)pvVar4 + 0x114);
      puVar5[0x11c] = *(undefined1 *)((longlong)pvVar4 + 0x11c);
      *(undefined8 *)(puVar5 + 0x120) = *(undefined8 *)((longlong)pvVar4 + 0x120);
      puVar5[0x128] = *(undefined1 *)((longlong)pvVar4 + 0x128);
      *(undefined4 *)(puVar5 + 300) = *(undefined4 *)((longlong)pvVar4 + 300);
      puVar5[0x130] = *(undefined1 *)((longlong)pvVar4 + 0x130);
      puVar5[0x131] = *(undefined1 *)((longlong)pvVar4 + 0x131);
      puVar5[0x132] = *(undefined1 *)((longlong)pvVar4 + 0x132);
      pvVar4 = (void *)((longlong)pvVar4 + 0x138);
      puVar5 = puVar5 + 0x138;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSplineMeshParams> @ 149c3aac0

void __cdecl UE::CoreUObject::Private::Construct<FPCGSplineMeshParams>(void *param_1)

{
  memset(param_1,0,0xe8);
  FPCGSplineMeshParams::FPCGSplineMeshParams(param_1);
  return;
}

// ConstructForTests<FPCGSplineMeshParams> @ 149c3aaf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSplineMeshParams>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x40))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x68) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
  *(double *)((longlong)param_1 + 0x78) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x88))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x98) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar1;
  *(double *)((longlong)param_1 + 0xa8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xb0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
  *(double *)((longlong)param_1 + 0xc0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0xd0))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  return;
}

// Destruct<FPCGSplineMeshParams> @ 149c3ab00

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSplineMeshParams>(void *param_1)

{
  return;
}

// Copy<FPCGSplineMeshParams> @ 149c3ab10

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSplineMeshParams>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)((longlong)param_1 + lVar2);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_2 + 4);
      *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
      *(undefined4 *)((longlong)param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x80);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
      *(undefined8 *)((longlong)param_1 + 0x90) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0xa0);
      *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
      *(undefined8 *)((longlong)param_1 + 0xa0) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_2 + 0xa8);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0xb8);
      *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
      *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
      *(undefined4 *)((longlong)param_1 + 200) = *(undefined4 *)((longlong)param_2 + 200);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0xd8);
      *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
      *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
      if ((undefined4 *)((longlong)param_2 + 0xe0) != (undefined4 *)((longlong)param_1 + 0xe0)) {
        if (*(char *)((longlong)param_2 + 0xe4) == '\0') {
          if (*(char *)((longlong)param_1 + 0xe4) != '\0') {
            *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
          }
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 0xe0);
          *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
        }
      }
      param_2 = (void *)((longlong)param_2 + 0xe8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0xe8);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGSplineMeshParams> @ 149c3ad50

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGSplineMeshParams>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStackX_8 [32];
  uint auStack_d8 [4];
  TVector2<double>_u_0 TStack_c8;
  TVector2<double>_u_0 TStack_b8;
  TVector<double>_u_0 TStack_a8;
  TVector<double>_u_0 TStack_88;
  TVector<double>_u_0 TStack_68;
  TVector<double>_u_0 TStack_48;
  TVector<double>_u_0 TStack_28;
  
  if (*(char *)((longlong)param_1 + 0xe4) == '\0') {
    TStack_c8._s_0.X = *(double *)((longlong)param_1 + 0xd0);
    TStack_c8._s_0.Y = *(double *)((longlong)param_1 + 0xd8);
    TStack_a8._s_0.X = *(double *)((longlong)param_1 + 0xb0);
    TStack_a8._s_0.Y = *(double *)((longlong)param_1 + 0xb8);
    TStack_a8._s_0.Z = *(double *)((longlong)param_1 + 0xc0);
    TStack_88._s_0.Z = *(double *)((longlong)param_1 + 0xa8);
    TStack_88._s_0.X = *(double *)((longlong)param_1 + 0x98);
    TStack_88._s_0.Y = *(double *)((longlong)param_1 + 0xa0);
    TStack_b8._s_0.X = *(double *)((longlong)param_1 + 0x88);
    TStack_b8._s_0.Y = *(double *)((longlong)param_1 + 0x90);
    TStack_68._s_0.X = *(double *)((longlong)param_1 + 0x68);
    TStack_68._s_0.Y = *(double *)((longlong)param_1 + 0x70);
    TStack_68._s_0.Z = *(double *)((longlong)param_1 + 0x78);
    TStack_48._s_0.X = *(double *)((longlong)param_1 + 0x50);
    TStack_48._s_0.Y = *(double *)((longlong)param_1 + 0x58);
    TStack_48._s_0.Z = *(double *)((longlong)param_1 + 0x60);
    TStack_28._s_0.X = *(double *)((longlong)param_1 + 8);
    TStack_28._s_0.Y = *(double *)((longlong)param_1 + 0x10);
    TStack_28._s_0.Z = *(double *)((longlong)param_1 + 0x18);
    uVar3 = `FPCGSplineMeshParams::ComputeHash'::__l2::<lambda_1>::
            operator()<enum_EPCGSplineMeshForwardAxis,bool,bool,UE::Math::TVector<double>,float,float,float,bool,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,float,UE::Math::TVector2<double>_>
                      (auStackX_8,*(EPCGSplineMeshForwardAxis *)param_1,
                       *(bool *)((longlong)param_1 + 4),*(bool *)((longlong)param_1 + 5),
                       (TVector<double> *)&TStack_28._s_0,*(float *)((longlong)param_1 + 0x20),
                       *(float *)((longlong)param_1 + 0x24),*(float *)((longlong)param_1 + 0x28),
                       *(bool *)((longlong)param_1 + 0x2c),(TVector<double> *)&TStack_48._s_0,
                       (TVector<double> *)&TStack_68._s_0,*(float *)((longlong)param_1 + 0x80),
                       (TVector2<double> *)&TStack_b8._s_0,(TVector<double> *)&TStack_88._s_0,
                       (TVector<double> *)&TStack_a8._s_0,*(float *)((longlong)param_1 + 200),
                       (TVector2<double> *)&TStack_c8._s_0);
    if (auStack_d8 != (uint *)((longlong)param_1 + 0xe0)) {
      *(uint *)((longlong)param_1 + 0xe0) = uVar3;
      *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
    }
  }
  if (*(char *)((longlong)param_1 + 0xe4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((longlong)param_1 + 0xe0);
}

// Construct<FPCGStaticMeshSpawnerContext> @ 149c3c090

void __cdecl UE::CoreUObject::Private::Construct<FPCGStaticMeshSpawnerContext>(void *param_1)

{
  memset(param_1,0,0x460);
  FPCGStaticMeshSpawnerContext::FPCGStaticMeshSpawnerContext(param_1);
  return;
}

// ConstructForTests<FPCGStaticMeshSpawnerContext> @ 149c3c0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGStaticMeshSpawnerContext>(void *param_1)

{
  FPCGContext::FPCGContext(param_1);
  *(undefined1 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined ***)param_1 = &FPCGStaticMeshSpawnerContext::_vftable__for__FPCGContext__;
  *(undefined ***)((longlong)param_1 + 600) =
       &FPCGStaticMeshSpawnerContext::_vftable__for__IPCGAsyncLoadingContext__;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2e8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ea) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  *(undefined8 *)((longlong)param_1 + 0x318) = 0;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  *(undefined8 *)((longlong)param_1 + 0x328) = 0;
  *(undefined8 *)((longlong)param_1 + 0x340) = 0;
  *(undefined4 *)((longlong)param_1 + 0x348) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x350) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  *(undefined4 *)((longlong)param_1 + 0x368) = 0;
  *(undefined8 *)((longlong)param_1 + 0x370) = 0;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x3b0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e0) = 0;
  *(undefined8 *)((longlong)param_1 + 1000) = 0;
  *(undefined8 *)((longlong)param_1 + 0x400) = 0;
  *(undefined4 *)((longlong)param_1 + 0x408) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x410) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x420) = 0;
  *(undefined4 *)((longlong)param_1 + 0x428) = 0;
  *(undefined8 *)((longlong)param_1 + 0x430) = 0;
  *(undefined8 *)((longlong)param_1 + 0x438) = 0;
  *(undefined8 *)((longlong)param_1 + 0x440) = 0;
  *(undefined8 *)((longlong)param_1 + 0x448) = 0;
  *(undefined8 *)((longlong)param_1 + 0x450) = 0;
  *(undefined8 *)((longlong)param_1 + 0x458) = 0;
  return;
}

// Destruct<FPCGStaticMeshSpawnerContext> @ 149c3c0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FPCGStaticMeshSpawnerContext>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x450) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x450));
  }
  DestructItems<FPCGSoftISMComponentDescriptor,int>
            (*(FPCGSoftISMComponentDescriptor **)((longlong)param_1 + 0x440),
             *(int *)((longlong)param_1 + 0x448));
  if (*(void **)((longlong)param_1 + 0x440) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x440));
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x430),
             *(int *)((longlong)param_1 + 0x438));
  if (*(void **)((longlong)param_1 + 0x430) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x430));
  }
  *(undefined4 *)((longlong)param_1 + 0x428) = 0;
  if (*(void **)((longlong)param_1 + 0x420) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x420));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPCGInstancesAndWeights>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x3e0));
  if (*(void **)((longlong)param_1 + 0x3d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3d0));
  }
  *(undefined4 *)((longlong)param_1 + 0x3c8) = 0;
  if (*(void **)((longlong)param_1 + 0x3c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x3c0));
  }
  TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x380));
  DestructItems<TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FPCGMeshInstanceList,TSizedDefaultAllocator<32>_> **)
              ((longlong)param_1 + 0x370),*(int *)((longlong)param_1 + 0x378));
  if (*(void **)((longlong)param_1 + 0x370) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x370));
  }
  *(undefined4 *)((longlong)param_1 + 0x368) = 0;
  if (*(void **)((longlong)param_1 + 0x360) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x360));
  }
  TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSoftObjectPtr<UStaticMesh>,TMap<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPCGBasePointData_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 800));
  FPCGMeshMaterialOverrideHelper::~FPCGMeshMaterialOverrideHelper
            ((FPCGMeshMaterialOverrideHelper *)((longlong)param_1 + 0x2b8));
  DestructItems<FPCGStaticMeshSpawnerContext::FPackedInstanceListData,int>
            (*(FPackedInstanceListData **)((longlong)param_1 + 0x288),
             *(int *)((longlong)param_1 + 0x290));
  if (*(void **)((longlong)param_1 + 0x288) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x288));
  }
  IPCGAsyncLoadingContext::~IPCGAsyncLoadingContext
            ((IPCGAsyncLoadingContext *)((longlong)param_1 + 600));
  FPCGContext::~FPCGContext(param_1);
  return;
}

// Copy<FPCGStaticMeshSpawnerContext> @ 149c3c0e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGStaticMeshSpawnerContext>
          (void *param_1,void *param_2,int param_3)

{
  FPCGStaticMeshSpawnerContext *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FPCGStaticMeshSpawnerContext::operator=
                (this,(FPCGStaticMeshSpawnerContext *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_> @ 149c48c80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
          (ushort param_1,ForElementType<FConstStructView> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_> @ 149c48d50

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FConstStructView> *param_4,
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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_> @ 149c48e30

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGTaggedData> *param_4,
          int *param_5,int *param_6)

{
  ForElementType<FPCGTaggedData> *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ForElementType<FPCGTaggedData> _Src;
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
  if (uVar8 < 9) {
    _Src = param_4->SecondaryData;
    uVar8 = 8;
LAB_149c48eeb:
    uVar6 = uVar8;
    if (_Src == (ForElementType<FPCGTaggedData>)0x0) goto LAB_149c48f39;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 0x78);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 9) {
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
    _Src = *this;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    uVar8 = uVar6;
    if (uVar6 < 9) goto LAB_149c48eeb;
    iVar5 = iVar1;
    if (_Src == (ForElementType<FPCGTaggedData>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 * 0x78);
      goto LAB_149c48f39;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_149c48f39:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_> @ 149c48f70

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>_>
          (uint param_1,uint param_2,ForElementType<FConstStructView> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FConstStructView>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// Construct<FPCGLandscapeLayerWeight> @ 149c95140

void __cdecl UE::CoreUObject::Private::Construct<FPCGLandscapeLayerWeight>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGLandscapeLayerWeight> @ 149c95150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGLandscapeLayerWeight>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGLandscapeLayerWeight> @ 149c95160

void __cdecl UE::CoreUObject::Private::Destruct<FPCGLandscapeLayerWeight>(void *param_1)

{
  return;
}

// Copy<FPCGLandscapeLayerWeight> @ 149c95170

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGLandscapeLayerWeight>(void *param_1,void *param_2,int param_3)

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

// Construct<FPCGGridCellDescriptor> @ 149c953b0

void __cdecl UE::CoreUObject::Private::Construct<FPCGGridCellDescriptor>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x1c) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FPCGGridCellDescriptor> @ 149c953e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGridCellDescriptor>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x1c) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// Destruct<FPCGGridCellDescriptor> @ 149c95410

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGridCellDescriptor>(void *param_1)

{
  return;
}

// Copy<FPCGGridCellDescriptor> @ 149c95520

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGGridCellDescriptor>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((longlong)pvVar1 + 4);
      *(undefined1 *)((longlong)puVar2 + 5) = *(undefined1 *)((longlong)pvVar1 + 5);
      puVar2[2] = *(undefined4 *)((longlong)pvVar1 + 8);
      if ((undefined4 *)((longlong)pvVar1 + 0xc) != puVar2 + 3) {
        if (*(char *)((longlong)pvVar1 + 0x10) == '\0') {
          if (*(char *)(puVar2 + 4) != '\0') {
            *(undefined1 *)(puVar2 + 4) = 0;
          }
        }
        else {
          puVar2[3] = *(undefined4 *)((longlong)pvVar1 + 0xc);
          *(undefined1 *)(puVar2 + 4) = 1;
        }
      }
      *(undefined8 *)(puVar2 + 5) = *(undefined8 *)((longlong)pvVar1 + 0x14);
      puVar2[7] = *(undefined4 *)((longlong)pvVar1 + 0x1c);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x20);
      puVar2 = puVar2 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGGridCellDescriptor> @ 149c956a0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGGridCellDescriptor>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x14),0xc,0);
  uVar2 = ::GetTypeHash(param_1);
  uVar4 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar3 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// Construct<FPCGGridDescriptor> @ 149c95990

void __cdecl UE::CoreUObject::Private::Construct<FPCGGridDescriptor>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FPCGGridDescriptor> @ 149c959b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGridDescriptor>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGGridDescriptor> @ 149c959d0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGridDescriptor>(void *param_1)

{
  return;
}

// Copy<FPCGGridDescriptor> @ 149c959e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGGridDescriptor>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_1 + lVar2 + 4);
      *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_1 + lVar2 + 5);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      puVar1 = (undefined4 *)((longlong)param_1 + lVar2 + 0xc);
      if (puVar1 != (undefined4 *)((longlong)param_1 + 0xc)) {
        if (*(char *)((longlong)param_1 + lVar2 + 0x10) == '\0') {
          if (*(char *)((longlong)param_1 + 0x10) != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x10) = 0;
          }
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0xc) = *puVar1;
          *(undefined1 *)((longlong)param_1 + 0x10) = 1;
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGGridDescriptor> @ 149c95a70

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGGridDescriptor>(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FArchive *pFVar4;
  uint auStack_b8 [4];
  FArchiveCrc32 FStack_a8;
  
  if (*(char *)((longlong)param_1 + 0x10) == '\0') {
    FArchiveCrc32::FArchiveCrc32(&FStack_a8,*(uint *)((longlong)param_1 + 8),(UObject *)0x0);
    if (*(undefined4 **)(FStack_a8._padding_ + 8) < *(undefined4 **)FStack_a8._padding_ + 1) {
      if ((FStack_a8._padding_._2_1_ & 1) == 0) {
        (**(code **)(FStack_a8._padding_ + 0x188))(&FStack_a8,param_1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&FStack_a8,param_1);
      }
    }
    else {
      *(undefined4 *)param_1 = **(undefined4 **)FStack_a8._padding_;
      *(longlong *)FStack_a8._padding_ = *(longlong *)FStack_a8._padding_ + 4;
    }
    pFVar4 = ::operator<<((FArchive *)&FStack_a8,(bool *)((longlong)param_1 + 4));
    ::operator<<(pFVar4,(bool *)((longlong)param_1 + 5));
    FArchive::~FArchive((FArchive *)&FStack_a8);
    if (auStack_b8 != (uint *)((longlong)param_1 + 0xc)) {
      *(uint *)((longlong)param_1 + 0xc) = FStack_a8.CRC;
      *(undefined1 *)((longlong)param_1 + 0x10) = 1;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x10) == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return *(uint *)((longlong)param_1 + 0xc);
}

// Construct<FPCGStackContext> @ 149c95ac0

void __cdecl UE::CoreUObject::Private::Construct<FPCGStackContext>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  return;
}

// ConstructForTests<FPCGStackContext> @ 149c95af0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGStackContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  return;
}

// Destruct<FPCGStackContext> @ 149c95b10

void __cdecl UE::CoreUObject::Private::Destruct<FPCGStackContext>(void *param_1)

{
  DestructItems<FPCGStack,int>
            (*(FPCGStack **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGStackContext> @ 149c95b50

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGStackContext>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FPCGStack *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 8);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      if (pFVar5 != pFVar1) {
        DestructItems<FPCGStack,int>((FPCGStack *)pFVar5->Data,*(int *)((longlong)param_1 + 0x10));
        iVar3 = *(int *)((longlong)param_1 + lVar6 + 0x10);
        piVar2 = (int *)((longlong)param_1 + 0x14);
        pFVar4 = (FPCGStack *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,*piVar2,pFVar5,iVar3,piVar2);
          ConstructItems<FPCGStack,FPCGStack,int>(pFVar5->Data,pFVar4,iVar3);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar6 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGStack> @ 149c95cd0

void __cdecl UE::CoreUObject::Private::Construct<FPCGStack>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGStack> @ 149c95d10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGStack>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGStack> @ 149c95d70

void __cdecl UE::CoreUObject::Private::Destruct<FPCGStack>(void *param_1)

{
  DestructItems<FPCGStackFrame,int>
            (*(FPCGStackFrame **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGStack> @ 149c95db0

bool __cdecl UE::CoreUObject::Private::Copy<FPCGStack>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FPCGStackFrame *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
      if (pFVar5 != pFVar1) {
        DestructItems<FPCGStackFrame,int>
                  ((FPCGStackFrame *)pFVar5->Data,*(int *)((longlong)param_1 + 0x10));
        iVar3 = *(int *)((longlong)param_1 + lVar6 + 0x10);
        piVar2 = (int *)((longlong)param_1 + 0x14);
        pFVar4 = (FPCGStackFrame *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar3,*piVar2,pFVar5,iVar3,piVar2);
          ConstructItems<FPCGStackFrame,FPCGStackFrame,int>(pFVar5->Data,pFVar4,iVar3);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGStack> @ 149c95ea0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGStack>(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStackX_8 [8];
  
  iVar1 = *(int *)((longlong)param_1 + 0x10);
  uVar2 = 0;
  lVar4 = *(longlong *)((longlong)param_1 + 8);
  lVar5 = (longlong)iVar1 * 0x30 + lVar4;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x10) != iVar1) {
      `TCheckedPointerIterator<FPCGStackFrame_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (lVar4 == lVar5) break;
    uVar3 = *(uint *)(lVar4 + 0x2c);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar6 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xf;
    lVar4 = lVar4 + 0x30;
  }
  return uVar2;
}

// Construct<FPCGStackFrame> @ 149c96030

void __cdecl UE::CoreUObject::Private::Construct<FPCGStackFrame>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// ConstructForTests<FPCGStackFrame> @ 149c96080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGStackFrame>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// Destruct<FPCGStackFrame> @ 149c960d0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGStackFrame>(void *param_1)

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

// PostSerialize<FPCGStackFrame> @ 149c960f0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGStackFrame>(FArchive *param_1,void *param_2)

{
  if ((param_1->field_0x28 & 1) != 0) {
    FPCGStackFrame::ComputeHash(param_2);
    return;
  }
  return;
}

// Copy<FPCGStackFrame> @ 149c96110

bool __cdecl UE::CoreUObject::Private::Copy<FPCGStackFrame>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 8),
                 (FSoftObjectPath *)((longlong)param_1 + lVar1 + 8));
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x2c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGStackFrame> @ 149c961a0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGStackFrame>(void *param_1)

{
  return *(uint *)((longlong)param_1 + 0x2c);
}

// Construct<FPCGPinDependencyExpression> @ 149c96270

void __cdecl UE::CoreUObject::Private::Construct<FPCGPinDependencyExpression>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGPinDependencyExpression> @ 149c96280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPinDependencyExpression>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGPinDependencyExpression> @ 149c96290

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPinDependencyExpression>(void *param_1)

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

// Copy<FPCGPinDependencyExpression> @ 149c962b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPinDependencyExpression>(void *param_1,void *param_2,int param_3)

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
                    (8,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGGraphTask> @ 149c96390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FPCGGraphTask>(void *param_1)

{
  memset(param_1,0,0x148);
  FPCGGraphTask::FPCGGraphTask(param_1);
  return;
}

// ConstructForTests<FPCGGraphTask> @ 149c963c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGraphTask>(void *param_1)

{
  undefined8 uStackX_8;
  
  *(undefined4 *)((longlong)param_1 + 0x10) = 3;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x30),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x18),(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x88),(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  *(undefined2 *)((longlong)param_1 + 0x140) = 0;
  return;
}

// Destruct<FPCGGraphTask> @ 149c963d0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGraphTask>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xf0));
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  DestructItems<FPCGTaggedData,int>
            (*(FPCGTaggedData **)((longlong)param_1 + 0xc0),*(int *)((longlong)param_1 + 200));
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FPCGGraphTaskInput,int>
            (*(FPCGGraphTaskInput **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FPCGGraphTask> @ 149c963e0

bool __cdecl UE::CoreUObject::Private::Copy<FPCGGraphTask>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FPCGGraphTaskInput *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForAnyElementType *pFVar8;
  ForAnyElementType *pFVar9;
  
  if (param_3 != 0) {
    pFVar9 = param_1;
    do {
      pFVar8 = (ForAnyElementType *)((longlong)pFVar9 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar9 != pFVar8) {
        DestructItems<FPCGGraphTaskInput,int>
                  ((FPCGGraphTaskInput *)pFVar9->Data,*(int *)&pFVar9[1].Data);
        iVar2 = *(int *)&pFVar8[1].Data;
        piVar1 = (int *)((longlong)&pFVar9[1].Data + 4);
        pFVar4 = (FPCGGraphTaskInput *)pFVar8->Data;
        iVar3 = *piVar1;
        *(int *)&pFVar9[1].Data = iVar2;
        if ((iVar2 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,iVar2,iVar3,pFVar9,iVar2,piVar1);
          ConstructItems<FPCGGraphTaskInput,FPCGGraphTaskInput,int>(pFVar9->Data,pFVar4,iVar2);
        }
      }
      *(undefined4 *)&pFVar9[2].Data = *(undefined4 *)&pFVar8[2].Data;
      pFVar9[3].Data = pFVar8[3].Data;
      FSoftObjectPath::operator=((FSoftObjectPath *)(pFVar9 + 4),(FSoftObjectPath *)(pFVar8 + 4));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar8[8].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar8[8].Data);
      }
      pFVar9[8].Data = pFVar8[8].Data;
      pFVar9[9].Data = pFVar8[9].Data;
      pFVar9[10].Data = pFVar8[10].Data;
      pFVar9[0xb].Data = pFVar8[0xb].Data;
      FPCGPinDependencyExpression::operator=
                ((FPCGPinDependencyExpression *)(pFVar9 + 0xc),
                 (FPCGPinDependencyExpression *)(pFVar8 + 0xc));
      *(undefined4 *)&pFVar9[0xe].Data = *(undefined4 *)&pFVar8[0xe].Data;
      pFVar5 = pFVar8[0x10].Data;
      pFVar6 = pFVar8[0xf].Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        LOCK();
        *(int *)(pFVar5 + 8) = *(int *)(pFVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = (TReferenceControllerBase<1> *)pFVar9[0x10].Data;
      pFVar9[0xf].Data = pFVar6;
      pFVar9[0x10].Data = pFVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      pFVar5 = pFVar8[0x12].Data;
      pFVar9[0x11].Data = pFVar8[0x11].Data;
      pFVar9[0x12].Data = pFVar5;
      pFVar9[0x13].Data = pFVar8[0x13].Data;
      pFVar9[0x14].Data = pFVar8[0x14].Data;
      pFVar5 = pFVar8[0x16].Data;
      pFVar6 = pFVar8[0x15].Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        LOCK();
        *(int *)(pFVar5 + 8) = *(int *)(pFVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar7 = (TReferenceControllerBase<1> *)pFVar9[0x16].Data;
      pFVar9[0x15].Data = pFVar6;
      pFVar9[0x16].Data = pFVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      *(undefined1 *)&pFVar9[0x17].Data = *(undefined1 *)&pFVar8[0x17].Data;
      FPCGDataCollection::operator=
                ((FPCGDataCollection *)(pFVar9 + 0x18),(FPCGDataCollection *)(pFVar8 + 0x18));
      TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
      operator=((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)(pFVar9 + 0x1e),
                (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 *)(pFVar8 + 0x1e));
      param_3 = param_3 + -1;
      *(undefined1 *)&pFVar9[0x28].Data = *(undefined1 *)&pFVar8[0x28].Data;
      *(undefined1 *)((longlong)&pFVar9[0x28].Data + 1) =
           *(undefined1 *)((longlong)&pFVar8[0x28].Data + 1);
      pFVar9 = pFVar9 + 0x29;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGGraphTaskInput> @ 149c967e0

void __cdecl UE::CoreUObject::Private::Construct<FPCGGraphTaskInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  return;
}

// ConstructForTests<FPCGGraphTaskInput> @ 149c96820

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGGraphTaskInput>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0x100;
  return;
}

// Destruct<FPCGGraphTaskInput> @ 149c96840

void __cdecl UE::CoreUObject::Private::Destruct<FPCGGraphTaskInput>(void *param_1)

{
  if ((*(char *)((longlong)param_1 + 0x70) != '\0') &&
     (*(void **)((longlong)param_1 + 0x50) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if ((*(char *)((longlong)param_1 + 0x38) != '\0') &&
     (*(void **)((longlong)param_1 + 0x18) != (void *)0x0)) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FPCGGraphTaskInput> @ 149c96890

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGGraphTaskInput>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      TOptional<FPCGPinProperties>::operator=
                ((TOptional<FPCGPinProperties> *)(puVar2 + 1),
                 (TOptional<FPCGPinProperties> *)((longlong)pvVar1 + 8));
      TOptional<FPCGPinProperties>::operator=
                ((TOptional<FPCGPinProperties> *)(puVar2 + 8),
                 (TOptional<FPCGPinProperties> *)((longlong)pvVar1 + 0x40));
      *(undefined1 *)(puVar2 + 0xf) = *(undefined1 *)((longlong)pvVar1 + 0x78);
      *(undefined1 *)((longlong)puVar2 + 0x79) = *(undefined1 *)((longlong)pvVar1 + 0x79);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x80);
      puVar2 = puVar2 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// CheckStructType<FPCGPerExecutionCacheBounds> @ 149c98450

void __cdecl UE::StructUtils::CheckStructType<FPCGPerExecutionCacheBounds>(void)

{
  return;
}

// CheckStructType<FPCGPerExecutionCachePCGData> @ 149c98460

void __cdecl UE::StructUtils::CheckStructType<FPCGPerExecutionCachePCGData>(void)

{
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGGraphTask>_> @ 149ca0370

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGGraphTask>_>
          (uint param_1,uint param_2,ForElementType<FPCGGraphTask> *param_3,int *param_4)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGGraphTask>::
    ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_> @ 149ca0440

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
          (ushort param_1,ForElementType<FPCGComponentRef> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_> @ 149ca0510

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
          (ushort param_1,ForElementType<FPCGCrc> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_> @ 149ca05e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_>
          (ushort param_1,ForElementType<FPCGTaggedData> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_> @ 149ca06b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
          (ushort param_1,ForElementType<unsigned___int64> *param_2,int *param_3)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_> @ 149ca0780

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGComponentRef> *param_4,
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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_> @ 149ca0860

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGCrc> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_> @ 149ca0940

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned___int64> *param_4,
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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_> @ 149ca0a20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
          (uint param_1,uint param_2,ForElementType<FPCGComponentRef> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_> @ 149ca0ae0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
          (uint param_1,uint param_2,ForElementType<FPCGCrc> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_> @ 149ca0ba0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
          (uint param_1,uint param_2,ForElementType<unsigned___int64> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_> @ 149ca0c60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGComponentRef> *param_4,
          int param_5,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGComponentRef>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_> @ 149ca0ce0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGCrc> *param_4,int param_5,
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_> @ 149ca0d60

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGTaggedData> *param_4,int param_5
          ,int *param_6)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator() @ 149ca6fd0

void __thiscall
`UE::String::ParseTokens<TArray<TStringView<wchar_t>,TSizedDefaultAllocator<32>_>_>'::__l2::
<lambda_1>::operator()(void *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((TStringView<wchar_t> *)pFVar2->Data <= param_1) &&
     (param_1 < (TStringView<wchar_t> *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar7 + 1;
  uVar5 = *(undefined8 *)&param_1->Size;
  pFVar3 = pFVar2->Data;
  *(wchar_t **)(pFVar3 + (longlong)iVar7 * 0x10) = param_1->DataPtr;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 0x10 + 8) = uVar5;
  return;
}

// Construct<FPCGMatchAndSetWeightedEntry> @ 149ce3fd0

void __cdecl UE::CoreUObject::Private::Construct<FPCGMatchAndSetWeightedEntry>(void *param_1)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(param_1);
  *(undefined4 *)((longlong)param_1 + 0x170) = 1;
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  return;
}

// ConstructForTests<FPCGMatchAndSetWeightedEntry> @ 149ce4000

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGMatchAndSetWeightedEntry>(void *param_1)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(param_1);
  *(undefined4 *)((longlong)param_1 + 0x170) = 1;
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  return;
}

// Destruct<FPCGMatchAndSetWeightedEntry> @ 149ce4030

void __cdecl UE::CoreUObject::Private::Destruct<FPCGMatchAndSetWeightedEntry>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
    return;
  }
  return;
}

// Construct<FPCGDefaultValueContainer> @ 149ce40c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDefaultValueContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x50));
  return;
}

// ConstructForTests<FPCGDefaultValueContainer> @ 149ce4100

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDefaultValueContainer>(void *param_1)

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
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x50));
  return;
}

// Destruct<FPCGDefaultValueContainer> @ 149ce4140

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDefaultValueContainer>(void *param_1)

{
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FPCGMatchAndSetWeightedEntry> @ 149ce4180

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGMatchAndSetWeightedEntry>
          (void *param_1,void *param_2,int param_3)

{
  FPCGMetadataTypesConstantStruct *pFVar1;
  undefined3 uVar2;
  FPCGMetadataTypesConstantStruct *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FPCGMetadataTypesConstantStruct *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPCGMetadataTypesConstantStruct::operator=(this,pFVar1);
      uVar2 = *(undefined3 *)&pFVar1[1].field_0x1;
      this[1].Type = pFVar1[1].Type;
      *(undefined3 *)&this[1].field_0x1 = uVar2;
      param_3 = param_3 + -1;
      this = (FPCGMetadataTypesConstantStruct *)&this[1].DoubleValue;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FPCGDefaultValueContainer> @ 149ce4210

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDefaultValueContainer>(void *param_1,void *param_2,int param_3)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(this,pTVar1);
      if (this + 1 != pTVar1 + 1) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(this + 1),
                   (UScriptStruct *)*(TObjectPtr<UScriptStruct_const_>_u_0 *)&pTVar1[1].Elements,
                   *(uchar **)&pTVar1[1].Elements.field_0x8);
      }
      param_3 = param_3 + -1;
      this = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &this[1].Elements.field_0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataLayerSettings> @ 149ce4620

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataLayerSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x50));
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0xa8));
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf8) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x100));
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 8),
             PCGDataLayerHelpers::Constants::DataLayerReferenceAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 0x50),
             PCGDataLayerHelpers::Constants::IncludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 0xa8),
             PCGDataLayerHelpers::Constants::ExcludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 0x100),
             PCGDataLayerHelpers::Constants::AddDataLayersAttribute,true);
  return;
}

// ConstructForTests<FPCGDataLayerSettings> @ 149ce4630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataLayerSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x50));
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0xa8));
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf8) = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 0x100));
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 8),
             PCGDataLayerHelpers::Constants::DataLayerReferenceAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 0x50),
             PCGDataLayerHelpers::Constants::IncludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 0xa8),
             PCGDataLayerHelpers::Constants::ExcludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)((longlong)param_1 + 0x100),
             PCGDataLayerHelpers::Constants::AddDataLayersAttribute,true);
  return;
}

// Destruct<FPCGDataLayerSettings> @ 149ce4640

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataLayerSettings>(void *param_1)

{
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            (*(TSoftObjectPtr<UDataLayerAsset> **)((longlong)param_1 + 0x140),
             *(int *)((longlong)param_1 + 0x148));
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x128),*(int *)((longlong)param_1 + 0x130));
  if (*(void **)((longlong)param_1 + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x128));
  }
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            (*(TSoftObjectPtr<UDataLayerAsset> **)((longlong)param_1 + 0xe8),
             *(int *)((longlong)param_1 + 0xf0));
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0xd0),*(int *)((longlong)param_1 + 0xd8));
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            (*(TSoftObjectPtr<UDataLayerAsset> **)((longlong)param_1 + 0x90),
             *(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x78),*(int *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPCGDataLayerSettings> @ 149ce4690

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataLayerSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      FPCGAttributePropertySelector::operator=
                ((FPCGAttributePropertySelector *)((longlong)param_1 + 8),
                 (FPCGAttributePropertySelector *)((longlong)param_2 + 8));
      FPCGDataLayerReferenceSelector::operator=
                ((FPCGDataLayerReferenceSelector *)((longlong)param_1 + 0x48),
                 (FPCGDataLayerReferenceSelector *)((longlong)param_2 + 0x48));
      FPCGDataLayerReferenceSelector::operator=
                ((FPCGDataLayerReferenceSelector *)((longlong)param_1 + 0xa0),
                 (FPCGDataLayerReferenceSelector *)((longlong)param_2 + 0xa0));
      FPCGDataLayerReferenceSelector::operator=
                ((FPCGDataLayerReferenceSelector *)((longlong)param_1 + 0xf8),
                 (FPCGDataLayerReferenceSelector *)((longlong)param_2 + 0xf8));
      param_2 = (void *)((longlong)param_2 + 0x150);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x150);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataLayerReferenceSelector> @ 149ce4ae0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataLayerReferenceSelector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51) = 0;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57) = 0;
  *(undefined1 *)param_1 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FPCGDataLayerReferenceSelector> @ 149ce4b30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDataLayerReferenceSelector>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FPCGDataLayerReferenceSelector> @ 149ce4b60

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataLayerReferenceSelector>(void *param_1)

{
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            (*(TSoftObjectPtr<UDataLayerAsset> **)((longlong)param_1 + 0x48),
             *(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FPCGDataLayerReferenceSelector> @ 149ce4bf0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataLayerReferenceSelector>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      FPCGAttributePropertySelector::operator=
                ((FPCGAttributePropertySelector *)((longlong)param_1 + 8),
                 (FPCGAttributePropertySelector *)((longlong)param_1 + lVar5 + 8));
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x48);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x48)) {
        DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
                  ((TSoftObjectPtr<UDataLayerAsset> *)pFVar4->Data,
                   *(int *)((longlong)param_1 + 0x50));
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x50);
        piVar1 = (int *)((longlong)param_1 + 0x54);
        pFVar3 = ((ForAnyElementType *)((longlong)param_1 + lVar5 + 0x48))->Data;
        *(int *)((longlong)param_1 + 0x50) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<TSoftObjectPtr<UDataLayerAsset>,TSoftObjectPtr<UDataLayerAsset>,int>
                    (pFVar4->Data,(TSoftObjectPtr<UDataLayerAsset> *)pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGMatchAndSetByAttributeEntry> @ 149ce4cf0

void __cdecl UE::CoreUObject::Private::Construct<FPCGMatchAndSetByAttributeEntry>(void *param_1)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(param_1);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170));
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d8) = 0;
  return;
}

// ConstructForTests<FPCGMatchAndSetByAttributeEntry> @ 149ce4d30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGMatchAndSetByAttributeEntry>(void *param_1)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(param_1);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170));
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2d8) = 0;
  return;
}

// Destruct<FPCGMatchAndSetByAttributeEntry> @ 149ce4d70

void __cdecl UE::CoreUObject::Private::Destruct<FPCGMatchAndSetByAttributeEntry>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2c8));
  }
  if (*(void **)((longlong)param_1 + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a8));
  }
  if (*(void **)((longlong)param_1 + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x260));
  }
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
    return;
  }
  return;
}

// Copy<FPCGMatchAndSetByAttributeEntry> @ 149ce4dc0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGMatchAndSetByAttributeEntry>
          (void *param_1,void *param_2,int param_3)

{
  FPCGMetadataTypesConstantStruct *pFVar1;
  FPCGMetadataTypesConstantStruct *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FPCGMetadataTypesConstantStruct *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPCGMetadataTypesConstantStruct::operator=(this,pFVar1);
      FPCGMetadataTypesConstantStruct::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSkinnedMeshPackedCustomData> @ 149ce52e0

void __cdecl UE::CoreUObject::Private::Construct<FPCGSkinnedMeshPackedCustomData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGSkinnedMeshPackedCustomData> @ 149ce5300

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGSkinnedMeshPackedCustomData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGSkinnedMeshPackedCustomData> @ 149ce5320

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSkinnedMeshPackedCustomData>(void *param_1)

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

// Copy<FPCGSkinnedMeshPackedCustomData> @ 149ce5340

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSkinnedMeshPackedCustomData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar1 + 8));
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPackedCustomData> @ 149ce54b0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPackedCustomData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGPackedCustomData> @ 149ce54d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPackedCustomData>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPCGPackedCustomData> @ 149ce54f0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPackedCustomData>(void *param_1)

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

// Copy<FPCGPackedCustomData> @ 149ce5510

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPackedCustomData>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)(puVar1 + 2),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGHLODSettings> @ 149ce6580

void __cdecl UE::CoreUObject::Private::Construct<FPCGHLODSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGHLODSettings> @ 149ce6590

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGHLODSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGHLODSettings> @ 149ce65b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGHLODSettings>(void *param_1)

{
  return;
}

// Copy<FPCGHLODSettings> @ 149ce6700

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGHLODSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructPtr<UE::Math::TQuat<double>_> @ 149d2ced0

/* WARNING: Removing unreachable block (ram,0x000149d2cf33) */

TQuat<double> * __cdecl
UE::StructUtils::GetStructPtr<UE::Math::TQuat<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (TQuat<double> *)0x0;
    }
  }
  return (TQuat<double> *)0x0;
}

// GetStructPtr<UE::Math::TRotator<double>_> @ 149d2cf70

/* WARNING: Removing unreachable block (ram,0x000149d2cfd3) */

TRotator<double> * __cdecl
UE::StructUtils::GetStructPtr<UE::Math::TRotator<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (TRotator<double> *)0x0;
    }
  }
  return (TRotator<double> *)0x0;
}

// GetStructPtr<UE::Math::TTransform<double>_> @ 149d2d010

/* WARNING: Removing unreachable block (ram,0x000149d2d073) */

TTransform<double> * __cdecl
UE::StructUtils::GetStructPtr<UE::Math::TTransform<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (TTransform<double> *)0x0;
    }
  }
  return (TTransform<double> *)0x0;
}

// GetStructPtr<UE::Math::TVector2<double>_> @ 149d2d0b0

/* WARNING: Removing unreachable block (ram,0x000149d2d113) */

TVector2<double> * __cdecl
UE::StructUtils::GetStructPtr<UE::Math::TVector2<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (TVector2<double> *)0x0;
    }
  }
  return (TVector2<double> *)0x0;
}

// GetStructPtr<UE::Math::TVector4<double>_> @ 149d2d150

/* WARNING: Removing unreachable block (ram,0x000149d2d1b3) */

TVector4<double> * __cdecl
UE::StructUtils::GetStructPtr<UE::Math::TVector4<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (TVector4<double> *)0x0;
    }
  }
  return (TVector4<double> *)0x0;
}

// GetStructPtr<UE::Math::TVector<double>_> @ 149d2d1f0

/* WARNING: Removing unreachable block (ram,0x000149d2d253) */

TVector<double> * __cdecl
UE::StructUtils::GetStructPtr<UE::Math::TVector<double>_>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (TVector<double> *)0x0;
    }
  }
  return (TVector<double> *)0x0;
}

// GetStructPtr<FSoftClassPath> @ 149d2d290

/* WARNING: Removing unreachable block (ram,0x000149d2d2f3) */

FSoftClassPath * __cdecl
UE::StructUtils::GetStructPtr<FSoftClassPath>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FSoftClassPath::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FSoftClassPath::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FSoftClassPath *)0x0;
    }
  }
  return (FSoftClassPath *)0x0;
}

// GetStructPtr<FSoftObjectPath> @ 149d2d330

/* WARNING: Removing unreachable block (ram,0x000149d2d393) */

FSoftObjectPath * __cdecl
UE::StructUtils::GetStructPtr<FSoftObjectPath>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FSoftObjectPath::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FSoftObjectPath::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FSoftObjectPath *)0x0;
    }
  }
  return (FSoftObjectPath *)0x0;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 149d2ee00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (ushort param_1,ForElementType<unsigned_int> *param_2,int *param_3)

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
    if (uVar1 < 0xe) {
      iVar8 = 0xd;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xe) {
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
    TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>_> @ 149d2eed0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>_>
          (ushort param_1,ForElementType<UPCGNode_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_> @ 149d2efa0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
          (ushort param_1,ForElementType<FProperty_const_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCG::IO::Accessor::FCacheEntry>_> @ 149d2f070

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCG::IO::Accessor::FCacheEntry>_>
          (ushort param_1,ForElementType<PCG::IO::Accessor::FCacheEntry> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCG::IO::Accessor::FCacheEntry>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_> @ 149d2f140

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
          (ushort param_1,ForElementType<PCGIndexing::FPCGIndexRange> *param_2,int *param_3)

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
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGIndexing::FPCGIndexRange>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 149d2f210

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (ushort param_1,ForElementType<__int64> *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<void_const_*>_> @ 149d2f2e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<void_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<void_const_*> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<void_const_*>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_> @ 149d2f3c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>_>
          (uint param_1,uint param_2,ForElementType<FProperty_const_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FProperty_const_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<void_const_*>_> @ 149d2f480

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<void_const_*>_>
          (uint param_1,uint param_2,ForElementType<void_const_*> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<void_const_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_> @ 149d2f540

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
          (uint param_1,uint param_2,ForElementType<PCGIndexing::FPCGIndexRange> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x41) {
    iVar2 = 0x40;
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
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGIndexing::FPCGIndexRange>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>_> @ 149d2f600

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>_>
          (uint param_1,uint param_2,int param_3,ForElementType<TTuple<__int64,float>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_> @ 149d2f680

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64> *param_4,int param_5,
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FPCGAnimBankDataRow> @ 149d72bd0

void __cdecl UE::CoreUObject::Private::Construct<FPCGAnimBankDataRow>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined ***)param_1 = &___7FPCGAnimBankDataRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPCGAnimBankDataRow> @ 149d72bf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGAnimBankDataRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGAnimBankDataRow__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPCGAnimBankDataRow> @ 149d72c10

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAnimBankDataRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FPCGAnimBankDataRow> @ 149d72c70

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAnimBankDataRow>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 8) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x10) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x18) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x20);
  }
  return true;
}

// Construct<FPCGWeightedByCategoryEntryList> @ 149d73360

void __cdecl UE::CoreUObject::Private::Construct<FPCGWeightedByCategoryEntryList>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x11) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FPCGWeightedByCategoryEntryList> @ 149d733a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGWeightedByCategoryEntryList>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FPCGWeightedByCategoryEntryList> @ 149d733c0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGWeightedByCategoryEntryList>(void *param_1)

{
  DestructItems<FPCGMeshSelectorWeightedEntry,int>
            (*(FPCGMeshSelectorWeightedEntry **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPCGWeightedByCategoryEntryList> @ 149d73410

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGWeightedByCategoryEntryList>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FPCGMeshSelectorWeightedEntry *pFVar3;
  ForAnyElementType *pFVar4;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x18);
    *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
    if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 0x18)) {
      DestructItems<FPCGMeshSelectorWeightedEntry,int>
                ((FPCGMeshSelectorWeightedEntry *)pFVar4->Data,*(int *)((longlong)param_1 + 0x20));
      iVar2 = *(int *)((longlong)param_2 + 0x20);
      piVar1 = (int *)((longlong)param_1 + 0x24);
      pFVar3 = (FPCGMeshSelectorWeightedEntry *)
               ((ForAnyElementType *)((longlong)param_2 + 0x18))->Data;
      *(int *)((longlong)param_1 + 0x20) = iVar2;
      if ((iVar2 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x288,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
        ConstructItems<FPCGMeshSelectorWeightedEntry,FPCGMeshSelectorWeightedEntry,int>
                  (pFVar4->Data,pFVar3,iVar2);
      }
    }
    param_1 = (int *)((longlong)param_1 + 0x28);
    param_2 = (int *)((longlong)param_2 + 0x28);
  }
  return true;
}

// Construct<FPCGMeshSelectorWeightedEntry> @ 149d739d0

void __cdecl UE::CoreUObject::Private::Construct<FPCGMeshSelectorWeightedEntry>(void *param_1)

{
  memset(param_1,0,0x288);
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(param_1);
  *(undefined4 *)((longlong)param_1 + 0x280) = 1;
  return;
}

// ConstructForTests<FPCGMeshSelectorWeightedEntry> @ 149d73a10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGMeshSelectorWeightedEntry>(void *param_1)

{
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(param_1);
  *(undefined4 *)((longlong)param_1 + 0x280) = 1;
  return;
}

// Destruct<FPCGMeshSelectorWeightedEntry> @ 149d73a40

void __cdecl UE::CoreUObject::Private::Destruct<FPCGMeshSelectorWeightedEntry>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  if (*(void **)((longlong)param_1 + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x260));
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor(param_1);
  return;
}

// Copy<FPCGMeshSelectorWeightedEntry> @ 149d73a80

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGMeshSelectorWeightedEntry>
          (void *param_1,void *param_2,int param_3)

{
  FSoftISMComponentDescriptor *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftISMComponentDescriptor::operator=(param_1,param_2);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x260),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x260));
    ::FString::operator=
              ((FString *)&((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_,
               (FString *)&((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_);
    pFVar1 = (FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260);
    param_2 = &((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_;
    *(int *)&((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_ =
         (int)pFVar1->_padding_;
    param_1 = &((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_;
  }
  return true;
}

// Construct<FPCGActorPropertyOverride> @ 149d74120

void __cdecl UE::CoreUObject::Private::Construct<FPCGActorPropertyOverride>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyInputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::LastAttributeName;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FPCGActorPropertyOverride> @ 149d74180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGActorPropertyOverride>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyInputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::LastAttributeName;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FPCGActorPropertyOverride> @ 149d742c0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGActorPropertyOverride>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FPCGActorPropertyOverride> @ 149d74310

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGActorPropertyOverride>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    param_2 = (void *)((longlong)param_2 + 0x50);
    param_1 = (void *)((longlong)param_1 + 0x50);
  }
  return true;
}

// Construct<FPCGMeshInstanceList> @ 149d745d0

void __cdecl UE::CoreUObject::Private::Construct<FPCGMeshInstanceList>(void *param_1)

{
  memset(param_1,0,0x2b0);
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(param_1);
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// ConstructForTests<FPCGMeshInstanceList> @ 149d74620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGMeshInstanceList>(void *param_1)

{
  FPCGSoftISMComponentDescriptor::FPCGSoftISMComponentDescriptor(param_1);
  *(undefined8 *)((longlong)param_1 + 0x280) = 0;
  *(undefined8 *)((longlong)param_1 + 0x288) = 0;
  *(undefined8 *)((longlong)param_1 + 0x298) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a8) = 0;
  return;
}

// Destruct<FPCGMeshInstanceList> @ 149d74670

void __cdecl UE::CoreUObject::Private::Destruct<FPCGMeshInstanceList>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2a0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a0));
  }
  if (*(void **)((longlong)param_1 + 0x280) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x280));
  }
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  if (*(void **)((longlong)param_1 + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x260));
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor(param_1);
  return;
}

// Copy<FPCGMeshInstanceList> @ 149d74810

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGMeshInstanceList>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftISMComponentDescriptor::operator=(param_1,param_2);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x260),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x260));
    ::FString::operator=
              ((FString *)&((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_,
               (FString *)&((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_);
    plVar2 = &((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_;
    if (plVar2 != &((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_) {
      iVar3 = (int)((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_;
      piVar1 = (int *)((longlong)
                       &((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_ + 4)
      ;
      _Src = (void *)((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_;
      iVar4 = *piVar1;
      *(int *)&((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_ = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((void *)*plVar2,_Src,(longlong)iVar3 * 0x60);
        }
      }
    }
    ((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_ =
         ((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_;
    ((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_ =
         ((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               &((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               &((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_);
    param_1 = &((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_;
    param_2 = &((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_;
  }
  return true;
}

// Construct<FPCGObjectPropertyOverrideDescription> @ 149d74c10

void __cdecl
UE::CoreUObject::Private::Construct<FPCGObjectPropertyOverrideDescription>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyInputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::LastAttributeName;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FPCGObjectPropertyOverrideDescription> @ 149d74c70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGObjectPropertyOverrideDescription>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyInputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::LastAttributeName;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FPCGObjectPropertyOverrideDescription> @ 149d74cb0

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGObjectPropertyOverrideDescription>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FPCGObjectPropertyOverrideDescription> @ 149d74dc0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGObjectPropertyOverrideDescription>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    param_2 = (void *)((longlong)param_2 + 0x50);
    param_1 = (void *)((longlong)param_1 + 0x50);
  }
  return true;
}

// Construct<FPCGMetadataTypesConstantStruct> @ 149d75120

void __cdecl UE::CoreUObject::Private::Construct<FPCGMetadataTypesConstantStruct>(void *param_1)

{
  memset(param_1,0,0x170);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(param_1);
  return;
}

// ConstructForTests<FPCGMetadataTypesConstantStruct> @ 149d75150

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGMetadataTypesConstantStruct>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x78) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x80) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x88) = dVar2;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xb0) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xc0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xd0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xe0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  ::FString::FString((FString *)((longlong)param_1 + 0xf0),"");
  *(undefined1 *)((longlong)param_1 + 0x100) = 0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x108) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x110) = dVar2;
  *(double *)((longlong)param_1 + 0x118) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined1 *)((longlong)param_1 + 0x168) = 1;
  return;
}

// Destruct<FPCGMetadataTypesConstantStruct> @ 149d75160

void __cdecl UE::CoreUObject::Private::Destruct<FPCGMetadataTypesConstantStruct>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
    return;
  }
  return;
}

// Copy<FPCGMetadataTypesConstantStruct> @ 149d751f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGMetadataTypesConstantStruct>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar3);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x88);
      *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
      *(undefined8 *)((longlong)param_1 + 0x88) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x98);
      *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0x98) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xa8);
      *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
      *(undefined8 *)((longlong)param_1 + 0xa8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xb8);
      *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
      *(undefined8 *)((longlong)param_1 + 0xb8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 200);
      *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
      *(undefined8 *)((longlong)param_1 + 200) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xd8);
      *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0xd0);
      *(undefined8 *)((longlong)param_1 + 0xd8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0xe8);
      *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0xe0);
      *(undefined8 *)((longlong)param_1 + 0xe8) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0xf0),(FString *)((longlong)param_2 + 0xf0));
      *(undefined1 *)((longlong)param_1 + 0x100) = *(undefined1 *)((longlong)param_2 + 0x100);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x110);
      *(undefined8 *)((longlong)param_1 + 0x108) = *(undefined8 *)((longlong)param_2 + 0x108);
      *(undefined8 *)((longlong)param_1 + 0x110) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x118) = *(undefined8 *)((longlong)param_2 + 0x118);
      *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x128),
                 (FSoftObjectPath *)((longlong)param_2 + 0x128));
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x148),
                 (FSoftObjectPath *)((longlong)param_2 + 0x148));
      puVar1 = (undefined1 *)((longlong)param_2 + 0x168);
      param_2 = (void *)((longlong)param_2 + 0x170);
      *(undefined1 *)((longlong)param_1 + 0x168) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x170);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSoftISMComponentDescriptor> @ 149d754a0

void __cdecl UE::CoreUObject::Private::Construct<FPCGSoftISMComponentDescriptor>(void *param_1)

{
  UClass *pUVar1;
  
  FSoftISMComponentDescriptor::FSoftISMComponentDescriptor(param_1);
  *(undefined ***)param_1 = &___7FPCGSoftISMComponentDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  pUVar1 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x10) = pUVar1;
  *(byte *)((longlong)param_1 + 0x1dc) = *(byte *)((longlong)param_1 + 0x1dc) & 0xfd;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  FBodyInstance::SetCollisionProfileName
            ((FBodyInstance *)((longlong)param_1 + 0x28),UCollisionProfile::NoCollision_ProfileName)
  ;
  return;
}

// ConstructForTests<FPCGSoftISMComponentDescriptor> @ 149d754b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGSoftISMComponentDescriptor>(void *param_1)

{
  UClass *pUVar1;
  
  FSoftISMComponentDescriptor::FSoftISMComponentDescriptor(param_1);
  *(undefined ***)param_1 = &___7FPCGSoftISMComponentDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0;
  pUVar1 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x10) = pUVar1;
  *(byte *)((longlong)param_1 + 0x1dc) = *(byte *)((longlong)param_1 + 0x1dc) & 0xfd;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  FBodyInstance::SetCollisionProfileName
            ((FBodyInstance *)((longlong)param_1 + 0x28),UCollisionProfile::NoCollision_ProfileName)
  ;
  return;
}

// Destruct<FPCGSoftISMComponentDescriptor> @ 149d754c0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSoftISMComponentDescriptor>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x270) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x270));
  }
  if (*(void **)((longlong)param_1 + 0x260) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x260));
  }
  FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor(param_1);
  return;
}

// Copy<FPCGSoftISMComponentDescriptor> @ 149d75540

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSoftISMComponentDescriptor>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftISMComponentDescriptor::operator=(param_1,param_2);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x260),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x260));
    ::FString::operator=
              ((FString *)&((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_,
               (FString *)&((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_);
    param_2 = &((FSoftISMComponentDescriptor *)((longlong)param_2 + 0x260))->_padding_;
    param_1 = &((FSoftISMComponentDescriptor *)((longlong)param_1 + 0x260))->_padding_;
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FPCGSoftISMComponentDescriptor> @ 149d758c0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPCGSoftISMComponentDescriptor>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  UScriptStruct *pUVar2;
  FPropertyTypeName local_res8 [2];
  FSoftISMComponentDescriptor local_268;
  
  local_res8[0].Index = (param_1->TypeName).Index;
  pUVar2 = FSoftISMComponentDescriptor::StaticStruct();
  bVar1 = FPropertyTypeName::IsStruct(local_res8,(FName)pUVar2->_padding_);
  if (bVar1) {
    FSoftISMComponentDescriptor::FSoftISMComponentDescriptor(&local_268);
    pUVar2 = FSoftISMComponentDescriptor::StaticStruct();
    UScriptStruct::SerializeItem(pUVar2,param_2,&local_268,(void *)0x0);
    FSoftISMComponentDescriptor::operator=(param_3,&local_268);
    FSoftISMComponentDescriptor::~FSoftISMComponentDescriptor(&local_268);
    return true;
  }
  return false;
}

// GetStructTypeHash<FPCGSoftISMComponentDescriptor> @ 149d759a0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGSoftISMComponentDescriptor>(void *param_1)

{
  if (*(int *)((longlong)param_1 + 8) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x10))();
    return *(uint *)((longlong)param_1 + 8);
  }
  return *(uint *)((longlong)param_1 + 8);
}

// Construct<FPCGAttributePropertyOutputSelector> @ 149d75e10

void __cdecl UE::CoreUObject::Private::Construct<FPCGAttributePropertyOutputSelector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyOutputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::SourceAttributeName;
  return;
}

// ConstructForTests<FPCGAttributePropertyOutputSelector> @ 149d75e50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributePropertyOutputSelector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyOutputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::SourceAttributeName;
  return;
}

// Destruct<FPCGAttributePropertyOutputSelector> @ 149d75e90

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAttributePropertyOutputSelector>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// SerializeArchive<FPCGAttributePropertyOutputSelector> @ 149d75ed0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FPCGAttributePropertyOutputSelector>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  return false;
}

// PostSerialize<FPCGAttributePropertyOutputSelector> @ 149d75f00

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGAttributePropertyOutputSelector>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGAttributePropertyOutputSelector> @ 149d75f50

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributePropertyOutputSelector>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x1c) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x38) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
  }
  return true;
}

// ExportTextItem<FPCGAttributePropertyOutputSelector> @ 149d76030

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FPCGAttributePropertyOutputSelector>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  bool bVar1;
  FPCGAttributePropertySelector local_48;
  
  if (param_3 != (void *)0x0) {
    bVar1 = FPCGAttributePropertySelector::ExportTextItem
                      (param_2,param_1,param_3,param_4,param_5,param_6);
    return bVar1;
  }
  bVar1 = FPCGAttributePropertySelector::ExportTextItem
                    (param_2,param_1,&local_48,param_4,param_5,param_6);
  DestructItems<FString,int>((FString *)0x0,0);
  return bVar1;
}

// ImportTextItem<FPCGAttributePropertyOutputSelector> @ 149d760a0

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FPCGAttributePropertyOutputSelector>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FPCGAttributePropertySelector::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// StructuredSerializeFromMismatchedTag<FPCGAttributePropertyOutputSelector> @ 149d760c0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPCGAttributePropertyOutputSelector>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149d760cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)param_3 + 0x10))(param_3,param_1,param_2);
  return (bool)uVar1;
}

// GetStructTypeHash<FPCGAttributePropertyOutputSelector> @ 149d76160

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGAttributePropertyOutputSelector>(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStackX_8 [8];
  
  uVar9 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
  iVar1 = *(int *)((longlong)param_1 + 8);
  uVar2 = (int)((ulonglong)uVar9 >> 0x20) + uVar2;
  uVar5 = iVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar5 << 8;
  uVar7 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar2 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  if (iVar1 == 0) {
    uVar9 = *(undefined8 *)((longlong)param_1 + 0x14);
LAB_149e6b04b:
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
    uVar3 = uVar3 + (int)((ulonglong)uVar9 >> 0x20);
    uVar5 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_149e6b0d4;
      uVar9 = *(undefined8 *)((longlong)param_1 + 0x1c);
      goto LAB_149e6b04b;
    }
    uVar3 = (uint)*(byte *)((longlong)param_1 + 0x38);
    uVar5 = uVar2 - *(byte *)((longlong)param_1 + 0x38);
    uVar2 = 0x9e3779b9 - uVar2;
  }
  uVar2 = uVar2 ^ uVar5 << 8;
  uVar7 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar11 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar5 = (uVar7 - uVar11) - uVar3 ^ uVar11 >> 5;
  uVar2 = (uVar3 - uVar5) - uVar11 ^ uVar5 >> 3;
  uVar3 = (uVar11 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
LAB_149e6b0d4:
  iVar1 = *(int *)((longlong)param_1 + 0x30);
  puVar10 = *(undefined8 **)((longlong)param_1 + 0x28);
  puVar8 = puVar10 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar10 == puVar8) break;
    iVar4 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar6 = L"";
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)*puVar10;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
    puVar10 = puVar10 + 2;
  }
  return uVar2;
}

// Construct<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76bf0

void __cdecl
UE::CoreUObject::Private::Construct<FPCGAttributePropertyOutputNoSourceSelector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return;
}

// ConstructForTests<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76c70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributePropertyOutputNoSourceSelector>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return;
}

// Destruct<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76d20

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGAttributePropertyOutputNoSourceSelector>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// SerializeArchive<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76da0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FPCGAttributePropertyOutputNoSourceSelector>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  return false;
}

// PostSerialize<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76dd0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGAttributePropertyOutputNoSourceSelector>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76ee0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributePropertyOutputNoSourceSelector>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x1c) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x38) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
  }
  return true;
}

// ExportTextItem<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76f80

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FPCGAttributePropertyOutputNoSourceSelector>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  bool bVar1;
  FPCGAttributePropertySelector local_48;
  
  if (param_3 != (void *)0x0) {
    bVar1 = FPCGAttributePropertySelector::ExportTextItem
                      (param_2,param_1,param_3,param_4,param_5,param_6);
    return bVar1;
  }
  bVar1 = FPCGAttributePropertySelector::ExportTextItem
                    (param_2,param_1,&local_48,param_4,param_5,param_6);
  DestructItems<FString,int>((FString *)0x0,0);
  return bVar1;
}

// ImportTextItem<FPCGAttributePropertyOutputNoSourceSelector> @ 149d76ff0

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FPCGAttributePropertyOutputNoSourceSelector>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FPCGAttributePropertySelector::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// StructuredSerializeFromMismatchedTag<FPCGAttributePropertyOutputNoSourceSelector> @ 149d77010

bool __cdecl
UE::CoreUObject::Private::
StructuredSerializeFromMismatchedTag<FPCGAttributePropertyOutputNoSourceSelector>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149d7701f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)param_3 + 0x10))(param_3,param_1,param_2);
  return (bool)uVar1;
}

// GetStructTypeHash<FPCGAttributePropertyOutputNoSourceSelector> @ 149d77030

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGAttributePropertyOutputNoSourceSelector>
          (void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStackX_8 [8];
  
  uVar9 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
  iVar1 = *(int *)((longlong)param_1 + 8);
  uVar2 = (int)((ulonglong)uVar9 >> 0x20) + uVar2;
  uVar5 = iVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar5 << 8;
  uVar7 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar2 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  if (iVar1 == 0) {
    uVar9 = *(undefined8 *)((longlong)param_1 + 0x14);
LAB_149e6b04b:
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
    uVar3 = uVar3 + (int)((ulonglong)uVar9 >> 0x20);
    uVar5 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_149e6b0d4;
      uVar9 = *(undefined8 *)((longlong)param_1 + 0x1c);
      goto LAB_149e6b04b;
    }
    uVar3 = (uint)*(byte *)((longlong)param_1 + 0x38);
    uVar5 = uVar2 - *(byte *)((longlong)param_1 + 0x38);
    uVar2 = 0x9e3779b9 - uVar2;
  }
  uVar2 = uVar2 ^ uVar5 << 8;
  uVar7 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar11 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar5 = (uVar7 - uVar11) - uVar3 ^ uVar11 >> 5;
  uVar2 = (uVar3 - uVar5) - uVar11 ^ uVar5 >> 3;
  uVar3 = (uVar11 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
LAB_149e6b0d4:
  iVar1 = *(int *)((longlong)param_1 + 0x30);
  puVar10 = *(undefined8 **)((longlong)param_1 + 0x28);
  puVar8 = puVar10 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar10 == puVar8) break;
    iVar4 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar6 = L"";
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)*puVar10;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
    puVar10 = puVar10 + 2;
  }
  return uVar2;
}

// Construct<FPCGMatchAndSetWeightedByCategoryEntryList> @ 149d77110

void __cdecl
UE::CoreUObject::Private::Construct<FPCGMatchAndSetWeightedByCategoryEntryList>(void *param_1)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(param_1);
  *(undefined1 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  return;
}

// ConstructForTests<FPCGMatchAndSetWeightedByCategoryEntryList> @ 149d77150

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGMatchAndSetWeightedByCategoryEntryList>
          (void *param_1)

{
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(param_1);
  *(undefined1 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined1 *)((longlong)param_1 + 0x168) = 0;
  return;
}

// Destruct<FPCGMatchAndSetWeightedByCategoryEntryList> @ 149d77190

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGMatchAndSetWeightedByCategoryEntryList>(void *param_1)

{
  DestructItems<FPCGMatchAndSetWeightedEntry,int>
            (*(FPCGMatchAndSetWeightedEntry **)((longlong)param_1 + 0x178),
             *(int *)((longlong)param_1 + 0x180));
  if (*(void **)((longlong)param_1 + 0x178) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x178));
  }
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  if (*(void **)((longlong)param_1 + 0x138) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x138));
  }
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
    return;
  }
  return;
}

// Copy<FPCGMatchAndSetWeightedByCategoryEntryList> @ 149d771a0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGMatchAndSetWeightedByCategoryEntryList>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FPCGMatchAndSetWeightedEntry *pFVar4;
  float *pfVar5;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FPCGMetadataTypesConstantStruct::operator=(param_1,param_2);
    pfVar5 = &((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170))->FloatValue;
    ((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170))->Type =
         ((FPCGMetadataTypesConstantStruct *)((longlong)param_2 + 0x170))->Type;
    if (pfVar5 != &((FPCGMetadataTypesConstantStruct *)((longlong)param_2 + 0x170))->FloatValue) {
      DestructItems<FPCGMatchAndSetWeightedEntry,int>
                (*(FPCGMatchAndSetWeightedEntry **)pfVar5,
                 *(int *)&((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170))->
                          DoubleValue);
      iVar2 = *(int *)&((FPCGMetadataTypesConstantStruct *)((longlong)param_2 + 0x170))->DoubleValue
      ;
      piVar1 = (int *)((longlong)
                       &((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170))->
                        DoubleValue + 4);
      pFVar4 = *(FPCGMatchAndSetWeightedEntry **)
                &((FPCGMetadataTypesConstantStruct *)((longlong)param_2 + 0x170))->FloatValue;
      iVar3 = *piVar1;
      *(int *)&((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170))->DoubleValue = iVar2
      ;
      if ((iVar2 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x180,0x10,iVar2,iVar3,(ForAnyElementType *)pfVar5,iVar2,piVar1);
        ConstructItems<FPCGMatchAndSetWeightedEntry,FPCGMatchAndSetWeightedEntry,int>
                  (*(void **)pfVar5,pFVar4,iVar2);
      }
    }
    param_1 = &((FPCGMetadataTypesConstantStruct *)((longlong)param_1 + 0x170))->Vector2Value;
    param_2 = &((FPCGMetadataTypesConstantStruct *)((longlong)param_2 + 0x170))->Vector2Value;
  }
  return true;
}

// Construct<FPCGSkinnedMeshInstanceList> @ 149d772b0

void __cdecl UE::CoreUObject::Private::Construct<FPCGSkinnedMeshInstanceList>(void *param_1)

{
  memset(param_1,0,0x108);
  FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor(param_1);
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  return;
}

// ConstructForTests<FPCGSkinnedMeshInstanceList> @ 149d77300

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSkinnedMeshInstanceList>(void *param_1)

{
  FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor(param_1);
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  return;
}

// Destruct<FPCGSkinnedMeshInstanceList> @ 149d77340

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSkinnedMeshInstanceList>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor(param_1);
  return;
}

// Copy<FPCGSkinnedMeshInstanceList> @ 149d77390

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSkinnedMeshInstanceList>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FPCGSoftSkinnedMeshComponentDescriptor::operator=(param_1,param_2);
    pFVar2 = (FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_1 + 0xd8);
    if (pFVar2 != (FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_2 + 0xd8)) {
      iVar3 = (int)((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_2 + 0xd8))->_padding_
      ;
      piVar1 = (int *)((longlong)
                       &((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_1 + 0xd8))->
                        _padding_ + 4);
      _Src = (FScriptContainerElement *)
             ((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_2 + 0xd8))->_padding_;
      iVar4 = *piVar1;
      *(int *)&((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_1 + 0xd8))->_padding_ =
           iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x70,0x10,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((FScriptContainerElement *)pFVar2->_padding_,_Src,(longlong)iVar3 * 0x70);
        }
      }
    }
    ((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_1 + 0xd8))->_padding_ =
         ((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_2 + 0xd8))->_padding_;
    ((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_1 + 0xd8))->_padding_ =
         ((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_2 + 0xd8))->_padding_;
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               &((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_1 + 0xd8))->_padding_,
               (TArray<int,TSizedDefaultAllocator<32>_> *)
               &((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_2 + 0xd8))->_padding_);
    param_1 = &((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_1 + 0xd8))->_padding_;
    param_2 = &((FPCGSoftSkinnedMeshComponentDescriptor *)((longlong)param_2 + 0xd8))->_padding_;
  }
  return true;
}

// Construct<FPCGAttributePropertyInputSelector> @ 149d774c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGAttributePropertyInputSelector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyInputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::LastAttributeName;
  return;
}

// ConstructForTests<FPCGAttributePropertyInputSelector> @ 149d77500

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributePropertyInputSelector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertyInputSelector__6B_;
  *(FName *)((longlong)param_1 + 0x14) = PCGMetadataAttributeConstants::LastAttributeName;
  return;
}

// Destruct<FPCGAttributePropertyInputSelector> @ 149d77540

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAttributePropertyInputSelector>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// SerializeArchive<FPCGAttributePropertyInputSelector> @ 149d77580

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FPCGAttributePropertyInputSelector>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  return false;
}

// PostSerialize<FPCGAttributePropertyInputSelector> @ 149d775b0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGAttributePropertyInputSelector>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGAttributePropertyInputSelector> @ 149d775c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributePropertyInputSelector>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x1c) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x38) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
  }
  return true;
}

// ExportTextItem<FPCGAttributePropertyInputSelector> @ 149d776a0

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FPCGAttributePropertyInputSelector>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  bool bVar1;
  FPCGAttributePropertySelector local_48;
  
  if (param_3 != (void *)0x0) {
    bVar1 = FPCGAttributePropertySelector::ExportTextItem
                      (param_2,param_1,param_3,param_4,param_5,param_6);
    return bVar1;
  }
  bVar1 = FPCGAttributePropertySelector::ExportTextItem
                    (param_2,param_1,&local_48,param_4,param_5,param_6);
  DestructItems<FString,int>((FString *)0x0,0);
  return bVar1;
}

// ImportTextItem<FPCGAttributePropertyInputSelector> @ 149d77710

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FPCGAttributePropertyInputSelector>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FPCGAttributePropertySelector::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// StructuredSerializeFromMismatchedTag<FPCGAttributePropertyInputSelector> @ 149d777f0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPCGAttributePropertyInputSelector>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  FNameEntryId FVar5;
  UPackage *pUVar6;
  FName FVar7;
  undefined4 extraout_var;
  longlong local_res8;
  undefined1 local_res10 [24];
  
  iVar1 = (param_1->TypeName).Index;
  local_res8._0_4_ = iVar1;
  if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertySelector,(UObject *)pUVar6,
                         L"PCGAttributePropertySelector");
  }
  bVar4 = FPropertyTypeName::IsStruct
                    ((FPropertyTypeName *)&local_res8,
                     (FName)(Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.
                            OuterSingleton)->_padding_);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyInputSelector,
                           (UObject *)pUVar6,L"PCGAttributePropertyInputSelector");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyInputSelector.OuterSingleton,
               param_2,param_3,(void *)0x0);
    return true;
  }
  local_res8 = CONCAT44(local_res8._4_4_,(param_1->TypeName).Index);
  FVar7 = FPropertyTypeName::GetName((FPropertyTypeName *)&local_res8);
  uVar2 = *(ulonglong *)FVar7;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  if (uVar2 == *(uint *)CONCAT44(extraout_var,FVar5.Value)) {
    local_res8 = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res8);
    lVar3 = local_res8;
    FPCGAttributePropertySelector::ResetExtraNames(param_3);
    if ((*(int *)((longlong)param_3 + 8) != 0) || (*(longlong *)((longlong)param_3 + 0x14) != lVar3)
       ) {
      *(undefined4 *)((longlong)param_3 + 8) = 0;
      *(longlong *)((longlong)param_3 + 0x14) = lVar3;
    }
    return true;
  }
  return false;
}

// GetStructTypeHash<FPCGAttributePropertyInputSelector> @ 149d77920

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGAttributePropertyInputSelector>(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStackX_8 [8];
  
  uVar9 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
  iVar1 = *(int *)((longlong)param_1 + 8);
  uVar2 = (int)((ulonglong)uVar9 >> 0x20) + uVar2;
  uVar5 = iVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar5 << 8;
  uVar7 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar2 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  if (iVar1 == 0) {
    uVar9 = *(undefined8 *)((longlong)param_1 + 0x14);
LAB_149e6b04b:
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
    uVar3 = uVar3 + (int)((ulonglong)uVar9 >> 0x20);
    uVar5 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_149e6b0d4;
      uVar9 = *(undefined8 *)((longlong)param_1 + 0x1c);
      goto LAB_149e6b04b;
    }
    uVar3 = (uint)*(byte *)((longlong)param_1 + 0x38);
    uVar5 = uVar2 - *(byte *)((longlong)param_1 + 0x38);
    uVar2 = 0x9e3779b9 - uVar2;
  }
  uVar2 = uVar2 ^ uVar5 << 8;
  uVar7 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar11 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar5 = (uVar7 - uVar11) - uVar3 ^ uVar11 >> 5;
  uVar2 = (uVar3 - uVar5) - uVar11 ^ uVar5 >> 3;
  uVar3 = (uVar11 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
LAB_149e6b0d4:
  iVar1 = *(int *)((longlong)param_1 + 0x30);
  puVar10 = *(undefined8 **)((longlong)param_1 + 0x28);
  puVar8 = puVar10 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar10 == puVar8) break;
    iVar4 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar6 = L"";
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)*puVar10;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
    puVar10 = puVar10 + 2;
  }
  return uVar2;
}

// Construct<FPCGSkinnedMeshInstance> @ 149d77930

void __cdecl UE::CoreUObject::Private::Construct<FPCGSkinnedMeshInstance>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *(undefined8 *)param_1 = 0;
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
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar8;
  return;
}

// ConstructForTests<FPCGSkinnedMeshInstance> @ 149d779a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGSkinnedMeshInstance>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FPCGSkinnedMeshInstance> @ 149d77a00

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSkinnedMeshInstance>(void *param_1)

{
  return;
}

// Copy<FPCGSkinnedMeshInstance> @ 149d77a10

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSkinnedMeshInstance>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  if (param_3 != 0) {
    lVar15 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar15 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar15 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar15 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar15 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      param_1 = (void *)((longlong)param_1 + 0x70);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGAttributePropertySelector> @ 149d77b90

void __cdecl UE::CoreUObject::Private::Construct<FPCGAttributePropertySelector>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined ***)param_1 = &___7FPCGAttributePropertySelector__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FPCGAttributePropertySelector> @ 149d77bd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributePropertySelector>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGAttributePropertySelector__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FPCGAttributePropertySelector> @ 149d77c00

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAttributePropertySelector>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// SerializeArchive<FPCGAttributePropertySelector> @ 149d77d00

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FPCGAttributePropertySelector>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPCGCustomVersion::GUID);
  return false;
}

// PostSerialize<FPCGAttributePropertySelector> @ 149d77db0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGAttributePropertySelector>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGAttributePropertySelector> @ 149d77e90

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributePropertySelector>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined8 *)((longlong)pvVar1 + 0xc) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x1c) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0x38) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
  }
  return true;
}

// ExportTextItem<FPCGAttributePropertySelector> @ 149d77f30

bool __cdecl
UE::CoreUObject::Private::ExportTextItem<FPCGAttributePropertySelector>
          (FString *param_1,void *param_2,void *param_3,UObject *param_4,int param_5,
          UObject *param_6)

{
  bool bVar1;
  FPCGAttributePropertySelector local_48;
  
  if (param_3 != (void *)0x0) {
    bVar1 = FPCGAttributePropertySelector::ExportTextItem
                      (param_2,param_1,param_3,param_4,param_5,param_6);
    return bVar1;
  }
  bVar1 = FPCGAttributePropertySelector::ExportTextItem
                    (param_2,param_1,&local_48,param_4,param_5,param_6);
  DestructItems<FString,int>((FString *)0x0,0);
  return bVar1;
}

// ImportTextItem<FPCGAttributePropertySelector> @ 149d77fb0

bool __cdecl
UE::CoreUObject::Private::ImportTextItem<FPCGAttributePropertySelector>
          (wchar_t **param_1,void *param_2,int param_3,UObject *param_4,FOutputDevice *param_5)

{
  bool bVar1;
  
  bVar1 = FPCGAttributePropertySelector::ImportTextItem(param_2,param_1,param_3,param_4,param_5);
  return bVar1;
}

// GetStructTypeHash<FPCGAttributePropertySelector> @ 149d78010

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGAttributePropertySelector>(void *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStackX_8 [8];
  
  uVar9 = *(undefined8 *)((longlong)param_1 + 0xc);
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
  iVar1 = *(int *)((longlong)param_1 + 8);
  uVar2 = (int)((ulonglong)uVar9 >> 0x20) + uVar2;
  uVar5 = iVar1 - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar5 ^ uVar5 << 8;
  uVar7 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar7) - uVar3 ^ uVar7 >> 0xc;
  uVar2 = (uVar3 - uVar5) - uVar7 ^ uVar5 << 0x10;
  uVar7 = (uVar7 - uVar2) - uVar5 ^ uVar2 >> 5;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  uVar2 = (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  if (iVar1 == 0) {
    uVar9 = *(undefined8 *)((longlong)param_1 + 0x14);
LAB_149e6b04b:
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar9);
    uVar3 = uVar3 + (int)((ulonglong)uVar9 >> 0x20);
    uVar5 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (-0x61c88647 - uVar5) - uVar3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_149e6b0d4;
      uVar9 = *(undefined8 *)((longlong)param_1 + 0x1c);
      goto LAB_149e6b04b;
    }
    uVar3 = (uint)*(byte *)((longlong)param_1 + 0x38);
    uVar5 = uVar2 - *(byte *)((longlong)param_1 + 0x38);
    uVar2 = 0x9e3779b9 - uVar2;
  }
  uVar2 = uVar2 ^ uVar5 << 8;
  uVar7 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar3 = (uVar5 - uVar7) - uVar2 ^ uVar7 >> 0xc;
  uVar11 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 0x10;
  uVar5 = (uVar7 - uVar11) - uVar3 ^ uVar11 >> 5;
  uVar2 = (uVar3 - uVar5) - uVar11 ^ uVar5 >> 3;
  uVar3 = (uVar11 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
LAB_149e6b0d4:
  iVar1 = *(int *)((longlong)param_1 + 0x30);
  puVar10 = *(undefined8 **)((longlong)param_1 + 0x28);
  puVar8 = puVar10 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x30) != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar10 == puVar8) break;
    iVar4 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar6 = L"";
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)*puVar10;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    uVar2 = uVar2 - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 0xc;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
    uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar2 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
    puVar10 = puVar10 + 2;
  }
  return uVar2;
}

// Construct<FPCGSoftSkinnedMeshComponentDescriptor> @ 149d78060

void __cdecl
UE::CoreUObject::Private::Construct<FPCGSoftSkinnedMeshComponentDescriptor>(void *param_1)

{
  UClass *pUVar1;
  
  FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor(param_1);
  *(undefined ***)param_1 = &___7FPCGSoftSkinnedMeshComponentDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  pUVar1 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x10) = pUVar1;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FPCGSoftSkinnedMeshComponentDescriptor> @ 149d78070

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGSoftSkinnedMeshComponentDescriptor>(void *param_1)

{
  UClass *pUVar1;
  
  FSoftSkinnedMeshComponentDescriptor::FSoftSkinnedMeshComponentDescriptor(param_1);
  *(undefined ***)param_1 = &___7FPCGSoftSkinnedMeshComponentDescriptor__6B_;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  pUVar1 = Z_Construct_UClass_UInstancedSkinnedMeshComponent_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x10) = pUVar1;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FPCGSoftSkinnedMeshComponentDescriptor> @ 149d78080

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGSoftSkinnedMeshComponentDescriptor>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor(param_1);
  return;
}

// Copy<FPCGSoftSkinnedMeshComponentDescriptor> @ 149d780b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSoftSkinnedMeshComponentDescriptor>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  byte bVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
    }
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    bVar2 = (*(byte *)((longlong)param_1 + 0x24) ^ *(byte *)((longlong)param_2 + 0x24)) & 1 ^
            *(byte *)((longlong)param_1 + 0x24);
    *(byte *)((longlong)param_1 + 0x24) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x24)) & 2 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x24) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x24)) & 4 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x24) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x24)) & 8 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x24) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x24)) & 0x10 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x24) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x24)) & 0x20 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x24) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)param_2 + 0x24)) & 0x40 ^ bVar2;
    *(byte *)((longlong)param_1 + 0x24) = bVar2;
    *(byte *)((longlong)param_1 + 0x24) =
         (bVar2 ^ *(byte *)((longlong)param_2 + 0x24)) & 0x7f ^ *(byte *)((longlong)param_2 + 0x24);
    bVar2 = (*(byte *)((longlong)param_1 + 0x25) ^ *(byte *)((longlong)param_2 + 0x25)) & 1 ^
            *(byte *)((longlong)param_1 + 0x25);
    *(byte *)((longlong)param_1 + 0x25) = bVar2;
    *(byte *)((longlong)param_1 + 0x25) = (bVar2 ^ *(byte *)((longlong)param_2 + 0x25)) & 2 ^ bVar2;
    *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
    *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)param_2 + 0x27);
    *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_2 + 0x28);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    *(undefined1 *)((longlong)param_1 + 0x68) = *(undefined1 *)((longlong)param_2 + 0x68);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0x80),
               (FSoftObjectPath *)((longlong)param_2 + 0x80));
    *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0xa8),
               (FSoftObjectPath *)((longlong)param_2 + 0xa8));
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 200),
               (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 200));
    param_2 = (void *)((longlong)param_2 + 0xd8);
    param_1 = (void *)((longlong)param_1 + 0xd8);
  }
  return true;
}

// GetStructTypeHash<FPCGSoftSkinnedMeshComponentDescriptor> @ 149d782d0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGSoftSkinnedMeshComponentDescriptor>(void *param_1)

{
  if (*(int *)((longlong)param_1 + 8) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x18))();
    return *(uint *)((longlong)param_1 + 8);
  }
  return *(uint *)((longlong)param_1 + 8);
}

// DereferenceIfNecessary<FPCGObjectSingleOverride,FPCGObjectSingleOverride_*> @ 149de0100

FPCGObjectSingleOverride * __cdecl
UE::Core::Private::DereferenceIfNecessary<FPCGObjectSingleOverride,FPCGObjectSingleOverride_*>
          (FPCGObjectSingleOverride **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_> @ 149e29070

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
          (ushort param_1,ForElementType<__int64_*> *param_2,int *param_3)

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
    iVar8 = 0x200;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x200 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x201) {
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
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_> @ 149e29140

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>_>
          (ushort param_1,ForElementType<FSoftClassPath> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftClassPath>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_> @ 149e29210

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>_>
          (ushort param_1,ForElementType<FSoftObjectPath> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FSoftObjectPath>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 149e292e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (ushort param_1,ForElementType<FString> *param_2,int *param_3)

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
    iVar8 = 0x100;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x100 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x101) {
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_> @ 149e293b0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64_*> *param_4,int *param_5,
          int *param_6)

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
    iVar7 = 0x200;
    uVar8 = (ulonglong)param_1;
    if (0x200 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x201) {
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
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_> @ 149e29490

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64_const_*> *param_4,
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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_> @ 149e29570

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
          (uint param_1,uint param_2,ForElementType<__int64_*> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x200;
  if (0x200 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_> @ 149e29630

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>_>
          (uint param_1,uint param_2,ForElementType<__int64_const_*> *param_3,int param_4,
          int *param_5)

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
    TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_const_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_> @ 149e296f0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<__int64_*> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x201) {
      iVar1 = 0x200;
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
    TSizedInlineAllocator<512,32,TSizedDefaultAllocator<32>_>::ForElementType<__int64_*>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FPCGComponentInstanceData> @ 149edca30

void __cdecl UE::CoreUObject::Private::Construct<FPCGComponentInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  FActorComponentInstanceData::FActorComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FPCGComponentInstanceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FPCGComponentInstanceData> @ 149edca80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGComponentInstanceData>(void *param_1)

{
  FActorComponentInstanceData::FActorComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FPCGComponentInstanceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FPCGComponentInstanceData> @ 149edcab0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGComponentInstanceData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FInstanceCacheDataBase__6B_;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGComponentInstanceData> @ 149edcac0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGComponentInstanceData>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  FInstanceCacheDataBase *pFVar2;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FInstanceCacheDataBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_);
    }
    ((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->_padding_ =
         ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_;
    *(undefined1 *)
     &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
      Data = *(undefined1 *)
              &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
               AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)
      &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
       Data + 4) = *(undefined4 *)
                    ((longlong)
                     &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
                      AllocatorInstance.Data + 4);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)
                  &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
                   ArrayNum, pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    pFVar2 = (FInstanceCacheDataBase *)((longlong)param_2 + 0x58);
    iVar3 = (((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).ArrayMax;
    param_2 = &((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->UniqueTransientPackage;
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).ArrayNum =
         (pFVar2->SavedProperties).ArrayNum;
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).ArrayMax = iVar3;
    param_1 = &((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->UniqueTransientPackage;
  }
  return true;
}

// Construct<FDynamicTrackedKeyInstanceData> @ 149edcd90

void __cdecl UE::CoreUObject::Private::Construct<FDynamicTrackedKeyInstanceData>(void *param_1)

{
  memset(param_1,0,0xa0);
  FDynamicTrackedKeyInstanceData::FDynamicTrackedKeyInstanceData(param_1);
  return;
}

// ConstructForTests<FDynamicTrackedKeyInstanceData> @ 149edcdc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDynamicTrackedKeyInstanceData>(void *param_1)

{
  *(undefined2 *)param_1 = 0x403;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 0x40));
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x88))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x88),0);
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FDynamicTrackedKeyInstanceData> @ 149edce80

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicTrackedKeyInstanceData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FDynamicTrackedKeyInstanceData> @ 149edcf20

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicTrackedKeyInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_2 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x18),
                 (FSoftObjectPath *)((longlong)param_2 + 0x18));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x38) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x38));
      }
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      if ((FInstancedStruct *)((longlong)param_1 + 0x40) !=
          (FInstancedStruct *)((longlong)param_2 + 0x40)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)((longlong)param_1 + 0x40),
                   (((FInstancedStruct *)((longlong)param_2 + 0x40))->ScriptStruct).field0_0x0.
                   DebugPtr,*(uchar **)((longlong)param_2 + 0x48));
      }
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x50),(FString *)((longlong)param_2 + 0x50));
      *(undefined1 *)((longlong)param_1 + 0x60) = *(undefined1 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x78),
                 (FSoftObjectPath *)((longlong)param_2 + 0x78));
      puVar1 = (undefined1 *)((longlong)param_2 + 0x98);
      param_2 = (void *)((longlong)param_2 + 0xa0);
      *(undefined1 *)((longlong)param_1 + 0x98) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0xa0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGSoftGraphExecutionSource> @ 149edd760

void __cdecl UE::CoreUObject::Private::Construct<FPCGSoftGraphExecutionSource>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FPCGSoftGraphExecutionSource> @ 149edd7c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGSoftGraphExecutionSource>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FPCGSoftGraphExecutionSource> @ 149edd810

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSoftGraphExecutionSource>(void *param_1)

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

// Copy<FPCGSoftGraphExecutionSource> @ 149edd830

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSoftGraphExecutionSource>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  FPCGSoftGraphExecutionSource *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FPCGSoftGraphExecutionSource::Reset(this);
      *(undefined8 *)&(this->SoftObjectPtr).SoftObjectPtr = *puVar1;
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)&(this->SoftObjectPtr).SoftObjectPtr.field_0x8,
                 (FSoftObjectPath *)(puVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGSoftGraphExecutionSource> @ 149edd8c0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FPCGSoftGraphExecutionSource>(void *param_1)

{
  uint uVar1;
  
  uVar1 = ::GetTypeHash((FSoftObjectPath *)((longlong)param_1 + 8));
  return uVar1;
}

// Construct<FPCGPartitionActorRecord> @ 149edd9a0

void __cdecl UE::CoreUObject::Private::Construct<FPCGPartitionActorRecord>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x1c) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FPCGPartitionActorRecord> @ 149edd9d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPartitionActorRecord>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_
  ;
  *(int *)((longlong)param_1 + 0x1c) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  return;
}

// Destruct<FPCGPartitionActorRecord> @ 149edda00

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPartitionActorRecord>(void *param_1)

{
  return;
}

// Copy<FPCGPartitionActorRecord> @ 149edda10

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPartitionActorRecord>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FPCGPartitionActorRecord> @ 149edda50

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGPartitionActorRecord>(void *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x10);
  uVar1 = CityHash64(param_1,0x10);
  uVar4 = (int)uVar1 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 10;
  uVar3 = FCrc::MemCrc_DEPRECATED((void *)((longlong)param_1 + 0x14),0xc,0);
  uVar4 = ((uVar5 - uVar2) - uVar4 ^ uVar2 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xc;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xf;
}

// Construct<FPCGRuntimeGenerationRadii> @ 149eddb60

void __cdecl UE::CoreUObject::Private::Construct<FPCGRuntimeGenerationRadii>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  FPCGRuntimeGenerationRadii::FPCGRuntimeGenerationRadii(param_1);
  return;
}

// ConstructForTests<FPCGRuntimeGenerationRadii> @ 149eddb90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGRuntimeGenerationRadii>(void *param_1)

{
  *(undefined8 *)param_1 = 0x41f0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x4089000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x4099000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x40a9000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x40b9000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x40c9000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x40d9000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x40e9000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x40f9000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x4109000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x4119000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff199999999999a;
  return;
}

// Destruct<FPCGRuntimeGenerationRadii> @ 149eddba0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGRuntimeGenerationRadii>(void *param_1)

{
  return;
}

// Copy<FPCGRuntimeGenerationRadii> @ 149eddcb0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGRuntimeGenerationRadii>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_3 != 0) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar13 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar13 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      param_1 = (void *)((longlong)param_1 + 0x60);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGRuntimeGenerationRadii> @ 149eddd90

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGRuntimeGenerationRadii>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17 + (int)*(undefined8 *)param_1;
  uVar2 = uVar3 >> 0xd ^ -uVar3;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar4 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 8) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 8);
  uVar2 = ((uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar3 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x10) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x10);
  uVar3 = ((uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar4 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar3 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x18) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x18);
  uVar2 = ((uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar4 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x20) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x20);
  uVar2 = ((uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar3 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x28) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x28);
  uVar3 = ((uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar4 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar3 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x30) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x30);
  uVar2 = ((uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  uVar4 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x38) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x38);
  uVar2 = ((uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar3 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x40) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x40);
  uVar3 = ((uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  uVar4 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x48) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x48);
  uVar2 = ((uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar4 ^ uVar4 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar3 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar3 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x50) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x50);
  uVar4 = ((uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar2 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar3 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar2 = (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x58) >> 0x20) * 0x17 +
          (int)*(undefined8 *)((longlong)param_1 + 0x58);
  uVar3 = ((uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xd;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 0x10;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar3 << 10;
  return (uVar2 - uVar1) - uVar3 ^ uVar1 >> 0xf;
}

// Construct<FPCGOverrideInstancedPropertyBag> @ 149edde60

void __cdecl UE::CoreUObject::Private::Construct<FPCGOverrideInstancedPropertyBag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FPCGOverrideInstancedPropertyBag> @ 149eddec0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGOverrideInstancedPropertyBag>(void *param_1)

{
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FPCGOverrideInstancedPropertyBag> @ 149eddf10

void __cdecl UE::CoreUObject::Private::Destruct<FPCGOverrideInstancedPropertyBag>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  FInstancedStruct::Reset(param_1);
  return;
}

// Copy<FPCGOverrideInstancedPropertyBag> @ 149eddf60

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGOverrideInstancedPropertyBag>
          (void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  int iVar2;
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  FInstancedStruct *this_00;
  
  if (param_3 != 0) {
    this_00 = param_1;
    do {
      pFVar1 = (FInstancedStruct *)(((longlong)param_2 - (longlong)param_1) + (longlong)this_00);
      if (this_00 != pFVar1) {
        FInstancedStruct::InitializeAs
                  (this_00,(pFVar1->ScriptStruct).field0_0x0.DebugPtr,pFVar1->StructMemory);
      }
      this = (TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this_00 + 1);
      if (this != (TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(pFVar1 + 1)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)&this_00[4].StructMemory,
                   (int *)&this_00[5].StructMemory,
                   (ForElementType<FSetElementId> *)&pFVar1[4].StructMemory,
                   *(int *)&pFVar1[5].StructMemory);
        iVar2 = *(int *)&pFVar1[1].StructMemory;
        TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,iVar2,(ForAnyElementType *)this,(int *)&this_00[1].StructMemory,
                   (int *)((longlong)&this_00[1].StructMemory + 4));
        *(undefined4 *)&this_00[4].ScriptStruct.field0_0x0 =
             *(undefined4 *)&pFVar1[4].ScriptStruct.field0_0x0;
        *(undefined4 *)((longlong)&this_00[4].ScriptStruct.field0_0x0 + 4) =
             *(undefined4 *)((longlong)&pFVar1[4].ScriptStruct.field0_0x0 + 4);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(this_00 + 2) !=
            (TBitArray<FDefaultBitArrayAllocator> *)(pFVar1 + 2)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(this_00 + 2),
                     (TBitArray<FDefaultBitArrayAllocator> *)(pFVar1 + 2));
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this,*(void **)(pFVar1 + 1),(longlong)iVar2 * 0x18);
        }
      }
      param_3 = param_3 + -1;
      this_00 = this_00 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDebugVisualizationSettings> @ 149ede5c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDebugVisualizationSettings>(void *param_1)

{
  FUtf8String *this;
  int *piVar1;
  FNameEntryId FVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FUtf8String FStack_28;
  
  *(undefined4 *)param_1 = 0x3f800000;
  this = (FUtf8String *)((longlong)param_1 + 0x20);
  *(undefined1 *)((longlong)param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  piVar1 = (int *)((longlong)param_1 + 0x2c);
  *piVar1 = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset(this,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x48))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x48),0);
  FVar6 = PCGDebugVisConstants::DefaultPointMesh.SubPathString.Data.AllocatorInstance;
  FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = PCGDebugVisConstants::DefaultPointMesh.SubPathString.Data.ArrayNum;
  FVar2.Value = PCGDebugVisConstants::DefaultPointMesh.AssetPath.PackageName.ComparisonIndex.Value;
  uVar3 = PCGDebugVisConstants::DefaultPointMesh.AssetPath.PackageName.Number;
  FVar4.Value = PCGDebugVisConstants::DefaultPointMesh.AssetPath.AssetName.ComparisonIndex.Value;
  uVar5 = PCGDebugVisConstants::DefaultPointMesh.AssetPath.AssetName.Number;
  FStack_28.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    FStack_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,0,(ForAnyElementType *)&FStack_28,iVar7,&FStack_28.Data.ArrayMax);
    memcpy(FStack_28.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar7);
  }
  iVar7 = FStack_28.Data.ArrayNum;
  FVar6.Data = FStack_28.Data.AllocatorInstance.Data;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(uint *)((longlong)param_1 + 0x10) = FVar2.Value;
  *(uint *)((longlong)param_1 + 0x14) = uVar3;
  *(uint *)((longlong)param_1 + 0x18) = FVar4.Value;
  *(uint *)((longlong)param_1 + 0x1c) = uVar5;
  if (this != &FStack_28) {
    *(int *)((longlong)param_1 + 0x28) = FStack_28.Data.ArrayNum;
    if ((FStack_28.Data.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_28.Data.ArrayNum,*piVar1,(ForAnyElementType *)this,
                 FStack_28.Data.ArrayNum,piVar1);
      if (iVar7 != 0) {
        memcpy((this->Data).AllocatorInstance.Data,FVar6.Data,(longlong)iVar7);
      }
    }
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ConstructForTests<FPCGDebugVisualizationSettings> @ 149ede5d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDebugVisualizationSettings>(void *param_1)

{
  FUtf8String *this;
  int *piVar1;
  FNameEntryId FVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FUtf8String FStack_28;
  
  *(undefined4 *)param_1 = 0x3f800000;
  this = (FUtf8String *)((longlong)param_1 + 0x20);
  *(undefined1 *)((longlong)param_1 + 4) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  piVar1 = (int *)((longlong)param_1 + 0x2c);
  *piVar1 = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset(this,0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x48))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x48),0);
  FVar6 = PCGDebugVisConstants::DefaultPointMesh.SubPathString.Data.AllocatorInstance;
  FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = PCGDebugVisConstants::DefaultPointMesh.SubPathString.Data.ArrayNum;
  FVar2.Value = PCGDebugVisConstants::DefaultPointMesh.AssetPath.PackageName.ComparisonIndex.Value;
  uVar3 = PCGDebugVisConstants::DefaultPointMesh.AssetPath.PackageName.Number;
  FVar4.Value = PCGDebugVisConstants::DefaultPointMesh.AssetPath.AssetName.ComparisonIndex.Value;
  uVar5 = PCGDebugVisConstants::DefaultPointMesh.AssetPath.AssetName.Number;
  FStack_28.Data.ArrayNum = iVar7;
  if (iVar7 == 0) {
    FStack_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar7,0,(ForAnyElementType *)&FStack_28,iVar7,&FStack_28.Data.ArrayMax);
    memcpy(FStack_28.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar7);
  }
  iVar7 = FStack_28.Data.ArrayNum;
  FVar6.Data = FStack_28.Data.AllocatorInstance.Data;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(uint *)((longlong)param_1 + 0x10) = FVar2.Value;
  *(uint *)((longlong)param_1 + 0x14) = uVar3;
  *(uint *)((longlong)param_1 + 0x18) = FVar4.Value;
  *(uint *)((longlong)param_1 + 0x1c) = uVar5;
  if (this != &FStack_28) {
    *(int *)((longlong)param_1 + 0x28) = FStack_28.Data.ArrayNum;
    if ((FStack_28.Data.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,FStack_28.Data.ArrayNum,*piVar1,(ForAnyElementType *)this,
                 FStack_28.Data.ArrayNum,piVar1);
      if (iVar7 != 0) {
        memcpy((this->Data).AllocatorInstance.Data,FVar6.Data,(longlong)iVar7);
      }
    }
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return;
}

// Destruct<FPCGDebugVisualizationSettings> @ 149ede5e0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDebugVisualizationSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FPCGDebugVisualizationSettings> @ 149ede660

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDebugVisualizationSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_2 + 4);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x10),
                 (FSoftObjectPath *)((longlong)param_2 + 0x10));
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x38),
                 (FSoftObjectPath *)((longlong)param_2 + 0x38));
      param_2 = (void *)((longlong)param_2 + 0x58);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGAssetExporterParameters> @ 149ede9c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGAssetExporterParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ConstructForTests<FPCGAssetExporterParameters> @ 149edeaa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGAssetExporterParameters>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Destruct<FPCGAssetExporterParameters> @ 149edeac0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAssetExporterParameters>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FPCGAssetExporterParameters> @ 149edeb40

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAssetExporterParameters>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
      puVar1 = (undefined1 *)((longlong)param_2 + 0x28);
      param_2 = (void *)((longlong)param_2 + 0x30);
      *(undefined1 *)((longlong)param_1 + 0x28) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDataCollection> @ 149edef50

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataCollection>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FPCGDataCollection> @ 149edefc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataCollection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FPCGDataCollection> @ 149edefe0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataCollection>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FPCGTaggedData,int>(*(FPCGTaggedData **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPCGDataCollection> @ 149edf020

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataCollection>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FPCGTaggedData *pFVar5;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FPCGTaggedData *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FPCGTaggedData,FPCGTaggedData,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      *(undefined1 *)&pFVar6[2].Data = *(undefined1 *)&pFVar2[2].Data;
      pFVar7 = pFVar6 + 3;
      *(undefined1 *)((longlong)&pFVar6[2].Data + 1) =
           *(undefined1 *)((longlong)&pFVar2[2].Data + 1);
      if (pFVar7 != pFVar2 + 3) {
        iVar3 = *(int *)&pFVar2[4].Data;
        piVar1 = (int *)((longlong)&pFVar6[4].Data + 4);
        _Src = pFVar2[3].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[4].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar3,iVar4,pFVar7,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar7->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      pFVar6[5].Data = pFVar2[5].Data;
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGTaggedData> @ 149edf390

void __cdecl UE::CoreUObject::Private::Construct<FPCGTaggedData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x100;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  return;
}

// ConstructForTests<FPCGTaggedData> @ 149edf430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGTaggedData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined2 *)((longlong)param_1 + 0x68) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  return;
}

// Destruct<FPCGTaggedData> @ 149edf540

void __cdecl UE::CoreUObject::Private::Destruct<FPCGTaggedData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper(param_1);
  return;
}

// Copy<FPCGTaggedData> @ 149edf5d0

bool __cdecl UE::CoreUObject::Private::Copy<FPCGTaggedData>(void *param_1,void *param_2,int param_3)

{
  FPCGDataPtrWrapper *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FPCGDataPtrWrapper::operator=(param_1,param_2);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)param_1 + 0x10),
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               ((longlong)param_2 + 0x10));
    (((FPCGDataPtrWrapper *)((longlong)param_1 + 0x60))->Data).field0_0x0 =
         (((FPCGDataPtrWrapper *)((longlong)param_2 + 0x60))->Data).field0_0x0;
    *(char *)&(((FPCGDataPtrWrapper *)((longlong)param_1 + 0x60))->WeakData).WeakPtr.ObjectIndex =
         (char)(((FPCGDataPtrWrapper *)((longlong)param_2 + 0x60))->WeakData).WeakPtr.ObjectIndex;
    *(undefined1 *)
     ((longlong)&(((FPCGDataPtrWrapper *)((longlong)param_1 + 0x60))->WeakData).WeakPtr.ObjectIndex
     + 1) = *(undefined1 *)
             ((longlong)
              &(((FPCGDataPtrWrapper *)((longlong)param_2 + 0x60))->WeakData).WeakPtr.ObjectIndex +
             1);
    *(undefined8 *)
     &(((FPCGDataPtrWrapper *)((longlong)param_1 + 0x60))->WeakData).WeakPtr.ObjectSerialNumber =
         *(undefined8 *)
          &(((FPCGDataPtrWrapper *)((longlong)param_2 + 0x60))->WeakData).WeakPtr.ObjectSerialNumber
    ;
    pFVar1 = (FPCGDataPtrWrapper *)((longlong)param_2 + 0x70);
    param_2 = &((FPCGDataPtrWrapper *)((longlong)param_2 + 0x70))->WeakData;
    *(undefined4 *)
     ((longlong)&(((FPCGDataPtrWrapper *)((longlong)param_1 + 0x70))->Data).field0_0x0 + 4) =
         *(undefined4 *)((longlong)&(pFVar1->Data).field0_0x0 + 4);
    param_1 = &((FPCGDataPtrWrapper *)((longlong)param_1 + 0x70))->WeakData;
  }
  return true;
}

// Construct<FPCGContext> @ 149edfac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FPCGContext>(void *param_1)

{
  memset(param_1,0,600);
  FPCGContext::FPCGContext(param_1);
  return;
}

// ConstructForTests<FPCGContext> @ 149edfaf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGContext>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined ***)param_1 = &___7FPCGContext__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)param_1 + 0x68),(FObjectPtr)&uStackX_8);
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x78);
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 1;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  *(undefined1 *)((longlong)param_1 + 400) = 0;
  *(undefined8 *)((longlong)param_1 + 0x198) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x200) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined4 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined4 *)((longlong)param_1 + 0x250) = 0xffffffff;
  return;
}

// Destruct<FPCGContext> @ 149edfb00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FPCGContext>(void *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 auStackX_8 [8];
  
  *(undefined ***)param_1 = &___7FPCGContext__6B_;
  FPCGDataCollection::Reset((FPCGDataCollection *)((longlong)param_1 + 8));
  FPCGDataCollection::Reset((FPCGDataCollection *)((longlong)param_1 + 0x38));
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x238);
  pTVar7 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar3->SharedReferenceCount;
    do {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_149eef765;
      LOCK();
      aVar6 = pTVar3->SharedReferenceCount;
      bVar8 = aVar5 == aVar6;
      if (bVar8) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar8);
    pTVar7 = pTVar3;
    if (*(FPCGGraphExecutor **)((longlong)param_1 + 0x230) != (FPCGGraphExecutor *)0x0) {
      FPCGGraphExecutor::RemoveReleasedContextForGC
                (*(FPCGGraphExecutor **)((longlong)param_1 + 0x230),param_1);
    }
  }
LAB_149eef765:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(longlong *)((longlong)param_1 + 0x220) != 0) {
    `FPCGContext::~FPCGContext'::__l2::<lambda_1>::operator()(auStackX_8);
  }
  if (*(longlong *)((longlong)param_1 + 0x220) != 0) {
    *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x220) + 0x10) = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x248));
  plVar4 = *(longlong **)((longlong)param_1 + 0x238);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x228));
  *(undefined4 *)((longlong)param_1 + 0x218) = 0;
  if (*(void **)((longlong)param_1 + 0x210) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x210));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1d0));
  if (*(void **)((longlong)param_1 + 0x1b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1b8));
  }
  DestructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,int>
            (*(TTuple<FPCGDataCollection,FPCGDataCollection> **)((longlong)param_1 + 0x198),
             *(int *)((longlong)param_1 + 0x1a0));
  if (*(void **)((longlong)param_1 + 0x198) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x198));
  }
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  if (*(void **)((longlong)param_1 + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x180));
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x140));
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xc0));
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FPCGTaggedData,int>
            (*(FPCGTaggedData **)((longlong)param_1 + 0x38),*(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FPCGTaggedData,int>
            (*(FPCGTaggedData **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FPCGContext> @ 149edfb10

bool __cdecl UE::CoreUObject::Private::Copy<FPCGContext>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  ForAnyElementType *pFVar2;
  int iVar3;
  TTuple<FPCGDataCollection,FPCGDataCollection> *pTVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  undefined8 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FPCGDataCollection::operator=
              ((FPCGDataCollection *)((longlong)param_1 + 8),
               (FPCGDataCollection *)((longlong)param_2 + 8));
    FPCGDataCollection::operator=
              ((FPCGDataCollection *)((longlong)param_1 + 0x38),
               (FPCGDataCollection *)((longlong)param_2 + 0x38));
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar6;
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined1 *)((longlong)param_1 + 0x80) = *(undefined1 *)((longlong)param_2 + 0x80);
    FPCGAsyncState::operator=
              ((FPCGAsyncState *)((longlong)param_1 + 0x88),
               (FPCGAsyncState *)((longlong)param_2 + 0x88));
    *(undefined8 *)((longlong)param_1 + 0x118) = *(undefined8 *)((longlong)param_2 + 0x118);
    this = (TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)((longlong)param_1 + 0x140);
    *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
    *(undefined8 *)((longlong)param_1 + 0x128) = *(undefined8 *)((longlong)param_2 + 0x128);
    *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
    *(undefined1 *)((longlong)param_1 + 0x138) = *(undefined1 *)((longlong)param_2 + 0x138);
    if (this != (TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)((longlong)param_2 + 0x140)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)param_1 + 0x178),
                 (int *)((longlong)param_1 + 0x188),
                 (ForElementType<FSetElementId> *)((longlong)param_2 + 0x178),
                 *(int *)((longlong)param_2 + 0x188));
      iVar3 = *(int *)((longlong)param_2 + 0x148);
      TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar3);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,(ForAnyElementType *)this,(int *)((longlong)param_1 + 0x148),
                 (int *)((longlong)param_1 + 0x14c));
      *(undefined4 *)((longlong)param_1 + 0x170) = *(undefined4 *)((longlong)param_2 + 0x170);
      *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x174);
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x150) !=
          (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x150)) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x150),
                   (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_2 + 0x150));
      }
      if (iVar3 != 0) {
        memcpy(*(void **)this,*(void **)((longlong)param_2 + 0x140),(longlong)iVar3 << 4);
      }
    }
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x198);
    *(undefined1 *)((longlong)param_1 + 400) = *(undefined1 *)((longlong)param_2 + 400);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x198)) {
      DestructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,int>
                ((TTuple<FPCGDataCollection,FPCGDataCollection> *)pFVar2->Data,
                 *(int *)((longlong)param_1 + 0x1a0));
      iVar3 = *(int *)((longlong)param_2 + 0x1a0);
      piVar1 = (int *)((longlong)param_1 + 0x1a4);
      pTVar4 = (TTuple<FPCGDataCollection,FPCGDataCollection> *)
               ((ForAnyElementType *)((longlong)param_2 + 0x198))->Data;
      *(int *)((longlong)param_1 + 0x1a0) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<TTuple<FPCGDataCollection,FPCGDataCollection>,TTuple<FPCGDataCollection,FPCGDataCollection>,int>
                  (pFVar2->Data,pTVar4,iVar3);
      }
    }
    *(undefined8 *)((longlong)param_1 + 0x1a8) = *(undefined8 *)((longlong)param_2 + 0x1a8);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x1b0) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x1b0));
    }
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x1b8);
    *(undefined8 *)((longlong)param_1 + 0x1b0) = *(undefined8 *)((longlong)param_2 + 0x1b0);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x1b8)) {
      iVar3 = *(int *)((longlong)param_2 + 0x1c0);
      piVar1 = (int *)((longlong)param_1 + 0x1c4);
      _Src = ((ForAnyElementType *)((longlong)param_2 + 0x1b8))->Data;
      *(int *)((longlong)param_1 + 0x1c0) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy(pFVar2->Data,_Src,(longlong)iVar3 << 3);
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x1c8) = *(undefined1 *)((longlong)param_2 + 0x1c8);
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::operator=
              ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)((longlong)param_1 + 0x1d0),
               (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)((longlong)param_2 + 0x1d0));
    lVar5 = *(longlong *)((longlong)param_2 + 0x228);
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x220);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x228);
    *(undefined8 *)((longlong)param_1 + 0x220) = uVar6;
    *(longlong *)((longlong)param_1 + 0x228) = lVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    lVar5 = *(longlong *)((longlong)param_2 + 0x238);
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x230);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
      UNLOCK();
    }
    plVar8 = *(longlong **)((longlong)param_1 + 0x238);
    *(undefined8 *)((longlong)param_1 + 0x230) = uVar6;
    *(longlong *)((longlong)param_1 + 0x238) = lVar5;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    lVar5 = *(longlong *)((longlong)param_2 + 0x248);
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x240);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    pTVar7 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x248);
    *(undefined8 *)((longlong)param_1 + 0x240) = uVar6;
    *(longlong *)((longlong)param_1 + 0x248) = lVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    *(undefined4 *)((longlong)param_1 + 0x250) = *(undefined4 *)((longlong)param_2 + 0x250);
    param_1 = (void *)((longlong)param_1 + 600);
    param_2 = (void *)((longlong)param_2 + 600);
  }
  return true;
}

// Construct<FPCGBlueprintContextHandle> @ 149ee0160

void __cdecl UE::CoreUObject::Private::Construct<FPCGBlueprintContextHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGBlueprintContextHandle> @ 149ee0170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGBlueprintContextHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGBlueprintContextHandle> @ 149ee0180

void __cdecl UE::CoreUObject::Private::Destruct<FPCGBlueprintContextHandle>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000149ee01a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Copy<FPCGBlueprintContextHandle> @ 149ee01b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGBlueprintContextHandle>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      lVar3 = *(longlong *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar4 = *(undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)puVar6[1];
      *puVar6 = uVar4;
      puVar6[1] = lVar3;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UPCGData>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGData>_>,UPCGData_*> @ 149ee54c0

UPCGData ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UPCGData>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGData>_>,UPCGData_*>
          (TObjectPtr<UPCGData> *param_1)

{
  return (UPCGData **)param_1;
}

// Decay<TObjectPtr<UPCGSettings>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGSettings>_>,UPCGSettings_*> @ 149ee54d0

UPCGSettings ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UPCGSettings>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UPCGSettings>_>,UPCGSettings_*>
          (TObjectPtr<UPCGSettings> *param_1)

{
  return (UPCGSettings **)param_1;
}

// DereferenceIfNecessary<UPCGDebugDrawComponent,UPCGDebugDrawComponent_*_&> @ 149ee54e0

UPCGDebugDrawComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UPCGDebugDrawComponent,UPCGDebugDrawComponent_*_&>
          (UPCGDebugDrawComponent **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 149eec270

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<unsigned_int> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xe) {
      iVar1 = 0xd;
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
  TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>_> @ 149eec310

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FPCGDataCollection> *param_4,
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>::
    ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>_> @ 149eec3e0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>_>
          (uint param_1,uint param_2,ForElementType<FPCGDataCollection> *param_3,int param_4,
          int *param_5)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGDataCollection>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// Construct<FPCGVirtualTexturePrimingInfo> @ 149f1aa60

void __cdecl UE::CoreUObject::Private::Construct<FPCGVirtualTexturePrimingInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  return;
}

// ConstructForTests<FPCGVirtualTexturePrimingInfo> @ 149f1aaf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGVirtualTexturePrimingInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x42c80000;
  return;
}

// Destruct<FPCGVirtualTexturePrimingInfo> @ 149f1ab40

void __cdecl UE::CoreUObject::Private::Destruct<FPCGVirtualTexturePrimingInfo>(void *param_1)

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

// Copy<FPCGVirtualTexturePrimingInfo> @ 149f1ab60

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGVirtualTexturePrimingInfo>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 8),
                 (FSoftObjectPath *)((longlong)param_1 + lVar1 + 8));
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x2c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPoint> @ 149f1ad10

void __cdecl UE::CoreUObject::Private::Construct<FPCGPoint>(void *param_1)

{
  memset(param_1,0,0xd0);
  FPCGPoint::FPCGPoint(param_1);
  return;
}

// ConstructForTests<FPCGPoint> @ 149f1ad40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPoint>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar7;
  uVar9 = __xmm_80000000000000008000000000000000;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
  uVar14 = (uint)uVar9;
  uVar15 = (uint)((ulonglong)uVar9 >> 0x20);
  *(ulonglong *)((longlong)param_1 + 0x78) =
       CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20) ^
                uVar15,SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar14);
  *(ulonglong *)((longlong)param_1 + 0x68) = CONCAT44(uVar11 ^ uVar15,uVar10 ^ uVar14);
  *(ulonglong *)((longlong)param_1 + 0x70) = CONCAT44(uVar13 ^ uVar15,uVar12 ^ uVar14);
  uVar9 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                   UE::Math::TVector<double>::OneVector.field0_0x0._8_4_);
  *(ulonglong *)((longlong)param_1 + 0x80) =
       CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._4_4_,
                UE::Math::TVector<double>::OneVector.field0_0x0._0_4_);
  *(undefined8 *)((longlong)param_1 + 0x88) = uVar9;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0xffffffffffffffff;
  return;
}

// Destruct<FPCGPoint> @ 149f1ad50

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPoint>(void *param_1)

{
  return;
}

// SerializeSlot<FPCGPoint> @ 149f1ad70

bool __cdecl
UE::CoreUObject::Private::SerializeSlot<FPCGPoint>
          (FStructuredArchiveSlot param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FPCGPoint::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FPCGPoint> @ 149f1ad90

bool __cdecl UE::CoreUObject::Private::Copy<FPCGPoint>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  
  if (param_3 != 0) {
    puVar27 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar27);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      uVar5 = puVar1[4];
      uVar6 = puVar1[5];
      uVar7 = puVar1[6];
      uVar8 = puVar1[7];
      uVar9 = puVar1[8];
      uVar10 = puVar1[9];
      uVar11 = puVar1[10];
      uVar12 = puVar1[0xb];
      uVar13 = puVar1[0xc];
      uVar14 = puVar1[0xd];
      uVar15 = puVar1[0xe];
      uVar16 = puVar1[0xf];
      uVar17 = puVar1[0x10];
      uVar18 = puVar1[0x11];
      uVar19 = puVar1[0x12];
      uVar20 = puVar1[0x13];
      uVar21 = puVar1[0x14];
      uVar22 = puVar1[0x15];
      uVar23 = puVar1[0x16];
      uVar24 = puVar1[0x17];
      uVar25 = puVar1[0x18];
      uVar26 = puVar1[0x19];
      *puVar27 = *puVar1;
      puVar27[1] = uVar2;
      puVar27[2] = uVar3;
      puVar27[3] = uVar4;
      puVar27[4] = uVar5;
      puVar27[5] = uVar6;
      puVar27[6] = uVar7;
      puVar27[7] = uVar8;
      puVar27[8] = uVar9;
      puVar27[9] = uVar10;
      puVar27[10] = uVar11;
      puVar27[0xb] = uVar12;
      puVar27[0xc] = uVar13;
      puVar27[0xd] = uVar14;
      puVar27[0xe] = uVar15;
      puVar27[0xf] = uVar16;
      puVar27[0x10] = uVar17;
      puVar27[0x11] = uVar18;
      puVar27[0x12] = uVar19;
      puVar27[0x13] = uVar20;
      puVar27[0x14] = uVar21;
      puVar27[0x15] = uVar22;
      puVar27[0x16] = uVar23;
      puVar27[0x17] = uVar24;
      puVar27[0x18] = uVar25;
      puVar27[0x19] = uVar26;
      param_3 = param_3 + -1;
      puVar27 = puVar27 + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPinProperties> @ 149f1b680

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FPCGPinProperties>(void *param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  FScriptContainerElement *pFVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier FStack_28;
  
  pFVar1 = (FPCGDataTypeIdentifier *)((longlong)param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x1000001;
  (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&FStack_28,Any);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Ids).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Ids).AllocatorInstance.Data = (pFVar3->Ids).AllocatorInstance.Data;
    (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x18) = (pFVar3->Ids).ArrayNum;
    *(int *)((longlong)param_1 + 0x1c) = (pFVar3->Ids).ArrayMax;
    (pFVar3->Ids).ArrayNum = 0;
    (pFVar3->Ids).ArrayMax = 0;
  }
  *(int *)((longlong)param_1 + 0x20) = pFVar3->CustomSubtype;
  if (FStack_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Ids.AllocatorInstance.Data);
  }
  return;
}

// ConstructForTests<FPCGPinProperties> @ 149f1b690

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPinProperties>(void *param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  FScriptContainerElement *pFVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FPCGDataTypeIdentifier FStack_28;
  
  pFVar1 = (FPCGDataTypeIdentifier *)((longlong)param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x1000001;
  (pFVar1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&FStack_28,Any);
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Ids).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Ids).AllocatorInstance.Data = (pFVar3->Ids).AllocatorInstance.Data;
    (pFVar3->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 0x18) = (pFVar3->Ids).ArrayNum;
    *(int *)((longlong)param_1 + 0x1c) = (pFVar3->Ids).ArrayMax;
    (pFVar3->Ids).ArrayNum = 0;
    (pFVar3->Ids).ArrayMax = 0;
  }
  *(int *)((longlong)param_1 + 0x20) = pFVar3->CustomSubtype;
  if (FStack_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Ids.AllocatorInstance.Data);
  }
  return;
}

// Destruct<FPCGPinProperties> @ 149f1b6b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPinProperties>(void *param_1)

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

// PostSerialize<FPCGPinProperties> @ 149f1b6d0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FPCGPinProperties>(FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FPCGPinProperties> @ 149f1b720

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPinProperties>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar5 = param_1;
    do {
      pFVar6 = (ForAnyElementType *)(puVar5 + 2);
      *puVar5 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)((longlong)pvVar4 + 8);
      if (pFVar6 != (ForAnyElementType *)((longlong)pvVar4 + 0x10)) {
        iVar2 = *(int *)((longlong)pvVar4 + 0x18);
        piVar1 = (int *)((longlong)puVar5 + 0x1c);
        pFVar3 = ((ForAnyElementType *)((longlong)pvVar4 + 0x10))->Data;
        *(int *)(puVar5 + 3) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,*piVar1,pFVar6,iVar2,piVar1);
          ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                    (pFVar6->Data,(FPCGDataTypeBaseId *)pFVar3,iVar2);
        }
      }
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)((longlong)pvVar4 + 0x20);
      *(undefined1 *)(puVar5 + 5) = *(undefined1 *)((longlong)pvVar4 + 0x28);
      *(undefined1 *)((longlong)puVar5 + 0x29) = *(undefined1 *)((longlong)pvVar4 + 0x29);
      *(undefined1 *)((longlong)puVar5 + 0x2a) = *(undefined1 *)((longlong)pvVar4 + 0x2a);
      *(undefined1 *)((longlong)puVar5 + 0x2b) = *(undefined1 *)((longlong)pvVar4 + 0x2b);
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x30);
      puVar5 = puVar5 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FPCGPinProperties> @ 149f1b880

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FPCGPinProperties>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  uVar3 = ::GetTypeHash((FPCGDataTypeIdentifier *)((longlong)param_1 + 0x10));
  uVar5 = ((int)((ulonglong)uVar1 >> 0x20) + uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar6 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar3 = (uVar5 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar5 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar2 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x2b);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 0x2b) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x28);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 0x28) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 8);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 8) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x29);
  uVar3 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar5 = (*(byte *)((longlong)param_1 + 0x29) - uVar3) - iVar4 ^ uVar3 >> 0xd;
  uVar2 = (iVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = (uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf;
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x2a);
  uVar5 = 0x9e3779b9 - uVar2 ^ iVar4 * 0x100;
  uVar3 = (*(byte *)((longlong)param_1 + 0x2a) - uVar5) - iVar4 ^ uVar5 >> 0xd;
  uVar2 = (iVar4 - uVar3) - uVar5 ^ uVar3 >> 0xc;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 3;
  uVar5 = (uVar5 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar5) - uVar2 ^ uVar5 >> 0xf;
}

// Construct<FPCGDataTypeInfoParam> @ 149f1bd90

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoParam>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoParam__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoParam> @ 149f1bdb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoParam>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoParam__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoParam> @ 149f1bdd0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoParam>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoParam> @ 149f1be20

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoParam>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGDataTypeInfoSettings> @ 149f1d210

void __cdecl UE::CoreUObject::Private::Construct<FPCGDataTypeInfoSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoSettings__6B_;
  return;
}

// ConstructForTests<FPCGDataTypeInfoSettings> @ 149f1d230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDataTypeInfoSettings>(void *param_1)

{
  *(undefined ***)param_1 = &___7FPCGDataTypeInfoSettings__6B_;
  return;
}

// Destruct<FPCGDataTypeInfoSettings> @ 149f1d250

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDataTypeInfoSettings>(void *param_1)

{
  return;
}

// Copy<FPCGDataTypeInfoSettings> @ 149f1d260

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDataTypeInfoSettings>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// Construct<FPCGSettingsOverridableParam> @ 149f1d560

void __cdecl UE::CoreUObject::Private::Construct<FPCGSettingsOverridableParam>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x73) = 0;
  *(undefined1 *)((longlong)param_1 + 0x77) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FPCGSettingsOverridableParam> @ 149f1d610

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGSettingsOverridableParam>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FPCGSettingsOverridableParam> @ 149f1d6b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGSettingsOverridableParam>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FPCGSettingsOverridableParam> @ 149f1d790

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGSettingsOverridableParam>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar5 = param_1;
    do {
      *puVar5 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar5 + 1),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 8));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar4 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar4 + 0x18));
      }
      puVar5[3] = *(undefined8 *)((longlong)pvVar4 + 0x18);
      if ((TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(puVar5 + 4) !=
          (TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)pvVar4 + 0x20)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar5 + 0xb),(int *)(puVar5 + 0xd),
                   (ForElementType<FSetElementId> *)((longlong)pvVar4 + 0x58),
                   *(int *)((longlong)pvVar4 + 0x68));
        TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar5 + 4),
                    (TSparseArray<TSparseSetElement<TTuple<int,FPCGPropertyAliases>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)pvVar4 + 0x20));
      }
      *(undefined1 *)(puVar5 + 0xe) = *(undefined1 *)((longlong)pvVar4 + 0x70);
      pFVar1 = (ForAnyElementType *)(puVar5 + 0xf);
      *(undefined1 *)((longlong)puVar5 + 0x71) = *(undefined1 *)((longlong)pvVar4 + 0x71);
      *(undefined1 *)((longlong)puVar5 + 0x72) = *(undefined1 *)((longlong)pvVar4 + 0x72);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar4 + 0x78)) {
        iVar3 = *(int *)((longlong)pvVar4 + 0x80);
        piVar2 = (int *)((longlong)puVar5 + 0x84);
        _Src = ((ForAnyElementType *)((longlong)pvVar4 + 0x78))->Data;
        *(int *)(puVar5 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x88);
      puVar5 = puVar5 + 0x11;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGPropertyAliases> @ 149f1d990

void __cdecl UE::CoreUObject::Private::Construct<FPCGPropertyAliases>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGPropertyAliases> @ 149f1d9a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPropertyAliases>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGPropertyAliases> @ 149f1d9b0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPropertyAliases>(void *param_1)

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

// Copy<FPCGPropertyAliases> @ 149f1d9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGPropertyAliases>(void *param_1,void *param_2,int param_3)

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

// Construct<FPCGPointArray> @ 149f1ddf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::Construct<FPCGPointArray>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  uint uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  TVector<double>_u_0 TStack_130;
  TVector<double>_u_0 TStack_118;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  
  uVar29 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x18) = (double)fVar4;
  uVar20 = __real_3f800000;
  *(double *)((longlong)param_1 + 0x20) = (double)fVar5;
  *(double *)((longlong)param_1 + 0x28) = (double)fVar6;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar4;
  uVar21 = __xmm_80000000000000008000000000000000;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar5;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar6;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar4;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar5;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar6;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar34 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar35 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar36 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar37 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[0];
  uVar38 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar39 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar40 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar41 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar42 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar43 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar44 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar45 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar33 = (uint)uVar21;
  uVar27 = (uint)((ulonglong)uVar21 >> 0x20);
  TStack_130._s_0.X =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                              0x20) ^ uVar27,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar33);
  TStack_130._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar27,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar33);
  iVar26 = *(int *)((longlong)param_1 + 8);
  TStack_118._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  TStack_118._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uStack_f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_f0 = _UNK_150689688;
  uStack_e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_e0 = _UNK_150689688;
  TStack_130._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar27,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar33);
  TStack_118._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uStack_d8 = 0x3f000000;
  uStack_d0 = 0xffffffffffffffff;
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar27 = (uint)uVar28;
      auVar32._8_4_ = uVar42;
      auVar32._0_8_ = (double)fVar9;
      auVar32._12_4_ = uVar43;
      uVar33 = 0;
      if ((int)uVar27 < iVar26) {
        uVar33 = ~uVar27 >> 0x1f;
      }
      auStack_c8._8_4_ = uVar44;
      auStack_c8._0_8_ = (double)fVar6;
      auStack_c8._12_4_ = uVar45;
      if ((uVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)param_1;
      auVar10._8_4_ = uVar34;
      auVar10._0_8_ = (double)fVar7;
      auVar10._12_4_ = uVar35;
      *(undefined1 (*) [16])(uVar31 + lVar2) = auVar10;
      auVar17._8_4_ = uVar36;
      auVar17._0_8_ = (double)fVar4;
      auVar17._12_4_ = uVar37;
      *(undefined1 (*) [16])(uVar31 + 0x10 + lVar2) = auVar17;
      auVar18._8_4_ = uVar38;
      auVar18._0_8_ = (double)fVar8;
      auVar18._12_4_ = uVar39;
      *(undefined1 (*) [16])(uVar31 + 0x20 + lVar2) = auVar18;
      auVar19._8_4_ = uVar40;
      auVar19._0_8_ = (double)fVar5;
      auVar19._12_4_ = uVar41;
      *(undefined1 (*) [16])(uVar31 + 0x30 + lVar2) = auVar19;
      *(undefined1 (*) [16])(uVar31 + 0x40 + lVar2) = auVar32;
      puVar1 = (undefined8 *)(uVar31 + 0x50 + lVar2);
      *puVar1 = auStack_c8._0_8_;
      puVar1[1] = auStack_c8._8_8_;
      iVar26 = *(int *)((longlong)param_1 + 8);
      uVar28 = (ulonglong)(uVar27 + 1);
      uVar31 = uVar31 + 0x60;
    } while ((int)(uVar27 + 1) < iVar26);
  }
  auVar11._8_4_ = uVar34;
  auVar11._0_8_ = (double)fVar7;
  auVar11._12_4_ = uVar35;
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar11;
  auVar12._8_4_ = uVar36;
  auVar12._0_8_ = (double)fVar4;
  auVar12._12_4_ = uVar37;
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar12;
  auVar13._8_4_ = uVar38;
  auVar13._0_8_ = (double)fVar8;
  auVar13._12_4_ = uVar39;
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar13;
  auVar14._8_4_ = uVar40;
  auVar14._0_8_ = (double)fVar5;
  auVar14._12_4_ = uVar41;
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar14;
  auVar15._8_4_ = uVar42;
  auVar15._0_8_ = (double)fVar9;
  auVar15._12_4_ = uVar43;
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar15;
  auVar16._8_4_ = uVar44;
  auVar16._0_8_ = (double)fVar6;
  auVar16._12_4_ = uVar45;
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar16;
  iVar26 = *(int *)((longlong)param_1 + 0x88);
  uVar33 = 0;
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(uVar28 + *(longlong *)((longlong)param_1 + 0x80)) = uVar20;
      iVar26 = *(int *)((longlong)param_1 + 0x88);
      uVar28 = uVar28 + 4;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined4 *)((longlong)param_1 + 0x90) = uVar20;
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetValue
            ((FPCGPointArrayProperty<UE::Math::TVector<double>_> *)((longlong)param_1 + 0x98),
             (TVector<double> *)&TStack_130._s_0);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetValue
            ((FPCGPointArrayProperty<UE::Math::TVector<double>_> *)((longlong)param_1 + 200),
             (TVector<double> *)&TStack_118._s_0);
  iVar26 = *(int *)((longlong)param_1 + 0x108);
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar24 = uStack_e0;
      uVar23 = uStack_e8;
      uVar22 = uStack_f0;
      uVar21 = uStack_f8;
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((longlong)param_1 + 0x100);
      puVar1 = (undefined8 *)(uVar28 + lVar2);
      *puVar1 = uVar21;
      puVar1[1] = uVar22;
      puVar1 = (undefined8 *)(uVar28 + 0x10 + lVar2);
      *puVar1 = uVar23;
      puVar1[1] = uVar24;
      iVar26 = *(int *)((longlong)param_1 + 0x108);
      uVar28 = uVar28 + 0x20;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined8 *)((longlong)param_1 + 0x110) = uStack_f8;
  *(undefined8 *)((longlong)param_1 + 0x118) = uStack_f0;
  *(undefined8 *)((longlong)param_1 + 0x120) = uStack_e8;
  *(undefined8 *)((longlong)param_1 + 0x128) = uStack_e0;
  iVar26 = *(int *)((longlong)param_1 + 0x148);
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar20 = (undefined4)uStack_d8;
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(uVar28 + *(longlong *)((longlong)param_1 + 0x140)) = uVar20;
      iVar26 = *(int *)((longlong)param_1 + 0x148);
      uVar28 = uVar28 + 4;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined4 *)((longlong)param_1 + 0x150) = (undefined4)uStack_d8;
  iVar26 = *(int *)((longlong)param_1 + 0x160);
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar20 = uStack_d8._4_4_;
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(uVar28 + *(longlong *)((longlong)param_1 + 0x158)) = uVar20;
      iVar26 = *(int *)((longlong)param_1 + 0x160);
      uVar28 = uVar28 + 4;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined4 *)((longlong)param_1 + 0x168) = uStack_d8._4_4_;
  iVar26 = *(int *)((longlong)param_1 + 0x178);
  uVar28 = uVar29;
  if (0 < iVar26) {
    do {
      uVar21 = uStack_d0;
      uVar30 = (uint)uVar28;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(uVar29 + *(longlong *)((longlong)param_1 + 0x170)) = uVar21;
      uVar29 = uVar29 + 8;
      iVar26 = *(int *)((longlong)param_1 + 0x178);
      uVar28 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined8 *)((longlong)param_1 + 0x180) = uStack_d0;
  return;
}

// ConstructForTests<FPCGPointArray> @ 149f1de00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGPointArray>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  uint uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  TVector<double>_u_0 TStack_130;
  TVector<double>_u_0 TStack_118;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  
  uVar29 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x10) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x18) = (double)fVar4;
  uVar20 = __real_3f800000;
  *(double *)((longlong)param_1 + 0x20) = (double)fVar5;
  *(double *)((longlong)param_1 + 0x28) = (double)fVar6;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x30) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x38) = (double)fVar4;
  uVar21 = __xmm_80000000000000008000000000000000;
  *(double *)((longlong)param_1 + 0x40) = (double)fVar5;
  *(double *)((longlong)param_1 + 0x48) = (double)fVar6;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x50) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x58) = (double)fVar4;
  *(double *)((longlong)param_1 + 0x60) = (double)fVar5;
  *(double *)((longlong)param_1 + 0x68) = (double)fVar6;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined4 *)((longlong)param_1 + 400) = 0;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  fVar7 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar34 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar35 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar36 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar37 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar8 = GlobalVectorConstants::FloatZero.m128_f32[0];
  uVar38 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar39 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar40 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar41 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar42 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar43 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar44 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar45 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  uVar33 = (uint)uVar21;
  uVar27 = (uint)((ulonglong)uVar21 >> 0x20);
  TStack_130._s_0.X =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                              0x20) ^ uVar27,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar33);
  TStack_130._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar27,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar33);
  iVar26 = *(int *)((longlong)param_1 + 8);
  TStack_118._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  TStack_118._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uStack_f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_f0 = _UNK_150689688;
  uStack_e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_e0 = _UNK_150689688;
  TStack_130._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar27,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar33);
  TStack_118._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uStack_d8 = 0x3f000000;
  uStack_d0 = 0xffffffffffffffff;
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar27 = (uint)uVar28;
      auVar32._8_4_ = uVar42;
      auVar32._0_8_ = (double)fVar9;
      auVar32._12_4_ = uVar43;
      uVar33 = 0;
      if ((int)uVar27 < iVar26) {
        uVar33 = ~uVar27 >> 0x1f;
      }
      auStack_c8._8_4_ = uVar44;
      auStack_c8._0_8_ = (double)fVar6;
      auStack_c8._12_4_ = uVar45;
      if ((uVar33 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)param_1;
      auVar10._8_4_ = uVar34;
      auVar10._0_8_ = (double)fVar7;
      auVar10._12_4_ = uVar35;
      *(undefined1 (*) [16])(uVar31 + lVar2) = auVar10;
      auVar17._8_4_ = uVar36;
      auVar17._0_8_ = (double)fVar4;
      auVar17._12_4_ = uVar37;
      *(undefined1 (*) [16])(uVar31 + 0x10 + lVar2) = auVar17;
      auVar18._8_4_ = uVar38;
      auVar18._0_8_ = (double)fVar8;
      auVar18._12_4_ = uVar39;
      *(undefined1 (*) [16])(uVar31 + 0x20 + lVar2) = auVar18;
      auVar19._8_4_ = uVar40;
      auVar19._0_8_ = (double)fVar5;
      auVar19._12_4_ = uVar41;
      *(undefined1 (*) [16])(uVar31 + 0x30 + lVar2) = auVar19;
      *(undefined1 (*) [16])(uVar31 + 0x40 + lVar2) = auVar32;
      puVar1 = (undefined8 *)(uVar31 + 0x50 + lVar2);
      *puVar1 = auStack_c8._0_8_;
      puVar1[1] = auStack_c8._8_8_;
      iVar26 = *(int *)((longlong)param_1 + 8);
      uVar28 = (ulonglong)(uVar27 + 1);
      uVar31 = uVar31 + 0x60;
    } while ((int)(uVar27 + 1) < iVar26);
  }
  auVar11._8_4_ = uVar34;
  auVar11._0_8_ = (double)fVar7;
  auVar11._12_4_ = uVar35;
  *(undefined1 (*) [16])((longlong)param_1 + 0x10) = auVar11;
  auVar12._8_4_ = uVar36;
  auVar12._0_8_ = (double)fVar4;
  auVar12._12_4_ = uVar37;
  *(undefined1 (*) [16])((longlong)param_1 + 0x20) = auVar12;
  auVar13._8_4_ = uVar38;
  auVar13._0_8_ = (double)fVar8;
  auVar13._12_4_ = uVar39;
  *(undefined1 (*) [16])((longlong)param_1 + 0x30) = auVar13;
  auVar14._8_4_ = uVar40;
  auVar14._0_8_ = (double)fVar5;
  auVar14._12_4_ = uVar41;
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar14;
  auVar15._8_4_ = uVar42;
  auVar15._0_8_ = (double)fVar9;
  auVar15._12_4_ = uVar43;
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar15;
  auVar16._8_4_ = uVar44;
  auVar16._0_8_ = (double)fVar6;
  auVar16._12_4_ = uVar45;
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar16;
  iVar26 = *(int *)((longlong)param_1 + 0x88);
  uVar33 = 0;
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(uVar28 + *(longlong *)((longlong)param_1 + 0x80)) = uVar20;
      iVar26 = *(int *)((longlong)param_1 + 0x88);
      uVar28 = uVar28 + 4;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined4 *)((longlong)param_1 + 0x90) = uVar20;
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetValue
            ((FPCGPointArrayProperty<UE::Math::TVector<double>_> *)((longlong)param_1 + 0x98),
             (TVector<double> *)&TStack_130._s_0);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetValue
            ((FPCGPointArrayProperty<UE::Math::TVector<double>_> *)((longlong)param_1 + 200),
             (TVector<double> *)&TStack_118._s_0);
  iVar26 = *(int *)((longlong)param_1 + 0x108);
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar24 = uStack_e0;
      uVar23 = uStack_e8;
      uVar22 = uStack_f0;
      uVar21 = uStack_f8;
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)((longlong)param_1 + 0x100);
      puVar1 = (undefined8 *)(uVar28 + lVar2);
      *puVar1 = uVar21;
      puVar1[1] = uVar22;
      puVar1 = (undefined8 *)(uVar28 + 0x10 + lVar2);
      *puVar1 = uVar23;
      puVar1[1] = uVar24;
      iVar26 = *(int *)((longlong)param_1 + 0x108);
      uVar28 = uVar28 + 0x20;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined8 *)((longlong)param_1 + 0x110) = uStack_f8;
  *(undefined8 *)((longlong)param_1 + 0x118) = uStack_f0;
  *(undefined8 *)((longlong)param_1 + 0x120) = uStack_e8;
  *(undefined8 *)((longlong)param_1 + 0x128) = uStack_e0;
  iVar26 = *(int *)((longlong)param_1 + 0x148);
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar20 = (undefined4)uStack_d8;
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(uVar28 + *(longlong *)((longlong)param_1 + 0x140)) = uVar20;
      iVar26 = *(int *)((longlong)param_1 + 0x148);
      uVar28 = uVar28 + 4;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined4 *)((longlong)param_1 + 0x150) = (undefined4)uStack_d8;
  iVar26 = *(int *)((longlong)param_1 + 0x160);
  uVar28 = uVar29;
  uVar31 = uVar29;
  if (0 < iVar26) {
    do {
      uVar20 = uStack_d8._4_4_;
      uVar30 = (uint)uVar31;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)(uVar28 + *(longlong *)((longlong)param_1 + 0x158)) = uVar20;
      iVar26 = *(int *)((longlong)param_1 + 0x160);
      uVar28 = uVar28 + 4;
      uVar31 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined4 *)((longlong)param_1 + 0x168) = uStack_d8._4_4_;
  iVar26 = *(int *)((longlong)param_1 + 0x178);
  uVar28 = uVar29;
  if (0 < iVar26) {
    do {
      uVar21 = uStack_d0;
      uVar30 = (uint)uVar28;
      uVar27 = uVar33;
      if ((int)uVar30 < iVar26) {
        uVar27 = ~uVar30 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(uVar29 + *(longlong *)((longlong)param_1 + 0x170)) = uVar21;
      uVar29 = uVar29 + 8;
      iVar26 = *(int *)((longlong)param_1 + 0x178);
      uVar28 = (ulonglong)(uVar30 + 1);
    } while ((int)(uVar30 + 1) < iVar26);
  }
  *(undefined8 *)((longlong)param_1 + 0x180) = uStack_d0;
  return;
}

// Destruct<FPCGPointArray> @ 149f1de10

void __cdecl UE::CoreUObject::Private::Destruct<FPCGPointArray>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x170));
  }
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// SerializeArchive<FPCGPointArray> @ 149f1de20

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FPCGPointArray>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FPCGPointArray::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FPCGPointArray> @ 149f1de50

bool __cdecl UE::CoreUObject::Private::Copy<FPCGPointArray>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  int local_res18;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    local_res18 = param_3;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar7);
      if (pFVar7 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,iVar3,iVar4,pFVar7,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar7->Data,pFVar5,(longlong)iVar3 * 0x60);
          }
        }
      }
      pFVar5 = pFVar2[3].Data;
      pFVar7[2].Data = pFVar2[2].Data;
      pFVar7[3].Data = pFVar5;
      pFVar5 = pFVar2[5].Data;
      pFVar7[4].Data = pFVar2[4].Data;
      pFVar7[5].Data = pFVar5;
      pFVar5 = pFVar2[7].Data;
      pFVar7[6].Data = pFVar2[6].Data;
      pFVar7[7].Data = pFVar5;
      pFVar5 = pFVar2[9].Data;
      pFVar7[8].Data = pFVar2[8].Data;
      pFVar7[9].Data = pFVar5;
      pFVar5 = pFVar2[0xb].Data;
      pFVar7[10].Data = pFVar2[10].Data;
      pFVar7[0xb].Data = pFVar5;
      pFVar5 = pFVar2[0xd].Data;
      pFVar7[0xc].Data = pFVar2[0xc].Data;
      pFVar7[0xd].Data = pFVar5;
      *(undefined4 *)&pFVar7[0xe].Data = *(undefined4 *)&pFVar2[0xe].Data;
      FPCGPointArrayProperty<float>::operator=
                ((FPCGPointArrayProperty<float> *)(pFVar7 + 0x10),
                 (FPCGPointArrayProperty<float> *)(pFVar2 + 0x10));
      FPCGPointArrayProperty<UE::Math::TVector<double>_>::operator=
                ((FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(pFVar7 + 0x13),
                 (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(pFVar2 + 0x13));
      FPCGPointArrayProperty<UE::Math::TVector<double>_>::operator=
                ((FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(pFVar7 + 0x19),
                 (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(pFVar2 + 0x19));
      pFVar6 = pFVar7 + 0x20;
      if (pFVar6 != pFVar2 + 0x20) {
        iVar3 = *(int *)&pFVar2[0x21].Data;
        piVar1 = (int *)((longlong)&pFVar7[0x21].Data + 4);
        pFVar5 = pFVar2[0x20].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[0x21].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,0x10,iVar3,iVar4,pFVar6,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,pFVar5,(longlong)iVar3 << 5);
          }
        }
      }
      pFVar5 = pFVar2[0x23].Data;
      pFVar7[0x22].Data = pFVar2[0x22].Data;
      pFVar7[0x23].Data = pFVar5;
      pFVar5 = pFVar2[0x25].Data;
      pFVar7[0x24].Data = pFVar2[0x24].Data;
      pFVar7[0x25].Data = pFVar5;
      *(undefined4 *)&pFVar7[0x26].Data = *(undefined4 *)&pFVar2[0x26].Data;
      FPCGPointArrayProperty<float>::operator=
                ((FPCGPointArrayProperty<float> *)(pFVar7 + 0x28),
                 (FPCGPointArrayProperty<float> *)(pFVar2 + 0x28));
      pFVar6 = pFVar7 + 0x2b;
      if (pFVar6 != pFVar2 + 0x2b) {
        iVar3 = *(int *)&pFVar2[0x2c].Data;
        piVar1 = (int *)((longlong)&pFVar7[0x2c].Data + 4);
        pFVar5 = pFVar2[0x2b].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[0x2c].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,iVar4,pFVar6,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,pFVar5,(longlong)iVar3 << 2);
          }
        }
      }
      pFVar6 = pFVar7 + 0x2e;
      *(undefined4 *)&pFVar7[0x2d].Data = *(undefined4 *)&pFVar2[0x2d].Data;
      *(undefined4 *)((longlong)&pFVar7[0x2d].Data + 4) =
           *(undefined4 *)((longlong)&pFVar2[0x2d].Data + 4);
      if (pFVar6 != pFVar2 + 0x2e) {
        iVar3 = *(int *)&pFVar2[0x2f].Data;
        piVar1 = (int *)((longlong)&pFVar7[0x2f].Data + 4);
        pFVar5 = pFVar2[0x2e].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar7[0x2f].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,pFVar5,(longlong)iVar3 << 3);
          }
        }
      }
      local_res18 = local_res18 + -1;
      pFVar7[0x30].Data = pFVar2[0x30].Data;
      *(undefined4 *)&pFVar7[0x31].Data = *(undefined4 *)&pFVar2[0x31].Data;
      *(undefined4 *)&pFVar7[0x32].Data = *(undefined4 *)&pFVar2[0x32].Data;
      *(undefined1 *)((longlong)&pFVar7[0x32].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[0x32].Data + 4);
      pFVar7 = pFVar7 + 0x34;
    } while (local_res18 != 0);
  }
  return true;
}

// Identical<FPCGPointArray> @ 149f1e1a0

bool __cdecl
UE::CoreUObject::Private::Identical<FPCGPointArray>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = ::operator==(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// Decay<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>_>,TArray<UPCGPin_*,TSizedDefaultAllocator<32>_>_> @ 149f210d0

TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Unsafe::
Decay<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>_>,TArray<UPCGPin_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// DereferenceIfNecessary<FPCGModule,FPCGModule_*_&> @ 149f21130

FPCGModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FPCGModule,FPCGModule_*_&>(FPCGModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FPCGRuntimeGenScheduler,FPCGRuntimeGenScheduler_*_&> @ 149f21150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGRuntimeGenScheduler * __cdecl
UE::Core::Private::DereferenceIfNecessary<FPCGRuntimeGenScheduler,FPCGRuntimeGenScheduler_*_&>
          (FPCGRuntimeGenScheduler **param_1)

{
  return *param_1;
}

// GetStructPtr<FPCGVirtualTexturePrimingInfo> @ 149f29740

/* WARNING: Removing unreachable block (ram,0x000149f297f6) */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGVirtualTexturePrimingInfo * __cdecl
UE::StructUtils::GetStructPtr<FPCGVirtualTexturePrimingInfo>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UPackage *pUVar2;
  
  if ((param_2 == (void *)0x0) || (param_1 == (UScriptStruct *)0x0)) {
    return (FPCGVirtualTexturePrimingInfo *)0x0;
  }
  if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo,(UObject *)pUVar2,
                         L"PCGVirtualTexturePrimingInfo");
  }
  if (param_1 != Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton) {
    if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGVirtualTexturePrimingInfo,(UObject *)pUVar2
                           ,L"PCGVirtualTexturePrimingInfo");
      if (Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton ==
          (UScriptStruct *)0x0) {
        return (FPCGVirtualTexturePrimingInfo *)0x0;
      }
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton)->
                 _padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
        &(Z_Registration_Info_UScriptStruct_FPCGVirtualTexturePrimingInfo.OuterSingleton)->_padding_
       )) {
      return param_2;
    }
    return (FPCGVirtualTexturePrimingInfo *)0x0;
  }
  return param_2;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 149f2f090

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
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
    iVar8 = 0x400;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x400 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x401) {
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
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>_> @ 149f2f160

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>_>
          (ushort param_1,ForElementType<UPCGNode_*> *param_2,int *param_3)

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
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_> @ 149f2f230

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_>
          (ushort param_1,
          ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
          *param_2,int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>_> @ 149f2f300

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>_>
          (ushort param_1,ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs> *param_2,
          int *param_3)

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
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGRuntimeGenChangeDetection::FDetectionInputs>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_> @ 149f2f3d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
          (ushort param_1,ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> *param_2,
          int *param_3)

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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGSpatialAlgo::AStar::FNode>_> @ 149f2f4a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGSpatialAlgo::AStar::FNode>_>
          (ushort param_1,ForElementType<PCGSpatialAlgo::AStar::FNode> *param_2,int *param_3)

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
    iVar8 = 0x400;
    uVar7 = (ulonglong)(byte)param_1;
    if (0x400 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x401) {
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
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGSpatialAlgo::AStar::FNode>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 149f2f570

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<unsigned_int> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0xe) {
      iVar8 = 0xd;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0xe) {
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
    TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_> @ 149f2f650

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
          *param_4,int *param_5,int *param_6)

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
    ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>::
    ResizeAllocation(param_4,iVar2,iVar7,uVar8);
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_> @ 149f2f730

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> *param_4,int *param_5,
          int *param_6)

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
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 149f2f810

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,ForElementType<int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  iVar2 = 0x400;
  if (0x400 < (uint)param_4) {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_> @ 149f2f8d0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
          (uint param_1,uint param_2,ForElementType<unsigned_int> *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xe) {
    iVar2 = 0xd;
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
    TSizedInlineAllocator<13,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_> @ 149f2f990

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>_>
          (uint param_1,uint param_2,
          ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>
          *param_3,int param_4,int *param_5)

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
    ForElementType<TTuple<FPCGRuntimeGenScheduler::FGridGenerationKey,UPCGComponent_*>_>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_> @ 149f2fa50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>_>
          (uint param_1,uint param_2,
          ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x11) {
    iVar2 = 0x10;
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
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FPCGRuntimeGenScheduler::FGridGenerationKey>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_> @ 149f2fb10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
          (uint param_1,uint param_2,int param_3,ForElementType<int> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x401) {
      iVar1 = 0x400;
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
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<int>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGSpatialAlgo::AStar::FNode>_> @ 149f2fb90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGSpatialAlgo::AStar::FNode>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<PCGSpatialAlgo::AStar::FNode> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x401) {
      iVar1 = 0x400;
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
    TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::
    ForElementType<PCGSpatialAlgo::AStar::FNode>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// Construct<FPCGAttributeExtractorTestStruct> @ 149f74720

void __cdecl UE::CoreUObject::Private::Construct<FPCGAttributeExtractorTestStruct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGAttributeExtractorTestStruct> @ 149f74730

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributeExtractorTestStruct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGAttributeExtractorTestStruct> @ 149f74740

void __cdecl UE::CoreUObject::Private::Destruct<FPCGAttributeExtractorTestStruct>(void *param_1)

{
  return;
}

// Copy<FPCGAttributeExtractorTestStruct> @ 149f74750

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributeExtractorTestStruct>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGAttributeExtractorTestStructDepth1> @ 149f748a0

void __cdecl
UE::CoreUObject::Private::Construct<FPCGAttributeExtractorTestStructDepth1>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FPCGAttributeExtractorTestStructDepth1> @ 149f748b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributeExtractorTestStructDepth1>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FPCGAttributeExtractorTestStructDepth1> @ 149f748c0

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGAttributeExtractorTestStructDepth1>(void *param_1)

{
  return;
}

// Copy<FPCGAttributeExtractorTestStructDepth1> @ 149f748d0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributeExtractorTestStructDepth1>
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

// Construct<FPCGAttributeExtractorTestStructDepth2> @ 149f74900

void __cdecl
UE::CoreUObject::Private::Construct<FPCGAttributeExtractorTestStructDepth2>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FPCGAttributeExtractorTestStructDepth2> @ 149f74910

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGAttributeExtractorTestStructDepth2>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FPCGAttributeExtractorTestStructDepth2> @ 149f74920

void __cdecl
UE::CoreUObject::Private::Destruct<FPCGAttributeExtractorTestStructDepth2>(void *param_1)

{
  return;
}

// Copy<FPCGAttributeExtractorTestStructDepth2> @ 149f749b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGAttributeExtractorTestStructDepth2>
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

// Construct<FDeterminismTestResult> @ 149f79df0

void __cdecl UE::CoreUObject::Private::Construct<FDeterminismTestResult>(void *param_1)

{
  memset(param_1,0,0xa8);
  FDeterminismTestResult::FDeterminismTestResult(param_1);
  return;
}

// ConstructForTests<FDeterminismTestResult> @ 149f79e20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDeterminismTestResult>(void *param_1)

{
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  ::FName::FName((FName *)((longlong)param_1 + 8),L"Untitled");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),L"Unnamed");
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            ((FPCGDataTypeIdentifier *)((longlong)param_1 + 0x28),None);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FDeterminismTestResult> @ 149f79e30

void __cdecl UE::CoreUObject::Private::Destruct<FDeterminismTestResult>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x90),*(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EDeterminismLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EDeterminismLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  return;
}

// Copy<FDeterminismTestResult> @ 149f79e40

bool __cdecl
UE::CoreUObject::Private::Copy<FDeterminismTestResult>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    pvVar5 = param_2;
    puVar6 = param_1;
    do {
      *puVar6 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      puVar6[1] = *(undefined8 *)((longlong)pvVar5 + 8);
      ::FString::operator=((FString *)(puVar6 + 2),(FString *)((longlong)pvVar5 + 0x10));
      pFVar1 = (ForAnyElementType *)(puVar6 + 5);
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)((longlong)pvVar5 + 0x20);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar5 + 0x28)) {
        iVar3 = *(int *)((longlong)pvVar5 + 0x30);
        piVar2 = (int *)((longlong)puVar6 + 0x34);
        pFVar4 = ((ForAnyElementType *)((longlong)pvVar5 + 0x28))->Data;
        *(int *)(puVar6 + 6) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                    (pFVar1->Data,(FPCGDataTypeBaseId *)pFVar4,iVar3);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 8);
      *(undefined4 *)(puVar6 + 7) = *(undefined4 *)((longlong)pvVar5 + 0x38);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar5 + 0x40)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar6 + 0xf),(int *)(puVar6 + 0x11),
                   (ForElementType<FSetElementId> *)((longlong)pvVar5 + 0x78),
                   *(int *)((longlong)pvVar5 + 0x88));
        iVar3 = *(int *)((longlong)pvVar5 + 0x48);
        TSparseArray<TSparseSetElement<TTuple<FName,enum_EDeterminismLevel>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(pFVar1,iVar3);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar3,pFVar1,(int *)(puVar6 + 9),(int *)((longlong)puVar6 + 0x4c));
        *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)((longlong)pvVar5 + 0x70);
        *(undefined4 *)((longlong)puVar6 + 0x74) = *(undefined4 *)((longlong)pvVar5 + 0x74);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(puVar6 + 10) !=
            (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar5 + 0x50)) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(puVar6 + 10),
                     (TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar5 + 0x50));
        }
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,((ForAnyElementType *)((longlong)pvVar5 + 0x40))->Data,
                 (longlong)iVar3 * 0x14);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 0x12);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar5 + 0x90)) {
        DestructItems<FString,int>((FString *)pFVar1->Data,*(int *)(puVar6 + 0x13));
        iVar3 = *(int *)((longlong)pvVar5 + 0x98);
        piVar2 = (int *)((longlong)puVar6 + 0x9c);
        pFVar4 = ((ForAnyElementType *)((longlong)pvVar5 + 0x90))->Data;
        *(int *)(puVar6 + 0x13) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar4,iVar3);
        }
      }
      *(undefined1 *)(puVar6 + 0x14) = *(undefined1 *)((longlong)pvVar5 + 0xa0);
      param_3 = param_3 + -1;
      pvVar5 = (void *)((longlong)pvVar5 + 0xa8);
      puVar6 = puVar6 + 0x15;
    } while (param_3 != 0);
  }
  return true;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_> @ 149f8e890

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TQuat<double>_> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 5) {
    if (param_5->SecondaryData == (ForElementType<UE::Math::TQuat<double>_>)0x0) goto LAB_149f8e8fe;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_149f8e8fe:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_> @ 149f8e940

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Math::TRotator<double>_> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 5) {
    if (param_5->SecondaryData == (ForElementType<UE::Math::TRotator<double>_>)0x0)
    goto LAB_149f8e9ae;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_149f8e9ae:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_> @ 149f8e9f0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FString> *param_5,
          int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 4) {
      uVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 4) {
    if (param_5->SecondaryData == (ForElementType<FString>)0x0) goto LAB_149f8ea5e;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_149f8ea5e:
  *param_7 = uVar1;
  return;
}

// Construct<FPCGTestMyColorStruct> @ 149fa4c30

void __cdecl UE::CoreUObject::Private::Construct<FPCGTestMyColorStruct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPCGTestMyColorStruct> @ 149fa4c50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGTestMyColorStruct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPCGTestMyColorStruct> @ 149fa4cb0

void __cdecl UE::CoreUObject::Private::Destruct<FPCGTestMyColorStruct>(void *param_1)

{
  return;
}

// Copy<FPCGTestMyColorStruct> @ 149fa4cc0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGTestMyColorStruct>(void *param_1,void *param_2,int param_3)

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

// Construct<FPCGDummyGetPropertyStruct> @ 149fab620

void __cdecl UE::CoreUObject::Private::Construct<FPCGDummyGetPropertyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FPCGDummyGetPropertyStruct> @ 149fab640

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPCGDummyGetPropertyStruct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FPCGDummyGetPropertyStruct> @ 149fab660

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDummyGetPropertyStruct>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPCGDummyGetPropertyStruct> @ 149fabe90

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDummyGetPropertyStruct>(void *param_1,void *param_2,int param_3)

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
      pFVar2 = (ForAnyElementType *)((longlong)pFVar5 + ((longlong)param_2 - (longlong)param_1));
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
                    (4,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 2);
          }
        }
      }
      *(undefined4 *)&pFVar5[2].Data = *(undefined4 *)&pFVar2[2].Data;
      FPCGDummyGetPropertyLevel2Struct::operator=
                ((FPCGDummyGetPropertyLevel2Struct *)(pFVar5 + 3),
                 (FPCGDummyGetPropertyLevel2Struct *)(pFVar2 + 3));
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPCGDummyGetPropertyLevel2Struct> @ 149fb03c0

void __cdecl UE::CoreUObject::Private::Construct<FPCGDummyGetPropertyLevel2Struct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPCGDummyGetPropertyLevel2Struct> @ 149fb0b50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPCGDummyGetPropertyLevel2Struct>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPCGDummyGetPropertyLevel2Struct> @ 149fb0b60

void __cdecl UE::CoreUObject::Private::Destruct<FPCGDummyGetPropertyLevel2Struct>(void *param_1)

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

// Copy<FPCGDummyGetPropertyLevel2Struct> @ 149fb0bc0

bool __cdecl
UE::CoreUObject::Private::Copy<FPCGDummyGetPropertyLevel2Struct>
          (void *param_1,void *param_2,int param_3)

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
                    (8,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_> @ 14a0165e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGIndexing::FPCGIndexRange>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<PCGIndexing::FPCGIndexRange> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      uVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 0x41) {
    if (param_5->SecondaryData == (ForElementType<PCGIndexing::FPCGIndexRange>)0x0)
    goto LAB_14a016651;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_14a016651:
  *param_7 = uVar1;
  return;
}

// operator() @ 150545ff0

bool __thiscall
`UE::StructUtils::
GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>'::__l7::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *this_00;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1997345562860453820>);
  if (bVar4) {
    this_00 = FPCGInteractiveToolWorkingBaseData::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1997345562860453820>,
                       &`public:___cdecl_`struct_FPCGInteractiveToolWorkingBaseData*___ptr64___cdecl_UE::StructUtils::GetStructPtr<FPCGInteractiveToolWorkingBaseData,FPCGInteractiveToolWorkingBaseData>(UScriptStruct_const*___ptr64,void*___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150546096;
    }
  }
  bVar4 = false;
LAB_150546096:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505468f0

bool __thiscall
`UE::StructUtils::GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo>'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UScriptStruct *this_00;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1997345562860453820>);
  if (bVar4) {
    this_00 = FPCGDataTypeInfo::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1997345562860453820>,
                       &`public:___cdecl_`struct_FPCGDataTypeInfo*___ptr64___cdecl_UE::StructUtils::GetStructPtr<FPCGDataTypeInfo,FPCGDataTypeInfo>(UScriptStruct_const*___ptr64,void*___ptr64)'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150546996;
    }
  }
  bVar4 = false;
LAB_150546996:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

