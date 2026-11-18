// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147338ba0

UClass * __cdecl UWorldPartitionEditorLoaderAdapter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorLoaderAdapter",
               &Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton,
               StaticRegisterNativesUWorldPartitionEditorLoaderAdapter,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionEditorLoaderAdapter>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorLoaderAdapter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton;
}

// UWorldPartitionEditorLoaderAdapter @ 147340f50

UWorldPartitionEditorLoaderAdapter * __thiscall
UWorldPartitionEditorLoaderAdapter::UWorldPartitionEditorLoaderAdapter
          (UWorldPartitionEditorLoaderAdapter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IWorldPartitionActorLoaderInterface__;
  return this;
}

// UWorldPartitionEditorLoaderAdapter @ 147340f90

UWorldPartitionEditorLoaderAdapter * __thiscall
UWorldPartitionEditorLoaderAdapter::UWorldPartitionEditorLoaderAdapter
          (UWorldPartitionEditorLoaderAdapter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IWorldPartitionActorLoaderInterface__;
  return this;
}

// ~UWorldPartitionEditorLoaderAdapter @ 1473423f0

void __thiscall
UWorldPartitionEditorLoaderAdapter::~UWorldPartitionEditorLoaderAdapter
          (UWorldPartitionEditorLoaderAdapter *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IWorldPartitionActorLoaderInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147350560

UClass * __cdecl UWorldPartitionEditorLoaderAdapter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionEditorLoaderAdapter",
               &Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton,
               StaticRegisterNativesUWorldPartitionEditorLoaderAdapter,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionEditorLoaderAdapter>,
               InternalVTableHelperCtorCaller<UWorldPartitionEditorLoaderAdapter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionEditorLoaderAdapter @ 1473589e0

void __cdecl
UWorldPartitionEditorLoaderAdapter::StaticRegisterNativesUWorldPartitionEditorLoaderAdapter(void)

{
  return;
}

// _getUObject @ 147360b30

UObject * __thiscall
UWorldPartitionEditorLoaderAdapter::_getUObject(UWorldPartitionEditorLoaderAdapter *this)

{
  return (UObject *)&this[-1].field_0x8;
}

