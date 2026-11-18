// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14758b6a0

UClass * __cdecl UPreviewCollectionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PreviewCollectionInterface",
               &Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton,
               StaticRegisterNativesUPreviewCollectionInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPreviewCollectionInterface>,
               InternalVTableHelperCtorCaller<UPreviewCollectionInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton;
}

// UPreviewCollectionInterface @ 1475a7de0

UPreviewCollectionInterface * __thiscall
UPreviewCollectionInterface::UPreviewCollectionInterface
          (UPreviewCollectionInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPreviewCollectionInterface__6B_;
  return this;
}

// UPreviewCollectionInterface @ 1475a7e10

UPreviewCollectionInterface * __thiscall
UPreviewCollectionInterface::UPreviewCollectionInterface
          (UPreviewCollectionInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPreviewCollectionInterface__6B_;
  return this;
}

// ~UPreviewCollectionInterface @ 1475aac40

void __thiscall
UPreviewCollectionInterface::~UPreviewCollectionInterface(UPreviewCollectionInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1475dbe90

UClass * __cdecl UPreviewCollectionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PreviewCollectionInterface",
               &Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton,
               StaticRegisterNativesUPreviewCollectionInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPreviewCollectionInterface>,
               InternalVTableHelperCtorCaller<UPreviewCollectionInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton;
}

// StaticRegisterNativesUPreviewCollectionInterface @ 1475fee10

void __cdecl UPreviewCollectionInterface::StaticRegisterNativesUPreviewCollectionInterface(void)

{
  return;
}

