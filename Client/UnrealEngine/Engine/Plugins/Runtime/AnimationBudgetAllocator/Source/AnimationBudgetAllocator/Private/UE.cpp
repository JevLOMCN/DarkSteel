// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 6

// Construct<FAnimationBudgetAllocatorParameters> @ 14a68fde0

void __cdecl UE::CoreUObject::Private::Construct<FAnimationBudgetAllocatorParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3da3d70a;
  *(undefined4 *)((longlong)param_1 + 0x28) = 4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x46ea6000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x4e5693a4;
  return;
}

// ConstructForTests<FAnimationBudgetAllocatorParameters> @ 14a68fe80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimationBudgetAllocatorParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x18) = 6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3da3d70a;
  *(undefined4 *)((longlong)param_1 + 0x28) = 4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40200000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x46ea6000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x4e5693a4;
  return;
}

// Destruct<FAnimationBudgetAllocatorParameters> @ 14a68ff20

void __cdecl UE::CoreUObject::Private::Destruct<FAnimationBudgetAllocatorParameters>(void *param_1)

{
  return;
}

// Copy<FAnimationBudgetAllocatorParameters> @ 14a68ff30

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimationBudgetAllocatorParameters>
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

// DereferenceIfNecessary<FAnimationBudgetAllocator,FAnimationBudgetAllocator_*_&> @ 14a690d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimationBudgetAllocator * __cdecl
UE::Core::Private::DereferenceIfNecessary<FAnimationBudgetAllocator,FAnimationBudgetAllocator_*_&>
          (FAnimationBudgetAllocator **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FAnimationBudgetAllocatorModule,FAnimationBudgetAllocatorModule_*_&> @ 14a690da0

FAnimationBudgetAllocatorModule * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FAnimationBudgetAllocatorModule,FAnimationBudgetAllocatorModule_*_&>
          (FAnimationBudgetAllocatorModule **param_1)

{
  return *param_1;
}

