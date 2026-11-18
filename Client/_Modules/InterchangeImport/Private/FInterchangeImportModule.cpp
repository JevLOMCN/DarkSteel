// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 5

// StartupModule @ 14e6ab420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FInterchangeImportModule::StartupModule(FInterchangeImportModule *this)

{
  UObject *pUVar1;
  UClass *this_00;
  <lambda_1> local_res10 [24];
  
  this_00 = Z_Construct_UClass_URendererSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 != (UObject *)0x0) {
    this->bIsSubstrateEnabled = (bool)((byte)(*(uint *)(pUVar1 + 10) >> 5) & 1);
    this->bIsSubstrateAdaptiveGBufferEnabled = pUVar1[10].field_0x4 == '\x01';
  }
  FInterchangeImportMaterialAsyncHelper::GetInstance();
  if (GEngine != (UEngine *)0x0) {
    `FInterchangeImportModule::StartupModule'::__l2::<lambda_1>::operator()(local_res10);
    UInterchangeManager::SetInterchangeImportEnabled(true);
    return;
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FInterchangeImportModule::StartupModule_::__l2::<lambda_1>_&>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_res10);
  UInterchangeManager::SetInterchangeImportEnabled(true);
  return;
}

// ShutdownModule @ 14e6ab4d0

void __thiscall FInterchangeImportModule::ShutdownModule(FInterchangeImportModule *this)

{
  UInterchangeManager::SetInterchangeImportEnabled(false);
  UInterchangeFbxTranslator::CleanUpTemporaryFolder();
  return;
}

// IsSubstrateEnabled @ 14e6ab4f0

bool __thiscall FInterchangeImportModule::IsSubstrateEnabled(FInterchangeImportModule *this)

{
  if ((this->bIsSubstrateEnabled != false) && (GInterchangeEnableSubstrate)) {
    return true;
  }
  return false;
}

// IsSubstrateAdaptiveGBufferEnabled @ 14e6ab510

bool __thiscall
FInterchangeImportModule::IsSubstrateAdaptiveGBufferEnabled(FInterchangeImportModule *this)

{
  return this->bIsSubstrateAdaptiveGBufferEnabled;
}

// operator() @ 14e6bb060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall `FInterchangeImportModule::StartupModule'::__l2::<lambda_1>::operator()(void *this)

{
  UInterchangeManager *this_00;
  UClass *pUVar1;
  
  this_00 = UInterchangeManager::GetInterchangeManager();
  pUVar1 = UInterchangeGLTFTranslator::StaticClass();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioTranslator_AIF_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioTranslator_AIFF_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioTranslator_OGG_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioTranslator_FLAC_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioTranslator_OPUS_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioTranslator_MP3_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioTranslator_WAV_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = UInterchangeMaterialXTranslator::StaticClass();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeImageWrapperTranslator_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeDDSTranslator_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeUEJPEGTranslator_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeJPGTranslator_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangePSDTranslator_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeIESTranslator_NoRegister();
  UInterchangeManager::RegisterTranslator(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeTextureFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeMaterialFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeMaterialFunctionFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeSkeletonFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeSkeletalMeshFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeGeometryCacheFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = UInterchangeGroomFactory::StaticClass();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = UInterchangeGroomCacheFactory::StaticClass();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangePhysicsAssetFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeLevelFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeLevelInstanceActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeLevelSequenceFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAnimSequenceFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeCineCameraActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeCameraActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeDecalActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeSceneVariantSetsFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeLightActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeSkyLightActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeSceneImportAssetFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeSpecularProfileFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeHeterogeneousVolumeActorFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  pUVar1 = Z_Construct_UClass_UInterchangeAudioSoundWaveFactory_NoRegister();
  UInterchangeManager::RegisterFactory(this_00,pUVar1);
  return;
}

