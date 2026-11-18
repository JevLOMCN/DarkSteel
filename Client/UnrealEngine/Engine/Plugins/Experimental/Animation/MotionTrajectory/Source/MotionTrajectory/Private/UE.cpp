// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionTrajectory
// Functions: 12

// Construct<FCharacterTrajectoryData> @ 14a94ac40

void __cdecl UE::CoreUObject::Private::Construct<FCharacterTrajectoryData>(void *param_1)

{
  memset(param_1,0,0x1e0);
  FCharacterTrajectoryData::FCharacterTrajectoryData(param_1);
  return;
}

// ConstructForTests<FCharacterTrajectoryData> @ 14a94ac70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCharacterTrajectoryData>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x428c0000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 0xa0));
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x140) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x148) = uVar1;
  *(double *)((longlong)param_1 + 0x150) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x158) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x160) = uVar1;
  *(double *)((longlong)param_1 + 0x168) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x170) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x178) = uVar1;
  *(double *)((longlong)param_1 + 0x180) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 400) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x198) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x1a0) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x1a8) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x1b0) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x1b8) = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x1c0) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x1c8) = dVar2;
  *(undefined1 *)((longlong)param_1 + 0x1d0) = 0;
  return;
}

// Destruct<FCharacterTrajectoryData> @ 14a94ac80

void __cdecl UE::CoreUObject::Private::Destruct<FCharacterTrajectoryData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  *(undefined ***)((longlong)param_1 + 0xa0) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0;
  if (*(void **)((longlong)param_1 + 0xe8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe8));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xa8));
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

// Copy<FCharacterTrajectoryData> @ 14a94ac90

bool __cdecl
UE::CoreUObject::Private::Copy<FCharacterTrajectoryData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    pvVar3 = param_2;
    do {
      *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)((longlong)pvVar3 + 4);
      puVar2[2] = *(undefined4 *)((longlong)pvVar3 + 8);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar3 + 0xc);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)(puVar2 + 4),(FRuntimeFloatCurve *)((longlong)pvVar3 + 0x10))
      ;
      *(undefined1 *)(puVar2 + 0x26) = *(undefined1 *)((longlong)pvVar3 + 0x98);
      FRuntimeFloatCurve::operator=
                ((FRuntimeFloatCurve *)(puVar2 + 0x28),
                 (FRuntimeFloatCurve *)((longlong)pvVar3 + 0xa0));
      puVar2[0x4a] = *(undefined4 *)((longlong)pvVar3 + 0x128);
      puVar2[0x4b] = *(undefined4 *)((longlong)pvVar3 + 300);
      puVar2[0x4c] = *(undefined4 *)((longlong)pvVar3 + 0x130);
      puVar2[0x4d] = *(undefined4 *)((longlong)pvVar3 + 0x134);
      puVar2[0x4e] = *(undefined4 *)((longlong)pvVar3 + 0x138);
      puVar2[0x4f] = *(undefined4 *)((longlong)pvVar3 + 0x13c);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x148);
      *(undefined8 *)(puVar2 + 0x50) = *(undefined8 *)((longlong)pvVar3 + 0x140);
      *(undefined8 *)(puVar2 + 0x52) = uVar1;
      *(undefined8 *)(puVar2 + 0x54) = *(undefined8 *)((longlong)pvVar3 + 0x150);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x160);
      *(undefined8 *)(puVar2 + 0x56) = *(undefined8 *)((longlong)pvVar3 + 0x158);
      *(undefined8 *)(puVar2 + 0x58) = uVar1;
      *(undefined8 *)(puVar2 + 0x5a) = *(undefined8 *)((longlong)pvVar3 + 0x168);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x178);
      *(undefined8 *)(puVar2 + 0x5c) = *(undefined8 *)((longlong)pvVar3 + 0x170);
      *(undefined8 *)(puVar2 + 0x5e) = uVar1;
      *(undefined8 *)(puVar2 + 0x60) = *(undefined8 *)((longlong)pvVar3 + 0x180);
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x198);
      *(undefined8 *)(puVar2 + 100) = *(undefined8 *)((longlong)pvVar3 + 400);
      *(undefined8 *)(puVar2 + 0x66) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x1a8);
      *(undefined8 *)(puVar2 + 0x68) = *(undefined8 *)((longlong)pvVar3 + 0x1a0);
      *(undefined8 *)(puVar2 + 0x6a) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x1b8);
      *(undefined8 *)(puVar2 + 0x6c) = *(undefined8 *)((longlong)pvVar3 + 0x1b0);
      *(undefined8 *)(puVar2 + 0x6e) = uVar1;
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x1c8);
      *(undefined8 *)(puVar2 + 0x70) = *(undefined8 *)((longlong)pvVar3 + 0x1c0);
      *(undefined8 *)(puVar2 + 0x72) = uVar1;
      *(undefined1 *)(puVar2 + 0x74) = *(undefined1 *)((longlong)pvVar3 + 0x1d0);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x78;
      pvVar3 = (void *)((longlong)pvVar3 + 0x1e0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTrajectorySamplingData> @ 14a94ae20

void __cdecl UE::CoreUObject::Private::Construct<FTrajectorySamplingData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 5;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0xc) = 5;
  return;
}

// ConstructForTests<FTrajectorySamplingData> @ 14a94ae50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTrajectorySamplingData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 5;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0xc) = 5;
  return;
}

// Destruct<FTrajectorySamplingData> @ 14a94ae80

void __cdecl UE::CoreUObject::Private::Destruct<FTrajectorySamplingData>(void *param_1)

{
  return;
}

// Copy<FTrajectorySamplingData> @ 14a94ae90

bool __cdecl
UE::CoreUObject::Private::Copy<FTrajectorySamplingData>(void *param_1,void *param_2,int param_3)

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

// Construct<FMotionTrajectorySettings> @ 14a94aed0

void __cdecl UE::CoreUObject::Private::Construct<FMotionTrajectorySettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x40000000;
  return;
}

// ConstructForTests<FMotionTrajectorySettings> @ 14a94aee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMotionTrajectorySettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x40000000;
  return;
}

// Destruct<FMotionTrajectorySettings> @ 14a94aef0

void __cdecl UE::CoreUObject::Private::Destruct<FMotionTrajectorySettings>(void *param_1)

{
  return;
}

// Copy<FMotionTrajectorySettings> @ 14a94af00

bool __cdecl
UE::CoreUObject::Private::Copy<FMotionTrajectorySettings>(void *param_1,void *param_2,int param_3)

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

