// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 84

// Construct<FWN_CS_CharacterPartDesc> @ 14a69af00

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterPartDesc>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FWN_CS_CharacterPartDesc> @ 14a69af60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPartDesc>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FWN_CS_CharacterPartDesc> @ 14a69afc0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPartDesc>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    return;
  }
  return;
}

// Copy<FWN_CS_CharacterPartDesc> @ 14a69b020

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterPartDesc>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
      FUtf8String::operator=
                ((FUtf8String *)((longlong)param_1 + 0x30),(FUtf8String *)((longlong)param_2 + 0x30)
                );
      *(undefined1 *)((longlong)param_1 + 0x40) = *(undefined1 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)((longlong)param_2 + 0x44);
      *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)((longlong)param_2 + 0x4c);
      TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x58),
                 (TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x58));
      TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x68),
                 (TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x68));
      TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x78),
                 (TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x78));
      param_2 = (void *)((longlong)param_2 + 0x88);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x88);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_PartColliderInfo> @ 14a69b120

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_PartColliderInfo>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x403e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x403e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x403e000000000000;
  return;
}

// ConstructForTests<FWN_CS_PartColliderInfo> @ 14a69b1a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_PartColliderInfo>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x403e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x403e000000000000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x403e000000000000;
  return;
}

// Destruct<FWN_CS_PartColliderInfo> @ 14a69b200

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_PartColliderInfo>(void *param_1)

{
  return;
}

// Copy<FWN_CS_PartColliderInfo> @ 14a69b2c0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_PartColliderInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FWN_CS_ServerHitCapsuleInfo> @ 14a69baf0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_ServerHitCapsuleInfo>(void *param_1)

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
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FWN_CS_ServerHitCapsuleInfo> @ 14a69bb50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_ServerHitCapsuleInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FWN_CS_ServerHitCapsuleInfo> @ 14a69bba0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_ServerHitCapsuleInfo>(void *param_1)

{
  return;
}

// Copy<FWN_CS_ServerHitCapsuleInfo> @ 14a69bbb0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_ServerHitCapsuleInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FWN_CS_HitSphereInfo> @ 14a69bcf0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_HitSphereInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FWN_CS_HitSphereInfo> @ 14a69bd60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_HitSphereInfo>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FWN_CS_HitSphereInfo> @ 14a69bdb0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_HitSphereInfo>(void *param_1)

{
  return;
}

// Copy<FWN_CS_HitSphereInfo> @ 14a69bdc0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_HitSphereInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FWN_CS_LightInfo> @ 14a69bf10

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_LightInfo>(void *param_1)

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
  FWN_CS_LightInfo::FWN_CS_LightInfo(param_1);
  return;
}

// ConstructForTests<FWN_CS_LightInfo> @ 14a69bf40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_LightInfo>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  
  *(undefined4 *)((longlong)param_1 + 8) = 2;
  *(undefined8 *)param_1 = 0;
  *(float *)((longlong)param_1 + 0xc) =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  *(float *)((longlong)param_1 + 0x10) =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  *(float *)((longlong)param_1 + 0x14) =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  uVar3 = (uint)FColor::White.field0_0x0._s_0.A;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x43480000;
  *(float *)((longlong)param_1 + 0x18) = (float)uVar3 * __real_3b808081;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x48) = dVar2;
  *(double *)((longlong)param_1 + 0x50) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42300000;
  return;
}

// Destruct<FWN_CS_LightInfo> @ 14a69bf50

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_LightInfo>(void *param_1)

{
  return;
}

// Copy<FWN_CS_LightInfo> @ 14a69bf60

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_LightInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FWN_CS_FixedBoundBoneSlotParam> @ 14a69c040

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_FixedBoundBoneSlotParam>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0x2f;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}

// ConstructForTests<FWN_CS_FixedBoundBoneSlotParam> @ 14a69c060

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_CS_FixedBoundBoneSlotParam>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0x2f;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}

// Destruct<FWN_CS_FixedBoundBoneSlotParam> @ 14a69c080

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_FixedBoundBoneSlotParam>(void *param_1)

{
  return;
}

// Copy<FWN_CS_FixedBoundBoneSlotParam> @ 14a69c090

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_FixedBoundBoneSlotParam>
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

// Construct<FWN_CS_AnimHashingData> @ 14a69c680

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_AnimHashingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  ::FString::FString((FString *)((longlong)param_1 + 8),"");
  return;
}

// ConstructForTests<FWN_CS_AnimHashingData> @ 14a69c6a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_AnimHashingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  ::FString::FString((FString *)((longlong)param_1 + 8),"");
  return;
}

// Destruct<FWN_CS_AnimHashingData> @ 14a69c700

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_AnimHashingData>(void *param_1)

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

// Copy<FWN_CS_AnimHashingData> @ 14a69c720

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_AnimHashingData>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_1 + lVar1 + 8));
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_SkeletonHashingData> @ 14a69c8a0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_SkeletonHashingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FWN_CS_SkeletonHashingData> @ 14a69c8c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_SkeletonHashingData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWN_CS_SkeletonHashingData> @ 14a69c8e0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_SkeletonHashingData>(void *param_1)

{
  return;
}

// Copy<FWN_CS_SkeletonHashingData> @ 14a69c8f0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_SkeletonHashingData>(void *param_1,void *param_2,int param_3)

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

// Construct<FWN_CS_PartSKMHashingData> @ 14a69ca30

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_PartSKMHashingData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FWN_CS_PartSKMHashingData> @ 14a69ca70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_PartSKMHashingData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FWN_CS_PartSKMHashingData> @ 14a69cab0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_PartSKMHashingData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FWN_CS_PartSKMHashingData> @ 14a69cb40

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_PartSKMHashingData>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)((longlong)pvVar1 + 4);
      puVar2[2] = *(undefined4 *)((longlong)pvVar1 + 8);
      puVar2[3] = *(undefined4 *)((longlong)pvVar1 + 0xc);
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar2 + 4),
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x10));
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar2 + 8),
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x20));
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(puVar2 + 0xc),
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)pvVar1 + 0x30));
      puVar2[0x10] = *(undefined4 *)((longlong)pvVar1 + 0x40);
      puVar2[0x11] = *(undefined4 *)((longlong)pvVar1 + 0x44);
      puVar2[0x12] = *(undefined4 *)((longlong)pvVar1 + 0x48);
      puVar2[0x13] = *(undefined4 *)((longlong)pvVar1 + 0x4c);
      *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)((longlong)pvVar1 + 0x50);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x58);
      puVar2 = puVar2 + 0x16;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_LightContainer> @ 14a69cde0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_LightContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_CS_LightContainer> @ 14a69cdf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_LightContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_CS_LightContainer> @ 14a69ce00

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_LightContainer>(void *param_1)

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

// Copy<FWN_CS_LightContainer> @ 14a69cf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_LightContainer>(void *param_1,void *param_2,int param_3)

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
          ConstructItems<TObjectPtr<ULightComponent>,TObjectPtr<ULightComponent>,int>
                    (pFVar6->Data,(TObjectPtr<ULightComponent> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_ColliderContainer> @ 14a69d120

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_ColliderContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_CS_ColliderContainer> @ 14a69d130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_ColliderContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_CS_ColliderContainer> @ 14a69d140

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_ColliderContainer>(void *param_1)

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

// Copy<FWN_CS_ColliderContainer> @ 14a69d160

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_ColliderContainer>(void *param_1,void *param_2,int param_3)

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
          ConstructItems<TObjectPtr<UBoxComponent>,TObjectPtr<UBoxComponent>,int>
                    (pFVar6->Data,(TObjectPtr<UBoxComponent> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_ServerHitCapsuleContainer> @ 14a69d370

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_ServerHitCapsuleContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_CS_ServerHitCapsuleContainer> @ 14a69d380

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_CS_ServerHitCapsuleContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_CS_ServerHitCapsuleContainer> @ 14a69d390

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_ServerHitCapsuleContainer>(void *param_1)

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

// Construct<FWN_CS_CharacterDesc> @ 14a69d3b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterDesc>(void *param_1)

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
  FWN_CS_CharacterDesc::FWN_CS_CharacterDesc(param_1);
  return;
}

// ConstructForTests<FWN_CS_CharacterDesc> @ 14a69d3e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterDesc>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x100;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x28))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined4 *)((longlong)param_1 + 0x38) = 2;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FWN_CS_CharacterDesc> @ 14a69d3f0

/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterDesc>(void *param_1)

{
  DestructItems<FWN_CS_CharacterPresetDesc,int>
            (*(FWN_CS_CharacterPresetDesc **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FWN_CS_CharacterPartDesc,int>
            (*(FWN_CS_CharacterPartDesc **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FWN_CS_ServerHitCapsuleContainer> @ 14a69d400

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_ServerHitCapsuleContainer>
          (void *param_1,void *param_2,int param_3)

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
          ConstructItems<TObjectPtr<UCapsuleComponent>,TObjectPtr<UCapsuleComponent>,int>
                    (pFVar6->Data,(TObjectPtr<UCapsuleComponent> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FWN_CS_CharacterDesc> @ 14a69d4d0

/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterDesc>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FWN_CS_CharacterPartDesc *pFVar4;
  FWN_CS_CharacterPresetDesc *pFVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  
  if (param_3 != 0) {
    pvVar7 = param_2;
    puVar8 = param_1;
    do {
      *puVar8 = *(undefined4 *)((longlong)puVar8 + ((longlong)param_2 - (longlong)param_1));
      *(undefined8 *)(puVar8 + 1) = *(undefined8 *)((longlong)pvVar7 + 4);
      *(undefined1 *)(puVar8 + 3) = *(undefined1 *)((longlong)pvVar7 + 0xc);
      *(undefined1 *)((longlong)puVar8 + 0xd) = *(undefined1 *)((longlong)pvVar7 + 0xd);
      *(undefined1 *)((longlong)puVar8 + 0xe) = *(undefined1 *)((longlong)pvVar7 + 0xe);
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)((longlong)pvVar7 + 0x10);
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x20);
      *(undefined8 *)(puVar8 + 6) = *(undefined8 *)((longlong)pvVar7 + 0x18);
      *(undefined8 *)(puVar8 + 8) = uVar6;
      FUtf8String::operator=((FUtf8String *)(puVar8 + 10),(FUtf8String *)((longlong)pvVar7 + 0x28));
      puVar8[0xe] = *(undefined4 *)((longlong)pvVar7 + 0x38);
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0x48);
      *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)((longlong)pvVar7 + 0x40);
      *(undefined8 *)(puVar8 + 0x12) = uVar6;
      FUtf8String::operator=
                ((FUtf8String *)(puVar8 + 0x14),(FUtf8String *)((longlong)pvVar7 + 0x50));
      pFVar1 = (ForAnyElementType *)(puVar8 + 0x18);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar7 + 0x60)) {
        DestructItems<FWN_CS_CharacterPartDesc,int>
                  ((FWN_CS_CharacterPartDesc *)pFVar1->Data,puVar8[0x1a]);
        iVar3 = *(int *)((longlong)pvVar7 + 0x68);
        piVar2 = puVar8 + 0x1b;
        pFVar4 = (FWN_CS_CharacterPartDesc *)((ForAnyElementType *)((longlong)pvVar7 + 0x60))->Data;
        puVar8[0x1a] = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x88,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FWN_CS_CharacterPartDesc,FWN_CS_CharacterPartDesc,int>
                    (pFVar1->Data,pFVar4,iVar3);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar8 + 0x1c);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar7 + 0x70)) {
        DestructItems<FWN_CS_CharacterPresetDesc,int>
                  ((FWN_CS_CharacterPresetDesc *)pFVar1->Data,puVar8[0x1e]);
        iVar3 = *(int *)((longlong)pvVar7 + 0x78);
        piVar2 = puVar8 + 0x1f;
        pFVar5 = (FWN_CS_CharacterPresetDesc *)
                 ((ForAnyElementType *)((longlong)pvVar7 + 0x70))->Data;
        puVar8[0x1e] = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x90,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FWN_CS_CharacterPresetDesc,FWN_CS_CharacterPresetDesc,int>
                    (pFVar1->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pvVar7 = (void *)((longlong)pvVar7 + 0x80);
      puVar8 = puVar8 + 0x20;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_HitSphereContainer> @ 14a69d8e0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_HitSphereContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_CS_HitSphereContainer> @ 14a69d930

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_HitSphereContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_CS_HitSphereContainer> @ 14a69d940

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_HitSphereContainer>(void *param_1)

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

// Copy<FWN_CS_HitSphereContainer> @ 14a69d960

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_HitSphereContainer>(void *param_1,void *param_2,int param_3)

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
          ConstructItems<TObjectPtr<USphereComponent>,TObjectPtr<USphereComponent>,int>
                    (pFVar6->Data,(TObjectPtr<USphereComponent> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_CharacterNonePartInfo> @ 14a69daf0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterNonePartInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWN_CS_CharacterNonePartInfo> @ 14a69db00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterNonePartInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWN_CS_CharacterNonePartInfo> @ 14a69db10

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterNonePartInfo>(void *param_1)

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

// Copy<FWN_CS_CharacterNonePartInfo> @ 14a69db30

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterNonePartInfo>
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
                    (0x60,8,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 0x60);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_CharacterPresetDesc> @ 14a69dc10

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterPresetDesc>(void *param_1)

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
  FWN_CS_CharacterPresetDesc::FWN_CS_CharacterPresetDesc(param_1);
  return;
}

// ConstructForTests<FWN_CS_CharacterPresetDesc> @ 14a69dc50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPresetDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x28))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x28),0);
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FWN_CS_CharacterPresetDesc> @ 14a69dc60

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPresetDesc>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  DestructItems<FWN_CS_CharacterPresetSlotDesc,int>
            (*(FWN_CS_CharacterPresetSlotDesc **)((longlong)param_1 + 0x68),
             *(int *)((longlong)param_1 + 0x70));
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FWN_CS_CharacterPresetDesc> @ 14a69dd70

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterPresetDesc>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FWN_CS_CharacterPresetSlotDesc *pFVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    pvVar8 = param_2;
    do {
      *puVar7 = *(undefined4 *)((longlong)puVar7 + ((longlong)param_2 - (longlong)param_1));
      *(undefined8 *)(puVar7 + 1) = *(undefined8 *)((longlong)pvVar8 + 4);
      puVar7[3] = *(undefined4 *)((longlong)pvVar8 + 0xc);
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)((longlong)pvVar8 + 0x10);
      uVar6 = *(undefined8 *)((longlong)pvVar8 + 0x20);
      *(undefined8 *)(puVar7 + 6) = *(undefined8 *)((longlong)pvVar8 + 0x18);
      *(undefined8 *)(puVar7 + 8) = uVar6;
      FUtf8String::operator=((FUtf8String *)(puVar7 + 10),(FUtf8String *)((longlong)pvVar8 + 0x28));
      uVar6 = *(undefined8 *)((longlong)pvVar8 + 0x40);
      pFVar1 = (ForAnyElementType *)(puVar7 + 0x16);
      *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)((longlong)pvVar8 + 0x38);
      *(undefined8 *)(puVar7 + 0x10) = uVar6;
      puVar7[0x12] = *(undefined4 *)((longlong)pvVar8 + 0x48);
      *(undefined8 *)(puVar7 + 0x13) = *(undefined8 *)((longlong)pvVar8 + 0x4c);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar8 + 0x58)) {
        iVar3 = *(int *)((longlong)pvVar8 + 0x60);
        piVar2 = puVar7 + 0x19;
        pFVar4 = ((ForAnyElementType *)((longlong)pvVar8 + 0x58))->Data;
        puVar7[0x18] = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x68,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x68);
          }
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar7 + 0x1a);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar8 + 0x68)) {
        DestructItems<FWN_CS_CharacterPresetSlotDesc,int>
                  ((FWN_CS_CharacterPresetSlotDesc *)pFVar1->Data,puVar7[0x1c]);
        iVar3 = *(int *)((longlong)pvVar8 + 0x70);
        piVar2 = puVar7 + 0x1d;
        pFVar5 = (FWN_CS_CharacterPresetSlotDesc *)
                 ((ForAnyElementType *)((longlong)pvVar8 + 0x68))->Data;
        puVar7[0x1c] = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          ConstructItems<FWN_CS_CharacterPresetSlotDesc,FWN_CS_CharacterPresetSlotDesc,int>
                    (pFVar1->Data,pFVar5,iVar3);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar7 + 0x1e);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar8 + 0x78)) {
        iVar3 = *(int *)((longlong)pvVar8 + 0x80);
        piVar2 = puVar7 + 0x21;
        pFVar4 = ((ForAnyElementType *)((longlong)pvVar8 + 0x78))->Data;
        puVar7[0x20] = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 << 4);
          }
        }
      }
      puVar7[0x22] = *(undefined4 *)((longlong)pvVar8 + 0x88);
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 0x24;
      pvVar8 = (void *)((longlong)pvVar8 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_CharacterPartInfo> @ 14a69dff0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterPartInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0x2f;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FWN_CS_CharacterPartInfo> @ 14a69e060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPartInfo>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 8) = 0x2f;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// Destruct<FWN_CS_CharacterPartInfo> @ 14a69e0c0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPartInfo>(void *param_1)

{
  DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
            (*(FWN_CS_CharacterPresetSlotMaterialDesc **)((longlong)param_1 + 0x78),
             *(int *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FWN_CS_CharacterPartInfo> @ 14a69e0d0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterPartInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
      FUtf8String::operator=
                ((FUtf8String *)((longlong)param_1 + 0x28),(FUtf8String *)((longlong)param_2 + 0x28)
                );
      *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
      TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x48),
                 (TArray<FWN_CS_HitSphereInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x48));
      TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x58),
                 (TArray<FWN_CS_ServerHitCapsuleInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x58));
      TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x68),
                 (TArray<FWN_CS_PartColliderInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x68));
      TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x78),
                 (TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x78));
      param_2 = (void *)((longlong)param_2 + 0x88);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x88);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_CharacterPresetSlotDesc> @ 14a69e300

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterPresetSlotDesc>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FWN_CS_CharacterPresetSlotDesc> @ 14a69e370

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPresetSlotDesc>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FWN_CS_CharacterPresetSlotDesc> @ 14a69e3a0

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPresetSlotDesc>(void *param_1)

{
  DestructItems<FWN_CS_CharacterPresetSlotMaterialDesc,int>
            (*(FWN_CS_CharacterPresetSlotMaterialDesc **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FWN_CS_CharacterPresetSlotDesc> @ 14a69e3e0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterPresetSlotDesc>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 4) = *(undefined1 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x14);
      TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x18),
                 (TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar1 + 0x18));
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_CharacterSoulInfo> @ 14a69e4a0

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterSoulInfo>(void *param_1)

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
  *(undefined1 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined4 *)((longlong)param_1 + 0x50) = 3;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  return;
}

// ConstructForTests<FWN_CS_CharacterSoulInfo> @ 14a69e500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterSoulInfo>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 3;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  return;
}

// Destruct<FWN_CS_CharacterSoulInfo> @ 14a69e570

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterSoulInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    return;
  }
  return;
}

// Copy<FWN_CS_CharacterSoulInfo> @ 14a69e660

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterSoulInfo>(void *param_1,void *param_2,int param_3)

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
      puVar3[2] = *(undefined1 *)((longlong)pvVar2 + 2);
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)((longlong)pvVar2 + 8);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x18);
      *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)((longlong)pvVar2 + 0x10);
      *(undefined8 *)(puVar3 + 0x18) = uVar1;
      FUtf8String::operator=
                ((FUtf8String *)(puVar3 + 0x20),(FUtf8String *)((longlong)pvVar2 + 0x20));
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x38);
      *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)((longlong)pvVar2 + 0x30);
      *(undefined8 *)(puVar3 + 0x38) = uVar1;
      FUtf8String::operator=
                ((FUtf8String *)(puVar3 + 0x40),(FUtf8String *)((longlong)pvVar2 + 0x40));
      *(undefined4 *)(puVar3 + 0x50) = *(undefined4 *)((longlong)pvVar2 + 0x50);
      puVar3[0x54] = *(undefined1 *)((longlong)pvVar2 + 0x54);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x58);
      puVar3 = puVar3 + 0x58;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_CharacterPresetSlotMaterialDesc> @ 14a69e720

void __cdecl
UE::CoreUObject::Private::Construct<FWN_CS_CharacterPresetSlotMaterialDesc>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FWN_CS_CharacterPresetSlotMaterialDesc> @ 14a69e7b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterPresetSlotMaterialDesc>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FWN_CS_CharacterPresetSlotMaterialDesc> @ 14a69e820

void __cdecl
UE::CoreUObject::Private::Destruct<FWN_CS_CharacterPresetSlotMaterialDesc>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x58));
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FWN_CS_CharacterPresetSlotMaterialDesc> @ 14a69e880

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterPresetSlotMaterialDesc>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      operator=((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 8),
                (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + lVar1 + 8));
      TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x58),
                  (TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + lVar1 + 0x58));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xa8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWN_CS_CharacterLightDesc> @ 14a69e950

void __cdecl UE::CoreUObject::Private::Construct<FWN_CS_CharacterLightDesc>(void *param_1)

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
  FWN_CS_CharacterLightDesc::FWN_CS_CharacterLightDesc(param_1);
  return;
}

// ConstructForTests<FWN_CS_CharacterLightDesc> @ 14a69e980

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWN_CS_CharacterLightDesc>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  uint uVar3;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 2;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(float *)((longlong)param_1 + 0x10) =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
  *(float *)((longlong)param_1 + 0x14) =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
  *(float *)((longlong)param_1 + 0x18) =
       FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
  uVar3 = (uint)FColor::White.field0_0x0._s_0.A;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0x43480000;
  *(float *)((longlong)param_1 + 0x1c) = (float)uVar3 * __real_3b808081;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x50) = dVar2;
  *(double *)((longlong)param_1 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x42300000;
  return;
}

// Destruct<FWN_CS_CharacterLightDesc> @ 14a69e990

void __cdecl UE::CoreUObject::Private::Destruct<FWN_CS_CharacterLightDesc>(void *param_1)

{
  return;
}

// Copy<FWN_CS_CharacterLightDesc> @ 14a69e9a0

bool __cdecl
UE::CoreUObject::Private::Copy<FWN_CS_CharacterLightDesc>(void *param_1,void *param_2,int param_3)

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

