// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 11

// StaticClass @ 14e674dd0

UClass * __cdecl UInterchangeLevelSequenceFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelSequenceFactory",
               &Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelSequenceFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLevelSequenceFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLevelSequenceFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton;
}

// UInterchangeLevelSequenceFactory @ 14e690fc0

UInterchangeLevelSequenceFactory * __thiscall
UInterchangeLevelSequenceFactory::UInterchangeLevelSequenceFactory
          (UInterchangeLevelSequenceFactory *this,FVTableHelper *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->Translator = (UInterchangeTranslatorBase *)0x0;
  this->_padding_ = (longlong)&___7UInterchangeLevelSequenceFactory__6B_;
  return this;
}

// UInterchangeLevelSequenceFactory @ 14e690ff0

UInterchangeLevelSequenceFactory * __thiscall
UInterchangeLevelSequenceFactory::UInterchangeLevelSequenceFactory
          (UInterchangeLevelSequenceFactory *this,FObjectInitializer *param_1)

{
  UInterchangeFactoryBase::UInterchangeFactoryBase((UInterchangeFactoryBase *)this,param_1);
  this->Translator = (UInterchangeTranslatorBase *)0x0;
  this->_padding_ = (longlong)&___7UInterchangeLevelSequenceFactory__6B_;
  return this;
}

// ~UInterchangeLevelSequenceFactory @ 14e692090

void __thiscall
UInterchangeLevelSequenceFactory::~UInterchangeLevelSequenceFactory
          (UInterchangeLevelSequenceFactory *this)

{
  this->_padding_ = (longlong)&___7UInterchangeLevelSequenceFactory__6B_;
  UInterchangeFactoryBase::~UInterchangeFactoryBase((UInterchangeFactoryBase *)this);
  return;
}

// BeginImportAsset_GameThread @ 14e698210

/* WARNING: Enum "Type": Some values do not have unique names */

FImportAssetResult * __thiscall
UInterchangeLevelSequenceFactory::BeginImportAsset_GameThread
          (UInterchangeLevelSequenceFactory *this,FImportAssetResult *__return_storage_ptr__,
          FImportAssetObjectParams *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId809,
               "UInterchangeLevelSequenceFactory::BeginImportAsset_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeLevelSequenceFactory.cpp"
               ,0x329);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId809);
  }
  bVar1 = 1 < (byte)LogInterchangeImport._0_1_;
  __return_storage_ptr__->bIsFactorySkipAsset = false;
  __return_storage_ptr__->ImportedObject = (UObject *)0x0;
  if (bVar1) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// GetFactoryAssetType @ 14e69e430

EInterchangeFactoryAssetType __thiscall
UInterchangeLevelSequenceFactory::GetFactoryAssetType(UInterchangeLevelSequenceFactory *this)

{
  return Animations;
}

// GetFactoryClass @ 14e69e460

UClass * __thiscall
UInterchangeLevelSequenceFactory::GetFactoryClass(UInterchangeLevelSequenceFactory *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequence.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequence",
               &Z_Registration_Info_UClass_ULevelSequence.InnerSingleton,
               ULevelSequence::StaticRegisterNativesULevelSequence,0xa8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULevelSequence>,InternalVTableHelperCtorCaller<ULevelSequence>,
               aFStackX_8,UMovieSceneSequence::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequence.InnerSingleton;
}

// GetPrivateStaticClass @ 14e6a0900

UClass * __cdecl UInterchangeLevelSequenceFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeLevelSequenceFactory",
               &Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton,
               StaticRegisterNativesUInterchangeLevelSequenceFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeLevelSequenceFactory>,
               InternalVTableHelperCtorCaller<UInterchangeLevelSequenceFactory>,local_res8,
               UInterchangeFactoryBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeLevelSequenceFactory.InnerSingleton;
}

// ImportObjectSourceData @ 14e6a3400

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UInterchangeLevelSequenceFactory::ImportObjectSourceData
          (UInterchangeLevelSequenceFactory *this,FImportAssetObjectParams *param_1)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId894,
               "UInterchangeLevelSequenceFactory::ImportObjectSourceData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeLevelSequenceFactory.cpp"
               ,0x37e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId894);
  }
  if (1 < (byte)LogInterchangeImport._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeImport);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (UObject *)0x0;
}

// SetupObject_GameThread @ 14e6a8030

void __thiscall
UInterchangeLevelSequenceFactory::SetupObject_GameThread
          (UInterchangeLevelSequenceFactory *this,FSetupObjectParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId975,
               "UInterchangeLevelSequenceFactory::SetupObject_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeLevelSequenceFactory.cpp"
               ,0x3cf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId975);
  }
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeLevelSequenceFactory.cpp"
                         ,0x3d1,L""), bVar2)) {
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

// StaticRegisterNativesUInterchangeLevelSequenceFactory @ 14e6a8210

void __cdecl
UInterchangeLevelSequenceFactory::StaticRegisterNativesUInterchangeLevelSequenceFactory(void)

{
  return;
}

