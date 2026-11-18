// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 10

// StaticClass @ 14e700940

UClass * __cdecl UInterchangeSceneVariantSetsFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSceneVariantSetsFactory",
               &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneVariantSetsFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneVariantSetsFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSceneVariantSetsFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.InnerSingleton;
}

// UInterchangeSceneVariantSetsFactory @ 14e708a90

UInterchangeSceneVariantSetsFactory * __thiscall
UInterchangeSceneVariantSetsFactory::UInterchangeSceneVariantSetsFactory
          (UInterchangeSceneVariantSetsFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->Translator = (UInterchangeTranslatorBase *)0x0;
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsFactory__6B_;
  return this;
}

// UInterchangeSceneVariantSetsFactory @ 14e708ac0

UInterchangeSceneVariantSetsFactory * __thiscall
UInterchangeSceneVariantSetsFactory::UInterchangeSceneVariantSetsFactory
          (UInterchangeSceneVariantSetsFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->Translator = (UInterchangeTranslatorBase *)0x0;
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsFactory__6B_;
  return this;
}

// ~UInterchangeSceneVariantSetsFactory @ 14e709a30

void __thiscall
UInterchangeSceneVariantSetsFactory::~UInterchangeSceneVariantSetsFactory
          (UInterchangeSceneVariantSetsFactory *this)

{
  this->_padding_ = (longlong)&___7UInterchangeSceneVariantSetsFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BeginImportAsset_GameThread @ 14e70eee0

FImportAssetResult * __thiscall
UInterchangeSceneVariantSetsFactory::BeginImportAsset_GameThread
          (UInterchangeSceneVariantSetsFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  if (CpuChannel->Enabled < 0) {
    __return_storage_ptr__->bIsFactorySkipAsset = false;
    __return_storage_ptr__->ImportedObject = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId301,
             "UInterchangeSceneVariantSetsFactory::BeginImportAsset_GameThread",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneVariantSetsFactory.cpp"
             ,0x12d);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId301);
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  FCpuProfilerTrace::OutputEndEvent();
  return __return_storage_ptr__;
}

// GetFactoryClass @ 14e718400

UClass * __thiscall
UInterchangeSceneVariantSetsFactory::GetFactoryClass(UInterchangeSceneVariantSetsFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSets",
               &Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton,
               ULevelVariantSets::StaticRegisterNativesULevelVariantSets,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelVariantSets>,
               InternalVTableHelperCtorCaller<ULevelVariantSets>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton;
}

// GetPrivateStaticClass @ 14e71a4c0

UClass * __cdecl UInterchangeSceneVariantSetsFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeSceneVariantSetsFactory",
               &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeSceneVariantSetsFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeSceneVariantSetsFactory>,
               InternalVTableHelperCtorCaller<UInterchangeSceneVariantSetsFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsFactory.InnerSingleton;
}

// ImportObjectSourceData @ 14e722e70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UInterchangeSceneVariantSetsFactory::ImportObjectSourceData
          (UInterchangeSceneVariantSetsFactory *this,FImportAssetObjectParams *param_1,
          ULevelVariantSets *param_2)

{
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId376,
               "UInterchangeSceneVariantSetsFactory::ImportObjectSourceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneVariantSetsFactory.cpp"
               ,0x178);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId376);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (UObject *)param_2;
}

// SetupObject_GameThread @ 14e728670

void __thiscall
UInterchangeSceneVariantSetsFactory::SetupObject_GameThread
          (UInterchangeSceneVariantSetsFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId420,
               "UInterchangeSceneVariantSetsFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneVariantSetsFactory.cpp"
               ,0x1a4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId420);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Scene\\InterchangeSceneVariantSetsFactory.cpp"
                         ,0x1a5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeFactoryBase.h"
                         ,0x125,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (!bVar3) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// StaticRegisterNativesUInterchangeSceneVariantSetsFactory @ 14e72a590

void __cdecl
UInterchangeSceneVariantSetsFactory::StaticRegisterNativesUInterchangeSceneVariantSetsFactory(void)

{
  return;
}

