// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 33

// Construct<FCameraAnimationHandle> @ 14ad15270

void __cdecl UE::CoreUObject::Private::Construct<FCameraAnimationHandle>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffff;
  return;
}

// ConstructForTests<FCameraAnimationHandle> @ 14ad15280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraAnimationHandle>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffff;
  return;
}

// Destruct<FCameraAnimationHandle> @ 14ad15290

void __cdecl UE::CoreUObject::Private::Destruct<FCameraAnimationHandle>(void *param_1)

{
  return;
}

// Copy<FCameraAnimationHandle> @ 14ad15360

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraAnimationHandle>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCameraAnimationHandle> @ 14ad15390

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FCameraAnimationHandle>(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)param_1;
  uVar3 = uVar1 >> 0x10;
  uVar2 = (uVar1 & 0xffff) - uVar3 ^ uVar1 >> 0x1d;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar3) - uVar2 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}

// Construct<FCameraAnimationParams> @ 14ad16a90

void __cdecl UE::CoreUObject::Private::Construct<FCameraAnimationParams>(void *param_1)

{
  double dVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// ConstructForTests<FCameraAnimationParams> @ 14ad16ae0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraAnimationParams>(void *param_1)

{
  double dVar1;
  
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// Destruct<FCameraAnimationParams> @ 14ad16b30

void __cdecl UE::CoreUObject::Private::Destruct<FCameraAnimationParams>(void *param_1)

{
  return;
}

// Copy<FCameraAnimationParams> @ 14ad17370

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraAnimationParams>(void *param_1,void *param_2,int param_3)

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

// Construct<FWaveOscillator> @ 14ad1ad30

void __cdecl UE::CoreUObject::Private::Construct<FWaveOscillator>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWaveOscillator> @ 14ad1ad50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWaveOscillator>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWaveOscillator> @ 14ad1ad70

void __cdecl UE::CoreUObject::Private::Destruct<FWaveOscillator>(void *param_1)

{
  return;
}

// Copy<FWaveOscillator> @ 14ad1ad80

bool __cdecl
UE::CoreUObject::Private::Copy<FWaveOscillator>(void *param_1,void *param_2,int param_3)

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

// Construct<FPerlinNoiseShaker> @ 14ad1ae50

void __cdecl UE::CoreUObject::Private::Construct<FPerlinNoiseShaker>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// ConstructForTests<FPerlinNoiseShaker> @ 14ad1ae70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPerlinNoiseShaker>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// Destruct<FPerlinNoiseShaker> @ 14ad1ae90

void __cdecl UE::CoreUObject::Private::Destruct<FPerlinNoiseShaker>(void *param_1)

{
  return;
}

// Copy<FPerlinNoiseShaker> @ 14ad1aea0

bool __cdecl
UE::CoreUObject::Private::Copy<FPerlinNoiseShaker>(void *param_1,void *param_2,int param_3)

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

// Construct<FVOscillator> @ 14ad1aee0

void __cdecl UE::CoreUObject::Private::Construct<FVOscillator>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FVOscillator> @ 14ad1af00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVOscillator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FVOscillator> @ 14ad1af20

void __cdecl UE::CoreUObject::Private::Destruct<FVOscillator>(void *param_1)

{
  return;
}

// Copy<FVOscillator> @ 14ad1af30

bool __cdecl UE::CoreUObject::Private::Copy<FVOscillator>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FROscillator> @ 14ad1b380

void __cdecl UE::CoreUObject::Private::Construct<FROscillator>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FROscillator> @ 14ad1b3a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FROscillator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FROscillator> @ 14ad1b3c0

void __cdecl UE::CoreUObject::Private::Destruct<FROscillator>(void *param_1)

{
  return;
}

// Copy<FROscillator> @ 14ad1b3d0

bool __cdecl UE::CoreUObject::Private::Copy<FROscillator>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFOscillator> @ 14ad1b570

void __cdecl UE::CoreUObject::Private::Construct<FFOscillator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFOscillator> @ 14ad1b5c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFOscillator>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FFOscillator> @ 14ad1b5d0

void __cdecl UE::CoreUObject::Private::Destruct<FFOscillator>(void *param_1)

{
  return;
}

// Copy<FFOscillator> @ 14ad1b620

bool __cdecl UE::CoreUObject::Private::Copy<FFOscillator>(void *param_1,void *param_2,int param_3)

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

// Construct<FActiveCameraAnimationInfo> @ 14ad1bef0

void __cdecl UE::CoreUObject::Private::Construct<FActiveCameraAnimationInfo>(void *param_1)

{
  double dVar1;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x40) = dVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(FCameraAnimationHandle *)((longlong)param_1 + 0x50) = FCameraAnimationHandle::Invalid;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// ConstructForTests<FActiveCameraAnimationInfo> @ 14ad1bf60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FActiveCameraAnimationInfo>(void *param_1)

{
  double dVar1;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x40) = dVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(FCameraAnimationHandle *)((longlong)param_1 + 0x50) = FCameraAnimationHandle::Invalid;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FActiveCameraAnimationInfo> @ 14ad1bfd0

void __cdecl UE::CoreUObject::Private::Destruct<FActiveCameraAnimationInfo>(void *param_1)

{
  return;
}

// Copy<FActiveCameraAnimationInfo> @ 14ad1bfe0

bool __cdecl
UE::CoreUObject::Private::Copy<FActiveCameraAnimationInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      uVar2 = puVar1[2];
      puVar3[1] = puVar1[1];
      puVar3[2] = uVar2;
      uVar2 = puVar1[4];
      puVar3[3] = puVar1[3];
      puVar3[4] = uVar2;
      uVar2 = puVar1[6];
      puVar3[5] = puVar1[5];
      puVar3[6] = uVar2;
      uVar2 = puVar1[8];
      puVar3[7] = puVar1[7];
      puVar3[8] = uVar2;
      puVar3[9] = puVar1[9];
      *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(puVar1 + 10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[0xb] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[0xb]);
      }
      puVar3[0xb] = puVar1[0xb];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[0xc] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[0xc]);
      }
      puVar3[0xc] = puVar1[0xc];
      *(undefined4 *)(puVar3 + 0xd) = *(undefined4 *)(puVar1 + 0xd);
      *(undefined4 *)((longlong)puVar3 + 0x6c) = *(undefined4 *)((longlong)puVar1 + 0x6c);
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)(puVar1 + 0xe);
      *(undefined1 *)((longlong)puVar3 + 0x71) = *(undefined1 *)((longlong)puVar1 + 0x71);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0xf;
    } while (param_3 != 0);
  }
  return true;
}

