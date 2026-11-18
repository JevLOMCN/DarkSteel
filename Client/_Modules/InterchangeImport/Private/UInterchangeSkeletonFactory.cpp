// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 10

// StaticClass @ 14e700180

UClass * __cdecl UInterchangeSkeletonFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletonFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkeletonFactory",
               &Z_Registration_Info_UClass_UInterchangeSkeletonFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletonFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletonFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletonFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletonFactory.InnerSingleton;
}

// UInterchangeSkeletonFactory @ 14e708b50

UInterchangeSkeletonFactory * __thiscall
UInterchangeSkeletonFactory::UInterchangeSkeletonFactory
          (UInterchangeSkeletonFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSkeletonFactory__6B_;
  return this;
}

// UInterchangeSkeletonFactory @ 14e708b80

UInterchangeSkeletonFactory * __thiscall
UInterchangeSkeletonFactory::UInterchangeSkeletonFactory
          (UInterchangeSkeletonFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  *(undefined ***)this = &___7UInterchangeSkeletonFactory__6B_;
  return this;
}

// ~UInterchangeSkeletonFactory @ 14e709a70

void __thiscall
UInterchangeSkeletonFactory::~UInterchangeSkeletonFactory(UInterchangeSkeletonFactory *this)

{
  *(undefined ***)this = &___7UInterchangeSkeletonFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BeginImportAsset_GameThread @ 14e70ef60

FImportAssetResult * __thiscall
UInterchangeSkeletonFactory::BeginImportAsset_GameThread
          (UInterchangeSkeletonFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId26,"UInterchangeSkeletonFactory::BeginImportAsset_GameThread",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeSkeletonFactory.cpp"
             ,0x1a);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId26);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e718320

EInterchangeFactoryAssetType __thiscall
UInterchangeSkeletonFactory::GetFactoryAssetType(UInterchangeSkeletonFactory *this)

{
  return Meshes;
}

// GetFactoryClass @ 14e718420

UClass * __thiscall UInterchangeSkeletonFactory::GetFactoryClass(UInterchangeSkeletonFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkeleton.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Skeleton",&Z_Registration_Info_UClass_USkeleton.InnerSingleton,
               USkeleton::StaticRegisterNativesUSkeleton,0x388,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeleton>,InternalVTableHelperCtorCaller<USkeleton>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeleton.InnerSingleton;
}

// GetObjectToReimport @ 14e719980

UObject * __thiscall
UInterchangeSkeletonFactory::GetObjectToReimport
          (UInterchangeSkeletonFactory *this,UObject *param_1,UInterchangeFactoryBaseNode *param_2,
          FString *param_3,FString *param_4,FString *param_5)

{
  return param_1;
}

// GetPrivateStaticClass @ 14e71a640

UClass * __cdecl UInterchangeSkeletonFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSkeletonFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSkeletonFactory",
               &Z_Registration_Info_UClass_UInterchangeSkeletonFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSkeletonFactory,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSkeletonFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSkeletonFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSkeletonFactory.InnerSingleton;
}

// StaticRegisterNativesUInterchangeSkeletonFactory @ 14e72a5b0

void __cdecl UInterchangeSkeletonFactory::StaticRegisterNativesUInterchangeSkeletonFactory(void)

{
  return;
}

