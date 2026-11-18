// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 388

// PackageDirtyStateChangedEvent'' @ 140f246f0

void __cdecl `dynamic_initializer_for_'UPackage::PackageDirtyStateChangedEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UPackage::PackageDirtyStateChangedEvent__);
  return;
}

// PackageMarkedDirtyEvent'' @ 140f24710

void __cdecl `dynamic_initializer_for_'UPackage::PackageMarkedDirtyEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UPackage::PackageMarkedDirtyEvent__);
  return;
}

// PackageSavedEvent'' @ 140f24730

void __cdecl `dynamic_initializer_for_'UPackage::PackageSavedEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UPackage::PackageSavedEvent__);
  return;
}

// PackageSavedWithContextEvent'' @ 140f24750

void __cdecl `dynamic_initializer_for_'UPackage::PackageSavedWithContextEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UPackage::PackageSavedWithContextEvent__);
  return;
}

// PreSavePackageEvent'' @ 140f24770

void __cdecl `dynamic_initializer_for_'UPackage::PreSavePackageEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UPackage::PreSavePackageEvent__);
  return;
}

// PreSavePackageWithContextEvent'' @ 140f24790

void __cdecl `dynamic_initializer_for_'UPackage::PreSavePackageWithContextEvent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UPackage::PreSavePackageWithContextEvent__);
  return;
}

// RootNodeID'' @ 140f247b0

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'Box2D_Ops'' @ 140f247e0

void __cdecl _dynamic_initializer_for__Box2D_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Box2D");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Box2D_Ops.Name.AssetName = local_28.AssetName;
  Box2D_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x28;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBox2<double>,&UE::CoreUObject::Private::Identical<UE::Math::TBox2<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBox2<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Box2D_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Box2D_Ops__);
  return;
}

// `dynamic_initializer_for_'Box2d_Ops'' @ 140f248a0

void __cdecl _dynamic_initializer_for__Box2d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Box2d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Box2d_Ops.Name.AssetName = local_28.AssetName;
  Box2d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x28;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBox2<double>,&UE::CoreUObject::Private::Identical<UE::Math::TBox2<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBox2<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Box2d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Box2d_Ops__);
  return;
}

// `dynamic_initializer_for_'Box2f_Ops'' @ 140f24960

void __cdecl _dynamic_initializer_for__Box2f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Box2f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Box2f_Ops.Name.AssetName = local_28.AssetName;
  Box2f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x14;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBox2<float>,&UE::CoreUObject::Private::Identical<UE::Math::TBox2<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBox2<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Box2f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Box2f_Ops__);
  return;
}

// `dynamic_initializer_for_'Box3d_Ops'' @ 140f24a20

void __cdecl _dynamic_initializer_for__Box3d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Box3d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Box3d_Ops.Name.AssetName = local_28.AssetName;
  Box3d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x38;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBox<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TBox<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TBox<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBox<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TBox<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Box3d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Box3d_Ops__);
  return;
}

// `dynamic_initializer_for_'Box3f_Ops'' @ 140f24ae0

void __cdecl _dynamic_initializer_for__Box3f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Box3f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Box3f_Ops.Name.AssetName = local_28.AssetName;
  Box3f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x1c;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBox<float>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TBox<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TBox<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBox<float>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TBox<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Box3f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Box3f_Ops__);
  return;
}

// `dynamic_initializer_for_'BoxSphereBounds3d_Ops'' @ 140f24ba0

void __cdecl _dynamic_initializer_for__BoxSphereBounds3d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"BoxSphereBounds3d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  BoxSphereBounds3d_Ops.Name.AssetName = local_28.AssetName;
  BoxSphereBounds3d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x38;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBoxSphereBounds<double,double>,&UE::CoreUObject::Private::Identical<UE::Math::TBoxSphereBounds<double,double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBoxSphereBounds<double,double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = BoxSphereBounds3d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__BoxSphereBounds3d_Ops__);
  return;
}

// `dynamic_initializer_for_'BoxSphereBounds3f_Ops'' @ 140f24c60

void __cdecl _dynamic_initializer_for__BoxSphereBounds3f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"BoxSphereBounds3f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  BoxSphereBounds3f_Ops.Name.AssetName = local_28.AssetName;
  BoxSphereBounds3f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x1c;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBoxSphereBounds<float,float>,&UE::CoreUObject::Private::Identical<UE::Math::TBoxSphereBounds<float,float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBoxSphereBounds<float,float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = BoxSphereBounds3f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__BoxSphereBounds3f_Ops__);
  return;
}

// `dynamic_initializer_for_'BoxSphereBounds_Ops'' @ 140f24d20

void __cdecl _dynamic_initializer_for__BoxSphereBounds_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"BoxSphereBounds");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  BoxSphereBounds_Ops.Name.AssetName = local_28.AssetName;
  BoxSphereBounds_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x38;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBoxSphereBounds<double,double>,&UE::CoreUObject::Private::Identical<UE::Math::TBoxSphereBounds<double,double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBoxSphereBounds<double,double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = BoxSphereBounds_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__BoxSphereBounds_Ops__);
  return;
}

// `dynamic_initializer_for_'Box_Ops'' @ 140f24de0

void __cdecl _dynamic_initializer_for__Box_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Box");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Box_Ops.Name.AssetName = local_28.AssetName;
  Box_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x38;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TBox<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TBox<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TBox<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TBox<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TBox<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Box_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Box_Ops__);
  return;
}

// `dynamic_initializer_for_'CVarEnsureAgainstLargeProperties'' @ 140f24ea0

void __cdecl
UE::CoreUObject::Private::_dynamic_initializer_for__CVarEnsureAgainstLargeProperties__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnsureAgainstLargeProperties,L"CoreUObject.EnsureAgainstLargeProperties",
             &EnsureAgainstLargeProperties,
             L"Ensure (warn) against properties that could possibly break in future versions of the Engine due a reduction in the max size of FProperty::ElementSize."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnsureAgainstLargeProperties__);
  return;
}

// `dynamic_initializer_for_'CVarNonNullableBehavior'' @ 140f24ef0

void __cdecl UE::CoreUObject::Private::_dynamic_initializer_for__CVarNonNullableBehavior__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 2;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarNonNullableBehavior,L"CoreUObject.NonNullableBehavior",local_res8,
             L"Sets the behavior when a non-null property cannot be resolved into an object reference - 0=Leave property null and log a warning, 1=Leave property null and log an error, 2=Create a default object and log a warning if successful, or leave it null and log an error if unsuccessful"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNonNullableBehavior__);
  return;
}

// `dynamic_initializer_for_'CVarRelocationMode'' @ 140f24f40

void __cdecl UE::Package::Relocation::Private::_dynamic_initializer_for__CVarRelocationMode__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarRelocationMode,L"Package.Relocation",local_res8,
             L"Define when we should run the relocation logic for the dependencies of a package. Note changing this value at runtime won\'t update the cached depencencies in the asset registry.\n  0: Off (never apply relocation. References to other relocated packages will give errors and fail to resolve.)\n  1: Relocate any asset saved after EUnrealEngineObjectUE5Version::ADD_SOFTOBJECTPATH_LIST (5.1). Default value for the new projects.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarRelocationMode__);
  return;
}

// `dynamic_initializer_for_'Color_Ops'' @ 140f24f90

void __cdecl _dynamic_initializer_for__Color_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Color");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Color_Ops.Name.AssetName = local_28.AssetName;
  Color_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 4;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FColor,&UE::CoreUObject::Private::SerializeArchive<FColor>,&UE::CoreUObject::Private::Identical<FColor>,&UE::CoreUObject::Private::GetStructTypeHash<FColor>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Color_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Color_Ops__);
  return;
}

// `dynamic_initializer_for_'DateTime_Ops'' @ 140f25050

void __cdecl _dynamic_initializer_for__DateTime_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"DateTime");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  DateTime_Ops.Name.AssetName = local_28.AssetName;
  DateTime_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FDateTime,&UE::CoreUObject::Private::Destruct<FDateTime>,&UE::CoreUObject::Private::SerializeArchive<FDateTime>,&UE::CoreUObject::Private::NetSerialize<FDateTime>,&UE::CoreUObject::Private::Copy<FDateTime>,&UE::CoreUObject::Private::Identical<FDateTime>,&UE::CoreUObject::Private::ExportTextItem<FDateTime>,&UE::CoreUObject::Private::ImportTextItem<FDateTime>,&UE::CoreUObject::Private::GetStructTypeHash<FDateTime>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = DateTime_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__DateTime_Ops__);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper22'' @ 140f25110

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper22__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_5>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper22,ShaderTypesReady,(TFunction<void___cdecl(void)> *)local_38
             ,false);
  return;
}

// `dynamic_initializer_for_'DelayedAutoRegisterHelper23'' @ 140f25170

void __cdecl _dynamic_initializer_for__DelayedAutoRegisterHelper23__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_6>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&DelayedAutoRegisterHelper23,ShaderTypesReady,(TFunction<void___cdecl(void)> *)local_38
             ,false);
  return;
}

// `dynamic_initializer_for_'FallbackStruct_Ops'' @ 140f251d0

void __cdecl _dynamic_initializer_for__FallbackStruct_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"FallbackStruct");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  FallbackStruct_Ops.Name.AssetName = local_28.AssetName;
  FallbackStruct_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 1;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FFallbackStruct,&UE::CoreUObject::Private::Construct<FFallbackStruct>,&UE::CoreUObject::Private::ConstructForTests<FFallbackStruct>_>
    ;
    pIVar3->Alignment = 1;
    pIVar4 = pIVar3;
  }
  local_18 = FallbackStruct_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__FallbackStruct_Ops__);
  return;
}

// `dynamic_initializer_for_'FrameNumber_Ops'' @ 140f25290

void __cdecl _dynamic_initializer_for__FrameNumber_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"FrameNumber");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  FrameNumber_Ops.Name.AssetName = local_28.AssetName;
  FrameNumber_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 4;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FFrameNumber,&UE::CoreUObject::Private::Destruct<FFrameNumber>,&UE::CoreUObject::Private::SerializeArchive<FFrameNumber>,&UE::CoreUObject::Private::Copy<FFrameNumber>,&UE::CoreUObject::Private::Identical<FFrameNumber>,&UE::CoreUObject::Private::GetStructTypeHash<FFrameNumber>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = FrameNumber_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__FrameNumber_Ops__);
  return;
}

// `dynamic_initializer_for_'FrameRate_Ops'' @ 140f25350

void __cdecl _dynamic_initializer_for__FrameRate_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"FrameRate");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  FrameRate_Ops.Name.AssetName = local_28.AssetName;
  FrameRate_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FFrameRate,&UE::CoreUObject::Private::Construct<FFrameRate>,&UE::CoreUObject::Private::ConstructForTests<FFrameRate>,&UE::CoreUObject::Private::Destruct<FFrameRate>,&UE::CoreUObject::Private::Copy<FFrameRate>,&UE::CoreUObject::Private::Identical<FFrameRate>,&UE::CoreUObject::Private::GetStructTypeHash<FFrameRate>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = FrameRate_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__FrameRate_Ops__);
  return;
}

// `dynamic_initializer_for_'FrameTime_Ops'' @ 140f25410

void __cdecl _dynamic_initializer_for__FrameTime_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"FrameTime");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  FrameTime_Ops.Name.AssetName = local_28.AssetName;
  FrameTime_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FFrameTime,&UE::CoreUObject::Private::Destruct<FFrameTime>,&UE::CoreUObject::Private::Copy<FFrameTime>,&UE::CoreUObject::Private::Identical<FFrameTime>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = FrameTime_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__FrameTime_Ops__);
  return;
}

// `dynamic_initializer_for_'GOnClearPackageResourceManagerDelegate'' @ 140f254d0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__GOnClearPackageResourceManagerDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__GOnClearPackageResourceManagerDelegate__);
  return;
}

// `dynamic_initializer_for_'GSetPackageResourceManagerDelegate'' @ 140f254f0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__GSetPackageResourceManagerDelegate__(void)

{
  atexit(_dynamic_atexit_destructor_for__GSetPackageResourceManagerDelegate__);
  return;
}

// `dynamic_initializer_for_'Guid_Ops'' @ 140f25510

void __cdecl _dynamic_initializer_for__Guid_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Guid");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Guid_Ops.Name.AssetName = local_28.AssetName;
  Guid_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FGuid,&UE::CoreUObject::Private::SerializeArchive<FGuid>,&UE::CoreUObject::Private::SerializeSlot<FGuid>,&UE::CoreUObject::Private::Identical<FGuid>,&UE::CoreUObject::Private::ExportTextItem<FGuid>,&UE::CoreUObject::Private::ImportTextItem<FGuid>,&UE::CoreUObject::Private::GetStructTypeHash<FGuid>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Guid_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Guid_Ops__);
  return;
}

// `dynamic_initializer_for_'Int32Point_Ops'' @ 140f255d0

void __cdecl _dynamic_initializer_for__Int32Point_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int32Point");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int32Point_Ops.Name.AssetName = local_28.AssetName;
  Int32Point_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntPoint<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntPoint<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntPoint<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntPoint<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntPoint<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Int32Point_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int32Point_Ops__);
  return;
}

// `dynamic_initializer_for_'Int32Vector2_Ops'' @ 140f25690

void __cdecl _dynamic_initializer_for__Int32Vector2_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int32Vector2");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int32Vector2_Ops.Name.AssetName = local_28.AssetName;
  Int32Vector2_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector2<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector2<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector2<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector2<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector2<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Int32Vector2_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int32Vector2_Ops__);
  return;
}

// `dynamic_initializer_for_'Int32Vector4_Ops'' @ 140f25750

void __cdecl _dynamic_initializer_for__Int32Vector4_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int32Vector4");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int32Vector4_Ops.Name.AssetName = local_28.AssetName;
  Int32Vector4_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector4<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector4<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector4<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector4<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector4<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Int32Vector4_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int32Vector4_Ops__);
  return;
}

// `dynamic_initializer_for_'Int32Vector_Ops'' @ 140f25810

void __cdecl _dynamic_initializer_for__Int32Vector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int32Vector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int32Vector_Ops.Name.AssetName = local_28.AssetName;
  Int32Vector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0xc;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector3<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector3<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector3<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector3<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector3<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Int32Vector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int32Vector_Ops__);
  return;
}

// `dynamic_initializer_for_'Int64Point_Ops'' @ 140f258d0

void __cdecl _dynamic_initializer_for__Int64Point_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int64Point");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int64Point_Ops.Name.AssetName = local_28.AssetName;
  Int64Point_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntPoint<__int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntPoint<__int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntPoint<__int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntPoint<__int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntPoint<__int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Int64Point_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int64Point_Ops__);
  return;
}

// `dynamic_initializer_for_'Int64Vector2_Ops'' @ 140f25990

void __cdecl _dynamic_initializer_for__Int64Vector2_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int64Vector2");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int64Vector2_Ops.Name.AssetName = local_28.AssetName;
  Int64Vector2_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector2<__int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector2<__int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector2<__int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector2<__int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector2<__int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Int64Vector2_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int64Vector2_Ops__);
  return;
}

// `dynamic_initializer_for_'Int64Vector4_Ops'' @ 140f25a50

void __cdecl _dynamic_initializer_for__Int64Vector4_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int64Vector4");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int64Vector4_Ops.Name.AssetName = local_28.AssetName;
  Int64Vector4_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector4<__int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector4<__int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector4<__int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector4<__int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector4<__int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Int64Vector4_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int64Vector4_Ops__);
  return;
}

// `dynamic_initializer_for_'Int64Vector_Ops'' @ 140f25b10

void __cdecl _dynamic_initializer_for__Int64Vector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Int64Vector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Int64Vector_Ops.Name.AssetName = local_28.AssetName;
  Int64Vector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector3<__int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector3<__int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector3<__int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector3<__int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector3<__int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Int64Vector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Int64Vector_Ops__);
  return;
}

// `dynamic_initializer_for_'IntPoint_Ops'' @ 140f25bd0

void __cdecl _dynamic_initializer_for__IntPoint_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"IntPoint");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  IntPoint_Ops.Name.AssetName = local_28.AssetName;
  IntPoint_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntPoint<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntPoint<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntPoint<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntPoint<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntPoint<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = IntPoint_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__IntPoint_Ops__);
  return;
}

// `dynamic_initializer_for_'IntVector2_Ops'' @ 140f25c90

void __cdecl _dynamic_initializer_for__IntVector2_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"IntVector2");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  IntVector2_Ops.Name.AssetName = local_28.AssetName;
  IntVector2_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector2<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector2<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector2<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector2<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector2<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = IntVector2_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__IntVector2_Ops__);
  return;
}

// `dynamic_initializer_for_'IntVector4_Ops'' @ 140f25d50

void __cdecl _dynamic_initializer_for__IntVector4_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"IntVector4");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  IntVector4_Ops.Name.AssetName = local_28.AssetName;
  IntVector4_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector4<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector4<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector4<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector4<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector4<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = IntVector4_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__IntVector4_Ops__);
  return;
}

// `dynamic_initializer_for_'IntVector_Ops'' @ 140f25e10

void __cdecl _dynamic_initializer_for__IntVector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"IntVector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  IntVector_Ops.Name.AssetName = local_28.AssetName;
  IntVector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0xc;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector3<int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector3<int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector3<int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector3<int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector3<int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = IntVector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__IntVector_Ops__);
  return;
}

// `dynamic_initializer_for_'InterpCurvePointFloat_Ops'' @ 140f25ed0

void __cdecl _dynamic_initializer_for__InterpCurvePointFloat_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"InterpCurvePointFloat");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  InterpCurvePointFloat_Ops.Name.AssetName = local_28.AssetName;
  InterpCurvePointFloat_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x14;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FInterpCurvePoint<float>,&UE::CoreUObject::Private::Construct<FInterpCurvePoint<float>_>,&UE::CoreUObject::Private::ConstructForTests<FInterpCurvePoint<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = InterpCurvePointFloat_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__InterpCurvePointFloat_Ops__);
  return;
}

// `dynamic_initializer_for_'InterpCurvePointLinearColor_Ops'' @ 140f25f90

void __cdecl _dynamic_initializer_for__InterpCurvePointLinearColor_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"InterpCurvePointLinearColor");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  InterpCurvePointLinearColor_Ops.Name.AssetName = local_28.AssetName;
  InterpCurvePointLinearColor_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x38;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FInterpCurvePoint<FLinearColor>,&UE::CoreUObject::Private::Construct<FInterpCurvePoint<FLinearColor>_>,&UE::CoreUObject::Private::ConstructForTests<FInterpCurvePoint<FLinearColor>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = InterpCurvePointLinearColor_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__InterpCurvePointLinearColor_Ops__);
  return;
}

// `dynamic_initializer_for_'InterpCurvePointQuat_Ops'' @ 140f26050

void __cdecl _dynamic_initializer_for__InterpCurvePointQuat_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"InterpCurvePointQuat");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  InterpCurvePointQuat_Ops.Name.AssetName = local_28.AssetName;
  InterpCurvePointQuat_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x80;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FInterpCurvePoint<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::Construct<FInterpCurvePoint<UE::Math::TQuat<double>_>_>,&UE::CoreUObject::Private::ConstructForTests<FInterpCurvePoint<UE::Math::TQuat<double>_>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = InterpCurvePointQuat_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__InterpCurvePointQuat_Ops__);
  return;
}

// `dynamic_initializer_for_'InterpCurvePointTwoVectors_Ops'' @ 140f26110

void __cdecl _dynamic_initializer_for__InterpCurvePointTwoVectors_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"InterpCurvePointTwoVectors");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  InterpCurvePointTwoVectors_Ops.Name.AssetName = local_28.AssetName;
  InterpCurvePointTwoVectors_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0xa0;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FInterpCurvePoint<FTwoVectors>,&UE::CoreUObject::Private::Construct<FInterpCurvePoint<FTwoVectors>_>,&UE::CoreUObject::Private::ConstructForTests<FInterpCurvePoint<FTwoVectors>_>,&UE::CoreUObject::Private::Destruct<FInterpCurvePoint<FTwoVectors>_>,&UE::CoreUObject::Private::Copy<FInterpCurvePoint<FTwoVectors>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = InterpCurvePointTwoVectors_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__InterpCurvePointTwoVectors_Ops__);
  return;
}

// `dynamic_initializer_for_'InterpCurvePointVector2D_Ops'' @ 140f261d0

void __cdecl _dynamic_initializer_for__InterpCurvePointVector2D_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"InterpCurvePointVector2D");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  InterpCurvePointVector2D_Ops.Name.AssetName = local_28.AssetName;
  InterpCurvePointVector2D_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x40;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FInterpCurvePoint<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::Construct<FInterpCurvePoint<UE::Math::TVector2<double>_>_>,&UE::CoreUObject::Private::ConstructForTests<FInterpCurvePoint<UE::Math::TVector2<double>_>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = InterpCurvePointVector2D_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__InterpCurvePointVector2D_Ops__);
  return;
}

// `dynamic_initializer_for_'InterpCurvePointVector_Ops'' @ 140f26290

void __cdecl _dynamic_initializer_for__InterpCurvePointVector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"InterpCurvePointVector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  InterpCurvePointVector_Ops.Name.AssetName = local_28.AssetName;
  InterpCurvePointVector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x58;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FInterpCurvePoint<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::Construct<FInterpCurvePoint<UE::Math::TVector<double>_>_>,&UE::CoreUObject::Private::ConstructForTests<FInterpCurvePoint<UE::Math::TVector<double>_>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = InterpCurvePointVector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__InterpCurvePointVector_Ops__);
  return;
}

// `dynamic_initializer_for_'LinearColor_Ops'' @ 140f26350

void __cdecl _dynamic_initializer_for__LinearColor_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"LinearColor");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  LinearColor_Ops.Name.AssetName = local_28.AssetName;
  LinearColor_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FLinearColor,&UE::CoreUObject::Private::SerializeArchive<FLinearColor>,&UE::CoreUObject::Private::SerializeSlot<FLinearColor>,&UE::CoreUObject::Private::Identical<FLinearColor>,&UE::CoreUObject::Private::GetStructTypeHash<FLinearColor>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = LinearColor_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__LinearColor_Ops__);
  return;
}

// `dynamic_initializer_for_'LogPackageRelocation'' @ 140f26410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPackageRelocation__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPackageRelocation,L"LogPackageRelocation",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPackageRelocation__);
  return;
}

// `dynamic_initializer_for_'LogPackageResourceManager'' @ 140f26450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPackageResourceManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogPackageResourceManager,L"LogPackageResourceManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPackageResourceManager__);
  return;
}

// `dynamic_initializer_for_'LogProperty'' @ 140f26490

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogProperty__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogProperty,L"LogProperty",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogProperty__);
  return;
}

// `dynamic_initializer_for_'Matrix44d_Ops'' @ 140f264d0

void __cdecl _dynamic_initializer_for__Matrix44d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Matrix44d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Matrix44d_Ops.Name.AssetName = local_28.AssetName;
  Matrix44d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x80;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TMatrix<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TMatrix<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TMatrix<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TMatrix<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Matrix44d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Matrix44d_Ops__);
  return;
}

// `dynamic_initializer_for_'Matrix44f_Ops'' @ 140f26590

void __cdecl _dynamic_initializer_for__Matrix44f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Matrix44f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Matrix44f_Ops.Name.AssetName = local_28.AssetName;
  Matrix44f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x40;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TMatrix<float>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TMatrix<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TMatrix<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TMatrix<float>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Matrix44f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Matrix44f_Ops__);
  return;
}

// `dynamic_initializer_for_'Matrix_Ops'' @ 140f26650

void __cdecl _dynamic_initializer_for__Matrix_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Matrix");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Matrix_Ops.Name.AssetName = local_28.AssetName;
  Matrix_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x80;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TMatrix<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TMatrix<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TMatrix<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TMatrix<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Matrix_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Matrix_Ops__);
  return;
}

// `dynamic_initializer_for_'OrientedBox_Ops'' @ 140f26710

void __cdecl _dynamic_initializer_for__OrientedBox_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"OrientedBox");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  OrientedBox_Ops.Name.AssetName = local_28.AssetName;
  OrientedBox_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x78;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FOrientedBox,&UE::CoreUObject::Private::Construct<FOrientedBox>,&UE::CoreUObject::Private::ConstructForTests<FOrientedBox>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = OrientedBox_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__OrientedBox_Ops__);
  return;
}

// `dynamic_initializer_for_'Plane4d_Ops'' @ 140f267d0

void __cdecl _dynamic_initializer_for__Plane4d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Plane4d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Plane4d_Ops.Name.AssetName = local_28.AssetName;
  Plane4d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TPlane<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TPlane<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Plane4d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Plane4d_Ops__);
  return;
}

// `dynamic_initializer_for_'Plane4f_Ops'' @ 140f26890

void __cdecl _dynamic_initializer_for__Plane4f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Plane4f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Plane4f_Ops.Name.AssetName = local_28.AssetName;
  Plane4f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TPlane<float>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TPlane<float>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TPlane<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TPlane<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TPlane<float>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TPlane<float>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Plane4f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Plane4f_Ops__);
  return;
}

// `dynamic_initializer_for_'Plane_Ops'' @ 140f26950

void __cdecl _dynamic_initializer_for__Plane_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Plane");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Plane_Ops.Name.AssetName = local_28.AssetName;
  Plane_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TPlane<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TPlane<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TPlane<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Plane_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Plane_Ops__);
  return;
}

// `dynamic_initializer_for_'QualifiedFrameTime_Ops'' @ 140f26a10

void __cdecl _dynamic_initializer_for__QualifiedFrameTime_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"QualifiedFrameTime");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  QualifiedFrameTime_Ops.Name.AssetName = local_28.AssetName;
  QualifiedFrameTime_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FQualifiedFrameTime,&UE::CoreUObject::Private::Construct<FQualifiedFrameTime>,&UE::CoreUObject::Private::ConstructForTests<FQualifiedFrameTime>,&UE::CoreUObject::Private::Destruct<FQualifiedFrameTime>,&UE::CoreUObject::Private::Copy<FQualifiedFrameTime>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = QualifiedFrameTime_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__QualifiedFrameTime_Ops__);
  return;
}

// `dynamic_initializer_for_'Quat4d_Ops'' @ 140f26ad0

void __cdecl _dynamic_initializer_for__Quat4d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Quat4d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Quat4d_Ops.Name.AssetName = local_28.AssetName;
  Quat4d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TQuat<double>,&UE::CoreUObject::Private::Construct<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::ConstructForTests<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TQuat<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Quat4d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Quat4d_Ops__);
  return;
}

// `dynamic_initializer_for_'Quat4f_Ops'' @ 140f26b90

void __cdecl _dynamic_initializer_for__Quat4f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Quat4f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Quat4f_Ops.Name.AssetName = local_28.AssetName;
  Quat4f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TQuat<float>,&UE::CoreUObject::Private::Construct<UE::Math::TQuat<float>_>,&UE::CoreUObject::Private::ConstructForTests<UE::Math::TQuat<float>_>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TQuat<float>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TQuat<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TQuat<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TQuat<float>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TQuat<float>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Quat4f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Quat4f_Ops__);
  return;
}

// `dynamic_initializer_for_'Quat_Ops'' @ 140f26c50

void __cdecl _dynamic_initializer_for__Quat_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Quat");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Quat_Ops.Name.AssetName = local_28.AssetName;
  Quat_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TQuat<double>,&UE::CoreUObject::Private::Construct<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::ConstructForTests<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TQuat<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TQuat<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Quat_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Quat_Ops__);
  return;
}

// `dynamic_initializer_for_'RandomStream_Ops'' @ 140f26d10

void __cdecl _dynamic_initializer_for__RandomStream_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"RandomStream");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  RandomStream_Ops.Name.AssetName = local_28.AssetName;
  RandomStream_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FRandomStream,&UE::CoreUObject::Private::Destruct<FRandomStream>,&UE::CoreUObject::Private::Copy<FRandomStream>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = RandomStream_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__RandomStream_Ops__);
  return;
}

// `dynamic_initializer_for_'Ray3d_Ops'' @ 140f26dd0

void __cdecl _dynamic_initializer_for__Ray3d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Ray3d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Ray3d_Ops.Name.AssetName = local_28.AssetName;
  Ray3d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x30;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TRay<double>,&UE::CoreUObject::Private::Identical<UE::Math::TRay<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TRay<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Ray3d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Ray3d_Ops__);
  return;
}

// `dynamic_initializer_for_'Ray3f_Ops'' @ 140f26e90

void __cdecl _dynamic_initializer_for__Ray3f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Ray3f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Ray3f_Ops.Name.AssetName = local_28.AssetName;
  Ray3f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TRay<float>,&UE::CoreUObject::Private::Identical<UE::Math::TRay<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TRay<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Ray3f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Ray3f_Ops__);
  return;
}

// `dynamic_initializer_for_'Ray_Ops'' @ 140f26f50

void __cdecl _dynamic_initializer_for__Ray_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Ray");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Ray_Ops.Name.AssetName = local_28.AssetName;
  Ray_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x30;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TRay<double>,&UE::CoreUObject::Private::Identical<UE::Math::TRay<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TRay<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Ray_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Ray_Ops__);
  return;
}

// `dynamic_initializer_for_'Rotator3d_Ops'' @ 140f27010

void __cdecl _dynamic_initializer_for__Rotator3d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Rotator3d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Rotator3d_Ops.Name.AssetName = local_28.AssetName;
  Rotator3d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TRotator<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TRotator<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TRotator<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TRotator<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TRotator<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Rotator3d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Rotator3d_Ops__);
  return;
}

// `dynamic_initializer_for_'Rotator3f_Ops'' @ 140f270d0

void __cdecl _dynamic_initializer_for__Rotator3f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Rotator3f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Rotator3f_Ops.Name.AssetName = local_28.AssetName;
  Rotator3f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0xc;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TRotator<float>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TRotator<float>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TRotator<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TRotator<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TRotator<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Rotator3f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Rotator3f_Ops__);
  return;
}

// `dynamic_initializer_for_'Rotator_Ops'' @ 140f27190

void __cdecl _dynamic_initializer_for__Rotator_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Rotator");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Rotator_Ops.Name.AssetName = local_28.AssetName;
  Rotator_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TRotator<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TRotator<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TRotator<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TRotator<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TRotator<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Rotator_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Rotator_Ops__);
  return;
}

// `dynamic_initializer_for_'Sphere3d_Ops'' @ 140f27250

void __cdecl _dynamic_initializer_for__Sphere3d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Sphere3d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Sphere3d_Ops.Name.AssetName = local_28.AssetName;
  Sphere3d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TSphere<double>,&UE::CoreUObject::Private::Identical<UE::Math::TSphere<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TSphere<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Sphere3d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Sphere3d_Ops__);
  return;
}

// `dynamic_initializer_for_'Sphere3f_Ops'' @ 140f27310

void __cdecl _dynamic_initializer_for__Sphere3f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Sphere3f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Sphere3f_Ops.Name.AssetName = local_28.AssetName;
  Sphere3f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TSphere<float>,&UE::CoreUObject::Private::Identical<UE::Math::TSphere<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TSphere<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Sphere3f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Sphere3f_Ops__);
  return;
}

// `dynamic_initializer_for_'Sphere_Ops'' @ 140f273d0

void __cdecl _dynamic_initializer_for__Sphere_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Sphere");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Sphere_Ops.Name.AssetName = local_28.AssetName;
  Sphere_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TSphere<double>,&UE::CoreUObject::Private::Identical<UE::Math::TSphere<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TSphere<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Sphere_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Sphere_Ops__);
  return;
}

// `dynamic_initializer_for_'Timecode_Ops'' @ 140f27490

void __cdecl _dynamic_initializer_for__Timecode_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Timecode");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Timecode_Ops.Name.AssetName = local_28.AssetName;
  Timecode_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FTimecode,&UE::CoreUObject::Private::Destruct<FTimecode>,&UE::CoreUObject::Private::Copy<FTimecode>,&UE::CoreUObject::Private::Identical<FTimecode>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Timecode_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Timecode_Ops__);
  return;
}

// `dynamic_initializer_for_'Timespan_Ops'' @ 140f27550

void __cdecl _dynamic_initializer_for__Timespan_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Timespan");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Timespan_Ops.Name.AssetName = local_28.AssetName;
  Timespan_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FTimespan,&UE::CoreUObject::Private::Destruct<FTimespan>,&UE::CoreUObject::Private::SerializeArchive<FTimespan>,&UE::CoreUObject::Private::NetSerialize<FTimespan>,&UE::CoreUObject::Private::Copy<FTimespan>,&UE::CoreUObject::Private::Identical<FTimespan>,&UE::CoreUObject::Private::ExportTextItem<FTimespan>,&UE::CoreUObject::Private::ImportTextItem<FTimespan>,&UE::CoreUObject::Private::GetStructTypeHash<FTimespan>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Timespan_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Timespan_Ops__);
  return;
}

// `dynamic_initializer_for_'Transform3d_Ops'' @ 140f27610

void __cdecl _dynamic_initializer_for__Transform3d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Transform3d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Transform3d_Ops.Name.AssetName = local_28.AssetName;
  Transform3d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x60;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TTransform<double>,&UE::CoreUObject::Private::Construct<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::ConstructForTests<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TTransform<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Transform3d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Transform3d_Ops__);
  return;
}

// `dynamic_initializer_for_'Transform3f_Ops'' @ 140f276d0

void __cdecl _dynamic_initializer_for__Transform3f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Transform3f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Transform3f_Ops.Name.AssetName = local_28.AssetName;
  Transform3f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x30;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TTransform<float>,&UE::CoreUObject::Private::Construct<UE::Math::TTransform<float>_>,&UE::CoreUObject::Private::ConstructForTests<UE::Math::TTransform<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TTransform<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TTransform<float>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TTransform<float>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Transform3f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Transform3f_Ops__);
  return;
}

// `dynamic_initializer_for_'Transform_Ops'' @ 140f27790

void __cdecl _dynamic_initializer_for__Transform_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Transform");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Transform_Ops.Name.AssetName = local_28.AssetName;
  Transform_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x60;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TTransform<double>,&UE::CoreUObject::Private::Construct<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::ConstructForTests<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TTransform<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TTransform<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Transform_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Transform_Ops__);
  return;
}

// `dynamic_initializer_for_'TwoVectors_Ops'' @ 140f27850

void __cdecl _dynamic_initializer_for__TwoVectors_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"TwoVectors");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  TwoVectors_Ops.Name.AssetName = local_28.AssetName;
  TwoVectors_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x30;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FTwoVectors,&UE::CoreUObject::Private::SerializeArchive<FTwoVectors>,&UE::CoreUObject::Private::Identical<FTwoVectors>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = TwoVectors_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__TwoVectors_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint32Point_Ops'' @ 140f27910

void __cdecl _dynamic_initializer_for__Uint32Point_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint32Point");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint32Point_Ops.Name.AssetName = local_28.AssetName;
  Uint32Point_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntPoint<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntPoint<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntPoint<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntPoint<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntPoint<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Uint32Point_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint32Point_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint32Vector2_Ops'' @ 140f279d0

void __cdecl _dynamic_initializer_for__Uint32Vector2_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint32Vector2");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint32Vector2_Ops.Name.AssetName = local_28.AssetName;
  Uint32Vector2_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector2<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector2<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector2<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector2<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector2<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Uint32Vector2_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint32Vector2_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint32Vector4_Ops'' @ 140f27a90

void __cdecl _dynamic_initializer_for__Uint32Vector4_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint32Vector4");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint32Vector4_Ops.Name.AssetName = local_28.AssetName;
  Uint32Vector4_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector4<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector4<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector4<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector4<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector4<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Uint32Vector4_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint32Vector4_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint32Vector_Ops'' @ 140f27b50

void __cdecl _dynamic_initializer_for__Uint32Vector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint32Vector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint32Vector_Ops.Name.AssetName = local_28.AssetName;
  Uint32Vector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0xc;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector3<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector3<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector3<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector3<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector3<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Uint32Vector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint32Vector_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint64Point_Ops'' @ 140f27c10

void __cdecl _dynamic_initializer_for__Uint64Point_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint64Point");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint64Point_Ops.Name.AssetName = local_28.AssetName;
  Uint64Point_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntPoint<unsigned___int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntPoint<unsigned___int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntPoint<unsigned___int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntPoint<unsigned___int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntPoint<unsigned___int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Uint64Point_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint64Point_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint64Vector2_Ops'' @ 140f27cd0

void __cdecl _dynamic_initializer_for__Uint64Vector2_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint64Vector2");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint64Vector2_Ops.Name.AssetName = local_28.AssetName;
  Uint64Vector2_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector2<unsigned___int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector2<unsigned___int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector2<unsigned___int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector2<unsigned___int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector2<unsigned___int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Uint64Vector2_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint64Vector2_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint64Vector4_Ops'' @ 140f27d90

void __cdecl _dynamic_initializer_for__Uint64Vector4_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint64Vector4");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint64Vector4_Ops.Name.AssetName = local_28.AssetName;
  Uint64Vector4_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector4<unsigned___int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector4<unsigned___int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector4<unsigned___int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector4<unsigned___int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector4<unsigned___int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Uint64Vector4_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint64Vector4_Ops__);
  return;
}

// `dynamic_initializer_for_'Uint64Vector_Ops'' @ 140f27e50

void __cdecl _dynamic_initializer_for__Uint64Vector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Uint64Vector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Uint64Vector_Ops.Name.AssetName = local_28.AssetName;
  Uint64Vector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector3<unsigned___int64>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector3<unsigned___int64>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector3<unsigned___int64>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector3<unsigned___int64>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector3<unsigned___int64>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Uint64Vector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Uint64Vector_Ops__);
  return;
}

// `dynamic_initializer_for_'UintPoint_Ops'' @ 140f27f10

void __cdecl _dynamic_initializer_for__UintPoint_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"UintPoint");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  UintPoint_Ops.Name.AssetName = local_28.AssetName;
  UintPoint_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntPoint<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntPoint<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntPoint<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntPoint<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntPoint<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = UintPoint_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__UintPoint_Ops__);
  return;
}

// `dynamic_initializer_for_'UintVector2_Ops'' @ 140f27fd0

void __cdecl _dynamic_initializer_for__UintVector2_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"UintVector2");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  UintVector2_Ops.Name.AssetName = local_28.AssetName;
  UintVector2_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector2<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector2<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector2<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector2<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector2<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = UintVector2_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__UintVector2_Ops__);
  return;
}

// `dynamic_initializer_for_'UintVector4_Ops'' @ 140f28090

void __cdecl _dynamic_initializer_for__UintVector4_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"UintVector4");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  UintVector4_Ops.Name.AssetName = local_28.AssetName;
  UintVector4_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector4<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector4<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector4<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector4<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector4<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = UintVector4_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__UintVector4_Ops__);
  return;
}

// `dynamic_initializer_for_'UintVector_Ops'' @ 140f28150

void __cdecl _dynamic_initializer_for__UintVector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"UintVector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  UintVector_Ops.Name.AssetName = local_28.AssetName;
  UintVector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0xc;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TIntVector3<unsigned_int>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TIntVector3<unsigned_int>_>,&UE::CoreUObject::Private::Identical<UE::Math::TIntVector3<unsigned_int>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TIntVector3<unsigned_int>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TIntVector3<unsigned_int>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = UintVector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__UintVector_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector2D_Ops'' @ 140f28210

void __cdecl _dynamic_initializer_for__Vector2D_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector2D");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector2D_Ops.Name.AssetName = local_28.AssetName;
  Vector2D_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector2<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector2<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Vector2D_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector2D_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector2d_Ops'' @ 140f282d0

void __cdecl _dynamic_initializer_for__Vector2d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector2d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector2d_Ops.Name.AssetName = local_28.AssetName;
  Vector2d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector2<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TVector2<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector2<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Vector2d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector2d_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector2f_Ops'' @ 140f28390

void __cdecl _dynamic_initializer_for__Vector2f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector2f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector2f_Ops.Name.AssetName = local_28.AssetName;
  Vector2f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 8;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector2<float>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector2<float>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TVector2<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector2<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TVector2<float>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector2<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Vector2f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector2f_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector3d_Ops'' @ 140f28450

void __cdecl _dynamic_initializer_for__Vector3d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector3d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector3d_Ops.Name.AssetName = local_28.AssetName;
  Vector3d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::SerializeSlot<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Vector3d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector3d_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector3f_Ops'' @ 140f28510

void __cdecl _dynamic_initializer_for__Vector3f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector3f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector3f_Ops.Name.AssetName = local_28.AssetName;
  Vector3f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0xc;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector<float>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector<float>_>,&UE::CoreUObject::Private::SerializeSlot<UE::Math::TVector<float>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TVector<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector<float>_>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<UE::Math::TVector<float>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector<float>_>_>
    ;
    pIVar3->Alignment = 4;
    pIVar4 = pIVar3;
  }
  local_18 = Vector3f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector3f_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector4_Ops'' @ 140f285d0

void __cdecl _dynamic_initializer_for__Vector4_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector4");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector4_Ops.Name.AssetName = local_28.AssetName;
  Vector4_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector4<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector4<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector4<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TVector4<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector4<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Vector4_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector4_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector4d_Ops'' @ 140f28690

void __cdecl _dynamic_initializer_for__Vector4d_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector4d");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector4d_Ops.Name.AssetName = local_28.AssetName;
  Vector4d_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x20;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector4<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector4<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector4<double>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TVector4<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector4<double>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Vector4d_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector4d_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector4f_Ops'' @ 140f28750

void __cdecl _dynamic_initializer_for__Vector4f_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector4f");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector4f_Ops.Name.AssetName = local_28.AssetName;
  Vector4f_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector4<float>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector4<float>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector4<float>_>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<UE::Math::TVector4<float>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector4<float>_>_>
    ;
    pIVar3->Alignment = 0x10;
    pIVar4 = pIVar3;
  }
  local_18 = Vector4f_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector4f_Ops__);
  return;
}

// `dynamic_initializer_for_'Vector_Ops'' @ 140f28810

void __cdecl _dynamic_initializer_for__Vector_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"Vector");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  Vector_Ops.Name.AssetName = local_28.AssetName;
  Vector_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x18;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<UE::Math::TVector<double>,&UE::CoreUObject::Private::SerializeArchive<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::SerializeSlot<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::NetSerialize<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::Identical<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<UE::Math::TVector<double>_>,&UE::CoreUObject::Private::GetStructTypeHash<UE::Math::TVector<double>_>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = Vector_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__Vector_Ops__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h__Script_CoreUObject_1905849364'' @ 140f288d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h__Script_CoreUObject_1905849364__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Package_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PerPlatformProperties_h__Script_CoreUObject_3394015609'' @ 140f28910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PerPlatformProperties_h__Script_CoreUObject_3394015609__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PerPlatformProperties_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PrimaryAssetId_h__Script_CoreUObject_4141243135'' @ 140f28950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PrimaryAssetId_h__Script_CoreUObject_4141243135__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PrimaryAssetId_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyAccessUtil_h__Script_CoreUObject_3540915078'' @ 140f28990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyAccessUtil_h__Script_CoreUObject_3540915078__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyAccessUtil_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// NewStructOps @ 14211c160

void * __cdecl Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerPlatformFrameRate,&UE::CoreUObject::Private::Construct<FPerPlatformFrameRate>,&UE::CoreUObject::Private::ConstructForTests<FPerPlatformFrameRate>,&UE::CoreUObject::Private::Destruct<FPerPlatformFrameRate>,&UE::CoreUObject::Private::SerializeArchive<FPerPlatformFrameRate>,&UE::CoreUObject::Private::Copy<FPerPlatformFrameRate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FPrimaryAssetType @ 14211d230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetType(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetType.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPrimaryAssetType.InnerSingleton,
               &Z_Construct_UScriptStruct_FPrimaryAssetType_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetType.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPrimaryAssetType.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 14211d2b0

void * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetType_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPrimaryAssetType,&UE::CoreUObject::Private::Destruct<FPrimaryAssetType>,&UE::CoreUObject::Private::Copy<FPrimaryAssetType>,&UE::CoreUObject::Private::Identical<FPrimaryAssetType>,&UE::CoreUObject::Private::ExportTextItem<FPrimaryAssetType>,&UE::CoreUObject::Private::ImportTextItem<FPrimaryAssetType>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPrimaryAssetType>,&UE::CoreUObject::Private::GetStructTypeHash<FPrimaryAssetType>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14211d560

void * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPrimaryAssetId,&UE::CoreUObject::Private::Destruct<FPrimaryAssetId>,&UE::CoreUObject::Private::Copy<FPrimaryAssetId>,&UE::CoreUObject::Private::Identical<FPrimaryAssetId>,&UE::CoreUObject::Private::ExportTextItem<FPrimaryAssetId>,&UE::CoreUObject::Private::ImportTextItem<FPrimaryAssetId>,&UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FPrimaryAssetId>,&UE::CoreUObject::Private::GetStructTypeHash<FPrimaryAssetId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPackage @ 142120870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPackage(void)

{
  if (Z_Registration_Info_UClass_UPackage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPackage.OuterSingleton,
               &Z_Construct_UClass_UPackage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPackage.OuterSingleton;
}

// NewStructOps @ 142123700

void * __cdecl Z_Construct_UScriptStruct_FPerPlatformInt_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerPlatformInt,&UE::CoreUObject::Private::Construct<FPerPlatformInt>,&UE::CoreUObject::Private::ConstructForTests<FPerPlatformInt>,&UE::CoreUObject::Private::Destruct<FPerPlatformInt>,&UE::CoreUObject::Private::SerializeArchive<FPerPlatformInt>,&UE::CoreUObject::Private::Copy<FPerPlatformInt>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<FPerPlatformInt>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142123a10

void * __cdecl Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFreezablePerPlatformInt,&UE::CoreUObject::Private::Construct<FFreezablePerPlatformInt>,&UE::CoreUObject::Private::ConstructForTests<FFreezablePerPlatformInt>,&UE::CoreUObject::Private::Destruct<FFreezablePerPlatformInt>,&UE::CoreUObject::Private::Copy<FFreezablePerPlatformInt>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// EPropertyAccessChangeNotifyMode_StaticEnum @ 142123a50

UEnum * __cdecl EPropertyAccessChangeNotifyMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyAccessChangeNotifyMode,
                       (UObject *)pUVar1,L"EPropertyAccessChangeNotifyMode");
  }
  return Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.OuterSingleton;
}

// NewStructOps @ 142123ab0

void * __cdecl Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerPlatformFloat,&UE::CoreUObject::Private::Construct<FPerPlatformFloat>,&UE::CoreUObject::Private::ConstructForTests<FPerPlatformFloat>,&UE::CoreUObject::Private::Destruct<FPerPlatformFloat>,&UE::CoreUObject::Private::SerializeArchive<FPerPlatformFloat>,&UE::CoreUObject::Private::Copy<FPerPlatformFloat>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<FPerPlatformFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_Default_SetBit @ 142123b70

void __cdecl
Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewProp_Default_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 142123b80

void * __cdecl Z_Construct_UScriptStruct_FPerPlatformBool_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPerPlatformBool,&UE::CoreUObject::Private::Construct<FPerPlatformBool>,&UE::CoreUObject::Private::ConstructForTests<FPerPlatformBool>,&UE::CoreUObject::Private::Destruct<FPerPlatformBool>,&UE::CoreUObject::Private::SerializeArchive<FPerPlatformBool>,&UE::CoreUObject::Private::Copy<FPerPlatformBool>,&UE::CoreUObject::Private::SerializeFromMismatchedTag<FPerPlatformBool>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// <lambda_invoker_cdecl> @ 142123d50

void __cdecl <lambda_5>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FFreezablePerPlatformFloat::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// <lambda_invoker_cdecl> @ 142123d70

void __cdecl <lambda_6>::<lambda_invoker_cdecl>(void)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = FFreezablePerPlatformInt::StaticGetTypeLayout();
  FTypeLayoutDesc::Register(pFVar1);
  return;
}

// operator<<<int> @ 142123db0

void __cdecl
operator<<<int>(FStructuredArchiveSlot param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FArchive *pFVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  FSlotBase FVar6;
  bool bVar7;
  int iVar8;
  FArchiveState *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  FVar6.StructuredArchive = local_res8.StructuredArchive;
  pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar13 = local_res10[0];
  if (pFVar9->ArIsLoading != 0) {
    lVar14 = (longlong)(int)local_res10[0];
    iVar12 = *piVar1;
    if (iVar12 < (int)local_res10[0]) {
      iVar12 = local_res10[0] - iVar12;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar12,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      memset((param_2->AllocatorInstance).Data + (longlong)iVar8 * 4,0,(longlong)iVar12 << 2);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar12) {
        uVar11 = iVar12 - local_res10[0];
        if ((int)(uVar11 | local_res10[0]) < 0) {
          bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar10 = (param_2->AllocatorInstance).Data + lVar14 * 4;
          iVar12 = (*piVar1 - uVar11) - uVar13;
          if (iVar12 != 0) {
            memmove(pFVar10,pFVar10 + (longlong)(int)uVar11 * 4,(longlong)iVar12 << 2);
          }
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar13 = 0;
  if (0 < (int)local_res10[0]) {
    lVar14 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar10 = (param_2->AllocatorInstance).Data + lVar14;
      pFVar2 = (FVar6.StructuredArchive)->Formatter->Inner;
      puVar4 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
      if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar4 + 1) {
        if ((pFVar2->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,pFVar10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar2,(uint *)pFVar10);
        }
      }
      else {
        *(undefined4 *)pFVar10 = *puVar4;
        **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 4;
    } while ((int)uVar13 < (int)local_res10[0]);
  }
  return;
}

// operator<<<FCompressedChunk> @ 142124080

void __cdecl
operator<<<FCompressedChunk>
          (FStructuredArchiveSlot param_1,
          TArray<FCompressedChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchiveState *pFVar7;
  FScriptContainerElement *_Dst;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar10 = local_res10[0];
  if (pFVar7->ArIsLoading != 0) {
    lVar11 = (longlong)(int)local_res10[0];
    iVar9 = *piVar1;
    if (iVar9 < (int)local_res10[0]) {
      iVar9 = local_res10[0] - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      DefaultConstructItems<FCompressedChunk,int>
                ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10,iVar9);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar9) {
        uVar8 = iVar9 - local_res10[0];
        if (((int)(uVar8 | local_res10[0]) < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          _Dst = (param_2->AllocatorInstance).Data + lVar11 * 0x10;
          iVar9 = (*piVar1 - uVar8) - uVar10;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0x10,(longlong)iVar9 << 4);
          }
          *piVar1 = *piVar1 - uVar8;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      operator<<((FStructuredArchiveSlot)FVar4.StructuredArchive,
                 (FCompressedChunk *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_res10[0]);
  }
  return;
}

// operator<<<FFrameRate,0> @ 142124290

void __cdecl operator<<<FFrameRate,0>(FStructuredArchiveSlot param_1,FFrameRate *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  operator<<(pFVar1,param_2);
  return;
}

// operator<<<FFreezablePerPlatformFloat,float,4> @ 1421242c0

FArchive * __cdecl
operator<<<FFreezablePerPlatformFloat,float,4>
          (FArchive *param_1,TPerPlatformProperty<FFreezablePerPlatformFloat,float,4> *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint local_res8 [2];
  
  puVar1 = *(ulonglong **)&param_1->field_0x8;
  if (puVar1[1] < *puVar1 + 4) {
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return param_1;
}

// operator<<<FFreezablePerPlatformFloat,float,4> @ 142124390

void __cdecl
operator<<<FFreezablePerPlatformFloat,float,4>
          (FStructuredArchiveSlot param_1,
          TPerPlatformProperty<FFreezablePerPlatformFloat,float,4> *param_2)

{
  FArchive *this;
  undefined4 *puVar1;
  FSlotBase FVar2;
  FSlotBase local_res8;
  bool local_res10 [8];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar2.StructuredArchive = local_res8.StructuredArchive;
  local_res10[0] = false;
  operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res10);
  this = (FVar2.StructuredArchive)->Formatter->Inner;
  puVar1 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
  return;
}

// operator<<<FIoHash,0> @ 142124440

void __cdecl operator<<<FIoHash,0>(FStructuredArchiveSlot param_1,FIoHash *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_2,0x14);
  return;
}

// operator<<<FPerPlatformBool,bool,3> @ 142124480

FArchive * __cdecl
operator<<<FPerPlatformBool,bool,3>
          (FArchive *param_1,TPerPlatformProperty<FPerPlatformBool,bool,3> *param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  uint local_res8 [2];
  
  puVar1 = *(ulonglong **)&param_1->field_0x8;
  if (puVar1[1] < *puVar1 + 4) {
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(*param_2 != (TPerPlatformProperty<FPerPlatformBool,bool,3>)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      *param_2 = (TPerPlatformProperty<FPerPlatformBool,bool,3>)(local_res8[0] != 0);
    }
  }
  else {
    *param_2 = (TPerPlatformProperty<FPerPlatformBool,bool,3>)(*piVar2 != 0);
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return param_1;
}

// operator<<<FPerPlatformBool,bool,3> @ 142124570

void __cdecl
operator<<<FPerPlatformBool,bool,3>
          (FStructuredArchiveSlot param_1,TPerPlatformProperty<FPerPlatformBool,bool,3> *param_2)

{
  FSlotBase FVar1;
  FSlotBase local_res8;
  bool local_res10 [8];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar1.StructuredArchive = local_res8.StructuredArchive;
  local_res10[0] = false;
  operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res10);
  operator<<((FVar1.StructuredArchive)->Formatter->Inner,(bool *)param_2);
  return;
}

// operator<<<FPerPlatformFloat,float,4> @ 1421245d0

FArchive * __cdecl
operator<<<FPerPlatformFloat,float,4>
          (FArchive *param_1,TPerPlatformProperty<FPerPlatformFloat,float,4> *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint local_res8 [2];
  
  puVar1 = *(ulonglong **)&param_1->field_0x8;
  if (puVar1[1] < *puVar1 + 4) {
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return param_1;
}

// operator<<<FPerPlatformFloat,float,4> @ 1421246a0

void __cdecl
operator<<<FPerPlatformFloat,float,4>
          (FStructuredArchiveSlot param_1,TPerPlatformProperty<FPerPlatformFloat,float,4> *param_2)

{
  FArchive *this;
  undefined4 *puVar1;
  FSlotBase FVar2;
  FSlotBase local_res8;
  bool local_res10 [8];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar2.StructuredArchive = local_res8.StructuredArchive;
  local_res10[0] = false;
  operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res10);
  this = (FVar2.StructuredArchive)->Formatter->Inner;
  puVar1 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
  return;
}

// operator<<<FPerPlatformFrameRate,FFrameRate,411> @ 142124750

FArchive * __cdecl
operator<<<FPerPlatformFrameRate,FFrameRate,411>
          (FArchive *param_1,TPerPlatformProperty<FPerPlatformFrameRate,FFrameRate,411> *param_2)

{
  ulonglong *puVar1;
  uint local_res8 [2];
  
  puVar1 = *(ulonglong **)&param_1->field_0x8;
  if (puVar1[1] < *puVar1 + 4) {
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  operator<<(param_1,(FFrameRate *)param_2);
  return param_1;
}

// operator<<<FPerPlatformFrameRate,FFrameRate,411> @ 1421247d0

void __cdecl
operator<<<FPerPlatformFrameRate,FFrameRate,411>
          (FStructuredArchiveSlot param_1,
          TPerPlatformProperty<FPerPlatformFrameRate,FFrameRate,411> *param_2)

{
  FSlotBase FVar1;
  FArchive *pFVar2;
  FSlotBase local_res8;
  bool local_res10 [8];
  FSlotBase local_res18;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar1.StructuredArchive = local_res8.StructuredArchive;
  local_res10[0] = false;
  operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res10);
  local_res18.StructuredArchive = FVar1.StructuredArchive;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  operator<<(pFVar2,(FFrameRate *)param_2);
  return;
}

// operator<<<FPerPlatformInt,int,2> @ 142124840

FArchive * __cdecl
operator<<<FPerPlatformInt,int,2>
          (FArchive *param_1,TPerPlatformProperty<FPerPlatformInt,int,2> *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  uint local_res8 [2];
  
  puVar1 = *(ulonglong **)&param_1->field_0x8;
  if (puVar1[1] < *puVar1 + 4) {
    local_res8[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return param_1;
}

// operator<<<FPerPlatformInt,int,2> @ 142124910

void __cdecl
operator<<<FPerPlatformInt,int,2>
          (FStructuredArchiveSlot param_1,TPerPlatformProperty<FPerPlatformInt,int,2> *param_2)

{
  FArchive *this;
  undefined4 *puVar1;
  FSlotBase FVar2;
  FSlotBase local_res8;
  bool local_res10 [8];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar2.StructuredArchive = local_res8.StructuredArchive;
  local_res10[0] = false;
  operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res10);
  this = (FVar2.StructuredArchive)->Formatter->Inner;
  puVar1 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
  return;
}

// operator<<<FString> @ 1421249c0

void __cdecl
operator<<<FString>(FStructuredArchiveSlot param_1,
                   TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FArchive *this;
  uint *puVar2;
  code *pcVar3;
  FSlotBase FVar4;
  bool bVar5;
  int iVar6;
  FArchiveState *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (uint *)**(undefined8 **)&this->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar10 = local_res10[0];
  if (pFVar7->ArIsLoading != 0) {
    iVar9 = *piVar1;
    if (iVar9 < (int)local_res10[0]) {
      iVar9 = local_res10[0] - iVar9;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      memset((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,(longlong)iVar9 << 4);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar9) {
        uVar8 = iVar9 - local_res10[0];
        if (((int)(local_res10[0] | uVar8) < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar8 != 0) {
          TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAtImpl(param_2,uVar10,uVar8);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar10 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      operator<<((FVar4.StructuredArchive)->Formatter->Inner,
                 (FString *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10));
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)local_res10[0]);
  }
  return;
}

// CastFieldChecked<FObjectPropertyBase> @ 1421252e0

FObjectPropertyBase * __cdecl CastFieldChecked<FObjectPropertyBase>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FObjectPropertyBase *pFVar3;
  
  if ((param_1 == (FField *)0x0) || (((uint)(int)param_1->ClassPrivate->CastFlags >> 0x1a & 1) == 0)
     ) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FObjectPropertyBase *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FObjectPropertyBase *)param_1;
}

// CastFieldChecked<FStructProperty> @ 142125340

FStructProperty * __cdecl CastFieldChecked<FStructProperty>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStructProperty *pFVar3;
  
  if ((param_1 == (FField *)0x0) || (((uint)(int)param_1->ClassPrivate->CastFlags >> 0x14 & 1) == 0)
     ) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStructProperty *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FStructProperty *)param_1;
}

// ConstructItems<TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,int> @ 1421253a0

void __cdecl
ConstructItems<TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,int>
          (void *param_1,TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)> *param_2
          ,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)&param_2->field_0x10;
    lVar4 = (longlong)param_1 + 0x10;
    do {
      lVar1 = puVar3[-2];
      *(longlong *)((longlong)puVar3 + (longlong)param_1 + (-0x10 - (longlong)param_2)) = lVar1;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar3[3];
        if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
          puVar2 = puVar3;
        }
        (**(code **)*puVar2)(puVar2,lVar4);
      }
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FCompressedChunk,int> @ 142125440

void __cdecl DefaultConstructItems<FCompressedChunk,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FCompressedChunk::FCompressedChunk(param_1);
    param_1 = (void *)((longlong)param_1 + 0x10);
  }
  return;
}

// DefaultConstructItems<UE::Private::FLookupTableEntry,int> @ 142125480

void __cdecl DefaultConstructItems<UE::Private::FLookupTableEntry,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    do {
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      *(undefined4 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0xffffffffffffffff;
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 7;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAssetData,int> @ 1421254d0

void __cdecl DestructItems<FAssetData,int>(FAssetData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->TaggedAssetBundles).SharedReferenceCount;
    do {
      if (pFVar1[2].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[2].ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
                ((FAssetDataTagMapSharedView *)(pFVar1 + -2));
      pFVar1 = pFVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<PackageReloadInternal::FNewPackageReference,int> @ 142125520

void __cdecl
DestructItems<PackageReloadInternal::FNewPackageReference,int>
          (FNewPackageReference *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->EventData).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<void>_>_> @ 142127080

void __cdecl
AlgoImpl::HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<void>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,TGreater<void>_> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar1 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14212715e:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar1 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = iVar1;
            if (1 < iVar5) {
              do {
                iVar1 = iVar4 * 2;
                iVar6 = iVar1 + 1;
                if (iVar1 + 2 < iVar5) {
                  if (param_1[iVar6] < param_1[(longlong)iVar1 + 2]) {
                    iVar6 = iVar1;
                  }
                  iVar6 = iVar6 + 1;
                }
                iVar1 = param_1[iVar4];
                if (iVar1 <= param_1[iVar6]) break;
                param_1[iVar4] = param_1[iVar6];
                param_1[iVar6] = iVar1;
                iVar4 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar1 + -2;
      iVar1 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[iVar7] < param_1[(longlong)iVar5 + 2]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    iVar5 = param_1[iVar4];
    if (iVar5 <= param_1[iVar7]) goto LAB_14212715e;
    param_1[iVar4] = param_1[iVar7];
    param_1[iVar7] = iVar5;
    iVar5 = iVar7 * 2 + 1;
    iVar4 = iVar7;
  } while( true );
}

// IntCastChecked<__int64,int> @ 142127210

long64 __cdecl IntCastChecked<__int64,int>(int param_1)

{
  return (longlong)param_1;
}

// IntCastChecked<unsigned___int64,unsigned_int> @ 142127220

ulong64 __cdecl IntCastChecked<unsigned___int64,unsigned_int>(uint param_1)

{
  return (ulonglong)param_1;
}

// InternalConstructor<UPackage> @ 142127230

void __cdecl InternalConstructor<UPackage>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPackage__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x1c = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UPackage> @ 142127280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPackage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPackage::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPackage__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0;
    pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<void>_>_> @ 142127350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<void>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,TGreater<void>_> param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  int *local_338;
  int *local_328;
  int *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppiVar5 = &local_328;
    do {
      piVar8 = ppiVar5[1];
      piVar4 = *ppiVar5;
      piVar1 = ppiVar5[2];
      iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
      local_338._0_4_ = (int)piVar1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_142127400:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar6 = piVar8 + 1;
          iVar2 = piVar9[iVar3 >> 1];
          piVar9[iVar3 >> 1] = *piVar9;
          *piVar9 = iVar2;
          piVar4 = piVar9;
LAB_142127430:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar8) goto code_r0x000142127439;
          goto LAB_142127440;
        }
        for (; piVar4 = piVar9, piVar1 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -1) {
          while (piVar1 = piVar1 + 1, piVar1 <= piVar8) {
            if (*piVar1 < *piVar4) {
              piVar4 = piVar1;
            }
          }
          iVar3 = *piVar4;
          *piVar4 = *piVar8;
          *piVar8 = iVar3;
        }
        goto LAB_1421274f8;
      }
LAB_1421274e7:
      local_338 = piVar1;
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<void>_>_>
                (piVar4,iVar3,param_3,param_4);
LAB_1421274f8:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_328 <= ppiVar5);
  }
  return;
code_r0x000142127439:
  if (*piVar9 <= *piVar4) goto LAB_142127430;
LAB_142127440:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar9) break;
  } while (*piVar6 <= *piVar9);
  if (piVar4 <= piVar6) {
    iVar3 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar3;
    goto LAB_142127430;
  }
  iVar3 = *piVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *piVar9 = *piVar6;
  *piVar6 = iVar3;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar8) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar8;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar6 <= piVar9 + 1) goto LAB_1421274f8;
    piVar8 = piVar7 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar6) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar7 + -2;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_1421274f8;
  }
  iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_1421274e7;
  goto LAB_142127400;
}

// IteratePossibleFiles<`FPackageResourceManagerFile::DoesPackageExist'::__l2::<lambda_1>_> @ 142127570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPackageResourceManagerFile::
IteratePossibleFiles<_FPackageResourceManagerFile::DoesPackageExist_::__l2::<lambda_1>_>
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FBulkDataCookedIndex param_2,
          EPackageSegment param_3,FPackagePath *param_4,<lambda_1> *param_5)

{
  EPackageExtension EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  <lambda_1> *p<Var6;
  FPackagePath *this_00;
  bool bVar7;
  char cVar8;
  EPackageExtension EVar9;
  int iVar10;
  FString *pFVar11;
  void *pvVar12;
  size_t sVar13;
  TStringView<wchar_t> *pTVar14;
  ulong64 uVar15;
  int iVar16;
  int iVar17;
  EPackageExtension *pEVar18;
  undefined1 auStack_338 [32];
  EPackageSegment local_318;
  FString local_310;
  <lambda_1> *local_300;
  FPackagePath *local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  TArrayView<EPackageExtension_const_,int> local_2d8;
  TStringView<wchar_t> local_2c8;
  FString local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  wchar_t *local_288;
  undefined8 uStack_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_300 = param_5;
  local_2f8 = param_4;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_318 = param_3;
  pFVar11 = FPackagePath::GetLocalBaseFilenameWithPath(param_1,&local_2b8);
  iVar10 = (pFVar11->Data).ArrayNum;
  pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
  iVar16 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar16 = 0;
  }
  uVar15 = (ulong64)iVar16;
  if (local_278.End < local_278.CurPos + uVar15) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,uVar15);
  }
  if (iVar16 != 0) {
    pvVar12 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar15 * 2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar12 + uVar15 * 2);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  iVar16 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
  if (iVar16 != 0) {
    if (param_2.Value != '\0') {
      ::FString::PrintfImpl(&local_310,L".%03hhu");
      FVar5.Data = local_310.Data.AllocatorInstance.Data;
      iVar16 = local_310.Data.ArrayNum + -1;
      if (local_310.Data.ArrayNum == 0) {
        iVar16 = 0;
      }
      uVar15 = (ulong64)iVar16;
      if (local_278.End < local_278.CurPos + uVar15) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar15);
      }
      if (iVar16 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_278.CurPos,FVar5.Data,uVar15 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar12 + uVar15 * 2);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      iVar16 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    }
    FPackagePath::GetPossibleExtensions(param_1,&local_2d8,param_3);
    for (pEVar18 = local_2d8.DataPtr; pEVar18 != local_2d8.DataPtr + local_2d8.ArrayNum;
        pEVar18 = pEVar18 + 1) {
      EVar1 = *pEVar18;
      iVar10 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
      iVar17 = iVar10 - iVar16;
      if ((iVar10 < iVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount <= Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                             ,0xe8,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_278.CurPos = local_278.CurPos + -(longlong)iVar17;
      if (EVar1 == Custom) {
        pTVar14 = FPackagePath::GetExtensionString(param_1,&local_298,Header);
      }
      else {
        local_2c8.DataPtr = ::LexToString(EVar1);
        iVar10 = 0;
        if (local_2c8.DataPtr != (wchar_t *)0x0) {
          sVar13 = wcslen(local_2c8.DataPtr);
          iVar10 = (int)sVar13;
        }
        local_2c8.Size = iVar10;
        pTVar14 = &local_2c8;
      }
      pwVar4 = pTVar14->DataPtr;
      uStack_280 = *(undefined8 *)&pTVar14->Size;
      iVar10 = (int)*(undefined8 *)&pTVar14->Size;
      uVar15 = (ulong64)iVar10;
      local_288 = pwVar4;
      if (local_278.End < local_278.CurPos + uVar15) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar15);
      }
      if (iVar10 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_278.CurPos,pwVar4,uVar15 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar12 + uVar15 * 2);
      }
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      p<Var6 = local_300;
      *local_278.CurPos = L'\0';
      cVar8 = (**(code **)((longlong)*local_300->FileManager + 0x50))
                        (local_300->FileManager,local_278.Base);
      this_00 = local_2f8;
      if (cVar8 != '\0') {
        *p<Var6->bResult = true;
        if (((local_2f8 != (FPackagePath *)0x0) &&
            (FPackagePath::operator=(local_2f8,param_1), local_318 == Header)) &&
           (EVar9 = FPackagePath::GetHeaderExtension(param_1), EVar9 == Unspecified)) {
          if ((EVar1 == Custom) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Extension != EPackageExtension::Custom",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                                 ,0x9b,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_2e0 = 0;
          local_2e8 = 0;
          local_2a8.DataPtr = (wchar_t *)0x0;
          local_2a8.Size = 0;
          local_2a8._12_4_ = 0;
          FPackagePath::SetHeaderExtension(this_00,EVar1,&local_2a8);
        }
        break;
      }
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// IteratePossibleFiles<`FPackageResourceManagerFile::FileSize'::__l2::<lambda_1>_> @ 142127910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPackageResourceManagerFile::
IteratePossibleFiles<_FPackageResourceManagerFile::FileSize_::__l2::<lambda_1>_>
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FBulkDataCookedIndex param_2,
          EPackageSegment param_3,FPackagePath *param_4,<lambda_1> *param_5)

{
  EPackageExtension EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  <lambda_1> *p<Var6;
  FPackagePath *this_00;
  bool bVar7;
  EPackageExtension EVar8;
  int iVar9;
  FString *pFVar10;
  void *pvVar11;
  size_t sVar12;
  TStringView<wchar_t> *pTVar13;
  long64 lVar14;
  ulong64 uVar15;
  int iVar16;
  int iVar17;
  EPackageExtension *pEVar18;
  undefined1 auStack_338 [32];
  EPackageSegment local_318;
  FString local_310;
  <lambda_1> *local_300;
  FPackagePath *local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  TArrayView<EPackageExtension_const_,int> local_2d8;
  TStringView<wchar_t> local_2c8;
  FString local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  wchar_t *local_288;
  undefined8 uStack_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_338;
  local_300 = param_5;
  local_2f8 = param_4;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_318 = param_3;
  pFVar10 = FPackagePath::GetLocalBaseFilenameWithPath(param_1,&local_2b8);
  iVar9 = (pFVar10->Data).ArrayNum;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  iVar16 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar16 = 0;
  }
  uVar15 = (ulong64)iVar16;
  if (local_278.End < local_278.CurPos + uVar15) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,uVar15);
  }
  if (iVar16 != 0) {
    pvVar11 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar15 * 2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar11 + uVar15 * 2);
  }
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  iVar16 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
  if (iVar16 != 0) {
    if (param_2.Value != '\0') {
      ::FString::PrintfImpl(&local_310,L".%03hhu");
      FVar5.Data = local_310.Data.AllocatorInstance.Data;
      iVar16 = local_310.Data.ArrayNum + -1;
      if (local_310.Data.ArrayNum == 0) {
        iVar16 = 0;
      }
      uVar15 = (ulong64)iVar16;
      if (local_278.End < local_278.CurPos + uVar15) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar15);
      }
      if (iVar16 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_278.CurPos,FVar5.Data,uVar15 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar11 + uVar15 * 2);
      }
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      iVar16 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    }
    FPackagePath::GetPossibleExtensions(param_1,&local_2d8,param_3);
    for (pEVar18 = local_2d8.DataPtr; pEVar18 != local_2d8.DataPtr + local_2d8.ArrayNum;
        pEVar18 = pEVar18 + 1) {
      EVar1 = *pEVar18;
      iVar9 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
      iVar17 = iVar9 - iVar16;
      if ((iVar9 < iVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount <= Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                             ,0xe8,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_278.CurPos = local_278.CurPos + -(longlong)iVar17;
      if (EVar1 == Custom) {
        pTVar13 = FPackagePath::GetExtensionString(param_1,&local_298,Header);
      }
      else {
        local_2c8.DataPtr = ::LexToString(EVar1);
        iVar9 = 0;
        if (local_2c8.DataPtr != (wchar_t *)0x0) {
          sVar12 = wcslen(local_2c8.DataPtr);
          iVar9 = (int)sVar12;
        }
        local_2c8.Size = iVar9;
        pTVar13 = &local_2c8;
      }
      pwVar4 = pTVar13->DataPtr;
      uStack_280 = *(undefined8 *)&pTVar13->Size;
      iVar9 = (int)*(undefined8 *)&pTVar13->Size;
      uVar15 = (ulong64)iVar9;
      local_288 = pwVar4;
      if (local_278.End < local_278.CurPos + uVar15) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar15);
      }
      if (iVar9 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_278.CurPos,pwVar4,uVar15 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar11 + uVar15 * 2);
      }
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      p<Var6 = local_300;
      *local_278.CurPos = L'\0';
      lVar14 = (**(code **)((longlong)*local_300->FileManager + 0x110))
                         (local_300->FileManager,local_278.Base);
      this_00 = local_2f8;
      *p<Var6->Result = lVar14;
      if (*p<Var6->Result != -1) {
        if (((local_2f8 != (FPackagePath *)0x0) &&
            (FPackagePath::operator=(local_2f8,param_1), local_318 == Header)) &&
           (EVar8 = FPackagePath::GetHeaderExtension(param_1), EVar8 == Unspecified)) {
          if ((EVar1 == Custom) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Extension != EPackageExtension::Custom",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                                 ,0x9b,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_2e0 = 0;
          local_2e8 = 0;
          local_2a8.DataPtr = (wchar_t *)0x0;
          local_2a8.Size = 0;
          local_2a8._12_4_ = 0;
          FPackagePath::SetHeaderExtension(this_00,EVar1,&local_2a8);
        }
        break;
      }
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// IteratePossibleFiles<`FPackageResourceManagerFile::OpenMappedHandleToPackage'::__l2::<lambda_1>_> @ 142127cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001421280c0) */
/* WARNING: Removing unreachable block (ram,0x0001421280e5) */

void __thiscall
FPackageResourceManagerFile::
IteratePossibleFiles<_FPackageResourceManagerFile::OpenMappedHandleToPackage_::__l2::<lambda_1>_>
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FBulkDataCookedIndex param_2,
          EPackageSegment param_3,FPackagePath *param_4,<lambda_1> *param_5)

{
  EPackageExtension EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FPackagePath *this_00;
  IMappedFileHandle *pIVar6;
  bool bVar7;
  EPackageExtension EVar8;
  int iVar9;
  FString *pFVar10;
  void *pvVar11;
  size_t sVar12;
  TStringView<wchar_t> *pTVar13;
  ulong64 uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  EPackageExtension *pEVar18;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  EPackageSegment local_338;
  <lambda_1> *local_330;
  FString local_328;
  FPackagePath *local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  TArrayView<EPackageExtension_const_,int> local_2f8;
  TStringView<wchar_t> local_2e8;
  FString local_2d8;
  TStringView<wchar_t> local_2c8;
  TStringView<wchar_t> local_2b8;
  wchar_t *local_2a8;
  undefined8 uStack_2a0;
  IMappedFileHandle *local_298 [3];
  byte local_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_368;
  local_330 = param_5;
  local_318 = param_4;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_338 = param_3;
  pFVar10 = FPackagePath::GetLocalBaseFilenameWithPath(param_1,&local_2d8);
  iVar9 = (pFVar10->Data).ArrayNum;
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  iVar15 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar15 = 0;
  }
  uVar14 = (ulong64)iVar15;
  if (local_278.End < local_278.CurPos + uVar14) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,uVar14);
  }
  if (iVar15 != 0) {
    pvVar11 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar14 * 2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar11 + uVar14 * 2);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  iVar15 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
  if (iVar15 != 0) {
    if (param_2.Value != '\0') {
      ::FString::PrintfImpl(&local_328,L".%03hhu");
      FVar5.Data = local_328.Data.AllocatorInstance.Data;
      iVar15 = local_328.Data.ArrayNum + -1;
      if (local_328.Data.ArrayNum == 0) {
        iVar15 = 0;
      }
      uVar14 = (ulong64)iVar15;
      if (local_278.End < local_278.CurPos + uVar14) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar14);
      }
      if (iVar15 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_278.CurPos,FVar5.Data,uVar14 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar11 + uVar14 * 2);
      }
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      iVar15 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    }
    FPackagePath::GetPossibleExtensions(param_1,&local_2f8,param_3);
    for (pEVar18 = local_2f8.DataPtr; pEVar18 != local_2f8.DataPtr + local_2f8.ArrayNum;
        pEVar18 = pEVar18 + 1) {
      EVar1 = *pEVar18;
      iVar9 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
      iVar16 = iVar9 - iVar15;
      if ((iVar9 < iVar16) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount <= Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                             ,0xe8,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_278.CurPos = local_278.CurPos + -(longlong)iVar16;
      if (EVar1 == Custom) {
        pTVar13 = FPackagePath::GetExtensionString(param_1,&local_2b8,Header);
      }
      else {
        local_2e8.DataPtr = ::LexToString(EVar1);
        iVar9 = 0;
        if (local_2e8.DataPtr != (wchar_t *)0x0) {
          sVar12 = wcslen(local_2e8.DataPtr);
          iVar9 = (int)sVar12;
        }
        local_2e8.Size = iVar9;
        pTVar13 = &local_2e8;
      }
      pwVar4 = pTVar13->DataPtr;
      uStack_2a0 = *(undefined8 *)&pTVar13->Size;
      iVar9 = (int)*(undefined8 *)&pTVar13->Size;
      uVar14 = (ulong64)iVar9;
      local_2a8 = pwVar4;
      if (local_278.End < local_278.CurPos + uVar14) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar14);
      }
      if (iVar9 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(local_278.CurPos,pwVar4,uVar14 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar11 + uVar14 * 2);
      }
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      *local_278.CurPos = L'\0';
      local_348 = 0;
      (**(code **)((longlong)*local_330->PlatformFile + 0x1b0))
                (local_330->PlatformFile,local_298,local_278.Base,0);
      uVar17 = (ulonglong)local_280;
      if ((2 < uVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((&`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::IsSame(unsigned___int64)'
            ::__l2::bIsSameType)[uVar17] == '\0') {
        if ((local_280 != 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pIVar6 = local_298[0];
        local_298[0] = (IMappedFileHandle *)0x0;
        if ((2 < local_280) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_280])(local_298);
        *local_330->Result = pIVar6;
        local_280 = 2;
        if ((code *)PTR_Destruct_150650d78 !=
            UE::Core::Private::
            TDestructorCaller<TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FEmptyType>
            ::Destruct) {
          (*(code *)PTR_Destruct_150650d78)(local_298);
        }
        this_00 = local_318;
        if (((local_318 != (FPackagePath *)0x0) &&
            (FPackagePath::operator=(local_318,param_1), local_338 == Header)) &&
           (EVar8 = FPackagePath::GetHeaderExtension(param_1), EVar8 == Unspecified)) {
          if ((EVar1 == Custom) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Extension != EPackageExtension::Custom",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                                 ,0x9b,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_300 = 0;
          local_308 = 0;
          local_2c8.DataPtr = (wchar_t *)0x0;
          local_2c8.Size = 0;
          local_2c8._12_4_ = 0;
          FPackagePath::SetHeaderExtension(this_00,EVar1,&local_2c8);
        }
        break;
      }
      uVar17 = (ulonglong)local_280;
      if ((2 < local_280) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,TValueOrError<TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>,FFileSystemError>::FWrapErrorType,TValueOrError<class_TUniquePtr<class_IMappedFileHandle,struct_TDefaultDelete<class_IMappedFileHandle>_>,class_FFileSystemError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(local_298);
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// IteratePossibleFiles<`FPackageResourceManagerFile::OpenReadPackage'::__l2::<lambda_1>_> @ 1421281c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPackageResourceManagerFile::
IteratePossibleFiles<_FPackageResourceManagerFile::OpenReadPackage_::__l2::<lambda_1>_>
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FBulkDataCookedIndex param_2,
          EPackageSegment param_3,FPackagePath *param_4,<lambda_1> *param_5)

{
  EPackageExtension EVar1;
  FScriptContainerElement *pFVar2;
  FOpenPackageResult *pFVar3;
  FArchive *pFVar4;
  code *pcVar5;
  wchar_t *pwVar6;
  FPackagePath *pFVar7;
  ForAnyElementType FVar8;
  FPackagePath *this_00;
  bool bVar9;
  EPackageExtension EVar10;
  int iVar11;
  FString *pFVar12;
  void *pvVar13;
  size_t sVar14;
  TStringView<wchar_t> *pTVar15;
  FArchive *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  int iVar19;
  int iVar20;
  EPackageExtension *pEVar21;
  undefined1 auStack_348 [32];
  EPackageSegment local_328;
  FPackagePath *local_320;
  FString local_318;
  FPackagePath *local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  TArrayView<EPackageExtension_const_,int> local_2e8;
  TStringView<wchar_t> local_2d8;
  undefined1 local_2c8 [8];
  FString local_2c0;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  wchar_t *local_288;
  undefined8 uStack_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_348;
  local_308 = param_4;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_328 = param_3;
  local_320 = param_1;
  pFVar12 = FPackagePath::GetLocalBaseFilenameWithPath(param_1,&local_2c0);
  iVar11 = (pFVar12->Data).ArrayNum;
  pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
  iVar19 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar19 = 0;
  }
  uVar18 = (ulong64)iVar19;
  if (local_278.End < local_278.CurPos + uVar18) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,uVar18);
  }
  if (iVar19 != 0) {
    pvVar13 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar18 * 2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
  }
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  iVar19 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
  if (iVar19 != 0) {
    if (param_2.Value != '\0') {
      ::FString::PrintfImpl(&local_318,L".%03hhu");
      FVar8.Data = local_318.Data.AllocatorInstance.Data;
      iVar19 = local_318.Data.ArrayNum + -1;
      if (local_318.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      uVar18 = (ulong64)iVar19;
      if (local_278.End < local_278.CurPos + uVar18) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar18);
      }
      if (iVar19 != 0) {
        pvVar13 = FGenericPlatformString::Memcpy(local_278.CurPos,FVar8.Data,uVar18 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      iVar19 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    }
    pFVar7 = local_320;
    FPackagePath::GetPossibleExtensions(local_320,&local_2e8,param_3);
    for (pEVar21 = local_2e8.DataPtr; pEVar21 != local_2e8.DataPtr + local_2e8.ArrayNum;
        pEVar21 = pEVar21 + 1) {
      EVar1 = *pEVar21;
      iVar11 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
      iVar20 = iVar11 - iVar19;
      if ((iVar11 < iVar20) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount <= Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                             ,0xe8,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_278.CurPos = local_278.CurPos + -(longlong)iVar20;
      if (EVar1 == Custom) {
        pTVar15 = FPackagePath::GetExtensionString(pFVar7,&local_298,Header);
      }
      else {
        local_2d8.DataPtr = ::LexToString(EVar1);
        iVar11 = 0;
        if (local_2d8.DataPtr != (wchar_t *)0x0) {
          sVar14 = wcslen(local_2d8.DataPtr);
          iVar11 = (int)sVar14;
        }
        local_2d8.Size = iVar11;
        pTVar15 = &local_2d8;
      }
      pwVar6 = pTVar15->DataPtr;
      uStack_280 = *(undefined8 *)&pTVar15->Size;
      iVar11 = (int)*(undefined8 *)&pTVar15->Size;
      uVar18 = (ulong64)iVar11;
      local_288 = pwVar6;
      if (local_278.End < local_278.CurPos + uVar18) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar18);
      }
      if (iVar11 != 0) {
        pvVar13 = FGenericPlatformString::Memcpy(local_278.CurPos,pwVar6,uVar18 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar13 + uVar18 * 2);
      }
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      *local_278.CurPos = L'\0';
      if (1 < (byte)(EVar1 - TextAsset)) {
        pFVar16 = (FArchive *)
                  (**(code **)((longlong)*param_5->FileManager + 0x18))
                            (param_5->FileManager,local_278.Base);
        pFVar3 = param_5->Result;
        if (pFVar3 == (FOpenPackageResult *)local_2c8) {
          if (pFVar16 != (FArchive *)0x0) {
            puVar17 = *(undefined8 **)pFVar16;
            goto LAB_1421284bb;
          }
        }
        else {
          pFVar4 = (pFVar3->Archive).Ptr;
          (pFVar3->Archive).Ptr = pFVar16;
          if (pFVar4 != (FArchive *)0x0) {
            puVar17 = *(undefined8 **)pFVar4;
            pFVar16 = pFVar4;
LAB_1421284bb:
            (*(code *)*puVar17)(pFVar16,1);
          }
        }
        this_00 = local_308;
        pFVar7 = local_320;
        if ((param_5->Result->Archive).Ptr != (FArchive *)0x0) {
          param_5->Result->Format = Binary;
          if (((local_308 != (FPackagePath *)0x0) &&
              (FPackagePath::operator=(local_308,local_320), local_328 == Header)) &&
             (EVar10 = FPackagePath::GetHeaderExtension(pFVar7), EVar10 == Unspecified)) {
            if ((EVar1 == Custom) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Extension != EPackageExtension::Custom",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                                   ,0x9b,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uStack_2f0 = 0;
            local_2f8 = 0;
            local_2a8.DataPtr = (wchar_t *)0x0;
            local_2a8.Size = 0;
            local_2a8._12_4_ = 0;
            FPackagePath::SetHeaderExtension(this_00,EVar1,&local_2a8);
          }
          break;
        }
      }
      pFVar7 = local_320;
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// IteratePossibleFiles<`FPackageResourceManagerFile::TryMatchCaseOnDisk'::__l2::<lambda_1>_> @ 1421285b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPackageResourceManagerFile::
IteratePossibleFiles<_FPackageResourceManagerFile::TryMatchCaseOnDisk_::__l2::<lambda_1>_>
          (FPackageResourceManagerFile *this,FPackagePath *param_1,FBulkDataCookedIndex param_2,
          EPackageSegment param_3,FPackagePath *param_4,<lambda_1> *param_5)

{
  EPackageExtension EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  <lambda_1> *p<Var6;
  FPackagePath *this_00;
  bool bVar7;
  char cVar8;
  EPackageExtension EVar9;
  int iVar10;
  FString *pFVar11;
  void *pvVar12;
  size_t sVar13;
  TStringView<wchar_t> *pTVar14;
  FString *pFVar15;
  int iVar16;
  ulong64 uVar17;
  int iVar18;
  int iVar19;
  EPackageExtension *pEVar20;
  undefined1 auStack_348 [32];
  EPackageSegment local_328;
  FString local_320;
  <lambda_1> *local_310;
  FPackagePath *local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  TArrayView<EPackageExtension_const_,int> local_2e8;
  TStringView<wchar_t> local_2d8;
  FString local_2c8;
  void *local_2b8 [2];
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  wchar_t *local_288;
  undefined8 uStack_280;
  TStringBuilderBase<wchar_t> local_278;
  wchar_t local_258 [256];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_348;
  local_310 = param_5;
  local_308 = param_4;
  local_278.Base = local_258;
  local_278.CurPos = local_258;
  local_278.End = (wchar_t *)local_58;
  local_278.bIsDynamic = false;
  local_278.bIsExternal = false;
  local_328 = param_3;
  pFVar11 = FPackagePath::GetLocalBaseFilenameWithPath(param_1,&local_2c8);
  iVar10 = (pFVar11->Data).ArrayNum;
  pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
  iVar18 = iVar10 + -1;
  if (iVar10 == 0) {
    iVar18 = 0;
  }
  uVar17 = (ulong64)iVar18;
  if (local_278.End < local_278.CurPos + uVar17) {
    TStringBuilderBase<wchar_t>::Extend(&local_278,uVar17);
  }
  if (iVar18 != 0) {
    pvVar12 = FGenericPlatformString::Memcpy(local_278.CurPos,pFVar2,uVar17 * 2);
    local_278.CurPos = (wchar_t *)((longlong)pvVar12 + uVar17 * 2);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  iVar18 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
  if (iVar18 != 0) {
    if (param_2.Value != '\0') {
      ::FString::PrintfImpl(&local_320,L".%03hhu");
      FVar5.Data = local_320.Data.AllocatorInstance.Data;
      iVar18 = local_320.Data.ArrayNum + -1;
      if (local_320.Data.ArrayNum == 0) {
        iVar18 = 0;
      }
      uVar17 = (ulong64)iVar18;
      if (local_278.End < local_278.CurPos + uVar17) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar17);
      }
      if (iVar18 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_278.CurPos,FVar5.Data,uVar17 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar12 + uVar17 * 2);
      }
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      iVar18 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
    }
    FPackagePath::GetPossibleExtensions(param_1,&local_2e8,param_3);
    for (pEVar20 = local_2e8.DataPtr; pEVar20 != local_2e8.DataPtr + local_2e8.ArrayNum;
        pEVar20 = pEVar20 + 1) {
      iVar16 = 0;
      EVar1 = *pEVar20;
      iVar10 = (int)((longlong)local_278.CurPos - (longlong)local_278.Base >> 1);
      iVar19 = iVar10 - iVar18;
      if ((iVar10 < iVar19) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount <= Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\StringBuilder.h"
                             ,0xe8,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_278.CurPos = local_278.CurPos + -(longlong)iVar19;
      if (EVar1 == Custom) {
        pTVar14 = FPackagePath::GetExtensionString(param_1,&local_298,Header);
      }
      else {
        local_2d8.DataPtr = ::LexToString(EVar1);
        if (local_2d8.DataPtr != (wchar_t *)0x0) {
          sVar13 = wcslen(local_2d8.DataPtr);
          iVar16 = (int)sVar13;
        }
        local_2d8.Size = iVar16;
        pTVar14 = &local_2d8;
      }
      pwVar4 = pTVar14->DataPtr;
      uStack_280 = *(undefined8 *)&pTVar14->Size;
      iVar10 = (int)*(undefined8 *)&pTVar14->Size;
      uVar17 = (ulong64)iVar10;
      local_288 = pwVar4;
      if (local_278.End < local_278.CurPos + uVar17) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,uVar17);
      }
      if (iVar10 != 0) {
        pvVar12 = FGenericPlatformString::Memcpy(local_278.CurPos,pwVar4,uVar17 * 2);
        local_278.CurPos = (wchar_t *)((longlong)pvVar12 + uVar17 * 2);
      }
      if (local_278.End < local_278.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_278,1);
      }
      pwVar4 = local_278.Base;
      p<Var6 = local_310;
      *local_278.CurPos = L'\0';
      cVar8 = (**(code **)((longlong)*local_310->PlatformFile + 0x78))
                        (local_310->PlatformFile,local_278.Base);
      if (cVar8 != '\0') {
        pFVar15 = (FString *)
                  (**(code **)((longlong)*p<Var6->PlatformFile + 200))
                            (p<Var6->PlatformFile,local_2b8,pwVar4);
        pFVar11 = p<Var6->FilenameOnDisk;
        if (pFVar11 != pFVar15) {
          pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          (pFVar11->Data).AllocatorInstance.Data = (pFVar15->Data).AllocatorInstance.Data;
          (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar11->Data).ArrayNum = (pFVar15->Data).ArrayNum;
          (pFVar11->Data).ArrayMax = (pFVar15->Data).ArrayMax;
          (pFVar15->Data).ArrayNum = 0;
          (pFVar15->Data).ArrayMax = 0;
        }
        if (local_2b8[0] != (void *)0x0) {
          FMemory::Free(local_2b8[0]);
        }
        this_00 = local_308;
        *p<Var6->ExtensionOnDisk = EVar1;
        if (((local_308 != (FPackagePath *)0x0) &&
            (FPackagePath::operator=(local_308,param_1), local_328 == Header)) &&
           (EVar9 = FPackagePath::GetHeaderExtension(param_1), EVar9 == Unspecified)) {
          if ((EVar1 == Custom) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Extension != EPackageExtension::Custom",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageResourceManagerFile.cpp"
                                 ,0x9b,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uStack_2f0 = 0;
          local_2f8 = 0;
          local_2a8.DataPtr = (wchar_t *)0x0;
          local_2a8.Size = 0;
          local_2a8._12_4_ = 0;
          FPackagePath::SetHeaderExtension(this_00,EVar1,&local_2a8);
        }
        break;
      }
    }
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_278);
  return;
}

// MakeShared<FPackageReloadedEvent,1,UPackage_*_&,UPackage_*_&,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_> @ 1421289c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FPackageReloadedEvent,1> * __cdecl
MakeShared<FPackageReloadedEvent,1,UPackage_*_&,UPackage_*_&,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_>
          (TSharedRef<FPackageReloadedEvent,1> *__return_storage_ptr__,UPackage **param_1,
          UPackage **param_2,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FPackageReloadedEvent,1> *pTVar4;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  local_58;
  
  pTVar3 = operator_new(0x80);
  local_58._48_8_ = _UNK_150631d98;
  local_58._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPackageReloadedEvent *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPackageReloadedEvent___00_SharedPointerInternals__6B_
    ;
    local_58._0_8_ = 0;
    local_58._8_8_ = 0;
    local_58._32_8_ = 0;
    if (&local_58 != param_3) {
      local_58._0_8_ = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = 0;
      local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
      *(undefined8 *)&param_3->field_0x8 = 0;
      if (&local_58.field_0x10 != &param_3->field_0x10) {
        local_58._32_8_ = *(undefined8 *)&param_3->field_0x20;
        if (local_58._32_8_ == 0) {
          local_58._16_8_ = *(undefined8 *)&param_3->field_0x10;
          local_58._24_8_ = *(undefined8 *)&param_3->field_0x18;
        }
        *(undefined8 *)&param_3->field_0x20 = 0;
        local_58._40_8_ = *(undefined8 *)&param_3->field_0x28;
        *(undefined8 *)&param_3->field_0x28 = 0;
      }
      local_58._48_8_ = *(undefined8 *)&param_3->field_0x30;
      *(undefined4 *)&param_3->field_0x34 = 0;
      *(undefined4 *)&param_3->field_0x30 = 0xffffffff;
    }
    local_58._64_8_ = *(undefined8 *)&param_3->field_0x40;
    if (local_58._64_8_ == 0) {
      local_58._56_4_ = *(undefined4 *)&param_3->field_0x38;
    }
    *(undefined8 *)&param_3->field_0x40 = 0;
    local_58._72_4_ = *(undefined4 *)&param_3->field_0x48;
    *(undefined4 *)&param_3->field_0x48 = 0;
    FPackageReloadedEvent::FPackageReloadedEvent
              ((FPackageReloadedEvent *)(pTVar3 + 1),*param_1,*param_2,&local_58);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FPackageReloadedEvent *)(pTVar3 + 1);
    if ((FPackageReloadedEvent *)(pTVar3 + 1) == (FPackageReloadedEvent *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FPackageReloadedEvent,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// ObjectPtrDecay<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_>,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_> @ 142128b50

TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_> *
__cdecl ObjectPtrDecay<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_>,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_>
                  (TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                   *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142128bed;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142128bed:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
              *)(*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_142128cf0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_142128cf0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *)param_1;
}

// ObjectPtrWrap<TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>,TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_> @ 142128d50

TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
* __cdecl ObjectPtrWrap<TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>,TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_>
                    (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                     *param_1)

{
  return (TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
          *)param_1;
}

// ResolveVisitedPathInfo_Generic<FProperty_const_> @ 1421291f0

void * __cdecl
PropertyVisitorHelpers::ResolveVisitedPathInfo_Generic<FProperty_const_>
          (FProperty *param_1,FPropertyVisitorPath *param_2,void *param_3,
          FPropertyVisitorInfo *param_4)

{
  void *local_res8 [4];
  code *local_58;
  void ***local_50;
  void **local_48;
  FPropertyVisitorInfo *local_40;
  int local_38;
  FPropertyVisitorPath *local_30;
  void *local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_20 = 0;
  local_res8[0] = (void *)0x0;
  local_18 = 0;
  local_48 = local_res8;
  local_38 = (param_2->Path).ArrayNum + 1;
  local_50 = &local_48;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`PropertyVisitorHelpers::ResolveVisitedPathInfo_Generic<FProperty_const_>'::__l2::<lambda_1>,enum_EPropertyVisitorControlFlow,FPropertyVisitorContext_const_&>
             ::Call;
  local_40 = param_4;
  local_30 = param_2;
  local_28 = param_3;
  (**(code **)(param_1->_padding_ + 0x98))(param_1,&local_30,&local_58);
  return local_res8[0];
}

// SerializeFromMismatchedTag<UE::Math::TBox2<float>,UE::Math::TBox2<double>,FArchive> @ 142129260

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TBox2<float>,UE::Math::TBox2<double>,FArchive>
          (TBox2<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  TVector2<double>_u_0 TVar1;
  TVector2<double>_u_0 TVar2;
  bool bVar3;
  FArchive *pFVar4;
  TVector2<float>_u_0 local_38;
  TVector2<float>_u_0 local_30;
  char local_28;
  undefined7 uStack_17;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    pFVar4 = UE::Math::operator<<(param_3,(TVector2<float> *)&local_38._s_0);
    UE::Math::operator<<(pFVar4,(TVector2<float> *)&local_30._s_0);
    param_5.ComparisonIndex.Value._0_1_ = local_28;
    (**(code **)(*(longlong *)param_3 + 0x188))(param_3,&param_5,1);
    TVar1._8_4_ = SUB84((double)local_38._s_0.Y,0);
    TVar1._s_0.X = (double)local_38._s_0.X;
    TVar1._12_4_ = (int)((ulonglong)(double)local_38._s_0.Y >> 0x20);
    (param_1->Min).field0_0x0 = TVar1;
    TVar2._8_4_ = SUB84((double)local_30._s_0.Y,0);
    TVar2._s_0.X = (double)local_30._s_0.X;
    TVar2._12_4_ = (int)((ulonglong)(double)local_30._s_0.Y >> 0x20);
    (param_1->Max).field0_0x0 = TVar2;
    *(ulonglong *)&param_1->bIsValid =
         CONCAT71(uStack_17,(char)param_5.ComparisonIndex.Value != '\0');
    return true;
  }
  bVar3 = UE::Math::TBox2<double>::Serialize(param_1,param_3);
  return bVar3;
}

// SerializeFromMismatchedTag<UE::Math::TBox2<double>,UE::Math::TBox2<float>,FArchive> @ 142129350

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TBox2<double>,UE::Math::TBox2<float>,FArchive>
          (TBox2<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  FArchive *pFVar2;
  TVector2<double>_u_0 local_38;
  bool local_28 [16];
  char local_18;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    pFVar2 = UE::Math::operator<<(param_3,(TVector2<double> *)&local_38._s_0);
    UE::Math::operator<<(pFVar2,(TVector2<double> *)local_28);
    param_5.ComparisonIndex.Value._0_1_ = local_18;
    (**(code **)(*(longlong *)param_3 + 0x188))(param_3,&param_5,1);
    (param_1->Min).field0_0x0._s_0.X = (float)local_38._s_0.X;
    (param_1->Min).field0_0x0._s_0.Y = (float)local_38._s_0.Y;
    (param_1->Max).field0_0x0._s_0.X = (float)(double)CONCAT44(local_28._4_4_,local_28._0_4_);
    (param_1->Max).field0_0x0._s_0.Y = (float)(double)local_28._8_8_;
    param_1->bIsValid = (char)param_5.ComparisonIndex.Value != '\0';
    param_1->field_0x11 = local_28[1];
    param_1->field_0x12 = local_28[2];
    param_1->field_0x13 = local_28[3];
    return true;
  }
  bVar1 = UE::Math::TBox2<float>::Serialize(param_1,param_3);
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TBox<float>,UE::Math::TBox<double>,FArchive> @ 142129470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TBox<float>,UE::Math::TBox<double>,FArchive>
          (TBox<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  FArchive *pFVar5;
  undefined1 auStack_68 [32];
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_3c;
  undefined1 local_30 [25];
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    local_30[0] = 0;
    pFVar5 = UE::Math::operator<<(param_3,(TVector<float> *)&local_48._s_0);
    pFVar5 = UE::Math::operator<<(pFVar5,(TVector<float> *)&local_3c._s_0);
    if ((ulonglong)(*(longlong **)&pFVar5->field_0x8)[1] < **(longlong **)&pFVar5->field_0x8 + 1U) {
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_30,1);
    }
    else {
      **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 1;
    }
    auVar1._8_4_ = SUB84((double)local_48._s_0.Y,0);
    auVar1._0_8_ = (double)local_48._s_0.X;
    auVar1._12_4_ = (int)((ulonglong)(double)local_48._s_0.Y >> 0x20);
    *(undefined1 (*) [16])&(param_1->Min).field0_0x0 = auVar1;
    auVar2._8_4_ = SUB84((double)local_3c._s_0.X,0);
    auVar2._0_8_ = (double)local_48._s_0.Z;
    auVar2._12_4_ = (int)((ulonglong)(double)local_3c._s_0.X >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->Min).field0_0x0 + 0x10) = auVar2;
    auVar3._8_4_ = SUB84((double)local_3c._s_0.Z,0);
    auVar3._0_8_ = (double)local_3c._s_0.Y;
    auVar3._12_4_ = (int)((ulonglong)(double)local_3c._s_0.Z >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_1->Max).field0_0x0 + 8) = auVar3;
    param_1->IsValid = 1;
    param_1->Pad[0] = (char)uStack_17;
    param_1->Pad[1] = (char)((uint7)uStack_17 >> 8);
    param_1->Pad[2] = (char)((uint7)uStack_17 >> 0x10);
    param_1->Pad[3] = (char)((uint7)uStack_17 >> 0x18);
    param_1->Pad[4] = (char)((uint7)uStack_17 >> 0x20);
    param_1->Pad[5] = (char)((uint7)uStack_17 >> 0x28);
    param_1->Pad[6] = (char)((uint7)uStack_17 >> 0x30);
    return true;
  }
  bVar4 = UE::Math::TBox<double>::Serialize(param_1,param_3);
  return bVar4;
}

// SerializeFromMismatchedTag<UE::Math::TBox<double>,UE::Math::TBox<float>,FArchive> @ 1421295b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TBox<double>,UE::Math::TBox<float>,FArchive>
          (TBox<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  FArchive *pFVar2;
  undefined1 auStack_68 [32];
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    local_18[0] = 0;
    pFVar2 = UE::Math::operator<<(param_3,(TVector<double> *)&local_48._s_0);
    pFVar2 = UE::Math::operator<<(pFVar2,(TVector<double> *)&local_30._s_0);
    if ((ulonglong)(*(longlong **)&pFVar2->field_0x8)[1] < **(longlong **)&pFVar2->field_0x8 + 1U) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_18,1);
    }
    else {
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
    }
    (param_1->Min).field0_0x0._s_0.X = (float)local_48._s_0.X;
    (param_1->Min).field0_0x0._s_0.Y = (float)local_48._s_0.Y;
    (param_1->Min).field0_0x0._s_0.Z = (float)local_48._s_0.Z;
    (param_1->Max).field0_0x0._s_0.X = (float)(double)CONCAT44(local_30._4_4_,local_30._0_4_);
    *(ulonglong *)((longlong)&(param_1->Max).field0_0x0 + 4) =
         CONCAT44((float)local_30._s_0.Z,(float)local_30._s_0.Y);
    param_1->IsValid = 1;
    param_1->Pad[0] = local_30._1_1_;
    param_1->Pad[1] = local_30._2_1_;
    param_1->Pad[2] = local_30._3_1_;
    return true;
  }
  bVar1 = UE::Math::TBox<float>::Serialize(param_1,param_3);
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TIntPoint<int>,UE::Math::TIntPoint<__int64>,FArchive> @ 142129720

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntPoint<int>,UE::Math::TIntPoint<__int64>,FArchive>
          (TIntPoint<__int64> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  
  if (param_2 == param_5) {
    bVar1 = UE::Math::TIntPoint<__int64>::Serialize(param_1,param_3);
    return bVar1;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  bVar1 = UE::Math::TIntPoint<int>::Serialize((TIntPoint<int> *)&param_5,param_3);
  *(longlong *)&param_1->field0_0x0 = (longlong)(int)param_5.ComparisonIndex.Value;
  *(longlong *)((longlong)&param_1->field0_0x0 + 8) = (longlong)(int)param_5.Number;
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TIntPoint<unsigned_int>,UE::Math::TIntPoint<unsigned___int64>,FArchive> @ 142129780

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntPoint<unsigned_int>,UE::Math::TIntPoint<unsigned___int64>,FArchive>
          (TIntPoint<unsigned___int64> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  bool bVar1;
  
  if (param_2 == param_5) {
    bVar1 = UE::Math::TIntPoint<unsigned___int64>::Serialize(param_1,param_3);
    return bVar1;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  bVar1 = UE::Math::TIntPoint<unsigned_int>::Serialize((TIntPoint<unsigned_int> *)&param_5,param_3);
  *(ulonglong *)&param_1->field0_0x0 = (ulonglong)param_5.ComparisonIndex.Value;
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 8) = (ulonglong)param_5.Number;
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TIntPoint<__int64>,UE::Math::TIntPoint<int>,FArchive> @ 1421297e0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntPoint<__int64>,UE::Math::TIntPoint<int>,FArchive>
          (TIntPoint<int> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  code *pcVar1;
  TIntPoint<int>_u_0 TVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  TIntPoint<__int64>_u_0 local_28 [2];
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    bVar3 = UE::Math::TIntPoint<__int64>::Serialize((TIntPoint<__int64> *)&local_28[0]._s_0,param_3)
    ;
    if (local_28[0]._s_0.X != (longlong)(int)local_28[0]._s_0.X) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (local_28[0]._s_0.Y != (longlong)(int)local_28[0]._s_0.Y) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    TVar2._s_0.Y = (int)local_28[0]._s_0.Y;
    TVar2._s_0.X = (int)local_28[0]._s_0.X;
    param_1->field0_0x0 = TVar2;
    return bVar3;
  }
  bVar3 = UE::Math::TIntPoint<int>::Serialize(param_1,param_3);
  return bVar3;
}

// SerializeFromMismatchedTag<UE::Math::TIntPoint<unsigned___int64>,UE::Math::TIntPoint<unsigned_int>,FArchive> @ 1421298f0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntPoint<unsigned___int64>,UE::Math::TIntPoint<unsigned_int>,FArchive>
          (TIntPoint<unsigned_int> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  code *pcVar1;
  TIntPoint<unsigned_int>_u_0 TVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  TIntPoint<unsigned___int64>_u_0 local_28 [2];
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    bVar3 = UE::Math::TIntPoint<unsigned___int64>::Serialize
                      ((TIntPoint<unsigned___int64> *)&local_28[0]._s_0,param_3);
    if (local_28[0]._s_0.X != (local_28[0]._s_0.X & 0xffffffff)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (local_28[0]._s_0.Y != (local_28[0]._s_0.Y & 0xffffffff)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    TVar2._s_0.Y = (int)local_28[0]._s_0.Y;
    TVar2._s_0.X = (int)local_28[0]._s_0.X;
    param_1->field0_0x0 = TVar2;
    return bVar3;
  }
  bVar3 = UE::Math::TIntPoint<unsigned_int>::Serialize(param_1,param_3);
  return bVar3;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector2<int>,UE::Math::TIntVector2<__int64>,FArchive> @ 142129a00

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector2<int>,UE::Math::TIntVector2<__int64>,FArchive>
          (TIntVector2<__int64> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5
          ,FName param_6)

{
  bool bVar1;
  
  if (param_2 == param_5) {
    bVar1 = UE::Math::TIntVector2<__int64>::Serialize(param_1,param_3);
    return bVar1;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  bVar1 = UE::Math::TIntVector2<int>::Serialize((TIntVector2<int> *)&param_5,param_3);
  *(longlong *)&param_1->field0_0x0 = (longlong)(int)param_5.ComparisonIndex.Value;
  *(longlong *)((longlong)&param_1->field0_0x0 + 8) = (longlong)(int)param_5.Number;
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector2<unsigned_int>,UE::Math::TIntVector2<unsigned___int64>,FArchive> @ 142129a60

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector2<unsigned_int>,UE::Math::TIntVector2<unsigned___int64>,FArchive>
          (TIntVector2<unsigned___int64> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  bool bVar1;
  
  if (param_2 == param_5) {
    bVar1 = UE::Math::TIntVector2<unsigned___int64>::Serialize(param_1,param_3);
    return bVar1;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  bVar1 = UE::Math::TIntVector2<unsigned_int>::Serialize
                    ((TIntVector2<unsigned_int> *)&param_5,param_3);
  *(ulonglong *)&param_1->field0_0x0 = (ulonglong)param_5.ComparisonIndex.Value;
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 8) = (ulonglong)param_5.Number;
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector2<__int64>,UE::Math::TIntVector2<int>,FArchive> @ 142129ac0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector2<__int64>,UE::Math::TIntVector2<int>,FArchive>
          (TIntVector2<int> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  code *pcVar1;
  TIntVector2<int>_u_0 TVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  TIntVector2<__int64>_u_0 local_28 [2];
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    bVar3 = UE::Math::TIntVector2<__int64>::Serialize
                      ((TIntVector2<__int64> *)&local_28[0]._s_0,param_3);
    if (local_28[0]._s_0.X != (longlong)(int)local_28[0]._s_0.X) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (local_28[0]._s_0.Y != (longlong)(int)local_28[0]._s_0.Y) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    TVar2._s_0.Y = (int)local_28[0]._s_0.Y;
    TVar2._s_0.X = (int)local_28[0]._s_0.X;
    param_1->field0_0x0 = TVar2;
    return bVar3;
  }
  bVar3 = UE::Math::TIntVector2<int>::Serialize(param_1,param_3);
  return bVar3;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector2<unsigned___int64>,UE::Math::TIntVector2<unsigned_int>,FArchive> @ 142129bd0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector2<unsigned___int64>,UE::Math::TIntVector2<unsigned_int>,FArchive>
          (TIntVector2<unsigned_int> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  code *pcVar1;
  TIntVector2<unsigned_int>_u_0 TVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  TIntVector2<unsigned___int64>_u_0 local_28 [2];
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    bVar3 = UE::Math::TIntVector2<unsigned___int64>::Serialize
                      ((TIntVector2<unsigned___int64> *)&local_28[0]._s_0,param_3);
    if (local_28[0]._s_0.X != (local_28[0]._s_0.X & 0xffffffff)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    if (local_28[0]._s_0.Y != (local_28[0]._s_0.Y & 0xffffffff)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    TVar2._s_0.Y = (int)local_28[0]._s_0.Y;
    TVar2._s_0.X = (int)local_28[0]._s_0.X;
    param_1->field0_0x0 = TVar2;
    return bVar3;
  }
  bVar3 = UE::Math::TIntVector2<unsigned_int>::Serialize(param_1,param_3);
  return bVar3;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector3<int>,UE::Math::TIntVector3<__int64>,FArchive> @ 142129ce0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector3<int>,UE::Math::TIntVector3<__int64>,FArchive>
          (TIntVector3<__int64> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5
          ,FName param_6)

{
  bool bVar1;
  TIntVector3<int>_u_0 local_18;
  
  if (param_2 == param_5) {
    bVar1 = UE::Math::TIntVector3<__int64>::Serialize(param_1,param_3);
    return bVar1;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  bVar1 = UE::Math::TIntVector3<int>::Serialize((TIntVector3<int> *)&local_18._s_0,param_3);
  *(longlong *)&param_1->field0_0x0 = (longlong)local_18._s_0.X;
  *(longlong *)((longlong)&param_1->field0_0x0 + 8) = (longlong)local_18._s_0.Y;
  *(longlong *)((longlong)&param_1->field0_0x0 + 0x10) = (longlong)local_18._s_0.Z;
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector3<unsigned_int>,UE::Math::TIntVector3<unsigned___int64>,FArchive> @ 142129d50

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector3<unsigned_int>,UE::Math::TIntVector3<unsigned___int64>,FArchive>
          (TIntVector3<unsigned___int64> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  bool bVar1;
  TIntVector3<unsigned_int>_u_0 local_18;
  
  if (param_2 == param_5) {
    bVar1 = UE::Math::TIntVector3<unsigned___int64>::Serialize(param_1,param_3);
    return bVar1;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  bVar1 = UE::Math::TIntVector3<unsigned_int>::Serialize
                    ((TIntVector3<unsigned_int> *)&local_18._s_0,param_3);
  *(ulonglong *)&param_1->field0_0x0 = (ulonglong)local_18._s_0.X;
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 8) = (ulonglong)local_18._s_0.Y;
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 0x10) = (ulonglong)local_18._s_0.Z;
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector3<__int64>,UE::Math::TIntVector3<int>,FArchive> @ 142129dc0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector3<__int64>,UE::Math::TIntVector3<int>,FArchive>
          (TIntVector3<int> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  TIntVector3<__int64>_u_0 local_48 [2];
  longlong local_18;
  
  if ((param_2 == param_5) || (param_2 == param_4)) {
    bVar3 = UE::Math::TIntVector3<int>::Serialize(param_1,param_3);
    return bVar3;
  }
  if (param_2 != param_6) {
    return false;
  }
  bVar3 = UE::Math::TIntVector3<__int64>::Serialize
                    ((TIntVector3<__int64> *)&local_48[0]._s_0,param_3);
  local_18 = local_48[0]._s_0.Z;
  if ((local_48[0]._s_0.X != (longlong)(int)local_48[0]._s_0.X) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((local_48[0]._s_0.Y != (longlong)(int)local_48[0]._s_0.Y) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  iVar2 = (int)local_18;
  if ((local_18 != (int)local_18) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (param_1->field0_0x0)._s_0.X = (int)local_48[0]._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (int)local_48[0]._s_0.Y;
  (param_1->field0_0x0)._s_0.Z = iVar2;
  return bVar3;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector3<unsigned___int64>,UE::Math::TIntVector3<unsigned_int>,FArchive> @ 142129f50

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector3<unsigned___int64>,UE::Math::TIntVector3<unsigned_int>,FArchive>
          (TIntVector3<unsigned_int> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  TIntVector3<unsigned___int64>_u_0 local_48 [2];
  ulonglong local_18;
  
  if ((param_2 == param_5) || (param_2 == param_4)) {
    bVar3 = UE::Math::TIntVector3<unsigned_int>::Serialize(param_1,param_3);
    return bVar3;
  }
  if (param_2 != param_6) {
    return false;
  }
  bVar3 = UE::Math::TIntVector3<unsigned___int64>::Serialize
                    ((TIntVector3<unsigned___int64> *)&local_48[0]._s_0,param_3);
  local_18 = local_48[0]._s_0.Z;
  if ((local_48[0]._s_0.X != (local_48[0]._s_0.X & 0xffffffff)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((local_48[0]._s_0.Y != (local_48[0]._s_0.Y & 0xffffffff)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar2 = (uint)local_18;
  if ((local_18 != (local_18 & 0xffffffff)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  (param_1->field0_0x0)._s_0.X = (uint)local_48[0]._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (uint)local_48[0]._s_0.Y;
  (param_1->field0_0x0)._s_0.Z = uVar2;
  return bVar3;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector4<int>,UE::Math::TIntVector4<__int64>,FArchive> @ 14212a0e0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector4<int>,UE::Math::TIntVector4<__int64>,FArchive>
          (TIntVector4<__int64> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5
          ,FName param_6)

{
  TIntVector4<int>_u_0 local_38 [3];
  
  if (param_2 == param_5) {
    UE::Math::operator<<(param_3,param_1);
    return true;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  UE::Math::operator<<(param_3,(TIntVector4<int> *)&local_38[0]._s_0);
  *(longlong *)&param_1->field0_0x0 = (longlong)(int)local_38[0]._0_4_;
  *(longlong *)((longlong)&param_1->field0_0x0 + 8) = (longlong)(int)local_38[0]._4_4_;
  *(longlong *)((longlong)&param_1->field0_0x0 + 0x10) = (longlong)(int)local_38[0]._8_4_;
  *(longlong *)((longlong)&param_1->field0_0x0 + 0x18) = (longlong)(int)local_38[0]._12_4_;
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector4<unsigned_int>,UE::Math::TIntVector4<unsigned___int64>,FArchive> @ 14212a180

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector4<unsigned_int>,UE::Math::TIntVector4<unsigned___int64>,FArchive>
          (TIntVector4<unsigned___int64> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  TIntVector4<unsigned_int>_u_0 local_38 [3];
  
  if (param_2 == param_5) {
    UE::Math::operator<<(param_3,param_1);
    return true;
  }
  if ((param_2 != param_6) && (param_2 != param_4)) {
    return false;
  }
  UE::Math::operator<<(param_3,(TIntVector4<unsigned_int> *)&local_38[0]._s_0);
  *(ulonglong *)&param_1->field0_0x0 = (ulonglong)(uint)local_38[0]._0_4_;
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 8) = (ulonglong)(uint)local_38[0]._4_4_;
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 0x10) = (ulonglong)(uint)local_38[0]._8_4_;
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 0x18) = (ulonglong)(uint)local_38[0]._12_4_;
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector4<__int64>,UE::Math::TIntVector4<int>,FArchive> @ 14212a210

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector4<__int64>,UE::Math::TIntVector4<int>,FArchive>
          (TIntVector4<int> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TIntVector4<__int64>_u_0 local_28;
  
  if ((param_2 == param_5) || (param_2 == param_4)) {
    UE::Math::operator<<(param_3,param_1);
    return true;
  }
  if (param_2 != param_6) {
    return false;
  }
  UE::Math::operator<<(param_3,(TIntVector4<__int64> *)&local_28._s_0);
  if ((local_28._s_0.X != (int)local_28._s_0.X) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_28._s_0.Y != (int)local_28._s_0.Y) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_28._s_0.Z != (int)local_28._s_0.Z) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_28._s_0.W != (int)local_28._s_0.W) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  *(ulonglong *)&param_1->field0_0x0 = CONCAT44((int)local_28._s_0.Y,(int)local_28._s_0.X);
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 8) =
       CONCAT44((int)local_28._s_0.W,(int)local_28._s_0.Z);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TIntVector4<unsigned___int64>,UE::Math::TIntVector4<unsigned_int>,FArchive> @ 14212a3c0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TIntVector4<unsigned___int64>,UE::Math::TIntVector4<unsigned_int>,FArchive>
          (TIntVector4<unsigned_int> *param_1,FName param_2,FArchive *param_3,FName param_4,
          FName param_5,FName param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TIntVector4<unsigned___int64>_u_0 local_28;
  
  if ((param_2 == param_5) || (param_2 == param_4)) {
    UE::Math::operator<<(param_3,param_1);
    return true;
  }
  if (param_2 != param_6) {
    return false;
  }
  UE::Math::operator<<(param_3,(TIntVector4<unsigned___int64> *)&local_28._s_0);
  if ((local_28._s_0.X != (local_28._s_0.X & 0xffffffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_28._s_0.Y != (local_28._s_0.Y & 0xffffffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_28._s_0.Z != (local_28._s_0.Z & 0xffffffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((local_28._s_0.W != (local_28._s_0.W & 0xffffffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  *(ulonglong *)&param_1->field0_0x0 = CONCAT44((int)local_28._s_0.Y,(int)local_28._s_0.X);
  *(ulonglong *)((longlong)&param_1->field0_0x0 + 8) =
       CONCAT44((int)local_28._s_0.W,(int)local_28._s_0.Z);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TPlane<float>,UE::Math::TPlane<double>,FArchive> @ 14212a560

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TPlane<float>,UE::Math::TPlane<double>,FArchive>
          (TPlane<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  float *pfVar1;
  bool bVar2;
  FArchive *this;
  TVector<float>_u_0 local_18;
  float local_c;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    this = UE::Math::operator<<(param_3,(TVector<float> *)&local_18._s_0);
    pfVar1 = (float *)**(undefined8 **)&this->field_0x8;
    if ((float *)(*(undefined8 **)&this->field_0x8)[1] < pfVar1 + 1) {
      if ((this->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this + 0x188))(this,&local_c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this,(uint *)&local_c);
      }
    }
    else {
      local_c = *pfVar1;
      **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    }
    param_1->_padding_ = (longlong)(double)local_18._s_0.X;
    param_1->_padding_ = (longlong)(double)local_18._s_0.Y;
    param_1->_padding_ = (longlong)(double)local_18._s_0.Z;
    param_1->W = (double)local_c;
    return true;
  }
  bVar2 = UE::Math::TPlane<double>::Serialize(param_1,param_3);
  return bVar2;
}

// SerializeFromMismatchedTag<UE::Math::TPlane<double>,UE::Math::TPlane<float>,FArchive> @ 14212a640

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TPlane<double>,UE::Math::TPlane<float>,FArchive>
          (TPlane<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  TPlane<double> local_28;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    bVar1 = UE::Math::TPlane<double>::Serialize(&local_28,param_3);
    *(float *)&param_1->_padding_ = (float)(double)local_28._padding_;
    *(float *)((longlong)&param_1->_padding_ + 4) = (float)(double)local_28._padding_;
    param_1->_padding_ = (int)(float)(double)local_28._padding_;
    param_1->W = (float)local_28.W;
    return bVar1;
  }
  bVar1 = UE::Math::TPlane<float>::Serialize(param_1,param_3);
  return bVar1;
}

// SerializeFromMismatchedTag<UE::Math::TRay<float>,UE::Math::TRay<double>,FArchive> @ 14212a6f0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TRay<float>,UE::Math::TRay<double>,FArchive>
          (TRay<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  FArchive *pFVar1;
  TVector<float>_u_0 local_28;
  TVector<float>_u_0 local_1c;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    local_28._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_28._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_1c._0_8_ = 0;
    local_1c._s_0.Z = 1.0;
    pFVar1 = UE::Math::operator<<(param_3,(TVector<float> *)&local_28._s_0);
    UE::Math::operator<<(pFVar1,(TVector<float> *)&local_1c._s_0);
    (param_1->Origin).field0_0x0._s_0.X = (double)local_28._s_0.X;
    (param_1->Origin).field0_0x0._s_0.Y = (double)local_28._s_0.Y;
    (param_1->Origin).field0_0x0._s_0.Z = (double)local_28._s_0.Z;
    (param_1->Direction).field0_0x0._s_0.X = (double)local_1c._s_0.X;
    (param_1->Direction).field0_0x0._s_0.Y = (double)local_1c._s_0.Y;
    (param_1->Direction).field0_0x0._s_0.Z = (double)local_1c._s_0.Z;
    return true;
  }
  pFVar1 = UE::Math::operator<<(param_3,&param_1->Origin);
  UE::Math::operator<<(pFVar1,&param_1->Direction);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TRay<double>,UE::Math::TRay<float>,FArchive> @ 14212a7f0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TRay<double>,UE::Math::TRay<float>,FArchive>
          (TRay<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  FArchive *pFVar1;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    local_38._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_38._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_20._s_0.Z = __real_3ff0000000000000;
    local_20._s_0.X = 0.0;
    local_20._s_0.Y = 0.0;
    pFVar1 = UE::Math::operator<<(param_3,(TVector<double> *)&local_38._s_0);
    UE::Math::operator<<(pFVar1,(TVector<double> *)&local_20._s_0);
    (param_1->Origin).field0_0x0._s_0.X = (float)local_38._s_0.X;
    (param_1->Origin).field0_0x0._s_0.Y = (float)local_38._s_0.Y;
    (param_1->Origin).field0_0x0._s_0.Z = (float)local_38._s_0.Z;
    (param_1->Direction).field0_0x0._s_0.X = (float)local_20._s_0.X;
    (param_1->Direction).field0_0x0._s_0.Y = (float)local_20._s_0.Y;
    (param_1->Direction).field0_0x0._s_0.Z = (float)local_20._s_0.Z;
    return true;
  }
  pFVar1 = UE::Math::operator<<(param_3,&param_1->Origin);
  UE::Math::operator<<(pFVar1,&param_1->Direction);
  return true;
}

// SerializeFromMismatchedTag<UE::Math::TSphere<float>,UE::Math::TSphere<double>,FArchive> @ 14212a910

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TSphere<float>,UE::Math::TSphere<double>,FArchive>
          (TSphere<double> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  float *pfVar1;
  bool bVar2;
  FArchive *this;
  TVector<float>_u_0 local_18;
  float local_c;
  
  if ((param_2 != param_5) && (param_2 != param_4)) {
    if (param_2 != param_6) {
      return false;
    }
    this = UE::Math::operator<<(param_3,(TVector<float> *)&local_18._s_0);
    pfVar1 = (float *)**(undefined8 **)&this->field_0x8;
    if ((float *)(*(undefined8 **)&this->field_0x8)[1] < pfVar1 + 1) {
      if ((this->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this + 0x188))(this,&local_c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this,(uint *)&local_c);
      }
    }
    else {
      local_c = *pfVar1;
      **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    }
    (param_1->Center).field0_0x0._s_0.X = (double)local_18._s_0.X;
    (param_1->Center).field0_0x0._s_0.Y = (double)local_18._s_0.Y;
    (param_1->Center).field0_0x0._s_0.Z = (double)local_18._s_0.Z;
    param_1->W = (double)local_c;
    return true;
  }
  bVar2 = UE::Math::TSphere<double>::Serialize(param_1,param_3);
  return bVar2;
}

// SerializeFromMismatchedTag<UE::Math::TSphere<double>,UE::Math::TSphere<float>,FArchive> @ 14212a9f0

bool __cdecl
LWCSerializerPrivate::
SerializeFromMismatchedTag<UE::Math::TSphere<double>,UE::Math::TSphere<float>,FArchive>
          (TSphere<float> *param_1,FName param_2,FArchive *param_3,FName param_4,FName param_5,
          FName param_6)

{
  bool bVar1;
  TVector<double>_u_0 local_28;
  double local_10;
  
  if ((param_2 != param_5) &&
     ((param_2 != param_4 || (0x3eb < (int)((ulonglong)*(undefined8 *)&param_3->field_0x40 >> 0x20))
      ))) {
    if ((param_2 != param_6) && (param_2 != param_4)) {
      return false;
    }
    bVar1 = UE::Math::TSphere<double>::Serialize((TSphere<double> *)&local_28._s_0,param_3);
    (param_1->Center).field0_0x0._s_0.X = (float)local_28._s_0.X;
    (param_1->Center).field0_0x0._s_0.Y = (float)local_28._s_0.Y;
    (param_1->Center).field0_0x0._s_0.Z = (float)local_28._s_0.Z;
    param_1->W = (float)local_10;
    return bVar1;
  }
  bVar1 = UE::Math::TSphere<float>::Serialize(param_1,param_3);
  return bVar1;
}

// StaticEnum<enum_EPropertyAccessChangeNotifyMode> @ 14212aa90

UEnum * __cdecl StaticEnum<enum_EPropertyAccessChangeNotifyMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPropertyAccessChangeNotifyMode,
                       (UObject *)pUVar1,L"EPropertyAccessChangeNotifyMode");
  }
  return Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.OuterSingleton;
}

// WithScriptArray<`FScriptArrayHelper::RemoveValues'::__l2::<lambda_1>_> @ 14212aad0

void __thiscall
FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
          (FScriptArrayHelper *this,<lambda_1> *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  TScriptArray<TMemoryImageAllocator<0>_> *this_00;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  this_00 = (this->field1_0x8).FreezableArray;
  iVar1 = param_1->Count;
  uVar2 = param_1->__this->ElementAlignment;
  iVar3 = param_1->__this->ElementSize;
  lVar7 = (longlong)iVar3;
  if ((this->ArrayFlags & UsesMemoryImageAllocator) == None) {
    if (iVar1 != 0) {
      iVar4 = param_1->Index;
      iVar6 = (this_00->ArrayNum - iVar4) - iVar1;
      if (iVar6 != 0) {
        memmove((void *)(iVar4 * lVar7 + this_00->_padding_),
                (void *)(((longlong)iVar4 + (longlong)iVar1) * lVar7 + this_00->_padding_),
                iVar6 * lVar7);
      }
      this_00->ArrayNum = this_00->ArrayNum - iVar1;
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeShrink
                ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00,iVar3,uVar2);
    }
  }
  else {
    iVar4 = param_1->Index;
    if (iVar1 != 0) {
      iVar6 = (this_00->ArrayNum - iVar4) - iVar1;
      if (iVar6 != 0) {
        uVar5 = this_00->_padding_;
        if ((uVar5 & 1) != 0) {
          uVar5 = (longlong)&this_00->_padding_ + ((longlong)uVar5 >> 0x18);
        }
        memmove((void *)(uVar5 + iVar4 * lVar7),
                (void *)(((longlong)iVar4 + (longlong)iVar1) * lVar7 + uVar5),iVar6 * lVar7);
      }
      this_00->ArrayNum = this_00->ArrayNum - iVar1;
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeShrink(this_00,iVar3,uVar2);
    }
  }
  return;
}

// WithScriptMap<`FScriptMapHelper::RemovePair'::__l2::<lambda_1>_> @ 14212abc0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FScriptMapHelper::WithScriptMap<_FScriptMapHelper::RemovePair_::__l2::<lambda_1>_>
          (FScriptMapHelper *this,<lambda_1> *param_1)

{
  TScriptMap<FDefaultSetAllocator,FScriptMap> *this_00;
  int iVar1;
  uchar *puVar2;
  uchar *puVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined1 local_38 [12];
  undefined4 uStack_2c;
  code *local_28;
  undefined8 *local_20;
  
  local_res8 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *(longlong *)param_1;
  this_00 = (TScriptMap<FDefaultSetAllocator,FScriptMap> *)(this->field2_0x10).FreezableMap;
  local_res18[0] = local_res8;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
               ::Call;
    local_20 = &local_res8;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
         ::Call;
    unique0x00008e00 = local_res18;
    iVar1 = TScriptMap<FDefaultSetAllocator,FScriptMap>::FindPairIndex
                      (this_00,*(void **)(param_1 + 8),(FScriptMapLayout *)(lVar4 + 0x18),
                       (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_38,
                       (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)&local_28);
    if ((iVar1 != -1) &&
       (lVar4 = (longlong)*(int *)(lVar4 + 0x18) + (longlong)(iVar1 * *(int *)(lVar4 + 0x2c)),
       (this_00->Pairs).Elements.Data._padding_ + lVar4 != 0)) {
LAB_14212accf:
      local_38._0_8_ = *(undefined8 *)param_1;
      uStack_2c = 1;
      local_38._8_4_ = (int)(lVar4 / (longlong)*(int *)(local_38._0_8_ + 0x24));
      if ((*(byte *)(local_38._0_8_ + 0x30) & 1) != 0) {
        `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::
        operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
                  (local_38,(TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                             *)*(FScriptMap **)(local_38._0_8_ + 0x10));
        return true;
      }
      `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::operator()<FScriptMap>
                (local_38,*(FScriptMap **)(local_38._0_8_ + 0x10));
      return true;
    }
  }
  else {
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_2>,bool,void_const_*,void_const_*>
         ::Call;
    unique0x00008e00 = &local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<``FScriptMapHelper::RemovePair'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
               ::Call;
    local_20 = local_res18;
    iVar1 = TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
            ::FindPairIndex((TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
                             *)this_00,*(void **)(param_1 + 8),(FScriptMapLayout *)(lVar4 + 0x18),
                            (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_28,
                            (TFunctionRef<bool___cdecl(void_const_*,void_const_*)> *)local_38);
    if (iVar1 != -1) {
      puVar3 = (uchar *)(this_00->Pairs).Elements.Data._padding_;
      puVar2 = puVar3;
      if (((ulonglong)puVar3 & 1) != 0) {
        puVar2 = (this_00->Pairs).Elements.AllocationFlags.AllocatorInstance.InlineData +
                 ((longlong)puVar3 >> 0x18) + -0x10;
      }
      if (puVar2 + (longlong)*(int *)(lVar4 + 0x18) + (longlong)(iVar1 * *(int *)(lVar4 + 0x2c)) !=
          (uchar *)0x0) {
        if (((ulonglong)puVar3 & 1) != 0) {
          puVar3 = (this_00->Pairs).Elements.AllocationFlags.AllocatorInstance.InlineData +
                   ((longlong)puVar3 >> 0x18) + -0x10;
        }
        lVar4 = (longlong)
                (puVar2 + (longlong)*(int *)(lVar4 + 0x18) +
                          (longlong)(iVar1 * *(int *)(lVar4 + 0x2c))) - (longlong)puVar3;
        goto LAB_14212accf;
      }
    }
  }
  return false;
}

// WriteToString<32,UE::FPropertyTypeName> @ 14212ad40

TStringBuilderWithBuffer<wchar_t,32> * __cdecl
WriteToString<32,UE::FPropertyTypeName>
          (TStringBuilderWithBuffer<wchar_t,32> *__return_storage_ptr__,FPropertyTypeName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  UE::operator<<((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// WriteToUtf8String<256,FPrimaryAssetType_const_&> @ 14212ad80

TStringBuilderWithBuffer<char8_t,256> * __cdecl
WriteToUtf8String<256,FPrimaryAssetType_const_&>
          (TStringBuilderWithBuffer<char8_t,256> *__return_storage_ptr__,FPrimaryAssetType *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(&param_1->Name,(TStringBuilderBase<char8_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToUtf8String<256,FName,char,FName_const_&> @ 14212add0

TStringBuilderWithBuffer<char8_t,256> * __cdecl
WriteToUtf8String<256,FName,char,FName_const_&>
          (TStringBuilderWithBuffer<char8_t,256> *__return_storage_ptr__,FName *param_1,
          char *param_2,FName *param_3)

{
  char cVar1;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<char8_t> *)__return_storage_ptr__);
  cVar1 = *param_2;
  if ((ulonglong)__return_storage_ptr__->_padding_ < __return_storage_ptr__->_padding_ + 1U) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)__return_storage_ptr__,1);
  }
  *(char *)__return_storage_ptr__->_padding_ = cVar1;
  __return_storage_ptr__->_padding_ = __return_storage_ptr__->_padding_ + 1;
  FName::AppendString(param_3,(TStringBuilderBase<char8_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0> @ 14212c630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<__UE::FPackageResourceIoBackend::Resolve_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,0,0> @ 14212c650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_UE::FPackageResourceIoBackend::Resolve_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TScopeGuard<`FProperty::ImportSingleProperty'::__l322::<lambda_2>_> @ 14212c670

void __thiscall
ScopeExitSupport::TScopeGuard<`FProperty::ImportSingleProperty'::__l322::<lambda_2>_>::
~TScopeGuard<_FProperty::ImportSingleProperty_::__l322::<lambda_2>_>(void *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(**(longlong **)this + 0x70);
  if ((plVar1[7] & 0x1000000000U) == 0) {
    (**(code **)(*plVar1 + 0x138))(plVar1,**(undefined8 **)((longlong)this + 8));
  }
  plVar1 = *(longlong **)(**(longlong **)this + 0x78);
  if ((plVar1[7] & 0x1000000000U) == 0) {
    (**(code **)(*plVar1 + 0x138))
              (plVar1,(longlong)*(int *)(**(longlong **)this + 0x80) +
                      **(longlong **)((longlong)this + 8));
  }
  return;
}

// operator<< @ 14212ce50

TStringBuilderBase<wchar_t> * __cdecl
operator<<(TStringBuilderBase<wchar_t> *param_1,FPrimaryAssetId *param_2)

{
  wchar_t *pwVar1;
  FName local_res8;
  
  local_res8 = (param_2->PrimaryAssetType).Name;
  FName::AppendString(&local_res8,param_1);
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(param_1,1);
  }
  pwVar1 = FGenericPlatformString::Convert<char,wchar_t>(param_1->CurPos,1,":",1);
  param_1->CurPos = pwVar1;
  FName::AppendString(&param_2->PrimaryAssetName,param_1);
  return param_1;
}

// operator<< @ 14212ced0

FArchive * __cdecl operator<<(FArchive *param_1,FLinearColor *param_2)

{
  undefined1 *puVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    (param_2->field0_0x0)._s_0.R = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->field0_0x0)._s_0.G;
  puVar1 = &param_1->field_0x2a;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->field0_0x0)._s_0.B;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->field0_0x0)._s_0.A;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
  return param_1;
}

// operator<< @ 14212d030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FPackageFileSummary *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  operator<<(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 14212d0b0

FArchive * __cdecl operator<<(FArchive *param_1,ulong64 *param_2)

{
  ulong64 *puVar1;
  
  puVar1 = (ulong64 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (ulong64 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,param_2);
  return param_1;
}

// operator<< @ 14212d120

void __cdecl operator<<(FStructuredArchiveSlot param_1,FLinearColor *param_2)

{
  FArchive *pFVar1;
  float *pfVar2;
  float *pfVar3;
  
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar2 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)param_2);
    }
  }
  else {
    (param_2->field0_0x0)._s_0.R = *pfVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->field0_0x0)._s_0.G;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->field0_0x0)._s_0.B;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if ((float *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pfVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
    }
  }
  else {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  pfVar2 = &(param_2->field0_0x0)._s_0.A;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  pfVar3 = (float *)**(undefined8 **)&pFVar1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *pfVar2 = *pfVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014212d260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,pfVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)pfVar2);
  return;
}

// operator<< @ 14212d280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */
/* WARNING: Enum "EUnrealEngineObjectUE4Version": Some values do not have unique names */

void __cdecl operator<<(FStructuredArchiveSlot param_1,FPackageFileSummary *param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  long64 *plVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  long64 *plVar10;
  code *pcVar11;
  undefined8 uVar12;
  byte bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FArchive *pFVar17;
  longlong lVar18;
  FArchive *pFVar19;
  FCustomVersionContainer *pFVar20;
  FEngineVersion *pFVar21;
  FPackageFileVersion FVar22;
  FSlotBase FVar23;
  FStructuredArchiveSlot FVar24;
  uint uVar25;
  FCustomVersionContainer *pFVar26;
  uint *puVar27;
  ECustomVersionSerializationFormat EVar28;
  FSlotBase local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  FStructuredArchiveSlot local_218;
  int local_210 [6];
  undefined1 local_1f8 [16];
  int local_1e8 [2];
  FGuid local_1e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<FCompressedChunk,TSizedDefaultAllocator<32>_> local_1c0;
  FCustomVersionContainer local_1b0;
  FEngineVersion local_1a0;
  FEngineVersion local_180;
  FSlotBase local_160;
  FSlotBase local_158;
  FPackageFileVersion local_150;
  FPackageFileVersion local_148 [2];
  TNamedValue<int> local_138;
  TNamedValue<int> local_128;
  TNamedValue<int> local_118;
  TNamedValue<int> local_108;
  TNamedValue<int> local_f8;
  TNamedValue<int> local_e8;
  TNamedValue<int> local_d8;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  void *local_b8 [2];
  FScriptContainerElement *local_a8;
  int *piStack_a0;
  FScriptContainerElement *local_98;
  int *piStack_90;
  FScriptContainerElement *local_88;
  int *piStack_80;
  FCustomVersionContainer local_78;
  void *local_68 [2];
  void *local_58 [3];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar17 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  bVar14 = true;
  if ((pFVar17->field_0x28 & 1) != 0) {
    lVar18 = (**(code **)(*(longlong *)pFVar17 + 0x30))(pFVar17);
    bVar14 = 0x1f < lVar18;
    if ((2 < (byte)LogLinker._0_1_) && (lVar18 < 0x20)) {
      (**(code **)(*(longlong *)pFVar17 + 0x18))(pFVar17,local_b8);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogLinker);
      if (local_b8[0] != (void *)0x0) {
        FMemory::Free(local_b8[0]);
      }
    }
  }
  FVar23.StructuredArchive = local_res8.StructuredArchive;
  local_218 = (FStructuredArchiveSlot)local_res8.StructuredArchive;
  (**(code **)(*(longlong *)pFVar17 + 0x28))(pFVar17);
  if (bVar14) {
    pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
    piVar6 = (int *)**(undefined8 **)&pFVar19->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar6 + 1) {
      if ((pFVar19->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,param_2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)param_2);
      }
    }
    else {
      param_2->Tag = *piVar6;
      **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
    }
  }
  if (param_2->Tag != -0x61d57c3f) {
    if (param_2->Tag != -0x3e7cd562) {
      return;
    }
    param_2->Tag = -0x61d57c3f;
    bVar13 = pFVar17->field_0x2a;
    if ((bVar13 & 1) == 0) {
      bVar13 = bVar13 | 1;
    }
    else {
      bVar13 = bVar13 & 0xfe;
    }
    pFVar17->field_0x2a = bVar13;
  }
  local_res18[0] = 0xfffffff7;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  puVar7 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar7 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar7;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  uVar25 = 0;
  if ((pFVar17->field_0x28 & 1) == 0) {
    if (param_2->bUnversioned == false) {
      local_1e8[1] = 0x360;
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,local_1e8 + 1);
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,
                 &(param_2->FileVersionUE).FileVersionUE4);
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,
                 &(param_2->FileVersionUE).FileVersionUE5);
      FBinaryArchiveFormatter::Serialize
                ((FVar23.StructuredArchive)->Formatter,&param_2->FileVersionLicenseeUE);
    }
    else {
      local_210[1] = 0;
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,local_210 + 1);
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,local_210 + 1);
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,local_210 + 1);
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,local_210 + 1);
    }
    if (0x3f7 < (param_2->FileVersionUE).FileVersionUE5) {
      local_158.StructuredArchive = FVar23.StructuredArchive;
      pFVar19 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_158);
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&param_2->SavedHash,0x14);
      operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->TotalHeaderSize);
    }
    if (param_2->bUnversioned == false) {
      FCustomVersionContainer::Serialize
                (&param_2->CustomVersionContainer,(FStructuredArchiveSlot)FVar23.StructuredArchive,
                 Latest);
    }
    else {
      local_1b0.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b0.Versions.ArrayNum = 0;
      local_1b0.Versions.ArrayMax = 0;
      FCustomVersionContainer::Serialize
                (&local_1b0,(FStructuredArchiveSlot)FVar23.StructuredArchive,Latest);
      if (local_1b0.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Versions.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((-1 < (int)local_res18[0]) || ((int)local_res18[0] < -9)) {
LAB_14212d66b:
      (param_2->FileVersionUE).FileVersionUE4 = 0;
      (param_2->FileVersionUE).FileVersionUE5 = 0;
      param_2->FileVersionLicenseeUE = 0;
      return;
    }
    if (local_res18[0] != 0xfffffffc) {
      local_1f8._8_8_ = local_1e8;
      local_1e8[0] = 0;
      local_a8 = (FScriptContainerElement *)local_1f8._0_8_;
      piStack_a0 = (int *)local_1f8._8_8_;
      FStructuredArchiveRecord::operator<<<int>
                ((FStructuredArchiveRecord *)&local_218,(TNamedValue<int> *)&local_a8);
    }
    FBinaryArchiveFormatter::Serialize
              ((FVar23.StructuredArchive)->Formatter,&(param_2->FileVersionUE).FileVersionUE4);
    if ((int)local_res18[0] < -7) {
      local_1f8._8_8_ = &(param_2->FileVersionUE).FileVersionUE5;
      local_98 = (FScriptContainerElement *)local_1f8._0_8_;
      piStack_90 = (int *)local_1f8._8_8_;
      FStructuredArchiveRecord::operator<<<int>
                ((FStructuredArchiveRecord *)&local_218,(TNamedValue<int> *)&local_98);
    }
    FBinaryArchiveFormatter::Serialize
              ((FVar23.StructuredArchive)->Formatter,&param_2->FileVersionLicenseeUE);
    iVar15 = (param_2->FileVersionUE).FileVersionUE4;
    if (((iVar15 == 0) && ((param_2->FileVersionUE).FileVersionUE5 == 0)) &&
       (param_2->FileVersionLicenseeUE == 0)) {
      param_2->bUnversioned = true;
      FVar22.FileVersionUE5 = GPackageFileUEVersion.FileVersionUE5;
      FVar22.FileVersionUE4 = GPackageFileUEVersion.FileVersionUE4;
      param_2->FileVersionUE = FVar22;
      iVar15 = GPackageFileUEVersion.FileVersionUE4;
      param_2->FileVersionLicenseeUE = GPackageFileLicenseeUEVersion;
    }
    else {
      param_2->bUnversioned = false;
    }
    if (((iVar15 < 0xd6) || (GPackageFileUEVersion.FileVersionUE4 < iVar15)) ||
       (GPackageFileUEVersion.FileVersionUE5 < (param_2->FileVersionUE).FileVersionUE5))
    goto LAB_14212d66b;
    if (0x3f7 < (param_2->FileVersionUE).FileVersionUE5) {
      local_160.StructuredArchive = FVar23.StructuredArchive;
      pFVar19 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_160);
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&param_2->SavedHash,0x14);
      local_1f8._8_8_ = &param_2->TotalHeaderSize;
      local_88 = (FScriptContainerElement *)local_1f8._0_8_;
      piStack_80 = (int *)local_1f8._8_8_;
      FStructuredArchiveRecord::operator<<<int>
                ((FStructuredArchiveRecord *)&local_218,(TNamedValue<int> *)&local_88);
    }
    if ((int)local_res18[0] < -1) {
      EVar28 = Unknown;
      if (local_res18[0] == 0xfffffffe) {
        EVar28 = Enums;
      }
      else if ((int)local_res18[0] < -2) {
        if ((int)local_res18[0] < -5) {
LAB_14212d5c2:
          EVar28 = Latest;
        }
        else {
          EVar28 = Guids;
        }
      }
      else {
        if ((int)local_res18[0] < -5) goto LAB_14212d5c2;
        bVar14 = FDebug::CheckVerifyFailedImpl2
                           ("CustomVersionFormat != ECustomVersionSerializationFormat::Unknown",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageFileSummary.cpp"
                            ,0x21,L"");
        if (bVar14) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      FCustomVersionContainer::Serialize
                (&param_2->CustomVersionContainer,(FStructuredArchiveSlot)FVar23.StructuredArchive,
                 EVar28);
    }
    pFVar26 = &param_2->CustomVersionContainer;
    if (param_2->bUnversioned != false) {
      pFVar20 = FCurrentCustomVersions::GetAll(&local_78);
      if (pFVar26 != pFVar20) {
        pFVar8 = (pFVar26->Versions).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (pFVar26->Versions).AllocatorInstance.Data = (pFVar20->Versions).AllocatorInstance.Data;
        (pFVar20->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (param_2->CustomVersionContainer).Versions.ArrayNum = (pFVar20->Versions).ArrayNum;
        (param_2->CustomVersionContainer).Versions.ArrayMax = (pFVar20->Versions).ArrayMax;
        (pFVar20->Versions).ArrayNum = 0;
        (pFVar20->Versions).ArrayMax = 0;
      }
      if (local_78.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Versions.AllocatorInstance.Data);
      }
    }
  }
  if ((param_2->FileVersionUE).FileVersionUE5 < 0x3f8) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->TotalHeaderSize);
  }
  operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->PackageName);
  if ((*(longlong *)&pFVar17->field_0x68 != 0) &&
     (*(longlong *)(*(longlong *)&pFVar17->field_0x68 + 0x10) != 0)) {
    param_2->PackageFlags = param_2->PackageFlags | 0x200;
  }
  puVar27 = &param_2->PackageFlags;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  puVar7 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar7 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,puVar27,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,puVar27);
    }
  }
  else {
    *puVar27 = *puVar7;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  if ((pFVar17->field_0x28 & 1) != 0) {
    *puVar27 = *puVar27 & 0xbfff7ffe;
  }
  if ((int)*puVar27 < 0) {
    (**(code **)(*(longlong *)pFVar17 + 0x80))(pFVar17,1);
  }
  piVar6 = &param_2->NameCount;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
    }
  }
  else {
    *piVar6 = *piVar9;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  piVar6 = &param_2->NameOffset;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
    }
  }
  else {
    *piVar6 = *piVar9;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  if (0x3ef < (param_2->FileVersionUE).FileVersionUE5) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->SoftObjectPathsCount);
    local_138.Value = &param_2->SoftObjectPathsOffset;
    FStructuredArchiveRecord::operator<<<int>((FStructuredArchiveRecord *)&local_218,&local_138);
  }
  if (((pFVar17->field_0x2b & 0x10) == 0) && (0x203 < (param_2->FileVersionUE).FileVersionUE4)) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->LocalizationId);
  }
  if (0x1ca < (param_2->FileVersionUE).FileVersionUE4) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->GatherableTextDataCount);
    local_128.Value = &param_2->GatherableTextDataOffset;
    FStructuredArchiveRecord::operator<<<int>((FStructuredArchiveRecord *)&local_218,&local_128);
  }
  piVar6 = &param_2->ExportCount;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
    }
  }
  else {
    *piVar6 = *piVar9;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  piVar6 = &param_2->ExportOffset;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
    }
  }
  else {
    *piVar6 = *piVar9;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  piVar6 = &param_2->ImportCount;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
    }
  }
  else {
    *piVar6 = *piVar9;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  piVar6 = &param_2->ImportOffset;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
    }
  }
  else {
    *piVar6 = *piVar9;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  if (0x3f6 < (param_2->FileVersionUE).FileVersionUE5) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->CellExportCount);
    local_118.Value = &param_2->CellExportOffset;
    FStructuredArchiveRecord::operator<<<int>((FStructuredArchiveRecord *)&local_218,&local_118);
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->CellImportCount);
    local_108.Value = &param_2->CellImportOffset;
    FStructuredArchiveRecord::operator<<<int>((FStructuredArchiveRecord *)&local_218,&local_108);
  }
  if (0x3f5 < (param_2->FileVersionUE).FileVersionUE5) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->MetaDataOffset);
  }
  piVar6 = &param_2->DependsOffset;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
    }
  }
  else {
    *piVar6 = *piVar9;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  if (0x17f < (param_2->FileVersionUE).FileVersionUE4) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->SoftPackageReferencesCount);
    local_f8.Value = &param_2->SoftPackageReferencesOffset;
    FStructuredArchiveRecord::operator<<<int>((FStructuredArchiveRecord *)&local_218,&local_f8);
  }
  if (0x1fd < (param_2->FileVersionUE).FileVersionUE4) {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->SearchableNamesOffset);
  }
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  piVar6 = (int *)**(undefined8 **)&pFVar19->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar6 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)&param_2->ThumbnailTableOffset);
    }
  }
  else {
    param_2->ThumbnailTableOffset = *piVar6;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  if ((param_2->FileVersionUE).FileVersionUE5 < 0x3fa) {
    param_2->ImportTypeHierarchiesCount = 0;
    param_2->ImportTypeHierarchiesOffset = 0;
  }
  else {
    operator<<((FVar23.StructuredArchive)->Formatter->Inner,&param_2->ImportTypeHierarchiesCount);
    local_e8.Value = &param_2->ImportTypeHierarchiesOffset;
    FStructuredArchiveRecord::operator<<<int>((FStructuredArchiveRecord *)&local_218,&local_e8);
  }
  if ((param_2->FileVersionUE).FileVersionUE5 < 0x3f8) {
    local_1e0.A = 0;
    local_1e0.B = 0;
    local_1e0.C = 0;
    local_1e0.D = 0;
    if ((pFVar17->field_0x28 & 1) == 0) {
      local_1e0._0_8_ = *(undefined8 *)(param_2->SavedHash).Hash;
      local_1e0._8_8_ = *(undefined8 *)((param_2->SavedHash).Hash + 8);
    }
    operator<<((FStructuredArchiveSlot)FVar23.StructuredArchive,&local_1e0);
    uVar12 = FIoHash::Zero.Hash._8_8_;
    if ((pFVar17->field_0x28 & 1) != 0) {
      *(undefined8 *)(param_2->SavedHash).Hash = FIoHash::Zero.Hash._0_8_;
      *(undefined8 *)((param_2->SavedHash).Hash + 8) = uVar12;
      *(undefined4 *)((param_2->SavedHash).Hash + 0x10) = FIoHash::Zero.Hash._16_4_;
      *(undefined8 *)(param_2->SavedHash).Hash = local_1e0._0_8_;
      *(undefined8 *)((param_2->SavedHash).Hash + 8) = local_1e0._8_8_;
    }
  }
  local_res10[0] = (param_2->Generations).ArrayNum;
  pFVar19 = (FVar23.StructuredArchive)->Formatter->Inner;
  puVar7 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar7 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar7;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  if (((pFVar17->field_0x28 & 1) != 0) && (0 < (int)local_res10[0])) {
    piVar6 = &(param_2->Generations).ArrayMax;
    piVar9 = &(param_2->Generations).ArrayNum;
    *piVar9 = 0;
    if (*piVar6 < (int)local_res10[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_res10[0],&(param_2->Generations).AllocatorInstance,0,piVar6);
    }
    uVar16 = local_res10[0];
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,local_res10[0],&(param_2->Generations).AllocatorInstance,piVar9,piVar6);
    memset((param_2->Generations).AllocatorInstance.Data + (longlong)iVar15 * 8,0,
           (longlong)(int)uVar16 << 3);
    FVar23.StructuredArchive = (FStructuredArchive *)local_218;
  }
  FVar24 = (FStructuredArchiveSlot)FVar23.StructuredArchive;
  if (0 < (int)local_res10[0]) {
    do {
      uVar16 = 0;
      if ((int)uVar25 < (param_2->Generations).ArrayNum) {
        uVar16 = ~uVar25 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FGenerationInfo::Serialize
                ((FGenerationInfo *)
                 ((param_2->Generations).AllocatorInstance.Data + (longlong)(int)uVar25 * 8),
                 (FStructuredArchiveSlot)FVar23.StructuredArchive,param_2);
      if (((pFVar17->field_0x28 & 1) != 0) && ((pFVar17->field_0x29 & 2) != 0)) {
        return;
      }
      uVar25 = uVar25 + 1;
      FVar24 = local_218;
    } while ((int)uVar25 < (int)local_res10[0]);
  }
  if ((param_2->FileVersionUE).FileVersionUE4 < 0x150) {
    local_res20[0] = 0;
    pFVar19 = *(FArchive **)(*(longlong *)FVar24 + 8);
    puVar7 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar7 + 1) {
      if ((pFVar19->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar19 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar19,local_res20);
      }
    }
    else {
      local_res20[0] = *puVar7;
      **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
    }
    if (((pFVar17->field_0x28 & 1) != 0) && (local_res20[0] != 0)) {
      FString::FString((FString *)local_1f8,L"");
      FEngineVersion::Set(&param_2->SavedByEngineVersion,4,0,0,local_res20[0],(FString *)local_1f8);
      goto LAB_14212dfb4;
    }
  }
  else if ((*(longlong *)&pFVar17->field_0x68 == 0) ||
          (*(longlong *)(*(longlong *)&pFVar17->field_0x68 + 0x10) == 0)) {
    if ((pFVar17->field_0x28 & 4) != 0) {
      pFVar21 = FEngineVersion::Current();
      bVar14 = FEngineVersionBase::HasChangelist((FEngineVersionBase *)pFVar21);
      if (!bVar14) goto LAB_14212deb2;
    }
    operator<<(FVar24,&param_2->SavedByEngineVersion);
    local_150 = param_2->FileVersionUE;
    FixCorruptEngineVersion(&local_150,&param_2->SavedByEngineVersion);
  }
  else {
LAB_14212deb2:
    local_1a0._padding_._0_4_ = 0;
    local_1a0._padding_._4_2_ = 0;
    local_1a0._padding_._0_4_ = 0;
    local_1a0.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.Branch.Data.ArrayNum = 0;
    local_1a0.Branch.Data.ArrayMax = 0;
    operator<<(FVar24,&local_1a0);
    local_1f8._0_8_ = local_1a0.Branch.Data.AllocatorInstance.Data;
LAB_14212dfb4:
    if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1f8._0_8_);
    }
  }
  if ((param_2->FileVersionUE).FileVersionUE4 < 0x1bc) {
    if ((pFVar17->field_0x28 & 1) != 0) {
      pFVar1 = &(param_2->SavedByEngineVersion).Branch;
      (param_2->CompatibleWithEngineVersion)._padding_ = (param_2->SavedByEngineVersion)._padding_;
      pFVar2 = &(param_2->CompatibleWithEngineVersion).Branch;
      *(int *)&(param_2->CompatibleWithEngineVersion)._padding_ =
           (int)(param_2->SavedByEngineVersion)._padding_;
      if (pFVar2 != pFVar1) {
        iVar15 = (param_2->SavedByEngineVersion).Branch.Data.ArrayNum;
        piVar6 = &(param_2->CompatibleWithEngineVersion).Branch.Data.ArrayMax;
        pFVar8 = (pFVar1->Data).AllocatorInstance.Data;
        iVar5 = *piVar6;
        (param_2->CompatibleWithEngineVersion).Branch.Data.ArrayNum = iVar15;
        if ((iVar15 == 0) && (iVar5 == 0)) {
          *piVar6 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar15,iVar5,(ForAnyElementType *)pFVar2,iVar15,piVar6);
          if (iVar15 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,pFVar8,(longlong)iVar15 * 2);
          }
        }
      }
    }
    goto LAB_14212e0ed;
  }
  if ((*(longlong *)&pFVar17->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&pFVar17->field_0x68 + 0x10) == 0)) {
    if ((pFVar17->field_0x28 & 4) != 0) {
      pFVar21 = FEngineVersion::Current();
      bVar14 = FEngineVersionBase::HasChangelist((FEngineVersionBase *)pFVar21);
      if (!bVar14) goto LAB_14212dff3;
    }
    operator<<(FVar24,&param_2->CompatibleWithEngineVersion);
    local_148[0] = param_2->FileVersionUE;
    FixCorruptEngineVersion(local_148,&param_2->CompatibleWithEngineVersion);
  }
  else {
LAB_14212dff3:
    local_180._padding_._0_4_ = 0;
    local_180._padding_._4_2_ = 0;
    local_180._padding_._0_4_ = 0;
    local_180.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_180.Branch.Data.ArrayNum = 0;
    local_180.Branch.Data.ArrayMax = 0;
    operator<<(FVar24,&local_180);
    if (local_180.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Branch.Data.AllocatorInstance.Data);
    }
  }
LAB_14212e0ed:
  pFVar19 = *(FArchive **)(*(longlong *)FVar24 + 8);
  puVar7 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar7 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&param_2->CompressionFlags,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,&param_2->CompressionFlags);
    }
  }
  else {
    param_2->CompressionFlags = *puVar7;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  bVar14 = FCompression::VerifyCompressionFlagsValid(param_2->CompressionFlags);
  if (bVar14) {
    local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c0.ArrayNum = 0;
    local_1c0.ArrayMax = 0;
    operator<<<FCompressedChunk>(FVar24,&local_1c0);
    if (local_1c0.ArrayNum == 0) {
      puVar7 = &param_2->PackageSource;
      pFVar19 = *(FArchive **)(*(longlong *)FVar24 + 8);
      puVar27 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar27 + 1) {
        if ((pFVar19->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,puVar7,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar19,puVar7);
        }
      }
      else {
        *puVar7 = *puVar27;
        **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
      }
      local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.ArrayNum = 0;
      local_1d0.ArrayMax = 0;
      operator<<<FString>(FVar24,&local_1d0);
      if (-7 < (int)local_res18[0]) {
        local_210[2] = 0;
        operator<<(*(FArchive **)(*(longlong *)FVar24 + 8),local_210 + 2);
        if ((local_210[2] != 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("NumTextureAllocations == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageFileSummary.cpp"
                                ,0x1d9,L""), bVar14)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      piVar6 = &param_2->AssetRegistryDataOffset;
      pFVar19 = *(FArchive **)(*(longlong *)FVar24 + 8);
      piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
      if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
        if ((pFVar19->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
        }
      }
      else {
        *piVar6 = *piVar9;
        **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
      }
      plVar3 = &param_2->BulkDataStartOffset;
      pFVar19 = *(FArchive **)(*(longlong *)FVar24 + 8);
      plVar10 = (long64 *)**(longlong **)&pFVar19->field_0x8;
      if ((long64 *)(*(longlong **)&pFVar19->field_0x8)[1] < plVar10 + 1) {
        if ((pFVar19->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,plVar3,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar19,(ulong64 *)plVar3);
        }
      }
      else {
        *plVar3 = *plVar10;
        **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 8;
      }
      if (0xdf < (param_2->FileVersionUE).FileVersionUE4) {
        piVar6 = &param_2->WorldTileInfoDataOffset;
        pFVar19 = *(FArchive **)(*(longlong *)FVar24 + 8);
        piVar9 = (int *)**(undefined8 **)&pFVar19->field_0x8;
        if ((int *)(*(undefined8 **)&pFVar19->field_0x8)[1] < piVar9 + 1) {
          if ((pFVar19->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,piVar6,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar19,(uint *)piVar6);
          }
        }
        else {
          *piVar6 = *piVar9;
          **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
        }
      }
      iVar15 = (param_2->FileVersionUE).FileVersionUE4;
      if (iVar15 < 0x146) {
        if ((0x115 < iVar15) && ((pFVar17->field_0x28 & 1) != 0)) {
          local_d8.Value = local_210;
          local_210[0] = -1;
          FStructuredArchiveRecord::operator<<<int>
                    ((FStructuredArchiveRecord *)&local_218,&local_d8);
          if (-1 < local_210[0]) {
            pTVar4 = &param_2->ChunkIDs;
            pFVar8 = (pTVar4->AllocatorInstance).Data;
            if (((pFVar8 <= (FScriptContainerElement *)local_210) &&
                ((FScriptContainerElement *)local_210 <
                 pFVar8 + (longlong)(param_2->ChunkIDs).ArrayMax * 4)) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            iVar15 = (param_2->ChunkIDs).ArrayNum;
            piVar6 = &(param_2->ChunkIDs).ArrayMax;
            if (iVar15 == *piVar6) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar4->AllocatorInstance,piVar6);
            }
            (param_2->ChunkIDs).ArrayNum = iVar15 + 1;
            *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_210[0];
          }
        }
      }
      else {
        operator<<<int>(FVar24,&param_2->ChunkIDs);
      }
      piVar6 = &param_2->PreloadDependencyCount;
      if ((param_2->FileVersionUE).FileVersionUE4 < 0x1fb) {
        *piVar6 = -1;
        param_2->PreloadDependencyOffset = 0;
      }
      else {
        pFVar17 = *(FArchive **)(*(longlong *)FVar24 + 8);
        piVar9 = (int *)**(undefined8 **)&pFVar17->field_0x8;
        if ((int *)(*(undefined8 **)&pFVar17->field_0x8)[1] < piVar9 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,piVar6,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,(uint *)piVar6);
          }
        }
        else {
          *piVar6 = *piVar9;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
        }
        piVar6 = &param_2->PreloadDependencyOffset;
        pFVar17 = *(FArchive **)(*(longlong *)FVar24 + 8);
        piVar9 = (int *)**(undefined8 **)&pFVar17->field_0x8;
        if ((int *)(*(undefined8 **)&pFVar17->field_0x8)[1] < piVar9 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,piVar6,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,(uint *)piVar6);
          }
        }
        else {
          *piVar6 = *piVar9;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
        }
      }
      piVar6 = &param_2->NamesReferencedFromExportDataCount;
      if ((param_2->FileVersionUE).FileVersionUE5 < 0x3e9) {
        *piVar6 = param_2->NameCount;
      }
      else {
        pFVar17 = *(FArchive **)(*(longlong *)FVar24 + 8);
        piVar9 = (int *)**(undefined8 **)&pFVar17->field_0x8;
        if ((int *)(*(undefined8 **)&pFVar17->field_0x8)[1] < piVar9 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,piVar6,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,(uint *)piVar6);
          }
        }
        else {
          *piVar6 = *piVar9;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
        }
      }
      plVar3 = &param_2->PayloadTocOffset;
      if ((param_2->FileVersionUE).FileVersionUE5 < 0x3ea) {
        *plVar3 = -1;
      }
      else {
        pFVar17 = *(FArchive **)(*(longlong *)FVar24 + 8);
        plVar10 = (long64 *)**(longlong **)&pFVar17->field_0x8;
        if ((long64 *)(*(longlong **)&pFVar17->field_0x8)[1] < plVar10 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,plVar3,8);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,(ulong64 *)plVar3);
          }
        }
        else {
          *plVar3 = *plVar10;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 8;
        }
      }
      piVar6 = &param_2->DataResourceOffset;
      if ((param_2->FileVersionUE).FileVersionUE5 < 0x3f1) {
        *piVar6 = -1;
      }
      else {
        pFVar17 = *(FArchive **)(*(longlong *)FVar24 + 8);
        piVar9 = (int *)**(undefined8 **)&pFVar17->field_0x8;
        if ((int *)(*(undefined8 **)&pFVar17->field_0x8)[1] < piVar9 + 1) {
          if ((pFVar17->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,piVar6,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar17,(uint *)piVar6);
          }
        }
        else {
          *piVar6 = *piVar9;
          **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
        }
      }
      DestructItems<FString,int>((FString *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
      if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
    }
    else {
      if (2 < (byte)LogLinker._0_1_) {
        (**(code **)(*(longlong *)pFVar17 + 0x18))(pFVar17,local_58);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogLinker);
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
      }
      FVar22 = FPackageFileVersion::CreateUE4Version((EUnrealEngineObjectUE4Version)local_c0);
      param_2->FileVersionUE = *(FPackageFileVersion *)FVar22;
    }
    if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
  }
  else {
    if (2 < (byte)LogLinker._0_1_) {
      (**(code **)(*(longlong *)pFVar17 + 0x18))(pFVar17,local_68);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogLinker);
      if (local_68[0] != (void *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
    FVar22 = FPackageFileVersion::CreateUE4Version((EUnrealEngineObjectUE4Version)local_c8);
    param_2->FileVersionUE = *(FPackageFileVersion *)FVar22;
  }
  return;
}

// operator() @ 14212f320

void __thiscall
``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,bool param_1,IAsyncReadRequest *param_2)

{
  int iVar1;
  uchar *puVar2;
  undefined8 uVar3;
  FIoRequestImpl *this_00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FIoBuffer *pFVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  FIoBuffer this_02;
  int *piVar8;
  atomic<unsigned___int64> aVar9;
  BufCore *this_03;
  FIoBuffer local_res18;
  FIoBuffer local_res20;
  BufCore *local_48;
  FReadAccessScope local_40;
  
  aVar9 = (atomic<unsigned___int64>)0x0;
  if (((param_2->bDataIsReady == false) || (param_2->bSizeRequest != false)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bDataIsReady && !bSizeRequest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncFileHandle.h"
                         ,0x96,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar2 = (param_2->field8_0x8).Memory;
  if (puVar2 == (uchar *)0x0) {
LAB_14212f3d6:
    (param_2->field8_0x8).Size = 0;
    lVar6 = *(longlong *)((longlong)this + 8);
    if (puVar2 != (uchar *)0x0) {
      if (*(longlong *)(lVar6 + 0x58) == 0) {
        pFVar7 = FIoBuffer::FIoBuffer
                           (&local_res20,AssumeOwnership,puVar2,*(ulong64 *)(lVar6 + 0x50));
        this_03 = (pFVar7->CorePtr).Reference;
        (pFVar7->CorePtr).Reference = (BufCore *)0x0;
        this_02.CorePtr.Reference = local_res20.CorePtr.Reference;
      }
      else {
        pFVar7 = FIoBuffer::FIoBuffer(&local_res18,Wrap,puVar2,*(ulong64 *)(lVar6 + 0x50));
        this_03 = (pFVar7->CorePtr).Reference;
        (pFVar7->CorePtr).Reference = (BufCore *)0x0;
        this_02.CorePtr.Reference = local_res18.CorePtr.Reference;
      }
      if (this_02.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)this_02.CorePtr.Reference);
        LOCK();
        piVar8 = &((BufCore *)this_02.CorePtr.Reference)->NumRefs;
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_02.CorePtr.Reference);
          ::operator_delete((void *)this_02.CorePtr.Reference,0x20);
        }
      }
      this_00 = *(FIoRequestImpl **)((longlong)this + 8);
      if (this_03 == (BufCore *)0x0) {
        piVar8 = (int *)&DAT_0000000c;
      }
      else {
        piVar8 = &this_03->NumRefs;
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      local_48 = this_03;
      FIoRequestImpl::SetResult(this_00,(FIoBuffer)&local_48);
      FIoStoreTrace::RequestCompleted
                (*(FIoRequestImpl **)((longlong)this + 8),
                 ((*(FIoRequestImpl **)((longlong)this + 8))->Options).RequestedSize);
      if (this_03 != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount(this_03);
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FIoBuffer::BufCore::~BufCore(this_03);
          ::operator_delete(this_03,0x20);
        }
      }
      goto LAB_14212f394;
    }
  }
  else {
    if (param_2->bCanceled == false) {
      if (param_2->bUserSuppliedMemory == false) {
        (**(code **)(*(longlong *)param_2 + 0x20))(param_2);
      }
      goto LAB_14212f3d6;
    }
    lVar6 = *(longlong *)((longlong)this + 8);
  }
  if (*(int *)(lVar6 + 0xd8) != 3) {
    *(undefined4 *)(lVar6 + 0xd8) = 6;
  }
  FIoStoreTrace::RequestFailed(*(FIoRequestImpl **)((longlong)this + 8));
LAB_14212f394:
  lVar6 = *(longlong *)this;
  uVar3 = *(undefined8 *)((longlong)this + 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x98);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (*(longlong *)(lVar6 + 200) == 0) {
    *(undefined8 *)(lVar6 + 0xc0) = uVar3;
  }
  else {
    *(undefined8 *)(*(longlong *)(lVar6 + 200) + 0x28) = uVar3;
  }
  *(undefined8 *)(lVar6 + 200) = uVar3;
  LeaveCriticalSection(lpCriticalSection);
  lVar6 = *(longlong *)this;
  if ((*(longlong *)(lVar6 + 0x10) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = *(TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> **)(lVar6 + 0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_01,&local_40);
  if (*(int *)&this_01[2].AccessDetector.State != 0) {
    aVar9 = this_01[1].AccessDetector.State;
  }
  (**(code **)(*(longlong *)aVar9 + 0x60))(aVar9);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  return;
}

// operator() @ 14212f870

bool __thiscall
`PropertyAccessUtil::SetPropertyValue_DirectComplete'::__l2::<lambda_1>::operator()
          (void *this,FPropertyAccessChangeNotify *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  void **local_28;
  void **local_20;
  
  bVar4 = PropertyAccessUtil::IsCompletePropertyIdentical
                    (*(FProperty **)this,*(void **)((longlong)this + 8),
                     *(FProperty **)((longlong)this + 0x10),*(void **)((longlong)this + 0x18));
  if (bVar4) {
    return true;
  }
  if (*(char *)((longlong)this + 0x30) != '\0') {
    iVar2 = *(int *)((longlong)this + 0x28);
    puVar5 = *(undefined8 **)((longlong)this + 0x20);
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)((longlong)this + 0x28) != iVar2) {
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar5 == puVar1) break;
      pvVar3 = (void *)*puVar5;
      bVar4 = PropertyAccessUtil::IsCompletePropertyIdentical
                        (*(FProperty **)((longlong)this + 0x10),*(void **)((longlong)this + 0x18),
                         *(FProperty **)((longlong)this + 0x10),pvVar3);
      if (!bVar4) {
        local_38 = (void *)0x0;
        local_30 = 0;
        local_48 = (void *)0x0;
        local_40 = 0;
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xe0))
                  (*(longlong **)((longlong)this + 0x10),&local_38,
                   *(undefined8 *)((longlong)this + 0x18),0,0,0,0,0);
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0xe0))
                  (*(longlong **)((longlong)this + 0x10),&local_48,pvVar3,0,0,0,0,0);
        bVar4 = PropertyAccessUtil::IsCompletePropertyIdentical
                          (*(FProperty **)((longlong)this + 0x10),*(void **)((longlong)this + 0x18),
                           *(FProperty **)((longlong)this + 0x10),pvVar3);
        if (!bVar4) {
          local_28 = &local_38;
          local_20 = &local_48;
          ``PropertyAccessUtil::SetPropertyValue_DirectComplete'::__l2::<lambda_1>::operator()'::
          __l15::<lambda_1>::operator()(&local_28);
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
      PropertyAccessUtil::CopyCompletePropertyValue
                (*(FProperty **)this,*(void **)((longlong)this + 8),
                 *(FProperty **)((longlong)this + 0x10),pvVar3);
      puVar5 = puVar5 + 1;
    }
  }
  bVar4 = PropertyAccessUtil::CopyCompletePropertyValue
                    (*(FProperty **)this,*(void **)((longlong)this + 8),
                     *(FProperty **)((longlong)this + 0x10),*(void **)((longlong)this + 0x18));
  return bVar4;
}

// operator() @ 14212fa40

bool __thiscall
`PropertyAccessUtil::SetPropertyValue_DirectSingle'::__l2::<lambda_1>::operator()
          (void *this,FPropertyAccessChangeNotify *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  bVar4 = PropertyAccessUtil::IsSinglePropertyIdentical
                    (*(FProperty **)this,*(void **)((longlong)this + 8),
                     *(FProperty **)((longlong)this + 0x10),*(void **)((longlong)this + 0x18));
  if (bVar4) {
    return true;
  }
  if (*(char *)((longlong)this + 0x30) != '\0') {
    iVar2 = *(int *)((longlong)this + 0x28);
    puVar5 = *(undefined8 **)((longlong)this + 0x20);
    puVar1 = puVar5 + iVar2;
    while( true ) {
      if (*(int *)((longlong)this + 0x28) != iVar2) {
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar5 == puVar1) break;
      pvVar3 = (void *)*puVar5;
      bVar4 = PropertyAccessUtil::IsSinglePropertyIdentical
                        (*(FProperty **)((longlong)this + 0x10),*(void **)((longlong)this + 0x18),
                         *(FProperty **)((longlong)this + 0x10),pvVar3);
      if (!bVar4) {
        ``PropertyAccessUtil::SetPropertyValue_DirectSingle'::__l2::<lambda_1>::operator()'::__l12::
        <lambda_1>::operator()(local_res8);
      }
      PropertyAccessUtil::CopySinglePropertyValue
                (*(FProperty **)this,*(void **)((longlong)this + 8),
                 *(FProperty **)((longlong)this + 0x10),pvVar3);
      puVar5 = puVar5 + 1;
    }
  }
  bVar4 = PropertyAccessUtil::CopySinglePropertyValue
                    (*(FProperty **)this,*(void **)((longlong)this + 8),
                     *(FProperty **)((longlong)this + 0x10),*(void **)((longlong)this + 0x18));
  return bVar4;
}

// operator() @ 14212fb20

TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_> __thiscall
`PropertyAccessUtil::SetPropertyValue_Object'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong lVar2;
  FField *this_00;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UStruct *pUVar6;
  UClass *pUVar7;
  TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_> TVar8;
  FPropertyAccessChangeNotify *in_RDX;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  this_00 = *(FField **)this;
  pUVar5 = UClass::GetSparseClassDataStruct(*(UClass **)(lVar2 + 0x10));
  if (pUVar5 != (UScriptStruct *)0x0) {
    pUVar6 = FField::GetOwnerStruct(this_00);
    if (pUVar6 != (UStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        bVar4 = true;
        goto LAB_14212fb88;
      }
    }
  }
  bVar4 = false;
LAB_14212fb88:
  pUVar7 = FField::GetOwnerClass(this_00);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  iVar1 = (int)pUVar7->_padding_;
  if (((*(int *)(lVar2 + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar7->_padding_)) && (!bVar4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject->IsA(InProp->GetOwnerClass()) || bIsValidSparseProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                       ,0x319,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FPropertyAccessChangeNotify *)(*pcVar3)();
      return (TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>)
             TVar8.Ptr;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return (TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>)
         in_RDX;
}

// operator() @ 142130030

void __thiscall `ReloadPackages'::__l33::<lambda_2>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  UObject *this_00;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (UObject *)0x0) {
LAB_142130072:
    this_00 = local_res10[0];
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    param_1 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar6);
    if (param_1 == (UObject *)0x0) goto LAB_1421300a5;
  }
  else {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) goto LAB_142130072;
  }
  if (*(int *)&param_1[5].field_0xc < 0) {
    return;
  }
  if ((*(uint *)&param_1->field_0x8 >> 0xe & 1) != 0) {
    return;
  }
LAB_1421300a5:
  pFVar2 = *(ForAnyElementType **)this;
  if (((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UObject **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// operator() @ 142130160

void __thiscall
``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::
operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'
::__l2::<lambda_3>::operator()(void *this,void *param_1,void *param_2)

{
  longlong *plVar1;
  void *_Src;
  
  plVar1 = *(longlong **)this;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x150))();
  }
  else {
    memset(param_1,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
  _Src = *(void **)((longlong)this + 0x10);
  plVar1 = *(longlong **)this;
  if (param_1 != _Src) {
    if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,_Src,1);
    }
    else {
      memcpy(param_1,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
    }
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) != 0) {
    memset(param_2,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142130223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x150))(plVar1,param_2);
  return;
}

// operator() @ 142130230

void __thiscall
``FScriptMapHelper::FindOrAdd'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_3>::
operator()(void *this,void *param_1,void *param_2)

{
  longlong *plVar1;
  void *_Src;
  
  plVar1 = *(longlong **)this;
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) == 0) {
    (**(code **)(*plVar1 + 0x150))();
  }
  else {
    memset(param_1,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
  }
  _Src = *(void **)((longlong)this + 0x10);
  plVar1 = *(longlong **)this;
  if (param_1 != _Src) {
    if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
      (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,_Src,1);
    }
    else {
      memcpy(param_1,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
    }
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  if ((*(uint *)(plVar1 + 7) >> 9 & 1) != 0) {
    memset(param_2,0,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421302f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x150))(plVar1,param_2);
  return;
}

// operator() @ 142130300

void __thiscall `ReloadPackages'::__l2::<lambda_3>::operator()(void *this,UObject *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  UPackage *this_00;
  UPackage *pUVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  
  this_00 = CastChecked<UPackage,UObject>(param_1);
  if (this_00->bDirty != 0) {
    plVar1 = *(longlong **)this;
    lVar2 = this_00->_padding_;
    uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar7 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar7 = plVar1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar1[9] - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar3) * 4
                      );
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x10) == lVar2) {
            return;
          }
          iVar4 = *(int *)(*plVar1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    if (this_00->bDirty != 0) {
      pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      pUVar6 = GetTransientPackage();
      if (pUVar5 != pUVar6) {
        if ((GUndo != (ITransaction *)0x0) &&
           (pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00),
           ((uint)pUVar5->PackageFlagsPrivate & 0x300010) == 0)) {
          UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
          (**(code **)((longlong)*GUndo + 0x40))(GUndo,this_00);
        }
        this_00->bDirty = '\0';
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{144}' @ 142130514

/* [thunk]:public: virtual void * __ptr64 __cdecl
   PackageReloadInternal::FReplaceObjectReferencesArchive::`vector deleting
   destructor'`adjustor{144}' (unsigned int) __ptr64 */

void * __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::_vector_deleting_destructor__adjustor_144__
          (FReplaceObjectReferencesArchive *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FReplaceObjectReferencesArchive *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142130530

void * __thiscall
TDoubleLinkedList<FProperty_*>::_scalar_deleting_destructor_
          (TDoubleLinkedList<FProperty_*> *this,uint param_1)

{
  ~TDoubleLinkedList<FProperty_*>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421305b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::FPackageResourceIoBackend::Resolve'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421305f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPackageReloadedEvent,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPackageReloadedEvent,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130630

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::FPackageResourceIoBackend,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::FPackageResourceIoBackend,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130670

void * __thiscall
FAsyncReadFileHandleNull::_scalar_deleting_destructor_(FAsyncReadFileHandleNull *this,uint param_1)

{
  IAsyncReadFileHandle::~IAsyncReadFileHandle((IAsyncReadFileHandle *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421306b0

void * __thiscall
FAsyncReadRequestNull::_scalar_deleting_destructor_(FAsyncReadRequestNull *this,uint param_1)

{
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421306f0

void * __thiscall
PackageReloadInternal::FExistingPackageReferences::_scalar_deleting_destructor_
          (FExistingPackageReferences *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Refs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130750

void * __thiscall
PackageReloadInternal::FNewPackageReferences::_scalar_deleting_destructor_
          (FNewPackageReferences *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<PackageReloadInternal::FNewPackageReference,int>
            ((FNewPackageReference *)(this->Refs).AllocatorInstance.Data,(this->Refs).ArrayNum);
  pFVar1 = (this->Refs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421307c0

void * __thiscall
FPackageResourceManagerFile::_scalar_deleting_destructor_
          (FPackageResourceManagerFile *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421307f0

void * __thiscall
`FPackageResourceManagerFile::IteratePackagesInLocalOnlyDirectory'::__l2::FPackageVisitor::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130840

void * __thiscall
`FPackageResourceManagerFile::IteratePackagesInPath'::__l2::FPackageVisitor::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  *(undefined ***)this = &___7FDirectoryVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421308a0

void * __thiscall
`FPackageResourceManagerFile::IteratePackagesStatInLocalOnlyDirectory'::__l2::FPackageVisitor::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  *(undefined ***)this = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421308f0

void * __thiscall
`FPackageResourceManagerFile::IteratePackagesStatInPath'::__l2::FPackageVisitor::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  *(undefined ***)this = &___7FDirectoryStatVisitor_IPlatformFile__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130950

void * __thiscall
PackageReloadInternal::FReplaceObjectReferencesArchive::_scalar_deleting_destructor_
          (FReplaceObjectReferencesArchive *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__FArchiveUObject__;
  this->_padding_ = (longlong)&_vftable__for__FReferenceCollector__;
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)&this->_padding_);
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421309b0

void * __thiscall
FStringOutputDevice::_scalar_deleting_destructor_(FStringOutputDevice *this,uint param_1)

{
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130a00

void * __thiscall
IPackageResourceManager::_scalar_deleting_destructor_(IPackageResourceManager *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142130a30

void * __thiscall UPackage::_scalar_deleting_destructor_(UPackage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FAdditionalInfo *pFVar2;
  FWorldTileInfo *pFVar3;
  
  pFVar1 = (this->Delegates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->AdditionalInfo).Ptr;
  if (pFVar2 != (FAdditionalInfo *)0x0) {
    pFVar3 = (pFVar2->WorldTileInfo).Ptr;
    if (pFVar3 != (FWorldTileInfo *)0x0) {
      pFVar1 = (pFVar3->LODList).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar3->ParentTilePackageName).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar3->Layer).Name.Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ::operator_delete(pFVar3,0xa8);
    }
    pFVar1 = (pFVar2->LinkerCustomVersion).Versions.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar2,0x38);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x60);
  }
  return this;
}

// ArePropertiesCompatible @ 142131720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl PropertyAccessUtil::ArePropertiesCompatible(FProperty *param_1,FProperty *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  do {
    if (param_2 == (FProperty *)0x0) {
LAB_1421317dc:
      if (param_1 == (FProperty *)0x0) {
LAB_1421317e1:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSrcProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x12,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
    }
    else {
      if ((*(byte *)(param_2->_padding_ + 0x18) & 0x40) == 0) {
        if ((param_2 == (FProperty *)0x0) ||
           ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) == 0)) goto LAB_1421317dc;
        lVar6 = param_2[1]._padding_;
      }
      else {
        lVar6 = param_2[1]._padding_;
      }
      if (lVar6 == 0) goto LAB_1421317dc;
      if (param_1 == (FProperty *)0x0) goto LAB_1421317e1;
      if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
          lVar5 = param_1[1]._padding_;
          goto LAB_1421317b0;
        }
      }
      else {
        lVar5 = param_1[1]._padding_;
LAB_1421317b0:
        if (lVar5 == lVar6) {
          return true;
        }
        if (param_1 == (FProperty *)0x0) goto LAB_1421317e1;
        if (((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) && (param_1[1]._padding_ == 0)) {
          if ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x1000000000000) != 0) {
            return true;
          }
          goto LAB_1421317dc;
        }
      }
    }
    if ((param_2 == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InDestProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x13,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    lVar6 = param_1->_padding_;
    uVar1 = *(ulonglong *)(lVar6 + 0x18);
    if ((((uVar1 & 0x100000000) != 0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 8 & 1) != 0)) ||
       (((uVar1 >> 8 & 1) != 0 && ((*(ulonglong *)(param_2->_padding_ + 0x18) & 0x100000000) != 0)))
       ) {
      return true;
    }
    lVar5 = param_2->_padding_;
    if (lVar6 != lVar5) {
      return false;
    }
    if ((uVar1 >> 0x15 & 1) == 0) {
      if ((uVar1 & 0x800000000000) == 0) {
        if ((*(ulonglong *)(lVar6 + 0x18) & 0x400000000000) == 0) {
          return true;
        }
        if (((*(ulonglong *)(lVar5 + 0x18) & 0x400000000000) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx"),
           param_2 = (FProperty *)0x0, bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar3 = ArePropertiesCompatible
                          ((FProperty *)param_1[1]._padding_,(FProperty *)param_2[1]._padding_);
        if (!bVar3) {
          return false;
        }
        bVar3 = ArePropertiesCompatible
                          ((FProperty *)param_1[1]._padding_,(FProperty *)param_2[1]._padding_);
        if (bVar3) {
          return true;
        }
        return false;
      }
      if ((*(ulonglong *)(lVar5 + 0x18) & 0x800000000000) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        param_1 = (FProperty *)param_1[1]._padding_;
        param_2 = _DAT_00000070;
      }
      else {
        param_1 = (FProperty *)param_1[1]._padding_;
        param_2 = (FProperty *)param_2[1]._padding_;
      }
    }
    else if ((*(uint *)(lVar5 + 0x18) >> 0x15 & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      param_1 = (FProperty *)param_1[1]._padding_;
      param_2 = _DAT_00000078;
    }
    else {
      param_1 = (FProperty *)param_1[1]._padding_;
      param_2 = (FProperty *)param_2[1]._padding_;
    }
  } while( true );
}

// BuildBasicChangeNotify @ 142132c80

TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_> __cdecl
PropertyAccessUtil::BuildBasicChangeNotify
          (FProperty *param_1,UObject *param_2,EPropertyAccessChangeNotifyMode param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UStruct *pUVar6;
  UClass *pUVar7;
  TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_> TVar8;
  undefined7 in_register_00000081;
  
  pUVar5 = UClass::GetSparseClassDataStruct
                     (*(UClass **)(CONCAT71(in_register_00000081,param_3) + 0x10));
  if (pUVar5 != (UScriptStruct *)0x0) {
    pUVar6 = FField::GetOwnerStruct((FField *)param_2);
    if (pUVar6 != (UStruct *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        bVar4 = true;
        goto LAB_142132ce7;
      }
    }
  }
  bVar4 = false;
LAB_142132ce7:
  pUVar7 = FField::GetOwnerClass((FField *)param_2);
  lVar2 = *(longlong *)(CONCAT71(in_register_00000081,param_3) + 0x10);
  iVar1 = (int)pUVar7->_padding_;
  if (((*(int *)(lVar2 + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar7->_padding_)) && (!bVar4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject->IsA(InProp->GetOwnerClass()) || bIsValidSparseProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                       ,0x319,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar8.Ptr = (FPropertyAccessChangeNotify *)(*pcVar3)();
      return (TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>)
             TVar8.Ptr;
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>)
         (FPropertyAccessChangeNotify *)param_1;
}

// CanGetPropertyValue @ 1421337d0

EPropertyAccessResultFlags __cdecl PropertyAccessUtil::CanGetPropertyValue(FProperty *param_1)

{
  EPropertyAccessResultFlags EVar1;
  
  EVar1 = Success;
  if ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None
     ) {
    EVar1 = AccessProtected|PermissionDenied;
  }
  return EVar1;
}

// CanPropertyHoldObject @ 1421337f0

bool __cdecl
CanPropertyHoldObject
          (FObjectPropertyBase *param_1,TObjectPtr<UObject_const_> param_2,FString *param_3)

{
  int iVar1;
  UClass *pUVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UClass *this;
  longlong lVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar2 = (param_1->PropertyClass).field0_0x0.DebugPtr;
  this = (UClass *)0x0;
  if (*(UObject **)param_2.field0_0x0 != (UObject *)0x0) {
    this = UE::CoreUObject::Private::GetClass(*(UObject **)param_2.field0_0x0);
  }
  if (pUVar2 == (UClass *)0x0) {
    (**(code **)(this->_padding_ + 0x368))(this);
  }
  else {
    iVar1 = (int)pUVar2->_padding_;
    if (((int)this->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(this->_padding_ + (longlong)iVar1 * 8) != &pUVar2->_padding_))
    {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      return true;
    }
    lVar5 = (**(code **)(this->_padding_ + 0x368))(this);
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      return true;
    }
  }
  pUVar6 = Z_Construct_UClass_UInterface_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if ((pUVar2 == (UClass *)0x0) || (bVar4 = UClass::ImplementsInterface(this,pUVar2), bVar4)) {
        return true;
      }
      if (param_3 == (FString *)0x0) {
        return false;
      }
      local_res8 = (FName)pUVar2->_padding_;
      FName::ToString(&local_res8,&local_28);
      local_res8 = (FName)this->_padding_;
      FName::ToString(&local_res8,&local_38);
      FString::PrintfImpl(&local_58,L"class \'%s\' does not implement interface \'%s\'");
      if (param_3 != &local_58) {
        pFVar3 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_3->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_58.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
      goto LAB_142133a56;
    }
  }
  if (param_3 == (FString *)0x0) {
    return false;
  }
  local_res8 = (FName)pUVar2->_padding_;
  FName::ToString(&local_res8,&local_38);
  local_res8 = (FName)this->_padding_;
  FName::ToString(&local_res8,&local_28);
  FString::PrintfImpl(&local_48,L"object \'%s\' is incompatible with object property of type \'%s\'"
                     );
  if (param_3 != &local_48) {
    pFVar3 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_3->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (param_3->Data).ArrayNum = local_48.Data.ArrayNum;
    (param_3->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar7.Data = local_38.Data.AllocatorInstance.Data;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
    FVar7.Data = local_38.Data.AllocatorInstance.Data;
  }
LAB_142133a56:
  if (FVar7.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return false;
}

// CanSetPropertyValue @ 142133b80

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::CanSetPropertyValue(FProperty *param_1,ulong64 param_2,bool param_3)

{
  EPropertyFlags EVar1;
  
  EVar1 = param_1->PropertyFlags;
  if ((EVar1 & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None) {
    return AccessProtected|PermissionDenied;
  }
  if (param_3) {
    if ((EVar1 >> 0xb & 1) != 0) {
      return CannotEditTemplate|PermissionDenied;
    }
  }
  else if ((EVar1 >> 0x10 & 1) != 0) {
    return CannotEditInstance|PermissionDenied;
  }
  if (((param_2 & EVar1) == CPF_None) && (param_2 != 0xffffffffffffffff)) {
    return Success;
  }
  return ReadOnly|PermissionDenied;
}

// ClearPackageReplaced @ 1421347a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl PackageReloadInternal::ClearPackageReplaced(UPackage *param_1)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_NewerVersionExists);
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`PackageReloadInternal::ClearPackageReplaced'::__l2::<lambda_1>,bool,UObject_*>
             ::Call;
  ForEachObjectWithPackage
            (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,true,RF_NoFlags,Borrowed);
  return;
}

// CopyCompletePropertyValue @ 142135c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
PropertyAccessUtil::CopyCompletePropertyValue
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4)

{
  EArrayPropertyFlags EVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  FProperty *pFVar11;
  FBoolProperty *pFVar12;
  FProperty *pFVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  FBoolProperty *pFVar17;
  int iVar18;
  <lambda_1> local_58;
  FScriptArrayHelper local_48;
  
  pFVar17 = (FBoolProperty *)0x0;
  if ((param_3 == (FProperty *)0x0) || ((*(byte *)(param_3->_padding_ + 0x18) & 0x40) == 0)) {
    if ((param_3 != (FProperty *)0x0) &&
       ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) != 0)) {
      lVar8 = param_3[1]._padding_;
      goto LAB_142135cb3;
    }
LAB_142135d13:
    if (param_1 == (FProperty *)0x0) {
LAB_142135d18:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSrcProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                         ,0x12,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
LAB_142135d3e:
    if ((param_3 == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InDestProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x13,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar10 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if ((((uVar10 & 0x100000000) != 0) && ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) != 0)) ||
       (((uVar10 >> 8 & 1) != 0 && ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) != 0))
       )) goto LAB_142135ec3;
    lVar8 = param_3->_padding_;
    if (param_1->_padding_ == lVar8) {
      pFVar12 = (FBoolProperty *)param_3;
      if ((uVar10 >> 0x15 & 1) == 0) {
        if ((uVar10 & 0x800000000000) == 0) {
          if ((uVar10 & 0x400000000000) == 0) goto LAB_142135ec3;
          if (((*(ulonglong *)(lVar8 + 0x18) & 0x400000000000) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar12 = pFVar17, bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          bVar4 = ArePropertiesCompatible
                            ((FProperty *)param_1[1]._padding_,*(FProperty **)&pFVar12->FieldSize);
          if (!bVar4) goto LAB_1421360e2;
          goto LAB_142135ea0;
        }
        if ((*(ulonglong *)(lVar8 + 0x18) & 0x800000000000) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x480,L"CastFieldChecked failed with 0x%016llx");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar11 = (FProperty *)param_1[1]._padding_;
          pFVar13 = _DAT_00000070;
        }
        else {
          pFVar11 = (FProperty *)param_1[1]._padding_;
          pFVar13 = (FProperty *)param_3[1]._padding_;
        }
      }
      else {
        if (((*(uint *)(lVar8 + 0x18) >> 0x15 & 1) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar12 = pFVar17,
           bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
LAB_142135ea0:
        pFVar11 = (FProperty *)param_1[1]._padding_;
        pFVar13 = (FProperty *)pFVar12[1]._padding_;
      }
      bVar4 = ArePropertiesCompatible(pFVar11,pFVar13);
      if (bVar4) goto LAB_142135ec3;
    }
LAB_1421360e2:
    if (param_3->ArrayDim < 2) {
      if (((param_1->ArrayDim < 2) || ((*(uint *)(param_3->_padding_ + 0x18) >> 0x15 & 1) == 0)) ||
         (param_3 == (FProperty *)0x0)) goto LAB_1421367bc;
      lVar8 = param_3[1]._padding_;
      uVar10 = *(ulonglong *)(param_1->_padding_ + 0x18);
      if ((uVar10 & 0x40) != 0) {
        lVar7 = param_1[1]._padding_;
LAB_142136436:
        if (lVar7 == 0) goto LAB_142136486;
        if (lVar8 == 0) goto LAB_14213648b;
        if ((*(byte *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x40) == 0) {
          if ((*(ulonglong *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x1000000000000) == 0)
          goto LAB_142136486;
          lVar9 = *(longlong *)(lVar8 + 0x78);
        }
        else {
          lVar9 = *(longlong *)(lVar8 + 0x70);
        }
        if (lVar9 != lVar7) {
          if (lVar8 == 0) goto LAB_14213648b;
          if ((*(byte *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x40) == 0) goto LAB_142136486;
          if (*(longlong *)(lVar8 + 0x70) == 0) {
            if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0)
            goto LAB_142136607;
            goto LAB_142136486;
          }
          goto LAB_1421364b1;
        }
LAB_142136607:
        EVar1 = (EArrayPropertyFlags)param_3[1]._padding_;
        local_48.ElementAlignment = (**(code **)(*(longlong *)param_3[1]._padding_ + 0x168))();
        local_48.InnerProperty = (FProperty *)param_3[1]._padding_;
        local_48.ElementSize = (local_48.InnerProperty)->ElementSize;
        local_48.field1_0x8 = (FScriptArrayHelper_u_8)param_4;
        local_48.ArrayFlags = EVar1;
        if ((local_48.ElementSize < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementSize > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1177,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if ((local_48.InnerProperty == (FProperty *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerProperty",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1178,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar15 = param_1->ArrayDim;
        if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((longlong)iVar15);
        }
        iVar14 = (local_48.field1_0x8.FreezableArray)->ArrayNum;
        if (iVar14 < iVar15) {
          FScriptArrayHelper::AddValues(&local_48,iVar15 - iVar14);
        }
        else if (iVar15 < iVar14) {
          iVar18 = iVar14 - iVar15;
          if ((iVar18 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Count>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1127,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (((local_48.field1_0x8.FreezableArray)->ArrayNum < iVar14) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index + Count <= Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1128,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FScriptArrayHelper::DestructItems(&local_48,iVar15,iVar18);
          local_58.__this = &local_48;
          local_58.Index = iVar15;
          local_58.Count = iVar18;
          FScriptArrayHelper::WithScriptArray<_FScriptArrayHelper::RemoveValues_::__l2::<lambda_1>_>
                    (&local_48,&local_58);
        }
        pFVar12 = pFVar17;
        if (0 < param_1->ArrayDim) {
          do {
            iVar15 = (int)pFVar12;
            pFVar12 = pFVar17;
            if ((local_48.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar10 = (local_48.field1_0x8.FreezableArray)->_padding_;
              if (((local_48.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar10 & 1) != 0))
              {
                uVar10 = (longlong)&(local_48.field1_0x8.HeapArray)->field_0x0 +
                         ((longlong)uVar10 >> 0x18);
              }
              pFVar12 = (FBoolProperty *)
                        ((longlong)local_48.ElementSize * (longlong)iVar15 + uVar10);
            }
            CopySinglePropertyValue
                      (param_1,(void *)((longlong)(iVar15 * param_1->ElementSize) +
                                       (longlong)param_2),(FProperty *)param_3[1]._padding_,pFVar12)
            ;
            pFVar12 = (FBoolProperty *)(ulonglong)(iVar15 + 1U);
          } while ((int)(iVar15 + 1U) < param_1->ArrayDim);
        }
        goto LAB_1421360c6;
      }
      if ((uVar10 & 0x1000000000000) != 0) {
        lVar7 = param_1[1]._padding_;
        goto LAB_142136436;
      }
LAB_142136486:
      if (lVar8 == 0) {
LAB_14213648b:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSrcProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x12,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
LAB_1421364b1:
      uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 8) + 0x18);
      if ((((uVar10 & 0x100000000) != 0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 8 & 1) != 0))
         || (((uVar10 >> 8 & 1) != 0 &&
             ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000) != 0)))) goto LAB_142136607;
      lVar7 = param_1->_padding_;
      if (*(longlong *)(lVar8 + 8) == lVar7) {
        pFVar12 = (FBoolProperty *)param_1;
        if ((uVar10 >> 0x15 & 1) == 0) {
          if ((uVar10 & 0x800000000000) == 0) {
            if ((uVar10 & 0x400000000000) == 0) goto LAB_142136607;
            if (((*(ulonglong *)(lVar7 + 0x18) & 0x400000000000) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x480,L"CastFieldChecked failed with 0x%016llx"),
               pFVar12 = pFVar17, bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            bVar4 = ArePropertiesCompatible
                              (*(FProperty **)(lVar8 + 0x70),*(FProperty **)&pFVar12->FieldSize);
            if (!bVar4) goto LAB_1421367bc;
            goto LAB_1421365f2;
          }
          if ((*(ulonglong *)(lVar7 + 0x18) & 0x800000000000) == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar11 = *(FProperty **)(lVar8 + 0x70);
            pFVar13 = _DAT_00000070;
          }
          else {
            pFVar11 = *(FProperty **)(lVar8 + 0x70);
            pFVar13 = (FProperty *)param_1[1]._padding_;
          }
        }
        else {
          if (((*(uint *)(lVar7 + 0x18) >> 0x15 & 1) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar12 = pFVar17, bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
LAB_1421365f2:
          pFVar11 = *(FProperty **)(lVar8 + 0x78);
          pFVar13 = (FProperty *)pFVar12[1]._padding_;
        }
        bVar4 = ArePropertiesCompatible(pFVar11,pFVar13);
        if (bVar4) goto LAB_142136607;
      }
    }
    else {
      if (((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0) || (param_1 == (FProperty *)0x0)
         ) goto LAB_1421367bc;
      lVar8 = param_1[1]._padding_;
      uVar10 = *(ulonglong *)(param_3->_padding_ + 0x18);
      if ((uVar10 & 0x40) == 0) {
        if ((uVar10 & 0x1000000000000) != 0) {
          lVar7 = param_3[1]._padding_;
          goto LAB_142136131;
        }
LAB_142136181:
        if (lVar8 == 0) {
LAB_142136186:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InSrcProp",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                             ,0x12,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
LAB_1421361ac:
        uVar10 = *(ulonglong *)(*(longlong *)(lVar8 + 8) + 0x18);
        if ((((uVar10 & 0x100000000) == 0) || ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) == 0)
            ) && (((uVar10 >> 8 & 1) == 0 ||
                  ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) == 0)))) {
          lVar7 = param_3->_padding_;
          if (*(longlong *)(lVar8 + 8) != lVar7) goto LAB_1421367bc;
          pFVar12 = (FBoolProperty *)param_3;
          if ((uVar10 >> 0x15 & 1) == 0) {
            if ((uVar10 & 0x800000000000) == 0) {
              if ((uVar10 & 0x400000000000) == 0) goto LAB_142136302;
              if (((*(ulonglong *)(lVar7 + 0x18) & 0x400000000000) == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x480,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar12 = pFVar17, bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              bVar4 = ArePropertiesCompatible
                                (*(FProperty **)(lVar8 + 0x70),*(FProperty **)&pFVar12->FieldSize);
              if (!bVar4) goto LAB_1421367bc;
              goto LAB_1421362ed;
            }
            if ((*(ulonglong *)(lVar7 + 0x18) & 0x800000000000) == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar11 = *(FProperty **)(lVar8 + 0x70);
              pFVar13 = _DAT_00000070;
            }
            else {
              pFVar11 = *(FProperty **)(lVar8 + 0x70);
              pFVar13 = (FProperty *)param_3[1]._padding_;
            }
          }
          else {
            if (((*(uint *)(lVar7 + 0x18) >> 0x15 & 1) == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x480,L"CastFieldChecked failed with 0x%016llx"),
               pFVar12 = pFVar17, bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
LAB_1421362ed:
            pFVar11 = *(FProperty **)(lVar8 + 0x78);
            pFVar13 = (FProperty *)pFVar12[1]._padding_;
          }
          bVar4 = ArePropertiesCompatible(pFVar11,pFVar13);
          if (!bVar4) goto LAB_1421367bc;
        }
      }
      else {
        lVar7 = param_3[1]._padding_;
LAB_142136131:
        if (lVar7 == 0) goto LAB_142136181;
        if (lVar8 == 0) goto LAB_142136186;
        if ((*(byte *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x40) == 0) {
          if ((*(ulonglong *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x1000000000000) == 0)
          goto LAB_142136181;
          lVar9 = *(longlong *)(lVar8 + 0x78);
        }
        else {
          lVar9 = *(longlong *)(lVar8 + 0x70);
        }
        if (lVar9 != lVar7) {
          if (lVar8 == 0) goto LAB_142136186;
          if ((*(byte *)(*(longlong *)(lVar8 + 8) + 0x18) & 0x40) == 0) goto LAB_142136181;
          if (*(longlong *)(lVar8 + 0x70) == 0) {
            if ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) != 0)
            goto LAB_142136302;
            goto LAB_142136181;
          }
          goto LAB_1421361ac;
        }
      }
LAB_142136302:
      lVar7 = param_1[1]._padding_;
      (**(code **)(*(longlong *)param_1[1]._padding_ + 0x168))();
      lVar8 = param_1[1]._padding_;
      iVar15 = *(int *)(lVar8 + 0x34);
      if ((iVar15 < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((lVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (*(int *)((longlong)param_2 + 8) == param_3->ArrayDim) {
        pFVar12 = pFVar17;
        if (0 < param_3->ArrayDim) {
          do {
            iVar14 = (int)pFVar12;
            pFVar12 = pFVar17;
            if (*(int *)((longlong)param_2 + 8) != 0) {
              uVar10 = *(ulonglong *)param_2;
              if (((lVar7 & 1) != 0) && ((uVar10 & 1) != 0)) {
                uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_2;
              }
              pFVar12 = (FBoolProperty *)((longlong)iVar15 * (longlong)iVar14 + uVar10);
            }
            CopySinglePropertyValue
                      ((FProperty *)param_1[1]._padding_,pFVar12,param_3,
                       (void *)((longlong)(iVar14 * param_3->ElementSize) + (longlong)param_4));
            pFVar12 = (FBoolProperty *)(ulonglong)(iVar14 + 1U);
          } while ((int)(iVar14 + 1U) < param_3->ArrayDim);
          return true;
        }
        goto LAB_1421360c6;
      }
    }
LAB_1421367bc:
    bVar4 = false;
  }
  else {
    lVar8 = param_3[1]._padding_;
LAB_142135cb3:
    if (lVar8 == 0) goto LAB_142135d13;
    if (param_1 == (FProperty *)0x0) goto LAB_142135d18;
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
      if (param_1 != (FProperty *)0x0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
          lVar7 = param_1[1]._padding_;
          goto LAB_142135ce8;
        }
        goto LAB_142135cf1;
      }
      goto LAB_142135d18;
    }
    lVar7 = param_1[1]._padding_;
LAB_142135ce8:
    if (lVar7 != lVar8) {
LAB_142135cf1:
      if (param_1 == (FProperty *)0x0) goto LAB_142135d18;
      if (((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) && (param_1[1]._padding_ == 0)) {
        if ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) == 0) goto LAB_142135d13;
        goto LAB_142135ec3;
      }
      goto LAB_142135d3e;
    }
LAB_142135ec3:
    if (param_1->ArrayDim != param_3->ArrayDim) goto LAB_1421360e2;
    uVar10 = *(ulonglong *)(param_3->_padding_ + 0x18);
    if ((uVar10 & 0x40) == 0) {
      if ((uVar10 & 0x1000000000000) != 0) {
        lVar8 = param_3[1]._padding_;
        goto LAB_142135eef;
      }
    }
    else {
      lVar8 = param_3[1]._padding_;
LAB_142135eef:
      if (lVar8 != 0) {
        bVar4 = true;
        if (param_1->ArrayDim < 1) {
          return true;
        }
        do {
          iVar15 = (int)pFVar17;
          puVar16 = (undefined1 *)((longlong)(iVar15 * param_3->ElementSize) + (longlong)param_4);
          uVar10 = *(ulonglong *)(param_1->_padding_ + 0x18);
          if ((uVar10 & 0x40) == 0) {
            if ((uVar10 & 0x1000000000000) != 0) {
              pFVar11 = (FProperty *)param_1[1]._padding_;
              lVar8 = pFVar11->_padding_;
              goto LAB_142135f3d;
            }
            uVar5 = 0xff;
          }
          else {
            lVar8 = param_1->_padding_;
            pFVar11 = param_1;
LAB_142135f3d:
            uVar5 = (**(code **)(lVar8 + 0x210))
                              (pFVar11,(longlong)(iVar15 * param_1->ElementSize) + (longlong)param_2
                              );
          }
          uVar10 = *(ulonglong *)(param_3->_padding_ + 0x18);
          if ((uVar10 & 0x40) == 0) {
            if ((uVar10 & 0x1000000000000) == 0) {
              bVar6 = 0;
            }
            else {
              (**(code **)(*(longlong *)param_3[1]._padding_ + 0x1e8))
                        ((longlong *)param_3[1]._padding_,puVar16);
              bVar6 = 1;
            }
          }
          else {
            *puVar16 = uVar5;
            bVar6 = 1;
          }
          bVar4 = (bool)(bVar4 & bVar6);
          pFVar17 = (FBoolProperty *)(ulonglong)(iVar15 + 1U);
          if (param_1->ArrayDim <= (int)(iVar15 + 1U)) {
            return bVar4;
          }
        } while( true );
      }
    }
    uVar2 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if (((uVar2 >> 0x11 & 1) == 0) || (param_1 == (FProperty *)0x0)) {
      if ((((uVar2 & 0x100000000) == 0) || ((uVar10 >> 8 & 1) == 0)) &&
         (((uVar2 >> 8 & 1) == 0 || ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) == 0)
          ))) {
        FProperty::CopyCompleteValue(param_1,param_4,param_2);
        return true;
      }
      UE::PropertyAccessUtil::Private::ConvertRealNumber
                (param_1,param_2,param_3,param_4,param_1->ArrayDim);
    }
    else {
      pFVar12 = (FBoolProperty *)param_3;
      if (((uVar10 >> 0x11 & 1) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar12 = pFVar17,
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if (0 < param_1->ArrayDim) {
        while( true ) {
          iVar18 = (int)pFVar17;
          iVar15 = param_1->ElementSize;
          iVar14 = param_3->ElementSize;
          if (((char)param_1[1]._padding_ == '\0') &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldSize != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0xa4b,L""), bVar4)) break;
          FBoolProperty::SetPropertyValue
                    (pFVar12,(void *)((longlong)(iVar18 * iVar14) + (longlong)param_4),
                     (*(byte *)((longlong)&param_1[1]._padding_ + 3) &
                     *(byte *)((longlong)param_2 +
                              (ulonglong)*(byte *)((longlong)&param_1[1]._padding_ + 1) +
                              (longlong)(iVar18 * iVar15))) != 0);
          pFVar17 = (FBoolProperty *)(ulonglong)(iVar18 + 1U);
          if (param_1->ArrayDim <= (int)(iVar18 + 1U)) {
            return true;
          }
        }
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
LAB_1421360c6:
    bVar4 = true;
  }
  return bVar4;
}

// CopySinglePropertyValue @ 142136b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
PropertyAccessUtil::CopySinglePropertyValue
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  FProperty *pFVar7;
  FProperty *pFVar8;
  FBoolProperty *pFVar9;
  FBoolProperty *pFVar10;
  undefined4 uVar11;
  
  pFVar10 = (FBoolProperty *)0x0;
  if ((param_3 == (FProperty *)0x0) || ((*(byte *)(param_3->_padding_ + 0x18) & 0x40) == 0)) {
    if ((param_3 != (FProperty *)0x0) &&
       ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) != 0)) {
      lVar6 = param_3[1]._padding_;
      goto LAB_142136b67;
    }
LAB_142136bc7:
    if (param_1 == (FProperty *)0x0) {
LAB_142136bcc:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSrcProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                         ,0x12,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
LAB_142136bf2:
    if ((param_3 == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InDestProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x13,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
    if ((((uVar1 & 0x100000000) != 0) && ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) != 0)) ||
       (((uVar1 >> 8 & 1) != 0 && ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) != 0)))
       ) goto LAB_142136da1;
    lVar6 = param_3->_padding_;
    if (param_1->_padding_ == lVar6) {
      if ((uVar1 >> 0x15 & 1) == 0) {
        if ((uVar1 & 0x800000000000) == 0) {
          if ((uVar1 & 0x400000000000) != 0) {
            pFVar9 = (FBoolProperty *)param_3;
            if (((*(ulonglong *)(lVar6 + 0x18) & 0x400000000000) == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x480,L"CastFieldChecked failed with 0x%016llx"),
               pFVar9 = pFVar10, bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            bVar3 = ArePropertiesCompatible
                              ((FProperty *)param_1[1]._padding_,*(FProperty **)&pFVar9->FieldSize);
            if ((!bVar3) ||
               (bVar3 = ArePropertiesCompatible
                                  ((FProperty *)param_1[1]._padding_,
                                   (FProperty *)pFVar9[1]._padding_), !bVar3)) goto LAB_142136d14;
          }
          goto LAB_142136da1;
        }
        pFVar9 = (FBoolProperty *)param_3;
        if (((*(ulonglong *)(lVar6 + 0x18) & 0x800000000000) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar9 = pFVar10,
           bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar7 = (FProperty *)param_1[1]._padding_;
        pFVar8 = *(FProperty **)&pFVar9->FieldSize;
      }
      else if ((*(uint *)(lVar6 + 0x18) >> 0x15 & 1) == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x480,L"CastFieldChecked failed with 0x%016llx");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar7 = (FProperty *)param_1[1]._padding_;
        pFVar8 = _DAT_00000078;
      }
      else {
        pFVar7 = (FProperty *)param_1[1]._padding_;
        pFVar8 = (FProperty *)param_3[1]._padding_;
      }
      bVar3 = ArePropertiesCompatible(pFVar7,pFVar8);
      if (bVar3) goto LAB_142136da1;
    }
LAB_142136d14:
    bVar3 = false;
  }
  else {
    lVar6 = param_3[1]._padding_;
LAB_142136b67:
    if (lVar6 == 0) goto LAB_142136bc7;
    if (param_1 == (FProperty *)0x0) goto LAB_142136bcc;
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
      if (param_1 != (FProperty *)0x0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
          lVar5 = param_1[1]._padding_;
          goto LAB_142136b9c;
        }
        goto LAB_142136ba5;
      }
      goto LAB_142136bcc;
    }
    lVar5 = param_1[1]._padding_;
LAB_142136b9c:
    if (lVar5 != lVar6) {
LAB_142136ba5:
      if (param_1 == (FProperty *)0x0) goto LAB_142136bcc;
      if (((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) && (param_1[1]._padding_ == 0)) {
        if ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) == 0) goto LAB_142136bc7;
        goto LAB_142136da1;
      }
      goto LAB_142136bf2;
    }
LAB_142136da1:
    uVar1 = *(ulonglong *)(param_3->_padding_ + 0x18);
    if ((uVar1 & 0x40) == 0) {
      if ((uVar1 & 0x1000000000000) != 0) {
        lVar6 = param_3[1]._padding_;
        goto LAB_142136dc9;
      }
    }
    else {
      lVar6 = param_3[1]._padding_;
LAB_142136dc9:
      if (lVar6 != 0) {
        if (param_1 == (FProperty *)0x0) {
LAB_142136e19:
          uVar4 = 0xff;
        }
        else if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
          if ((param_1 == (FProperty *)0x0) ||
             ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) == 0))
          goto LAB_142136e19;
          uVar4 = (**(code **)(*(longlong *)param_1[1]._padding_ + 0x210))
                            ((longlong *)param_1[1]._padding_,param_2);
        }
        else {
          uVar4 = (**(code **)(param_1->_padding_ + 0x210))(param_1,param_2);
        }
        uVar1 = *(ulonglong *)(param_3->_padding_ + 0x18);
        if ((uVar1 & 0x40) != 0) {
          *(undefined1 *)param_4 = uVar4;
          return true;
        }
        if ((uVar1 & 0x1000000000000) != 0) {
          (**(code **)(*(longlong *)param_3[1]._padding_ + 0x1e8))
                    ((longlong *)param_3[1]._padding_,param_4);
          return true;
        }
        goto LAB_142136d14;
      }
    }
    if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) == 0))
    {
      if ((param_1 == (FProperty *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InSrcProp",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                             ,0x12,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
      if ((((uVar1 & 0x100000000) == 0) || ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) == 0))
         && (((uVar1 >> 8 & 1) == 0 ||
             ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) == 0)))) {
        if (param_4 != param_2) {
          if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) != 0) {
            memcpy(param_4,param_2,(longlong)param_1->ElementSize);
            return true;
          }
          (**(code **)(param_1->_padding_ + 0xf0))(param_1,param_4,param_2,1);
        }
      }
      else {
        if ((param_2 == (void *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InSrcValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                               ,0x1f,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if ((param_4 == (void *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InDestValue",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                               ,0x21,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if ((param_1->ArrayDim < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount <= InSrcProp->ArrayDim",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                               ,0x23,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
        if (((uVar1 & 0x100000000) != 0) && (param_1 != (FProperty *)0x0)) {
          if (((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             param_3 = (FProperty *)pFVar10, bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          uVar11 = (**(code **)(param_1->_padding_ + 0x230))(param_1,param_2);
          (**(code **)(((FBoolProperty *)param_3)->_padding_ + 0x1f8))(param_3,param_4,uVar11);
          return true;
        }
        if (((uVar1 >> 8 & 1) != 0) && (param_1 != (FProperty *)0x0)) {
          if (((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             param_3 = (FProperty *)pFVar10, bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          uVar11 = (**(code **)(param_1->_padding_ + 0x230))(param_1,param_2);
          (**(code **)(((FBoolProperty *)param_3)->_padding_ + 0x1f8))(param_3,param_4,uVar11);
          return true;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x3f,L"Invalid property type used with ConvertRealNumber!");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      bVar3 = true;
    }
    else {
      if (((uVar1 >> 0x11 & 1) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x480,L"CastFieldChecked failed with 0x%016llx"),
         param_3 = (FProperty *)pFVar10, bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_1,param_2);
      FBoolProperty::SetPropertyValue((FBoolProperty *)param_3,param_4,bVar3);
      bVar3 = true;
    }
  }
  return bVar3;
}

// DumpExternalReferences @ 1421383d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl PackageReloadInternal::DumpExternalReferences(UObject *param_1,UPackage *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  UPackage *pUVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *this;
  FString *pFVar8;
  UPackage *pUVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_1b8 [32];
  FScriptContainerElement *local_198;
  longlong local_190;
  undefined1 local_188;
  undefined1 local_187 [7];
  ForAnyElementType local_180;
  undefined8 local_178;
  uint local_170;
  FScriptContainerElement *local_168;
  UPackage *local_160;
  FScriptContainerElement *local_158;
  UObject *local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FReferenceChainSearch local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_178 = 0;
  local_160 = param_2;
  local_150 = param_1;
  FReferenceChainSearch::FReferenceChainSearch(&local_118,param_1,Default,Log);
  uVar10 = (ulonglong)local_118.ReferenceChains.ArrayNum;
  local_170 = local_118.ReferenceChains.ArrayNum;
  local_158 = local_118.ReferenceChains.AllocatorInstance.Data + uVar10 * 8;
  do {
    pFVar11 = local_158;
    uVar13 = 0;
    local_168 = local_118.ReferenceChains.AllocatorInstance.Data;
    if (local_118.ReferenceChains.ArrayNum != (uint)uVar10) {
      local_188 = 0;
      `TCheckedPointerIterator<FReferenceChainSearch::FReferenceChain_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_188);
    }
    pUVar4 = local_160;
    if (local_118.ReferenceChains.AllocatorInstance.Data == pFVar11) {
      FReferenceChainSearch::~FReferenceChainSearch(&local_118);
      if (0 < (int)local_178) {
        if (3 < (byte)LogUObjectGlobals._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_150,&local_128,(UObject *)0x0)
          ;
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
        }
        iVar7 = (int)local_178;
        pFVar11 = local_180.Data + (longlong)(int)local_178 * 0x10;
        FVar14.Data = local_180.Data;
        while( true ) {
          if ((int)local_178 != iVar7) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_187);
          }
          if (FVar14.Data == pFVar11) break;
          if (3 < (byte)LogUObjectGlobals._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
          }
          FVar14.Data = FVar14.Data + 0x10;
        }
      }
      DestructItems<FString,int>((FString *)local_180.Data,(int)local_178);
      if (local_180.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data);
      }
      return;
    }
    lVar1 = *(longlong *)local_118.ReferenceChains.AllocatorInstance.Data;
    uVar10 = uVar13;
    if (0 < *(int *)(lVar1 + 0x10)) {
      do {
        uVar12 = (uint)uVar13;
        uVar6 = 0;
        if ((int)uVar12 < *(int *)(lVar1 + 0x10)) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_198 = (FScriptContainerElement *)(longlong)(int)uVar12;
          local_190 = (longlong)*(int *)(lVar1 + 0x10);
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar2 = *(longlong *)(uVar10 + *(longlong *)(lVar1 + 8));
        this = FGCObjectInfo::TryResolveObject(*(FGCObjectInfo **)(lVar2 + 8));
        if (this == (UObject *)0x0) {
          pFVar8 = FGCObjectInfo::GetPathName(*(FGCObjectInfo **)(lVar2 + 8),&local_148);
          if ((pFVar8->Data).ArrayNum == 0) {
            local_198 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_198 = (pFVar8->Data).AllocatorInstance.Data;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("LinkObject",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageReload.cpp"
                             ,0x198,L"Unable to resolve object: %s when dumping external references"
                            );
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pUVar9 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
        if (pUVar9 != pUVar4) {
          pFVar8 = FGCObjectInfo::GetFullName(*(FGCObjectInfo **)(lVar2 + 8),&local_138);
          iVar7 = (int)local_178;
          if ((int)local_178 == local_178._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_180,(int *)((longlong)&local_178 + 4));
          }
          local_178 = CONCAT44(local_178._4_4_,iVar7 + 1);
          pFVar11 = local_180.Data + (longlong)iVar7 * 0x10;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
          (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar11 + 8) = (pFVar8->Data).ArrayNum;
          *(int *)(pFVar11 + 0xc) = (pFVar8->Data).ArrayMax;
          (pFVar8->Data).ArrayNum = 0;
          (pFVar8->Data).ArrayMax = 0;
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar10 = uVar10 + 8;
        local_118.ReferenceChains.AllocatorInstance.Data = local_168;
      } while ((int)(uVar12 + 1) < *(int *)(lVar1 + 0x10));
    }
    uVar10 = (ulonglong)local_170;
    local_118.ReferenceChains.AllocatorInstance.Data =
         local_118.ReferenceChains.AllocatorInstance.Data + 8;
  } while( true );
}

// EmitPostChangeNotify @ 142138750

void __cdecl
PropertyAccessUtil::EmitPostChangeNotify(FPropertyAccessChangeNotify *param_1,bool param_2)

{
  return;
}

// EmitPreChangeNotify @ 142138760

void __cdecl
PropertyAccessUtil::EmitPreChangeNotify(FPropertyAccessChangeNotify *param_1,bool param_2)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePackage @ 142138870

void __cdecl EmptyLinkFunctionForGeneratedCodePackage(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePerPlatformProperties @ 142138880

void __cdecl EmptyLinkFunctionForGeneratedCodePerPlatformProperties(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePrimaryAssetId @ 142138890

void __cdecl EmptyLinkFunctionForGeneratedCodePrimaryAssetId(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyAccessUtil @ 1421388a0

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyAccessUtil(void)

{
  return;
}

// ExtensionToPackageFormat @ 1421394f0

EPackageFormat __cdecl ExtensionToPackageFormat(EPackageExtension param_1)

{
  if ((param_1 != TextAsset) && (param_1 != TextMap)) {
    return Binary;
  }
  return Text;
}

// FindPropertyByName @ 14213b580

FProperty * __cdecl PropertyAccessUtil::FindPropertyByName(FName param_1,UStruct *param_2)

{
  bool bVar1;
  FName FVar2;
  FProperty *pFVar3;
  FName local_res8;
  
  pFVar3 = param_2->PropertyLink;
  do {
    if (pFVar3 == (FProperty *)0x0) {
LAB_14213b5c9:
      FProperty::FindRedirectedPropertyName((UStruct *)&local_res8,(FName)param_2);
      if ((local_res8 == (FName)0x0) ||
         (pFVar3 = UStruct::FindPropertyByName(param_2,local_res8), pFVar3 == (FProperty *)0x0)) {
        pFVar3 = (FProperty *)(**(code **)(param_2->_padding_ + 0x308))(param_2,param_1);
      }
      return pFVar3;
    }
    bVar1 = IsThisNotNull(pFVar3,"FField::GetFName");
    if (bVar1) {
      FVar2 = (FName)pFVar3->_padding_;
    }
    else {
      FVar2.ComparisonIndex.Value = 0;
      FVar2.Number = 0;
    }
    if (FVar2 == param_1) {
      if (pFVar3 != (FProperty *)0x0) {
        return pFVar3;
      }
      goto LAB_14213b5c9;
    }
    pFVar3 = pFVar3->PropertyLinkNext;
  } while( true );
}

// FixCorruptEngineVersion @ 14213bce0

void __cdecl FixCorruptEngineVersion(FPackageFileVersion *param_1,FEngineVersion *param_2)

{
  bool bVar1;
  uint uVar2;
  FString local_18;
  
  if ((((param_1->FileVersionUE4 < 0x20a) && ((short)param_2->_padding_ == 4)) &&
      (*(short *)((longlong)&param_2->_padding_ + 2) == 0x1a)) &&
     (*(short *)((longlong)&param_2->_padding_ + 4) == 0)) {
    uVar2 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)param_2);
    if (0xc265ba < uVar2) {
      bVar1 = FEngineVersionBase::IsLicenseeVersion((FEngineVersionBase *)param_2);
      if (bVar1) {
        FString::Replace(&param_2->Branch,&local_18,L"+",L"/",IgnoreCase);
        uVar2 = FEngineVersionBase::GetChangelist((FEngineVersionBase *)param_2);
        FEngineVersion::Set(param_2,4,0x1a,0,uVar2,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// GeneratePackageReloadEvent @ 14213bf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FPackageReloadedEvent,1> * __cdecl
PackageReloadInternal::GeneratePackageReloadEvent
          (TSharedPtr<FPackageReloadedEvent,1> *__return_storage_ptr__,UPackage *param_1,
          UPackage *param_2)

{
  ulonglong uVar1;
  UObjectBase *this;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  TSharedPtr<FPackageReloadedEvent,1> *pTVar6;
  FUObjectItem *pFVar7;
  TSharedRef<FPackageReloadedEvent,1> *pTVar8;
  byte bVar9;
  uint *puVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  UPackage *local_190;
  UPackage *local_188;
  TSharedPtr<FPackageReloadedEvent,1> local_180;
  longlong *local_170;
  uint uStack_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  TPairInitializer<UPackage_*_&,UPackage_*_&> local_140;
  FName local_130;
  FString local_128;
  FString local_118;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  UPackage **local_d8;
  UPackage **local_d0;
  FString local_c8;
  FString local_b8;
  TSharedRef<FPackageReloadedEvent,1> local_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  __return_storage_ptr__->Object = (FPackageReloadedEvent *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((param_1 != (UPackage *)0x0) && (param_2 != (UPackage *)0x0)) {
    local_d8 = &local_188;
    local_d0 = &local_190;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar14 = 0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_190 = param_2;
    local_188 = param_1;
    TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPackage_*_&,UPackage_*_&>_>
              ((TSet<TTuple<UObject_*,UObject_*>,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>,FDefaultSetAllocator>
                *)local_98,&local_140,(bool *)&local_d8);
    (**(code **)(local_188->_padding_ + 0x240))(local_188,local_190,local_98);
    uVar15 = local_70;
    uStack_164 = 1;
    local_150 = 0;
    uStack_154 = local_150;
    if (local_70 != 0) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar13 = *puVar10;
      local_150 = 0;
      uVar14 = 0;
      while (uVar13 == 0) {
        lVar5 = (longlong)(int)uVar14;
        local_150 = local_150 + 0x20;
        uVar14 = uVar14 + 1;
        uStack_154 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < (int)uVar14)
        goto LAB_14213c0c1;
        uVar13 = puVar10[lVar5 + 1];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar1 = (ulonglong)uStack_164 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_140.Key._4_4_ = (int)lVar5;
      uStack_154 = (local_150 - 1) + local_140.Key._4_4_;
      if ((int)local_70 < (int)uStack_154) {
        uStack_154 = local_70;
      }
    }
LAB_14213c0c1:
    local_170 = (longlong *)local_98;
    local_160 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uVar13 = local_70 & 0xffffffe0;
    iStack_148 = local_98._8_4_ - local_64;
    uStack_158 = 0xffffffff;
    TStack_100.CurrentBitIndex = uStack_154;
    TStack_100.UnvisitedBitMask = 0xffffffff;
    TStack_100._padding_ = CONCAT44(uStack_164,uVar14);
    iVar12 = (int)local_70 >> 5;
    TStack_100._28_4_ = uStack_154;
    TStack_100.BaseBitIndex = local_150;
    uStack_e0 = CONCAT44(uStack_144,iStack_148);
    bVar9 = (byte)local_70;
    uStack_168 = uVar14;
    uStack_14c = uStack_154;
    local_108 = local_170;
    TStack_100.Array = local_160;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FPackageReloadedEvent,1> *)(*pcVar2)();
      return pTVar6;
    }
    if (uVar15 != local_70) {
      puVar10 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar10 = local_78;
      }
      uVar14 = -1 << (bVar9 & 0x1f) & puVar10[iVar12];
      while (uVar14 == 0) {
        lVar5 = (longlong)iVar12;
        uVar13 = uVar13 + 0x20;
        iVar12 = iVar12 + 1;
        uVar15 = local_70;
        if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar12)
        goto LAB_14213c1cb;
        uVar14 = puVar10[lVar5 + 1];
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar15 = (int)lVar5 + -1 + uVar13;
      if ((int)local_70 < (int)uVar15) {
        uVar15 = local_70;
      }
    }
LAB_14213c1cb:
    while( true ) {
      plVar3 = local_108;
      if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if (((TStack_100.CurrentBitIndex == uVar15) &&
          (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (plVar3 == (longlong *)local_98)) break;
      lVar5 = *plVar3;
      this = *(UObjectBase **)(lVar5 + 8 + (longlong)TStack_100.CurrentBitIndex * 0x18);
      this_00 = *(UObjectBaseUtility **)(lVar5 + (longlong)TStack_100.CurrentBitIndex * 0x18);
      if (this == (UObjectBase *)0x0) {
        if ((*(uint *)&this_00->field_0x8 & 0x40) == 0) {
          if (2 < (byte)LogUObjectGlobals._0_1_) {
            local_130 = (FName)local_190->_padding_;
            ::FName::ToString(&local_130,&local_118);
            UObjectBaseUtility::GetPathName(this_00,&local_b8,(UObject *)local_188);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
            FVar11.Data = local_118.Data.AllocatorInstance.Data;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              FVar11.Data = local_118.Data.AllocatorInstance.Data;
            }
            goto LAB_14213c392;
          }
        }
        else if (3 < (byte)LogUObjectGlobals._0_1_) {
          local_140.Value = (UPackage **)local_190->_padding_;
          ::FName::ToString((FName *)&local_140.Value,&local_128);
          UObjectBaseUtility::GetPathName(this_00,&local_c8,(UObject *)local_188);
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
          FVar11.Data = local_128.Data.AllocatorInstance.Data;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            FVar11.Data = local_128.Data.AllocatorInstance.Data;
          }
LAB_14213c392:
          if (FVar11.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar11.Data);
          }
        }
      }
      else {
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this_00->field_0xc);
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
          pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
          FUObjectItem::SetRootFlags(pFVar7,RootSet);
        }
        UObjectBase::AtomicallySetFlags
                  (this,*(EObjectFlags *)&this_00->field_0x8 &
                        (RF_Transactional|RF_Standalone|RF_Public));
      }
      TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
    }
    pTVar8 = MakeShared<FPackageReloadedEvent,1,UPackage_*_&,UPackage_*_&,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_>
                       (&local_a8,&local_188,&local_190,
                        (TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
                         *)local_98);
    local_180.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    local_180.Object = pTVar8->Object;
    if (local_180.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_180) {
      __return_storage_ptr__->Object = local_180.Object;
      local_180.Object = (FPackageReloadedEvent *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_180.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return __return_storage_ptr__;
}

// GetArchetypeInstancesInheritingPropertyValue @ 14213c4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
PropertyAccessUtil::GetArchetypeInstancesInheritingPropertyValue
          (FProperty *param_1,UObject *param_2,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  UObject *pUVar10;
  UObject *this;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  byte bVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_198 [32];
  undefined1 local_147;
  undefined1 local_146 [6];
  UObject *local_140;
  UObject *local_138;
  FScriptContainerElement *local_130;
  uint local_128;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_120;
  UObject *local_110;
  FScriptContainerElement *local_108;
  undefined1 local_100 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_f8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> local_e8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  param_3->ArrayNum = 0;
  local_110 = param_2;
  local_f8 = param_3;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  if (((param_1 == (FProperty *)0x0) || (param_2 == (UObject *)0x0)) ||
     ((*(uint *)&param_2->field_0x8 & 0x30) == 0)) {
    return false;
  }
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  UObject::GetArchetypeInstances(param_2,&local_120);
  cVar6 = (**(code **)(**(longlong **)&param_2->field_0x10 + 0x3e0))();
  if (cVar6 == '\0') {
    param_2 = UClass::GetSparseClassData(*(UClass **)&param_2->field_0x10,CreateIfNull);
  }
  if ((param_1->ArrayDim < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  if ((param_2 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar8 = (*pcVar4)();
    return (bool)uVar8;
  }
  uVar12 = (ulonglong)local_120.ArrayNum;
  iVar2 = param_1->Offset_Internal;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_130 = local_120.AllocatorInstance.Data + uVar12 * 8;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  local_128 = local_120.ArrayNum;
  pFVar16 = local_130;
  FVar18.Data = local_120.AllocatorInstance.Data;
LAB_14213c694:
  do {
    local_108 = FVar18.Data;
    if (local_120.ArrayNum != (int)uVar12) {
      local_147 = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_147);
    }
    if (FVar18.Data == pFVar16) {
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      return true;
    }
    this = *(UObject **)FVar18.Data;
    uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595
    ;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    local_138 = this;
    if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
      FVar14 = (ForElementType<FSetElementId>)&local_e8.Hash;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar14 = local_e8.Hash.SecondaryData;
      }
      for (iVar17 = *(int *)((longlong)FVar14 +
                            (ulonglong)(local_e8.HashSize - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
          iVar17 != -1; iVar17 = *(int *)(local_e8.Elements._0_8_ + 8 + (longlong)iVar17 * 0x10)) {
        if (*(UObject **)(local_e8.Elements._0_8_ + (longlong)iVar17 * 0x10) == this)
        goto LAB_14213c9f9;
      }
    }
    bVar7 = true;
    local_140 = this;
LAB_14213c740:
    iVar17 = 0;
    uVar11 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595
    ;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    uVar11 = uVar11 >> 0x10 ^ uVar11;
    if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
      FVar14 = (ForElementType<FSetElementId>)&local_98.Hash;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar14 = local_98.Hash.SecondaryData;
      }
      for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(local_98.HashSize - 1U & uVar11) * 4);
          iVar3 != -1; iVar3 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar3 * 0x10)) {
        if (*(UObject **)(local_98.Elements._0_8_ + (longlong)iVar3 * 0x10) == this)
        goto LAB_14213c914;
      }
    }
    if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
      FVar14 = (ForElementType<FSetElementId>)&local_e8.Hash;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar14 = local_e8.Hash.SecondaryData;
      }
      for (iVar3 = *(int *)((longlong)FVar14 + (ulonglong)(local_e8.HashSize - 1U & uVar11) * 4);
          iVar3 != -1; iVar3 = *(int *)(local_e8.Elements._0_8_ + 8 + (longlong)iVar3 * 0x10)) {
        if (*(UObject **)(local_e8.Elements._0_8_ + (longlong)iVar3 * 0x10) == this)
        goto LAB_14213c8c4;
      }
    }
    pUVar10 = this;
    if (cVar6 == '\0') {
      pUVar10 = UClass::GetSparseClassData(*(UClass **)&this->field_0x10,CreateIfNull);
    }
    if (pUVar10 == (UObject *)0x0) {
LAB_14213c8c4:
      bVar7 = false;
    }
    else {
      if ((param_1->ArrayDim < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar3 = param_1->Offset_Internal;
      bVar15 = 1;
      if (0 < param_1->ArrayDim) {
        do {
          if (bVar15 == 0) goto LAB_14213c8af;
          lVar13 = (longlong)(iVar17 * param_1->ElementSize);
          bVar9 = IsSinglePropertyIdentical
                            (param_1,(void *)((longlong)&param_2->field_0x0 + lVar13 + iVar2),
                             param_1,(void *)((longlong)&pUVar10->field_0x0 + lVar13 + iVar3));
          bVar15 = bVar15 & bVar9;
          iVar17 = iVar17 + 1;
        } while (iVar17 < param_1->ArrayDim);
        if (bVar15 == 0) {
LAB_14213c8af:
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::
          Emplace<UObject_*_const_&>(&local_e8,(UObject **)local_100,(bool *)&local_140);
          goto LAB_14213c8c4;
        }
      }
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
                (&local_98,(UObject **)(local_100 + 4),(bool *)&local_140);
LAB_14213c914:
      this = UObject::GetArchetype(this);
      local_140 = this;
      if (this == (UObject *)0x0) {
        local_146[0] = 0;
        `PropertyAccessUtil::GetArchetypeInstancesInheritingPropertyValue'::__l17::<lambda_1>::
        operator()(local_146);
      }
    }
    pTVar5 = local_f8;
    pFVar16 = local_130;
    if ((this != (UObject *)0x0) && (this != local_110)) {
      if (!bVar7) break;
      goto LAB_14213c740;
    }
    if ((bVar7) && (this == local_110)) {
      pFVar16 = (local_f8->AllocatorInstance).Data;
      piVar1 = &local_f8->ArrayMax;
      if ((pFVar16 <= (FScriptContainerElement *)&local_138) &&
         (((FScriptContainerElement *)&local_138 < pFVar16 + (longlong)*piVar1 * 8 &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar17 = pTVar5->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar5->AllocatorInstance,piVar1);
      }
      pTVar5->ArrayNum = iVar17 + 1;
      *(UObject **)((pTVar5->AllocatorInstance).Data + (longlong)iVar17 * 8) = local_138;
      pFVar16 = local_130;
    }
LAB_14213c9f9:
    uVar12 = (ulonglong)local_128;
    FVar18.Data = local_108 + 8;
  } while( true );
  FVar18.Data = local_108 + 8;
  uVar12 = (ulonglong)local_128;
  goto LAB_14213c694;
}

// GetArchetypeInstancesInheritingPropertyValue_AsContainerData @ 14213ca90

bool __cdecl
PropertyAccessUtil::GetArchetypeInstancesInheritingPropertyValue_AsContainerData
          (FProperty *param_1,UObject *param_2,TArray<void_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  UObject *local_res18;
  longlong local_48;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_40;
  
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  GetArchetypeInstancesInheritingPropertyValue(param_1,param_2,&local_40);
  cVar7 = (**(code **)(**(longlong **)&param_2->field_0x10 + 0x3e0))();
  if (cVar7 == '\0') {
    param_2 = UClass::GetSparseClassData(*(UClass **)&param_2->field_0x10,CreateIfNull);
  }
  iVar6 = local_40.ArrayNum;
  uVar11 = (ulonglong)local_40.ArrayNum;
  pFVar2 = local_40.AllocatorInstance.Data + uVar11 * 8;
  FVar12.Data = local_40.AllocatorInstance.Data;
LAB_14213cb30:
  do {
    if ((int)uVar11 != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar12.Data == pFVar2) {
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
      return false;
    }
    lVar3 = *(longlong *)FVar12.Data;
    if (cVar7 == '\0') {
      local_res18 = UClass::GetSparseClassData(*(UClass **)(lVar3 + 0x10),CreateIfNull);
      if (local_res18 != param_2) {
        TArray<void_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<void_*_const_&>
                  (param_3,&local_res18);
        uVar11 = local_40._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 8;
        goto LAB_14213cb30;
      }
    }
    else {
      pFVar4 = (param_3->AllocatorInstance).Data;
      local_48 = lVar3;
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 8)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
      }
      iVar10 = param_3->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar10 + 1;
      *(longlong *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_48;
    }
    uVar11 = local_40._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// GetPropertyEnumType @ 14213e550

UEnum * __cdecl PropertyAccessUtil::GetPropertyEnumType(FProperty *param_1)

{
  if (param_1 != (FProperty *)0x0) {
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
      return (UEnum *)param_1[1]._padding_;
    }
    if ((param_1 != (FProperty *)0x0) &&
       ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0)) {
      return (UEnum *)param_1[1]._padding_;
    }
  }
  return (UEnum *)0x0;
}

// GetPropertyEnumValue @ 14213e590

long64 __cdecl PropertyAccessUtil::GetPropertyEnumValue(FProperty *param_1,void *param_2)

{
  long64 lVar1;
  
  if (param_1 == (FProperty *)0x0) {
    return -1;
  }
  if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
    if (param_1 == (FProperty *)0x0) {
      return -1;
    }
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) == 0) {
      return -1;
    }
    param_1 = (FProperty *)param_1[1]._padding_;
  }
                    /* WARNING: Could not recover jumptable at 0x00014213e5bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)(param_1->_padding_ + 0x210))();
  return lVar1;
}

// GetPropertyValue @ 14213e5d0

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::GetPropertyValue(TFunctionRef<bool___cdecl(void)> *param_1)

{
  char cVar1;
  EPropertyAccessResultFlags EVar2;
  
  cVar1 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  EVar2 = ConversionFailed;
  if (cVar1 != '\0') {
    EVar2 = Success;
  }
  return EVar2;
}

// GetPropertyValue_DirectComplete @ 14213e600

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::GetPropertyValue_DirectComplete
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4)

{
  bool bVar1;
  
  if ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None
     ) {
    return AccessProtected|PermissionDenied;
  }
  bVar1 = CopyCompletePropertyValue(param_1,param_2,param_3,param_4);
  return !bVar1 * '\x02';
}

// GetPropertyValue_DirectSingle @ 14213e630

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::GetPropertyValue_DirectSingle
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4)

{
  bool bVar1;
  
  if ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None
     ) {
    return AccessProtected|PermissionDenied;
  }
  bVar1 = CopySinglePropertyValue(param_1,param_2,param_3,param_4);
  return !bVar1 * '\x02';
}

// GetPropertyValue_InContainer @ 14213e660

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::GetPropertyValue_InContainer
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  EPropertyAccessResultFlags EVar3;
  
  if ((param_5 == -1) || (param_1->ArrayDim == 1)) {
    if ((param_1->ArrayDim < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2)
       ) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) ==
        CPF_None) {
      return AccessProtected|PermissionDenied;
    }
    bVar2 = CopyCompletePropertyValue
                      (param_1,(void *)((longlong)param_1->Offset_Internal + (longlong)param_2),
                       param_3,param_4);
  }
  else {
    if ((param_1->ArrayDim <= param_5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InArrayIndex < InContainerProp->ArrayDim",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x17f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if (((param_5 < 0) || (param_1->ArrayDim <= param_5)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2)
       ) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    if ((param_1->PropertyFlags & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) ==
        CPF_None) {
      return AccessProtected|PermissionDenied;
    }
    bVar2 = CopySinglePropertyValue
                      (param_1,(void *)((longlong)param_2 +
                                       (longlong)param_1->Offset_Internal +
                                       (longlong)param_5 * (longlong)param_1->ElementSize),param_3,
                       param_4);
  }
  return (bVar2 ^ 1U) * '\x02';
}

// GetPropertyValue_Object @ 14213e810

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::GetPropertyValue_Object
          (FProperty *param_1,UObject *param_2,FProperty *param_3,void *param_4,int param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EPropertyAccessResultFlags EVar4;
  UClass *pUVar5;
  
  pUVar5 = FField::GetOwnerClass((FField *)param_1);
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject->IsA(InObjectProp->GetOwnerClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                       ,0x172,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EVar4 = GetPropertyValue_InContainer(param_1,param_2,param_3,param_4,param_5);
  return EVar4;
}

// GetTypeHash @ 14213ec90

uint __cdecl GetTypeHash(FPrimaryAssetId *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = (param_1->PrimaryAssetType).Name;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  FVar1 = param_1->PrimaryAssetName;
  uVar3 = uVar2 >> 0xd ^ -uVar2;
  uVar4 = (-0x61c88647 - uVar2) - uVar3 ^ uVar3 << 8;
  uVar5 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar2 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar5 ^ uVar3 << 10;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  uVar4 = ((uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar4 << 8;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  return (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

// ImportDefaultPropertyValue @ 14213f540

bool __cdecl
PropertyAccessUtil::ImportDefaultPropertyValue
          (FProperty *param_1,void *param_2,FString *param_3,FOutputDevice *param_4)

{
  ulonglong uVar1;
  UScriptStruct *pUVar2;
  wchar_t *pwVar3;
  bool bVar4;
  
  if ((((param_3->Data).ArrayNum < 2) &&
      (uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18), (uVar1 >> 0xe & 1) == 0)) &&
     ((uVar1 >> 0x1e & 1) == 0)) {
    return false;
  }
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar2 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar4 = pUVar2 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = (UScriptStruct *)param_1[1]._padding_ == pUVar2;
    }
    if (bVar4) {
      bVar4 = FDefaultValueHelper::ParseVector(param_3,param_2);
    }
    else {
      pUVar2 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
      if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
        bVar4 = pUVar2 == (UScriptStruct *)0x0;
      }
      else {
        bVar4 = (UScriptStruct *)param_1[1]._padding_ == pUVar2;
      }
      if (bVar4) {
        bVar4 = FDefaultValueHelper::ParseVector2D(param_3,param_2);
      }
      else {
        pUVar2 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
        if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
          bVar4 = pUVar2 == (UScriptStruct *)0x0;
        }
        else {
          bVar4 = (UScriptStruct *)param_1[1]._padding_ == pUVar2;
        }
        if (bVar4) {
          bVar4 = FDefaultValueHelper::ParseRotator(param_3,param_2);
        }
        else {
          pUVar2 = TBaseStructure<FColor>::Get();
          if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
            bVar4 = pUVar2 == (UScriptStruct *)0x0;
          }
          else {
            bVar4 = (UScriptStruct *)param_1[1]._padding_ == pUVar2;
          }
          if (bVar4) {
            bVar4 = FDefaultValueHelper::ParseColor(param_3,param_2);
          }
          else {
            pUVar2 = TBaseStructure<FLinearColor>::Get();
            if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
              bVar4 = pUVar2 == (UScriptStruct *)0x0;
            }
            else {
              bVar4 = (UScriptStruct *)param_1[1]._padding_ == pUVar2;
            }
            if (!bVar4) goto LAB_14213f676;
            bVar4 = FDefaultValueHelper::ParseLinearColor(param_3,param_2);
          }
        }
      }
    }
    if (bVar4 != false) {
      return bVar4;
    }
  }
LAB_14213f676:
  if ((param_3->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pwVar3 = FProperty::ImportText_Direct(param_1,pwVar3,param_2,(UObject *)0x0,0,param_4);
  return pwVar3 != (wchar_t *)0x0;
}

// IsCompletePropertyIdentical @ 142143200

bool __cdecl
PropertyAccessUtil::IsCompletePropertyIdentical
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_1->ArrayDim == param_3->ArrayDim;
  iVar2 = 0;
  if (0 < param_1->ArrayDim) {
    do {
      if (bVar3 == false) {
        return false;
      }
      bVar1 = IsSinglePropertyIdentical
                        (param_1,(void *)((longlong)(iVar2 * param_1->ElementSize) +
                                         (longlong)param_2),param_3,
                         (void *)((longlong)(iVar2 * param_3->ElementSize) + (longlong)param_4));
      bVar3 = (bool)(bVar3 & bVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1->ArrayDim);
  }
  return bVar3;
}

// IsObjectTemplate @ 1421434f0

bool __cdecl PropertyAccessUtil::IsObjectTemplate(UObject *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar2) &&
     ((bVar2 = UObjectBaseUtility::IsPackageExternal((UObjectBaseUtility *)param_1), bVar2 ||
      (cVar3 = (**(code **)(*(longlong *)param_1 + 0x1c0))(param_1), cVar3 == '\0')))) {
    if ((*(uint *)(*(longlong *)&param_1->field_0x10 + 0xd4) & 0x1000) != 0) {
      for (plVar1 = *(longlong **)&param_1->field_0x20; plVar1 != (longlong *)0x0;
          plVar1 = (longlong *)plVar1[4]) {
        cVar3 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
        if (cVar3 != '\0') {
          return true;
        }
      }
    }
    return false;
  }
  return true;
}

// IsSinglePropertyIdentical @ 142143690

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
PropertyAccessUtil::IsSinglePropertyIdentical
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  FProperty *pFVar9;
  longlong lVar10;
  FProperty *pFVar11;
  FBoolProperty *pFVar12;
  FBoolProperty *pFVar13;
  
  pFVar13 = (FBoolProperty *)0x0;
  if (param_3 == (FProperty *)0x0) {
LAB_14214375c:
    if (param_1 == (FProperty *)0x0) {
LAB_142143761:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSrcProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                         ,0x12,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
LAB_142143787:
    if ((param_3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InDestProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x13,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    lVar10 = param_1->_padding_;
    uVar1 = *(ulonglong *)(lVar10 + 0x18);
    if ((((uVar1 & 0x100000000) == 0) || ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) == 0)) &&
       (((uVar1 >> 8 & 1) == 0 || ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) == 0)))
       ) {
      lVar8 = param_3->_padding_;
      if (lVar10 != lVar8) {
        return false;
      }
      if ((uVar1 >> 0x15 & 1) == 0) {
        if ((uVar1 & 0x800000000000) != 0) {
          pFVar12 = (FBoolProperty *)param_3;
          if (((*(ulonglong *)(lVar8 + 0x18) & 0x800000000000) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar12 = pFVar13, bVar6)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pFVar9 = (FProperty *)param_1[1]._padding_;
          pFVar11 = *(FProperty **)&pFVar12->FieldSize;
          goto LAB_14214389c;
        }
        if ((*(ulonglong *)(lVar10 + 0x18) & 0x400000000000) == 0) goto LAB_142143939;
        pFVar12 = (FBoolProperty *)param_3;
        if (((*(ulonglong *)(lVar8 + 0x18) & 0x400000000000) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar12 = pFVar13,
           bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        bVar6 = ArePropertiesCompatible
                          ((FProperty *)param_1[1]._padding_,*(FProperty **)&pFVar12->FieldSize);
        if (!bVar6) {
          return false;
        }
        bVar6 = ArePropertiesCompatible
                          ((FProperty *)param_1[1]._padding_,(FProperty *)pFVar12[1]._padding_);
      }
      else {
        if ((*(uint *)(lVar8 + 0x18) >> 0x15 & 1) == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x480,L"CastFieldChecked failed with 0x%016llx");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pFVar9 = (FProperty *)param_1[1]._padding_;
          pFVar11 = _DAT_00000078;
        }
        else {
          pFVar9 = (FProperty *)param_1[1]._padding_;
          pFVar11 = (FProperty *)param_3[1]._padding_;
        }
LAB_14214389c:
        bVar6 = ArePropertiesCompatible(pFVar9,pFVar11);
      }
      if (!bVar6) {
        return false;
      }
    }
LAB_142143939:
    if (param_1 != (FProperty *)0x0) goto LAB_14214393e;
  }
  else {
    if ((*(byte *)(param_3->_padding_ + 0x18) & 0x40) == 0) {
      if ((param_3 == (FProperty *)0x0) ||
         ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) == 0)) goto LAB_14214375c;
      lVar10 = param_3[1]._padding_;
    }
    else {
      lVar10 = param_3[1]._padding_;
    }
    if (lVar10 == 0) goto LAB_14214375c;
    if (param_1 == (FProperty *)0x0) goto LAB_142143761;
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
      if (param_1 != (FProperty *)0x0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
          lVar8 = param_1[1]._padding_;
          goto LAB_142143730;
        }
        goto LAB_142143739;
      }
      goto LAB_142143761;
    }
    lVar8 = param_1[1]._padding_;
LAB_142143730:
    if (lVar8 == lVar10) goto LAB_142143939;
LAB_142143739:
    if (param_1 == (FProperty *)0x0) goto LAB_142143761;
    if ((((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) || (param_1[1]._padding_ != 0)) ||
       ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) == 0)) goto LAB_142143787;
LAB_14214393e:
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x11 & 1) != 0) {
      if (((*(uint *)(param_3->_padding_ + 0x18) >> 0x11 & 1) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CastResult",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x480,L"CastFieldChecked failed with 0x%016llx"),
         param_3 = (FProperty *)pFVar13, bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar6 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_1,param_2);
      bVar7 = FBoolProperty::GetPropertyValue((FBoolProperty *)param_3,param_4);
      return bVar7 == bVar6;
    }
    if (param_1 != (FProperty *)0x0) goto LAB_1421439d7;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("InSrcProp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                     ,0x12,L"");
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_1421439d7:
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if ((((uVar1 & 0x100000000) == 0) || ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) == 0)) &&
     (((uVar1 >> 8 & 1) == 0 || ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) == 0))))
  {
    uVar5 = (**(code **)(param_1->_padding_ + 0xb8))(param_1,param_2,param_4,0);
    return (bool)uVar5;
  }
  if ((param_2 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSrcValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                         ,0x46,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_4 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDestValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                         ,0x48,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if ((uVar1 & 0x100000000) == 0) {
    if ((uVar1 >> 8 & 1) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                         ,0x61,L"Invalid property type used with AreRealNumbersIdentical!");
      if (!bVar6) {
        return false;
      }
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar6 = (*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) == 0;
  }
  else {
    bVar6 = (*(uint *)(param_3->_padding_ + 0x18) & 0x100) == 0;
  }
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx"),
     param_3 = (FProperty *)pFVar13, bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  dVar4 = (double)(**(code **)(param_1->_padding_ + 0x230))(param_1,param_2);
  dVar3 = (double)(**(code **)(((FBoolProperty *)param_3)->_padding_ + 0x230))(param_3,param_4);
  if (dVar4 != dVar3) {
    return false;
  }
  return true;
}

// LexToString @ 142144040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl LexToString(FString *__return_storage_ptr__,EPayloadFilterReason param_1)

{
  void *pvVar1;
  undefined1 auStack_458 [32];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_458;
  if (param_1 == None) {
    FString::FString(__return_storage_ptr__,L"None");
  }
  else {
    local_438.Base = local_418;
    local_438.CurPos = local_418;
    local_438.End = (wchar_t *)local_18;
    local_438.bIsDynamic = false;
    local_438.bIsExternal = false;
    if ((param_1 & Asset) != None) {
      pvVar1 = FGenericPlatformString::Memcpy(local_418,L"Asset",10);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 10);
    }
    if ((param_1 & Path) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_438,L"|",1);
      }
      if (local_438.End < local_438.CurPos + 4) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,4);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"Path",8);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 8);
    }
    if ((param_1 & MinSize) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_438,L"|",1);
      }
      if (local_438.End < local_438.CurPos + 7) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,7);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"MinSize",0xe);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0xe);
    }
    if ((param_1 & EditorBulkDataCode) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_438,L"|",1);
      }
      if (local_438.End < local_438.CurPos + 0x12) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,0x12);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"EditorBulkDataCode",0x24);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x24);
    }
    if ((param_1 & MapContent) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_438,L"|",1);
      }
      if (local_438.End < local_438.CurPos + 10) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,10);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"MapContent",0x14);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x14);
    }
    if ((param_1 & ~(MapContent|EditorBulkDataCode|MinSize|Path|Asset)) != None) {
      if ((int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1) != 0) {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_438,L"|",1);
      }
      if (local_438.End < local_438.CurPos + 0xb) {
        TStringBuilderBase<wchar_t>::Extend(&local_438,0xb);
      }
      pvVar1 = FGenericPlatformString::Memcpy(local_438.CurPos,L"UnknownBits",0x16);
      local_438.CurPos = (wchar_t *)((longlong)pvVar1 + 0x16);
    }
    if (local_438.End < local_438.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_438,1);
    }
    *local_438.CurPos = L'\0';
    FString::FString(__return_storage_ptr__,local_438.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  }
  return __return_storage_ptr__;
}

// LexToString @ 142144380

wchar_t * __cdecl LexToString(EPropertyObjectReferenceType param_1)

{
  if (param_1 == None) {
    return L"None";
  }
  if (param_1 == Strong) {
    return L"Strong";
  }
  if (param_1 == Weak) {
    return L"Weak";
  }
  if (param_1 != Soft) {
    if (param_1 != Conservative) {
      return L"Unknown";
    }
    return L"Conservative";
  }
  return L"Soft";
}

// LoadReplacementPackage @ 1421445b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPackage * __cdecl PackageReloadInternal::LoadReplacementPackage(UPackage *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  FName FVar6;
  FString *pFVar7;
  UClass *pUVar8;
  size_t sVar9;
  UPackage *pUVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  int iVar13;
  UClass *pUVar14;
  FName local_res8;
  FName local_res18 [2];
  undefined8 in_stack_ffffffffffffff78;
  uint uVar17;
  longlong lVar15;
  ulonglong uVar16;
  FString local_78;
  FString local_68;
  undefined1 local_58 [12];
  int iStack_4c;
  TStringView<wchar_t> local_48;
  
  uVar17 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  if (param_1 == (UPackage *)0x0) {
    return (UPackage *)0x0;
  }
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,&local_78);
  pcVar2 = *(code **)(param_1->_padding_ + 0x170);
  local_res8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res8,(FString *)local_58);
  ::FString::PrintfImpl(&local_68,L"%s_DEADPACKAGE");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar11.Data = local_68.Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(local_res18,(wchar_t *)FVar11.Data);
  FVar6 = *pFVar4;
  local_res8 = (FName)UPackage::StaticClass();
  pUVar8 = (UClass *)param_1->_padding_;
  pUVar14 = (UClass *)0x0;
  if (pUVar8 == (UClass *)0x0) {
LAB_1421446a2:
    pUVar8 = pUVar14;
  }
  else {
    pUVar5 = UPackage::StaticClass();
    iVar13 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar13 * 8)
        != &pUVar5->_padding_)) goto LAB_1421446a2;
  }
  iVar13 = 0;
  lVar15 = (ulonglong)uVar17 << 0x20;
  FVar6 = MakeUniqueObjectName
                    ((UObject *)(local_res18 + 1),pUVar8,local_res8,
                     FVar6.ComparisonIndex.Value.Value);
  pFVar7 = ::FName::ToString((FName *)FVar6,(FString *)&local_48);
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(param_1,pwVar12,0,0xb4,lVar15);
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_NewerVersionExists);
  unique0x00008e00 = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`PackageReloadInternal::MarkPackageReplaced'::__l2::<lambda_1>,bool,UObject_*>
       ::Call;
  ForEachObjectWithPackage
            (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)local_58,true,RF_NoFlags,Borrowed);
  pUVar8 = (UClass *)param_1->_padding_;
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar11.Data = local_78.Data.AllocatorInstance.Data;
  }
  if (pUVar8 == (UClass *)0x0) {
LAB_14214477b:
    pUVar8 = pUVar14;
  }
  else {
    pUVar5 = UPackage::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14214477b;
  }
  uVar16 = 0;
  pUVar8 = (UClass *)
           LoadPackage((UPackage *)pUVar8,(wchar_t *)FVar11.Data,param_2,(FArchive *)0x0,
                       (FLinkerInstancingContext *)0x0);
  if (pUVar8 != (UClass *)0x0) {
    bVar3 = UPackage::IsFullyLoaded((UPackage *)pUVar8);
    if (!bVar3) {
      FlushAsyncLoading(-1);
      UPackage::FullyLoad((UPackage *)pUVar8);
    }
    goto LAB_1421449bb;
  }
  if (2 < (byte)LogUObjectGlobals._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  if (local_78.Data.ArrayNum == 0) {
    FVar11.Data = (FScriptContainerElement *)L"";
LAB_1421447dc:
    sVar9 = wcslen((wchar_t *)FVar11.Data);
    iVar13 = (int)sVar9;
  }
  else {
    FVar11.Data = local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1421447dc;
  }
  pUVar8 = (UClass *)param_1->_padding_;
  iStack_4c = local_48._12_4_;
  local_58._8_4_ = iVar13;
  local_58._0_8_ = FVar11.Data;
  if (pUVar8 == (UClass *)0x0) {
LAB_14214481d:
    pUVar8 = pUVar14;
  }
  else {
    pUVar5 = UPackage::StaticClass();
    iVar13 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar13 * 8)
        != &pUVar5->_padding_)) goto LAB_14214481d;
  }
  pUVar5 = UPackage::StaticClass();
  local_48.DataPtr = (wchar_t *)local_58._0_8_;
  local_48.Size = local_58._8_4_;
  local_48._12_4_ = iStack_4c;
  pUVar10 = (UPackage *)StaticFindObject(pUVar5,(UObject *)pUVar8,&local_48,None);
  if (pUVar10 != (UPackage *)0x0) {
    pcVar2 = *(code **)(pUVar10->_padding_ + 0x170);
    local_res8 = (FName)pUVar10->_padding_;
    ::FName::ToString(&local_res8,&local_68);
    ::FString::PrintfImpl((FString *)local_58,L"%s_DEADPACKAGE");
    pwVar12 = L"";
    if (local_58._8_4_ != 0) {
      pwVar12 = (wchar_t *)local_58._0_8_;
    }
    pFVar4 = ::FName::FName(local_res18,pwVar12);
    FVar6 = *pFVar4;
    local_res8 = (FName)UPackage::StaticClass();
    pUVar8 = (UClass *)pUVar10->_padding_;
    if (pUVar8 == (UClass *)0x0) {
LAB_1421448ce:
      pUVar8 = pUVar14;
    }
    else {
      pUVar5 = UPackage::StaticClass();
      iVar13 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
          &pUVar5->_padding_)) goto LAB_1421448ce;
    }
    uVar16 = uVar16 & 0xffffffff00000000;
    FVar6 = MakeUniqueObjectName
                      ((UObject *)(local_res18 + 1),pUVar8,local_res8,
                       FVar6.ComparisonIndex.Value.Value);
    pFVar7 = ::FName::ToString((FName *)FVar6,(FString *)&local_48);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    (*pcVar2)(pUVar10,pwVar12,0,0xb4,uVar16);
    if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DataPtr);
    }
    if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    MakePackagePurgeable(pUVar10);
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar11.Data = local_78.Data.AllocatorInstance.Data;
  }
  (**(code **)(param_1->_padding_ + 0x170))(param_1,FVar11.Data,0);
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_NewerVersionExists);
  unique0x00008e00 = &local_res8;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`PackageReloadInternal::ClearPackageReplaced'::__l2::<lambda_1>,bool,UObject_*>
       ::Call;
  ForEachObjectWithPackage
            (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)local_58,true,RF_NoFlags,Borrowed);
  pUVar8 = pUVar14;
LAB_1421449bb:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return (UPackage *)pUVar8;
}

// MakeObjectPurgeable @ 142144cd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl PackageReloadInternal::MakeObjectPurgeable(UObject *param_1)

{
  FUObjectItem *pFVar1;
  
  pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
  if (((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
    pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar1,RootSet);
  }
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone|RF_Public);
  return;
}

// MakePackagePurgeable @ 142144d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl PackageReloadInternal::MakePackagePurgeable(UPackage *param_1)

{
  FUObjectItem *pFVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
    pFVar1 = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::ClearRootFlags(pFVar1,RootSet);
  }
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone|RF_Public);
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`PackageReloadInternal::MakePackagePurgeable'::__l2::<lambda_1>,bool,UObject_*>
             ::Call;
  ForEachObjectWithPackage
            (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,true,RF_NoFlags,Borrowed);
  return;
}

// MakePackageResourceManagerFile @ 142144f00

IPackageResourceManager * __cdecl MakePackageResourceManagerFile(void)

{
  IPackageResourceManager *pIVar1;
  
  pIVar1 = operator_new(8);
  if (pIVar1 != (IPackageResourceManager *)0x0) {
    *pIVar1 = (IPackageResourceManager)&___7FPackageResourceManagerFile__6B_;
    return pIVar1;
  }
  return (IPackageResourceManager *)0x0;
}

// MarkPackageReplaced @ 142144f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl PackageReloadInternal::MarkPackageReplaced(UPackage *param_1)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_NewerVersionExists);
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`PackageReloadInternal::MarkPackageReplaced'::__l2::<lambda_1>,bool,UObject_*>
             ::Call;
  ForEachObjectWithPackage
            (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,true,RF_NoFlags,Borrowed);
  return;
}

// ReadArrayIndex @ 142146a70

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl ReadArrayIndex(UStruct *param_1,wchar_t **param_2,FOutputDevice *param_3)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  long64 lVar4;
  int iVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  FName local_res10;
  FString local_28;
  
  SkipWhitespace(param_2);
  wVar1 = **param_2;
  if ((wVar1 != L'(') && (wVar1 != L'[')) {
    return -1;
  }
  *param_2 = *param_2 + 1;
  FString::FString(&local_28,L"");
  pwVar7 = *param_2;
  wVar1 = *pwVar7;
  while (((wVar1 != L'\0' && (wVar1 != L')')) && (wVar1 != L']'))) {
    if ((ushort)(wVar1 + L'ￄ') < 2) {
      FOutputDevice::LogfImpl(param_3,Warning,L"Missing \')\' in default properties subscript: %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return 0;
    }
    *param_2 = pwVar7 + 1;
    FString::AppendChar(&local_28,wVar1);
    pwVar7 = *param_2;
    wVar1 = *pwVar7;
  }
  wVar1 = *pwVar7;
  *param_2 = pwVar7 + 1;
  if (wVar1 == L'\0') {
    pwVar7 = L"Missing \')\' in default properties subscript: %s";
    iVar5 = 0;
  }
  else {
    iVar5 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    if (0 < iVar5) {
      iVar5 = iswalpha(*(wchar_t *)local_28.Data.AllocatorInstance.Data);
      if (iVar5 == 0) {
        iVar5 = local_28.Data.ArrayNum + -1;
        if (local_28.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        if ((iVar5 < 1) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        iVar5 = iswdigit(*(wchar_t *)local_28.Data.AllocatorInstance.Data);
        if (iVar5 != 0) {
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_28.Data.ArrayNum != 0) {
            FVar6.Data = local_28.Data.AllocatorInstance.Data;
          }
          iVar5 = _wtoi((wchar_t *)FVar6.Data);
          goto LAB_142146c64;
        }
        pwVar7 = L"Invalid subscript in default properties: %s";
        iVar5 = -1;
        goto LAB_142146c54;
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar6.Data = local_28.Data.AllocatorInstance.Data;
      }
      FName::FName(&local_res10,(wchar_t *)FVar6.Data,FNAME_Find);
      if (local_res10 != (FName)0x0) {
        lVar4 = UEnum::LookupEnumName((FName)0x0,local_res10,NativeFirst,(UEnum **)0x0);
        iVar5 = IntCastChecked<int,__int64>(lVar4);
        if (iVar5 != -1) goto LAB_142146c64;
      }
    }
    pwVar7 = L"Invalid subscript in default properties: %s";
    iVar5 = 0;
  }
LAB_142146c54:
  FOutputDevice::LogfImpl(param_3,Warning,pwVar7);
LAB_142146c64:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return iVar5;
}

// ReadOverriddenOperation @ 142146c90

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EOverriddenPropertyOperation> __cdecl
ReadOverriddenOperation(wchar_t **param_1,FOutputDevice *param_2)

{
  wchar_t wVar1;
  bool bVar2;
  TOptional<EOverriddenPropertyOperation> TVar3;
  UEnum *this;
  FString *pFVar4;
  UEnum *pUVar5;
  long64 lVar6;
  int iVar7;
  FOutputDevice *in_R8;
  wchar_t *pwVar8;
  char cVar9;
  undefined1 local_res10;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  cVar9 = '\0';
  SkipWhitespace((wchar_t **)param_2);
  TVar3 = SUB82(param_1,0);
  if (*(short *)param_2->_padding_ != 0x3c) goto LAB_142146e83;
  param_2->_padding_ = (longlong)((short *)param_2->_padding_ + 1);
  FString::FString(&local_78,L"");
  pwVar8 = (wchar_t *)param_2->_padding_;
  wVar1 = *pwVar8;
  while ((wVar1 != L'\0' && (wVar1 != L'>'))) {
    if (wVar1 == L'=') {
      FOutputDevice::LogfImpl(in_R8,Warning,L"Missing \'>\' in default properties subscript: %s");
      *(undefined1 *)((longlong)param_1 + 1) = 0;
      if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return TVar3;
      }
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
      return TVar3;
    }
    param_2->_padding_ = (longlong)(pwVar8 + 1);
    FString::AppendChar(&local_78,wVar1);
    pwVar8 = (wchar_t *)param_2->_padding_;
    wVar1 = *pwVar8;
  }
  wVar1 = *pwVar8;
  param_2->_padding_ = (longlong)(pwVar8 + 1);
  if (wVar1 == L'\0') {
    pwVar8 = L"Missing \'>\' in default properties subscript: %s";
LAB_142146e64:
    FOutputDevice::LogfImpl(in_R8,Warning,pwVar8);
  }
  else {
    iVar7 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    if (iVar7 < 1) {
      pwVar8 = L"Empty overridable operation: %s";
      goto LAB_142146e64;
    }
    this = StaticEnum<enum_EOverriddenPropertyOperation>();
    pFVar4 = FString::FString(&local_38,L"::");
    pUVar5 = StaticEnum<enum_EOverriddenPropertyOperation>();
    local_res20 = (FName)pUVar5->_padding_;
    FName::ToString(&local_res20,&local_48);
    FString::ConcatFF(&local_58,&local_48,pFVar4);
    FString::ConcatFF(&local_68,&local_58,&local_78);
    lVar6 = UEnum::GetValueByNameString(this,&local_68,None);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (lVar6 == -1) {
      pwVar8 = L"Invalid overridable in default properties: %s";
      goto LAB_142146e64;
    }
    local_res10 = (undefined1)lVar6;
    cVar9 = '\x01';
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_142146e83:
  bVar2 = FOverridableSerializationLogic::HasCapabilities(T3DSerialization);
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  if ((bVar2) && (*(char *)((longlong)param_1 + 1) = cVar9, cVar9 != '\0')) {
    *(undefined1 *)param_1 = local_res10;
  }
  return TVar3;
}

// ReloadPackage @ 142147b90

UPackage * __cdecl ReloadPackage(UPackage *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> local_38;
  FReloadPackageData local_28;
  TArrayView<FReloadPackageData,int> local_18;
  
  local_18.DataPtr = &local_28;
  local_18.ArrayNum = 1;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.PackageToReload = param_1;
  local_28.LoadFlags = param_2;
  ReloadPackages(&local_18,&local_38,1);
  if (local_38.ArrayNum < 1) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPackage *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = *(UPackage **)local_38.AllocatorInstance.Data;
  FMemory::Free(local_38.AllocatorInstance.Data);
  return pUVar3;
}

// ReloadPackages @ 142147c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
ReloadPackages(TArrayView<FReloadPackageData,int> *param_1,
              TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ITextData *pIVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FFeedbackContext *pFVar9;
  ForAnyElementType FVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  TArrayView<FReloadPackageData,int> *pTVar12;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *pTVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  FText *pFVar20;
  UClass *pUVar21;
  FText *pFVar22;
  FTextFormat *pFVar23;
  UPackage *pUVar24;
  TSharedPtr<FPackageReloadedEvent,1> *pTVar25;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *pTVar26;
  FUObjectItem *pFVar27;
  UClass *pUVar28;
  FUObjectItem *pFVar29;
  UObject *pUVar30;
  byte bVar31;
  TSharedPtr<FPackageReloadedEvent,1> *pTVar32;
  ulonglong uVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  UPackage *pUVar36;
  longlong lVar37;
  UObjectBase *pUVar38;
  UPackage *pUVar39;
  FReloadPackageData *pFVar40;
  ForAnyElementType FVar41;
  FReloadPackageData *pFVar42;
  longlong lVar43;
  longlong lVar44;
  uint uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  undefined1 auStackY_848 [32];
  undefined1 local_7f8;
  undefined1 local_7f7 [3];
  uint local_7f4;
  uint local_7f0;
  uint local_7ec;
  uint local_7e8;
  FGCObject local_7e0;
  ForAnyElementType local_7d0;
  undefined8 local_7c8;
  ForAnyElementType local_7c0;
  undefined8 local_7b8;
  FGCObject local_7b0;
  ForAnyElementType local_7a0;
  undefined8 local_798;
  ulonglong local_790;
  ulonglong local_788;
  undefined1 local_780 [4];
  uint local_77c;
  FString local_778;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_768;
  TIterator local_758;
  UClass *local_740;
  EObjectFlags local_738;
  EInternalObjectFlags local_734;
  longlong local_730;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_728;
  undefined8 uStack_708;
  int local_700;
  undefined4 uStack_6fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6f8;
  TPairInitializer<UObject_*_const_&,PackageReloadInternal::FObjectAndPackageIndex_&&> local_6d8;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_6c8;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_6c0;
  FName local_6b8;
  ForAnyElementType *local_6b0;
  FUObjectItem_u_8 local_6a8;
  TArrayView<FReloadPackageData,int> *local_6a0;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FText local_658;
  undefined8 local_648;
  FSharedReferencer<1> FStack_640;
  FString local_638;
  FName local_628;
  FName local_620;
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> *local_618;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_610;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_608;
  undefined8 uStack_5e8;
  code *local_5e0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_5d8;
  code *local_5d0;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_5c8;
  FTextFormat local_5c0;
  FText local_5b0;
  undefined8 local_5a0;
  uint local_598;
  longlong local_590;
  undefined8 *local_588;
  code *local_580;
  undefined1 *local_578;
  TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  local_570;
  FDestructionSentinel local_520;
  FDestructionSentinel local_508;
  FDestructionSentinel local_4f0;
  FDestructionSentinel local_4d8;
  FDestructionSentinel local_4c0;
  FDestructionSentinel local_4a8;
  FFormatArgumentValue local_490;
  FText local_470;
  FText local_460;
  FText local_450;
  FText local_440;
  FText local_430;
  FText local_420;
  FText local_410;
  FText local_400;
  FText local_3f0;
  FText local_3e0;
  FText local_3d0;
  TSharedPtr<FPackageReloadedEvent,1> local_3c0;
  FSlowTask local_3a8;
  FArchiveState local_348;
  FReferenceCollector local_2b8;
  longlong *local_2a8;
  TSet<TTuple<UObject_*,PackageReloadInternal::FObjectAndPackageIndex>,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>,FDefaultSetAllocator>
  *local_2a0;
  ForAnyElementType *local_298;
  ForAnyElementType *local_290;
  longlong local_280;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_278;
  undefined1 local_270 [16];
  FSlowTask local_258;
  FText local_1f8;
  FTextFormat local_1e8;
  FSlowTask local_1d8;
  TSet<TTuple<UObject_*,PackageReloadInternal::FObjectAndPackageIndex>,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>,FDefaultSetAllocator>
  local_178;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_128;
  void *local_e8;
  undefined4 local_e0;
  UPackage *local_d8;
  undefined8 local_d0;
  TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  local_c8;
  void *local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_848;
  pUVar24 = (UPackage *)0x0;
  uVar35 = 0;
  local_7f4 = 0;
  local_778.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_778.Data.ArrayNum = 0;
  local_778.Data.ArrayMax = 0;
  local_6a0 = param_1;
  local_618 = param_2;
  FString::PrintfImpl(&local_698,L"Reloading %d Package(s):");
  uVar45 = uVar35;
  if (local_698.Data.ArrayNum != 0) {
    uVar45 = local_698.Data.ArrayNum - 1;
  }
  FString::AppendChars(&local_778,(wchar_t *)local_698.Data.AllocatorInstance.Data,uVar45);
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
  iVar18 = param_1->ArrayNum;
  pUVar39 = pUVar24;
  pUVar36 = pUVar24;
  if (0 < iVar18) {
    do {
      uVar45 = (uint)pUVar36;
      if (9 < (int)uVar45) break;
      uVar17 = uVar35;
      if ((int)uVar45 < iVar18) {
        uVar17 = ~uVar45 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar42 = param_1->DataPtr;
      FString::AppendChars(&local_778,L"\n",1);
      local_6d8._4_8_ =
           *(undefined8 *)(*(longlong *)((longlong)&pUVar39->_padding_ + (longlong)pFVar42) + 0x18);
      FName::ToString((FName *)((longlong)&local_6d8.Key + 4),&local_678);
      FString::PrintfImpl(&local_688,L"\tAsset Name: %s");
      uVar17 = uVar35;
      if (local_688.Data.ArrayNum != 0) {
        uVar17 = local_688.Data.ArrayNum - 1;
      }
      FString::AppendChars(&local_778,(wchar_t *)local_688.Data.AllocatorInstance.Data,uVar17);
      if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_688.Data.AllocatorInstance.Data);
      }
      if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_678.Data.AllocatorInstance.Data);
      }
      iVar18 = param_1->ArrayNum;
      pUVar39 = (UPackage *)&pUVar39->_padding_;
      pUVar36 = (UPackage *)(ulonglong)(uVar45 + 1);
    } while ((int)(uVar45 + 1) < iVar18);
  }
  if (4 < (byte)LogUObjectGlobals._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
  }
  pFVar9 = GWarn;
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      (&local_410,L"CoreUObject",L"ReloadingPackages",L"Reloading Packages");
  FSlowTask::FSlowTask(&local_258,(float)param_1->ArrayNum,pFVar20,true,pFVar9);
  FSlowTask::Initialize(&local_258);
  if (local_410.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_410.TextData.Reference + 0x10))();
  }
  FSlowTask::MakeDialogDelayed(&local_258,__real_40400000,false,false);
  local_6c8 = &local_128;
  local_128._0_8_ = 0;
  local_5c8 = &local_6c8;
  local_5d0 = UE::Core::Private::Function::
              TFunctionRefCaller<`ReloadPackages'::__l2::<lambda_1>,void,UObject_*>::Call;
  local_128._8_8_ = 0;
  local_128._32_8_ = 0;
  local_128._40_4_ = 0;
  local_128._44_4_ = 0x80;
  local_128._48_4_ = 0xffffffff;
  local_128._52_4_ = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  pUVar21 = UPackage::StaticClass();
  ForEachObjectOfClass
            (pUVar21,(TFunctionRef<void___cdecl(UObject_*)> *)&local_5d0,false,RF_ClassDefaultObject
             ,Borrowed);
  local_7e0.bCanMakeInitialReferences = false;
  local_7e0.bReferenceAdded = false;
  local_7e0._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject(&local_7e0);
  uVar45 = param_1->ArrayNum;
  local_7e0._padding_ = (longlong)&___7FExistingPackageReferences_PackageReloadInternal__6B_;
  local_7d0.Data = (FScriptContainerElement *)0x0;
  local_7c8 = 0;
  if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
  }
  if (0 < (int)uVar45) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar45,&local_7d0,0,(int *)((longlong)&local_7c8 + 4));
  }
  pFVar9 = GWarn;
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      (&local_400,L"CoreUObject",L"PreparingPackagesForReload",
                       L"Preparing Packages for Reload");
  FSlowTask::FSlowTask(&local_1d8,(float)param_1->ArrayNum,pFVar20,true,pFVar9);
  FSlowTask::Initialize(&local_1d8);
  if (local_400.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_400.TextData.Reference + 0x10))();
  }
  fVar6 = __real_3f800000;
  pFVar42 = param_1->DataPtr;
  pFVar40 = pFVar42 + param_1->ArrayNum;
  for (; pFVar42 != pFVar40; pFVar42 = pFVar42 + 1) {
    pFVar20 = FText::FText(&local_3f0);
    FSlowTask::EnterProgressFrame(&local_1d8,fVar6,pFVar20);
    if (local_3f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3f0.TextData.Reference + 0x10))();
    }
    pUVar39 = pFVar42->PackageToReload;
    if (((uint)pUVar39->PackageFlagsPrivate & 0x11) == 0) {
      bVar14 = UPackage::IsFullyLoaded(pUVar39);
      if (!bVar14) {
        FlushAsyncLoading(-1);
        UPackage::FullyLoad(pUVar39);
      }
      ResetLoaders((UObject *)pUVar39);
      pUVar36 = pUVar39;
    }
    else {
      pUVar36 = pUVar24;
      if (2 < (byte)LogUObjectGlobals._0_1_) {
        local_620 = (FName)pUVar39->_padding_;
        FName::ToString(&local_620,&local_668);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
        if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_668.Data.AllocatorInstance.Data);
        }
      }
    }
    iVar18 = (int)local_7c8;
    if ((int)local_7c8 == local_7c8._4_4_) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_7d0,(int *)((longlong)&local_7c8 + 4));
    }
    local_7c8 = CONCAT44(local_7c8._4_4_,iVar18 + 1);
    PackageReloadInternal::FExistingPackageReference::FExistingPackageReference
              ((FExistingPackageReference *)(local_7d0.Data + (longlong)iVar18 * 0x18),pUVar36);
  }
  if (0 < (int)local_7c8) {
    CollectGarbage(RF_NoFlags,true);
  }
  FSlowTask::Destroy(&local_1d8);
  if (local_1d8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d8.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_1d8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d8.DefaultMessage.TextData.Reference + 0x10))();
  }
  local_7b0.bCanMakeInitialReferences = false;
  local_7b0.bReferenceAdded = false;
  local_7b0._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject(&local_7b0);
  uVar33 = 0;
  local_7b0._padding_ = (longlong)&___7FNewPackageReferences_PackageReloadInternal__6B_;
  local_7a0.Data = (FScriptContainerElement *)0x0;
  local_798 = 0;
  if ((int)local_7c8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_7c8 & 0xffffffff);
  }
  if (0 < (int)local_7c8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_7c8,&local_7a0,0,(int *)((longlong)&local_798 + 4));
  }
  uVar8 = _UNK_150631d98;
  uVar7 = ___xmm_00000000ffffffff0000008000000000;
  local_7ec = 0;
  if (0 < (int)local_7c8) {
    local_788 = 0;
    uVar47 = uVar33;
    do {
      TMulticastDelegate<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
      ::Broadcast(&FCoreUObjectDelegates::OnPackageReloaded,PreBatch,(FPackageReloadedEvent *)0x0);
      uVar45 = (uint)uVar33;
      local_7f0 = uVar45;
      local_790 = uVar47;
      local_77c = uVar45;
      if ((int)uVar45 < (int)local_7c8) {
        lVar43 = uVar47 * 0x18;
        local_7e8 = uVar45 + 1;
        lVar44 = uVar47 << 4;
        do {
          uVar35 = (uint)uVar33;
          uVar45 = 0;
          if ((int)uVar35 < (int)local_7c8) {
            uVar45 = ~uVar35 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar39 = *(UPackage **)(local_7d0.Data + lVar43);
          if (pUVar39 == (UPackage *)0x0) {
            uVar45 = (uint)pUVar24 | 4;
            local_7f4 = uVar45;
            pFVar20 = FText::AsLocalizable_Advanced_LocText
                                (&local_3e0,L"CoreUObject",L"ReloadingPackages",
                                 L"Reloading Packages");
          }
          else {
            local_628 = (FName)pUVar39->_padding_;
            pFVar20 = FText::FromName(&local_1f8,&local_628);
            pFVar22 = FText::AsLocalizable_Advanced_LocText
                                (&local_3d0,L"CoreUObject",L"ReloadingPackagef",L"Reloading {0}...")
            ;
            pFVar23 = FTextFormat::FTextFormat(&local_1e8,pFVar22,Default);
            uVar45 = (uint)pUVar24 | 3;
            local_490.Type = Text;
            local_7f4 = uVar45;
            FText::FText((FText *)&local_490.TextValue,pFVar20);
            if ((local_490.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar14 = FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_768.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_768.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_768.AllocatorInstance,1,&local_768.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_768.AllocatorInstance.Data,&local_490,1);
            local_5c0.TextFormatData.Object = (pFVar23->TextFormatData).Object;
            local_5c0.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar23->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_5c0.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_5c0.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_5c0.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_5b0,&local_5c0,&local_768);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_768.AllocatorInstance.Data,local_768.ArrayNum);
            if ((FFormatArgumentValue *)local_768.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_768.AllocatorInstance.Data);
            }
            if (local_490.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_490.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar23->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar3 = (pFVar20->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            pFVar20 = &local_5b0;
          }
          FText::FText(&local_658,pFVar20);
          if (((uVar45 & 4) != 0) &&
             (uVar45 = uVar45 & 0xfffffffb, local_7f4 = uVar45,
             local_3e0.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_3e0.TextData.Reference + 0x10))();
          }
          if (((uVar45 & 2) != 0) &&
             (uVar45 = uVar45 & 0xfffffffd, local_7f4 = uVar45,
             local_5b0.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_5b0.TextData.Reference + 0x10))();
          }
          if (((uVar45 & 1) != 0) &&
             (local_7f4 = uVar45 & 0xfffffffe, local_3d0.TextData.Reference != (ITextData *)0x0)) {
            (**(code **)((longlong)*local_3d0.TextData.Reference + 0x10))();
          }
          FSlowTask::EnterProgressFrame(&local_258,fVar6,&local_658);
          local_570.Hash.InlineData[0] = '\0';
          local_570.Hash.InlineData[1] = '\0';
          local_570.Hash.InlineData[2] = '\0';
          local_570.Hash.InlineData[3] = '\0';
          local_570.Hash._padding_ = 0;
          local_570._72_8_ = 0;
          local_570.Elements._0_8_ = 0;
          local_570.Elements._16_8_ = 0;
          local_570.Elements._24_8_ = 0;
          local_570.Elements._8_8_ = 0;
          local_570.Elements._32_8_ = 0;
          local_570.Elements._40_8_ = uVar7;
          local_570.Elements._48_8_ = uVar8;
          local_570.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_d0 = 0;
          local_c8.Elements._0_8_ = 0;
          local_c8.Elements._8_8_ = 0;
          local_c8.Elements._32_8_ = 0;
          local_c8.Elements._40_4_ = 0;
          local_c8.Elements._44_4_ = 0x80;
          local_c8.Elements._48_4_ = 0xffffffff;
          local_c8.Elements._52_4_ = 0;
          local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_c8.HashSize = 0;
          local_d8 = pUVar39;
          TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          ::operator=(&local_c8,&local_570);
          local_78 = (void *)0x0;
          local_70 = 0;
          local_570._72_8_ = local_570._72_8_ & 0xffffffff00000000;
          if (local_570.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_570.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&local_570);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &FCoreUObjectDelegates::OnPackageReloaded,(FWriteAccessScope *)&local_520);
          bVar14 = false;
          FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
               FCoreUObjectDelegates::OnPackageReloaded._28_4_ + 1;
          iVar18 = FCoreUObjectDelegates::OnPackageReloaded._16_4_ + -1;
          if (-1 < iVar18) {
            lVar37 = (longlong)iVar18 << 4;
            bVar14 = false;
            do {
              if (((int)FCoreUObjectDelegates::OnPackageReloaded._16_4_ <= iVar18) &&
                 (bVar15 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((*(int *)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + 8 + lVar37) == 0) ||
                  (plVar4 = *(longlong **)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar37),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar16 = (**(code **)(*plVar4 + 0x68))(plVar4,0,&local_d8), cVar16 == '\0')) {
                bVar14 = true;
              }
              lVar37 = lVar37 + -0x10;
              iVar18 = iVar18 + -1;
              uVar35 = local_7ec;
            } while (-1 < iVar18);
          }
          FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
               FCoreUObjectDelegates::OnPackageReloaded._28_4_ + -1;
          if (bVar14) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FCoreUObjectDelegates::OnPackageReloaded,false);
          }
          if (local_520.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_520.Accessor,&local_520);
          }
          if (local_78 != (void *)0x0) {
            FMemory::Free(local_78);
          }
          local_c8.HashSize = 0;
          if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_c8.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_c8.Elements);
          if (((uint)local_798 != uVar35) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("NewPackages.Refs.Num() == PackageIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageReload.cpp"
                                  ,0x2b6,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar12 = local_6a0;
          uVar45 = 0;
          if ((int)uVar35 < local_6a0->ArrayNum) {
            uVar45 = ~uVar35 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar24 = PackageReloadInternal::LoadReplacementPackage
                              (pUVar39,*(uint *)((longlong)&pTVar12->DataPtr->LoadFlags + lVar44));
          iVar18 = (uint)local_798;
          if ((uint)local_798 == local_798._4_4_) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_7a0,(int *)((longlong)&local_798 + 4));
          }
          FVar41.Data = local_7a0.Data;
          lVar37 = (longlong)iVar18;
          local_798 = CONCAT44(local_798._4_4_,iVar18 + 1);
          *(UPackage **)&local_7a0.Data[lVar37 * 0x18].field_0x0 = pUVar24;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UPackage *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)pUVar24);
          }
          uVar45 = local_7ec;
          *(undefined8 *)(FVar41.Data + lVar37 * 0x18 + 8) = 0;
          *(undefined8 *)(FVar41.Data + lVar37 * 0x18 + 0x10) = 0;
          uVar35 = 0;
          if ((int)local_7ec < (int)(uint)local_798) {
            uVar35 = ~local_7ec >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar25 = PackageReloadInternal::GeneratePackageReloadEvent
                              (&local_3c0,pUVar39,*(UPackage **)(local_7a0.Data + lVar43));
          uVar35 = 0;
          if ((int)uVar45 < (int)(uint)local_798) {
            uVar35 = ~uVar45 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar32 = (TSharedPtr<FPackageReloadedEvent,1> *)(local_7a0.Data + lVar43 + 8);
          if (pTVar32 != pTVar25) {
            pTVar32->Object = pTVar25->Object;
            pTVar25->Object = (FPackageReloadedEvent *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar32->SharedReferenceCount,&pTVar25->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3c0.SharedReferenceCount.ReferenceController);
          if ((uVar45 == local_7e8) ||
             ((pUVar39 != (UPackage *)0x0 && (((uint)pUVar39->PackageFlagsPrivate >> 0x11 & 1) != 0)
              ))) {
            local_7ec = uVar45 + 1;
            uVar47 = local_788 + 1;
            local_788 = uVar47;
            if (local_658.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_658.TextData.Reference + 0x10))();
            }
            break;
          }
          if (local_658.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_658.TextData.Reference + 0x10))();
          }
          local_7ec = uVar45 + 1;
          uVar33 = (ulonglong)local_7ec;
          uVar47 = local_788 + 1;
          pUVar24 = (UPackage *)(ulonglong)local_7f4;
          lVar44 = lVar44 + 0x10;
          lVar43 = lVar43 + 0x18;
          local_788 = uVar47;
        } while ((int)local_7ec < (int)local_7c8);
        uVar45 = uVar45 + 1;
      }
      uVar33 = local_790;
      uVar35 = local_7f0;
      pFVar9 = GWarn;
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_470,L"CoreUObject",L"FixingUpReferences",L"Fixing-Up References");
      FSlowTask::FSlowTask
                (&local_3a8,
                 (float)(int)(GUObjectArray.ObjObjects.NumElements + (uVar45 - uVar35) * 4),pFVar20,
                 true,pFVar9);
      FSlowTask::Initialize(&local_3a8);
      if (local_470.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_470.TextData.Reference + 0x10))();
      }
      local_7c0.Data = (FScriptContainerElement *)0x0;
      local_7b8 = 0;
      local_178.Elements._0_8_ = 0;
      local_178.Elements._8_8_ = 0;
      local_178.Elements._32_8_ = 0;
      local_178.Elements._40_4_ = 0;
      local_178.Elements._44_4_ = 0x80;
      local_178.Elements._48_4_ = 0xffffffff;
      local_178.Elements._52_4_ = 0;
      local_178.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_178.HashSize = 0;
      local_7e8 = uVar35;
      if ((longlong)uVar33 < (longlong)uVar47) {
        lVar44 = uVar33 * 0x18;
        lVar43 = uVar47 - local_790;
        do {
          local_7e8 = uVar35;
          local_730 = lVar43;
          pFVar20 = FText::FText(&local_460);
          FSlowTask::EnterProgressFrame(&local_3a8,fVar6,pFVar20);
          if (local_460.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
          }
          uVar45 = 0;
          if ((int)uVar35 < (int)(uint)local_798) {
            uVar45 = ~uVar35 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar41.Data = local_7a0.Data;
          if (*(longlong *)(local_7a0.Data + lVar44 + 8) != 0) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &FCoreUObjectDelegates::OnPackageReloaded,(FWriteAccessScope *)&local_508);
            bVar14 = false;
            FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
                 FCoreUObjectDelegates::OnPackageReloaded._28_4_ + 1;
            iVar18 = FCoreUObjectDelegates::OnPackageReloaded._16_4_ + -1;
            if (-1 < iVar18) {
              lVar43 = (longlong)iVar18 << 4;
              bVar14 = false;
              do {
                if (((int)FCoreUObjectDelegates::OnPackageReloaded._16_4_ <= iVar18) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((*(int *)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + 8 + lVar43) == 0) ||
                    (*(longlong **)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43) ==
                     (longlong *)0x0)) ||
                   (cVar16 = (**(code **)(**(longlong **)
                                            (FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43
                                            ) + 0x68))(), cVar16 == '\0')) {
                  bVar14 = true;
                }
                lVar43 = lVar43 + -0x10;
                iVar18 = iVar18 + -1;
              } while (-1 < iVar18);
            }
            FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
                 FCoreUObjectDelegates::OnPackageReloaded._28_4_ + -1;
            if (bVar14) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &FCoreUObjectDelegates::OnPackageReloaded,false);
            }
            if (local_508.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_508.Accessor,&local_508);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &FCoreUObjectDelegates::OnPackageReloaded,(FWriteAccessScope *)&local_4f0);
            bVar14 = false;
            FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
                 FCoreUObjectDelegates::OnPackageReloaded._28_4_ + 1;
            iVar18 = FCoreUObjectDelegates::OnPackageReloaded._16_4_ + -1;
            if (-1 < iVar18) {
              lVar43 = (longlong)iVar18 << 4;
              bVar14 = false;
              do {
                if (((int)FCoreUObjectDelegates::OnPackageReloaded._16_4_ <= iVar18) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((*(int *)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + 8 + lVar43) == 0) ||
                    (*(longlong **)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43) ==
                     (longlong *)0x0)) ||
                   (cVar16 = (**(code **)(**(longlong **)
                                            (FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43
                                            ) + 0x68))(), cVar16 == '\0')) {
                  bVar14 = true;
                }
                lVar43 = lVar43 + -0x10;
                iVar18 = iVar18 + -1;
              } while (-1 < iVar18);
            }
            FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
                 FCoreUObjectDelegates::OnPackageReloaded._28_4_ + -1;
            if (bVar14) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &FCoreUObjectDelegates::OnPackageReloaded,false);
            }
            if (local_4f0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
            }
            if ((*(longlong *)(FVar41.Data + lVar44 + 8) == 0) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar26 = ObjectPtrDecay<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_>,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_>
                                ((TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                                  *)(*(longlong *)(FVar41.Data + lVar44 + 8) + 0x10));
            TSet<TTuple<UObject_*,PackageReloadInternal::FObjectAndPackageIndex>,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>,FDefaultSetAllocator>
            ::Reserve(&local_178,
                      ((*(int *)&pTVar26->field_0x8 - *(int *)&pTVar26->field_0x34) -
                      local_178.Elements._52_4_) + local_178.Elements._8_4_);
            if ((*(longlong *)(FVar41.Data + lVar44 + 8) == 0) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar26 = ObjectPtrDecay<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_>,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_>
                                ((TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                                  *)(*(longlong *)(FVar41.Data + lVar44 + 8) + 0x10));
            local_6f8._padding_._4_4_ = 1;
            local_6f8.UnvisitedBitMask = 0xffffffff;
            puVar1 = &pTVar26->field_0x10;
            local_6f8._padding_._0_4_ = 0;
            local_6f8.CurrentBitIndex = 0;
            local_6f8.BaseBitIndex = 0;
            local_6f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if (*(int *)&pTVar26->field_0x28 != 0) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6f8);
            }
            uVar45 = *(uint *)&pTVar26->field_0x28;
            TStack_608._padding_ =
                 CONCAT44(local_6f8._padding_._4_4_,(undefined4)local_6f8._padding_);
            bVar31 = (byte)uVar45 & 0x1f;
            local_700 = *(int *)&pTVar26->field_0x8 - *(int *)&pTVar26->field_0x34;
            uStack_708._4_4_ = local_6f8._28_4_;
            uStack_708._0_4_ = local_6f8.BaseBitIndex;
            local_728._padding_ = CONCAT44(1 << bVar31,(int)uVar45 >> 5);
            local_728.UnvisitedBitMask = -1 << bVar31;
            local_728._28_4_ = local_6f8.CurrentBitIndex;
            TStack_608.Array = local_6f8.Array;
            TStack_608.CurrentBitIndex = local_6f8.CurrentBitIndex;
            TStack_608.UnvisitedBitMask = local_6f8.UnvisitedBitMask;
            local_728.BaseBitIndex = uVar45 & 0xffffffe0;
            uStack_5e8 = CONCAT44(uStack_6fc,local_700);
            local_728.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            local_728.CurrentBitIndex = uVar45;
            local_610 = pTVar26;
            TStack_608._24_8_ = uStack_708;
            if (((int)uVar45 < 0) ||
               (uVar35 = *(uint *)&pTVar26->field_0x28, (int)uVar35 < (int)uVar45)) {
              bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L"");
              if (bVar14) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar35 = *(uint *)&pTVar26->field_0x28;
            }
            if (uVar45 != uVar35) {
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_728);
            }
            iVar18 = local_728.CurrentBitIndex;
            pTVar11 = local_728.Array;
            uVar35 = local_7e8;
            local_270._4_4_ = local_728.CurrentBitIndex;
            local_270._0_4_ = local_728.UnvisitedBitMask;
            local_270._8_4_ = local_728.BaseBitIndex;
            local_270._12_4_ = local_728._28_4_;
            local_280 = local_728._padding_;
            pTStack_278 = local_728.Array;
            while( true ) {
              pTVar13 = local_610;
              if (*(int *)&local_610->field_0x8 - *(int *)&local_610->field_0x34 != (int)uStack_5e8)
              {
                local_7f8 = 0;
                `TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_7f8);
              }
              if (((TStack_608.CurrentBitIndex == iVar18) && (TStack_608.Array == pTVar11)) &&
                 (lVar43 = local_730, pTVar13 == pTVar26)) break;
              local_598 = uVar35;
              local_590 = *(longlong *)pTVar13 + (longlong)TStack_608.CurrentBitIndex * 0x18;
              local_5a0 = *(undefined8 *)(local_590 + 8);
              pFVar34 = (FScriptContainerElement *)(local_590 + 8);
              local_588 = &local_5a0;
              TSet<TTuple<UObject_*,PackageReloadInternal::FObjectAndPackageIndex>,TDefaultMapHashableKeyFuncs<UObject_*,PackageReloadInternal::FObjectAndPackageIndex,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<UObject_*_const_&,PackageReloadInternal::FObjectAndPackageIndex_&&>_>
                        (&local_178,&local_6d8,(bool *)&local_590);
              if (*(longlong *)pFVar34 != 0) {
                if (((local_7c0.Data <= pFVar34) &&
                    (pFVar34 < local_7c0.Data + (longlong)local_7b8._4_4_ * 8)) &&
                   (bVar14 = FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar14)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar19 = (int)local_7b8;
                if ((int)local_7b8 == local_7b8._4_4_) {
                  iVar19 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_7c0,(int *)((longlong)&local_7b8 + 4));
                }
                local_7b8 = CONCAT44(local_7b8._4_4_,iVar19 + 1);
                *(longlong *)(local_7c0.Data + (longlong)iVar19 * 8) = *(longlong *)pFVar34;
              }
              TStack_608.UnvisitedBitMask =
                   TStack_608.UnvisitedBitMask & ~TStack_608._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_608);
            }
          }
          uVar35 = uVar35 + 1;
          lVar44 = lVar44 + 0x18;
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        local_730 = 0;
        local_7e8 = uVar35;
      }
      local_6b0 = &local_7c0;
      pUVar21 = Z_Construct_UClass_UObject_NoRegister();
      local_758.Index = -1;
      local_758.Array = &GUObjectArray;
      local_758.CurrentObject = (FUObjectItem *)0x0;
      FUObjectArray::TIterator::Advance(&local_758);
      local_738 = RF_NoFlags;
      local_740 = pUVar21;
      local_734 = UE::GetAsyncLoadingInternalFlagsExclusion();
      local_734 = local_734 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted);
      if ((pUVar21 == (UClass *)0x0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("Class",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                              ,0x70,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&(local_758.Array)->ObjObjectsCritical);
      do {
        pFVar29 = local_758.CurrentObject;
        if (local_758.CurrentObject == (FUObjectItem *)0x0) {
          pUVar38 = (UObjectBase *)0x0;
        }
        else {
          pUVar38 = ((local_758.CurrentObject)->field1_0x8).Object;
        }
        if (((local_738 & pUVar38->ObjectFlags) == RF_NoFlags) &&
           (pFVar27 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar38->InternalIndex),
           (local_734 &
           (EInternalObjectFlags)((ulonglong)(pFVar27->field0_0x0).FlagsAndRefCount >> 0x20)) ==
           Borrowed)) {
          pUVar28 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar21 == pUVar28) break;
          pUVar28 = (pUVar38->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar18 = (int)pUVar21->_padding_;
          if ((iVar18 <= (int)pUVar28->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar28->_padding_ + (longlong)iVar18 * 8) ==
              &pUVar21->_padding_)) break;
        }
        bVar14 = FUObjectArray::TIterator::Advance(&local_758);
        pUVar21 = local_740;
        pFVar29 = local_758.CurrentObject;
      } while (bVar14);
joined_r0x00014214907f:
      if (pFVar29 != (FUObjectItem *)0x0) {
        local_6a8 = pFVar29->field1_0x8;
        UE::Core::Private::Function::
        TFunctionRefCaller<`ReloadPackages'::__l33::<lambda_2>,void,UObject_*>::Call
                  (&local_6b0,(UObject **)&local_6a8.Object);
LAB_1421490a3:
        do {
          do {
            bVar14 = FUObjectArray::TIterator::Advance(&local_758);
            pFVar29 = local_758.CurrentObject;
            if (!bVar14) goto joined_r0x00014214907f;
            if (local_758.CurrentObject == (FUObjectItem *)0x0) {
              pUVar38 = (UObjectBase *)0x0;
            }
            else {
              pUVar38 = ((local_758.CurrentObject)->field1_0x8).Object;
            }
          } while ((local_738 & pUVar38->ObjectFlags) != RF_NoFlags);
          pUVar21 = Z_Construct_UClass_UObject_NoRegister();
          if (local_740 != pUVar21) {
            pUVar21 = (pUVar38->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
            iVar18 = (int)local_740->_padding_;
            if (((int)pUVar21->_padding_ < iVar18) ||
               ((longlong *)*(undefined1 **)(pUVar21->_padding_ + (longlong)iVar18 * 8) !=
                &local_740->_padding_)) goto LAB_1421490a3;
          }
          pFVar27 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar38->InternalIndex);
        } while ((local_734 &
                 (EInternalObjectFlags)((ulonglong)(pFVar27->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
        goto joined_r0x00014214907f;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_758.Array)->ObjObjectsCritical);
      iVar18 = (int)local_7b8;
      uVar33 = (ulonglong)(int)local_7b8;
      pFVar34 = local_7c0.Data + uVar33 * 8;
      FVar41.Data = local_7c0.Data;
      while( true ) {
        if ((int)uVar33 != iVar18) {
          local_7f7[0] = 0;
          `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_7f7);
        }
        uVar33 = local_790;
        if (FVar41.Data == pFVar34) break;
        plVar4 = *(longlong **)FVar41.Data;
        pFVar20 = FText::FText(&local_450);
        FSlowTask::EnterProgressFrame(&local_3a8,fVar6,pFVar20);
        if (local_450.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
        }
        FArchiveState::FArchiveState(&local_348);
        local_348.ArIsModifyingWeakAndStrongReferences = '\x01';
        local_348.ArIsObjectReferenceCollector = '\x01';
        local_2a0 = &local_178;
        local_348.ArIgnoreOuterRef = '\x01';
        local_348.ArNoDelta = '\x01';
        local_298 = &local_7d0;
        local_2b8.DefaultReferenceCollectorArchive.Ptr = (FReferenceCollectorArchive *)0x0;
        local_290 = &local_7a0;
        local_348._padding_ =
             (longlong)
             &PackageReloadInternal::FReplaceObjectReferencesArchive::
              _vftable__for__FArchiveUObject__;
        local_2b8._padding_ =
             (longlong)
             &PackageReloadInternal::FReplaceObjectReferencesArchive::
              _vftable__for__FReferenceCollector__;
        local_2a8 = plVar4;
        (**(code **)(*plVar4 + 200))(plVar4,&local_348);
        lVar43 = plVar4[2];
        if ((*(longlong **)(*(longlong *)(lVar43 + 0x30) + (longlong)*(int *)(lVar43 + 0x38) * 8) !=
             (longlong *)(lVar43 + 0x30)) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("This->IsA(this)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0xf38,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((*(longlong *)(lVar43 + 0xc0) == 0) &&
           (bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("CppClassStaticFunctions.GetAddReferencedObjects() != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0xf3a,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(lVar43 + 0xc0))(plVar4,&local_2b8);
        local_348._padding_ =
             (longlong)
             &PackageReloadInternal::FReplaceObjectReferencesArchive::
              _vftable__for__FArchiveUObject__;
        local_2b8._padding_ =
             (longlong)
             &PackageReloadInternal::FReplaceObjectReferencesArchive::
              _vftable__for__FReferenceCollector__;
        FReferenceCollector::~FReferenceCollector(&local_2b8);
        FArchive::~FArchive((FArchive *)&local_348);
        uVar33 = local_7b8 & 0xffffffff;
        FVar41.Data = FVar41.Data + 8;
      }
      if ((longlong)local_790 < (longlong)local_788) {
        lVar43 = local_790 * 0x18;
        lVar44 = local_788 - local_790;
        uVar45 = local_7f0;
        do {
          pFVar20 = FText::FText(&local_440);
          FSlowTask::EnterProgressFrame(&local_3a8,fVar6,pFVar20);
          if (local_440.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_440.TextData.Reference + 0x10))();
          }
          uVar35 = 0;
          if ((int)uVar45 < (int)local_7c8) {
            uVar35 = ~uVar45 >> 0x1f;
          }
          if (uVar35 == 0) {
            bVar14 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar14) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          FVar41.Data = local_7d0.Data;
          uVar35 = 0;
          if ((int)uVar45 < (int)local_7c8) {
            uVar35 = ~uVar45 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar10.Data = local_7d0.Data;
          pUVar30 = *(UObject **)(FVar41.Data + lVar43);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar30);
          }
          *(UObject **)(FVar10.Data + lVar43 + 8) = pUVar30;
          uVar45 = uVar45 + 1;
          lVar43 = lVar43 + 0x18;
          lVar44 = lVar44 + -1;
        } while (lVar44 != 0);
        lVar43 = uVar33 * 0x18;
        lVar44 = local_788 - local_790;
        do {
          uVar45 = local_77c;
          pFVar20 = FText::FText(&local_430);
          FSlowTask::EnterProgressFrame(&local_3a8,fVar6,pFVar20);
          if (local_430.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_430.TextData.Reference + 0x10))();
          }
          uVar35 = 0;
          if ((int)uVar45 < (int)(uint)local_798) {
            uVar35 = ~uVar45 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(longlong *)(local_7a0.Data + lVar43 + 8) != 0) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &FCoreUObjectDelegates::OnPackageReloaded,(FWriteAccessScope *)&local_4a8);
            bVar14 = false;
            FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
                 FCoreUObjectDelegates::OnPackageReloaded._28_4_ + 1;
            iVar18 = FCoreUObjectDelegates::OnPackageReloaded._16_4_ + -1;
            if (-1 < iVar18) {
              lVar37 = (longlong)iVar18 << 4;
              do {
                if (((int)FCoreUObjectDelegates::OnPackageReloaded._16_4_ <= iVar18) &&
                   (bVar15 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((*(int *)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + 8 + lVar37) == 0) ||
                    (*(longlong **)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar37) ==
                     (longlong *)0x0)) ||
                   (cVar16 = (**(code **)(**(longlong **)
                                            (FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar37
                                            ) + 0x68))(), cVar16 == '\0')) {
                  bVar14 = true;
                }
                lVar37 = lVar37 + -0x10;
                iVar18 = iVar18 + -1;
                uVar45 = local_77c;
              } while (-1 < iVar18);
            }
            FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
                 FCoreUObjectDelegates::OnPackageReloaded._28_4_ + -1;
            if (bVar14) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &FCoreUObjectDelegates::OnPackageReloaded,false);
            }
            if (local_4a8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
            }
          }
          local_77c = uVar45 + 1;
          lVar43 = lVar43 + 0x18;
          lVar44 = lVar44 + -1;
        } while (lVar44 != 0);
      }
      uVar47 = local_788;
      uVar33 = local_790;
      uVar45 = local_7f0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreUObjectDelegates::OnPackageReloaded,(FWriteAccessScope *)&local_4d8);
      bVar14 = false;
      FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
           FCoreUObjectDelegates::OnPackageReloaded._28_4_ + 1;
      iVar18 = FCoreUObjectDelegates::OnPackageReloaded._16_4_ + -1;
      if (-1 < iVar18) {
        lVar43 = (longlong)iVar18 << 4;
        bVar14 = false;
        do {
          if (((int)FCoreUObjectDelegates::OnPackageReloaded._16_4_ <= iVar18) &&
             (bVar15 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(int *)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + 8 + lVar43) == 0) ||
              (*(longlong **)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43) ==
               (longlong *)0x0)) ||
             (cVar16 = (**(code **)(**(longlong **)
                                      (FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43) +
                                   0x68))(), cVar16 == '\0')) {
            bVar14 = true;
          }
          lVar43 = lVar43 + -0x10;
          iVar18 = iVar18 + -1;
        } while (-1 < iVar18);
      }
      FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
           FCoreUObjectDelegates::OnPackageReloaded._28_4_ + -1;
      if (bVar14) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreUObjectDelegates::OnPackageReloaded,false);
      }
      if (local_4d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
      }
      if ((longlong)uVar33 < (longlong)uVar47) {
        lVar43 = uVar33 * 0x18;
        lVar44 = uVar47 - uVar33;
        do {
          pFVar20 = FText::FText(&local_420);
          FSlowTask::EnterProgressFrame(&local_3a8,fVar6,pFVar20);
          if (local_420.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_420.TextData.Reference + 0x10))();
          }
          uVar35 = 0;
          if ((int)uVar45 < (int)local_7c8) {
            uVar35 = ~uVar45 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar24 = *(UPackage **)(local_7d0.Data + lVar43);
          uVar17 = 0;
          uVar35 = uVar17;
          if ((int)uVar45 < (int)(uint)local_798) {
            uVar35 = ~uVar45 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar14 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((pUVar24 != (UPackage *)0x0) && (*(longlong *)(local_7a0.Data + lVar43) != 0)) {
            pFVar29 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&pUVar24->_padding_ + 4));
            if (((ulonglong)((pFVar29->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) {
              pFVar29 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)((longlong)&pUVar24->_padding_ + 4));
              FUObjectItem::ClearRootFlags(pFVar29,RootSet);
            }
            UObjectBase::AtomicallyClearFlags((UObjectBase *)pUVar24,RF_Standalone|RF_Public);
            local_578 = local_780;
            local_580 = UE::Core::Private::Function::
                        TFunctionRefCaller<`PackageReloadInternal::MakePackagePurgeable'::__l2::<lambda_1>,bool,UObject_*>
                        ::Call;
            ForEachObjectWithPackage
                      (pUVar24,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_580,true,RF_NoFlags,
                       Borrowed);
            uVar35 = uVar17;
            if ((int)uVar45 < (int)local_7c8) {
              uVar35 = ~uVar45 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined8 *)(local_7d0.Data + lVar43 + 8) = 0;
            if ((int)uVar45 < (int)(uint)local_798) {
              uVar17 = ~uVar45 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar34 = local_7a0.Data + lVar43 + 8;
            local_648 = 0;
            FStack_640.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if (pFVar34 != (FScriptContainerElement *)&local_648) {
              *(undefined8 *)pFVar34 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)(pFVar34 + 8),&FStack_640);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_640.ReferenceController);
          }
          uVar45 = uVar45 + 1;
          lVar43 = lVar43 + 0x18;
          lVar44 = lVar44 + -1;
          uVar47 = local_788;
        } while (lVar44 != 0);
      }
      CollectGarbage(RF_NoFlags,true);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreUObjectDelegates::OnPackageReloaded,(FWriteAccessScope *)&local_4c0);
      bVar14 = false;
      FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
           FCoreUObjectDelegates::OnPackageReloaded._28_4_ + 1;
      iVar18 = FCoreUObjectDelegates::OnPackageReloaded._16_4_ + -1;
      if (-1 < iVar18) {
        lVar43 = (longlong)iVar18 << 4;
        bVar14 = false;
        do {
          if (((int)FCoreUObjectDelegates::OnPackageReloaded._16_4_ <= iVar18) &&
             (bVar15 = FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(int *)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + 8 + lVar43) == 0) ||
              (*(longlong **)(FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43) ==
               (longlong *)0x0)) ||
             (cVar16 = (**(code **)(**(longlong **)
                                      (FCoreUObjectDelegates::OnPackageReloaded._8_8_ + lVar43) +
                                   0x68))(), cVar16 == '\0')) {
            bVar14 = true;
          }
          lVar43 = lVar43 + -0x10;
          iVar18 = iVar18 + -1;
        } while (-1 < iVar18);
      }
      FCoreUObjectDelegates::OnPackageReloaded._28_4_ =
           FCoreUObjectDelegates::OnPackageReloaded._28_4_ + -1;
      if (bVar14) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreUObjectDelegates::OnPackageReloaded,false);
      }
      if (local_4c0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c0.Accessor,&local_4c0);
      }
      local_178.HashSize = 0;
      if (local_178.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_178.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,PackageReloadInternal::FObjectAndPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,PackageReloadInternal::FObjectAndPackageIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_178.Elements);
      if (local_7c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7c0.Data);
      }
      FSlowTask::Destroy(&local_3a8);
      if (local_3a8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3a8.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_3a8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3a8.DefaultMessage.TextData.Reference + 0x10))();
      }
      uVar33 = (ulonglong)local_7ec;
      pUVar24 = (UPackage *)(ulonglong)local_7f4;
      param_2 = local_618;
    } while ((int)local_7ec < (int)local_7c8);
  }
  uVar47 = 0;
  local_6c0 = &local_128;
  local_5d8 = &local_6c0;
  local_5e0 = UE::Core::Private::Function::
              TFunctionRefCaller<`ReloadPackages'::__l2::<lambda_3>,void,UObject_*>::Call;
  pUVar21 = UPackage::StaticClass();
  ForEachObjectOfClass
            (pUVar21,(TFunctionRef<void___cdecl(UObject_*)> *)&local_5e0,false,RF_ClassDefaultObject
             ,Borrowed);
  uVar33 = local_7c8 & 0xffffffff;
  if ((int)local_7c8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar33);
  }
  piVar2 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)local_7c8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_7c8,&param_2->AllocatorInstance,param_2->ArrayNum,piVar2);
    uVar33 = local_7c8 & 0xffffffff;
  }
  uVar46 = uVar47;
  if (0 < (int)uVar33) {
    do {
      uVar35 = (uint)uVar47;
      uVar45 = 0;
      if ((int)uVar35 < (int)uVar33) {
        uVar45 = ~uVar35 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar30 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    (local_7d0.Data + (longlong)(int)uVar35 * 0x18 + 0x10));
      uVar45 = 0;
      if ((int)uVar35 < (int)(uint)local_798) {
        uVar45 = ~uVar35 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar43 = *(longlong *)(local_7a0.Data + uVar46);
      if ((param_2->ArrayNum != uVar35) &&
         (bVar14 = FDebug::CheckVerifyFailedImpl2
                             ("OutReloadedPackages.Num() == PackageIndex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageReload.cpp"
                              ,0x34b,L""), bVar14)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar18 = param_2->ArrayNum;
      if (iVar18 == *piVar2) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,piVar2);
      }
      param_2->ArrayNum = iVar18 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar18 * 8) = lVar43;
      if (((pUVar30 != (UObject *)0x0) && (lVar43 != 0)) && (2 < (byte)LogUObjectGlobals._0_1_)) {
        local_6b8.ComparisonIndex.Value = *(uint *)&pUVar30->field_0x18;
        local_6b8.Number = *(uint *)&pUVar30->field_0x1c;
        FName::ToString(&local_6b8,&local_638);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
        if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_638.Data.AllocatorInstance.Data);
        }
      }
      uVar33 = local_7c8 & 0xffffffff;
      uVar47 = (ulonglong)(uVar35 + 1);
      uVar46 = uVar46 + 0x18;
    } while ((int)(uVar35 + 1) < (int)local_7c8);
  }
  DestructItems<PackageReloadInternal::FNewPackageReference,int>
            ((FNewPackageReference *)local_7a0.Data,(uint)local_798);
  if ((FNewPackageReference *)local_7a0.Data != (FNewPackageReference *)0x0) {
    FMemory::Free(local_7a0.Data);
  }
  local_7b0._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_7b0);
  if (local_7d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d0.Data);
  }
  local_7e0._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_7e0);
  local_e0 = 0;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128);
  FSlowTask::Destroy(&local_258);
  if (local_258.FrameMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.FrameMessage.TextData.Reference + 0x10))();
  }
  if (local_258.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.DefaultMessage.TextData.Reference + 0x10))();
  }
  if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data.AllocatorInstance.Data);
  }
  return;
}

// SerializeForLog @ 14214ce60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SerializeForLog(FCbWriter *param_1,FPrimaryAssetId *param_2)

{
  undefined1 auStack_198 [32];
  TStringView<char8_t> local_178;
  TStringView<char8_t> local_168;
  FName local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  TStringBuilderBase<char8_t> local_148;
  uchar local_128 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  FCbWriter::BeginObject(param_1);
  uStack_150 = 5;
  local_168.DataPtr = "PrimaryAssetId";
  local_168.Size = 0xe;
  local_158 = (FName)0x15062075c;
  local_178._12_4_ = uStack_14c;
  local_178.Size = 5;
  local_178.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_178);
  local_178.DataPtr = local_168.DataPtr;
  local_178.Size = local_168.Size;
  local_178._12_4_ = local_168._12_4_;
  FCbWriter::AddString(param_1,&local_178);
  local_158 = (param_2->PrimaryAssetType).Name;
  local_148.Base = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = local_128;
  local_148.End = (uchar *)local_28;
  FName::AppendString(&local_158,&local_148);
  if (local_148.End < local_148.CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(&local_148,1);
  }
  *local_148.CurPos = ':';
  local_148.CurPos = local_148.CurPos + 1;
  FName::AppendString(&param_2->PrimaryAssetName,&local_148);
  local_168.Size = 5;
  local_178.DataPtr = local_148.Base;
  local_168.DataPtr = "$text";
  local_178.Size = (int)local_148.CurPos - (int)local_148.Base;
  FCbWriter::SetName(param_1,&local_168);
  FCbWriter::AddString(param_1,&local_178);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_148);
  local_148.Base = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = local_128;
  local_148.End = (uchar *)local_28;
  FName::AppendString((FName *)param_2,&local_148);
  local_168.Size = (int)local_148.CurPos - (int)local_148.Base;
  local_178.Size = 0x10;
  local_168.DataPtr = local_148.Base;
  local_178.DataPtr = "PrimaryAssetType";
  FCbWriter::SetName(param_1,&local_178);
  local_178.DataPtr = local_168.DataPtr;
  local_178.Size = local_168.Size;
  local_178._12_4_ = local_168._12_4_;
  FCbWriter::AddString(param_1,&local_178);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_148);
  local_148.Base = local_128;
  local_148.bIsDynamic = false;
  local_148.bIsExternal = false;
  local_148.CurPos = local_128;
  local_148.End = (uchar *)local_28;
  FName::AppendString(&param_2->PrimaryAssetName,&local_148);
  local_178.Size = 0x10;
  local_168.Size = (int)local_148.CurPos - (int)local_148.Base;
  local_168.DataPtr = local_148.Base;
  local_178.DataPtr = "PrimaryAssetName";
  FCbWriter::SetName(param_1,&local_178);
  local_178.DataPtr = local_168.DataPtr;
  local_178.Size = local_168.Size;
  local_178._12_4_ = local_168._12_4_;
  FCbWriter::AddString(param_1,&local_178);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_148);
  FCbWriter::EndObject(param_1);
  return;
}

// SetPropertyEnumValue @ 142150670

bool __cdecl
PropertyAccessUtil::SetPropertyEnumValue(FProperty *param_1,void *param_2,long64 param_3)

{
  if (param_1 != (FProperty *)0x0) {
    if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0) {
      *(char *)param_2 = (char)param_3;
      return true;
    }
    if ((param_1 != (FProperty *)0x0) &&
       ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0)) {
      (**(code **)(*(longlong *)param_1[1]._padding_ + 0x1e8))();
      return true;
    }
  }
  return false;
}

// SetPropertyValue @ 1421506d0

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::SetPropertyValue
          (TFunctionRef<bool___cdecl(FPropertyAccessChangeNotify_const_*)> *param_1,
          TFunctionRef<TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>___cdecl(void)>
          *param_2)

{
  char cVar1;
  EPropertyAccessResultFlags EVar2;
  void *local_res8;
  void *local_res10;
  
  (**(code **)param_2)(&local_res8,*(undefined8 *)&param_2->field_0x8);
  local_res10 = local_res8;
  cVar1 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res10);
  EVar2 = ConversionFailed;
  if (cVar1 != '\0') {
    EVar2 = Success;
  }
  if (local_res8 != (void *)0x0) {
    *(undefined4 *)((longlong)local_res8 + 0x88) = 0;
    if (*(void **)((longlong)local_res8 + 0x80) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_res8 + 0x80));
    }
    TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)local_res8 + 0x40));
    TDoubleLinkedList<FProperty_*>::~TDoubleLinkedList<FProperty_*>
              ((TDoubleLinkedList<FProperty_*> *)((longlong)local_res8 + 0x10));
    ::operator_delete(local_res8,0xa0);
  }
  return EVar2;
}

// SetPropertyValue_DirectComplete @ 142150770

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::SetPropertyValue_DirectComplete
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4,
          TArray<void_*,TSizedDefaultAllocator<32>_> *param_5,ulong64 param_6,bool param_7,
          TFunctionRef<TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>___cdecl(void)>
          *param_8)

{
  EPropertyFlags EVar1;
  FScriptContainerElement *_Src;
  ForElementType<FSetElementId> FVar2;
  bool bVar3;
  longlong lVar4;
  FPropertyAccessChangeNotify *local_res18;
  FProperty *local_48;
  void *local_40;
  FProperty *local_38;
  void *local_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  bool local_18;
  
  EVar1 = param_3->PropertyFlags;
  if ((EVar1 & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None) {
    return AccessProtected|PermissionDenied;
  }
  if (param_7) {
    if ((EVar1 >> 0xb & 1) != 0) {
      return CannotEditTemplate|PermissionDenied;
    }
  }
  else if ((EVar1 >> 0x10 & 1) != 0) {
    return CannotEditInstance|PermissionDenied;
  }
  if (((param_6 & EVar1) == CPF_None) && (param_6 != 0xffffffffffffffff)) {
    local_20 = param_5->ArrayNum;
    lVar4 = (longlong)local_20;
    _Src = (param_5->AllocatorInstance).Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_48 = param_1;
    local_40 = param_2;
    local_38 = param_3;
    local_30 = param_4;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar4 << 3);
    }
    local_18 = param_7;
    (**(code **)param_8)(&local_res18,*(undefined8 *)&param_8->field_0x8);
    bVar3 = `PropertyAccessUtil::SetPropertyValue_DirectComplete'::__l2::<lambda_1>::operator()
                      (&local_48,local_res18);
    if (local_res18 != (FPropertyAccessChangeNotify *)0x0) {
      (local_res18->ChangedPropertyChain).AffectedInstances.HashSize = 0;
      FVar2 = (local_res18->ChangedPropertyChain).AffectedInstances.Hash.SecondaryData;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(local_res18->ChangedPropertyChain).AffectedInstances.Elements);
      TDoubleLinkedList<FProperty_*>::~TDoubleLinkedList<FProperty_*>
                ((TDoubleLinkedList<FProperty_*> *)&local_res18->ChangedPropertyChain);
      ::operator_delete(local_res18,0xa0);
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    return !bVar3 * '\x02';
  }
  return ReadOnly|PermissionDenied;
}

// SetPropertyValue_DirectSingle @ 142150940

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::SetPropertyValue_DirectSingle
          (FProperty *param_1,void *param_2,FProperty *param_3,void *param_4,
          TArray<void_*,TSizedDefaultAllocator<32>_> *param_5,ulong64 param_6,bool param_7,
          TFunctionRef<TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>___cdecl(void)>
          *param_8)

{
  EPropertyFlags EVar1;
  FScriptContainerElement *_Src;
  ForElementType<FSetElementId> FVar2;
  bool bVar3;
  longlong lVar4;
  FPropertyAccessChangeNotify *local_res18;
  FProperty *local_48;
  void *local_40;
  FProperty *local_38;
  void *local_30;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  bool local_18;
  
  EVar1 = param_3->PropertyFlags;
  if ((EVar1 & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None) {
    return AccessProtected|PermissionDenied;
  }
  if (param_7) {
    if ((EVar1 >> 0xb & 1) != 0) {
      return CannotEditTemplate|PermissionDenied;
    }
  }
  else if ((EVar1 >> 0x10 & 1) != 0) {
    return CannotEditInstance|PermissionDenied;
  }
  if (((param_6 & EVar1) == CPF_None) && (param_6 != 0xffffffffffffffff)) {
    local_20 = param_5->ArrayNum;
    lVar4 = (longlong)local_20;
    _Src = (param_5->AllocatorInstance).Data;
    local_28.Data = (FScriptContainerElement *)0x0;
    local_48 = param_1;
    local_40 = param_2;
    local_38 = param_3;
    local_30 = param_4;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_20,0,&local_28,local_20,&local_1c);
      memcpy(local_28.Data,_Src,lVar4 << 3);
    }
    local_18 = param_7;
    (**(code **)param_8)(&local_res18,*(undefined8 *)&param_8->field_0x8);
    bVar3 = `PropertyAccessUtil::SetPropertyValue_DirectSingle'::__l2::<lambda_1>::operator()
                      (&local_48,local_res18);
    if (local_res18 != (FPropertyAccessChangeNotify *)0x0) {
      (local_res18->ChangedPropertyChain).AffectedInstances.HashSize = 0;
      FVar2 = (local_res18->ChangedPropertyChain).AffectedInstances.Hash.SecondaryData;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(local_res18->ChangedPropertyChain).AffectedInstances.Elements);
      TDoubleLinkedList<FProperty_*>::~TDoubleLinkedList<FProperty_*>
                ((TDoubleLinkedList<FProperty_*> *)&local_res18->ChangedPropertyChain);
      ::operator_delete(local_res18,0xa0);
    }
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    return !bVar3 * '\x02';
  }
  return ReadOnly|PermissionDenied;
}

// SetPropertyValue_InContainer @ 142150b10

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::SetPropertyValue_InContainer
          (FProperty *param_1,void *param_2,TArray<void_*,TSizedDefaultAllocator<32>_> *param_3,
          FProperty *param_4,void *param_5,int param_6,ulong64 param_7,bool param_8,
          TFunctionRef<TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>___cdecl(void)>
          *param_9)

{
  uint uVar1;
  int iVar2;
  EPropertyFlags EVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  EPropertyAccessResultFlags EVar7;
  bool bVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  int *piVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  longlong local_c8;
  FScriptContainerElement *local_c0;
  FPropertyAccessChangeNotify *local_b8;
  FPropertyAccessChangeNotify *local_b0;
  FProperty *local_a8;
  void *local_a0;
  FProperty *local_98;
  longlong local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  bool local_78;
  FProperty *local_70;
  void *local_68;
  FProperty *local_60;
  longlong local_58;
  ForAnyElementType local_50;
  int local_48;
  int local_44;
  bool local_40;
  
  bVar8 = param_8;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iStack_cc = 0;
  if (param_8) {
    uVar1 = param_3->ArrayNum;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,&local_d8,0,&iStack_cc);
    }
    pFVar13 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    local_c0 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        param_8 = false;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&param_8);
      }
      if (pFVar13 == local_c0) break;
      lVar9 = *(longlong *)pFVar13;
      if ((param_1->ArrayDim < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      if ((lVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      local_c8 = param_1->Offset_Internal + lVar9;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)iStack_cc * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d8,&iStack_cc);
      }
      lVar9 = (longlong)local_d0;
      pFVar13 = pFVar13 + 8;
      local_d0 = local_d0 + 1;
      *(longlong *)(local_d8.Data + lVar9 * 8) = local_c8;
    }
  }
  piVar11 = &param_1->ArrayDim;
  if ((param_6 == -1) || (*piVar11 == 1)) {
    if ((*piVar11 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6)
       ) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    FVar10.Data = local_d8.Data;
    EVar3 = param_1->PropertyFlags;
    lVar9 = (longlong)param_1->Offset_Internal + (longlong)param_2;
    if ((EVar3 & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None) {
      EVar7 = AccessProtected|PermissionDenied;
      goto LAB_1421510c1;
    }
    if (bVar8) {
      if ((EVar3 >> 0xb & 1) != 0) {
        EVar7 = CannotEditTemplate|PermissionDenied;
        goto LAB_1421510c1;
      }
    }
    else if ((EVar3 >> 0x10 & 1) != 0) goto LAB_1421510bf;
    if (((param_7 & EVar3) != CPF_None) || (param_7 == 0xffffffffffffffff)) goto LAB_1421510bb;
    lVar12 = (longlong)local_d0;
    local_68 = param_5;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = local_d0;
    local_70 = param_4;
    local_60 = param_1;
    local_58 = lVar9;
    if (local_d0 == 0) {
      local_44 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_d0,0,&local_50,local_d0,&local_44);
      memcpy(local_50.Data,FVar10.Data,lVar12 << 3);
    }
    local_40 = bVar8;
    (**(code **)param_9)(&local_b0,*(undefined8 *)&param_9->field_0x8);
    bVar8 = `PropertyAccessUtil::SetPropertyValue_DirectComplete'::__l2::<lambda_1>::operator()
                      (&local_70,local_b0);
    FVar10.Data = local_50.Data;
    if (local_b0 != (FPropertyAccessChangeNotify *)0x0) {
      (local_b0->ChangedPropertyChain).AffectedInstances.HashSize = 0;
      FVar4 = (local_b0->ChangedPropertyChain).AffectedInstances.Hash.SecondaryData;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(local_b0->ChangedPropertyChain).AffectedInstances.Elements);
      TDoubleLinkedList<FProperty_*>::~TDoubleLinkedList<FProperty_*>
                ((TDoubleLinkedList<FProperty_*> *)&local_b0->ChangedPropertyChain);
      ::operator_delete(local_b0,0xa0);
      FVar10.Data = local_50.Data;
    }
  }
  else {
    if ((*piVar11 <= param_6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InArrayIndex < InContainerProp->ArrayDim",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                           ,0x272,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    if (((param_6 < 0) || (*piVar11 <= param_6)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6)
       ) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    if ((param_2 == (void *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
    FVar10.Data = local_d8.Data;
    lVar9 = (longlong)param_2 +
            (longlong)param_1->Offset_Internal + (longlong)param_6 * (longlong)param_1->ElementSize;
    EVar3 = param_1->PropertyFlags;
    if ((EVar3 & (CPF_BlueprintAssignable|CPF_BlueprintVisible|CPF_Edit)) == CPF_None) {
      EVar7 = AccessProtected|PermissionDenied;
      goto LAB_1421510c1;
    }
    if (bVar8) {
      if ((EVar3 >> 0xb & 1) != 0) {
        EVar7 = CannotEditTemplate|PermissionDenied;
        goto LAB_1421510c1;
      }
    }
    else if ((EVar3 >> 0x10 & 1) != 0) {
LAB_1421510bf:
      EVar7 = CannotEditInstance|PermissionDenied;
      goto LAB_1421510c1;
    }
    if (((param_7 & EVar3) != CPF_None) || (param_7 == 0xffffffffffffffff)) {
LAB_1421510bb:
      EVar7 = ReadOnly|PermissionDenied;
      goto LAB_1421510c1;
    }
    lVar12 = (longlong)local_d0;
    local_a0 = param_5;
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = local_d0;
    local_a8 = param_4;
    local_98 = param_1;
    local_90 = lVar9;
    if (local_d0 == 0) {
      local_7c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_d0,0,&local_88,local_d0,&local_7c);
      memcpy(local_88.Data,FVar10.Data,lVar12 << 3);
    }
    local_78 = bVar8;
    (**(code **)param_9)(&local_b8,*(undefined8 *)&param_9->field_0x8);
    bVar8 = `PropertyAccessUtil::SetPropertyValue_DirectSingle'::__l2::<lambda_1>::operator()
                      (&local_a8,local_b8);
    FVar10.Data = local_88.Data;
    if (local_b8 != (FPropertyAccessChangeNotify *)0x0) {
      (local_b8->ChangedPropertyChain).AffectedInstances.HashSize = 0;
      FVar4 = (local_b8->ChangedPropertyChain).AffectedInstances.Hash.SecondaryData;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(local_b8->ChangedPropertyChain).AffectedInstances.Elements);
      TDoubleLinkedList<FProperty_*>::~TDoubleLinkedList<FProperty_*>
                ((TDoubleLinkedList<FProperty_*> *)&local_b8->ChangedPropertyChain);
      ::operator_delete(local_b8,0xa0);
      FVar10.Data = local_88.Data;
    }
  }
  EVar7 = !bVar8 * '\x02';
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
LAB_1421510c1:
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return EVar7;
}

// SetPropertyValue_Object @ 142151100

EPropertyAccessResultFlags __cdecl
PropertyAccessUtil::SetPropertyValue_Object
          (FProperty *param_1,UObject *param_2,FProperty *param_3,void *param_4,int param_5,
          ulong64 param_6,EPropertyAccessChangeNotifyMode param_7)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  EPropertyAccessResultFlags EVar5;
  char cVar6;
  UClass *pUVar7;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FProperty **local_30;
  FProperty *local_28;
  UObject *local_20;
  EPropertyAccessChangeNotifyMode local_18;
  
  pUVar7 = FField::GetOwnerClass((FField *)param_1);
  iVar1 = (int)pUVar7->_padding_;
  if (((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar7->_padding_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject->IsA(InObjectProp->GetOwnerClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyAccessUtil.cpp"
                         ,0x24b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if ((*(uint *)&param_2->field_0x8 & 0x30) != 0) {
    GetArchetypeInstancesInheritingPropertyValue_AsContainerData(param_1,param_2,&local_48);
  }
  local_18 = param_7;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`PropertyAccessUtil::SetPropertyValue_Object'::__l2::<lambda_1>,TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>_>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)param_2,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar4) {
LAB_1421511d5:
    bVar4 = true;
  }
  else {
    bVar4 = UObjectBaseUtility::IsPackageExternal((UObjectBaseUtility *)param_2);
    if ((bVar4) || (cVar6 = (**(code **)(*(longlong *)param_2 + 0x1c0))(param_2), cVar6 == '\0')) {
      if ((*(uint *)(*(longlong *)&param_2->field_0x10 + 0xd4) >> 0xc & 1) != 0) {
        for (plVar2 = *(longlong **)&param_2->field_0x20; plVar2 != (longlong *)0x0;
            plVar2 = (longlong *)plVar2[4]) {
          cVar6 = (**(code **)(*plVar2 + 0x1c0))(plVar2);
          if (cVar6 != '\0') goto LAB_1421511d5;
        }
      }
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  EVar5 = SetPropertyValue_InContainer
                    (param_1,param_2,&local_48,param_3,param_4,param_5,param_6,bVar4,
                     (TFunctionRef<TUniquePtr<FPropertyAccessChangeNotify,TDefaultDelete<FPropertyAccessChangeNotify>_>___cdecl(void)>
                      *)&local_38);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return EVar5;
}

// SortPackagesForReload @ 142151ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl SortPackagesForReload(TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  IAssetRegistryInterface *pIVar8;
  ulonglong uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  ForElementType<unsigned_int> FVar20;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  TArray<UPackage_*,TSizedDefaultAllocator<32>_> local_1a0;
  uint local_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_188;
  undefined4 local_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  uint local_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_168;
  undefined4 local_160;
  uint uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  TPairInitializer<FName_&&,UPackage_*_&> local_150;
  longlong local_140;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  undefined8 *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1->ArrayNum < 2) {
    return;
  }
  pIVar8 = IAssetRegistryInterface::GetPtr();
  if ((pIVar8 == (IAssetRegistryInterface *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("AssetRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PackageReload.cpp"
                         ,0x241,
                         L"SortPackagesForReload requires the asset registry to perform dependency analysis, but no asset registry is available."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar13 = param_1->ArrayNum;
  uVar12 = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  if (uVar13 != 0) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
    }
    TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_d8,uVar13);
    if (uVar13 < 4) {
      uVar13 = 1;
    }
    else {
      uVar17 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar13 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((local_90 == 0) || ((int)local_90 < (int)uVar13)) {
      local_90 = uVar13;
      if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
      }
      if (uVar13 != 0) {
        uVar16 = uVar13;
        if (uVar13 < 2) {
          if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
            uVar16 = 0;
            goto LAB_142151c07;
          }
        }
        else {
LAB_142151c07:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar16,4)
          ;
        }
        if (0 < (int)uVar13) {
          uVar18 = (ulonglong)uVar13;
          uVar17 = uVar12;
          do {
            FVar11.Data = (FScriptContainerElement *)local_a0;
            if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_98.Data;
            }
            uVar9 = uVar17 & (longlong)(int)uVar13 - 1U;
            uVar17 = uVar17 + 1;
            *(undefined4 *)((longlong)FVar11.Data + uVar9 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_90 != 0) {
        pTStack_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        local_190 = 0;
        uStack_18c = 1;
        uStack_17c = 0;
        uStack_178 = 0;
        uVar17 = uVar12;
        if (local_b0 != 0) {
          puVar19 = (uint *)(local_d8 + 0x10);
          if (local_b8 != (uint *)0x0) {
            puVar19 = local_b8;
          }
          uVar13 = *puVar19;
          uVar18 = uVar12;
          while (uVar13 == 0) {
            uStack_178 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)uStack_178;
            iVar10 = (int)uVar17;
            local_190 = iVar10 + 1;
            uVar17 = (ulonglong)local_190;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_190)
            goto LAB_142151d0e;
            uVar13 = puVar19[(longlong)iVar10 + 1];
          }
          uStack_18c = -uVar13 & uVar13;
          uVar17 = (ulonglong)uStack_18c * 2 + 1;
          lVar5 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          uStack_17c = (int)lVar5 + -1 + uStack_178;
          uVar17 = (ulonglong)uStack_17c;
          if ((int)local_b0 < (int)uStack_17c) {
LAB_142151d0e:
            uVar17 = (ulonglong)local_b0;
            uStack_17c = local_b0;
          }
        }
        local_180 = 0xffffffff;
        local_130._padding_ = CONCAT44(uStack_18c,local_190);
        local_130.CurrentBitIndex = uStack_17c;
        local_130.UnvisitedBitMask = 0xffffffff;
        local_130._28_4_ = uStack_174;
        local_130.BaseBitIndex = uStack_178;
        local_138 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d8;
        local_130.Array = pTStack_188;
        if ((int)uVar17 < (int)local_b0) {
          do {
            puVar15 = (undefined8 *)
                      ((longlong)(int)uVar17 * 0x10 + *(longlong *)&local_138->Elements);
            uVar2 = *puVar15;
            uVar13 = GetTypeHash((FNameEntryId)(uint)uVar2);
            uVar13 = local_90 - 1 & uVar13 + (int)((ulonglong)uVar2 >> 0x20);
            *(uint *)((longlong)puVar15 + 0xc) = uVar13;
            FVar11.Data = (FScriptContainerElement *)local_a0;
            if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar11.Data = local_98.Data;
            }
            uVar18 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar13;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)((longlong)FVar11.Data + uVar18 * 4);
            *(int *)((longlong)FVar11.Data + uVar18 * 4) = (int)uVar17;
            local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
            uVar17 = (ulonglong)(uint)local_130.CurrentBitIndex;
          } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
        }
      }
    }
  }
  uVar13 = param_1->ArrayNum;
  local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.ArrayNum = 0;
  local_1a0.ArrayMax = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&local_1a0.AllocatorInstance,0,&local_1a0.ArrayMax);
  }
  uVar13 = param_1->ArrayNum;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (uVar13 == 0) goto LAB_142152088;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar17 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar13 <= (int)local_40)) goto LAB_142152088;
  local_40 = uVar13;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar13 != 0) {
    uVar16 = uVar13;
    if (uVar13 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar16 = 0;
        goto LAB_142151ebc;
      }
    }
    else {
LAB_142151ebc:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar16,4);
    }
    if (0 < (int)uVar13) {
      uVar18 = (ulonglong)uVar13;
      uVar17 = uVar12;
      do {
        FVar11.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_48.Data;
        }
        uVar9 = uVar17 & (longlong)(int)uVar13 - 1U;
        uVar17 = uVar17 + 1;
        *(undefined4 *)(FVar11.Data + uVar9 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (local_40 != 0) {
    pTStack_168 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_170 = 0;
    uStack_16c = 1;
    uStack_15c = 0;
    uStack_158 = 0;
    if (local_60 != 0) {
      FVar20 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar20 = local_68;
      }
      uVar13 = *(uint *)FVar20;
      uVar17 = uVar12;
      while (uVar13 == 0) {
        uStack_158 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_158;
        iVar10 = (int)uVar12;
        local_170 = iVar10 + 1;
        uVar12 = (ulonglong)local_170;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_170)
        goto LAB_142151fce;
        uVar13 = ((uint *)((longlong)FVar20 + 4))[iVar10];
      }
      uStack_16c = -uVar13 & uVar13;
      uVar12 = (ulonglong)uStack_16c * 2 + 1;
      lVar5 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_15c = (int)lVar5 + -1 + uStack_158;
      uVar12 = (ulonglong)uStack_15c;
      if ((int)local_60 < (int)uStack_15c) {
LAB_142151fce:
        uVar12 = (ulonglong)local_60;
        uStack_15c = local_60;
      }
    }
    local_160 = 0xffffffff;
    local_110 = (longlong *)local_88;
    local_108._padding_ = CONCAT44(uStack_16c,local_170);
    local_108.CurrentBitIndex = uStack_15c;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_154;
    local_108.BaseBitIndex = uStack_158;
    local_108.Array = pTStack_168;
    if ((int)uVar12 < (int)local_60) {
      do {
        iVar10 = (int)uVar12;
        uVar2 = *(undefined8 *)(*local_110 + (longlong)iVar10 * 0x18);
        lVar5 = *local_110 + (longlong)iVar10 * 0x18;
        uVar13 = GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar13 = local_40 - 1 & uVar13 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(lVar5 + 0x14) = uVar13;
        FVar11.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_48.Data;
        }
        uVar12 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(FVar11.Data + uVar12 * 4);
        *(int *)(FVar11.Data + uVar12 * 4) = iVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar12 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_142152088:
  pFVar14 = (param_1->AllocatorInstance).Data;
  iVar10 = param_1->ArrayNum;
  pFVar4 = pFVar14 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      `TCheckedPointerIterator<UPackage_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1a8);
    }
    if (pFVar14 == pFVar4) break;
    local_140 = *(longlong *)pFVar14;
    local_150._4_8_ = *(undefined8 *)(local_140 + 0x18);
    local_e8 = (undefined8 *)((longlong)&local_150.Key + 4);
    local_e0 = &local_140;
    TSet<TTuple<FName,UPackage_*>,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,UPackage_*_&>_>
              ((TSet<TTuple<FName,UPackage_*>,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>,FDefaultSetAllocator>
                *)local_88,&local_150,(bool *)&local_e8);
    pFVar14 = pFVar14 + 8;
  }
  pFVar14 = (param_1->AllocatorInstance).Data;
  iVar10 = param_1->ArrayNum;
  pFVar4 = pFVar14 + (longlong)iVar10 * 8;
  do {
    if (param_1->ArrayNum != iVar10) {
      `TCheckedPointerIterator<UPackage_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1a7);
    }
    if (pFVar14 == pFVar4) {
      if (param_1 != &local_1a0) {
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (param_1->AllocatorInstance).Data = local_1a0.AllocatorInstance.Data;
        param_1->ArrayNum = local_1a0.ArrayNum;
        param_1->ArrayMax = local_1a0.ArrayMax;
        local_1a0.ArrayNum = 0;
        local_1a0.ArrayMax = 0;
        local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
      local_90 = 0;
      if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_98.Data);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_d8);
      return;
    }
    lVar5 = *(longlong *)pFVar14;
    lVar3 = *(longlong *)(lVar5 + 0x18);
    uVar13 = GetTypeHash((FNameEntryId)(uint)lVar3);
    if (local_d8._8_4_ != local_a4) {
      FVar11.Data = (FScriptContainerElement *)local_a0;
      if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
        FVar11.Data = local_98.Data;
      }
      for (iVar1 = *(int *)((longlong)FVar11.Data +
                           (ulonglong)(local_90 - 1 & (int)((ulonglong)lVar3 >> 0x20) + uVar13) * 4)
          ; iVar1 != -1; iVar1 = *(int *)(local_d8._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
        if (*(longlong *)(local_d8._0_8_ + (longlong)iVar1 * 0x10) == lVar3) goto LAB_142152182;
      }
    }
    PackageReloadInternal::SortPackagesForReload
              (*(FName *)(lVar5 + 0x18),
               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_d8,&local_1a0,
               (TMap<FName,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>_>
                *)local_88,pIVar8);
LAB_142152182:
    pFVar14 = pFVar14 + 8;
  } while( true );
}

// SortPackagesForReload @ 142152280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */
/* WARNING: Enum "EDependencyQuery": Some values do not have unique names */

void __cdecl
PackageReloadInternal::SortPackagesForReload
          (FName param_1,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          TArray<UPackage_*,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FName,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>_>
          *param_4,IAssetRegistryInterface *param_5)

{
  FName *pFVar1;
  code *pcVar2;
  FName FVar3;
  ForElementType<FSetElementId> FVar4;
  IAssetRegistryInterface *pIVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  TTuple<FName,UPackage_*> *pTVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  undefined1 *puVar13;
  FName *pFVar14;
  FName local_res8 [4];
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  FName *local_90;
  ulonglong local_88;
  FName local_80;
  IAssetRegistryInterface *local_78;
  FDependencyQuery local_70;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_78 = param_5;
  local_res8[0] = param_1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_2,&local_80,(bool *)local_res8);
  local_90 = (FName *)0x0;
  local_88 = 0;
  pcVar2 = *(code **)*param_5;
  UE::AssetRegistry::FDependencyQuery::FDependencyQuery(&local_70,Hard);
  (*pcVar2)(param_5,param_1,&local_90,1);
  if (local_70.RequiredUnions.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
    FMemory::Free((void *)local_70.RequiredUnions.AllocatorInstance.SecondaryData);
  }
  pIVar5 = local_78;
  iVar9 = (int)local_88;
  uVar11 = (ulonglong)(int)local_88;
  pFVar1 = local_90 + uVar11;
  pFVar14 = local_90;
  while( true ) {
    if ((int)uVar11 != iVar9) {
      local_98[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_98);
    }
    FVar3 = local_res8[0];
    if (pFVar14 == pFVar1) break;
    FVar3 = *pFVar14;
    uVar7 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      FVar4 = (param_2->Hash).SecondaryData;
      FVar12 = (ForElementType<FSetElementId>)&param_2->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar12 = FVar4;
      }
      iVar8 = *(int *)((longlong)FVar12 +
                      (ulonglong)(param_2->HashSize - 1U & FVar3.Number + uVar7) * 4);
      if (iVar8 != -1) {
        do {
          if (*(FName *)(*(longlong *)&param_2->Elements + (longlong)iVar8 * 0x10) == FVar3)
          goto LAB_1421523cb;
          iVar8 = *(int *)(*(longlong *)&param_2->Elements + 8 + (longlong)iVar8 * 0x10);
        } while (iVar8 != -1);
      }
    }
    SortPackagesForReload(*pFVar14,param_2,param_3,param_4,pIVar5);
LAB_1421523cb:
    uVar11 = local_88 & 0xffffffff;
    pFVar14 = pFVar14 + 1;
  }
  uVar7 = ::GetTypeHash(local_res8[0].ComparisonIndex.Value);
  if (*(int *)&param_4->field_0x8 != *(int *)&param_4->field_0x34) {
    puVar13 = *(undefined1 **)&param_4->field_0x40;
    if (*(undefined1 **)&param_4->field_0x40 == (undefined1 *)0x0) {
      puVar13 = &param_4->field_0x38;
    }
    iVar9 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&param_4->field_0x48 - 1U & FVar3.Number + uVar7) * 4);
    if (iVar9 != -1) {
      do {
        if (*(FName *)(*(longlong *)param_4 + (longlong)iVar9 * 0x18) == FVar3) {
          pTVar10 = TSet<TTuple<FName,UPackage_*>,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,UPackage_*>,TDefaultMapHashableKeyFuncs<FName,UPackage_*,0>,FDefaultSetAllocator>
                            *)param_4,FVar3);
          if ((pTVar10 == (TTuple<FName,UPackage_*> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar9 = param_3->ArrayNum;
          if (iVar9 == param_3->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar9 + 1;
          *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar9 * 8) =
               *(undefined8 *)&pTVar10->field_0x8;
          break;
        }
        iVar9 = *(int *)(*(longlong *)param_4 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (local_90 != (FName *)0x0) {
    FMemory::Free(local_90);
  }
  return;
}

// ValidateAndPreparePackageForReload @ 1421547d0

/* WARNING: Enum "Type": Some values do not have unique names */

UPackage * __cdecl PackageReloadInternal::ValidateAndPreparePackageForReload(UPackage *param_1)

{
  bool bVar1;
  FName local_res8 [4];
  FString local_18;
  
  if (((uint)param_1->PackageFlagsPrivate & 0x11) != 0) {
    if (2 < (byte)LogUObjectGlobals._0_1_) {
      local_res8[0] = (FName)param_1->_padding_;
      ::FName::ToString(local_res8,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogUObjectGlobals);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (UPackage *)0x0;
  }
  bVar1 = UPackage::IsFullyLoaded(param_1);
  if (!bVar1) {
    FlushAsyncLoading(-1);
    UPackage::FullyLoad(param_1);
  }
  ResetLoaders((UObject *)param_1);
  return param_1;
}

// Z_Construct_UClass_UPackage_NoRegister @ 142155500

UClass * __cdecl Z_Construct_UClass_UPackage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPackage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Package",&Z_Registration_Info_UClass_UPackage.InnerSingleton
               ,UPackage::StaticRegisterNativesUPackage,0x60,8,CLASS_Intrinsic,CASTCLASS_UPackage,
               L"Engine",InternalConstructor<UPackage>,InternalVTableHelperCtorCaller<UPackage>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackage.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EPropertyAccessChangeNotifyMode @ 1421555c0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EPropertyAccessChangeNotifyMode(void)

{
  if (Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EPropertyAccessChangeNotifyMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPropertyAccessChangeNotifyMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FFreezablePerPlatformInt @ 142155600

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFreezablePerPlatformInt(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFreezablePerPlatformInt.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFreezablePerPlatformInt.InnerSingleton,
               &Z_Construct_UScriptStruct_FFreezablePerPlatformInt_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFreezablePerPlatformInt.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFreezablePerPlatformInt.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPerPlatformBool @ 142155680

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerPlatformBool(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerPlatformBool.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerPlatformBool.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerPlatformBool_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerPlatformBool.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPerPlatformBool.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPerPlatformFloat @ 142155700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerPlatformFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerPlatformFloat.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerPlatformFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerPlatformFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerPlatformFloat.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPerPlatformFloat.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPerPlatformFrameRate @ 142155780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerPlatformFrameRate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerPlatformFrameRate.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerPlatformFrameRate.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerPlatformFrameRate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerPlatformFrameRate.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPerPlatformFrameRate.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPerPlatformInt @ 142155800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPerPlatformInt(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPerPlatformInt.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPerPlatformInt.InnerSingleton,
               &Z_Construct_UScriptStruct_FPerPlatformInt_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPerPlatformInt.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPerPlatformInt.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FPrimaryAssetId @ 142155880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetId.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPrimaryAssetId.InnerSingleton,
               &Z_Construct_UScriptStruct_FPrimaryAssetId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetId.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPrimaryAssetId.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// PackageDirtyStateChangedEvent'' @ 150350470

void __cdecl `dynamic_atexit_destructor_for_'UPackage::PackageDirtyStateChangedEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UPackage::PackageDirtyStateChangedEvent._8_8_,
             UPackage::PackageDirtyStateChangedEvent._16_4_);
  if (UPackage::PackageDirtyStateChangedEvent._8_8_ != 0) {
    FMemory::Free((void *)UPackage::PackageDirtyStateChangedEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UPackage::PackageDirtyStateChangedEvent);
  return;
}

// PackageMarkedDirtyEvent'' @ 1503504b0

void __cdecl `dynamic_atexit_destructor_for_'UPackage::PackageMarkedDirtyEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UPackage::PackageMarkedDirtyEvent._8_8_,UPackage::PackageMarkedDirtyEvent._16_4_);
  if (UPackage::PackageMarkedDirtyEvent._8_8_ != 0) {
    FMemory::Free((void *)UPackage::PackageMarkedDirtyEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UPackage::PackageMarkedDirtyEvent);
  return;
}

// PackageSavedEvent'' @ 1503504f0

void __cdecl `dynamic_atexit_destructor_for_'UPackage::PackageSavedEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UPackage::PackageSavedEvent._8_8_,UPackage::PackageSavedEvent._16_4_);
  if (UPackage::PackageSavedEvent._8_8_ != 0) {
    FMemory::Free((void *)UPackage::PackageSavedEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UPackage::PackageSavedEvent);
  return;
}

// PackageSavedWithContextEvent'' @ 150350530

void __cdecl `dynamic_atexit_destructor_for_'UPackage::PackageSavedWithContextEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UPackage::PackageSavedWithContextEvent._8_8_,
             UPackage::PackageSavedWithContextEvent._16_4_);
  if (UPackage::PackageSavedWithContextEvent._8_8_ != 0) {
    FMemory::Free((void *)UPackage::PackageSavedWithContextEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UPackage::PackageSavedWithContextEvent);
  return;
}

// PreSavePackageEvent'' @ 150350570

void __cdecl `dynamic_atexit_destructor_for_'UPackage::PreSavePackageEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UPackage::PreSavePackageEvent._8_8_,UPackage::PreSavePackageEvent._16_4_);
  if (UPackage::PreSavePackageEvent._8_8_ != 0) {
    FMemory::Free((void *)UPackage::PreSavePackageEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UPackage::PreSavePackageEvent);
  return;
}

// PreSavePackageWithContextEvent'' @ 1503505b0

void __cdecl `dynamic_atexit_destructor_for_'UPackage::PreSavePackageWithContextEvent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UPackage::PreSavePackageWithContextEvent._8_8_,
             UPackage::PreSavePackageWithContextEvent._16_4_);
  if (UPackage::PreSavePackageWithContextEvent._8_8_ != 0) {
    FMemory::Free((void *)UPackage::PreSavePackageWithContextEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UPackage::PreSavePackageWithContextEvent);
  return;
}

// RootNodeID'' @ 1503505f0

void __cdecl `dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data;
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Box2D_Ops'' @ 150350610

void __cdecl _dynamic_atexit_destructor_for__Box2D_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Box2D_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Box2d_Ops'' @ 150350640

void __cdecl _dynamic_atexit_destructor_for__Box2d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Box2d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Box2f_Ops'' @ 150350670

void __cdecl _dynamic_atexit_destructor_for__Box2f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Box2f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Box3d_Ops'' @ 1503506a0

void __cdecl _dynamic_atexit_destructor_for__Box3d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Box3d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Box3f_Ops'' @ 1503506d0

void __cdecl _dynamic_atexit_destructor_for__Box3f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Box3f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'BoxSphereBounds3d_Ops'' @ 150350700

void __cdecl _dynamic_atexit_destructor_for__BoxSphereBounds3d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = BoxSphereBounds3d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'BoxSphereBounds3f_Ops'' @ 150350730

void __cdecl _dynamic_atexit_destructor_for__BoxSphereBounds3f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = BoxSphereBounds3f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'BoxSphereBounds_Ops'' @ 150350760

void __cdecl _dynamic_atexit_destructor_for__BoxSphereBounds_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = BoxSphereBounds_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Box_Ops'' @ 150350790

void __cdecl _dynamic_atexit_destructor_for__Box_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Box_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnsureAgainstLargeProperties'' @ 1503507c0

void __cdecl
UE::CoreUObject::Private::_dynamic_atexit_destructor_for__CVarEnsureAgainstLargeProperties__(void)

{
  CVarEnsureAgainstLargeProperties._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnsureAgainstLargeProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarNonNullableBehavior'' @ 1503507e0

void __cdecl
UE::CoreUObject::Private::_dynamic_atexit_destructor_for__CVarNonNullableBehavior__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNonNullableBehavior);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRelocationMode'' @ 150350800

void __cdecl
UE::Package::Relocation::Private::_dynamic_atexit_destructor_for__CVarRelocationMode__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRelocationMode);
  return;
}

// `dynamic_atexit_destructor_for_'Color_Ops'' @ 150350820

void __cdecl _dynamic_atexit_destructor_for__Color_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Color_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'DateTime_Ops'' @ 150350850

void __cdecl _dynamic_atexit_destructor_for__DateTime_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = DateTime_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'FallbackStruct_Ops'' @ 150350880

void __cdecl _dynamic_atexit_destructor_for__FallbackStruct_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = FallbackStruct_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'FrameNumber_Ops'' @ 1503508b0

void __cdecl _dynamic_atexit_destructor_for__FrameNumber_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = FrameNumber_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'FrameRate_Ops'' @ 1503508e0

void __cdecl _dynamic_atexit_destructor_for__FrameRate_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = FrameRate_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'FrameTime_Ops'' @ 150350910

void __cdecl _dynamic_atexit_destructor_for__FrameTime_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = FrameTime_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'GOnClearPackageResourceManagerDelegate'' @ 150350940

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__GOnClearPackageResourceManagerDelegate__
          (void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             GOnClearPackageResourceManagerDelegate._8_8_,
             GOnClearPackageResourceManagerDelegate._16_4_);
  if (GOnClearPackageResourceManagerDelegate._8_8_ != 0) {
    FMemory::Free((void *)GOnClearPackageResourceManagerDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&GOnClearPackageResourceManagerDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'GSetPackageResourceManagerDelegate'' @ 150350980

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__GSetPackageResourceManagerDelegate__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &GSetPackageResourceManagerDelegate,(FWriteAccessScope *)&local_28);
  if ((GSetPackageResourceManagerDelegate._16_4_ != 0) &&
     (GSetPackageResourceManagerDelegate._8_8_ != 0)) {
    (*(code *)**(undefined8 **)GSetPackageResourceManagerDelegate._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&GSetPackageResourceManagerDelegate.field_0x8,0,0,0x10);
    GSetPackageResourceManagerDelegate._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (GSetPackageResourceManagerDelegate._8_8_ != 0) {
    FMemory::Free((void *)GSetPackageResourceManagerDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&GSetPackageResourceManagerDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'Guid_Ops'' @ 150350a20

void __cdecl _dynamic_atexit_destructor_for__Guid_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Guid_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int32Point_Ops'' @ 150350a50

void __cdecl _dynamic_atexit_destructor_for__Int32Point_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int32Point_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int32Vector2_Ops'' @ 150350a80

void __cdecl _dynamic_atexit_destructor_for__Int32Vector2_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int32Vector2_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int32Vector4_Ops'' @ 150350ab0

void __cdecl _dynamic_atexit_destructor_for__Int32Vector4_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int32Vector4_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int32Vector_Ops'' @ 150350ae0

void __cdecl _dynamic_atexit_destructor_for__Int32Vector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int32Vector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int64Point_Ops'' @ 150350b10

void __cdecl _dynamic_atexit_destructor_for__Int64Point_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int64Point_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int64Vector2_Ops'' @ 150350b40

void __cdecl _dynamic_atexit_destructor_for__Int64Vector2_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int64Vector2_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int64Vector4_Ops'' @ 150350b70

void __cdecl _dynamic_atexit_destructor_for__Int64Vector4_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int64Vector4_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Int64Vector_Ops'' @ 150350ba0

void __cdecl _dynamic_atexit_destructor_for__Int64Vector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Int64Vector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'IntPoint_Ops'' @ 150350bd0

void __cdecl _dynamic_atexit_destructor_for__IntPoint_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = IntPoint_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'IntVector2_Ops'' @ 150350c00

void __cdecl _dynamic_atexit_destructor_for__IntVector2_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = IntVector2_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'IntVector4_Ops'' @ 150350c30

void __cdecl _dynamic_atexit_destructor_for__IntVector4_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = IntVector4_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'IntVector_Ops'' @ 150350c60

void __cdecl _dynamic_atexit_destructor_for__IntVector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = IntVector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'InterpCurvePointFloat_Ops'' @ 150350c90

void __cdecl _dynamic_atexit_destructor_for__InterpCurvePointFloat_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = InterpCurvePointFloat_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'InterpCurvePointLinearColor_Ops'' @ 150350cc0

void __cdecl _dynamic_atexit_destructor_for__InterpCurvePointLinearColor_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = InterpCurvePointLinearColor_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'InterpCurvePointQuat_Ops'' @ 150350cf0

void __cdecl _dynamic_atexit_destructor_for__InterpCurvePointQuat_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = InterpCurvePointQuat_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'InterpCurvePointTwoVectors_Ops'' @ 150350d20

void __cdecl _dynamic_atexit_destructor_for__InterpCurvePointTwoVectors_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = InterpCurvePointTwoVectors_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'InterpCurvePointVector2D_Ops'' @ 150350d50

void __cdecl _dynamic_atexit_destructor_for__InterpCurvePointVector2D_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = InterpCurvePointVector2D_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'InterpCurvePointVector_Ops'' @ 150350d80

void __cdecl _dynamic_atexit_destructor_for__InterpCurvePointVector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = InterpCurvePointVector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'LinearColor_Ops'' @ 150350db0

void __cdecl _dynamic_atexit_destructor_for__LinearColor_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = LinearColor_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'LogPackageRelocation'' @ 150350de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPackageRelocation__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPackageRelocation);
  return;
}

// `dynamic_atexit_destructor_for_'LogPackageResourceManager'' @ 150350e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPackageResourceManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPackageResourceManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogProperty'' @ 150350e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogProperty__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogProperty);
  return;
}

// `dynamic_atexit_destructor_for_'Matrix44d_Ops'' @ 150350e40

void __cdecl _dynamic_atexit_destructor_for__Matrix44d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Matrix44d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Matrix44f_Ops'' @ 150350e70

void __cdecl _dynamic_atexit_destructor_for__Matrix44f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Matrix44f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Matrix_Ops'' @ 150350ea0

void __cdecl _dynamic_atexit_destructor_for__Matrix_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Matrix_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'OrientedBox_Ops'' @ 150350ed0

void __cdecl _dynamic_atexit_destructor_for__OrientedBox_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = OrientedBox_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Plane4d_Ops'' @ 150350f00

void __cdecl _dynamic_atexit_destructor_for__Plane4d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Plane4d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Plane4f_Ops'' @ 150350f30

void __cdecl _dynamic_atexit_destructor_for__Plane4f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Plane4f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Plane_Ops'' @ 150350f60

void __cdecl _dynamic_atexit_destructor_for__Plane_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Plane_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'QualifiedFrameTime_Ops'' @ 150350f90

void __cdecl _dynamic_atexit_destructor_for__QualifiedFrameTime_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = QualifiedFrameTime_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Quat4d_Ops'' @ 150350fc0

void __cdecl _dynamic_atexit_destructor_for__Quat4d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Quat4d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Quat4f_Ops'' @ 150350ff0

void __cdecl _dynamic_atexit_destructor_for__Quat4f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Quat4f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Quat_Ops'' @ 150351020

void __cdecl _dynamic_atexit_destructor_for__Quat_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Quat_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'RandomStream_Ops'' @ 150351050

void __cdecl _dynamic_atexit_destructor_for__RandomStream_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = RandomStream_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Ray3d_Ops'' @ 150351080

void __cdecl _dynamic_atexit_destructor_for__Ray3d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Ray3d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Ray3f_Ops'' @ 1503510b0

void __cdecl _dynamic_atexit_destructor_for__Ray3f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Ray3f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Ray_Ops'' @ 1503510e0

void __cdecl _dynamic_atexit_destructor_for__Ray_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Ray_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Rotator3d_Ops'' @ 150351110

void __cdecl _dynamic_atexit_destructor_for__Rotator3d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Rotator3d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Rotator3f_Ops'' @ 150351140

void __cdecl _dynamic_atexit_destructor_for__Rotator3f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Rotator3f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Rotator_Ops'' @ 150351170

void __cdecl _dynamic_atexit_destructor_for__Rotator_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Rotator_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Sphere3d_Ops'' @ 1503511a0

void __cdecl _dynamic_atexit_destructor_for__Sphere3d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Sphere3d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Sphere3f_Ops'' @ 1503511d0

void __cdecl _dynamic_atexit_destructor_for__Sphere3f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Sphere3f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Sphere_Ops'' @ 150351200

void __cdecl _dynamic_atexit_destructor_for__Sphere_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Sphere_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351230

void __cdecl
`FArrayProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351250

void __cdecl
`FObjectPropertyBase::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351270

void __cdecl
`FProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'Timecode_Ops'' @ 150351290

void __cdecl _dynamic_atexit_destructor_for__Timecode_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Timecode_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Timespan_Ops'' @ 1503512c0

void __cdecl _dynamic_atexit_destructor_for__Timespan_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Timespan_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Transform3d_Ops'' @ 1503512f0

void __cdecl _dynamic_atexit_destructor_for__Transform3d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Transform3d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Transform3f_Ops'' @ 150351320

void __cdecl _dynamic_atexit_destructor_for__Transform3f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Transform3f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Transform_Ops'' @ 150351350

void __cdecl _dynamic_atexit_destructor_for__Transform_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Transform_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'TwoVectors_Ops'' @ 150351380

void __cdecl _dynamic_atexit_destructor_for__TwoVectors_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = TwoVectors_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint32Point_Ops'' @ 1503513b0

void __cdecl _dynamic_atexit_destructor_for__Uint32Point_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint32Point_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint32Vector2_Ops'' @ 1503513e0

void __cdecl _dynamic_atexit_destructor_for__Uint32Vector2_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint32Vector2_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint32Vector4_Ops'' @ 150351410

void __cdecl _dynamic_atexit_destructor_for__Uint32Vector4_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint32Vector4_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint32Vector_Ops'' @ 150351440

void __cdecl _dynamic_atexit_destructor_for__Uint32Vector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint32Vector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint64Point_Ops'' @ 150351470

void __cdecl _dynamic_atexit_destructor_for__Uint64Point_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint64Point_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint64Vector2_Ops'' @ 1503514a0

void __cdecl _dynamic_atexit_destructor_for__Uint64Vector2_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint64Vector2_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint64Vector4_Ops'' @ 1503514d0

void __cdecl _dynamic_atexit_destructor_for__Uint64Vector4_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint64Vector4_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Uint64Vector_Ops'' @ 150351500

void __cdecl _dynamic_atexit_destructor_for__Uint64Vector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Uint64Vector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'UintPoint_Ops'' @ 150351530

void __cdecl _dynamic_atexit_destructor_for__UintPoint_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = UintPoint_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'UintVector2_Ops'' @ 150351560

void __cdecl _dynamic_atexit_destructor_for__UintVector2_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = UintVector2_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'UintVector4_Ops'' @ 150351590

void __cdecl _dynamic_atexit_destructor_for__UintVector4_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = UintVector4_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'UintVector_Ops'' @ 1503515c0

void __cdecl _dynamic_atexit_destructor_for__UintVector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = UintVector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector2D_Ops'' @ 1503515f0

void __cdecl _dynamic_atexit_destructor_for__Vector2D_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector2D_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector2d_Ops'' @ 150351620

void __cdecl _dynamic_atexit_destructor_for__Vector2d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector2d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector2f_Ops'' @ 150351650

void __cdecl _dynamic_atexit_destructor_for__Vector2f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector2f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector3d_Ops'' @ 150351680

void __cdecl _dynamic_atexit_destructor_for__Vector3d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector3d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector3f_Ops'' @ 1503516b0

void __cdecl _dynamic_atexit_destructor_for__Vector3f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector3f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector4_Ops'' @ 1503516e0

void __cdecl _dynamic_atexit_destructor_for__Vector4_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector4_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector4d_Ops'' @ 150351710

void __cdecl _dynamic_atexit_destructor_for__Vector4d_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector4d_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector4f_Ops'' @ 150351740

void __cdecl _dynamic_atexit_destructor_for__Vector4f_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector4f_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'Vector_Ops'' @ 150351770

void __cdecl _dynamic_atexit_destructor_for__Vector_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = Vector_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// operator() @ 150486230

bool __thiscall
`PropertyAccessUtil::GetArchetypeInstancesInheritingPropertyValue'::__l17::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7334689335561683476>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7334689335561683476>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150486310

bool __thiscall
``PropertyAccessUtil::SetPropertyValue_DirectSingle'::__l2::<lambda_1>::operator()'::__l12::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7334689335561683598>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7334689335561683598>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150486350

bool __thiscall
``PropertyAccessUtil::SetPropertyValue_DirectComplete'::__l2::<lambda_1>::operator()'::__l15::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7334689335561683641>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<7334689335561683641>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

