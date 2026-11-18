// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// StaticClass @ 146345180

UClass * __cdecl UGeometryCollectionExternalRenderInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionExternalRenderInterface",
               &Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.InnerSingleton
               ,StaticRegisterNativesUGeometryCollectionExternalRenderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionExternalRenderInterface>,
               InternalVTableHelperCtorCaller<UGeometryCollectionExternalRenderInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.InnerSingleton;
}

// UGeometryCollectionExternalRenderInterface @ 14635e5a0

UGeometryCollectionExternalRenderInterface * __thiscall
UGeometryCollectionExternalRenderInterface::UGeometryCollectionExternalRenderInterface
          (UGeometryCollectionExternalRenderInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGeometryCollectionExternalRenderInterface__6B_;
  return this;
}

// UGeometryCollectionExternalRenderInterface @ 14635e5d0

UGeometryCollectionExternalRenderInterface * __thiscall
UGeometryCollectionExternalRenderInterface::UGeometryCollectionExternalRenderInterface
          (UGeometryCollectionExternalRenderInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGeometryCollectionExternalRenderInterface__6B_;
  return this;
}

// ~UGeometryCollectionExternalRenderInterface @ 14635f360

void __thiscall
UGeometryCollectionExternalRenderInterface::~UGeometryCollectionExternalRenderInterface
          (UGeometryCollectionExternalRenderInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146379df0

UClass * __cdecl UGeometryCollectionExternalRenderInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionExternalRenderInterface",
               &Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.InnerSingleton
               ,StaticRegisterNativesUGeometryCollectionExternalRenderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionExternalRenderInterface>,
               InternalVTableHelperCtorCaller<UGeometryCollectionExternalRenderInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionExternalRenderInterface.InnerSingleton;
}

// StaticRegisterNativesUGeometryCollectionExternalRenderInterface @ 14638f5c0

void __cdecl
UGeometryCollectionExternalRenderInterface::
StaticRegisterNativesUGeometryCollectionExternalRenderInterface(void)

{
  return;
}

