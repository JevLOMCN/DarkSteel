// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 183

// Construct<FHairInterpolationSettings> @ 14df8e960

void __cdecl UE::CoreUObject::Private::Construct<FHairInterpolationSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 4;
  return;
}

// ConstructForTests<FHairInterpolationSettings> @ 14df8e990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairInterpolationSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 4;
  return;
}

// Destruct<FHairInterpolationSettings> @ 14df8e9c0

void __cdecl UE::CoreUObject::Private::Destruct<FHairInterpolationSettings>(void *param_1)

{
  return;
}

// Copy<FHairInterpolationSettings> @ 14df8ea10

bool __cdecl
UE::CoreUObject::Private::Copy<FHairInterpolationSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairSimulationSetup> @ 14df8ec50

void __cdecl UE::CoreUObject::Private::Construct<FHairSimulationSetup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"root");
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42480000;
  return;
}

// ConstructForTests<FHairSimulationSetup> @ 14df8eca0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairSimulationSetup>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"root");
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x42480000;
  return;
}

// Destruct<FHairSimulationSetup> @ 14df8ecf0

void __cdecl UE::CoreUObject::Private::Destruct<FHairSimulationSetup>(void *param_1)

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

// Copy<FHairSimulationSetup> @ 14df8ed10

bool __cdecl
UE::CoreUObject::Private::Copy<FHairSimulationSetup>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_1 + lVar1 + 2);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_1 + lVar1 + 0x10)
                );
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x20);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairDecimationSettings> @ 14df8ee30

void __cdecl UE::CoreUObject::Private::Construct<FHairDecimationSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// ConstructForTests<FHairDecimationSettings> @ 14df8ee50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairDecimationSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// Destruct<FHairDecimationSettings> @ 14df8ee70

void __cdecl UE::CoreUObject::Private::Destruct<FHairDecimationSettings>(void *param_1)

{
  return;
}

// Copy<FHairDecimationSettings> @ 14df8eec0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairDecimationSettings>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairSimulationConstraints> @ 14df8f020

void __cdecl UE::CoreUObject::Private::Construct<FHairSimulationConstraints>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3a83126f;
  return;
}

// ConstructForTests<FHairSimulationConstraints> @ 14df8f060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairSimulationConstraints>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3a83126f;
  return;
}

// Destruct<FHairSimulationConstraints> @ 14df8f0a0

void __cdecl UE::CoreUObject::Private::Destruct<FHairSimulationConstraints>(void *param_1)

{
  return;
}

// Copy<FHairSimulationConstraints> @ 14df8f0f0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairSimulationConstraints>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairLODSettings> @ 14df8f2c0

void __cdecl UE::CoreUObject::Private::Construct<FHairLODSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x20001;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FHairLODSettings> @ 14df8f300

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairLODSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x20001;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FHairLODSettings> @ 14df8f340

void __cdecl UE::CoreUObject::Private::Destruct<FHairLODSettings>(void *param_1)

{
  return;
}

// Copy<FHairLODSettings> @ 14df8f390

bool __cdecl
UE::CoreUObject::Private::Copy<FHairLODSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairSimulationForces> @ 14df8f600

void __cdecl UE::CoreUObject::Private::Construct<FHairSimulationForces>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3dcccccd;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xc08ea80000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FHairSimulationForces> @ 14df8f640

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairSimulationForces>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3dcccccd;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xc08ea80000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FHairSimulationForces> @ 14df8f680

void __cdecl UE::CoreUObject::Private::Destruct<FHairSimulationForces>(void *param_1)

{
  return;
}

// Copy<FHairSimulationForces> @ 14df8f710

bool __cdecl
UE::CoreUObject::Private::Copy<FHairSimulationForces>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGroomDataflowSettings> @ 14df8f780

void __cdecl UE::CoreUObject::Private::Construct<FGroomDataflowSettings>(void *param_1)

{
  FGroomDataflowSettings::FGroomDataflowSettings(param_1,(UObject *)0x0,(UDataflow *)0x0,(FName)0x0)
  ;
  return;
}

// ConstructForTests<FGroomDataflowSettings> @ 14df8f7a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomDataflowSettings>(void *param_1)

{
  FGroomDataflowSettings::FGroomDataflowSettings(param_1,(UObject *)0x0,(UDataflow *)0x0,(FName)0x0)
  ;
  return;
}

// Destruct<FGroomDataflowSettings> @ 14df8f7c0

void __cdecl UE::CoreUObject::Private::Destruct<FGroomDataflowSettings>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  FDataflowInstance::~FDataflowInstance(param_1);
  return;
}

// SerializeArchive<FGroomDataflowSettings> @ 14df8f810

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FGroomDataflowSettings>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  FChaosArchiveContext *this;
  FChaosArchiveContext *pFVar5;
  FArchiveProxy local_a8;
  FChaosArchiveContext *local_10;
  
  pFVar5 = (FChaosArchiveContext *)0x0;
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_HairStrandsCore();
      Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGroomDataflowSettings,(UObject *)pUVar4,
                           L"GroomDataflowSettings");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton,
               param_1,param_2,
               (UStruct *)Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton,
               (uchar *)0x0,(UObject *)0x0);
  }
  if (*(longlong *)((longlong)param_2 + 0x60) != 0) {
    FArchiveProxy::FArchiveProxy(&local_a8,param_1);
    local_a8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    this = ::operator_new(0x158);
    if (this != (FChaosArchiveContext *)0x0) {
      pFVar5 = ::Chaos::FChaosArchiveContext::FChaosArchiveContext(this);
    }
    local_10 = pFVar5;
    if (*(longlong *)((longlong)param_2 + 0x60) == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (**(code **)(**(longlong **)((longlong)param_2 + 0x60) + 0x40))
              (*(longlong **)((longlong)param_2 + 0x60),&local_a8);
    pFVar5 = local_10;
    if (local_10 != (FChaosArchiveContext *)0x0) {
      ::Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_10);
      ::operator_delete(pFVar5,0x158);
    }
    FArchiveProxy::~FArchiveProxy(&local_a8);
  }
  return true;
}

// Copy<FGroomDataflowSettings> @ 14df8fb50

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomDataflowSettings>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined8 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = param_1;
    do {
      puVar3 = (undefined8 *)((longlong)puVar9 + ((longlong)param_2 - (longlong)param_1));
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar9 = *puVar3;
      puVar9[1] = puVar3[1];
      FDataflowVariableOverrides::operator=
                ((FDataflowVariableOverrides *)(puVar9 + 2),
                 (FDataflowVariableOverrides *)(puVar3 + 2));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[7] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[7]);
      }
      pFVar1 = (ForAnyElementType *)(puVar9 + 8);
      puVar9[7] = puVar3[7];
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 8)) {
        iVar4 = *(int *)(puVar3 + 9);
        piVar2 = (int *)((longlong)puVar9 + 0x4c);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 8))->Data;
        *(int *)(puVar9 + 9) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TObjectPtr<USkeletalMesh>,TObjectPtr<USkeletalMesh>,int>
                    (pFVar1->Data,(TObjectPtr<USkeletalMesh> *)pFVar5,iVar4);
        }
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar9 + 10),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar3 + 10));
      lVar6 = puVar3[0xd];
      uVar7 = puVar3[0xc];
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = (TReferenceControllerBase<1> *)puVar9[0xd];
      puVar9[0xc] = uVar7;
      puVar9[0xd] = lVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      param_3 = param_3 + -1;
      puVar9 = puVar9 + 0xe;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairSimulationSolver> @ 14df902e0

void __cdecl UE::CoreUObject::Private::Construct<FHairSimulationSolver>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FHairSimulationSolver> @ 14df902f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairSimulationSolver>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FHairSimulationSolver> @ 14df90300

void __cdecl UE::CoreUObject::Private::Destruct<FHairSimulationSolver>(void *param_1)

{
  return;
}

// Copy<FHairSimulationSolver> @ 14df90310

bool __cdecl
UE::CoreUObject::Private::Copy<FHairSimulationSolver>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairGroupsPhysics> @ 14df90440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupsPhysics>(void *param_1)

{
  FUtf8String *this;
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FHairMaterialConstraints *pFVar4;
  FHairStrandsParameters *pFVar5;
  undefined1 auStack_2b8 [32];
  undefined2 uStack_298;
  undefined1 uStack_296;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  FUtf8String FStack_278;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 auStack_218 [88];
  void *pvStack_1c0;
  undefined4 uStack_1b8;
  void *pvStack_1b0;
  ForAnyElementType FStack_198;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  this = (FUtf8String *)((longlong)param_1 + 0x20);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset(this,0);
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 4;
  *(undefined4 *)((longlong)param_1 + 0x34) = 5;
  *(undefined4 *)((longlong)param_1 + 0x38) = 5;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0xc08ea80000000000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FHairMaterialConstraints::FHairMaterialConstraints
            ((FHairMaterialConstraints *)((longlong)param_1 + 0x78));
  FHairStrandsParameters::FHairStrandsParameters
            ((FHairStrandsParameters *)((longlong)param_1 + 0x250));
  FStack_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_278.Data.ArrayNum = 0;
  FStack_278.Data.ArrayMax = 0;
  uStack_290 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  FUtf8String::Reset(&FStack_278,0);
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 4;
  *(undefined8 *)((longlong)param_1 + 8) = uStack_290;
  uStack_268 = 0;
  uStack_298 = 0;
  uStack_296 = 4;
  uStack_264 = 5;
  uStack_260 = 5;
  uStack_25c = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = uStack_288;
  *(undefined8 *)((longlong)param_1 + 0x18) = uStack_280;
  if (this != &FStack_278) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Data).AllocatorInstance.Data = FStack_278.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x28) = FStack_278.Data.ArrayNum;
    *(int *)((longlong)param_1 + 0x2c) = FStack_278.Data.ArrayMax;
    FStack_278.Data.ArrayNum = 0;
    FStack_278.Data.ArrayMax = 0;
    FStack_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(undefined4 *)((longlong)param_1 + 0x30) = uStack_268;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_264;
  *(undefined4 *)((longlong)param_1 + 0x38) = uStack_260;
  *(undefined1 *)((longlong)param_1 + 0x3c) = uStack_25c;
  if (FStack_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_278.Data.AllocatorInstance.Data);
  }
  uVar3 = __real_c08ea80000000000._4_4_;
  uVar2 = (undefined4)__real_c08ea80000000000;
  uStack_240 = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_23c;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  pFVar4 = FHairMaterialConstraints::FHairMaterialConstraints
                     ((FHairMaterialConstraints *)auStack_218);
  *(bool *)((longlong)param_1 + 0x78) = (pFVar4->BendConstraint).SolveBend;
  *(bool *)((longlong)param_1 + 0x79) = (pFVar4->BendConstraint).ProjectBend;
  *(float *)((longlong)param_1 + 0x7c) = (pFVar4->BendConstraint).BendDamping;
  *(float *)((longlong)param_1 + 0x80) = (pFVar4->BendConstraint).BendStiffness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x88),&(pFVar4->BendConstraint).BendScale);
  *(bool *)((longlong)param_1 + 0x110) = (pFVar4->StretchConstraint).SolveStretch;
  *(bool *)((longlong)param_1 + 0x111) = (pFVar4->StretchConstraint).ProjectStretch;
  *(float *)((longlong)param_1 + 0x114) = (pFVar4->StretchConstraint).StretchDamping;
  *(float *)((longlong)param_1 + 0x118) = (pFVar4->StretchConstraint).StretchStiffness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x120),
             &(pFVar4->StretchConstraint).StretchScale);
  *(bool *)((longlong)param_1 + 0x1a8) = (pFVar4->CollisionConstraint).SolveCollision;
  *(bool *)((longlong)param_1 + 0x1a9) = (pFVar4->CollisionConstraint).ProjectCollision;
  *(float *)((longlong)param_1 + 0x1ac) = (pFVar4->CollisionConstraint).StaticFriction;
  *(float *)((longlong)param_1 + 0x1b0) = (pFVar4->CollisionConstraint).KineticFriction;
  *(float *)((longlong)param_1 + 0x1b4) = (pFVar4->CollisionConstraint).StrandsViscosity;
  *(undefined8 *)((longlong)param_1 + 0x1b8) =
       *(undefined8 *)&(pFVar4->CollisionConstraint).GridDimension.field0_0x0;
  *(int *)((longlong)param_1 + 0x1c0) =
       (pFVar4->CollisionConstraint).GridDimension.field0_0x0._s_0.Z;
  *(float *)((longlong)param_1 + 0x1c4) = (pFVar4->CollisionConstraint).CollisionRadius;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x1c8),
             &(pFVar4->CollisionConstraint).RadiusScale);
  FHairMaterialConstraints::~FHairMaterialConstraints((FHairMaterialConstraints *)auStack_218);
  pFVar5 = FHairStrandsParameters::FHairStrandsParameters((FHairStrandsParameters *)auStack_218);
  ((FHairStrandsParameters *)((longlong)param_1 + 0x250))->StrandsSize = pFVar5->StrandsSize;
  *(float *)((longlong)param_1 + 0x254) = pFVar5->StrandsDensity;
  *(float *)((longlong)param_1 + 600) = pFVar5->StrandsSmoothing;
  *(float *)((longlong)param_1 + 0x25c) = pFVar5->StrandsThickness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x260),&pFVar5->ThicknessScale);
  if (FStack_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.Data);
  }
  auStack_218._16_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_1b0 != (void *)0x0) {
    FMemory::Free(pvStack_1b0);
  }
  uStack_1b8 = 0;
  if (pvStack_1c0 != (void *)0x0) {
    FMemory::Free(pvStack_1c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(auStack_218 + 0x18));
  return;
}

// ConstructForTests<FHairGroupsPhysics> @ 14df90510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupsPhysics>(void *param_1)

{
  FUtf8String *this;
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FHairMaterialConstraints *pFVar4;
  FHairStrandsParameters *pFVar5;
  undefined1 auStack_2b8 [32];
  undefined2 uStack_298;
  undefined1 uStack_296;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  FUtf8String FStack_278;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 auStack_218 [88];
  void *pvStack_1c0;
  undefined4 uStack_1b8;
  void *pvStack_1b0;
  ForAnyElementType FStack_198;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  this = (FUtf8String *)((longlong)param_1 + 0x20);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset(this,0);
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 4;
  *(undefined4 *)((longlong)param_1 + 0x34) = 5;
  *(undefined4 *)((longlong)param_1 + 0x38) = 5;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0xc08ea80000000000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  FHairMaterialConstraints::FHairMaterialConstraints
            ((FHairMaterialConstraints *)((longlong)param_1 + 0x78));
  FHairStrandsParameters::FHairStrandsParameters
            ((FHairStrandsParameters *)((longlong)param_1 + 0x250));
  FStack_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_278.Data.ArrayNum = 0;
  FStack_278.Data.ArrayMax = 0;
  uStack_290 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  FUtf8String::Reset(&FStack_278,0);
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 4;
  *(undefined8 *)((longlong)param_1 + 8) = uStack_290;
  uStack_268 = 0;
  uStack_298 = 0;
  uStack_296 = 4;
  uStack_264 = 5;
  uStack_260 = 5;
  uStack_25c = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = uStack_288;
  *(undefined8 *)((longlong)param_1 + 0x18) = uStack_280;
  if (this != &FStack_278) {
    pFVar1 = (this->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Data).AllocatorInstance.Data = FStack_278.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_1 + 0x28) = FStack_278.Data.ArrayNum;
    *(int *)((longlong)param_1 + 0x2c) = FStack_278.Data.ArrayMax;
    FStack_278.Data.ArrayNum = 0;
    FStack_278.Data.ArrayMax = 0;
    FStack_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  *(undefined4 *)((longlong)param_1 + 0x30) = uStack_268;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_264;
  *(undefined4 *)((longlong)param_1 + 0x38) = uStack_260;
  *(undefined1 *)((longlong)param_1 + 0x3c) = uStack_25c;
  if (FStack_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_278.Data.AllocatorInstance.Data);
  }
  uVar3 = __real_c08ea80000000000._4_4_;
  uVar2 = (undefined4)__real_c08ea80000000000;
  uStack_240 = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_23c;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  pFVar4 = FHairMaterialConstraints::FHairMaterialConstraints
                     ((FHairMaterialConstraints *)auStack_218);
  *(bool *)((longlong)param_1 + 0x78) = (pFVar4->BendConstraint).SolveBend;
  *(bool *)((longlong)param_1 + 0x79) = (pFVar4->BendConstraint).ProjectBend;
  *(float *)((longlong)param_1 + 0x7c) = (pFVar4->BendConstraint).BendDamping;
  *(float *)((longlong)param_1 + 0x80) = (pFVar4->BendConstraint).BendStiffness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x88),&(pFVar4->BendConstraint).BendScale);
  *(bool *)((longlong)param_1 + 0x110) = (pFVar4->StretchConstraint).SolveStretch;
  *(bool *)((longlong)param_1 + 0x111) = (pFVar4->StretchConstraint).ProjectStretch;
  *(float *)((longlong)param_1 + 0x114) = (pFVar4->StretchConstraint).StretchDamping;
  *(float *)((longlong)param_1 + 0x118) = (pFVar4->StretchConstraint).StretchStiffness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x120),
             &(pFVar4->StretchConstraint).StretchScale);
  *(bool *)((longlong)param_1 + 0x1a8) = (pFVar4->CollisionConstraint).SolveCollision;
  *(bool *)((longlong)param_1 + 0x1a9) = (pFVar4->CollisionConstraint).ProjectCollision;
  *(float *)((longlong)param_1 + 0x1ac) = (pFVar4->CollisionConstraint).StaticFriction;
  *(float *)((longlong)param_1 + 0x1b0) = (pFVar4->CollisionConstraint).KineticFriction;
  *(float *)((longlong)param_1 + 0x1b4) = (pFVar4->CollisionConstraint).StrandsViscosity;
  *(undefined8 *)((longlong)param_1 + 0x1b8) =
       *(undefined8 *)&(pFVar4->CollisionConstraint).GridDimension.field0_0x0;
  *(int *)((longlong)param_1 + 0x1c0) =
       (pFVar4->CollisionConstraint).GridDimension.field0_0x0._s_0.Z;
  *(float *)((longlong)param_1 + 0x1c4) = (pFVar4->CollisionConstraint).CollisionRadius;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x1c8),
             &(pFVar4->CollisionConstraint).RadiusScale);
  FHairMaterialConstraints::~FHairMaterialConstraints((FHairMaterialConstraints *)auStack_218);
  pFVar5 = FHairStrandsParameters::FHairStrandsParameters((FHairStrandsParameters *)auStack_218);
  ((FHairStrandsParameters *)((longlong)param_1 + 0x250))->StrandsSize = pFVar5->StrandsSize;
  *(float *)((longlong)param_1 + 0x254) = pFVar5->StrandsDensity;
  *(float *)((longlong)param_1 + 600) = pFVar5->StrandsSmoothing;
  *(float *)((longlong)param_1 + 0x25c) = pFVar5->StrandsThickness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x260),&pFVar5->ThicknessScale);
  if (FStack_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.Data);
  }
  auStack_218._16_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_1b0 != (void *)0x0) {
    FMemory::Free(pvStack_1b0);
  }
  uStack_1b8 = 0;
  if (pvStack_1c0 != (void *)0x0) {
    FMemory::Free(pvStack_1c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(auStack_218 + 0x18));
  return;
}

// Destruct<FHairGroupsPhysics> @ 14df90520

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupsPhysics>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x2d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2d0));
  }
  *(undefined ***)((longlong)param_1 + 0x260) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x2b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2b8));
  }
  *(undefined4 *)((longlong)param_1 + 0x2b0) = 0;
  if (*(void **)((longlong)param_1 + 0x2a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x2a8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x268));
  FHairMaterialConstraints::~FHairMaterialConstraints
            ((FHairMaterialConstraints *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  return;
}

// Copy<FHairGroupsPhysics> @ 14df90530

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupsPhysics>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x10),
                 (FSoftObjectPath *)((longlong)param_2 + 0x10));
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
      *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_2 + 0x70);
      FHairMaterialConstraints::operator=
                ((FHairMaterialConstraints *)((longlong)param_1 + 0x78),
                 (FHairMaterialConstraints *)((longlong)param_2 + 0x78));
      *(undefined1 *)((longlong)param_1 + 0x250) = *(undefined1 *)((longlong)param_2 + 0x250);
      *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)((longlong)param_2 + 0x254);
      *(undefined4 *)((longlong)param_1 + 600) = *(undefined4 *)((longlong)param_2 + 600);
      *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)((longlong)param_2 + 0x25c);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x260),
                 (FRuntimeFloatCurve *)((longlong)param_2 + 0x260));
      param_2 = (void *)((longlong)param_2 + 0x2e8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x2e8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupsCardsSourceDescription> @ 14df906c0

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupsCardsSourceDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FHairGroupsCardsSourceDescription> @ 14df90740

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FHairGroupsCardsSourceDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FHairGroupsCardsSourceDescription> @ 14df907c0

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupsCardsSourceDescription>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
    return;
  }
  return;
}

// Copy<FHairGroupsCardsSourceDescription> @ 14df90800

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupsCardsSourceDescription>
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
      puVar2[1] = puVar1[1];
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[3] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[3]);
      }
      puVar2[3] = puVar1[3];
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
      *(undefined1 *)((longlong)puVar2 + 0x21) = *(undefined1 *)((longlong)puVar1 + 0x21);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[5] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[5]);
      }
      puVar2[5] = puVar1[5];
      FHairGroupCardsTextures::operator=
                ((FHairGroupCardsTextures *)(puVar2 + 6),(FHairGroupCardsTextures *)(puVar1 + 6));
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
      *(undefined4 *)((longlong)puVar2 + 0x84) = *(undefined4 *)((longlong)puVar1 + 0x84);
      puVar2[0x11] = puVar1[0x11];
      ::FString::operator=((FString *)(puVar2 + 0x12),(FString *)(puVar1 + 0x12));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairStrandsParameters> @ 14df90c00

void __cdecl UE::CoreUObject::Private::Construct<FHairStrandsParameters>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined1 *)param_1 = 8;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3c23d70a;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// ConstructForTests<FHairStrandsParameters> @ 14df90c10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairStrandsParameters>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined1 *)param_1 = 8;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3c23d70a;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// Destruct<FHairStrandsParameters> @ 14df90c20

void __cdecl UE::CoreUObject::Private::Destruct<FHairStrandsParameters>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FHairStrandsParameters> @ 14df90cc0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairStrandsParameters>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xc);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x10),
                 (FRuntimeFloatCurve *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x98);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupCardsTextures> @ 14df90d80

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupCardsTextures>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x49) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FHairGroupCardsTextures> @ 14df90dd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupCardsTextures>(void *param_1)

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
  *(undefined1 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FHairGroupCardsTextures> @ 14df90e00

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupCardsTextures>(void *param_1)

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

// Copy<FHairGroupCardsTextures> @ 14df90e20

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupCardsTextures>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 8)) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        pFVar3 = ((ForAnyElementType *)((longlong)param_1 + lVar5 + 8))->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
                    (pFVar4->Data,(TObjectPtr<UTexture2D> *)pFVar3,iVar2);
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar5 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar5 + 0x18));
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x18);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar5 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar5 + 0x20));
      }
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x20);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar5 + 0x28) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar5 + 0x28));
      }
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x28);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar5 + 0x30) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar5 + 0x30));
      }
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x30);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar5 + 0x38) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar5 + 0x38));
      }
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x38);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar5 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar5 + 0x40));
      }
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_1 + lVar5 + 0x40);
      *(undefined1 *)((longlong)param_1 + 0x48) = *(undefined1 *)((longlong)param_1 + lVar5 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairMaterialConstraints> @ 14df911e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::Construct<FHairMaterialConstraints>(void *param_1)

{
  FHairBendConstraint *pFVar1;
  FHairStretchConstraint *pFVar2;
  FHairCollisionConstraint *pFVar3;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [56];
  undefined4 uStack_68;
  void *pvStack_60;
  undefined4 uStack_58;
  void *pvStack_50;
  ForAnyElementType FStack_48;
  TObjectPtr<UCurveFloat>_u_0 TStack_38;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FHairBendConstraint::FHairBendConstraint(param_1);
  FHairStretchConstraint::FHairStretchConstraint
            ((FHairStretchConstraint *)((longlong)param_1 + 0x98));
  FHairCollisionConstraint::FHairCollisionConstraint
            ((FHairCollisionConstraint *)((longlong)param_1 + 0x130));
  pFVar1 = FHairBendConstraint::FHairBendConstraint((FHairBendConstraint *)auStack_c8);
  *(bool *)param_1 = pFVar1->SolveBend;
  *(bool *)((longlong)param_1 + 1) = pFVar1->ProjectBend;
  *(float *)((longlong)param_1 + 4) = pFVar1->BendDamping;
  *(float *)((longlong)param_1 + 8) = pFVar1->BendStiffness;
  FRuntimeFloatCurve::operator=((FRuntimeFloatCurve *)((longlong)param_1 + 0x10),&pFVar1->BendScale)
  ;
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  auStack_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  uStack_68 = 0;
  if ((void *)auStack_a0._48_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_a0._48_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_b0);
  pFVar2 = FHairStretchConstraint::FHairStretchConstraint((FHairStretchConstraint *)auStack_c8);
  ((FHairStretchConstraint *)((longlong)param_1 + 0x98))->SolveStretch = pFVar2->SolveStretch;
  *(bool *)((longlong)param_1 + 0x99) = pFVar2->ProjectStretch;
  *(float *)((longlong)param_1 + 0x9c) = pFVar2->StretchDamping;
  *(float *)((longlong)param_1 + 0xa0) = pFVar2->StretchStiffness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0xa8),&pFVar2->StretchScale);
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  auStack_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  uStack_68 = 0;
  if ((void *)auStack_a0._48_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_a0._48_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_b0);
  pFVar3 = FHairCollisionConstraint::FHairCollisionConstraint
                     ((FHairCollisionConstraint *)auStack_c8);
  ((FHairCollisionConstraint *)((longlong)param_1 + 0x130))->SolveCollision = pFVar3->SolveCollision
  ;
  *(bool *)((longlong)param_1 + 0x131) = pFVar3->ProjectCollision;
  *(float *)((longlong)param_1 + 0x134) = pFVar3->StaticFriction;
  *(float *)((longlong)param_1 + 0x138) = pFVar3->KineticFriction;
  *(float *)((longlong)param_1 + 0x13c) = pFVar3->StrandsViscosity;
  *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)&(pFVar3->GridDimension).field0_0x0;
  *(int *)((longlong)param_1 + 0x148) = (pFVar3->GridDimension).field0_0x0._s_0.Z;
  *(float *)((longlong)param_1 + 0x14c) = pFVar3->CollisionRadius;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x150),&pFVar3->RadiusScale);
  if (TStack_38.DebugPtr != (UCurveFloat *)0x0) {
    FMemory::Free(TStack_38.DebugPtr);
  }
  auStack_b0._8_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  uStack_58 = 0;
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_a0);
  return;
}

// ConstructForTests<FHairMaterialConstraints> @ 14df911f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairMaterialConstraints>(void *param_1)

{
  FHairBendConstraint *pFVar1;
  FHairStretchConstraint *pFVar2;
  FHairCollisionConstraint *pFVar3;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [56];
  undefined4 uStack_68;
  void *pvStack_60;
  undefined4 uStack_58;
  void *pvStack_50;
  ForAnyElementType FStack_48;
  TObjectPtr<UCurveFloat>_u_0 TStack_38;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FHairBendConstraint::FHairBendConstraint(param_1);
  FHairStretchConstraint::FHairStretchConstraint
            ((FHairStretchConstraint *)((longlong)param_1 + 0x98));
  FHairCollisionConstraint::FHairCollisionConstraint
            ((FHairCollisionConstraint *)((longlong)param_1 + 0x130));
  pFVar1 = FHairBendConstraint::FHairBendConstraint((FHairBendConstraint *)auStack_c8);
  *(bool *)param_1 = pFVar1->SolveBend;
  *(bool *)((longlong)param_1 + 1) = pFVar1->ProjectBend;
  *(float *)((longlong)param_1 + 4) = pFVar1->BendDamping;
  *(float *)((longlong)param_1 + 8) = pFVar1->BendStiffness;
  FRuntimeFloatCurve::operator=((FRuntimeFloatCurve *)((longlong)param_1 + 0x10),&pFVar1->BendScale)
  ;
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  auStack_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  uStack_68 = 0;
  if ((void *)auStack_a0._48_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_a0._48_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_b0);
  pFVar2 = FHairStretchConstraint::FHairStretchConstraint((FHairStretchConstraint *)auStack_c8);
  ((FHairStretchConstraint *)((longlong)param_1 + 0x98))->SolveStretch = pFVar2->SolveStretch;
  *(bool *)((longlong)param_1 + 0x99) = pFVar2->ProjectStretch;
  *(float *)((longlong)param_1 + 0x9c) = pFVar2->StretchDamping;
  *(float *)((longlong)param_1 + 0xa0) = pFVar2->StretchStiffness;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0xa8),&pFVar2->StretchScale);
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  auStack_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  uStack_68 = 0;
  if ((void *)auStack_a0._48_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_a0._48_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_b0);
  pFVar3 = FHairCollisionConstraint::FHairCollisionConstraint
                     ((FHairCollisionConstraint *)auStack_c8);
  ((FHairCollisionConstraint *)((longlong)param_1 + 0x130))->SolveCollision = pFVar3->SolveCollision
  ;
  *(bool *)((longlong)param_1 + 0x131) = pFVar3->ProjectCollision;
  *(float *)((longlong)param_1 + 0x134) = pFVar3->StaticFriction;
  *(float *)((longlong)param_1 + 0x138) = pFVar3->KineticFriction;
  *(float *)((longlong)param_1 + 0x13c) = pFVar3->StrandsViscosity;
  *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)&(pFVar3->GridDimension).field0_0x0;
  *(int *)((longlong)param_1 + 0x148) = (pFVar3->GridDimension).field0_0x0._s_0.Z;
  *(float *)((longlong)param_1 + 0x14c) = pFVar3->CollisionRadius;
  FRuntimeFloatCurve::operator=
            ((FRuntimeFloatCurve *)((longlong)param_1 + 0x150),&pFVar3->RadiusScale);
  if (TStack_38.DebugPtr != (UCurveFloat *)0x0) {
    FMemory::Free(TStack_38.DebugPtr);
  }
  auStack_b0._8_8_ = &___7FIndexedCurve__6B_;
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  uStack_58 = 0;
  if (pvStack_60 != (void *)0x0) {
    FMemory::Free(pvStack_60);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_a0);
  return;
}

// Destruct<FHairMaterialConstraints> @ 14df91200

void __cdecl UE::CoreUObject::Private::Destruct<FHairMaterialConstraints>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x1c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c0));
  }
  *(undefined ***)((longlong)param_1 + 0x150) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x1a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a8));
  }
  *(undefined4 *)((longlong)param_1 + 0x1a0) = 0;
  if (*(void **)((longlong)param_1 + 0x198) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x198));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x158));
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  *(undefined ***)((longlong)param_1 + 0xa8) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xb0));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FHairMaterialConstraints> @ 14df91250

bool __cdecl
UE::CoreUObject::Private::Copy<FHairMaterialConstraints>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x10),
                 (FRuntimeFloatCurve *)((longlong)param_2 + 0x10));
      *(undefined1 *)((longlong)param_1 + 0x98) = *(undefined1 *)((longlong)param_2 + 0x98);
      *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
      *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
      *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_2 + 0xa0);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0xa8),
                 (FRuntimeFloatCurve *)((longlong)param_2 + 0xa8));
      *(undefined1 *)((longlong)param_1 + 0x130) = *(undefined1 *)((longlong)param_2 + 0x130);
      *(undefined1 *)((longlong)param_1 + 0x131) = *(undefined1 *)((longlong)param_2 + 0x131);
      *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
      *(undefined4 *)((longlong)param_1 + 0x138) = *(undefined4 *)((longlong)param_2 + 0x138);
      *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
      *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)((longlong)param_2 + 0x140);
      *(undefined4 *)((longlong)param_1 + 0x148) = *(undefined4 *)((longlong)param_2 + 0x148);
      *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x150),
                 (FRuntimeFloatCurve *)((longlong)param_2 + 0x150));
      param_2 = (void *)((longlong)param_2 + 0x1d8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x1d8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupCardsInfo> @ 14df913b0

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupCardsInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FHairGroupCardsInfo> @ 14df91400

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupCardsInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FHairGroupCardsInfo> @ 14df91410

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupCardsInfo>(void *param_1)

{
  return;
}

// Copy<FHairGroupCardsInfo> @ 14df91430

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupCardsInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairCollisionConstraint> @ 14df917c0

void __cdecl UE::CoreUObject::Private::Construct<FHairCollisionConstraint>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  *(undefined2 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x1e;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// ConstructForTests<FHairCollisionConstraint> @ 14df917d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairCollisionConstraint>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  *(undefined2 *)param_1 = 0x101;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x1e;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x20));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// Destruct<FHairCollisionConstraint> @ 14df917e0

void __cdecl UE::CoreUObject::Private::Destruct<FHairCollisionConstraint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  return;
}

// Copy<FHairCollisionConstraint> @ 14df91880

bool __cdecl
UE::CoreUObject::Private::Copy<FHairCollisionConstraint>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x20),
                 (FRuntimeFloatCurve *)((longlong)param_2 + 0x20));
      param_2 = (void *)((longlong)param_2 + 0xa8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0xa8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupInfoWithVisibility> @ 14df91c30

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupInfoWithVisibility>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// ConstructForTests<FHairGroupInfoWithVisibility> @ 14df91cb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FHairGroupInfoWithVisibility>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Destruct<FHairGroupInfoWithVisibility> @ 14df91ce0

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupInfoWithVisibility>(void *param_1)

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

// Construct<FHairGroupDesc> @ 14df91d00

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  return;
}

// ConstructForTests<FHairGroupDesc> @ 14df91d50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupDesc>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  return;
}

// Destruct<FHairGroupDesc> @ 14df91db0

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupDesc>(void *param_1)

{
  return;
}

// Copy<FHairGroupInfoWithVisibility> @ 14df91e00

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupInfoWithVisibility>
          (void *param_1,void *param_2,int param_3)

{
  FHairGroupInfo *pFVar1;
  FHairGroupInfo *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FHairGroupInfo *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FHairGroupInfo::operator=(this,pFVar1);
      *(char *)&this[1].GroupIndex = (char)pFVar1[1].GroupIndex;
      param_3 = param_3 + -1;
      this = (FHairGroupInfo *)&this[1].GroupName;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FHairGroupDesc> @ 14df91e90

bool __cdecl UE::CoreUObject::Private::Copy<FHairGroupDesc>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairStretchConstraint> @ 14df92220

void __cdecl UE::CoreUObject::Private::Construct<FHairStretchConstraint>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined2 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ba3d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// ConstructForTests<FHairStretchConstraint> @ 14df92230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairStretchConstraint>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined2 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ba3d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// Destruct<FHairStretchConstraint> @ 14df92240

void __cdecl UE::CoreUObject::Private::Destruct<FHairStretchConstraint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FHairStretchConstraint> @ 14df922c0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairStretchConstraint>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x10),
                 (FRuntimeFloatCurve *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x98);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupsMaterial> @ 14df924e0

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupsMaterial>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FHairGroupsMaterial> @ 14df924f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupsMaterial>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FHairGroupsMaterial> @ 14df92500

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupsMaterial>(void *param_1)

{
  return;
}

// Construct<FGroomCacheImportSettings> @ 14df92510

void __cdecl UE::CoreUObject::Private::Construct<FGroomCacheImportSettings>(void *param_1)

{
  undefined8 uVar1;
  
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
  *(undefined2 *)param_1 = 0x301;
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FGroomCacheImportSettings> @ 14df92620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomCacheImportSettings>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined2 *)param_1 = 0x301;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  return;
}

// Destruct<FGroomCacheImportSettings> @ 14df92680

void __cdecl UE::CoreUObject::Private::Destruct<FGroomCacheImportSettings>(void *param_1)

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

// Copy<FHairGroupsMaterial> @ 14df926e0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupsMaterial>(void *param_1,void *param_2,int param_3)

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

// Copy<FGroomCacheImportSettings> @ 14df92770

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomCacheImportSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(longlong)param_2 - (longlong)param_1];
      puVar3[1] = *(undefined1 *)((longlong)pvVar2 + 1);
      *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((longlong)pvVar2 + 4);
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)((longlong)pvVar2 + 8);
      puVar3[0xc] = *(undefined1 *)((longlong)pvVar2 + 0xc);
      puVar3[0xd] = *(undefined1 *)((longlong)pvVar2 + 0xd);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(puVar3 + 0x10),(FSoftObjectPath *)((longlong)pvVar2 + 0x10));
      puVar3[0x30] = *(undefined1 *)((longlong)pvVar2 + 0x30);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x40);
      *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)((longlong)pvVar2 + 0x38);
      *(undefined8 *)(puVar3 + 0x40) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x50);
      *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)((longlong)pvVar2 + 0x48);
      *(undefined8 *)(puVar3 + 0x50) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x60);
      *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)((longlong)pvVar2 + 0x58);
      *(undefined8 *)(puVar3 + 0x60) = uVar1;
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x68);
      puVar3 = puVar3 + 0x68;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairBendConstraint> @ 14df92a50

void __cdecl UE::CoreUObject::Private::Construct<FHairBendConstraint>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined2 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ba3d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// Construct<FGoomBindingGroupInfo> @ 14df92a60

void __cdecl UE::CoreUObject::Private::Construct<FGoomBindingGroupInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FHairBendConstraint> @ 14df92a70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairBendConstraint>(void *param_1)

{
  FKeyHandle FVar1;
  FRichCurve *pFVar2;
  FRichCurve *pFVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffd8;
  FKeyHandle FVar4;
  
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined2 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3ba3d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3c23d70a;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar4.Index = in_stack_ffffffffffffffd8 & 0xffffff00;
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,0.0,(bool)in_R9B,FVar4);
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var,FVar1.Index),RCIM_Cubic);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  pFVar3 = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1 = FRichCurve::AddKey(pFVar3,in_XMM1_Da,__real_3f800000,(bool)in_R9B,FVar4.Index & 0xffffff00
                            );
  FRichCurve::SetKeyInterpMode
            (pFVar2,(FKeyHandle)*(uint *)CONCAT44(extraout_var_00,FVar1.Index),RCIM_Cubic);
  return;
}

// ConstructForTests<FGoomBindingGroupInfo> @ 14df92a80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGoomBindingGroupInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FHairBendConstraint> @ 14df92a90

void __cdecl UE::CoreUObject::Private::Destruct<FHairBendConstraint>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  return;
}

// Destruct<FGoomBindingGroupInfo> @ 14df92af0

void __cdecl UE::CoreUObject::Private::Destruct<FGoomBindingGroupInfo>(void *param_1)

{
  return;
}

// Copy<FHairBendConstraint> @ 14df92b00

bool __cdecl
UE::CoreUObject::Private::Copy<FHairBendConstraint>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)((longlong)param_1 + 0x10),
                 (FRuntimeFloatCurve *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x98);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FGoomBindingGroupInfo> @ 14df92b80

bool __cdecl
UE::CoreUObject::Private::Copy<FGoomBindingGroupInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairGroupInfo> @ 14df92bb0

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FHairGroupInfo> @ 14df92be0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FHairGroupInfo> @ 14df92c10

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupInfo>(void *param_1)

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

// Copy<FHairGroupInfo> @ 14df92c30

bool __cdecl UE::CoreUObject::Private::Copy<FHairGroupInfo>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + 0x28);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar5 + 4);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar5 + 8);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x20);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x24);
      if (pFVar3 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x30);
        piVar1 = (int *)((longlong)param_1 + 0x34);
        _Src = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x30) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar2,*piVar1,pFVar3,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairExternalForces> @ 14df92f40

void __cdecl UE::CoreUObject::Private::Construct<FHairExternalForces>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xc08ea80000000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FHairExternalForces> @ 14df92f80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairExternalForces>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xc08ea80000000000;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FHairExternalForces> @ 14df92fc0

void __cdecl UE::CoreUObject::Private::Destruct<FHairExternalForces>(void *param_1)

{
  return;
}

// Copy<FHairExternalForces> @ 14df92fd0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairExternalForces>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupLODInfo> @ 14df93260

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupLODInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FHairGroupLODInfo> @ 14df93270

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupLODInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FHairGroupLODInfo> @ 14df93280

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupLODInfo>(void *param_1)

{
  return;
}

// Copy<FHairGroupLODInfo> @ 14df932d0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupLODInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairSolverSettings> @ 14df93380

void __cdecl UE::CoreUObject::Private::Construct<FHairSolverSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 4;
  *(undefined4 *)((longlong)param_1 + 0x34) = 5;
  *(undefined4 *)((longlong)param_1 + 0x38) = 5;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// ConstructForTests<FHairSolverSettings> @ 14df93420

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairSolverSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 4;
  *(undefined4 *)((longlong)param_1 + 0x34) = 5;
  *(undefined4 *)((longlong)param_1 + 0x38) = 5;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// Destruct<FHairSolverSettings> @ 14df93480

void __cdecl UE::CoreUObject::Private::Destruct<FHairSolverSettings>(void *param_1)

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

// Copy<FHairSolverSettings> @ 14df934a0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairSolverSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_1 + lVar1 + 2);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x10),
                 (FSoftObjectPath *)((longlong)param_1 + lVar1 + 0x10));
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x34);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x38);
      *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x3c);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupsRendering> @ 14df93620

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupsRendering>(void *param_1)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  uVar1 = __real_3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  uStack_14 = uStack_14 & 0xffffff00;
  *(ulonglong *)((longlong)param_1 + 0x10) = CONCAT44(uStack_14,0x3c23d70a);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f8000003f800000;
  *(ulonglong *)((longlong)param_1 + 0x20) = CONCAT44(uVar1,uVar1);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800100;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// ConstructForTests<FHairGroupsRendering> @ 14df93690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupsRendering>(void *param_1)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  uVar1 = __real_3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  uStack_14 = uStack_14 & 0xffffff00;
  *(ulonglong *)((longlong)param_1 + 0x10) = CONCAT44(uStack_14,0x3c23d70a);
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f8000003f800000;
  *(ulonglong *)((longlong)param_1 + 0x20) = CONCAT44(uVar1,uVar1);
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800100;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// Destruct<FHairGroupsRendering> @ 14df93700

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupsRendering>(void *param_1)

{
  return;
}

// Copy<FHairGroupsRendering> @ 14df93710

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupsRendering>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar3 + 8);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x20);
      *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x28);
      *(undefined2 *)((longlong)param_1 + 0x2c) = *(undefined2 *)((longlong)param_1 + lVar3 + 0x2c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairGroupsMeshesSourceDescription> @ 14df93870

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupsMeshesSourceDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  return;
}

// ConstructForTests<FHairGroupsMeshesSourceDescription> @ 14df938d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FHairGroupsMeshesSourceDescription>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  return;
}

// Destruct<FHairGroupsMeshesSourceDescription> @ 14df93930

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupsMeshesSourceDescription>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FHairGroupsMeshesSourceDescription> @ 14df93970

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupsMeshesSourceDescription>
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
      puVar2[1] = puVar1[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      FHairGroupCardsTextures::operator=
                ((FHairGroupCardsTextures *)(puVar2 + 3),(FHairGroupCardsTextures *)(puVar1 + 3));
      *(undefined4 *)(puVar2 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
      *(undefined4 *)((longlong)puVar2 + 0x6c) = *(undefined4 *)((longlong)puVar1 + 0x6c);
      ::FString::operator=((FString *)(puVar2 + 0xe),(FString *)(puVar1 + 0xe));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairAdvancedRenderingSettings> @ 14df93bc0

void __cdecl UE::CoreUObject::Private::Construct<FHairAdvancedRenderingSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FHairAdvancedRenderingSettings> @ 14df93bd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FHairAdvancedRenderingSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FHairAdvancedRenderingSettings> @ 14df93be0

void __cdecl UE::CoreUObject::Private::Destruct<FHairAdvancedRenderingSettings>(void *param_1)

{
  return;
}

// Copy<FHairAdvancedRenderingSettings> @ 14df93bf0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairAdvancedRenderingSettings>
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

// Construct<FHairGroupsLOD> @ 14df93ca0

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupsLOD>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FHairGroupsLOD> @ 14df93cc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupsLOD>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FHairGroupsLOD> @ 14df93ce0

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupsLOD>(void *param_1)

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

// Copy<FHairGroupsLOD> @ 14df93d00

bool __cdecl UE::CoreUObject::Private::Copy<FHairGroupsLOD>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 8);
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      if (pFVar4 != pFVar3) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = pFVar3->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar2 * 0x1c);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FHairShadowSettings> @ 14df945e0

void __cdecl UE::CoreUObject::Private::Construct<FHairShadowSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 8) = 0x100;
  return;
}

// ConstructForTests<FHairShadowSettings> @ 14df94600

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairShadowSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 8) = 0x100;
  return;
}

// Destruct<FHairShadowSettings> @ 14df94620

void __cdecl UE::CoreUObject::Private::Destruct<FHairShadowSettings>(void *param_1)

{
  return;
}

// Copy<FHairShadowSettings> @ 14df94670

bool __cdecl
UE::CoreUObject::Private::Copy<FHairShadowSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairGroupsInterpolation> @ 14df946f0

void __cdecl UE::CoreUObject::Private::Construct<FHairGroupsInterpolation>(void *param_1)

{
  undefined2 uStack_26;
  
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 4;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(ulonglong *)((longlong)param_1 + 8) = CONCAT44(0x3dcccccd,(uint)uStack_26 << 0x10);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x40000000a;
  *(undefined4 *)((longlong)param_1 + 0x18) = 2;
  return;
}

// ConstructForTests<FHairGroupsInterpolation> @ 14df948a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGroupsInterpolation>(void *param_1)

{
  undefined2 uStack_26;
  
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 10;
  *(undefined4 *)((longlong)param_1 + 0x24) = 4;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(ulonglong *)((longlong)param_1 + 8) = CONCAT44(0x3dcccccd,(uint)uStack_26 << 0x10);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x40000000a;
  *(undefined4 *)((longlong)param_1 + 0x18) = 2;
  return;
}

// Destruct<FHairGroupsInterpolation> @ 14df94ad0

void __cdecl UE::CoreUObject::Private::Destruct<FHairGroupsInterpolation>(void *param_1)

{
  return;
}

// Copy<FHairGroupsInterpolation> @ 14df94ba0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGroupsInterpolation>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairGeometrySettings> @ 14df94df0

void __cdecl UE::CoreUObject::Private::Construct<FHairGeometrySettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// ConstructForTests<FHairGeometrySettings> @ 14df94e10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairGeometrySettings>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)param_1 = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// Destruct<FHairGeometrySettings> @ 14df94e30

void __cdecl UE::CoreUObject::Private::Destruct<FHairGeometrySettings>(void *param_1)

{
  return;
}

// Copy<FHairGeometrySettings> @ 14df94ed0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairGeometrySettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairDeformationSettings> @ 14df94fc0

void __cdecl UE::CoreUObject::Private::Construct<FHairDeformationSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 10;
  *(undefined4 *)((longlong)param_1 + 8) = 4;
  return;
}

// ConstructForTests<FHairDeformationSettings> @ 14df94fe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairDeformationSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 10;
  *(undefined4 *)((longlong)param_1 + 8) = 4;
  return;
}

// Destruct<FHairDeformationSettings> @ 14df95000

void __cdecl UE::CoreUObject::Private::Destruct<FHairDeformationSettings>(void *param_1)

{
  return;
}

// Copy<FHairDeformationSettings> @ 14df95090

bool __cdecl
UE::CoreUObject::Private::Copy<FHairDeformationSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FHairSimulationSettings> @ 14df955a0

void __cdecl UE::CoreUObject::Private::Construct<FHairSimulationSettings>(void *param_1)

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
  FHairSimulationSettings::FHairSimulationSettings(param_1);
  return;
}

// ConstructForTests<FHairSimulationSettings> @ 14df95620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHairSimulationSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  ::FString::FString((FString *)((longlong)param_1 + 0x18),"root");
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x42480000;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0xc08ea80000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3dcccccd;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x3a83126f;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3a83126f;
  return;
}

// Destruct<FHairSimulationSettings> @ 14df95630

void __cdecl UE::CoreUObject::Private::Destruct<FHairSimulationSettings>(void *param_1)

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

// Copy<FHairSimulationSettings> @ 14df956d0

bool __cdecl
UE::CoreUObject::Private::Copy<FHairSimulationSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    pvVar3 = param_2;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      puVar2[8] = *(undefined1 *)((longlong)pvVar3 + 8);
      puVar2[9] = *(undefined1 *)((longlong)pvVar3 + 9);
      puVar2[10] = *(undefined1 *)((longlong)pvVar3 + 10);
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)((longlong)pvVar3 + 0xc);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)((longlong)pvVar3 + 0x10);
      ::FString::operator=((FString *)(puVar2 + 0x18),(FString *)((longlong)pvVar3 + 0x18));
      *(undefined4 *)(puVar2 + 0x28) = *(undefined4 *)((longlong)pvVar3 + 0x28);
      puVar2[0x30] = *(undefined1 *)((longlong)pvVar3 + 0x30);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x40);
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)((longlong)pvVar3 + 0x38);
      *(undefined8 *)(puVar2 + 0x40) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x50);
      *(undefined8 *)(puVar2 + 0x48) = *(undefined8 *)((longlong)pvVar3 + 0x48);
      *(undefined8 *)(puVar2 + 0x50) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x60);
      *(undefined8 *)(puVar2 + 0x58) = *(undefined8 *)((longlong)pvVar3 + 0x58);
      *(undefined8 *)(puVar2 + 0x60) = uVar1;
      *(undefined8 *)(puVar2 + 0x68) = *(undefined8 *)((longlong)pvVar3 + 0x68);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x78);
      *(undefined8 *)(puVar2 + 0x70) = *(undefined8 *)((longlong)pvVar3 + 0x70);
      *(undefined8 *)(puVar2 + 0x78) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x88);
      *(undefined8 *)(puVar2 + 0x80) = *(undefined8 *)((longlong)pvVar3 + 0x80);
      *(undefined8 *)(puVar2 + 0x88) = uVar1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x90;
      pvVar3 = (void *)((longlong)pvVar3 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// IsRBFLocalSpaceEnabled @ 14dfcff50

bool __cdecl UE::Groom::IsRBFLocalSpaceEnabled(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarHairStrandsBFLocalSpace.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return 0 < pTVar1->ShadowedValue[1];
    }
  }
  return 0 < pTVar1->ShadowedValue[0];
}

// Construct<FGroomCacheInfo> @ 14dfe4500

void __cdecl UE::CoreUObject::Private::Construct<FGroomCacheInfo>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x80000000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// ConstructForTests<FGroomCacheInfo> @ 14dfe4550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomCacheInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x7f7fffff;
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x80000000;
  return;
}

// Destruct<FGroomCacheInfo> @ 14dfe4590

void __cdecl UE::CoreUObject::Private::Destruct<FGroomCacheInfo>(void *param_1)

{
  return;
}

// Copy<FGroomCacheInfo> @ 14dfe45a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomCacheInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FGroomAnimationInfo> @ 14dfe46a0

void __cdecl UE::CoreUObject::Private::Construct<FGroomAnimationInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x7f7fffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x80000000;
  return;
}

// ConstructForTests<FGroomAnimationInfo> @ 14dfe46d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomAnimationInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x7f7fffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x80000000;
  return;
}

// Destruct<FGroomAnimationInfo> @ 14dfe4700

void __cdecl UE::CoreUObject::Private::Destruct<FGroomAnimationInfo>(void *param_1)

{
  return;
}

// Copy<FGroomAnimationInfo> @ 14dfe47d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomAnimationInfo>(void *param_1,void *param_2,int param_3)

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

// DereferenceIfNecessary<FGroomBindingCompilingManager,FGroomBindingCompilingManager_*_&> @ 14dfe8c00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FGroomBindingCompilingManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FGroomBindingCompilingManager,FGroomBindingCompilingManager_*_&>
          (FGroomBindingCompilingManager **param_1)

{
  return *param_1;
}

// BuildGroomCache @ 14dffea20

void __cdecl
UE::Groom::BuildGroomCache
          (FGroomCacheProcessor *param_1,FGroomAnimationInfo *param_2,UGroomCache *param_3)

{
  EGroomCacheAttributes *pEVar1;
  TArray<FGroomCacheChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  EGroomCacheType EVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  EGroomCacheAttributes EVar10;
  undefined3 uVar11;
  
  if (param_3 != (UGroomCache *)0x0) {
    pTVar2 = &param_3->Chunks;
    if ((FGroomCacheProcessor *)pTVar2 != param_1) {
      DestructItems<FGroomCacheChunk,int>
                ((FGroomCacheChunk *)(pTVar2->AllocatorInstance).Data,(param_3->Chunks).ArrayNum);
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (param_1->Chunks).AllocatorInstance.Data;
      (param_1->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_3->Chunks).ArrayNum = (param_1->Chunks).ArrayNum;
      (param_3->Chunks).ArrayMax = (param_1->Chunks).ArrayMax;
      (param_1->Chunks).ArrayNum = 0;
      (param_1->Chunks).ArrayMax = 0;
    }
    EVar3 = (param_3->GroomCacheInfo).Type;
    fVar5 = param_2->SecondsPerFrame;
    fVar6 = param_2->Duration;
    fVar7 = param_2->StartTime;
    (param_3->GroomCacheInfo).AnimationInfo.NumFrames = param_2->NumFrames;
    (param_3->GroomCacheInfo).AnimationInfo.SecondsPerFrame = fVar5;
    (param_3->GroomCacheInfo).AnimationInfo.Duration = fVar6;
    (param_3->GroomCacheInfo).AnimationInfo.StartTime = fVar7;
    iVar8 = param_2->StartFrame;
    iVar9 = param_2->EndFrame;
    EVar10 = param_2->Attributes;
    uVar11 = *(undefined3 *)&param_2->field_0x1d;
    (param_3->GroomCacheInfo).AnimationInfo.EndTime = param_2->EndTime;
    (param_3->GroomCacheInfo).AnimationInfo.StartFrame = iVar8;
    (param_3->GroomCacheInfo).AnimationInfo.EndFrame = iVar9;
    (param_3->GroomCacheInfo).AnimationInfo.Attributes = EVar10;
    *(undefined3 *)&(param_3->GroomCacheInfo).AnimationInfo.field_0x1d = uVar11;
    if (EVar3 == Guides) {
      pEVar1 = &(param_3->GroomCacheInfo).AnimationInfo.Attributes;
      *pEVar1 = *pEVar1 & Position;
    }
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_3);
  }
  return;
}

// BuildGroupsData @ 14dffead0

bool __cdecl
UE::Groom::BuildGroupsData
          (FHairDescription *param_1,
          TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FHairGroupInfoWithVisibility,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FHairGroupsInterpolation,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  FHairDescriptionGroups local_68;
  
  local_68.HairGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.HairGroups.ArrayNum = 0;
  local_68.HairGroups.ArrayMax = 0;
  bVar7 = FGroomBuilder::BuildHairDescriptionGroups(param_1,&local_68,false);
  if (bVar7) {
    iVar6 = local_68.HairGroups.ArrayNum;
    if (((local_68.HairGroups.ArrayNum == param_2->ArrayNum) &&
        (local_68.HairGroups.ArrayNum == param_3->ArrayNum)) &&
       (local_68.HairGroups.ArrayNum == param_4->ArrayNum)) {
      iVar11 = param_5->ArrayNum;
      if (iVar11 < local_68.HairGroups.ArrayNum) {
        iVar11 = local_68.HairGroups.ArrayNum - iVar11;
        iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (800,8,iVar11,&param_5->AllocatorInstance,&param_5->ArrayNum,
                           &param_5->ArrayMax);
        DefaultConstructItems<FGroomCacheInputData,int>
                  ((param_5->AllocatorInstance).Data + (longlong)iVar9 * 800,iVar11);
      }
      else {
        if (local_68.HairGroups.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum(local_68.HairGroups._8_8_ & 0xffffffff);
        }
        if (local_68.HairGroups.ArrayNum < iVar11) {
          uVar14 = iVar11 - local_68.HairGroups.ArrayNum;
          if (((int)(uVar14 | local_68.HairGroups.ArrayNum) < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          if (uVar14 != 0) {
            TArray<FGroomCacheInputData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (param_5,iVar6,uVar14);
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (800,8,&param_5->AllocatorInstance,param_5->ArrayNum,&param_5->ArrayMax);
          }
        }
      }
      uVar14 = 0;
      if (iVar6 != 0) {
        do {
          uVar12 = ~uVar14 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar14 < param_5->ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar1 = (param_5->AllocatorInstance).Data;
          lVar13 = (longlong)(int)uVar14;
          uVar10 = 0;
          if ((int)uVar14 < param_5->ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar2 = (param_5->AllocatorInstance).Data;
          uVar10 = 0;
          if ((int)uVar14 < param_3->ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar3 = (param_3->AllocatorInstance).Data;
          uVar10 = 0;
          if ((int)uVar14 < param_4->ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          pFVar4 = (param_4->AllocatorInstance).Data;
          uVar10 = 0;
          if ((int)uVar14 < local_68.HairGroups.ArrayNum) {
            uVar10 = uVar12;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          FGroomBuilder::BuildData
                    ((FHairDescriptionGroup *)
                     (local_68.HairGroups.AllocatorInstance.Data + lVar13 * 0x318),
                     (FHairGroupsInterpolation *)(pFVar4 + lVar13 * 0x28),
                     (FHairGroupInfo *)(pFVar3 + lVar13 * 0x40),
                     (FHairStrandsDatas *)(pFVar2 + lVar13 * 800),
                     (FHairStrandsDatas *)(pFVar1 + lVar13 * 800 + 400),true,true,false);
          uVar14 = uVar14 + 1;
        } while (uVar14 < (uint)iVar6);
      }
      bVar7 = true;
      goto LAB_14dffee36;
    }
  }
  bVar7 = false;
LAB_14dffee36:
  DestructItems<FHairDescriptionGroup,int>
            ((FHairDescriptionGroup *)local_68.HairGroups.AllocatorInstance.Data,
             local_68.HairGroups.ArrayNum);
  if ((FHairDescriptionGroup *)local_68.HairGroups.AllocatorInstance.Data !=
      (FHairDescriptionGroup *)0x0) {
    FMemory::Free(local_68.HairGroups.AllocatorInstance.Data);
  }
  return bVar7;
}

// Construct<FFollicleMaskOptions> @ 14e032020

void __cdecl UE::CoreUObject::Private::Construct<FFollicleMaskOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFollicleMaskOptions> @ 14e032030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFollicleMaskOptions>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FFollicleMaskOptions> @ 14e032050

void __cdecl UE::CoreUObject::Private::Destruct<FFollicleMaskOptions>(void *param_1)

{
  return;
}

// Copy<FFollicleMaskOptions> @ 14e032060

bool __cdecl
UE::CoreUObject::Private::Copy<FFollicleMaskOptions>(void *param_1,void *param_2,int param_3)

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
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGroomHairGroupPreview> @ 14e0320f0

void __cdecl UE::CoreUObject::Private::Construct<FGroomHairGroupPreview>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  FHairGroupsInterpolation::FHairGroupsInterpolation
            ((FHairGroupsInterpolation *)((longlong)param_1 + 0x24));
  return;
}

// ConstructForTests<FGroomHairGroupPreview> @ 14e032130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomHairGroupPreview>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  FHairGroupsInterpolation::FHairGroupsInterpolation
            ((FHairGroupsInterpolation *)((longlong)param_1 + 0x24));
  return;
}

// Destruct<FGroomHairGroupPreview> @ 14e0321a0

void __cdecl UE::CoreUObject::Private::Destruct<FGroomHairGroupPreview>(void *param_1)

{
  return;
}

// Copy<FGroomHairGroupPreview> @ 14e032260

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomHairGroupPreview>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar11 + 0x48 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x48) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x4c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGroomConversionSettings> @ 14e06da20

void __cdecl UE::CoreUObject::Private::Construct<FGroomConversionSettings>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FGroomConversionSettings> @ 14e06da60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomConversionSettings>(void *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  return;
}

// Destruct<FGroomConversionSettings> @ 14e06daa0

void __cdecl UE::CoreUObject::Private::Destruct<FGroomConversionSettings>(void *param_1)

{
  return;
}

// Copy<FGroomConversionSettings> @ 14e06dab0

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomConversionSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      param_1 = (void *)((longlong)param_1 + 0x30);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGroomBuildSettings> @ 14e06e380

void __cdecl UE::CoreUObject::Private::Construct<FGroomBuildSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 8) = 2;
  return;
}

// ConstructForTests<FGroomBuildSettings> @ 14e06e3a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGroomBuildSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 8) = 2;
  return;
}

// Destruct<FGroomBuildSettings> @ 14e06e3c0

void __cdecl UE::CoreUObject::Private::Destruct<FGroomBuildSettings>(void *param_1)

{
  return;
}

// Copy<FGroomBuildSettings> @ 14e06e3d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGroomBuildSettings>(void *param_1,void *param_2,int param_3)

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

// Construct<FMovieSceneGroomCacheSectionTemplate> @ 14e0cabf0

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneGroomCacheSectionTemplate>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) & 0xfffffffe;
  *(undefined ***)param_1 = &___7FMovieSceneGroomCacheSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  return;
}

// ConstructForTests<FMovieSceneGroomCacheSectionTemplate> @ 14e0cac30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGroomCacheSectionTemplate>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x38) = *(uint *)((longlong)param_1 + 0x38) & 0xfffffffe;
  *(undefined ***)param_1 = &___7FMovieSceneGroomCacheSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  return;
}

// Destruct<FMovieSceneGroomCacheSectionTemplate> @ 14e0cac70

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneGroomCacheSectionTemplate>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneGroomCacheSectionTemplate> @ 14e0cac90

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGroomCacheSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    FMovieSceneGroomCacheSectionTemplateParameters::operator=
              ((FMovieSceneGroomCacheSectionTemplateParameters *)((longlong)pvVar1 + 0x20),
               (FMovieSceneGroomCacheSectionTemplateParameters *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x48);
  }
  return true;
}

// Construct<FMovieSceneGroomCacheSectionTemplateParameters> @ 14e0caec0

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneGroomCacheSectionTemplateParameters>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// ConstructForTests<FMovieSceneGroomCacheSectionTemplateParameters> @ 14e0caef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGroomCacheSectionTemplateParameters>
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// Destruct<FMovieSceneGroomCacheSectionTemplateParameters> @ 14e0caf20

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneGroomCacheSectionTemplateParameters>(void *param_1)

{
  return;
}

// Copy<FMovieSceneGroomCacheSectionTemplateParameters> @ 14e0caf30

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGroomCacheSectionTemplateParameters>
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
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(uint *)(puVar2 + 3) =
           *(uint *)(puVar2 + 3) ^ (*(uint *)(puVar2 + 3) ^ *(uint *)(puVar1 + 3)) & 1;
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x24);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneGroomCacheParams> @ 14e0cb380

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneGroomCacheParams>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// ConstructForTests<FMovieSceneGroomCacheParams> @ 14e0cb3a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneGroomCacheParams>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// Destruct<FMovieSceneGroomCacheParams> @ 14e0cb3c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneGroomCacheParams>(void *param_1)

{
  return;
}

// Copy<FMovieSceneGroomCacheParams> @ 14e0cb3d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGroomCacheParams>(void *param_1,void *param_2,int param_3)

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
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(uint *)(puVar2 + 3) =
           *(uint *)(puVar2 + 3) ^ (*(uint *)(puVar2 + 3) ^ *(uint *)(puVar1 + 3)) & 1;
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_&> @ 150591940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int_&>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,uint *param_3)

{
  FLogField local_28;
  
  local_28.WriteValue = FLogField::Write<unsigned_int>;
  local_28.Name = (char *)0x0;
  local_28.Value = param_3;
  LogWithFieldArray(param_1,param_2,&local_28,1);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString> @ 150591980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FString *param_4)

{
  FLogField local_38;
  undefined8 local_20;
  FString *local_18;
  code *local_10;
  
  local_38.Name = (char *)0x0;
  local_38.WriteValue = FLogField::Write<FString>;
  local_20 = 0;
  local_10 = FLogField::Write<FString>;
  local_38.Value = param_3;
  local_18 = param_4;
  LogWithFieldArray(param_1,param_2,&local_38,2);
  return;
}

