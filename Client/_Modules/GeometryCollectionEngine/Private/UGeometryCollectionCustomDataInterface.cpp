// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// StaticClass @ 146345630

UClass * __cdecl UGeometryCollectionCustomDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionCustomDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionCustomDataInterface",
               &Z_Registration_Info_UClass_UGeometryCollectionCustomDataInterface.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionCustomDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionCustomDataInterface>,
               InternalVTableHelperCtorCaller<UGeometryCollectionCustomDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionCustomDataInterface.InnerSingleton;
}

// UGeometryCollectionCustomDataInterface @ 14635e480

UGeometryCollectionCustomDataInterface * __thiscall
UGeometryCollectionCustomDataInterface::UGeometryCollectionCustomDataInterface
          (UGeometryCollectionCustomDataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGeometryCollectionCustomDataInterface__6B_;
  return this;
}

// UGeometryCollectionCustomDataInterface @ 14635e4b0

UGeometryCollectionCustomDataInterface * __thiscall
UGeometryCollectionCustomDataInterface::UGeometryCollectionCustomDataInterface
          (UGeometryCollectionCustomDataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGeometryCollectionCustomDataInterface__6B_;
  return this;
}

// ~UGeometryCollectionCustomDataInterface @ 14635f320

void __thiscall
UGeometryCollectionCustomDataInterface::~UGeometryCollectionCustomDataInterface
          (UGeometryCollectionCustomDataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146379c70

UClass * __cdecl UGeometryCollectionCustomDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionCustomDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionCustomDataInterface",
               &Z_Registration_Info_UClass_UGeometryCollectionCustomDataInterface.InnerSingleton,
               StaticRegisterNativesUGeometryCollectionCustomDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionCustomDataInterface>,
               InternalVTableHelperCtorCaller<UGeometryCollectionCustomDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionCustomDataInterface.InnerSingleton;
}

// StaticRegisterNativesUGeometryCollectionCustomDataInterface @ 14638f5a0

void __cdecl
UGeometryCollectionCustomDataInterface::StaticRegisterNativesUGeometryCollectionCustomDataInterface
          (void)

{
  return;
}

