// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 12

// Construct<FTransformHandle> @ 143124bd0

void __cdecl UE::CoreUObject::Private::Construct<FTransformHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTransformHandle> @ 143124be0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransformHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTransformHandle> @ 143124bf0

void __cdecl UE::CoreUObject::Private::Destruct<FTransformHandle>(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if ((plVar1 != (longlong *)0x0) && (*(int *)((longlong)param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000143124c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)((longlong)param_1 + 0xc));
    return;
  }
  return;
}

// Copy<FTransformHandle> @ 143124c20

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformHandle>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = param_1;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar1 = (longlong *)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar5);
      if ((plVar2 != (longlong *)*plVar1) ||
         (*(int *)((longlong)plVar5 + 0xc) != *(int *)((longlong)plVar1 + 0xc))) {
        if ((plVar2 != (longlong *)0x0) && ((int)plVar5[1] == 0)) {
          (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)((longlong)plVar5 + 0xc));
        }
        puVar3 = (undefined8 *)*plVar1;
        *plVar5 = (longlong)puVar3;
        lVar4 = plVar1[1];
        *(int *)(plVar5 + 1) = (int)lVar4;
        *(undefined4 *)((longlong)plVar5 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
        if ((puVar3 != (undefined8 *)0x0) && ((int)lVar4 == 0)) {
          (**(code **)*puVar3)();
        }
      }
      param_3 = param_3 + -1;
      plVar5 = plVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTransformDynamicState> @ 143124df0

void __cdecl UE::CoreUObject::Private::Construct<FTransformDynamicState>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)param_1 = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// ConstructForTests<FTransformDynamicState> @ 143124ea0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransformDynamicState>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// Destruct<FTransformDynamicState> @ 143124f10

void __cdecl UE::CoreUObject::Private::Destruct<FTransformDynamicState>(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)param_1 + 0x80);
  if ((plVar1 != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x88) == 0)) {
    (**(code **)(*plVar1 + 8))(plVar1,*(undefined4 *)((longlong)param_1 + 0x8c));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
    return;
  }
  return;
}

// Copy<FTransformDynamicState> @ 143124f60

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformDynamicState>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x70),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_2 + 0x70));
      FTransformHandle::operator=
                ((FTransformHandle *)((longlong)param_1 + 0x80),
                 (FTransformHandle *)((longlong)param_2 + 0x80));
      puVar1 = (undefined1 *)((longlong)param_2 + 0x90);
      param_2 = (void *)((longlong)param_2 + 0xa0);
      *(undefined1 *)((longlong)param_1 + 0x90) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0xa0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTransformStaticState> @ 143125170

void __cdecl UE::CoreUObject::Private::Construct<FTransformStaticState>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTransformStaticState> @ 143125180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransformStaticState>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTransformStaticState> @ 143125190

void __cdecl UE::CoreUObject::Private::Destruct<FTransformStaticState>(void *param_1)

{
  return;
}

// Copy<FTransformStaticState> @ 1431251f0

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformStaticState>(void *param_1,void *param_2,int param_3)

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

