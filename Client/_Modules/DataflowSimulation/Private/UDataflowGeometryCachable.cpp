// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 6

// StaticClass @ 1462ea110

UClass * __cdecl UDataflowGeometryCachable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowGeometryCachable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowGeometryCachable",
               &Z_Registration_Info_UClass_UDataflowGeometryCachable.InnerSingleton,
               StaticRegisterNativesUDataflowGeometryCachable,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowGeometryCachable>,
               InternalVTableHelperCtorCaller<UDataflowGeometryCachable>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowGeometryCachable.InnerSingleton;
}

// UDataflowGeometryCachable @ 1462f24f0

UDataflowGeometryCachable * __thiscall
UDataflowGeometryCachable::UDataflowGeometryCachable
          (UDataflowGeometryCachable *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowGeometryCachable__6B_;
  return this;
}

// UDataflowGeometryCachable @ 1462f2520

UDataflowGeometryCachable * __thiscall
UDataflowGeometryCachable::UDataflowGeometryCachable
          (UDataflowGeometryCachable *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UDataflowGeometryCachable__6B_;
  return this;
}

// ~UDataflowGeometryCachable @ 1462f2f70

void __thiscall
UDataflowGeometryCachable::~UDataflowGeometryCachable(UDataflowGeometryCachable *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1462f6990

UClass * __cdecl UDataflowGeometryCachable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowGeometryCachable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowSimulation",L"DataflowGeometryCachable",
               &Z_Registration_Info_UClass_UDataflowGeometryCachable.InnerSingleton,
               StaticRegisterNativesUDataflowGeometryCachable,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowGeometryCachable>,
               InternalVTableHelperCtorCaller<UDataflowGeometryCachable>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowGeometryCachable.InnerSingleton;
}

// StaticRegisterNativesUDataflowGeometryCachable @ 1462fdeb0

void __cdecl UDataflowGeometryCachable::StaticRegisterNativesUDataflowGeometryCachable(void)

{
  return;
}

