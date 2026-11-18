// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ARUtilities
// Functions: 5

// Construct<FARKitPoseTrackingConfig> @ 14cfc65e0

void __cdecl UE::CoreUObject::Private::Construct<FARKitPoseTrackingConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FARKitPoseTrackingConfig> @ 14cfc6620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FARKitPoseTrackingConfig>(void *param_1)

{
  *(undefined8 *)param_1 = 0xbff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FARKitPoseTrackingConfig> @ 14cfc6660

void __cdecl UE::CoreUObject::Private::Destruct<FARKitPoseTrackingConfig>(void *param_1)

{
  return;
}

// Copy<FARKitPoseTrackingConfig> @ 14cfc6670

bool __cdecl
UE::CoreUObject::Private::Copy<FARKitPoseTrackingConfig>(void *param_1,void *param_2,int param_3)

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

// DereferenceIfNecessary<AARPassthroughManager,AARPassthroughManager_*_&> @ 14cfc7270

AARPassthroughManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<AARPassthroughManager,AARPassthroughManager_*_&>
          (AARPassthroughManager **param_1)

{
  return *param_1;
}

