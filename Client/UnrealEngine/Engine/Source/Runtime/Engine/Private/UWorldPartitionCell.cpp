// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aa8020

UClass * __cdecl UWorldPartitionCell::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCell",
               &Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionCell,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionCell>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton;
}

// UWorldPartitionCell @ 148ab5120

UWorldPartitionCell * __thiscall
UWorldPartitionCell::UWorldPartitionCell(UWorldPartitionCell *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionCell__6B_;
  return this;
}

// UWorldPartitionCell @ 148ab5150

UWorldPartitionCell * __thiscall
UWorldPartitionCell::UWorldPartitionCell(UWorldPartitionCell *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionCell__6B_;
  return this;
}

// ~UWorldPartitionCell @ 148ab73d0

void __thiscall UWorldPartitionCell::~UWorldPartitionCell(UWorldPartitionCell *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 148acf070

UClass * __cdecl UWorldPartitionCell::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionCell",
               &Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton,
               StaticRegisterNativesUWorldPartitionCell,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionCell>,
               InternalVTableHelperCtorCaller<UWorldPartitionCell>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionCell.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionCell @ 148adb820

void __cdecl UWorldPartitionCell::StaticRegisterNativesUWorldPartitionCell(void)

{
  return;
}

