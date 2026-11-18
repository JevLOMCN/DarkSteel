// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 164

// Construct<FPhysicsControlNamedControlParameters> @ 14d9ad8e0

void __cdecl
UE::CoreUObject::Private::Construct<FPhysicsControlNamedControlParameters>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 0x1f;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0xffe5;
  return;
}

// ConstructForTests<FPhysicsControlNamedControlParameters> @ 14d9ad940

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNamedControlParameters>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 0x1f;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0xffe5;
  return;
}

// Destruct<FPhysicsControlNamedControlParameters> @ 14d9ad9a0

void __cdecl
UE::CoreUObject::Private::Destruct<FPhysicsControlNamedControlParameters>(void *param_1)

{
  return;
}

// Copy<FRigidBodyWithControlReference> @ 14d9ad9b0

bool __cdecl
UE::CoreUObject::Private::Copy<FRigidBodyWithControlReference>
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

// Copy<FPhysicsControlNamedControlParameters> @ 14d9ada20

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlNamedControlParameters>
          (void *param_1,void *param_2,int param_3)

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
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      param_1 = (void *)((longlong)param_1 + 0x50);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlCreationData> @ 14d9addd0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlCreationData>(void *param_1)

{
  memset(param_1,0,0xe0);
  FPhysicsControl::FPhysicsControl(param_1);
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FPhysicsControlCreationData> @ 14d9ade10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlCreationData>(void *param_1)

{
  FPhysicsControl::FPhysicsControl(param_1);
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FPhysicsControlCreationData> @ 14d9ade40

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlCreationData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xd0);
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

// Copy<FPhysicsControlCreationData> @ 14d9adec0

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlCreationData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = ((undefined8 *)(lVar2 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x78);
      *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x88);
      *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x80);
      *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x98);
      *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0xa8);
      *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_1 + lVar2 + 0xa0);
      *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0xb8);
      *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_1 + lVar2 + 0xb0);
      *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 200);
      *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_1 + lVar2 + 0xc0);
      *(undefined8 *)((longlong)param_1 + 200) = uVar1;
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xd0),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar2 + 0xd0));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xe0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInitialCharacterControls> @ 14d9ae000

void __cdecl UE::CoreUObject::Private::Construct<FInitialCharacterControls>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
  *(double *)((longlong)param_1 + 0xb0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0xc0) = 0x302;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// ConstructForTests<FInitialCharacterControls> @ 14d9ae050

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInitialCharacterControls>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
  *(double *)((longlong)param_1 + 0xb0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0xc0) = 0x302;
  *(undefined1 *)((longlong)param_1 + 0xc2) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  return;
}

// Destruct<FInitialCharacterControls> @ 14d9ae060

void __cdecl UE::CoreUObject::Private::Destruct<FInitialCharacterControls>(void *param_1)

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

// Copy<FInitialCharacterControls> @ 14d9ae0e0

bool __cdecl
UE::CoreUObject::Private::Copy<FInitialCharacterControls>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      puVar3[1] = *(undefined8 *)((longlong)pvVar2 + 8);
      TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)(puVar3 + 2),
                 (TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar2 + 0x10));
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x28);
      puVar3[4] = *(undefined8 *)((longlong)pvVar2 + 0x20);
      puVar3[5] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x38);
      puVar3[6] = *(undefined8 *)((longlong)pvVar2 + 0x30);
      puVar3[7] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x48);
      puVar3[8] = *(undefined8 *)((longlong)pvVar2 + 0x40);
      puVar3[9] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x58);
      puVar3[10] = *(undefined8 *)((longlong)pvVar2 + 0x50);
      puVar3[0xb] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x68);
      puVar3[0xc] = *(undefined8 *)((longlong)pvVar2 + 0x60);
      puVar3[0xd] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x78);
      puVar3[0xe] = *(undefined8 *)((longlong)pvVar2 + 0x70);
      puVar3[0xf] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x88);
      puVar3[0x10] = *(undefined8 *)((longlong)pvVar2 + 0x80);
      puVar3[0x11] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x98);
      puVar3[0x12] = *(undefined8 *)((longlong)pvVar2 + 0x90);
      puVar3[0x13] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0xa8);
      puVar3[0x14] = *(undefined8 *)((longlong)pvVar2 + 0xa0);
      puVar3[0x15] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0xb8);
      puVar3[0x16] = *(undefined8 *)((longlong)pvVar2 + 0xb0);
      puVar3[0x17] = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 200);
      puVar3[0x18] = *(undefined8 *)((longlong)pvVar2 + 0xc0);
      puVar3[0x19] = uVar1;
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0xd0);
      puVar3 = puVar3 + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControl> @ 14d9ae860

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControl>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  return;
}

// ConstructForTests<FPhysicsControl> @ 14d9ae870

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControl>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  return;
}

// Destruct<FPhysicsControl> @ 14d9ae890

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControl>(void *param_1)

{
  return;
}

// Copy<FPhysicsControl> @ 14d9ae8c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControl>(void *param_1,void *param_2,int param_3)

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

// Construct<FInitialBodyModifier> @ 14d9aebe0

void __cdecl UE::CoreUObject::Private::Construct<FInitialBodyModifier>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x302;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// ConstructForTests<FInitialBodyModifier> @ 14d9aec40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInitialBodyModifier>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined2 *)((longlong)param_1 + 0x18) = 0x302;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// Destruct<FInitialBodyModifier> @ 14d9aeca0

void __cdecl UE::CoreUObject::Private::Destruct<FInitialBodyModifier>(void *param_1)

{
  return;
}

// Copy<FInitialBodyModifier> @ 14d9aed30

bool __cdecl
UE::CoreUObject::Private::Copy<FInitialBodyModifier>(void *param_1,void *param_2,int param_3)

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
  longlong lVar12;
  
  if (param_3 != 0) {
    lVar12 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar12 + 0x50 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar12 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar12 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar12 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar12 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x58);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlTarget> @ 14d9aef40

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlTarget>(void *param_1)

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
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FPhysicsControlTarget> @ 14d9aefb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlTarget>(void *param_1)

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
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FPhysicsControlTarget> @ 14d9af040

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlTarget>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlTarget> @ 14d9af090

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlTarget>(void *param_1,void *param_2,int param_3)

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
  longlong lVar14;
  
  if (param_3 != 0) {
    lVar14 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar14 + 0x60 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar14 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar14 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar14 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar14 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x68);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInitialPhysicsControl> @ 14d9af170

void __cdecl UE::CoreUObject::Private::Construct<FInitialPhysicsControl>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined1 *)((longlong)param_1 + 0x150) = 0;
  return;
}

// ConstructForTests<FInitialPhysicsControl> @ 14d9af1e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInitialPhysicsControl>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x60) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar1;
  *(double *)((longlong)param_1 + 0x70) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 200) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined1 *)((longlong)param_1 + 0x150) = 0;
  return;
}

// Destruct<FInitialPhysicsControl> @ 14d9af1f0

void __cdecl UE::CoreUObject::Private::Destruct<FInitialPhysicsControl>(void *param_1)

{
  return;
}

// Copy<FInitialPhysicsControl> @ 14d9af240

bool __cdecl
UE::CoreUObject::Private::Copy<FInitialPhysicsControl>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_168 [45];
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      lVar10 = 2;
      puVar6 = (undefined8 *)(lVar11 + (longlong)param_1);
      puVar7 = local_168;
      do {
        puVar9 = puVar7;
        puVar8 = puVar6;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar1;
        uVar1 = puVar8[4];
        uVar4 = puVar8[5];
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        uVar2 = puVar8[6];
        uVar3 = puVar8[7];
        puVar9[4] = uVar1;
        puVar9[5] = uVar4;
        uVar1 = puVar8[8];
        uVar4 = puVar8[9];
        puVar9[6] = uVar2;
        puVar9[7] = uVar3;
        uVar2 = puVar8[10];
        uVar3 = puVar8[0xb];
        puVar9[8] = uVar1;
        puVar9[9] = uVar4;
        uVar1 = puVar8[0xc];
        uVar4 = puVar8[0xd];
        puVar9[10] = uVar2;
        puVar9[0xb] = uVar3;
        uVar2 = puVar8[0xe];
        uVar3 = puVar8[0xf];
        puVar9[0xc] = uVar1;
        puVar9[0xd] = uVar4;
        puVar9[0xe] = uVar2;
        puVar9[0xf] = uVar3;
        lVar10 = lVar10 + -1;
        puVar6 = puVar8 + 0x10;
        puVar7 = puVar9 + 0x10;
      } while (lVar10 != 0);
      uVar1 = puVar8[0x11];
      uVar2 = puVar8[0x12];
      uVar3 = puVar8[0x13];
      puVar9[0x10] = puVar8[0x10];
      puVar9[0x11] = uVar1;
      uVar1 = puVar8[0x14];
      uVar4 = puVar8[0x15];
      puVar9[0x12] = uVar2;
      puVar9[0x13] = uVar3;
      uVar2 = puVar8[0x16];
      uVar3 = puVar8[0x17];
      puVar9[0x14] = uVar1;
      puVar9[0x15] = uVar4;
      uVar4 = puVar8[0x18];
      uVar5 = puVar8[0x19];
      uVar1 = puVar8[0x1a];
      puVar9[0x16] = uVar2;
      puVar9[0x17] = uVar3;
      puVar9[0x18] = uVar4;
      puVar9[0x19] = uVar5;
      puVar9[0x1a] = uVar1;
      lVar10 = 2;
      puVar6 = local_168;
      puVar7 = param_1;
      do {
        puVar9 = puVar7;
        puVar8 = puVar6;
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar1;
        uVar1 = puVar8[4];
        uVar4 = puVar8[5];
        puVar9[2] = uVar2;
        puVar9[3] = uVar3;
        uVar2 = puVar8[6];
        uVar3 = puVar8[7];
        puVar9[4] = uVar1;
        puVar9[5] = uVar4;
        uVar1 = puVar8[8];
        uVar4 = puVar8[9];
        puVar9[6] = uVar2;
        puVar9[7] = uVar3;
        uVar2 = puVar8[10];
        uVar3 = puVar8[0xb];
        puVar9[8] = uVar1;
        puVar9[9] = uVar4;
        uVar1 = puVar8[0xc];
        uVar4 = puVar8[0xd];
        puVar9[10] = uVar2;
        puVar9[0xb] = uVar3;
        uVar2 = puVar8[0xe];
        uVar3 = puVar8[0xf];
        puVar9[0xc] = uVar1;
        puVar9[0xd] = uVar4;
        puVar9[0xe] = uVar2;
        puVar9[0xf] = uVar3;
        lVar10 = lVar10 + -1;
        puVar6 = puVar8 + 0x10;
        puVar7 = puVar9 + 0x10;
      } while (lVar10 != 0);
      uVar2 = puVar8[0x11];
      uVar1 = puVar8[0x1a];
      param_1 = (void *)((longlong)param_1 + 0x158);
      uVar3 = puVar8[0x12];
      uVar4 = puVar8[0x13];
      puVar9[0x10] = puVar8[0x10];
      puVar9[0x11] = uVar2;
      uVar2 = puVar8[0x14];
      uVar5 = puVar8[0x15];
      puVar9[0x12] = uVar3;
      puVar9[0x13] = uVar4;
      uVar3 = puVar8[0x16];
      uVar4 = puVar8[0x17];
      puVar9[0x14] = uVar2;
      puVar9[0x15] = uVar5;
      uVar2 = puVar8[0x18];
      uVar5 = puVar8[0x19];
      puVar9[0x16] = uVar3;
      puVar9[0x17] = uVar4;
      puVar9[0x18] = uVar2;
      puVar9[0x19] = uVar5;
      puVar9[0x1a] = uVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlMultiplier> @ 14d9af770

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlMultiplier>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  return;
}

// ConstructForTests<FPhysicsControlMultiplier> @ 14d9af7e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlMultiplier>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  return;
}

// Destruct<FPhysicsControlMultiplier> @ 14d9af860

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlMultiplier>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlMultiplier> @ 14d9af900

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlMultiplier>(void *param_1,void *param_2,int param_3)

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

// Construct<FRigidBodyKinematicTargets> @ 14d9af9f0

void __cdecl UE::CoreUObject::Private::Construct<FRigidBodyKinematicTargets>(void *param_1)

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

// ConstructForTests<FRigidBodyKinematicTargets> @ 14d9afa30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigidBodyKinematicTargets>(void *param_1)

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

// Destruct<FRigidBodyKinematicTargets> @ 14d9afa70

void __cdecl UE::CoreUObject::Private::Destruct<FRigidBodyKinematicTargets>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FRigidBodyKinematicTargets> @ 14d9afb20

bool __cdecl
UE::CoreUObject::Private::Copy<FRigidBodyKinematicTargets>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  int iVar2;
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        iVar2 = *(int *)&pTVar1->field_0x8;
        TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar2,(ForAnyElementType *)this,(int *)&this->field_0x8,
                   (int *)&this->field_0xc);
        *(undefined4 *)&this->field_0x30 = *(undefined4 *)&pTVar1->field_0x30;
        *(undefined4 *)&this->field_0x34 = *(undefined4 *)&pTVar1->field_0x34;
        if (&this->field_0x10 != &pTVar1->field_0x10) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                     (TBitArray<FDefaultBitArrayAllocator> *)&pTVar1->field_0x10);
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this,*(void **)pTVar1,(longlong)iVar2 << 6);
        }
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlSparseMultiplier> @ 14d9afed0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlSparseMultiplier>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0xff;
  return;
}

// ConstructForTests<FPhysicsControlSparseMultiplier> @ 14d9aff30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSparseMultiplier>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)param_1 = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0xff;
  return;
}

// Destruct<FPhysicsControlSparseMultiplier> @ 14d9aff90

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlSparseMultiplier>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlSparseMultiplier> @ 14d9affe0

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlSparseMultiplier>
          (void *param_1,void *param_2,int param_3)

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
  longlong lVar16;
  
  if (param_3 != 0) {
    lVar16 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar16 + 0x70 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar16 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar16 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar16 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar16 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar16 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar16 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      puVar1 = (undefined8 *)(lVar16 + 0x60 + (longlong)param_1);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar16 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x78);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlData> @ 14d9b0710

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x100;
  return;
}

// ConstructForTests<FPhysicsControlData> @ 14d9b0770

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x100;
  return;
}

// Destruct<FPhysicsControlData> @ 14d9b07d0

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlData>(void *param_1)

{
  return;
}

// Construct<FRigidBodyKinematicTarget> @ 14d9b07e0

void __cdecl UE::CoreUObject::Private::Construct<FRigidBodyKinematicTarget>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FRigidBodyKinematicTarget> @ 14d9b0800

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigidBodyKinematicTarget>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FRigidBodyKinematicTarget> @ 14d9b0860

void __cdecl UE::CoreUObject::Private::Destruct<FRigidBodyKinematicTarget>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlData> @ 14d9b08b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlData>(void *param_1,void *param_2,int param_3)

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
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      param_1 = (void *)((longlong)param_1 + 0x50);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FRigidBodyKinematicTarget> @ 14d9b0980

bool __cdecl
UE::CoreUObject::Private::Copy<FRigidBodyKinematicTarget>(void *param_1,void *param_2,int param_3)

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

// Construct<FRigidBodyControlTargets> @ 14d9b1100

void __cdecl UE::CoreUObject::Private::Construct<FRigidBodyControlTargets>(void *param_1)

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

// ConstructForTests<FRigidBodyControlTargets> @ 14d9b1180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigidBodyControlTargets>(void *param_1)

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

// Destruct<FRigidBodyControlTargets> @ 14d9b11b0

void __cdecl UE::CoreUObject::Private::Destruct<FRigidBodyControlTargets>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FRigidBodyControlTargets> @ 14d9b1240

bool __cdecl
UE::CoreUObject::Private::Copy<FRigidBodyControlTargets>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  int iVar2;
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        iVar2 = *(int *)&pTVar1->field_0x8;
        TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(this,iVar2);
        Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar2,(ForAnyElementType *)this,(int *)&this->field_0x8,
                   (int *)&this->field_0xc);
        *(undefined4 *)&this->field_0x30 = *(undefined4 *)&pTVar1->field_0x30;
        *(undefined4 *)&this->field_0x34 = *(undefined4 *)&pTVar1->field_0x34;
        if (&this->field_0x10 != &pTVar1->field_0x10) {
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                     (TBitArray<FDefaultBitArrayAllocator> *)&pTVar1->field_0x10);
        }
        if (iVar2 != 0) {
          memcpy(*(void **)this,*(void **)pTVar1,(longlong)iVar2 << 6);
        }
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlSparseData> @ 14d9b1510

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlSparseData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x1f;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x40) = 0xffe5;
  return;
}

// ConstructForTests<FPhysicsControlSparseData> @ 14d9b15b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSparseData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(byte *)((longlong)param_1 + 0x42) = *(byte *)((longlong)param_1 + 0x42) | 0x1f;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0x40) = 0xffe5;
  return;
}

// Destruct<FPhysicsControlSparseData> @ 14d9b1620

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlSparseData>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlSparseData> @ 14d9b16f0

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlSparseData>(void *param_1,void *param_2,int param_3)

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

// Construct<FRigidBodyControlTarget> @ 14d9b1b70

void __cdecl UE::CoreUObject::Private::Construct<FRigidBodyControlTarget>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FRigidBodyControlTarget> @ 14d9b1b90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigidBodyControlTarget>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FRigidBodyControlTarget> @ 14d9b1bf0

void __cdecl UE::CoreUObject::Private::Destruct<FRigidBodyControlTarget>(void *param_1)

{
  return;
}

// Copy<FRigidBodyControlTarget> @ 14d9b1c40

bool __cdecl
UE::CoreUObject::Private::Copy<FRigidBodyControlTarget>(void *param_1,void *param_2,int param_3)

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

// Construct<FPhysicsBodyModifierCreationData> @ 14d9b1cc0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsBodyModifierCreationData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x20302;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FPhysicsBodyModifierCreationData> @ 14d9b1d00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsBodyModifierCreationData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x302;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FPhysicsBodyModifierCreationData> @ 14d9b1d30

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsBodyModifierCreationData>(void *param_1)

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

// Copy<FPhysicsBodyModifierCreationData> @ 14d9b1d90

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsBodyModifierCreationData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = ((undefined8 *)(lVar2 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x18),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar2 + 0x18));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_RigidBodyWithControl> @ 14d9b1ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_RigidBodyWithControl>(void *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  void *pvVar35;
  FName *pFVar36;
  ulonglong uVar37;
  FName FStackX_8;
  TStatId TStackX_10;
  
  fVar2 = __real_3e4ccccd;
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  FAlphaBlend::FAlphaBlend((FAlphaBlend *)((longlong)param_1 + 0x50),fVar2);
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_RigidBodyWithControl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xf0) = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x100) = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x110) = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x120) = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x130) = auVar9;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x140) = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x150) = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x160) = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x170) = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x180) = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 400) = auVar15;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1a0) = auVar16;
  auVar17._8_4_ = SUB84((double)fVar3,0);
  auVar17._0_8_ = (double)fVar2;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1b0) = auVar17;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar18._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar18._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar18._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1c0) = auVar18;
  auVar19._8_4_ = SUB84((double)fVar3,0);
  auVar19._0_8_ = (double)fVar2;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1d0) = auVar19;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar20._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar20._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar20._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1e0) = auVar20;
  auVar21._8_4_ = SUB84((double)fVar3,0);
  auVar21._0_8_ = (double)fVar2;
  auVar21._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1f0) = auVar21;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0x40c3880000000000;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0x40c3880000000000;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0x40c3880000000000;
  FSimSpaceSettings::FSimSpaceSettings((FSimSpaceSettings *)((longlong)param_1 + 0x280));
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0x3f99999a;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x304) = *(byte *)((longlong)param_1 + 0x304) & 0xf0;
  *(undefined2 *)((longlong)param_1 + 0x300) = 0;
  *(byte *)((longlong)param_1 + 0x302) = *(byte *)((longlong)param_1 + 0x302) & 0xf9 | 9;
  *(undefined1 *)((longlong)param_1 + 0x303) = 0;
  *(undefined2 *)((longlong)param_1 + 0x305) = 0x202;
  *(undefined4 *)((longlong)param_1 + 0x308) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x310) = 0;
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
  FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData
            ((FPhysicsControlCharacterSetupData *)((longlong)param_1 + 0x370));
  *(undefined1 *)((longlong)param_1 + 0x430) = 1;
  *(undefined8 *)((longlong)param_1 + 0x438) = 0;
  *(undefined8 *)((longlong)param_1 + 0x440) = 0;
  *(undefined8 *)((longlong)param_1 + 0x458) = 0;
  *(undefined4 *)((longlong)param_1 + 0x460) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x468) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x478) = 0;
  *(undefined4 *)((longlong)param_1 + 0x480) = 0;
  *(undefined8 *)((longlong)param_1 + 0x488) = 0;
  *(undefined8 *)((longlong)param_1 + 0x490) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x508) = 0;
  *(undefined8 *)((longlong)param_1 + 0x510) = 0;
  *(undefined8 *)((longlong)param_1 + 0x518) = 0;
  *(undefined8 *)((longlong)param_1 + 0x520) = 0;
  *(undefined8 *)((longlong)param_1 + 0x528) = 0;
  *(undefined8 *)((longlong)param_1 + 0x530) = 0;
  *(undefined8 *)((longlong)param_1 + 0x538) = 0;
  *(undefined8 *)((longlong)param_1 + 0x540) = 0;
  *(undefined8 *)((longlong)param_1 + 0x548) = 0;
  *(undefined8 *)((longlong)param_1 + 0x550) = 0;
  *(undefined8 *)((longlong)param_1 + 0x558) = 0;
  *(undefined8 *)((longlong)param_1 + 0x560) = 0;
  *(undefined8 *)((longlong)param_1 + 0x568) = 0;
  *(undefined8 *)((longlong)param_1 + 0x570) = 0;
  *(undefined8 *)((longlong)param_1 + 0x578) = 0;
  *(undefined8 *)((longlong)param_1 + 0x580) = 0;
  *(undefined8 *)((longlong)param_1 + 0x588) = 0;
  *(undefined8 *)((longlong)param_1 + 0x590) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x608) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x618) = 0;
  *(undefined4 *)((longlong)param_1 + 0x620) = 0;
  *(byte *)((longlong)param_1 + 0x640) = *(byte *)((longlong)param_1 + 0x640) & 0xf0;
  *(undefined8 *)((longlong)param_1 + 0x628) = 0;
  *(undefined8 *)((longlong)param_1 + 0x630) = 0;
  *(undefined8 *)((longlong)param_1 + 0x638) = 0;
  *(undefined1 *)((longlong)param_1 + 0x641) = 1;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x658) = 0;
  *(undefined8 *)((longlong)param_1 + 0x660) = 0;
  FPhysicsAssetSolverSettings::FPhysicsAssetSolverSettings
            ((FPhysicsAssetSolverSettings *)((longlong)param_1 + 0x668));
  FSolverIterations::FSolverIterations((FSolverIterations *)((longlong)param_1 + 0x684));
  *(undefined8 *)((longlong)param_1 + 0x6a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x6d8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x708) = 0;
  *(undefined8 *)((longlong)param_1 + 0x710) = 0;
  *(undefined8 *)((longlong)param_1 + 0x718) = 0;
  *(undefined8 *)((longlong)param_1 + 0x720) = 0;
  *(undefined8 *)((longlong)param_1 + 0x728) = 0;
  *(undefined8 *)((longlong)param_1 + 0x730) = 0;
  *(undefined8 *)((longlong)param_1 + 0x738) = 0;
  *(undefined8 *)((longlong)param_1 + 0x740) = 0;
  *(undefined8 *)((longlong)param_1 + 0x748) = 0;
  *(undefined8 *)((longlong)param_1 + 0x750) = 0;
  *(undefined8 *)((longlong)param_1 + 0x758) = 0;
  *(undefined8 *)((longlong)param_1 + 0x760) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x768) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x770) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x778) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x780) = 0;
  *(undefined8 *)((longlong)param_1 + 0x788) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7ac) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x7b0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c8) = 0;
  *(undefined8 *)((longlong)param_1 + 2000) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7fc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x800) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x810) = 0;
  *(undefined4 *)((longlong)param_1 + 0x818) = 0;
  *(undefined8 *)((longlong)param_1 + 0x820) = 0;
  *(undefined8 *)((longlong)param_1 + 0x828) = 0;
  *(undefined8 *)((longlong)param_1 + 0x840) = 0;
  *(undefined4 *)((longlong)param_1 + 0x848) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x850) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x860) = 0;
  *(undefined4 *)((longlong)param_1 + 0x868) = 0;
  *(undefined8 *)((longlong)param_1 + 0x870) = 0;
  *(undefined8 *)((longlong)param_1 + 0x878) = 0;
  *(undefined8 *)((longlong)param_1 + 0x890) = 0;
  *(undefined4 *)((longlong)param_1 + 0x898) = 0;
  *(undefined4 *)((longlong)param_1 + 0x89c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8a0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x908) = 0;
  *(undefined8 *)((longlong)param_1 + 0x910) = 0;
  *(undefined8 *)((longlong)param_1 + 0x918) = 0;
  *(undefined8 *)((longlong)param_1 + 0x920) = 0;
  *(undefined8 *)((longlong)param_1 + 0x928) = 0;
  *(undefined8 *)((longlong)param_1 + 0x930) = 0;
  *(undefined8 *)((longlong)param_1 + 0x938) = 0;
  *(undefined8 *)((longlong)param_1 + 0x940) = 0;
  *(undefined8 *)((longlong)param_1 + 0x948) = 0;
  *(undefined8 *)((longlong)param_1 + 0x950) = 0;
  *(undefined8 *)((longlong)param_1 + 0x958) = 0;
  *(undefined8 *)((longlong)param_1 + 0x960) = 0;
  *(undefined8 *)((longlong)param_1 + 0x968) = 0;
  *(undefined8 *)((longlong)param_1 + 0x970) = 0;
  *(undefined8 *)((longlong)param_1 + 0x978) = 0;
  *(undefined8 *)((longlong)param_1 + 0x980) = 0;
  *(undefined8 *)((longlong)param_1 + 0x988) = 0;
  *(undefined8 *)((longlong)param_1 + 0x990) = 0;
  *(undefined8 *)((longlong)param_1 + 0x998) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa08) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa20) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa28) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa48) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa58) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa38) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa44) = 0;
  pvVar35 = ThreadLocalStoragePointer;
  uVar37 = (ulonglong)_tls_index;
  *(undefined8 *)((longlong)param_1 + 0xa50) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa60) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa80) = 0;
  lVar1 = *(longlong *)((longlong)pvVar35 + uVar37 * 8);
  *(undefined8 *)((longlong)param_1 + 0xa68) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa70) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa78) = 0;
  uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xa90) = uVar34;
  *(double *)((longlong)param_1 + 0xa98) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xaa0) = 0;
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
    StatPtr_UnknownSceneQuery =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
          )0x0;
    pFVar36 = ::FName::FName(&FStackX_8,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar36,L"UnknownSceneQuery",
               "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TStackX_10.StatIdPtr =
       (TStatIdData *)
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar36 = ::FName::FName(&FStackX_8,"UnknownSceneQuery");
    TStackX_10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar36,L"UnknownSceneQuery",
                    "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  FCollisionQueryParams::FCollisionQueryParams
            ((FCollisionQueryParams *)((longlong)param_1 + 0xaa8),(FName)0x0,&TStackX_10,false,
             (AActor *)0x0);
  *(undefined8 *)((longlong)param_1 + 0xb30) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb38) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb40) = 0;
  FBoneContainer::FBoneContainer((FBoneContainer *)((longlong)param_1 + 0xb48));
  *(undefined8 *)((longlong)param_1 + 0xca8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd08) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd28) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd20) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd41) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd45) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd47) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd30) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd38) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd40) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd48) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd58) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd60) = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar22._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar22._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd70) = auVar22;
  auVar23._8_4_ = SUB84((double)fVar3,0);
  auVar23._0_8_ = (double)fVar2;
  auVar23._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd80) = auVar23;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar24._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar24._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar24._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd90) = auVar24;
  auVar25._8_4_ = SUB84((double)fVar3,0);
  auVar25._0_8_ = (double)fVar2;
  auVar25._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xda0) = auVar25;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar26._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar26._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar26._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdb0) = auVar26;
  auVar27._8_4_ = SUB84((double)fVar3,0);
  auVar27._0_8_ = (double)fVar2;
  auVar27._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdc0) = auVar27;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar28._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar28._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdd0) = auVar28;
  auVar29._8_4_ = SUB84((double)fVar3,0);
  auVar29._0_8_ = (double)fVar2;
  auVar29._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xde0) = auVar29;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar30._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar30._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar30._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdf0) = auVar30;
  auVar31._8_4_ = SUB84((double)fVar3,0);
  auVar31._0_8_ = (double)fVar2;
  auVar31._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe00) = auVar31;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar32._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar32._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar32._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe10) = auVar32;
  auVar33._8_4_ = SUB84((double)fVar3,0);
  auVar33._0_8_ = (double)fVar2;
  auVar33._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe20) = auVar33;
  return;
}

// ConstructForTests<FAnimNode_RigidBodyWithControl> @ 14d9b1ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_RigidBodyWithControl>(void *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
  void *pvVar35;
  FName *pFVar36;
  ulonglong uVar37;
  FName FStackX_8;
  TStatId TStackX_10;
  
  fVar2 = __real_3e4ccccd;
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  FAlphaBlend::FAlphaBlend((FAlphaBlend *)((longlong)param_1 + 0x50),fVar2);
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_RigidBodyWithControl__6B_;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd0) = 1;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe0) = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xf0) = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x100) = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x110) = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x120) = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x130) = auVar9;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x140) = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x150) = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x160) = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x170) = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x180) = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 400) = auVar15;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1a0) = auVar16;
  auVar17._8_4_ = SUB84((double)fVar3,0);
  auVar17._0_8_ = (double)fVar2;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1b0) = auVar17;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar18._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar18._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar18._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1c0) = auVar18;
  auVar19._8_4_ = SUB84((double)fVar3,0);
  auVar19._0_8_ = (double)fVar2;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1d0) = auVar19;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar20._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar20._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar20._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1e0) = auVar20;
  auVar21._8_4_ = SUB84((double)fVar3,0);
  auVar21._0_8_ = (double)fVar2;
  auVar21._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x1f0) = auVar21;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  *(undefined8 *)((longlong)param_1 + 0x228) = 0;
  *(undefined8 *)((longlong)param_1 + 0x230) = 0;
  *(undefined8 *)((longlong)param_1 + 0x238) = 0;
  *(undefined8 *)((longlong)param_1 + 0x240) = 0;
  *(undefined8 *)((longlong)param_1 + 0x248) = 0;
  *(undefined8 *)((longlong)param_1 + 0x250) = 0;
  *(undefined8 *)((longlong)param_1 + 600) = 0;
  *(undefined8 *)((longlong)param_1 + 0x260) = 0;
  *(undefined8 *)((longlong)param_1 + 0x268) = 0x40c3880000000000;
  *(undefined8 *)((longlong)param_1 + 0x270) = 0x40c3880000000000;
  *(undefined8 *)((longlong)param_1 + 0x278) = 0x40c3880000000000;
  FSimSpaceSettings::FSimSpaceSettings((FSimSpaceSettings *)((longlong)param_1 + 0x280));
  *(undefined4 *)((longlong)param_1 + 0x2e8) = 0x3f99999a;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f8) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x304) = *(byte *)((longlong)param_1 + 0x304) & 0xf0;
  *(undefined2 *)((longlong)param_1 + 0x300) = 0;
  *(byte *)((longlong)param_1 + 0x302) = *(byte *)((longlong)param_1 + 0x302) & 0xf9 | 9;
  *(undefined1 *)((longlong)param_1 + 0x303) = 0;
  *(undefined2 *)((longlong)param_1 + 0x305) = 0x202;
  *(undefined4 *)((longlong)param_1 + 0x308) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x310) = 0;
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
  FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData
            ((FPhysicsControlCharacterSetupData *)((longlong)param_1 + 0x370));
  *(undefined1 *)((longlong)param_1 + 0x430) = 1;
  *(undefined8 *)((longlong)param_1 + 0x438) = 0;
  *(undefined8 *)((longlong)param_1 + 0x440) = 0;
  *(undefined8 *)((longlong)param_1 + 0x458) = 0;
  *(undefined4 *)((longlong)param_1 + 0x460) = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x468) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x478) = 0;
  *(undefined4 *)((longlong)param_1 + 0x480) = 0;
  *(undefined8 *)((longlong)param_1 + 0x488) = 0;
  *(undefined8 *)((longlong)param_1 + 0x490) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x508) = 0;
  *(undefined8 *)((longlong)param_1 + 0x510) = 0;
  *(undefined8 *)((longlong)param_1 + 0x518) = 0;
  *(undefined8 *)((longlong)param_1 + 0x520) = 0;
  *(undefined8 *)((longlong)param_1 + 0x528) = 0;
  *(undefined8 *)((longlong)param_1 + 0x530) = 0;
  *(undefined8 *)((longlong)param_1 + 0x538) = 0;
  *(undefined8 *)((longlong)param_1 + 0x540) = 0;
  *(undefined8 *)((longlong)param_1 + 0x548) = 0;
  *(undefined8 *)((longlong)param_1 + 0x550) = 0;
  *(undefined8 *)((longlong)param_1 + 0x558) = 0;
  *(undefined8 *)((longlong)param_1 + 0x560) = 0;
  *(undefined8 *)((longlong)param_1 + 0x568) = 0;
  *(undefined8 *)((longlong)param_1 + 0x570) = 0;
  *(undefined8 *)((longlong)param_1 + 0x578) = 0;
  *(undefined8 *)((longlong)param_1 + 0x580) = 0;
  *(undefined8 *)((longlong)param_1 + 0x588) = 0;
  *(undefined8 *)((longlong)param_1 + 0x590) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x5b8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x600) = 0;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x608) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x618) = 0;
  *(undefined4 *)((longlong)param_1 + 0x620) = 0;
  *(byte *)((longlong)param_1 + 0x640) = *(byte *)((longlong)param_1 + 0x640) & 0xf0;
  *(undefined8 *)((longlong)param_1 + 0x628) = 0;
  *(undefined8 *)((longlong)param_1 + 0x630) = 0;
  *(undefined8 *)((longlong)param_1 + 0x638) = 0;
  *(undefined1 *)((longlong)param_1 + 0x641) = 1;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x658) = 0;
  *(undefined8 *)((longlong)param_1 + 0x660) = 0;
  FPhysicsAssetSolverSettings::FPhysicsAssetSolverSettings
            ((FPhysicsAssetSolverSettings *)((longlong)param_1 + 0x668));
  FSolverIterations::FSolverIterations((FSolverIterations *)((longlong)param_1 + 0x684));
  *(undefined8 *)((longlong)param_1 + 0x6a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x6d8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6e8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x708) = 0;
  *(undefined8 *)((longlong)param_1 + 0x710) = 0;
  *(undefined8 *)((longlong)param_1 + 0x718) = 0;
  *(undefined8 *)((longlong)param_1 + 0x720) = 0;
  *(undefined8 *)((longlong)param_1 + 0x728) = 0;
  *(undefined8 *)((longlong)param_1 + 0x730) = 0;
  *(undefined8 *)((longlong)param_1 + 0x738) = 0;
  *(undefined8 *)((longlong)param_1 + 0x740) = 0;
  *(undefined8 *)((longlong)param_1 + 0x748) = 0;
  *(undefined8 *)((longlong)param_1 + 0x750) = 0;
  *(undefined8 *)((longlong)param_1 + 0x758) = 0;
  *(undefined8 *)((longlong)param_1 + 0x760) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x768) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x770) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x778) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x780) = 0;
  *(undefined8 *)((longlong)param_1 + 0x788) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7ac) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x7b0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c8) = 0;
  *(undefined8 *)((longlong)param_1 + 2000) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7fc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x800) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x810) = 0;
  *(undefined4 *)((longlong)param_1 + 0x818) = 0;
  *(undefined8 *)((longlong)param_1 + 0x820) = 0;
  *(undefined8 *)((longlong)param_1 + 0x828) = 0;
  *(undefined8 *)((longlong)param_1 + 0x840) = 0;
  *(undefined4 *)((longlong)param_1 + 0x848) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x850) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x860) = 0;
  *(undefined4 *)((longlong)param_1 + 0x868) = 0;
  *(undefined8 *)((longlong)param_1 + 0x870) = 0;
  *(undefined8 *)((longlong)param_1 + 0x878) = 0;
  *(undefined8 *)((longlong)param_1 + 0x890) = 0;
  *(undefined4 *)((longlong)param_1 + 0x898) = 0;
  *(undefined4 *)((longlong)param_1 + 0x89c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8a0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x908) = 0;
  *(undefined8 *)((longlong)param_1 + 0x910) = 0;
  *(undefined8 *)((longlong)param_1 + 0x918) = 0;
  *(undefined8 *)((longlong)param_1 + 0x920) = 0;
  *(undefined8 *)((longlong)param_1 + 0x928) = 0;
  *(undefined8 *)((longlong)param_1 + 0x930) = 0;
  *(undefined8 *)((longlong)param_1 + 0x938) = 0;
  *(undefined8 *)((longlong)param_1 + 0x940) = 0;
  *(undefined8 *)((longlong)param_1 + 0x948) = 0;
  *(undefined8 *)((longlong)param_1 + 0x950) = 0;
  *(undefined8 *)((longlong)param_1 + 0x958) = 0;
  *(undefined8 *)((longlong)param_1 + 0x960) = 0;
  *(undefined8 *)((longlong)param_1 + 0x968) = 0;
  *(undefined8 *)((longlong)param_1 + 0x970) = 0;
  *(undefined8 *)((longlong)param_1 + 0x978) = 0;
  *(undefined8 *)((longlong)param_1 + 0x980) = 0;
  *(undefined8 *)((longlong)param_1 + 0x988) = 0;
  *(undefined8 *)((longlong)param_1 + 0x990) = 0;
  *(undefined8 *)((longlong)param_1 + 0x998) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa08) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa20) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa28) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa48) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa58) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa38) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa3c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa44) = 0;
  pvVar35 = ThreadLocalStoragePointer;
  uVar37 = (ulonglong)_tls_index;
  *(undefined8 *)((longlong)param_1 + 0xa50) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa60) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa80) = 0;
  lVar1 = *(longlong *)((longlong)pvVar35 + uVar37 * 8);
  *(undefined8 *)((longlong)param_1 + 0xa68) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa70) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa78) = 0;
  uVar34 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xa88) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xa90) = uVar34;
  *(double *)((longlong)param_1 + 0xa98) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0xaa0) = 0;
  if ((*(int *)(lVar1 + 0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
    StatPtr_UnknownSceneQuery =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
          )0x0;
    pFVar36 = ::FName::FName(&FStackX_8,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar36,L"UnknownSceneQuery",
               "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TStackX_10.StatIdPtr =
       (TStatIdData *)
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar36 = ::FName::FName(&FStackX_8,"UnknownSceneQuery");
    TStackX_10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar36,L"UnknownSceneQuery",
                    "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  FStackX_8.ComparisonIndex.Value = 0;
  FStackX_8.Number = 0;
  FCollisionQueryParams::FCollisionQueryParams
            ((FCollisionQueryParams *)((longlong)param_1 + 0xaa8),(FName)0x0,&TStackX_10,false,
             (AActor *)0x0);
  *(undefined8 *)((longlong)param_1 + 0xb30) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb38) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb40) = 0;
  FBoneContainer::FBoneContainer((FBoneContainer *)((longlong)param_1 + 0xb48));
  *(undefined8 *)((longlong)param_1 + 0xca8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xca0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd08) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd28) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd00) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd20) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd41) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd45) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd47) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd30) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd38) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd40) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd48) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd50) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd58) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd60) = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar22._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar22._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd70) = auVar22;
  auVar23._8_4_ = SUB84((double)fVar3,0);
  auVar23._0_8_ = (double)fVar2;
  auVar23._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd80) = auVar23;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar24._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar24._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar24._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xd90) = auVar24;
  auVar25._8_4_ = SUB84((double)fVar3,0);
  auVar25._0_8_ = (double)fVar2;
  auVar25._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xda0) = auVar25;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar26._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar26._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar26._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdb0) = auVar26;
  auVar27._8_4_ = SUB84((double)fVar3,0);
  auVar27._0_8_ = (double)fVar2;
  auVar27._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdc0) = auVar27;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar28._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar28._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdd0) = auVar28;
  auVar29._8_4_ = SUB84((double)fVar3,0);
  auVar29._0_8_ = (double)fVar2;
  auVar29._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xde0) = auVar29;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar30._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar30._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar30._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xdf0) = auVar30;
  auVar31._8_4_ = SUB84((double)fVar3,0);
  auVar31._0_8_ = (double)fVar2;
  auVar31._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe00) = auVar31;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar32._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar32._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar32._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe10) = auVar32;
  auVar33._8_4_ = SUB84((double)fVar3,0);
  auVar33._0_8_ = (double)fVar2;
  auVar33._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0xe20) = auVar33;
  return;
}

// Destruct<FAnimNode_RigidBodyWithControl> @ 14d9b1ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_RigidBodyWithControl>(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)param_1 = &___7FAnimNode_RigidBodyWithControl__6B_;
  FAnimNode_RigidBodyWithControl::DestroyPhysicsSimulation(param_1);
  if (*(void **)((longlong)param_1 + 0xd30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd30));
  }
  if (*(void **)((longlong)param_1 + 0xd20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd20));
  }
  if (*(void **)((longlong)param_1 + 0xd10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd10));
  }
  if (*(void **)((longlong)param_1 + 0xd00) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd00));
  }
  if (*(void **)((longlong)param_1 + 0xce8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xce8));
  }
  if (*(void **)((longlong)param_1 + 0xcd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xcd8));
  }
  if (*(void **)((longlong)param_1 + 0xcc8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xcc8));
  }
  if (*(void **)((longlong)param_1 + 0xcb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xcb8));
  }
  if (*(void **)((longlong)param_1 + 0xca0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xca0));
  }
  FBoneContainer::~FBoneContainer((FBoneContainer *)((longlong)param_1 + 0xb48));
  if (*(void **)((longlong)param_1 + 0xb20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb20));
  }
  if (*(void **)((longlong)param_1 + 0xb00) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb00));
  }
  *(undefined4 *)((longlong)param_1 + 0xa58) = 0;
  if (*(void **)((longlong)param_1 + 0xa50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa50));
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa10));
  if (*(void **)((longlong)param_1 + 0xa00) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa00));
  }
  DestructItems<FFieldSystemCommand,int>
            (*(FFieldSystemCommand **)((longlong)param_1 + 0x9f0),
             *(int *)((longlong)param_1 + 0x9f8));
  if (*(void **)((longlong)param_1 + 0x9f0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x9f0));
  }
  DestructItems<FFieldSystemCommand,int>
            (*(FFieldSystemCommand **)((longlong)param_1 + 0x9e0),
             *(int *)((longlong)param_1 + 0x9e8));
  if (*(void **)((longlong)param_1 + 0x9e0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x9e0));
  }
  FFieldExecutionDatas::~FFieldExecutionDatas((FFieldExecutionDatas *)((longlong)param_1 + 0x8e0));
  if (*(void **)((longlong)param_1 + 0x8d0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x8d0));
  }
  *(undefined4 *)((longlong)param_1 + 0x8b8) = 0;
  if (*(void **)((longlong)param_1 + 0x8b0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x8b0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x870));
  *(undefined4 *)((longlong)param_1 + 0x868) = 0;
  if (*(void **)((longlong)param_1 + 0x860) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x860));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x820));
  *(undefined4 *)((longlong)param_1 + 0x818) = 0;
  if (*(void **)((longlong)param_1 + 0x810) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x810));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 2000));
  *(undefined4 *)((longlong)param_1 + 0x7c8) = 0;
  if (*(void **)((longlong)param_1 + 0x7c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x7c0));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x780));
  if (*(void **)((longlong)param_1 + 0x750) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x750));
  }
  if (*(void **)((longlong)param_1 + 0x740) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x740));
  }
  if (*(void **)((longlong)param_1 + 0x730) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x730));
  }
  if (*(void **)((longlong)param_1 + 0x720) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x720));
  }
  if (*(void **)((longlong)param_1 + 0x710) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x710));
  }
  DestructItems<UE::PhysicsControl::FOutputBoneData,int>
            (*(FOutputBoneData **)((longlong)param_1 + 0x700),*(int *)((longlong)param_1 + 0x708));
  if (*(void **)((longlong)param_1 + 0x700) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x700));
  }
  *(undefined4 *)((longlong)param_1 + 0x6f0) = 0;
  if (*(void **)((longlong)param_1 + 0x6e8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x6e8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x6a8));
  puVar3 = *(undefined8 **)((longlong)param_1 + 0x6a0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x620) = 0;
  if (*(void **)((longlong)param_1 + 0x618) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x618));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x5d8));
  *(undefined4 *)((longlong)param_1 + 0x5d0) = 0;
  if (*(void **)((longlong)param_1 + 0x5c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x5c8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x588));
  if (*(void **)((longlong)param_1 + 0x578) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x578));
  }
  if (*(void **)((longlong)param_1 + 0x568) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x568));
  }
  if (*(void **)((longlong)param_1 + 0x558) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x558));
  }
  if (*(void **)((longlong)param_1 + 0x548) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x548));
  }
  if (*(void **)((longlong)param_1 + 0x538) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x538));
  }
  if (*(void **)((longlong)param_1 + 0x528) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x528));
  }
  if (*(void **)((longlong)param_1 + 0x518) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x518));
  }
  if (*(void **)((longlong)param_1 + 0x508) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x508));
  }
  if (*(void **)((longlong)param_1 + 0x4f8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4f8));
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            (*(FPhysicsControlSetUpdate **)((longlong)param_1 + 0x4e8),
             *(int *)((longlong)param_1 + 0x4f0));
  if (*(void **)((longlong)param_1 + 0x4e8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4e8));
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            (*(FPhysicsControlSetUpdate **)((longlong)param_1 + 0x4d8),
             *(int *)((longlong)param_1 + 0x4e0));
  if (*(void **)((longlong)param_1 + 0x4d8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4d8));
  }
  *(undefined4 *)((longlong)param_1 + 0x4d0) = 0;
  if (*(void **)((longlong)param_1 + 0x4c8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x4c8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x488));
  *(undefined4 *)((longlong)param_1 + 0x480) = 0;
  if (*(void **)((longlong)param_1 + 0x478) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x478));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x438));
  if (*(void **)((longlong)param_1 + 0x370) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x370));
  }
  *(undefined4 *)((longlong)param_1 + 0x368) = 0;
  if (*(void **)((longlong)param_1 + 0x360) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x360));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 800));
  *(undefined ***)param_1 = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Construct<FPhysicsControlCharacterSetupData> @ 14d9b1f40

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlCharacterSetupData>(void *param_1)

{
  memset(param_1,0,0xc0);
  FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData(param_1);
  return;
}

// Copy<FAnimNode_RigidBodyWithControl> @ 14d9b1f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_RigidBodyWithControl>
          (void *param_1,void *param_2,int param_3)

{
  FAnimNode_RigidBodyWithControl *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FAnimNode_RigidBodyWithControl::operator=
                (this,(FAnimNode_RigidBodyWithControl *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FPhysicsControlCharacterSetupData> @ 14d9b1fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlCharacterSetupData>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x100;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x90) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x98) = uVar1;
  *(double *)((longlong)param_1 + 0xa0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0x100;
  *(undefined2 *)((longlong)param_1 + 0xb0) = 0x302;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
  return;
}

// Destruct<FPhysicsControlCharacterSetupData> @ 14d9b1fd0

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlCharacterSetupData>(void *param_1)

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

// Copy<FPhysicsControlCharacterSetupData> @ 14d9b2010

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlCharacterSetupData>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x10))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x10))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x10))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x20))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x30))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x30))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x30))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x40))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x40))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x40))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x50))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x50))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x50))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x60))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x60))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x60))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x70))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x70))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x70))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x80))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x80))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x80))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x90))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x90))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0x90))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90))
    ->ArrayMax = iVar3;
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0xa0))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0xa0))->ArrayMax;
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0)
     )->AllocatorInstance).Data =
         (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
          ((longlong)param_2 + 0xa0))->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0))
    ->ArrayMax = iVar3;
    pTVar1 = (TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0xb0);
    iVar2 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0xb0))->ArrayNum;
    iVar3 = ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0xb0))->ArrayMax;
    param_2 = (void *)((longlong)param_2 + 0xc0);
    (((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0)
     )->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0))
    ->ArrayNum = iVar2;
    ((TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0))
    ->ArrayMax = iVar3;
    param_1 = (TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0xc0);
  }
  return true;
}

// Construct<FPhysicsBodyModifier> @ 14d9b2100

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsBodyModifier>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x302;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// ConstructForTests<FPhysicsBodyModifier> @ 14d9b2130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsBodyModifier>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 8) = 0x302;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FPhysicsBodyModifier> @ 14d9b21a0

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsBodyModifier>(void *param_1)

{
  return;
}

// Copy<FPhysicsBodyModifier> @ 14d9b21b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsBodyModifier>(void *param_1,void *param_2,int param_3)

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

// Construct<FPhysicsControlNames> @ 14d9b23a0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlNames>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPhysicsControlNames> @ 14d9b23b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNames>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPhysicsControlNames> @ 14d9b2410

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlNames>(void *param_1)

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

// Copy<FPhysicsControlNames> @ 14d9b2440

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlNames>(void *param_1,void *param_2,int param_3)

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

// Construct<FPhysicsControlModifierData> @ 14d9b24d0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlModifierData>(void *param_1)

{
  *(undefined2 *)param_1 = 0x302;
  *(undefined1 *)((longlong)param_1 + 2) = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// ConstructForTests<FPhysicsControlModifierData> @ 14d9b2500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlModifierData>(void *param_1)

{
  *(undefined2 *)param_1 = 0x302;
  *(undefined1 *)((longlong)param_1 + 2) = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Destruct<FPhysicsControlModifierData> @ 14d9b2530

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlModifierData>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlModifierData> @ 14d9b2580

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlModifierData>(void *param_1,void *param_2,int param_3)

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

// Construct<FPhysicsControlLimbBones> @ 14d9b2690

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlLimbBones>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x18) = *(byte *)((longlong)param_1 + 0x18) & 0xfe;
  *(byte *)((longlong)param_1 + 0x18) = *(byte *)((longlong)param_1 + 0x18) | 0xe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPhysicsControlLimbBones> @ 14d9b26b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlLimbBones>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x18) = *(byte *)((longlong)param_1 + 0x18) & 0xfe;
  *(byte *)((longlong)param_1 + 0x18) = *(byte *)((longlong)param_1 + 0x18) | 0xe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPhysicsControlLimbBones> @ 14d9b26d0

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlLimbBones>(void *param_1)

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

// Copy<FPhysicsControlLimbBones> @ 14d9b2730

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlLimbBones>(void *param_1,void *param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar2 + 8));
      bVar1 = (*(byte *)((longlong)param_1 + 0x18) ^ *(byte *)((longlong)param_1 + lVar2 + 0x18)) &
              1 ^ *(byte *)((longlong)param_1 + 0x18);
      *(byte *)((longlong)param_1 + 0x18) = bVar1;
      bVar1 = (bVar1 ^ *(byte *)((longlong)param_1 + lVar2 + 0x18)) & 2 ^ bVar1;
      *(byte *)((longlong)param_1 + 0x18) = bVar1;
      bVar1 = (bVar1 ^ *(byte *)((longlong)param_1 + lVar2 + 0x18)) & 4 ^ bVar1;
      *(byte *)((longlong)param_1 + 0x18) = bVar1;
      *(byte *)((longlong)param_1 + 0x18) =
           (bVar1 ^ *(byte *)((longlong)param_1 + lVar2 + 0x18)) & 8 ^ bVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlModifierSparseData> @ 14d9b2ef0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlModifierSparseData>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 0x7f;
  *(undefined2 *)param_1 = 0x302;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 2;
  return;
}

// ConstructForTests<FPhysicsControlModifierSparseData> @ 14d9b2f60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlModifierSparseData>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0xd) = *(byte *)((longlong)param_1 + 0xd) | 0x7f;
  *(undefined2 *)param_1 = 0x302;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 2;
  return;
}

// Destruct<FPhysicsControlModifierSparseData> @ 14d9b2f90

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlModifierSparseData>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlModifierSparseData> @ 14d9b3020

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlModifierSparseData>
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

// Construct<FPhysicsControlLimbSetupData> @ 14d9b3170

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlLimbSetupData>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) & 0xfe;
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 0xe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FPhysicsControlLimbSetupData> @ 14d9b3190

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlLimbSetupData>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) & 0xfe;
  *(byte *)((longlong)param_1 + 0x10) = *(byte *)((longlong)param_1 + 0x10) | 0xe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FPhysicsControlLimbSetupData> @ 14d9b3200

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlLimbSetupData>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlLimbSetupData> @ 14d9b3220

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlLimbSetupData>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FPhysicsControlSetUpdates> @ 14d9b3510

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlSetUpdates>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FPhysicsControlSetUpdates> @ 14d9b3530

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSetUpdates>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FPhysicsControlSetUpdates> @ 14d9b3590

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlSetUpdates>(void *param_1)

{
  DestructItems<FPhysicsControlSetUpdate,int>
            (*(FPhysicsControlSetUpdate **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            (*(FPhysicsControlSetUpdate **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FPhysicsControlSetUpdates> @ 14d9b35e0

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlSetUpdates>(void *param_1,void *param_2,int param_3)

{
  TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::operator=(this,pTVar1);
      TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::operator=(this + 1,pTVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlAndBodyModifierCreationDatas> @ 14d9b3bb0

void __cdecl
UE::CoreUObject::Private::Construct<FPhysicsControlAndBodyModifierCreationDatas>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// ConstructForTests<FPhysicsControlAndBodyModifierCreationDatas> @ 14d9b3c30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlAndBodyModifierCreationDatas>
          (void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FPhysicsControlAndBodyModifierCreationDatas> @ 14d9b3ca0

void __cdecl
UE::CoreUObject::Private::Destruct<FPhysicsControlAndBodyModifierCreationDatas>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FPhysicsControlAndBodyModifierCreationDatas> @ 14d9b3d70

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlAndBodyModifierCreationDatas>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
      ::operator=(this,pTVar1);
      TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
                   *)(this + 1),
                  (TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
                   *)(pTVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlSetUpdate> @ 14d9b3ff0

void __cdecl UE::CoreUObject::Private::Construct<FPhysicsControlSetUpdate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPhysicsControlSetUpdate> @ 14d9b4030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPhysicsControlSetUpdate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPhysicsControlSetUpdate> @ 14d9b4050

void __cdecl UE::CoreUObject::Private::Destruct<FPhysicsControlSetUpdate>(void *param_1)

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

// Copy<FPhysicsControlSetUpdate> @ 14d9b4070

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlSetUpdate>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FName,TSizedDefaultAllocator<32>_> *)(puVar1 + 1),
                 (TArray<FName,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPhysicsControlControlAndModifierUpdates> @ 14d9b4240

void __cdecl
UE::CoreUObject::Private::Construct<FPhysicsControlControlAndModifierUpdates>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FPhysicsControlControlAndModifierUpdates> @ 14d9b4270

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlControlAndModifierUpdates>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FPhysicsControlControlAndModifierUpdates> @ 14d9b42b0

void __cdecl
UE::CoreUObject::Private::Destruct<FPhysicsControlControlAndModifierUpdates>(void *param_1)

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

// Copy<FPhysicsControlControlAndModifierUpdates> @ 14d9b4390

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlControlAndModifierUpdates>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
              (param_1,param_2);
    TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>
                *)((longlong)param_1 + 0x10),
               (TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>
                *)((longlong)param_2 + 0x10));
    TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FPhysicsControlControlAndModifierParameters> @ 14d9b4650

void __cdecl
UE::CoreUObject::Private::Construct<FPhysicsControlControlAndModifierParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FPhysicsControlControlAndModifierParameters> @ 14d9b4670

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlControlAndModifierParameters>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FPhysicsControlControlAndModifierParameters> @ 14d9b4690

void __cdecl
UE::CoreUObject::Private::Destruct<FPhysicsControlControlAndModifierParameters>(void *param_1)

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

// Copy<FPhysicsControlControlAndModifierParameters> @ 14d9b4730

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlControlAndModifierParameters>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
              (param_1,param_2);
    TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>
                *)((longlong)param_1 + 0x10),
               (TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>
                *)((longlong)param_2 + 0x10));
    TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FPhysicsControlNamedModifierParameters> @ 14d9b4a90

void __cdecl
UE::CoreUObject::Private::Construct<FPhysicsControlNamedModifierParameters>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x15) = *(byte *)((longlong)param_1 + 0x15) | 0x7f;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0x302;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 2;
  return;
}

// ConstructForTests<FPhysicsControlNamedModifierParameters> @ 14d9b4ac0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNamedModifierParameters>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x15) = *(byte *)((longlong)param_1 + 0x15) | 0x7f;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0x302;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 2;
  return;
}

// Destruct<FPhysicsControlNamedModifierParameters> @ 14d9b4b30

void __cdecl
UE::CoreUObject::Private::Destruct<FPhysicsControlNamedModifierParameters>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlNamedModifierParameters> @ 14d9b4b50

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlNamedModifierParameters>
          (void *param_1,void *param_2,int param_3)

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

// Construct<FPhysicsControlNamedControlMultiplierParameters> @ 14d9b4e50

void __cdecl
UE::CoreUObject::Private::Construct<FPhysicsControlNamedControlMultiplierParameters>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0xff;
  return;
}

// ConstructForTests<FPhysicsControlNamedControlMultiplierParameters> @ 14d9b4ec0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPhysicsControlNamedControlMultiplierParameters>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0xff;
  return;
}

// Destruct<FPhysicsControlNamedControlMultiplierParameters> @ 14d9b4f40

void __cdecl
UE::CoreUObject::Private::Destruct<FPhysicsControlNamedControlMultiplierParameters>(void *param_1)

{
  return;
}

// Copy<FPhysicsControlNamedControlMultiplierParameters> @ 14d9b5050

bool __cdecl
UE::CoreUObject::Private::Copy<FPhysicsControlNamedControlMultiplierParameters>
          (void *param_1,void *param_2,int param_3)

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
  longlong lVar17;
  
  if (param_3 != 0) {
    lVar17 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar17 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar17 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x70 + (longlong)param_1);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar17 + (longlong)param_1);
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
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar16;
      param_1 = (void *)((longlong)param_1 + 0x80);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigidBodyWithControlReference> @ 14d9b5490

void __cdecl UE::CoreUObject::Private::Construct<FRigidBodyWithControlReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FRigidBodyWithControlReference> @ 14d9b54c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRigidBodyWithControlReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FRigidBodyWithControlReference> @ 14d9b54d0

void __cdecl UE::CoreUObject::Private::Destruct<FRigidBodyWithControlReference>(void *param_1)

{
  return;
}

// ConvertSpringToStrengthParams<float> @ 14d9b6530

void __cdecl
UE::PhysicsControl::ConvertSpringToStrengthParams<float>
          (float *param_1,float *param_2,float *param_3,double param_4,double param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)SQRT(param_4);
  fVar2 = fVar3 + fVar3;
  *param_1 = fVar3 * __real_3e22f983;
  *param_2 = 1.0;
  fVar1 = (float)param_5;
  if (param_5 <= (double)fVar2) {
    if (0.0 < fVar3) {
      *param_3 = 0.0;
      *param_2 = fVar1 / fVar2;
      return;
    }
  }
  else {
    fVar1 = fVar1 - fVar2;
  }
  *param_3 = fVar1;
  return;
}

// ConvertStrengthToSpringParams<float> @ 14d9b65a0

void __cdecl
UE::PhysicsControl::ConvertStrengthToSpringParams<float>
          (float *param_1,float *param_2,double param_3,double param_4,double param_5)

{
  float fVar1;
  
  fVar1 = (float)(param_3 * __real_401921fb54442d18);
  *param_1 = fVar1 * fVar1;
  *param_2 = (float)((param_4 + param_4) * (double)fVar1 + param_5);
  return;
}

// ConvertStrengthToSpringParams<double> @ 14d9b65e0

void __cdecl
UE::PhysicsControl::ConvertStrengthToSpringParams<double>
          (double *param_1,double *param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = param_3 * param_4 * __real_402921fb54442d18;
  *param_1 = param_3 * param_3 * __real_4043bd3cc9be45de;
  *param_2 = dVar1 + param_5;
  return;
}

// CreateAdditionalSets_Implementation<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_> @ 14d9b73d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateAdditionalSets_Implementation<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>
          (FPhysicsControlSetUpdates *param_1,
          TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
          *param_2,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
                   *param_3,FPhysicsControlNameRecords *param_4)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  FName *pFVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  undefined1 local_88 [4];
  uint local_84;
  FName local_80;
  FName *local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  
  local_84 = (param_1->ControlSetUpdates).ArrayNum;
  uVar10 = (ulonglong)(int)local_84;
  pFVar7 = (FName *)(param_1->ControlSetUpdates).AllocatorInstance.Data;
  local_78 = pFVar7 + uVar10 * 3;
  do {
    pFVar8 = local_78;
    if ((param_1->ControlSetUpdates).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_88);
    }
    if (pFVar7 == pFVar8) {
      local_84 = (param_1->ModifierSetUpdates).ArrayNum;
      uVar10 = (ulonglong)(int)local_84;
      pFVar8 = (FName *)(param_1->ModifierSetUpdates).AllocatorInstance.Data;
      pFVar7 = pFVar8 + uVar10 * 3;
      local_78 = pFVar7;
      do {
        if ((param_1->ModifierSetUpdates).ArrayNum != (int)uVar10) {
          `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_88);
        }
        if (pFVar8 == pFVar7) {
          return;
        }
        ExpandNames(&local_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
                    &param_4->BodyModifierSets);
        iVar5 = local_70.ArrayNum;
        pFVar1 = (FName *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
        FVar9.Data = local_70.AllocatorInstance.Data;
LAB_14d9b7600:
        if (local_70.ArrayNum != iVar5) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88)
          ;
        }
        pFVar7 = local_78;
        if ((FName *)FVar9.Data != pFVar1) {
          FVar2 = *(FName *)FVar9.Data;
          local_80 = FVar2;
          uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
            puVar6 = &param_2->field_0x38;
            if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
              puVar6 = *(undefined1 **)&param_2->field_0x40;
            }
            iVar4 = *(int *)(puVar6 + (ulonglong)
                                      (*(int *)&param_2->field_0x48 - 1U & FVar2.Number + uVar3) * 4
                            );
            if (iVar4 != -1) {
              do {
                if (*(FName *)(*(longlong *)param_2 + (longlong)iVar4 * 0x90) == FVar2) {
                  FPhysicsControlNameRecords::AddBodyModifier(param_4,local_80,*pFVar8);
                  FVar9.Data = FVar9.Data + 8;
                  goto LAB_14d9b7600;
                }
                iVar4 = *(int *)(*(longlong *)param_2 + 0x80 + (longlong)iVar4 * 0x90);
              } while (iVar4 != -1);
            }
          }
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(pFVar8,&local_60);
            ::FName::ToString(&local_80,&local_50);
            Logging::Private::BasicLog<3>
                      (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                        ::__l38::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          FVar9.Data = FVar9.Data + 8;
          goto LAB_14d9b7600;
        }
        uVar10 = (ulonglong)local_84;
        if ((FName *)local_70.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
        pFVar8 = pFVar8 + 3;
      } while( true );
    }
    ExpandNames(&local_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1),
                &param_4->ControlSets);
    iVar5 = local_70.ArrayNum;
    pFVar8 = (FName *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
    FVar9.Data = local_70.AllocatorInstance.Data;
LAB_14d9b7460:
    if (local_70.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88);
    }
    if ((FName *)FVar9.Data != pFVar8) {
      FVar2 = *(FName *)FVar9.Data;
      local_80 = FVar2;
      uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar6 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_3->field_0x40;
        }
        iVar4 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&param_3->field_0x48 - 1U & FVar2.Number + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            if (*(FName *)((longlong)iVar4 * 0x1d0 + *(longlong *)param_3) == FVar2) {
              FPhysicsControlNameRecords::AddControl(param_4,local_80,*pFVar7);
              FVar9.Data = FVar9.Data + 8;
              goto LAB_14d9b7460;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x1d0 + 0x1c0 + *(longlong *)param_3);
          } while (iVar4 != -1);
        }
      }
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(pFVar7,&local_50);
        ::FName::ToString(&local_80,&local_60);
        Logging::Private::BasicLog<3>
                  (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      FVar9.Data = FVar9.Data + 8;
      goto LAB_14d9b7460;
    }
    uVar10 = (ulonglong)local_84;
    if ((FName *)local_70.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 3;
  } while( true );
}

// CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_> @ 14d9b7780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>
          (FPhysicsControlSetUpdates *param_1,
          TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
          *param_2,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *param_3,FPhysicsControlNameRecords *param_4)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  FName *pFVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  undefined1 local_88 [4];
  uint local_84;
  FName local_80;
  FName *local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  
  local_84 = (param_1->ControlSetUpdates).ArrayNum;
  uVar10 = (ulonglong)(int)local_84;
  pFVar7 = (FName *)(param_1->ControlSetUpdates).AllocatorInstance.Data;
  local_78 = pFVar7 + uVar10 * 3;
  do {
    pFVar8 = local_78;
    if ((param_1->ControlSetUpdates).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_88);
    }
    if (pFVar7 == pFVar8) {
      local_84 = (param_1->ModifierSetUpdates).ArrayNum;
      uVar10 = (ulonglong)(int)local_84;
      pFVar8 = (FName *)(param_1->ModifierSetUpdates).AllocatorInstance.Data;
      pFVar7 = pFVar8 + uVar10 * 3;
      local_78 = pFVar7;
      do {
        if ((param_1->ModifierSetUpdates).ArrayNum != (int)uVar10) {
          `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_88);
        }
        if (pFVar8 == pFVar7) {
          return;
        }
        ExpandNames(&local_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
                    &param_4->BodyModifierSets);
        iVar5 = local_70.ArrayNum;
        pFVar1 = (FName *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
        FVar9.Data = local_70.AllocatorInstance.Data;
LAB_14d9b79b0:
        if (local_70.ArrayNum != iVar5) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88)
          ;
        }
        pFVar7 = local_78;
        if ((FName *)FVar9.Data != pFVar1) {
          FVar2 = *(FName *)FVar9.Data;
          local_80 = FVar2;
          uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
            puVar6 = &param_2->field_0x38;
            if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
              puVar6 = *(undefined1 **)&param_2->field_0x40;
            }
            iVar4 = *(int *)(puVar6 + (ulonglong)
                                      (*(int *)&param_2->field_0x48 - 1U & FVar2.Number + uVar3) * 4
                            );
            if (iVar4 != -1) {
              do {
                if (*(FName *)((longlong)iVar4 * 0x40 + *(longlong *)param_2) == FVar2) {
                  FPhysicsControlNameRecords::AddBodyModifier(param_4,local_80,*pFVar8);
                  FVar9.Data = FVar9.Data + 8;
                  goto LAB_14d9b79b0;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + *(longlong *)param_2);
              } while (iVar4 != -1);
            }
          }
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(pFVar8,&local_60);
            ::FName::ToString(&local_80,&local_50);
            Logging::Private::BasicLog<3>
                      (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                        ::__l38::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          FVar9.Data = FVar9.Data + 8;
          goto LAB_14d9b79b0;
        }
        uVar10 = (ulonglong)local_84;
        if ((FName *)local_70.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
        pFVar8 = pFVar8 + 3;
      } while( true );
    }
    ExpandNames(&local_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1),
                &param_4->ControlSets);
    iVar5 = local_70.ArrayNum;
    pFVar8 = (FName *)(local_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
    FVar9.Data = local_70.AllocatorInstance.Data;
LAB_14d9b7810:
    if (local_70.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88);
    }
    if ((FName *)FVar9.Data != pFVar8) {
      FVar2 = *(FName *)FVar9.Data;
      local_80 = FVar2;
      uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar6 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_3->field_0x40;
        }
        iVar4 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&param_3->field_0x48 - 1U & FVar2.Number + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            if (*(FName *)((longlong)iVar4 * 0x240 + *(longlong *)param_3) == FVar2) {
              FPhysicsControlNameRecords::AddControl(param_4,local_80,*pFVar7);
              FVar9.Data = FVar9.Data + 8;
              goto LAB_14d9b7810;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x240 + 0x230 + *(longlong *)param_3);
          } while (iVar4 != -1);
        }
      }
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(pFVar7,&local_50);
        ::FName::ToString(&local_80,&local_60);
        Logging::Private::BasicLog<3>
                  (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      FVar9.Data = FVar9.Data + 8;
      goto LAB_14d9b7810;
    }
    uVar10 = (ulonglong)local_84;
    if ((FName *)local_70.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 3;
  } while( true );
}

// CreateAdditionalSets_Implementation<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> @ 14d9b7b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::
CreateAdditionalSets_Implementation<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          (FPhysicsControlSetUpdates *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3,
          FPhysicsControlNameRecords *param_4)

{
  FName *pFVar1;
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  undefined1 local_88 [4];
  uint local_84;
  FName local_80;
  FName *local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  
  local_84 = (param_1->ControlSetUpdates).ArrayNum;
  uVar11 = (ulonglong)(int)local_84;
  pFVar8 = (FName *)(param_1->ControlSetUpdates).AllocatorInstance.Data;
  local_78 = pFVar8 + uVar11 * 3;
  do {
    pFVar9 = local_78;
    if ((param_1->ControlSetUpdates).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_88);
    }
    if (pFVar8 == pFVar9) {
      local_84 = (param_1->ModifierSetUpdates).ArrayNum;
      uVar11 = (ulonglong)(int)local_84;
      pFVar9 = (FName *)(param_1->ModifierSetUpdates).AllocatorInstance.Data;
      pFVar8 = pFVar9 + uVar11 * 3;
      local_78 = pFVar8;
      do {
        if ((param_1->ModifierSetUpdates).ArrayNum != (int)uVar11) {
          `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_88);
        }
        if (pFVar9 == pFVar8) {
          return;
        }
        ExpandNames(&local_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar9 + 1),
                    &param_4->BodyModifierSets);
        iVar6 = local_70.ArrayNum;
        pFVar1 = (FName *)(local_70.AllocatorInstance.Data + (longlong)iVar6 * 8);
        FVar10.Data = local_70.AllocatorInstance.Data;
LAB_14d9b7d48:
        if (local_70.ArrayNum != iVar6) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88)
          ;
        }
        pFVar8 = local_78;
        if ((FName *)FVar10.Data != pFVar1) {
          FVar2 = *(FName *)FVar10.Data;
          local_80 = FVar2;
          uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
            FVar3 = (param_2->Hash).SecondaryData;
            FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar7 = FVar3;
            }
            iVar5 = *(int *)((longlong)FVar7 +
                            (ulonglong)(param_2->HashSize - 1U & FVar2.Number + uVar4) * 4);
            if (iVar5 != -1) {
              do {
                if (*(FName *)(*(longlong *)&param_2->Elements + (longlong)iVar5 * 0x10) == FVar2) {
                  FPhysicsControlNameRecords::AddBodyModifier(param_4,local_80,*pFVar9);
                  FVar10.Data = FVar10.Data + 8;
                  goto LAB_14d9b7d48;
                }
                iVar5 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar5 * 0x10);
              } while (iVar5 != -1);
            }
          }
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(pFVar9,&local_60);
            ::FName::ToString(&local_80,&local_50);
            Logging::Private::BasicLog<3>
                      (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TSet<class_FName,struct_DefaultKeyFuncs<class_FName,0>,class_FDefaultSetAllocator>_>(FPhysicsControlSetUpdates_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                        ::__l38::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
            if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60.Data.AllocatorInstance.Data);
            }
          }
          FVar10.Data = FVar10.Data + 8;
          goto LAB_14d9b7d48;
        }
        uVar11 = (ulonglong)local_84;
        if ((FName *)local_70.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
        pFVar9 = pFVar9 + 3;
      } while( true );
    }
    ExpandNames(&local_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
                &param_4->ControlSets);
    iVar6 = local_70.ArrayNum;
    pFVar9 = (FName *)(local_70.AllocatorInstance.Data + (longlong)iVar6 * 8);
    FVar10.Data = local_70.AllocatorInstance.Data;
LAB_14d9b7bb0:
    if (local_70.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88);
    }
    if ((FName *)FVar10.Data != pFVar9) {
      FVar2 = *(FName *)FVar10.Data;
      local_80 = FVar2;
      uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar3 = (param_3->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        iVar5 = *(int *)((longlong)FVar7 +
                        (ulonglong)(param_3->HashSize - 1U & FVar2.Number + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            if (*(FName *)(*(longlong *)&param_3->Elements + (longlong)iVar5 * 0x10) == FVar2) {
              FPhysicsControlNameRecords::AddControl(param_4,local_80,*pFVar8);
              FVar10.Data = FVar10.Data + 8;
              goto LAB_14d9b7bb0;
            }
            iVar5 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar5 * 0x10);
          } while (iVar5 != -1);
        }
      }
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(pFVar8,&local_50);
        ::FName::ToString(&local_80,&local_60);
        Logging::Private::BasicLog<3>
                  (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TSet<class_FName,struct_DefaultKeyFuncs<class_FName,0>,class_FDefaultSetAllocator>_>(FPhysicsControlSetUpdates_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      FVar10.Data = FVar10.Data + 8;
      goto LAB_14d9b7bb0;
    }
    uVar11 = (ulonglong)local_84;
    if ((FName *)local_70.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 3;
  } while( true );
}

// DoesNameExist<FPhysicsBodyModifierRecord> @ 14d9b8cf0

bool __cdecl
UE::PhysicsControl::DoesNameExist<FPhysicsBodyModifierRecord>
          (FName param_1,
          TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
          *param_2)

{
  FPhysicsBodyModifierRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
           ::Find((TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
                   *)param_2,param_1);
  return pFVar1 != (FPhysicsBodyModifierRecord *)0x0;
}

// DoesNameExist<FPhysicsControlRecord> @ 14d9b8d20

bool __cdecl
UE::PhysicsControl::DoesNameExist<FPhysicsControlRecord>
          (FName param_1,
          TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
          *param_2)

{
  FPhysicsControlRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
           ::Find((TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
                   *)param_2,param_1);
  return pFVar1 != (FPhysicsControlRecord *)0x0;
}

// DoesNameExist<FRigidBodyControlRecord> @ 14d9b8d50

bool __cdecl
UE::PhysicsControl::DoesNameExist<FRigidBodyControlRecord>
          (FName param_1,
          TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
          *param_2)

{
  FRigidBodyControlRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
           ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *)param_2,param_1);
  return pFVar1 != (FRigidBodyControlRecord *)0x0;
}

// DoesNameExist<FRigidBodyModifierRecord> @ 14d9b8d80

bool __cdecl
UE::PhysicsControl::DoesNameExist<FRigidBodyModifierRecord>
          (FName param_1,
          TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
          *param_2)

{
  FRigidBodyModifierRecord *pFVar1;
  
  pFVar1 = TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
           ::Find((TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                   *)param_2,param_1);
  return pFVar1 != (FRigidBodyModifierRecord *)0x0;
}

// GetUniqueBodyModifierName<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14d9bb240

FName __cdecl
UE::PhysicsControl::GetUniqueBodyModifierName<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  int iVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *in_R9;
  FName local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  local_38.ArrayNum = *(int *)(in_R9 + 1);
  lVar3 = (longlong)local_38.ArrayNum;
  _Src = (void *)*in_R9;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10 = (FName)param_2;
  if (local_38.ArrayNum == 0) {
    local_38.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
               &local_38.ArrayMax);
    memcpy(local_38.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  if (local_res10 == (FName)0x0) {
    ::FString::operator=((FString *)&local_38,L"Body");
  }
  else {
    pFVar2 = ::FName::ToString(&local_res10,&local_28);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              ((FString *)&local_38,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  GetUniqueName<TArray<FName,TSizedDefaultAllocator<32>_>_>
            ((FString *)param_1,&local_38,(int)param_3);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return param_1;
}

// GetUniqueBodyModifierName<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_> @ 14d9bb360

FName __cdecl
UE::PhysicsControl::
GetUniqueBodyModifierName<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_>
          (FName param_1,
          TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
          *param_2,FString *param_3)

{
  int iVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *in_R9;
  FName local_res10;
  undefined1 local_38 [16];
  FString local_28;
  
  local_38._8_4_ = *(undefined4 *)(in_R9 + 1);
  lVar3 = (longlong)(int)local_38._8_4_;
  _Src = (void *)*in_R9;
  local_38._0_8_ = (FScriptContainerElement *)0x0;
  local_res10 = (FName)param_2;
  if (local_38._8_4_ == 0) {
    local_38._12_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38._8_4_,0,(ForAnyElementType *)local_38,local_38._8_4_,
               (int *)(local_38 + 0xc));
    memcpy((void *)local_38._0_8_,_Src,lVar3 * 2);
  }
  if (local_res10 == (FName)0x0) {
    ::FString::operator=((FString *)local_38,L"Body");
  }
  else {
    pFVar2 = ::FName::ToString(&local_res10,&local_28);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              ((FString *)local_38,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  GetUniqueName<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_>
            ((FString *)param_1,
             (TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
              *)local_38,(int)param_3);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return param_1;
}

// GetUniqueBodyModifierName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_> @ 14d9bb480

FName __cdecl
UE::PhysicsControl::
GetUniqueBodyModifierName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_>
          (FName param_1,
          TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
          *param_2,FString *param_3)

{
  int iVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *in_R9;
  FName local_res10;
  undefined1 local_38 [16];
  FString local_28;
  
  local_38._8_4_ = *(undefined4 *)(in_R9 + 1);
  lVar3 = (longlong)(int)local_38._8_4_;
  _Src = (void *)*in_R9;
  local_38._0_8_ = (FScriptContainerElement *)0x0;
  local_res10 = (FName)param_2;
  if (local_38._8_4_ == 0) {
    local_38._12_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38._8_4_,0,(ForAnyElementType *)local_38,local_38._8_4_,
               (int *)(local_38 + 0xc));
    memcpy((void *)local_38._0_8_,_Src,lVar3 * 2);
  }
  if (local_res10 == (FName)0x0) {
    ::FString::operator=((FString *)local_38,L"Body");
  }
  else {
    pFVar2 = ::FName::ToString(&local_res10,&local_28);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              ((FString *)local_38,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  GetUniqueName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_>
            ((FString *)param_1,
             (TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
              *)local_38,(int)param_3);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return param_1;
}

// GetUniqueControlName<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14d9bb5a0

FName __cdecl
UE::PhysicsControl::GetUniqueControlName<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FName param_1,FName param_2,TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          FString *param_4)

{
  int iVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  int iVar4;
  FName local_res10;
  FName local_res18 [2];
  undefined8 *in_stack_00000028;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = *(int *)(in_stack_00000028 + 1);
  lVar3 = (longlong)local_58.ArrayNum;
  _Src = (void *)*in_stack_00000028;
  local_res10 = param_2;
  local_res18[0] = (FName)param_3;
  if (local_58.ArrayNum == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
               &local_58.ArrayMax);
    memcpy(local_58.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  if (local_res10 != (FName)0x0) {
    pFVar2 = ::FName::ToString(&local_res10,&local_38);
    ::FString::ConcatFC(&local_48,pFVar2,L"_");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              ((FString *)&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_res18[0] != (FName)0x0) {
    pFVar2 = ::FName::ToString(local_res18,&local_38);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              ((FString *)&local_58,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  GetUniqueName<TArray<FName,TSizedDefaultAllocator<32>_>_>
            ((FString *)param_1,&local_58,(int)param_4);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return param_1;
}

// GetUniqueControlName<TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_> @ 14d9bb700

FName __cdecl
UE::PhysicsControl::
GetUniqueControlName<TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>
          (FName param_1,FName param_2,
          TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
          *param_3,FString *param_4)

{
  int iVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  int iVar4;
  FName local_res10;
  FName local_res18 [2];
  undefined8 *in_stack_00000028;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = *(int *)(in_stack_00000028 + 1);
  lVar3 = (longlong)local_58.Data.ArrayNum;
  _Src = (void *)*in_stack_00000028;
  local_res10 = param_2;
  local_res18[0] = (FName)param_3;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  if (local_res10 != (FName)0x0) {
    pFVar2 = ::FName::ToString(&local_res10,&local_38);
    ::FString::ConcatFC(&local_48,pFVar2,L"_");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_res18[0] != (FName)0x0) {
    pFVar2 = ::FName::ToString(local_res18,&local_38);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  GetUniqueName<TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>
            ((FString *)param_1,
             (TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
              *)&local_58,(int)param_4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetUniqueControlName<TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_> @ 14d9bb860

FName __cdecl
UE::PhysicsControl::
GetUniqueControlName<TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>
          (FName param_1,FName param_2,
          TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
          *param_3,FString *param_4)

{
  int iVar1;
  void *_Src;
  FString *pFVar2;
  longlong lVar3;
  int iVar4;
  FName local_res10;
  FName local_res18 [2];
  undefined8 *in_stack_00000028;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = *(int *)(in_stack_00000028 + 1);
  lVar3 = (longlong)local_58.Data.ArrayNum;
  _Src = (void *)*in_stack_00000028;
  local_res10 = param_2;
  local_res18[0] = (FName)param_3;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  if (local_res10 != (FName)0x0) {
    pFVar2 = ::FName::ToString(&local_res10,&local_38);
    ::FString::ConcatFC(&local_48,pFVar2,L"_");
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_res18[0] != (FName)0x0) {
    pFVar2 = ::FName::ToString(local_res18,&local_38);
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_58,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  GetUniqueName<TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>
            ((FString *)param_1,
             (TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
              *)&local_58,(int)param_4);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetUniqueName<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14d9bb9c0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UE::PhysicsControl::GetUniqueName<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (FString *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 in_register_00000084;
  int in_R9D;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  local_a0 = param_2->ArrayNum;
  lVar7 = (longlong)local_a0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
    iVar6 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pFVar1,lVar7 * 2);
    iVar6 = local_a0;
  }
  iVar8 = 0;
  if (0 < in_R9D) {
    do {
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName(&local_res10,iVar5,(wchar_t *)local_a8.Data,FNAME_Add);
      pFVar2 = *(FName **)CONCAT44(in_register_00000084,param_3);
      pFVar4 = pFVar2;
      while( true ) {
        if (pFVar4 == pFVar2 + (int)((longlong *)CONCAT44(in_register_00000084,param_3))[1])
        goto LAB_14d9bbaa0;
        if (*pFVar4 == *pFVar3) break;
        pFVar4 = pFVar4 + 1;
      }
      if ((int)((longlong)pFVar4 - (longlong)pFVar2 >> 3) == -1) {
LAB_14d9bbaa0:
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*pFVar3;
        goto LAB_14d9bbc1e;
      }
      local_88.Data.ArrayNum = param_2->ArrayNum;
      lVar7 = (longlong)local_88.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (param_2->AllocatorInstance).Data;
      if (local_88.Data.ArrayNum == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   local_88.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,pFVar1,lVar7 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_68,&local_88);
      FStringFormatArg::FStringFormatArg(&local_48,iVar8);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_78,L"{0}_{1}",&local_98);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_a8.Data = local_78.Data.AllocatorInstance.Data;
      local_a0 = local_78.Data.ArrayNum;
      local_9c = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar8 + 1;
      iVar6 = local_a0;
    } while (iVar8 < in_R9D);
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    Logging::Private::BasicLog<3>
              (&`class_FName___cdecl_UE::PhysicsControl::GetUniqueName<TArray<FName,TSizedDefaultAllocator<32>_>_>(FString_const&___ptr64,TArray<FName,TSizedDefaultAllocator<32>_>_const&___ptr64,int)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14d9bbc1e:
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return (FName)param_1;
}

// GetUniqueName<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_> @ 14d9bbc60

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UE::PhysicsControl::
GetUniqueName<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_>
          (FString *param_1,
          TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
          *param_2,int param_3)

{
  void *pvVar1;
  FName FVar2;
  FName *pFVar3;
  FPhysicsBodyModifierRecord *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 in_register_00000084;
  int in_R9D;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  local_a0 = *(int *)&param_2->field_0x8;
  lVar7 = (longlong)local_a0;
  iVar8 = 0;
  pvVar1 = *(void **)param_2;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
    iVar6 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pvVar1,lVar7 * 2);
    iVar6 = local_a0;
  }
  if (0 < in_R9D) {
    do {
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName(&local_res10,iVar5,(wchar_t *)local_a8.Data,FNAME_Add);
      FVar2 = *pFVar3;
      pFVar4 = TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
               ::Find((TMapBase<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
                       *)CONCAT44(in_register_00000084,param_3),FVar2);
      if (pFVar4 == (FPhysicsBodyModifierRecord *)0x0) {
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
        goto LAB_14d9bbe92;
      }
      local_88.Data.ArrayNum = *(int *)&param_2->field_0x8;
      lVar7 = (longlong)local_88.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar1 = *(void **)param_2;
      if (local_88.Data.ArrayNum == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   local_88.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_68,&local_88);
      FStringFormatArg::FStringFormatArg(&local_48,iVar8);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_78,L"{0}_{1}",&local_98);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_a8.Data = local_78.Data.AllocatorInstance.Data;
      local_a0 = local_78.Data.ArrayNum;
      local_9c = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar8 + 1;
      iVar6 = local_a0;
    } while (iVar8 < in_R9D);
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    Logging::Private::BasicLog<3>
              (&`class_FName___cdecl_UE::PhysicsControl::GetUniqueName<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_>(FString_const&___ptr64,TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_const&___ptr64,int)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14d9bbe92:
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return (FName)param_1;
}

// GetUniqueName<TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_> @ 14d9bbed0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UE::PhysicsControl::
GetUniqueName<TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>
          (FString *param_1,
          TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
          *param_2,int param_3)

{
  void *pvVar1;
  FName FVar2;
  FName *pFVar3;
  FPhysicsControlRecord *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 in_register_00000084;
  int in_R9D;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  local_a0 = *(int *)&param_2->field_0x8;
  lVar7 = (longlong)local_a0;
  iVar8 = 0;
  pvVar1 = *(void **)param_2;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
    iVar6 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pvVar1,lVar7 * 2);
    iVar6 = local_a0;
  }
  if (0 < in_R9D) {
    do {
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName(&local_res10,iVar5,(wchar_t *)local_a8.Data,FNAME_Add);
      FVar2 = *pFVar3;
      pFVar4 = TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
               ::Find((TMapBase<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
                       *)CONCAT44(in_register_00000084,param_3),FVar2);
      if (pFVar4 == (FPhysicsControlRecord *)0x0) {
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
        goto LAB_14d9bc102;
      }
      local_88.Data.ArrayNum = *(int *)&param_2->field_0x8;
      lVar7 = (longlong)local_88.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar1 = *(void **)param_2;
      if (local_88.Data.ArrayNum == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   local_88.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_68,&local_88);
      FStringFormatArg::FStringFormatArg(&local_48,iVar8);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_78,L"{0}_{1}",&local_98);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_a8.Data = local_78.Data.AllocatorInstance.Data;
      local_a0 = local_78.Data.ArrayNum;
      local_9c = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar8 + 1;
      iVar6 = local_a0;
    } while (iVar8 < in_R9D);
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    Logging::Private::BasicLog<3>
              (&`class_FName___cdecl_UE::PhysicsControl::GetUniqueName<TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>(FString_const&___ptr64,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_const&___ptr64,int)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14d9bc102:
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return (FName)param_1;
}

// GetUniqueName<TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_> @ 14d9bc140

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UE::PhysicsControl::
GetUniqueName<TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>
          (FString *param_1,
          TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
          *param_2,int param_3)

{
  void *pvVar1;
  FName FVar2;
  FName *pFVar3;
  FRigidBodyControlRecord *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 in_register_00000084;
  int in_R9D;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  local_a0 = *(int *)&param_2->field_0x8;
  lVar7 = (longlong)local_a0;
  iVar8 = 0;
  pvVar1 = *(void **)param_2;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
    iVar6 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pvVar1,lVar7 * 2);
    iVar6 = local_a0;
  }
  if (0 < in_R9D) {
    do {
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName(&local_res10,iVar5,(wchar_t *)local_a8.Data,FNAME_Add);
      FVar2 = *pFVar3;
      pFVar4 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
               ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                       *)CONCAT44(in_register_00000084,param_3),FVar2);
      if (pFVar4 == (FRigidBodyControlRecord *)0x0) {
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
        goto LAB_14d9bc372;
      }
      local_88.Data.ArrayNum = *(int *)&param_2->field_0x8;
      lVar7 = (longlong)local_88.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar1 = *(void **)param_2;
      if (local_88.Data.ArrayNum == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   local_88.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_68,&local_88);
      FStringFormatArg::FStringFormatArg(&local_48,iVar8);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_78,L"{0}_{1}",&local_98);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_a8.Data = local_78.Data.AllocatorInstance.Data;
      local_a0 = local_78.Data.ArrayNum;
      local_9c = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar8 + 1;
      iVar6 = local_a0;
    } while (iVar8 < in_R9D);
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    Logging::Private::BasicLog<3>
              (&`class_FName___cdecl_UE::PhysicsControl::GetUniqueName<TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>(FString_const&___ptr64,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_const&___ptr64,int)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14d9bc372:
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return (FName)param_1;
}

// GetUniqueName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_> @ 14d9bc3b0

/* WARNING: Enum "Type": Some values do not have unique names */

FName __cdecl
UE::PhysicsControl::
GetUniqueName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_>
          (FString *param_1,
          TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
          *param_2,int param_3)

{
  void *pvVar1;
  FName FVar2;
  FName *pFVar3;
  FRigidBodyModifierRecord *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 in_register_00000084;
  int in_R9D;
  FName local_res10;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  local_a0 = *(int *)&param_2->field_0x8;
  lVar7 = (longlong)local_a0;
  iVar8 = 0;
  pvVar1 = *(void **)param_2;
  local_a8.Data = (FScriptContainerElement *)0x0;
  if (local_a0 == 0) {
    local_9c = 0;
    iVar6 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pvVar1,lVar7 * 2);
    iVar6 = local_a0;
  }
  if (0 < in_R9D) {
    do {
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      pFVar3 = ::FName::FName(&local_res10,iVar5,(wchar_t *)local_a8.Data,FNAME_Add);
      FVar2 = *pFVar3;
      pFVar4 = TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
               ::Find((TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                       *)CONCAT44(in_register_00000084,param_3),FVar2);
      if (pFVar4 == (FRigidBodyModifierRecord *)0x0) {
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
        goto LAB_14d9bc5e2;
      }
      local_88.Data.ArrayNum = *(int *)&param_2->field_0x8;
      lVar7 = (longlong)local_88.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar1 = *(void **)param_2;
      if (local_88.Data.ArrayNum == 0) {
        local_88.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   local_88.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,pvVar1,lVar7 * 2);
      }
      FStringFormatArg::FStringFormatArg(&local_68,&local_88);
      FStringFormatArg::FStringFormatArg(&local_48,iVar8);
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 2;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_98.AllocatorInstance.Data,&local_68,2);
      ::FString::FormatImpl(&local_78,L"{0}_{1}",&local_98);
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_a8.Data = local_78.Data.AllocatorInstance.Data;
      local_a0 = local_78.Data.ArrayNum;
      local_9c = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      if ((FStringFormatArg *)local_98.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
      }
      if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar8 + 1;
      iVar6 = local_a0;
    } while (iVar8 < in_R9D);
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    Logging::Private::BasicLog<3>
              (&`class_FName___cdecl_UE::PhysicsControl::GetUniqueName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_>(FString_const&___ptr64,TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_const&___ptr64,int)'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14d9bc5e2:
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return (FName)param_1;
}

// CollectOperatorNames @ 14d9ce250

void __cdecl
UE::PhysicsControl::CollectOperatorNames
          (FPhysicsControlCharacterSetupData *param_1,
          FPhysicsControlAndBodyModifierCreationDatas *param_2,
          TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
          *param_3,FReferenceSkeleton *param_4,UPhysicsAsset *param_5,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_6,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_7,
          FPhysicsControlNameRecords *param_8)

{
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *pTVar1;
  <lambda_2> local_98;
  <lambda_1> local_90;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  local_88;
  
  local_90.ControlNames = param_7;
  local_98.BodyModifierNames = param_6;
  pTVar1 = TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
           ::
           TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                     (&local_88,param_3);
  ForEachPotentialOperator<_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_1>,_UE::PhysicsControl::CollectOperatorNames_::__l2::<lambda_2>_>
            (param_1,param_2,pTVar1,param_4,param_5,param_8,&local_90,&local_98);
  *(undefined4 *)&param_3->field_0x48 = 0;
  if (*(void **)&param_3->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_3);
  return;
}

// ConvertConstraintProfileToControlData @ 14d9cf050

void __cdecl
UE::PhysicsControl::ConvertConstraintProfileToControlData
          (FPhysicsControlData *param_1,FConstraintProfileProperties *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  
  dVar10 = 0.0;
  if ((param_2->LinearDrive).XDrive.bEnableVelocityDrive == '\0') {
    dVar8 = 0.0;
  }
  else {
    dVar8 = (double)(param_2->LinearDrive).XDrive.Damping;
  }
  if ((param_2->LinearDrive).YDrive.bEnableVelocityDrive == '\0') {
    dVar17 = 0.0;
  }
  else {
    dVar17 = (double)(param_2->LinearDrive).YDrive.Damping;
  }
  if ((param_2->LinearDrive).ZDrive.bEnableVelocityDrive == '\0') {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (double)(param_2->LinearDrive).ZDrive.Damping;
  }
  dVar8 = (dVar17 + dVar8 + dVar9) * __real_3fd5555555555555;
  if ((param_2->LinearDrive).XDrive.bEnablePositionDrive == 0) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = (double)(param_2->LinearDrive).XDrive.Stiffness;
  }
  if ((param_2->LinearDrive).YDrive.bEnablePositionDrive == 0) {
    dVar9 = 0.0;
  }
  else {
    dVar9 = (double)(param_2->LinearDrive).YDrive.Stiffness;
  }
  if ((param_2->LinearDrive).ZDrive.bEnablePositionDrive == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = (double)(param_2->LinearDrive).ZDrive.Stiffness;
  }
  auVar11._0_8_ = (dVar9 + dVar17 + dVar5) * __real_3fd5555555555555;
  auVar11._8_8_ = 0;
  auVar11 = sqrtpd(auVar11,auVar11);
  fVar18 = (float)auVar11._0_8_;
  fVar16 = fVar18 + fVar18;
  param_1->LinearStrength = fVar18 * __real_3e22f983;
  param_1->LinearDampingRatio = 1.0;
  fVar15 = (float)dVar8;
  if (dVar8 <= (double)fVar16) {
    if (fVar18 <= 0.0) goto LAB_14d9cf14e;
    param_1->LinearExtraDamping = 0.0;
    param_1->LinearDampingRatio = fVar15 / fVar16;
  }
  else {
    fVar15 = fVar15 - fVar16;
LAB_14d9cf14e:
    param_1->LinearExtraDamping = fVar15;
  }
  dVar17 = (double)(param_2->LinearDrive).YDrive.MaxForce;
  dVar9 = (double)(param_2->LinearDrive).XDrive.MaxForce;
  dVar8 = (double)(param_2->LinearDrive).ZDrive.MaxForce;
  auVar12._0_8_ = dVar9 * dVar9;
  auVar12._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar17 * dVar17 + auVar12._0_8_ + dVar8 * dVar8;
  auVar13 = sqrtpd(auVar12,auVar6);
  param_1->MaxForce = (float)auVar13._0_8_;
  if ((param_2->AngularDrive).AngularDriveMode.Value == '\0') {
    if ((param_2->AngularDrive).SlerpDrive.bEnableVelocityDrive == '\0') {
      dVar8 = 0.0;
    }
    else {
      dVar8 = (double)(param_2->AngularDrive).SlerpDrive.Damping;
    }
    if ((param_2->AngularDrive).SlerpDrive.bEnablePositionDrive != 0) {
      dVar10 = (double)(param_2->AngularDrive).SlerpDrive.Stiffness;
    }
  }
  else {
    if ((param_2->AngularDrive).TwistDrive.bEnableVelocityDrive == '\0') {
      dVar8 = 0.0;
    }
    else {
      dVar8 = (double)(param_2->AngularDrive).TwistDrive.Damping;
    }
    if ((param_2->AngularDrive).SwingDrive.bEnableVelocityDrive == '\0') {
      dVar17 = 0.0;
    }
    else {
      dVar17 = (double)(param_2->AngularDrive).SwingDrive.Damping;
    }
    dVar8 = (dVar17 + dVar8) * __real_3fe0000000000000;
    if ((param_2->AngularDrive).TwistDrive.bEnablePositionDrive == 0) {
      auVar13 = ZEXT816(0);
    }
    else {
      auVar13._0_8_ = (double)(param_2->AngularDrive).TwistDrive.Stiffness;
      auVar13._8_8_ = 0;
    }
    if ((param_2->AngularDrive).SwingDrive.bEnablePositionDrive != 0) {
      dVar10 = (double)(param_2->AngularDrive).SwingDrive.Stiffness;
    }
    dVar10 = (dVar10 + auVar13._0_8_) * __real_3fe0000000000000;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar10;
  auVar11 = sqrtpd(auVar13,auVar7);
  fVar18 = (float)auVar11._0_8_;
  fVar16 = fVar18 + fVar18;
  param_1->AngularStrength = fVar18 * __real_3e22f983;
  param_1->AngularDampingRatio = 1.0;
  fVar15 = (float)dVar8;
  if (dVar8 <= (double)fVar16) {
    if (0.0 < fVar18) {
      param_1->AngularExtraDamping = 0.0;
      param_1->AngularDampingRatio = fVar15 / fVar16;
      goto LAB_14d9cf296;
    }
  }
  else {
    fVar15 = fVar15 - fVar16;
  }
  param_1->AngularExtraDamping = fVar15;
LAB_14d9cf296:
  if ((param_2->AngularDrive).AngularDriveMode.Value == '\0') {
    dVar10 = (double)(param_2->AngularDrive).SlerpDrive.MaxForce;
  }
  else {
    dVar10 = (double)(param_2->AngularDrive).SwingDrive.MaxForce;
    dVar8 = (double)(param_2->AngularDrive).TwistDrive.MaxForce;
    auVar14._0_8_ = dVar8 * dVar8;
    auVar14._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar10 * dVar10 + auVar14._0_8_;
    auVar11 = sqrtpd(auVar14,auVar4);
    dVar10 = auVar11._0_8_;
  }
  param_1->bEnabled = true;
  param_1->MaxTorque = (float)dVar10;
  return;
}

// ConvertStrengthToSpringParams @ 14d9cf300

void __cdecl
UE::PhysicsControl::ConvertStrengthToSpringParams
          (TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = __real_402921fb54442d18;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_5->field0_0x0)._s_0.X;
  dVar4 = dVar1 * (param_4->field0_0x0)._s_0.X * __real_402921fb54442d18;
  (param_1->field0_0x0)._s_0.X = dVar1 * dVar1 * __real_4043bd3cc9be45de;
  (param_2->field0_0x0)._s_0.X = dVar4 + dVar2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar4 = (param_5->field0_0x0)._s_0.Y;
  (param_1->field0_0x0)._s_0.Y = dVar1 * dVar1 * __real_4043bd3cc9be45de;
  (param_2->field0_0x0)._s_0.Y = dVar1 * dVar2 * dVar3 + dVar4;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  dVar4 = (param_5->field0_0x0)._s_0.Z;
  (param_1->field0_0x0)._s_0.Z = dVar1 * dVar1 * __real_4043bd3cc9be45de;
  (param_2->field0_0x0)._s_0.Z = dVar1 * dVar2 * dVar3 + dVar4;
  return;
}

// CreateAdditionalSets @ 14d9cf480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::CreateAdditionalSets
          (FPhysicsControlSetUpdates *param_1,
          TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>
          *param_2,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>
                   *param_3,FPhysicsControlNameRecords *param_4)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  FName *pFVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [4];
  uint uStack_84;
  FName FStack_80;
  FName *pFStack_78;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_70;
  FString FStack_60;
  FString FStack_50;
  
  uStack_84 = (param_1->ControlSetUpdates).ArrayNum;
  uVar10 = (ulonglong)(int)uStack_84;
  pFVar7 = (FName *)(param_1->ControlSetUpdates).AllocatorInstance.Data;
  pFStack_78 = pFVar7 + uVar10 * 3;
  do {
    pFVar8 = pFStack_78;
    if ((param_1->ControlSetUpdates).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStack_88);
    }
    if (pFVar7 == pFVar8) {
      uStack_84 = (param_1->ModifierSetUpdates).ArrayNum;
      uVar10 = (ulonglong)(int)uStack_84;
      pFVar8 = (FName *)(param_1->ModifierSetUpdates).AllocatorInstance.Data;
      pFVar7 = pFVar8 + uVar10 * 3;
      pFStack_78 = pFVar7;
      do {
        if ((param_1->ModifierSetUpdates).ArrayNum != (int)uVar10) {
          `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStack_88);
        }
        if (pFVar8 == pFVar7) {
          return;
        }
        ExpandNames(&TStack_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
                    &param_4->BodyModifierSets);
        iVar5 = TStack_70.ArrayNum;
        pFVar1 = (FName *)(TStack_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
        FVar9.Data = TStack_70.AllocatorInstance.Data;
LAB_14d9b7600:
        if (TStack_70.ArrayNum != iVar5) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStack_88);
        }
        pFVar7 = pFStack_78;
        if ((FName *)FVar9.Data != pFVar1) {
          FVar2 = *(FName *)FVar9.Data;
          FStack_80 = FVar2;
          uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
            puVar6 = &param_2->field_0x38;
            if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
              puVar6 = *(undefined1 **)&param_2->field_0x40;
            }
            iVar4 = *(int *)(puVar6 + (ulonglong)
                                      (*(int *)&param_2->field_0x48 - 1U & FVar2.Number + uVar3) * 4
                            );
            if (iVar4 != -1) {
              do {
                if (*(FName *)(*(longlong *)param_2 + (longlong)iVar4 * 0x90) == FVar2) {
                  FPhysicsControlNameRecords::AddBodyModifier(param_4,FStack_80,*pFVar8);
                  FVar9.Data = FVar9.Data + 8;
                  goto LAB_14d9b7600;
                }
                iVar4 = *(int *)(*(longlong *)param_2 + 0x80 + (longlong)iVar4 * 0x90);
              } while (iVar4 != -1);
            }
          }
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(pFVar8,&FStack_60);
            ::FName::ToString(&FStack_80,&FStack_50);
            Logging::Private::BasicLog<3>
                      (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                        ::__l38::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
            }
            if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
            }
          }
          FVar9.Data = FVar9.Data + 8;
          goto LAB_14d9b7600;
        }
        uVar10 = (ulonglong)uStack_84;
        if ((FName *)TStack_70.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(TStack_70.AllocatorInstance.Data);
        }
        pFVar8 = pFVar8 + 3;
      } while( true );
    }
    ExpandNames(&TStack_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1),
                &param_4->ControlSets);
    iVar5 = TStack_70.ArrayNum;
    pFVar8 = (FName *)(TStack_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
    FVar9.Data = TStack_70.AllocatorInstance.Data;
LAB_14d9b7460:
    if (TStack_70.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(auStack_88);
    }
    if ((FName *)FVar9.Data != pFVar8) {
      FVar2 = *(FName *)FVar9.Data;
      FStack_80 = FVar2;
      uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar6 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_3->field_0x40;
        }
        iVar4 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&param_3->field_0x48 - 1U & FVar2.Number + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            if (*(FName *)((longlong)iVar4 * 0x1d0 + *(longlong *)param_3) == FVar2) {
              FPhysicsControlNameRecords::AddControl(param_4,FStack_80,*pFVar7);
              FVar9.Data = FVar9.Data + 8;
              goto LAB_14d9b7460;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x1d0 + 0x1c0 + *(longlong *)param_3);
          } while (iVar4 != -1);
        }
      }
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(pFVar7,&FStack_50);
        ::FName::ToString(&FStack_80,&FStack_60);
        Logging::Private::BasicLog<3>
                  (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FPhysicsBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FPhysicsControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
        }
        if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
        }
      }
      FVar9.Data = FVar9.Data + 8;
      goto LAB_14d9b7460;
    }
    uVar10 = (ulonglong)uStack_84;
    if ((FName *)TStack_70.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 3;
  } while( true );
}

// CreateAdditionalSets @ 14d9cf490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::CreateAdditionalSets
          (FPhysicsControlSetUpdates *param_1,
          TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
          *param_2,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *param_3,FPhysicsControlNameRecords *param_4)

{
  FName *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  FName *pFVar7;
  FName *pFVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [4];
  uint uStack_84;
  FName FStack_80;
  FName *pFStack_78;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_70;
  FString FStack_60;
  FString FStack_50;
  
  uStack_84 = (param_1->ControlSetUpdates).ArrayNum;
  uVar10 = (ulonglong)(int)uStack_84;
  pFVar7 = (FName *)(param_1->ControlSetUpdates).AllocatorInstance.Data;
  pFStack_78 = pFVar7 + uVar10 * 3;
  do {
    pFVar8 = pFStack_78;
    if ((param_1->ControlSetUpdates).ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStack_88);
    }
    if (pFVar7 == pFVar8) {
      uStack_84 = (param_1->ModifierSetUpdates).ArrayNum;
      uVar10 = (ulonglong)(int)uStack_84;
      pFVar8 = (FName *)(param_1->ModifierSetUpdates).AllocatorInstance.Data;
      pFVar7 = pFVar8 + uVar10 * 3;
      pFStack_78 = pFVar7;
      do {
        if ((param_1->ModifierSetUpdates).ArrayNum != (int)uVar10) {
          `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStack_88);
        }
        if (pFVar8 == pFVar7) {
          return;
        }
        ExpandNames(&TStack_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
                    &param_4->BodyModifierSets);
        iVar5 = TStack_70.ArrayNum;
        pFVar1 = (FName *)(TStack_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
        FVar9.Data = TStack_70.AllocatorInstance.Data;
LAB_14d9b79b0:
        if (TStack_70.ArrayNum != iVar5) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStack_88);
        }
        pFVar7 = pFStack_78;
        if ((FName *)FVar9.Data != pFVar1) {
          FVar2 = *(FName *)FVar9.Data;
          FStack_80 = FVar2;
          uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
            puVar6 = &param_2->field_0x38;
            if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
              puVar6 = *(undefined1 **)&param_2->field_0x40;
            }
            iVar4 = *(int *)(puVar6 + (ulonglong)
                                      (*(int *)&param_2->field_0x48 - 1U & FVar2.Number + uVar3) * 4
                            );
            if (iVar4 != -1) {
              do {
                if (*(FName *)((longlong)iVar4 * 0x40 + *(longlong *)param_2) == FVar2) {
                  FPhysicsControlNameRecords::AddBodyModifier(param_4,FStack_80,*pFVar8);
                  FVar9.Data = FVar9.Data + 8;
                  goto LAB_14d9b79b0;
                }
                iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + *(longlong *)param_2);
              } while (iVar4 != -1);
            }
          }
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(pFVar8,&FStack_60);
            ::FName::ToString(&FStack_80,&FStack_50);
            Logging::Private::BasicLog<3>
                      (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                        ::__l38::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
            }
            if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
            }
          }
          FVar9.Data = FVar9.Data + 8;
          goto LAB_14d9b79b0;
        }
        uVar10 = (ulonglong)uStack_84;
        if ((FName *)TStack_70.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(TStack_70.AllocatorInstance.Data);
        }
        pFVar8 = pFVar8 + 3;
      } while( true );
    }
    ExpandNames(&TStack_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1),
                &param_4->ControlSets);
    iVar5 = TStack_70.ArrayNum;
    pFVar8 = (FName *)(TStack_70.AllocatorInstance.Data + (longlong)iVar5 * 8);
    FVar9.Data = TStack_70.AllocatorInstance.Data;
LAB_14d9b7810:
    if (TStack_70.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(auStack_88);
    }
    if ((FName *)FVar9.Data != pFVar8) {
      FVar2 = *(FName *)FVar9.Data;
      FStack_80 = FVar2;
      uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&param_3->field_0x8 != *(int *)&param_3->field_0x34) {
        puVar6 = &param_3->field_0x38;
        if (*(undefined1 **)&param_3->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&param_3->field_0x40;
        }
        iVar4 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&param_3->field_0x48 - 1U & FVar2.Number + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            if (*(FName *)((longlong)iVar4 * 0x240 + *(longlong *)param_3) == FVar2) {
              FPhysicsControlNameRecords::AddControl(param_4,FStack_80,*pFVar7);
              FVar9.Data = FVar9.Data + 8;
              goto LAB_14d9b7810;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x240 + 0x230 + *(longlong *)param_3);
          } while (iVar4 != -1);
        }
      }
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(pFVar7,&FStack_50);
        ::FName::ToString(&FStack_80,&FStack_60);
        Logging::Private::BasicLog<3>
                  (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>(FPhysicsControlSetUpdates_const&___ptr64,TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_const&___ptr64,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
        }
        if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
        }
      }
      FVar9.Data = FVar9.Data + 8;
      goto LAB_14d9b7810;
    }
    uVar10 = (ulonglong)uStack_84;
    if ((FName *)TStack_70.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 3;
  } while( true );
}

// CreateAdditionalSets @ 14d9cf4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::PhysicsControl::CreateAdditionalSets
          (FPhysicsControlSetUpdates *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_3,
          FPhysicsControlNameRecords *param_4)

{
  FName *pFVar1;
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  FName *pFVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [4];
  uint uStack_84;
  FName FStack_80;
  FName *pFStack_78;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_70;
  FString FStack_60;
  FString FStack_50;
  
  uStack_84 = (param_1->ControlSetUpdates).ArrayNum;
  uVar11 = (ulonglong)(int)uStack_84;
  pFVar8 = (FName *)(param_1->ControlSetUpdates).AllocatorInstance.Data;
  pFStack_78 = pFVar8 + uVar11 * 3;
  do {
    pFVar9 = pFStack_78;
    if ((param_1->ControlSetUpdates).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStack_88);
    }
    if (pFVar8 == pFVar9) {
      uStack_84 = (param_1->ModifierSetUpdates).ArrayNum;
      uVar11 = (ulonglong)(int)uStack_84;
      pFVar9 = (FName *)(param_1->ModifierSetUpdates).AllocatorInstance.Data;
      pFVar8 = pFVar9 + uVar11 * 3;
      pFStack_78 = pFVar8;
      do {
        if ((param_1->ModifierSetUpdates).ArrayNum != (int)uVar11) {
          `TCheckedPointerIterator<FPhysicsControlSetUpdate_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStack_88);
        }
        if (pFVar9 == pFVar8) {
          return;
        }
        ExpandNames(&TStack_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar9 + 1),
                    &param_4->BodyModifierSets);
        iVar6 = TStack_70.ArrayNum;
        pFVar1 = (FName *)(TStack_70.AllocatorInstance.Data + (longlong)iVar6 * 8);
        FVar10.Data = TStack_70.AllocatorInstance.Data;
LAB_14d9b7d48:
        if (TStack_70.ArrayNum != iVar6) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStack_88);
        }
        pFVar8 = pFStack_78;
        if ((FName *)FVar10.Data != pFVar1) {
          FVar2 = *(FName *)FVar10.Data;
          FStack_80 = FVar2;
          uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
            FVar3 = (param_2->Hash).SecondaryData;
            FVar7 = (ForElementType<FSetElementId>)&param_2->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar7 = FVar3;
            }
            iVar5 = *(int *)((longlong)FVar7 +
                            (ulonglong)(param_2->HashSize - 1U & FVar2.Number + uVar4) * 4);
            if (iVar5 != -1) {
              do {
                if (*(FName *)(*(longlong *)&param_2->Elements + (longlong)iVar5 * 0x10) == FVar2) {
                  FPhysicsControlNameRecords::AddBodyModifier(param_4,FStack_80,*pFVar9);
                  FVar10.Data = FVar10.Data + 8;
                  goto LAB_14d9b7d48;
                }
                iVar5 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar5 * 0x10);
              } while (iVar5 != -1);
            }
          }
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(pFVar9,&FStack_60);
            ::FName::ToString(&FStack_80,&FStack_50);
            Logging::Private::BasicLog<3>
                      (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TSet<class_FName,struct_DefaultKeyFuncs<class_FName,0>,class_FDefaultSetAllocator>_>(FPhysicsControlSetUpdates_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                        ::__l38::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
            }
            if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
            }
          }
          FVar10.Data = FVar10.Data + 8;
          goto LAB_14d9b7d48;
        }
        uVar11 = (ulonglong)uStack_84;
        if ((FName *)TStack_70.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(TStack_70.AllocatorInstance.Data);
        }
        pFVar9 = pFVar9 + 3;
      } while( true );
    }
    ExpandNames(&TStack_70,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
                &param_4->ControlSets);
    iVar6 = TStack_70.ArrayNum;
    pFVar9 = (FName *)(TStack_70.AllocatorInstance.Data + (longlong)iVar6 * 8);
    FVar10.Data = TStack_70.AllocatorInstance.Data;
LAB_14d9b7bb0:
    if (TStack_70.ArrayNum != iVar6) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(auStack_88);
    }
    if ((FName *)FVar10.Data != pFVar9) {
      FVar2 = *(FName *)FVar10.Data;
      FStack_80 = FVar2;
      uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
        FVar3 = (param_3->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&param_3->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        iVar5 = *(int *)((longlong)FVar7 +
                        (ulonglong)(param_3->HashSize - 1U & FVar2.Number + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            if (*(FName *)(*(longlong *)&param_3->Elements + (longlong)iVar5 * 0x10) == FVar2) {
              FPhysicsControlNameRecords::AddControl(param_4,FStack_80,*pFVar8);
              FVar10.Data = FVar10.Data + 8;
              goto LAB_14d9b7bb0;
            }
            iVar5 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar5 * 0x10);
          } while (iVar5 != -1);
        }
      }
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(pFVar8,&FStack_50);
        ::FName::ToString(&FStack_80,&FStack_60);
        Logging::Private::BasicLog<3>
                  (&`void___cdecl_UE::PhysicsControl::CreateAdditionalSets_Implementation<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TSet<class_FName,struct_DefaultKeyFuncs<class_FName,0>,class_FDefaultSetAllocator>_>(FPhysicsControlSetUpdates_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64,FPhysicsControlNameRecords&___ptr64)'
                    ::__l16::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
        }
        if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
        }
      }
      FVar10.Data = FVar10.Data + 8;
      goto LAB_14d9b7bb0;
    }
    uVar11 = (ulonglong)uStack_84;
    if ((FName *)TStack_70.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 3;
  } while( true );
}

// CreateOperatorsForNode @ 14d9d4d00

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
UE::PhysicsControl::CreateOperatorsForNode
          (FAnimNode_RigidBodyWithControl *param_1,FPhysicsControlCharacterSetupData *param_2,
          FPhysicsControlAndBodyModifierCreationDatas *param_3,
          TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
          *param_4,FReferenceSkeleton *param_5,UPhysicsAsset *param_6,
          FPhysicsControlNameRecords *param_7)

{
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *pTVar1;
  <lambda_2> local_88;
  <lambda_1> local_80;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  local_78;
  
  local_88.Node = param_1;
  local_80.Node = param_1;
  pTVar1 = TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
           ::
           TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                     (&local_78,param_4);
  ForEachPotentialOperator<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>,_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_2>_>
            (param_2,param_3,pTVar1,param_5,param_6,param_7,&local_80,&local_88);
  *(undefined4 *)&param_4->field_0x48 = 0;
  if (*(void **)&param_4->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)param_4);
  return;
}

// DetectTeleport @ 14d9d7820

bool __cdecl
UE::PhysicsControl::DetectTeleport
          (TTransform<double> *param_1,TTransform<double> *param_2,float param_3,float param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((param_3 <= 0.0) ||
     (dVar2 = (param_2->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0],
     dVar3 = (param_2->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0],
     dVar4 = (param_2->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1],
     SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2) <= (double)param_3)) {
    if (0.0 < param_4) {
      dVar2 = (param_2->Rotation).XY.m128d_f64[1] * (param_1->Rotation).XY.m128d_f64[1] +
              (param_2->Rotation).XY.m128d_f64[0] * (param_1->Rotation).XY.m128d_f64[0] +
              (param_2->Rotation).ZW.m128d_f64[0] * (param_1->Rotation).ZW.m128d_f64[0] +
              (param_2->Rotation).ZW.m128d_f64[1] * (param_1->Rotation).ZW.m128d_f64[1];
      dVar3 = (dVar2 + dVar2) * dVar2 - __real_3ff0000000000000;
      dVar2 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar3) && (dVar2 = dVar3, __real_3ff0000000000000 <= dVar3)) {
        dVar2 = __real_3ff0000000000000;
      }
      dVar2 = acos(dVar2);
      if ((double)param_4 < dVar2 * __real_404ca5dc1a63c1f8) goto LAB_14d9d78c1;
    }
    bVar1 = false;
  }
  else {
LAB_14d9d78c1:
    bVar1 = true;
  }
  return bVar1;
}

// DetectTeleport @ 14d9d7990

bool __cdecl
UE::PhysicsControl::DetectTeleport
          (TVector<double> *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          TQuat<double> *param_4,float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((0.0 < param_5) &&
     (dVar2 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
     dVar3 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X,
     dVar1 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z,
     auVar4._0_8_ = dVar3 * dVar3, auVar4._8_8_ = 0, auVar5._8_8_ = 0,
     auVar5._0_8_ = dVar2 * dVar2 + auVar4._0_8_ + dVar1 * dVar1, auVar5 = sqrtpd(auVar4,auVar5),
     (double)param_5 < auVar5._0_8_)) {
    return true;
  }
  if (param_6 <= 0.0) {
    return false;
  }
  dVar2 = param_2->W * param_4->W + param_2->Z * param_4->Z +
          param_2->Y * param_4->Y + param_2->X * param_4->X;
  dVar1 = (dVar2 + dVar2) * dVar2 - __real_3ff0000000000000;
  dVar2 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar1) && (dVar2 = dVar1, __real_3ff0000000000000 <= dVar1)) {
    dVar2 = __real_3ff0000000000000;
  }
  dVar2 = acos(dVar2);
  return (double)param_6 < dVar2 * __real_404ca5dc1a63c1f8;
}

// FindParentBodyBoneName @ 14d9dbba0

FName __cdecl
UE::PhysicsControl::FindParentBodyBoneName
          (FName param_1,FReferenceSkeleton *param_2,UPhysicsAsset *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  FName FVar6;
  UPhysicsAsset *in_R9;
  
  *(undefined8 *)param_1 = 0;
  if ((in_R9 != (UPhysicsAsset *)0x0) && (param_2 != (FReferenceSkeleton *)0x0)) {
    piVar5 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&(param_3->SolverIterations).SolverPushOutIterations,(FName)param_2);
    if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
      uVar3 = UPhysicsAsset::FindParentBodyIndex(in_R9,(FReferenceSkeleton *)param_3,*piVar5);
      if ((-1 < (int)uVar3) && ((int)uVar3 < (in_R9->SkeletalBodySetups).ArrayNum)) {
        uVar4 = 0;
        if ((int)uVar3 < (in_R9->SkeletalBodySetups).ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            FVar6 = (FName)(*pcVar1)();
            return FVar6;
          }
        }
        if (*(longlong *)
             ((in_R9->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) != 0) {
          uVar4 = 0;
          if ((int)uVar3 < (in_R9->SkeletalBodySetups).ArrayNum) {
            uVar4 = ~uVar3 >> 0x1f;
          }
          if (uVar4 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              FVar6 = (FName)(*pcVar1)();
              return FVar6;
            }
          }
          *(undefined8 *)param_1 =
               *(undefined8 *)
                (*(longlong *)
                  ((in_R9->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
                0x28);
        }
        return param_1;
      }
    }
  }
  return param_1;
}

// GetBodyInstance @ 14d9dc2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBodyInstance * __cdecl
UE::PhysicsControl::GetBodyInstance(UPrimitiveComponent *param_1,FName param_2)

{
  int iVar1;
  UClass *pUVar2;
  FBodyInstance *pFVar3;
  undefined7 uVar4;
  
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return (FBodyInstance *)0x0;
  }
  pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  uVar4 = (undefined7)((ulonglong)&pUVar2->_padding_ >> 8);
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014d9dc334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar3 = (FBodyInstance *)
             (**(code **)(*(longlong *)param_1 + 0x818))
                       (param_1,param_2,CONCAT71(uVar4,1),0xffffffff);
    return pFVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d9dc360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FBodyInstance *)
           (**(code **)(*(longlong *)param_1 + 0x818))(param_1,0,CONCAT71(uVar4,1),0xffffffff);
  return pFVar3;
}

// GetLimbBones @ 14d9ddca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
* __cdecl UE::PhysicsControl::GetLimbBones
                    (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                     *__return_storage_ptr__,
                    TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *param_1,
                    FReferenceSkeleton *param_2,UPhysicsAsset *param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  UPhysicsAsset *pUVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *pTVar10;
  longlong *plVar11;
  byte bVar12;
  ForElementType<FSetElementId> FVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_158 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  longlong local_100;
  uint local_f8;
  longlong local_f0;
  TKeyInitializer<FName_const_&> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_e0;
  undefined1 local_d0 [8];
  FScriptContainerElement *local_c8;
  TSet<TTuple<FName,FPhysicsControlLimbBones>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>,FDefaultSetAllocator>
  *local_c0;
  UPhysicsAsset *local_b8;
  TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_> *local_b0;
  FScriptContainerElement *local_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_c0 = (TSet<TTuple<FName,FPhysicsControlLimbBones>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__;
  local_b8 = (UPhysicsAsset *)param_2;
  local_b0 = param_1;
  if (param_3 == (UPhysicsAsset *)0x0) {
    if (2 < (byte)LogPhysicsControl._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    }
  }
  else {
    local_f8 = param_1->ArrayNum;
    uVar16 = (ulonglong)(int)local_f8;
    pFVar17 = (param_1->AllocatorInstance).Data;
    local_98.Elements._0_8_ = 0;
    local_a8 = pFVar17 + uVar16 * 0x14;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    while( true ) {
      pFVar1 = local_a8;
      pUVar4 = local_b8;
      __return_storage_ptr__ =
           (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
            *)local_c0;
      if (local_b0->ArrayNum != (int)uVar16) {
        local_108 = 0;
        `TCheckedPointerIterator<FPhysicsControlLimbSetupData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_108);
      }
      if (pFVar17 == pFVar1) break;
      local_c8 = pFVar17;
      TSet<TTuple<FName,FPhysicsControlLimbBones>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,FPhysicsControlLimbBones>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_e8,(bool *)&local_c8);
      lVar14 = (longlong)(int)local_e8.Key * 0x30 +
               *(longlong *)
                &((TSet<TTuple<FName,FPhysicsControlLimbBones>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>,FDefaultSetAllocator>
                   *)__return_storage_ptr__)->Elements;
      *(byte *)(lVar14 + 0x20) = *(byte *)(lVar14 + 0x20) & 0xfe;
      bVar12 = (*(byte *)(lVar14 + 0x20) ^ (byte)pFVar17[0x10]) & 2 ^ *(byte *)(lVar14 + 0x20);
      *(byte *)(lVar14 + 0x20) = bVar12;
      bVar12 = (bVar12 ^ (byte)pFVar17[0x10]) & 4 ^ bVar12;
      *(byte *)(lVar14 + 0x20) = bVar12;
      *(byte *)(lVar14 + 0x20) = (bVar12 ^ (byte)pFVar17[0x10]) & 8 ^ bVar12;
      if ((((byte)pFVar17[0x10] & 1) != 0) &&
         (FindParentBodyBoneName((FName)&local_100,*(FReferenceSkeleton **)(pFVar17 + 8),pUVar4),
         local_100 != 0)) {
        if ((*(longlong **)(lVar14 + 0x10) <= &local_100) &&
           ((&local_100 < *(longlong **)(lVar14 + 0x10) + *(int *)(lVar14 + 0x1c) &&
            (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)))) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        iVar6 = *(int *)(lVar14 + 0x18);
        if (iVar6 == *(int *)(lVar14 + 0x1c)) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)(lVar14 + 0x10),(int *)(lVar14 + 0x1c));
        }
        *(int *)(lVar14 + 0x18) = iVar6 + 1;
        *(longlong *)(*(longlong *)(lVar14 + 0x10) + (longlong)iVar6 * 8) = local_100;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&local_98,(FName *)local_d0,(bool *)&local_100);
        *(byte *)(lVar14 + 0x20) = *(byte *)(lVar14 + 0x20) | 1;
      }
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      UPhysicsAsset::GetBodyIndicesBelow
                (param_3,&local_e0,*(FName *)(pFVar17 + 8),(FReferenceSkeleton *)pUVar4,true);
      iVar6 = local_e0.ArrayNum;
      uVar16 = (ulonglong)local_e0.ArrayNum;
      pFVar1 = local_e0.AllocatorInstance.Data + uVar16 * 4;
      FVar15.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar16 != iVar6) {
          local_107[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar15.Data == pFVar1) break;
        uVar8 = *(uint *)FVar15.Data;
        uVar7 = 0;
        if ((int)uVar8 < (param_3->SkeletalBodySetups).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        lVar2 = *(longlong *)
                 (*(longlong *)
                   ((param_3->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar8 * 8)
                 + 0x28);
        local_f0 = lVar2;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar13 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar13 = local_98.Hash.SecondaryData;
          }
          iVar9 = *(int *)((longlong)FVar13 +
                          (ulonglong)
                          (local_98.HashSize - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar8) * 4);
          while (iVar9 != -1) {
            plVar11 = (longlong *)((longlong)iVar9 * 0x10 + local_98.Elements._0_8_);
            if (*plVar11 == lVar2) {
              if (plVar11 != (longlong *)0x0) goto LAB_14d9de0b2;
              break;
            }
            iVar9 = (int)plVar11[1];
          }
        }
        if (((*(longlong **)(lVar14 + 0x10) <= &local_f0) &&
            (&local_f0 < *(longlong **)(lVar14 + 0x10) + *(int *)(lVar14 + 0x1c))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                     *)(*pcVar3)();
          return pTVar10;
        }
        iVar9 = *(int *)(lVar14 + 0x18);
        if (iVar9 == *(int *)(lVar14 + 0x1c)) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)(lVar14 + 0x10),(int *)(lVar14 + 0x1c));
        }
        *(int *)(lVar14 + 0x18) = iVar9 + 1;
        *(longlong *)(*(longlong *)(lVar14 + 0x10) + (longlong)iVar9 * 8) = local_f0;
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                  (&local_98,(FName *)(local_d0 + 4),(bool *)&local_f0);
LAB_14d9de0b2:
        uVar16 = local_e0._8_8_ & 0xffffffff;
        FVar15.Data = FVar15.Data + 4;
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      pFVar17 = pFVar17 + 0x14;
      uVar16 = (ulonglong)local_f8;
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  return (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
          *)(TSet<TTuple<FName,FPhysicsControlLimbBones>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>,FDefaultSetAllocator>
             *)__return_storage_ptr__;
}

// GetPhysicalParentBone @ 14d9de6f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __cdecl
UE::PhysicsControl::GetPhysicalParentBone(USkeletalMeshComponent *param_1,FName param_2)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  longlong lVar4;
  longlong in_R8;
  longlong local_res20;
  
  USkinnedMeshComponent::GetParentBone((USkinnedMeshComponent *)param_2,(FName)&local_res20);
  lVar3 = local_res20;
  do {
    if ((lVar3 == 0) || (lVar3 == in_R8)) {
      param_1->_padding_ = 0;
      return (FName)param_1;
    }
    local_res20 = lVar3;
    if (param_2 != (FName)0x0) {
      pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      lVar4 = 0;
      if ((iVar1 <= *(int *)(*(longlong *)((longlong)param_2 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        lVar4 = lVar3;
      }
      lVar3 = (**(code **)(*(longlong *)param_2 + 0x818))
                        (param_2,lVar4,CONCAT71((int7)((ulonglong)&pUVar2->_padding_ >> 8),1),
                         0xffffffff);
      if (lVar3 != 0) {
        param_1->_padding_ = local_res20;
        return (FName)param_1;
      }
    }
    in_R8 = local_res20;
    USkinnedMeshComponent::GetParentBone((USkinnedMeshComponent *)param_2,(FName)&local_res20);
    lVar3 = local_res20;
  } while( true );
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString_const_&,FName,FName> @ 1505880f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString_const_&,FName,FName>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FString *param_4,
          FName *param_5,FName *param_6)

{
  undefined1 auStack_98 [32];
  FLogField local_78;
  undefined8 local_60;
  FString *local_58;
  code *local_50;
  undefined8 local_48;
  FName *local_40;
  code *local_38;
  undefined8 local_30;
  FName *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.WriteValue = FLogField::Write<FString>;
  local_50 = FLogField::Write<FString>;
  local_40 = param_5;
  local_38 = FLogField::Write<FName>;
  local_20 = FLogField::Write<FName>;
  local_28 = param_6;
  local_78.Name = (char *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_30 = 0;
  local_78.Value = param_3;
  local_58 = param_4;
  LogWithFieldArray(param_1,param_2,&local_78,4);
  return;
}

// LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString,FString,FString> @ 150588190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Logging::Private::
LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString,FString,FString>
          (FLogCategoryBase *param_1,FStaticLogRecord *param_2,FString *param_3,FString *param_4,
          FString *param_5,FString *param_6)

{
  undefined1 auStack_98 [32];
  FLogField local_78;
  undefined8 local_60;
  FString *local_58;
  code *local_50;
  undefined8 local_48;
  FString *local_40;
  code *local_38;
  undefined8 local_30;
  FString *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_40 = param_5;
  local_78.WriteValue = FLogField::Write<FString>;
  local_50 = FLogField::Write<FString>;
  local_38 = FLogField::Write<FString>;
  local_20 = FLogField::Write<FString>;
  local_28 = param_6;
  local_78.Name = (char *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_30 = 0;
  local_78.Value = param_3;
  local_58 = param_4;
  LogWithFieldArray(param_1,param_2,&local_78,4);
  return;
}

