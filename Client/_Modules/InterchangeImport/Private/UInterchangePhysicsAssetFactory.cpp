// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 10

// StaticClass @ 14e6d8440

UClass * __cdecl UInterchangePhysicsAssetFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangePhysicsAssetFactory",
               &Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.InnerSingleton,
               StaticRegisterNativesUInterchangePhysicsAssetFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePhysicsAssetFactory>,
               InternalVTableHelperCtorCaller<UInterchangePhysicsAssetFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.InnerSingleton;
}

// UInterchangePhysicsAssetFactory @ 14e6e0b80

UInterchangePhysicsAssetFactory * __thiscall
UInterchangePhysicsAssetFactory::UInterchangePhysicsAssetFactory
          (UInterchangePhysicsAssetFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangePhysicsAssetFactory__6B_;
  return this;
}

// UInterchangePhysicsAssetFactory @ 14e6e0bb0

UInterchangePhysicsAssetFactory * __thiscall
UInterchangePhysicsAssetFactory::UInterchangePhysicsAssetFactory
          (UInterchangePhysicsAssetFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangePhysicsAssetFactory__6B_;
  return this;
}

// ~UInterchangePhysicsAssetFactory @ 14e6e1690

void __thiscall
UInterchangePhysicsAssetFactory::~UInterchangePhysicsAssetFactory
          (UInterchangePhysicsAssetFactory *this)

{
  *(undefined ***)this = &___7UInterchangePhysicsAssetFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BeginImportAsset_GameThread @ 14e6ebe80

FImportAssetResult * __thiscall
UInterchangePhysicsAssetFactory::BeginImportAsset_GameThread
          (UInterchangePhysicsAssetFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId21,
             "UInterchangePhysicsAssetFactory::BeginImportAsset_GameThread",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangePhysicsAssetFactory.cpp"
             ,0x15);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId21);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e6efc30

EInterchangeFactoryAssetType __thiscall
UInterchangePhysicsAssetFactory::GetFactoryAssetType(UInterchangePhysicsAssetFactory *this)

{
  return Physics;
}

// GetFactoryClass @ 14e6efc80

UClass * __thiscall
UInterchangePhysicsAssetFactory::GetFactoryClass(UInterchangePhysicsAssetFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsAsset",
               &Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton,
               UPhysicsAsset::StaticRegisterNativesUPhysicsAsset,0x168,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UPhysicsAsset>,InternalVTableHelperCtorCaller<UPhysicsAsset>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsAsset.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6f0f90

UClass * __cdecl UInterchangePhysicsAssetFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangePhysicsAssetFactory",
               &Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.InnerSingleton,
               StaticRegisterNativesUInterchangePhysicsAssetFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePhysicsAssetFactory>,
               InternalVTableHelperCtorCaller<UInterchangePhysicsAssetFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePhysicsAssetFactory.InnerSingleton;
}

// ImportAsset_Async @ 14e6f2dc0

FImportAssetResult * __thiscall
UInterchangePhysicsAssetFactory::ImportAsset_Async
          (UInterchangePhysicsAssetFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId74,"UInterchangePhysicsAssetFactory::ImportAsset_Async",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangePhysicsAssetFactory.cpp"
             ,0x4a);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId74);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangePhysicsAssetFactory @ 14e6fcdb0

void __cdecl
UInterchangePhysicsAssetFactory::StaticRegisterNativesUInterchangePhysicsAssetFactory(void)

{
  return;
}

