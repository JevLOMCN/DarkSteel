// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 61

// StaticClass @ 148a27a60

UClass * __cdecl AWorldDataLayers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldDataLayers",
               &Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton,
               StaticRegisterNativesAWorldDataLayers,0x848,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldDataLayers>,
               InternalVTableHelperCtorCaller<AWorldDataLayers>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton;
}

// AWorldDataLayers @ 148a40d00

AWorldDataLayers * __thiscall
AWorldDataLayers::AWorldDataLayers(AWorldDataLayers *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AInfo__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  *(undefined8 *)&this->InstanceNameToInstance = 0;
  *(undefined8 *)&(this->InstanceNameToInstance).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceNameToInstance).field_0x20 = 0;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x28 = 0;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x34 = 0;
  *(undefined8 *)&(this->InstanceNameToInstance).field_0x40 = 0;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x48 = 0;
  *(undefined8 *)&this->AssetNameToInstance = 0;
  *(undefined8 *)&(this->AssetNameToInstance).field_0x8 = 0;
  *(undefined8 *)&(this->AssetNameToInstance).field_0x20 = 0;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x28 = 0;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x34 = 0;
  *(undefined8 *)&(this->AssetNameToInstance).field_0x40 = 0;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x48 = 0;
  (this->RootExternalDataLayerInstance).field0_0x0.DebugPtr = (UExternalDataLayerInstance *)0x0;
  *(undefined8 *)&(this->DataLayerInstances).Elements = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x34 = 0;
  (this->DataLayerInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DataLayerInstances).HashSize = 0;
  *(undefined8 *)&(this->ExternalPackageDataLayerInstances).Elements = 0;
  *(undefined8 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x34 = 0;
  (this->ExternalPackageDataLayerInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExternalPackageDataLayerInstances).HashSize = 0;
  (this->LoadedExternalPackageDataLayerInstances).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LoadedExternalPackageDataLayerInstances).ArrayNum = 0;
  (this->LoadedExternalPackageDataLayerInstances).ArrayMax = 0;
  (this->TransientDataLayerInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientDataLayerInstances).ArrayNum = 0;
  (this->TransientDataLayerInstances).ArrayMax = 0;
  *(undefined8 *)&this->DeprecatedDataLayerNameToDataLayerInstance = 0;
  *(undefined8 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x8 = 0;
  *(undefined8 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x20 = 0;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x28 = 0;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x34 = 0;
  *(undefined8 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x40 = 0;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x48 = 0;
  *(undefined8 *)&(this->WorldDataLayers_DEPRECATED).Elements = 0;
  *(undefined8 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x34 = 0;
  (this->WorldDataLayers_DEPRECATED).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WorldDataLayers_DEPRECATED).HashSize = 0;
  (this->RepActiveDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepActiveDataLayerNames).ArrayNum = 0;
  (this->RepActiveDataLayerNames).ArrayMax = 0;
  (this->RepLoadedDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepLoadedDataLayerNames).ArrayNum = 0;
  (this->RepLoadedDataLayerNames).ArrayMax = 0;
  *(undefined8 *)&(this->ActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->ActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x34 = 0;
  (this->ActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x34 = 0;
  (this->LoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoadedDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LocalActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x34 = 0;
  (this->LocalActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LocalActiveDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LocalLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x34 = 0;
  (this->LocalLoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LocalLoadedDataLayerNames).HashSize = 0;
  (this->RepEffectiveActiveDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepEffectiveActiveDataLayerNames).ArrayNum = 0;
  (this->RepEffectiveActiveDataLayerNames).ArrayMax = 0;
  (this->RepEffectiveLoadedDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepEffectiveLoadedDataLayerNames).ArrayNum = 0;
  (this->RepEffectiveLoadedDataLayerNames).ArrayMax = 0;
  FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates(&this->EffectiveStates);
  return this;
}

// AWorldDataLayers @ 148a41040

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWorldDataLayers * __thiscall
AWorldDataLayers::AWorldDataLayers(AWorldDataLayers *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  FName local_res8;
  
  pFVar3 = ::FName::FName(&local_res8,L"Sprite");
  FVar2 = *pFVar3;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AInfo__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  *(undefined8 *)&this->InstanceNameToInstance = 0;
  *(undefined8 *)&(this->InstanceNameToInstance).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceNameToInstance).field_0x20 = 0;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x28 = 0;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x34 = 0;
  *(undefined8 *)&(this->InstanceNameToInstance).field_0x40 = 0;
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x48 = 0;
  *(undefined8 *)&this->AssetNameToInstance = 0;
  *(undefined8 *)&(this->AssetNameToInstance).field_0x8 = 0;
  *(undefined8 *)&(this->AssetNameToInstance).field_0x20 = 0;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x28 = 0;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x34 = 0;
  *(undefined8 *)&(this->AssetNameToInstance).field_0x40 = 0;
  *(undefined4 *)&(this->AssetNameToInstance).field_0x48 = 0;
  (this->RootExternalDataLayerInstance).field0_0x0.DebugPtr = (UExternalDataLayerInstance *)0x0;
  *(undefined8 *)&(this->DataLayerInstances).Elements = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DataLayerInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataLayerInstances).Elements.field_0x34 = 0;
  (this->DataLayerInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DataLayerInstances).HashSize = 0;
  *(undefined8 *)&(this->ExternalPackageDataLayerInstances).Elements = 0;
  *(undefined8 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalPackageDataLayerInstances).Elements.field_0x34 = 0;
  (this->ExternalPackageDataLayerInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExternalPackageDataLayerInstances).HashSize = 0;
  (this->LoadedExternalPackageDataLayerInstances).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LoadedExternalPackageDataLayerInstances).ArrayNum = 0;
  (this->LoadedExternalPackageDataLayerInstances).ArrayMax = 0;
  (this->TransientDataLayerInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientDataLayerInstances).ArrayNum = 0;
  (this->TransientDataLayerInstances).ArrayMax = 0;
  *(undefined8 *)&this->DeprecatedDataLayerNameToDataLayerInstance = 0;
  *(undefined8 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x8 = 0;
  *(undefined8 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x20 = 0;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x28 = 0;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x34 = 0;
  *(undefined8 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x40 = 0;
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x48 = 0;
  *(undefined8 *)&(this->WorldDataLayers_DEPRECATED).Elements = 0;
  *(undefined8 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WorldDataLayers_DEPRECATED).Elements.field_0x34 = 0;
  (this->WorldDataLayers_DEPRECATED).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->WorldDataLayers_DEPRECATED).HashSize = 0;
  (this->RepActiveDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepActiveDataLayerNames).ArrayNum = 0;
  (this->RepActiveDataLayerNames).ArrayMax = 0;
  (this->RepLoadedDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepLoadedDataLayerNames).ArrayNum = 0;
  (this->RepLoadedDataLayerNames).ArrayMax = 0;
  *(undefined8 *)&(this->ActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->ActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveDataLayerNames).Elements.field_0x34 = 0;
  (this->ActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ActiveDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LoadedDataLayerNames).Elements.field_0x34 = 0;
  (this->LoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoadedDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LocalActiveDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalActiveDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalActiveDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalActiveDataLayerNames).Elements.field_0x34 = 0;
  (this->LocalActiveDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LocalActiveDataLayerNames).HashSize = 0;
  *(undefined8 *)&(this->LocalLoadedDataLayerNames).Elements = 0;
  *(undefined8 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalLoadedDataLayerNames).Elements.field_0x34 = 0;
  (this->LocalLoadedDataLayerNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LocalLoadedDataLayerNames).HashSize = 0;
  (this->RepEffectiveActiveDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepEffectiveActiveDataLayerNames).ArrayNum = 0;
  (this->RepEffectiveActiveDataLayerNames).ArrayMax = 0;
  (this->RepEffectiveLoadedDataLayerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RepEffectiveLoadedDataLayerNames).ArrayNum = 0;
  (this->RepEffectiveLoadedDataLayerNames).ArrayMax = 0;
  FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates(&this->EffectiveStates);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 8;
  this->DataLayersStateEpoch = 0;
  AActor::SetNetDormancy((AActor *)this,DORM_Initial);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  return this;
}

// ~AWorldDataLayers @ 148a43e50

void __thiscall AWorldDataLayers::~AWorldDataLayers(AWorldDataLayers *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__AInfo__;
  this->_padding_ = (longlong)&_vftable__for__IDataLayerInstanceProvider__;
  FWorldDataLayersEffectiveStates::~FWorldDataLayersEffectiveStates(&this->EffectiveStates);
  pFVar1 = (this->RepEffectiveLoadedDataLayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepEffectiveActiveDataLayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->LocalLoadedDataLayerNames).HashSize = 0;
  FVar2 = (this->LocalLoadedDataLayerNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LocalLoadedDataLayerNames).Elements);
  (this->LocalActiveDataLayerNames).HashSize = 0;
  FVar2 = (this->LocalActiveDataLayerNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LocalActiveDataLayerNames).Elements);
  (this->LoadedDataLayerNames).HashSize = 0;
  FVar2 = (this->LoadedDataLayerNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadedDataLayerNames).Elements);
  (this->ActiveDataLayerNames).HashSize = 0;
  FVar2 = (this->ActiveDataLayerNames).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ActiveDataLayerNames).Elements);
  pFVar1 = (this->RepLoadedDataLayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepActiveDataLayerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WorldDataLayers_DEPRECATED).HashSize = 0;
  FVar2 = (this->WorldDataLayers_DEPRECATED).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UDEPRECATED_DataLayer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UDEPRECATED_DataLayer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->WorldDataLayers_DEPRECATED).Elements);
  *(undefined4 *)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x48 = 0;
  pvVar3 = *(void **)&(this->DeprecatedDataLayerNameToDataLayerInstance).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeprecatedDataLayerNameToDataLayerInstance);
  pFVar1 = (this->TransientDataLayerInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadedExternalPackageDataLayerInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ExternalPackageDataLayerInstances).HashSize = 0;
  FVar2 = (this->ExternalPackageDataLayerInstances).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExternalPackageDataLayerInstances).Elements);
  (this->DataLayerInstances).HashSize = 0;
  FVar2 = (this->DataLayerInstances).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DataLayerInstances).Elements);
  *(undefined4 *)&(this->AssetNameToInstance).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AssetNameToInstance).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UDataLayerInstance_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UDataLayerInstance_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UDataLayerInstance_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetNameToInstance);
  *(undefined4 *)&(this->InstanceNameToInstance).field_0x48 = 0;
  pvVar3 = *(void **)&(this->InstanceNameToInstance).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UDataLayerInstance_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UDataLayerInstance_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UDataLayerInstance_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceNameToInstance);
  this->_padding_ = (longlong)&___7IDataLayerInstanceProvider__6B_;
  AInfo::~AInfo((AInfo *)this);
  return;
}

// operator() @ 148a45880

bool __thiscall
`AWorldDataLayers::GetDataLayerFromLabel'::__l2::<lambda_1>::operator()
          (void *this,UDataLayerInstance *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  void *local_18 [2];
  
  puVar2 = *(undefined8 **)this;
  puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_18);
  iVar3 = *(int *)(puVar2 + 1);
  iVar1 = *(int *)(puVar4 + 1);
  if (iVar1 == iVar3) {
    if (iVar1 < 2) {
      bVar5 = true;
    }
    else {
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar4,(wchar_t *)*puVar2);
      bVar5 = iVar3 == 0;
    }
  }
  else {
    bVar5 = iVar3 + iVar1 == 1;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (bVar5) {
    **(undefined8 **)((longlong)this + 8) = param_1;
    return false;
  }
  return true;
}

// operator() @ 148a45c00

void __thiscall
`AWorldDataLayers::DumpDataLayers'::__l5::<lambda_1>::operator()
          (void *this,wchar_t *param_1,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  FName FVar5;
  FOutputDevice *this_00;
  code *pcVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  UDataLayerInstance **ppUVar9;
  FWeakObjectPtr *this_01;
  UDataLayerInstance *pUVar10;
  longlong lVar11;
  int iVar12;
  FName *pFVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res18 [8];
  int local_res20;
  void *local_a8 [2];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (*(int *)&(param_2->Elements).field_0x8 == *(int *)&(param_2->Elements).field_0x34) {
    return;
  }
  FOutputDevice::LogfImpl(*(FOutputDevice **)((longlong)this + 8),L" - %s Data Layers:");
  iVar3 = *(int *)&(param_2->Elements).field_0x28;
  puVar2 = &(param_2->Elements).field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar11 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_148a45ccd;
      uVar15 = puVar17[lVar11 + 1];
    }
    uStack_8c = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_7c = local_78 + -1 + local_res20;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_148a45ccd:
  uVar15 = *(uint *)&(param_2->Elements).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_70 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_2;
  local_88 = puVar2;
  iStack_74 = iStack_7c;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar12 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148a45dd1;
      uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_148a45dd1:
  do {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar7 == param_2))
    {
      return;
    }
    pFVar13 = (FName *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10)
    ;
    FVar5 = *pFVar13;
    if (FVar5 != (FName)0x0) {
      lVar11 = *(longlong *)this;
      ppUVar9 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                        *)(lVar11 + 0x2c8),FVar5);
      if (ppUVar9 == (UDataLayerInstance **)0x0) {
        this_01 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                   ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                           *)(lVar11 + 0x430),*pFVar13)->WeakPtr;
        if (this_01 == (FWeakObjectPtr *)0x0) goto LAB_148a45e9b;
        pUVar10 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_01);
      }
      else {
        pUVar10 = *ppUVar9;
      }
      if (pUVar10 != (UDataLayerInstance *)0x0) {
        this_00 = *(FOutputDevice **)((longlong)this + 8);
        (**(code **)(pUVar10->_padding_ + 0x2e0))(pUVar10,local_a8);
        FOutputDevice::LogfImpl(this_00,L"    - %s");
        if (local_a8[0] != (void *)0x0) {
          FMemory::Free(local_a8[0]);
        }
      }
    }
LAB_148a45e9b:
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// operator() @ 148a465f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
`AWorldDataLayers::InitializeDataLayerRuntimeStates'::__l15::<lambda_1>::operator()
          (void *this,UDataLayerInstance *param_1)

{
  int *piVar1;
  AActor *this_00;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  UDataLayerInstance *pUVar5;
  UDataLayerInstance *pUVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  ENetMode EVar11;
  int iVar12;
  bool *pbVar13;
  longlong lVar14;
  FName *pFVar15;
  longlong lVar16;
  FName local_res8;
  UDataLayerInstance *local_res10;
  FName local_res18;
  undefined1 local_res20 [8];
  undefined1 local_38 [24];
  
  this_00 = *(AActor **)this;
  local_res10 = param_1;
  cVar7 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  if (cVar7 == '\0') {
    return true;
  }
  EVar11 = AActor::InternalGetNetMode(this_00);
  cVar7 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
  if (cVar7 == '\0') {
    (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    if (EVar11 == NM_Client) {
      return true;
    }
  }
  else if ((EVar11 != NM_Standalone) && (EVar11 != NM_Client)) {
    return true;
  }
  cVar7 = (**(code **)(local_res10->_padding_ + 0x2c8))();
  cVar8 = (**(code **)(local_res10->_padding_ + 0x2d0))();
  if ((cVar7 == '\0') && (cVar8 == '\0')) {
    bVar9 = false;
    lVar14 = 0x540;
  }
  else {
    bVar9 = true;
    lVar14 = 0x5e0;
  }
  lVar2 = *(longlong *)this;
  lVar16 = 0x590;
  if (!bVar9) {
    lVar16 = 0x4f0;
  }
  cVar7 = (**(code **)(local_res10->_padding_ + 0x2c0))();
  pUVar5 = local_res10;
  if (cVar7 == '\0') {
    return true;
  }
  cVar7 = (**(code **)(local_res10->_padding_ + 0x2c0))(local_res10);
  pUVar6 = local_res10;
  if ((cVar7 == '\0') || (pUVar5->InitialRuntimeState != Loaded)) {
    cVar7 = (**(code **)(local_res10->_padding_ + 0x2c0))(local_res10);
    if ((cVar7 == '\0') || (pUVar6->InitialRuntimeState != Activated)) goto LAB_148a46760;
    pbVar13 = (bool *)(**(code **)(local_res10->_padding_ + 800))(local_res10,local_38);
    pFVar15 = &local_res18;
  }
  else {
    pbVar13 = (bool *)(**(code **)(local_res10->_padding_ + 800))(local_res10,local_res20);
    pFVar15 = &local_res8;
    lVar16 = lVar14;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(lVar2 + lVar16),pFVar15,
             pbVar13);
LAB_148a46760:
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  if (((pFVar3->Data <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    uVar10 = (*pcVar4)();
    return (bool)uVar10;
  }
  iVar12 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar12 + 1;
  *(UDataLayerInstance **)(pFVar3->Data + (longlong)iVar12 * 8) = local_res10;
  return true;
}

// AddExternalDataLayerInstance @ 148a494d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
AWorldDataLayers::AddExternalDataLayerInstance
          (AWorldDataLayers *this,UExternalDataLayerInstance *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TObjectPtr<UDataLayerInstance>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  UDataLayerInstance *pUVar8;
  code *pcVar9;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar16;
  UClass *pUVar17;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  EDataLayerRuntimeState EVar23;
  undefined1 *puVar24;
  uint *puVar25;
  undefined1 local_res8 [8];
  UExternalDataLayerInstance *local_118;
  UDataLayerInstance *local_110;
  TPairInitializer<FString_&&,UDataLayerInstance_const_*_const_&> local_108;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  undefined8 local_a0;
  UDataLayerInstance **local_98;
  FString *local_90;
  UDataLayerInstance **local_88;
  undefined1 local_80 [8];
  FString local_78;
  FString local_68 [2];
  undefined4 local_3c;
  
  lVar15 = (**(code **)(this->_padding_ + 0x20))();
  if ((lVar15 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsExternalDataLayerWorldDataLayers()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                          ,0x1cb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pTVar3 = &this->TransientDataLayerInstances;
  pFVar18 = (pTVar3->AllocatorInstance).Data;
  pFVar4 = pFVar18 + (longlong)(this->TransientDataLayerInstances).ArrayNum * 8;
  for (; pFVar18 != pFVar4; pFVar18 = pFVar18 + 8) {
    if (*(UExternalDataLayerInstance **)pFVar18 == (UExternalDataLayerInstance *)0x0) {
      bVar11 = param_1 == (UExternalDataLayerInstance *)0x0;
    }
    else {
      bVar11 = *(UExternalDataLayerInstance **)pFVar18 == param_1;
    }
    if (bVar11) {
      return false;
    }
  }
  local_118 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_118) &&
      ((FScriptContainerElement *)&local_118 <
       pFVar4 + (longlong)(this->TransientDataLayerInstances).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  iVar14 = (this->TransientDataLayerInstances).ArrayNum;
  piVar1 = &(this->TransientDataLayerInstances).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->TransientDataLayerInstances).ArrayNum = iVar14 + 1;
  *(UExternalDataLayerInstance **)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 8) =
       local_118;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_118 != (UExternalDataLayerInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_118);
  }
  pTVar16 = GetDataLayerInstancesFromProvider((UDataLayerInstance *)param_1);
  iVar14 = *(int *)&(pTVar16->Elements).field_0x28;
  iStack_f8 = 0;
  local_e0 = 0;
  uStack_f4 = 1;
  puVar2 = &(pTVar16->Elements).field_0x10;
  iStack_e4 = 0;
  if (iVar14 != 0) {
    puVar25 = *(uint **)&(pTVar16->Elements).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar2;
    }
    uVar22 = *puVar25;
    local_e0 = iStack_f8;
    while (uVar22 == 0) {
      iStack_f8 = iStack_f8 + 1;
      local_e0 = local_e0 + 0x20;
      iStack_e4 = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_148a496cf;
      uVar22 = puVar25[iStack_f8];
    }
    uStack_f4 = ~(uVar22 - 1) & uVar22;
    uVar5 = (ulonglong)uStack_f4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_e4 = (int)lVar15 + -1 + local_e0;
    if (iVar14 < iStack_e4) {
      iStack_e4 = iVar14;
    }
  }
LAB_148a496cf:
  uVar22 = *(uint *)&(pTVar16->Elements).field_0x28;
  uStack_dc = local_3c;
  uVar21 = uVar22 & 0xffffffe0;
  iStack_d8 = *(int *)&(pTVar16->Elements).field_0x8 - *(int *)&(pTVar16->Elements).field_0x34;
  uStack_e8 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar22 >> 5;
  TStack_c8._28_4_ = local_3c;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_108.Value = (UDataLayerInstance **)pTVar16;
  local_f0 = puVar2;
  local_d0 = pTVar16;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar22 < 0) || (iVar14 < (int)uVar22)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  uVar6 = *(uint *)&(pTVar16->Elements).field_0x28;
  if (uVar22 != uVar6) {
    puVar7 = *(undefined1 **)&(pTVar16->Elements).field_0x20;
    puVar24 = puVar2;
    if (puVar7 != (undefined1 *)0x0) {
      puVar24 = puVar7;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar20 * 4);
    while (uVar22 == 0) {
      iVar20 = iVar20 + 1;
      uVar21 = uVar21 + 0x20;
      uVar22 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar20) goto LAB_148a497e0;
      uVar22 = *(uint *)(puVar24 + (longlong)iVar20 * 4);
    }
    uVar5 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar22 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar6 < (int)uVar22) {
      uVar22 = uVar6;
    }
  }
LAB_148a497e0:
  do {
    pTVar10 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c8.CurrentBitIndex == uVar22) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar10 == pTVar16)
       ) {
      return true;
    }
    pUVar8 = *(UDataLayerInstance **)
              (*(longlong *)&pTVar10->Elements + (longlong)TStack_c8.CurrentBitIndex * 0x10);
    cVar13 = (**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8);
    if (cVar13 == '\0') {
      EVar23 = Unloaded;
    }
    else {
      EVar23 = pUVar8->InitialRuntimeState;
    }
    SetDataLayerRuntimeState(this,pUVar8,EVar23,false);
    local_110 = pUVar8;
    local_a0 = (**(code **)(pUVar8->_padding_ + 800))(pUVar8,local_80);
    local_98 = &local_110;
    TSet<TTuple<FName,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,UDataLayerInstance_const_*_const_&>_>
              ((TSet<TTuple<FName,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
                *)&this->InstanceNameToInstance,
               (TPairInitializer<FName_&&,UDataLayerInstance_const_*_const_&> *)&stack0x00000020,
               (bool *)&local_a0);
    pUVar8 = local_110;
    if (local_110 != (UDataLayerInstance *)0x0) {
      pUVar17 = UDataLayerInstanceWithAsset::StaticClass();
      iVar14 = (int)pUVar17->_padding_;
      if ((iVar14 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar17->_padding_)) {
        this_00 = (UObjectBaseUtility *)(**(code **)(pUVar8->_padding_ + 0x318))(pUVar8);
        if (this_00 == (UObjectBaseUtility *)0x0) {
          if ((byte)LogWorldPartition._0_1_ < 3) goto LAB_148a4995f;
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar8,local_68,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
          FVar19.Data = local_68[0].Data.AllocatorInstance.Data;
        }
        else {
          local_90 = UObjectBaseUtility::GetPathName(this_00,&local_78,(UObject *)0x0);
          local_88 = &local_110;
          TSet<TTuple<FString,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,UDataLayerInstance_const_*_const_&>_>
                    ((TSet<TTuple<FString,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
                      *)&this->AssetNameToInstance,&local_108,(bool *)&local_90);
          FVar19.Data = local_78.Data.AllocatorInstance.Data;
        }
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
      }
    }
LAB_148a4995f:
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// CanChangeDataLayerRuntimeState @ 148a4c610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AWorldDataLayers::CanChangeDataLayerRuntimeState
          (AWorldDataLayers *this,UDataLayerInstance *param_1,
          ESetDataLayerRuntimeStateError *param_2)

{
  char cVar1;
  ENetMode EVar2;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  if (cVar1 == '\0') {
    if (param_2 != (ESetDataLayerRuntimeStateError *)0x0) {
      *param_2 = NotRuntime;
      return false;
    }
  }
  else {
    EVar2 = AActor::InternalGetNetMode((AActor *)this);
    cVar1 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      if (EVar2 != NM_Client) {
        return true;
      }
      if (param_2 != (ESetDataLayerRuntimeStateError *)0x0) {
        *param_2 = AuthoritativeFromClient - (cVar1 != '\0');
      }
    }
    else {
      if ((EVar2 == NM_Standalone) || (EVar2 == NM_Client)) {
        return true;
      }
      if (param_2 != (ESetDataLayerRuntimeStateError *)0x0) {
        *param_2 = ClientOnlyFromServer;
        return false;
      }
    }
  }
  return false;
}

// ContainsDataLayer @ 148a4da10

bool __thiscall
AWorldDataLayers::ContainsDataLayer(AWorldDataLayers *this,UDEPRECATED_DataLayer *param_1)

{
  int iVar1;
  uint uVar2;
  TObjectPtr<UDEPRECATED_DataLayer_const_>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UDEPRECATED_DataLayer *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDEPRECATED_DataLayer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar1 = TSet<TObjectPtr<UDEPRECATED_DataLayer>,DefaultKeyFuncs<TObjectPtr<UDEPRECATED_DataLayer>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UDEPRECATED_DataLayer_const_>_>
                    (&this->WorldDataLayers_DEPRECATED,uVar2 >> 0x10 ^ uVar2,
                     (TObjectPtr<UDEPRECATED_DataLayer_const_> *)&local_res8.ObjectPtr);
  return iVar1 != -1;
}

// ContainsDataLayer @ 148a4dab0

bool __thiscall
AWorldDataLayers::ContainsDataLayer(AWorldDataLayers *this,UDataLayerInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  TObjectPtr<UDataLayerInstance_const_>_u_0 local_res8;
  
  pTVar4 = (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
            *)(**(code **)(this->_padding_ + 0x10))();
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UDataLayerInstance *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UDataLayerInstance *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  iVar2 = TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<UDataLayerInstance_const_>_>
                    (pTVar4,uVar5,(TObjectPtr<UDataLayerInstance_const_> *)&local_res8.ObjectPtr);
  if (iVar2 == -1) {
    pFVar7 = (this->TransientDataLayerInstances).AllocatorInstance.Data;
    iVar2 = (this->TransientDataLayerInstances).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 8;
    for (pFVar6 = pFVar7; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
      if (*(UDataLayerInstance **)pFVar6 == (UDataLayerInstance *)0x0) {
        bVar8 = param_1 == (UDataLayerInstance *)0x0;
      }
      else {
        bVar8 = *(UDataLayerInstance **)pFVar6 == param_1;
      }
      if (bVar8) {
        return true;
      }
    }
    if (iVar2 == 0) {
      return false;
    }
    while( true ) {
      if ((this->TransientDataLayerInstances).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UDataLayerInstance>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar7 == pFVar1) {
        return false;
      }
      pTVar4 = GetDataLayerInstancesFromProvider(*(UDataLayerInstance **)pFVar7);
      local_res8.DebugPtr = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (param_1 != (UDataLayerInstance *)0x0) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UDataLayerInstance *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
      }
      iVar3 = TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UDataLayerInstance_const_>_>
                        (pTVar4,uVar5,(TObjectPtr<UDataLayerInstance_const_> *)&local_res8.ObjectPtr
                        );
      if (iVar3 != -1) break;
      pFVar7 = pFVar7 + 8;
    }
  }
  return true;
}

// DumpDataLayerRecursively @ 148a51450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AWorldDataLayers::DumpDataLayerRecursively
          (AWorldDataLayers *this,UDataLayerInstance *param_1,FString *param_2,
          FOutputDevice *param_3)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  bool bVar3;
  EDataLayerRuntimeState EVar4;
  UWorld *this_00;
  FName *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_58 [16];
  AWorldDataLayers *local_48;
  FString *local_40;
  FOutputDevice *local_38;
  
  cVar2 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  if (cVar2 == '\0') {
    ::FString::FString((FString *)local_58,"");
  }
  else {
    this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
    bVar3 = UWorld::IsGameWorld(this_00);
    if (bVar3) {
      pFVar5 = (FName *)(**(code **)(param_1->_padding_ + 800))(param_1,local_res8);
      EVar4 = GetDataLayerRuntimeStateByName(this,*pFVar5);
      GetDataLayerRuntimeStateName(EVar4);
      pFVar5 = (FName *)(**(code **)(param_1->_padding_ + 800))(param_1,local_res10);
      EVar4 = FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
                        (&this->EffectiveStates,*pFVar5);
      GetDataLayerRuntimeStateName(EVar4);
      ::FString::PrintfImpl((FString *)local_58,L"(Effective State = %s | Target State = %s)");
    }
    else {
      cVar2 = (**(code **)(param_1->_padding_ + 0x2c0))();
      if (cVar2 == '\0') {
        EVar4 = Unloaded;
      }
      else {
        EVar4 = param_1->InitialRuntimeState;
      }
      GetDataLayerRuntimeStateName(EVar4);
      ::FString::PrintfImpl((FString *)local_58,L"(Initial State = %s)");
    }
  }
  (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_48);
  FOutputDevice::LogfImpl(param_3,L" %s%s%s %s");
  if (local_48 != (AWorldDataLayers *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  local_58._8_8_ = &local_48;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`AWorldDataLayers::DumpDataLayerRecursively'::__l2::<lambda_2>,bool,UDataLayerInstance_const_*>
       ::Call;
  local_48 = this;
  local_40 = param_2;
  local_38 = param_3;
  UDataLayerInstance::ForEachChild
            (param_1,(TFunctionRef<bool___cdecl(UDataLayerInstance_const_*)> *)local_58);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// DumpDataLayers @ 148a51640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldDataLayers::DumpDataLayers(AWorldDataLayers *this,FOutputDevice *param_1)

{
  bool bVar1;
  UWorld *this_00;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  FName local_res8;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  FOutputDevice::Log(param_1,L"====================================================");
  local_res8 = (FName)this->_padding_;
  ::FName::ToString(&local_res8,(FString *)local_28);
  FOutputDevice::LogfImpl(param_1,L" Data Layers for %s");
  if ((AWorldDataLayers *)local_28._0_8_ != (AWorldDataLayers *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  FOutputDevice::Log(param_1,L"====================================================");
  FOutputDevice::Log(param_1,L"");
  this_00 = AActor::GetWorld((AActor *)this);
  bVar1 = UWorld::IsGameWorld(this_00);
  if ((bVar1) &&
     ((local_28._0_8_ = this, local_28._8_8_ = param_1,
      pTVar2 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames
                         (&this->EffectiveStates),
      *(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34 ||
      (pTVar2 = FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames
                          (&this->EffectiveStates),
      *(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34)))) {
    FOutputDevice::Log(param_1,L"----------------------------------------------------");
    FOutputDevice::Log(param_1,L" Data Layers Runtime States");
    pTVar2 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames
                       (&this->EffectiveStates);
    `AWorldDataLayers::DumpDataLayers'::__l5::<lambda_1>::operator()(local_28,L"Loaded",pTVar2);
    pTVar2 = FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames
                       (&this->EffectiveStates);
    `AWorldDataLayers::DumpDataLayers'::__l5::<lambda_1>::operator()(local_28,L"Active",pTVar2);
    FOutputDevice::Log(param_1,L"----------------------------------------------------");
    FOutputDevice::Log(param_1,L"");
  }
  FOutputDevice::Log(param_1,L"----------------------------------------------------");
  FOutputDevice::Log(param_1,L" Data Layers Hierarchy");
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`AWorldDataLayers::DumpDataLayers'::__l2::<lambda_2>,bool,UDataLayerInstance_*>
             ::Call;
  local_10 = local_28;
  local_28._0_8_ = this;
  local_28._8_8_ = param_1;
  ForEachDataLayerInstance(this,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_18);
  FOutputDevice::Log(param_1,L"----------------------------------------------------");
  return;
}

// ForEachDataLayerInstance @ 148a533c0

void __thiscall
AWorldDataLayers::ForEachDataLayerInstance
          (AWorldDataLayers *this,TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  char cVar12;
  longlong *plVar13;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint uVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158 [4];
  uint local_154;
  FScriptContainerElement *local_150;
  longlong *local_148;
  int iStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  longlong local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x18))();
  iVar4 = (int)plVar13[5];
  iStack_140 = 0;
  local_128 = 0;
  uStack_13c = 1;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar13 + 2);
  iStack_12c = 0;
  if (iVar4 != 0) {
    pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = pTVar1;
    }
    uVar20 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    while (uVar20 == 0) {
      lVar15 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      iStack_12c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140) goto LAB_148a5346e;
      uVar20 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uStack_13c = -uVar20 & uVar20;
    uVar16 = (ulonglong)uStack_13c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_118 = (int)lVar15;
    iStack_12c = local_128 + -1 + local_118;
    if (iVar4 < iStack_12c) {
      iStack_12c = iVar4;
    }
  }
LAB_148a5346e:
  uVar20 = *(uint *)(plVar13 + 5);
  uStack_124 = local_44;
  uVar19 = uVar20 & 0xffffffe0;
  iStack_120 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
  TStack_b8._padding_ = CONCAT44(uStack_13c,iStack_140);
  uStack_130 = 0xffffffff;
  TStack_b8.CurrentBitIndex = iStack_12c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar20 >> 5;
  TStack_b8._28_4_ = local_44;
  TStack_b8.BaseBitIndex = local_128;
  uStack_98 = CONCAT44(uStack_11c,iStack_120);
  local_148 = plVar13;
  local_138 = pTVar1;
  local_c0 = plVar13;
  TStack_b8.Array = pTVar1;
  if ((((int)uVar20 < 0) || (iVar4 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar3 = *(uint *)(plVar13 + 5);
  if (uVar20 != uVar3) {
    pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)plVar13[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar13[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = pTVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) &
             *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar20 == 0) {
      lVar15 = (longlong)iVar17;
      uVar19 = uVar19 + 0x20;
      iVar17 = iVar17 + 1;
      uVar20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148a53580;
      uVar20 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uVar16 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_114 = (int)lVar15;
    uVar20 = local_114 + -1 + uVar19;
    if ((int)uVar3 < (int)uVar20) {
      uVar20 = uVar3;
    }
  }
LAB_148a53580:
  while( true ) {
    plVar9 = local_c0;
    if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_b8.CurrentBitIndex == uVar20) && (TStack_b8.Array == pTVar1)) &&
       (plVar9 == plVar13)) break;
    lVar15 = *(longlong *)(*plVar9 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
    if ((lVar15 != 0) &&
       (local_108 = lVar15,
       cVar12 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_108), cVar12 == '\0')
       ) {
      return;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  local_154 = (this->TransientDataLayerInstances).ArrayNum;
  uVar16 = (ulonglong)(int)local_154;
  pFVar18 = (this->TransientDataLayerInstances).AllocatorInstance.Data;
  local_f8 = pFVar18 + uVar16 * 8;
  do {
    pFVar8 = local_f8;
    local_150 = pFVar18;
    if ((this->TransientDataLayerInstances).ArrayNum != (int)uVar16) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDataLayerInstance>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar18 == pFVar8) {
      return;
    }
    pTVar14 = GetDataLayerInstancesFromProvider(*(UDataLayerInstance **)pFVar18);
    iVar4 = *(int *)&(pTVar14->Elements).field_0x28;
    iStack_e8 = 0;
    local_d0 = 0;
    uStack_e4 = 1;
    local_e0 = &(pTVar14->Elements).field_0x10;
    iStack_d4 = 0;
    if (iVar4 != 0) {
      puVar5 = *(uint **)&(pTVar14->Elements).field_0x20;
      puVar23 = (uint *)local_e0;
      if (puVar5 != (uint *)0x0) {
        puVar23 = puVar5;
      }
      uVar20 = *puVar23;
      while (uVar20 == 0) {
        lVar15 = (longlong)iStack_e8;
        local_d0 = local_d0 + 0x20;
        iStack_e8 = iStack_e8 + 1;
        iStack_d4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_148a536cd;
        uVar20 = puVar23[lVar15 + 1];
      }
      uStack_e4 = -uVar20 & uVar20;
      uVar16 = (ulonglong)uStack_e4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_110 = (int)lVar15;
      iStack_d4 = local_110 + -1 + local_d0;
      if (iVar4 < iStack_d4) {
        iStack_d4 = iVar4;
      }
    }
LAB_148a536cd:
    uVar20 = *(uint *)&(pTVar14->Elements).field_0x28;
    puVar2 = &(pTVar14->Elements).field_0x10;
    iStack_cc = iStack_12c;
    iStack_c8 = *(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34;
    uVar19 = uVar20 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uStack_e4,iStack_e8);
    uStack_d8 = 0xffffffff;
    TStack_88.CurrentBitIndex = iStack_d4;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar20 >> 5;
    TStack_88._28_4_ = iStack_12c;
    TStack_88.BaseBitIndex = local_d0;
    uStack_68 = CONCAT44(uStack_c4,iStack_c8);
    local_f0 = pTVar14;
    local_90 = pTVar14;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0;
    if ((((int)uVar20 < 0) || (iVar4 < (int)uVar20)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(uint *)&(pTVar14->Elements).field_0x28;
    if (uVar20 != uVar3) {
      puVar6 = *(undefined1 **)&(pTVar14->Elements).field_0x20;
      puVar22 = puVar2;
      if (puVar6 != (undefined1 *)0x0) {
        puVar22 = puVar6;
      }
      uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
      while (uVar20 == 0) {
        lVar15 = (longlong)iVar17;
        uVar19 = uVar19 + 0x20;
        iVar17 = iVar17 + 1;
        uVar20 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_148a537d0;
        uVar20 = *(uint *)(puVar22 + lVar15 * 4 + 4);
      }
      uVar16 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_10c = (int)lVar15;
      uVar20 = local_10c + -1 + uVar19;
      if ((int)uVar3 < (int)uVar20) {
        uVar20 = uVar3;
      }
    }
LAB_148a537d0:
    while( true ) {
      pTVar10 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        local_158[0] = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
      }
      if (((TStack_88.CurrentBitIndex == uVar20) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar10 == pTVar14)) break;
      lVar15 = *(longlong *)
                (*(longlong *)&pTVar10->Elements + (longlong)TStack_88.CurrentBitIndex * 0x10);
      if ((lVar15 != 0) &&
         (local_100 = lVar15,
         cVar12 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_100),
         cVar12 == '\0')) {
        return;
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    uVar16 = (ulonglong)local_154;
    pFVar18 = local_150 + 8;
  } while( true );
}

// ForEachDataLayerInstance @ 148a53880

void __thiscall
AWorldDataLayers::ForEachDataLayerInstance
          (AWorldDataLayers *this,TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *param_1)

{
  TFunctionRef<bool___cdecl(UDataLayerInstance_*)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  ForEachDataLayerInstance(this,&local_18);
  return;
}

// GetDataLayerEffectiveRuntimeStateByName @ 148a55330

EDataLayerRuntimeState __thiscall
AWorldDataLayers::GetDataLayerEffectiveRuntimeStateByName(AWorldDataLayers *this,FName param_1)

{
  EDataLayerRuntimeState EVar1;
  
  EVar1 = FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
                    (&this->EffectiveStates,param_1);
  return EVar1;
}

// GetDataLayerFromLabel @ 148a55860

UDataLayerInstance * __thiscall
AWorldDataLayers::GetDataLayerFromLabel(AWorldDataLayers *this,FName *param_1)

{
  UDataLayerInstance *pUVar1;
  FString *this_00;
  FString *this_01;
  FScriptContainerElement *pFVar2;
  UDataLayerInstance *local_res18 [2];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  FString local_28;
  FString local_18;
  
  this_00 = ::FName::ToString(param_1,&local_18);
  this_01 = ::FString::TrimStartAndEnd(this_00,(FString *)local_38);
  ::FString::Replace(this_01,(FString *)local_48,L"\"",L"",IgnoreCase);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar2 = (this_00->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (FScriptContainerElement *)L"";
  if (local_48._8_4_ != 0) {
    pFVar2 = (FScriptContainerElement *)local_48._0_8_;
  }
  ::FString::FString(&local_28,(wchar_t *)pFVar2);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  local_48._0_8_ = &local_28;
  local_res18[0] = (UDataLayerInstance *)0x0;
  local_48._8_8_ = local_res18;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`AWorldDataLayers::GetDataLayerFromLabel'::__l2::<lambda_1>,bool,UDataLayerInstance_*>
       ::Call;
  local_38._8_8_ = local_48;
  ForEachDataLayerInstance(this,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)local_38);
  pUVar1 = local_res18[0];
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pUVar1;
}

// GetDataLayerInstance @ 148a55ce0

UDataLayerInstance * __thiscall
AWorldDataLayers::GetDataLayerInstance(AWorldDataLayers *this,FActorDataLayer *param_1)

{
  UDataLayerInstance **ppUVar1;
  FWeakObjectPtr *this_00;
  UDataLayerInstance *pUVar2;
  
  if (param_1->Name != (FName)0x0) {
    ppUVar1 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                      *)&this->InstanceNameToInstance,param_1->Name);
    if (ppUVar1 != (UDataLayerInstance **)0x0) {
      return *ppUVar1;
    }
    this_00 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
               ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                       *)&this->DeprecatedDataLayerNameToDataLayerInstance,param_1->Name)->WeakPtr;
    if (this_00 != (FWeakObjectPtr *)0x0) {
      pUVar2 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_00);
      return pUVar2;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstance @ 148a55cf0

UDataLayerInstance * __thiscall
AWorldDataLayers::GetDataLayerInstance(AWorldDataLayers *this,FName *param_1)

{
  UDataLayerInstance **ppUVar1;
  FWeakObjectPtr *this_00;
  UDataLayerInstance *pUVar2;
  
  if (*param_1 != (FName)0x0) {
    ppUVar1 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                      *)&this->InstanceNameToInstance,*param_1);
    if (ppUVar1 != (UDataLayerInstance **)0x0) {
      return *ppUVar1;
    }
    this_00 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
               ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                       *)&this->DeprecatedDataLayerNameToDataLayerInstance,*param_1)->WeakPtr;
    if (this_00 != (FWeakObjectPtr *)0x0) {
      pUVar2 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_00);
      return pUVar2;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstance @ 148a55d60

UDataLayerInstance * __thiscall
AWorldDataLayers::GetDataLayerInstance(AWorldDataLayers *this,UDataLayerAsset *param_1)

{
  FString *pFVar1;
  UDataLayerInstance **ppUVar2;
  FString local_18;
  
  if (param_1 != (UDataLayerAsset *)0x0) {
    pFVar1 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0)
    ;
    ppUVar2 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&this->AssetNameToInstance,pFVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ppUVar2 != (UDataLayerInstance **)0x0) {
      return *ppUVar2;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceFromAssetName @ 148a55fa0

UDataLayerInstance * __thiscall
AWorldDataLayers::GetDataLayerInstanceFromAssetName(AWorldDataLayers *this,FName *param_1)

{
  FString *pFVar1;
  UDataLayerInstance **ppUVar2;
  FString local_18;
  
  if (*param_1 != (FName)0x0) {
    pFVar1 = ::FName::ToString(param_1,&local_18);
    ppUVar2 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&this->AssetNameToInstance,pFVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (ppUVar2 != (UDataLayerInstance **)0x0) {
      return *ppUVar2;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceNames @ 148a56190

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
AWorldDataLayers::GetDataLayerInstanceNames
          (AWorldDataLayers *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FActorDataLayer,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UDataLayerInstance **ppUVar9;
  FWeakObjectPtr *this_00;
  UDataLayerInstance *pUVar10;
  FScriptContainerElement *pFVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FName *pFVar13;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar13 = (FName *)(param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar13 + iVar4;
  do {
    if (param_1->ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FActorDataLayer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar13 == pFVar2) {
      return __return_storage_ptr__;
    }
    if (*pFVar13 != (FName)0x0) {
      ppUVar9 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                        *)&this->InstanceNameToInstance,*pFVar13);
      if (ppUVar9 == (UDataLayerInstance **)0x0) {
        this_00 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                   ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                           *)&this->DeprecatedDataLayerNameToDataLayerInstance,*pFVar13)->WeakPtr;
        if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_148a56312;
        pUVar10 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_00);
      }
      else {
        pUVar10 = *ppUVar9;
      }
      if (pUVar10 != (UDataLayerInstance *)0x0) {
        pFVar11 = (FScriptContainerElement *)
                  (**(code **)(pUVar10->_padding_ + 800))(pUVar10,local_res18);
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 8)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar11;
      }
    }
LAB_148a56312:
    pFVar13 = pFVar13 + 1;
  } while( true );
}

// GetDataLayerInstances @ 148a56460

TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
* __thiscall AWorldDataLayers::GetDataLayerInstances(AWorldDataLayers *this)

{
  return (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
          *)&this->_padding_;
}

// GetDataLayerInstances @ 148a56470

TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
* __thiscall AWorldDataLayers::GetDataLayerInstances(AWorldDataLayers *this)

{
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148a56473. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
            *)(**(code **)(this->_padding_ + 0x18))();
  return pTVar1;
}

// GetDataLayerInstances @ 148a56480

TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> * __thiscall
AWorldDataLayers::GetDataLayerInstances
          (AWorldDataLayers *this,
          TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FActorDataLayer,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UDataLayerInstance **ppUVar9;
  FWeakObjectPtr *this_00;
  TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FName *pFVar11;
  undefined1 local_res10 [8];
  UDataLayerInstance *local_38 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar11 = (FName *)(param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar11 + iVar4;
LAB_148a564e8:
  do {
    if (param_1->ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FActorDataLayer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar2) {
      return __return_storage_ptr__;
    }
    if (*pFVar11 == (FName)0x0) {
LAB_148a565fb:
      local_38[0] = (UDataLayerInstance *)0x0;
    }
    else {
      ppUVar9 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                        *)&this->InstanceNameToInstance,*pFVar11);
      if (ppUVar9 == (UDataLayerInstance **)0x0) {
        this_00 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                   ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                           *)&this->DeprecatedDataLayerNameToDataLayerInstance,*pFVar11)->WeakPtr;
        if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_148a565fb;
        local_38[0] = (UDataLayerInstance *)FWeakObjectPtr::Get(this_00);
      }
      else {
        local_38[0] = *ppUVar9;
      }
      if (local_38[0] != (UDataLayerInstance *)0x0) {
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar5 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 8)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            pTVar10 = (TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar10;
          }
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        pFVar11 = pFVar11 + 1;
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        *(UDataLayerInstance **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_38[0];
        goto LAB_148a564e8;
      }
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// GetDataLayerInstances @ 148a56640

TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> * __thiscall
AWorldDataLayers::GetDataLayerInstances
          (AWorldDataLayers *this,
          TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  uint uVar2;
  int iVar3;
  UDataLayerInstance **ppUVar4;
  FWeakObjectPtr *this_00;
  FName *pFVar5;
  undefined1 local_res10 [8];
  UDataLayerInstance *local_res18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,
               &__return_storage_ptr__->ArrayMax);
  }
  pFVar5 = (FName *)(param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar5 + iVar3;
LAB_148a566b0:
  do {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar5 == pFVar1) {
      return __return_storage_ptr__;
    }
    if (*pFVar5 == (FName)0x0) {
LAB_148a5671b:
      local_res18 = (UDataLayerInstance *)0x0;
    }
    else {
      ppUVar4 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                        *)&this->InstanceNameToInstance,*pFVar5);
      if (ppUVar4 == (UDataLayerInstance **)0x0) {
        this_00 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                   ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                           *)&this->DeprecatedDataLayerNameToDataLayerInstance,*pFVar5)->WeakPtr;
        if (this_00 == (FWeakObjectPtr *)0x0) goto LAB_148a5671b;
        local_res18 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_00);
      }
      else {
        local_res18 = *ppUVar4;
      }
      if (local_res18 != (UDataLayerInstance *)0x0) {
        TArray<UDataLayerInstance_const_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UDataLayerInstance_const_*_const_&>(__return_storage_ptr__,&local_res18);
        pFVar5 = pFVar5 + 1;
        goto LAB_148a566b0;
      }
    }
    pFVar5 = pFVar5 + 1;
  } while( true );
}

// GetDataLayerRuntimeStateByName @ 148a56ad0

EDataLayerRuntimeState __thiscall
AWorldDataLayers::GetDataLayerRuntimeStateByName(AWorldDataLayers *this,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  EDataLayerRuntimeState EVar5;
  uint uVar6;
  FNameEntryId FVar7;
  char *pcVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  
  FVar7 = param_1.ComparisonIndex.Value;
  uVar6 = ::GetTypeHash(FVar7);
  uVar3 = param_1.Number;
  if (*(int *)&(this->ActiveDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->ActiveDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->ActiveDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->ActiveDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)((this->ActiveDataLayerNames).HashSize - 1U & uVar3 + uVar6) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->ActiveDataLayerNames).Elements;
LAB_148a56b40:
      if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) goto code_r0x000148a56b50;
      if (iVar10 != -1) {
        uVar6 = ::GetTypeHash(FVar7);
        if (*(int *)&(this->LoadedDataLayerNames).Elements.field_0x8 ==
            *(int *)&(this->LoadedDataLayerNames).Elements.field_0x34) {
          return Activated;
        }
        FVar9 = (this->LoadedDataLayerNames).Hash.SecondaryData;
        if (FVar9 == (ForElementType<FSetElementId>)0x0) {
          FVar9 = (ForElementType<FSetElementId>)&(this->LoadedDataLayerNames).Hash;
        }
        iVar10 = *(int *)((longlong)FVar9 +
                         (ulonglong)((this->LoadedDataLayerNames).HashSize - 1U & uVar6 + uVar3) * 4
                         );
        if (iVar10 == -1) {
          return Activated;
        }
        lVar1 = *(longlong *)&(this->LoadedDataLayerNames).Elements;
        while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
          iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
          if (iVar10 == -1) {
            return Activated;
          }
        }
        iVar10 = 0x149;
        pcVar8 = "!LoadedDataLayerNames.Contains(InDataLayerName)";
        goto LAB_148a56e63;
      }
    }
  }
LAB_148a56b5d:
  uVar6 = ::GetTypeHash(FVar7);
  if (*(int *)&(this->LoadedDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->LoadedDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->LoadedDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->LoadedDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)((this->LoadedDataLayerNames).HashSize - 1U & uVar6 + uVar3) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->LoadedDataLayerNames).Elements;
LAB_148a56bb0:
      if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) goto code_r0x000148a56bbf;
      uVar6 = ::GetTypeHash(FVar7);
      if (*(int *)&(this->ActiveDataLayerNames).Elements.field_0x8 ==
          *(int *)&(this->ActiveDataLayerNames).Elements.field_0x34) {
        return Loaded;
      }
      FVar9 = (this->ActiveDataLayerNames).Hash.SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&(this->ActiveDataLayerNames).Hash;
      }
      iVar10 = *(int *)((longlong)FVar9 +
                       (ulonglong)((this->ActiveDataLayerNames).HashSize - 1U & uVar6 + uVar3) * 4);
      if (iVar10 == -1) {
        return Loaded;
      }
      lVar1 = *(longlong *)&(this->ActiveDataLayerNames).Elements;
      while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
        iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
        if (iVar10 == -1) {
          return Loaded;
        }
      }
      iVar10 = 0x14e;
      pcVar8 = "!ActiveDataLayerNames.Contains(InDataLayerName)";
      goto LAB_148a56f08;
    }
  }
LAB_148a56bc8:
  uVar6 = ::GetTypeHash(FVar7);
  if (*(int *)&(this->LocalActiveDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->LocalActiveDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->LocalActiveDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->LocalActiveDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)((this->LocalActiveDataLayerNames).HashSize - 1U & uVar3 + uVar6) *
                     4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->LocalActiveDataLayerNames).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) == param_1) {
          if (iVar10 != -1) {
            uVar6 = ::GetTypeHash(FVar7);
            if (*(int *)&(this->LocalLoadedDataLayerNames).Elements.field_0x8 !=
                *(int *)&(this->LocalLoadedDataLayerNames).Elements.field_0x34) {
              FVar9 = (this->LocalLoadedDataLayerNames).Hash.SecondaryData;
              if (FVar9 == (ForElementType<FSetElementId>)0x0) {
                FVar9 = (ForElementType<FSetElementId>)&(this->LocalLoadedDataLayerNames).Hash;
              }
              iVar10 = *(int *)((longlong)FVar9 +
                               (ulonglong)
                               ((this->LocalLoadedDataLayerNames).HashSize - 1U & uVar6 + uVar3) * 4
                               );
              if (iVar10 != -1) {
                lVar1 = *(longlong *)&(this->LocalLoadedDataLayerNames).Elements;
                while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
                  iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
                  if (iVar10 == -1) {
                    return Activated;
                  }
                }
                iVar10 = 0x153;
                pcVar8 = "!LocalLoadedDataLayerNames.Contains(InDataLayerName)";
LAB_148a56e63:
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  (pcVar8,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                                   ,iVar10,L"");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  EVar5 = (*pcVar2)();
                  return EVar5;
                }
              }
            }
            return Activated;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  uVar6 = ::GetTypeHash(FVar7);
  if (*(int *)&(this->LocalLoadedDataLayerNames).Elements.field_0x8 !=
      *(int *)&(this->LocalLoadedDataLayerNames).Elements.field_0x34) {
    FVar9 = (this->LocalLoadedDataLayerNames).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->LocalLoadedDataLayerNames).Hash;
    }
    iVar10 = *(int *)((longlong)FVar9 +
                     (ulonglong)((this->LocalLoadedDataLayerNames).HashSize - 1U & uVar6 + uVar3) *
                     4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&(this->LocalLoadedDataLayerNames).Elements;
      do {
        if (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) == param_1) {
          uVar6 = ::GetTypeHash(FVar7);
          if (*(int *)&(this->LocalActiveDataLayerNames).Elements.field_0x8 !=
              *(int *)&(this->LocalActiveDataLayerNames).Elements.field_0x34) {
            FVar9 = (this->LocalActiveDataLayerNames).Hash.SecondaryData;
            if (FVar9 == (ForElementType<FSetElementId>)0x0) {
              FVar9 = (ForElementType<FSetElementId>)&(this->LocalActiveDataLayerNames).Hash;
            }
            iVar10 = *(int *)((longlong)FVar9 +
                             (ulonglong)
                             ((this->LocalActiveDataLayerNames).HashSize - 1U & uVar6 + uVar3) * 4);
            if (iVar10 != -1) {
              lVar1 = *(longlong *)&(this->LocalActiveDataLayerNames).Elements;
              while (*(FName *)(lVar1 + (longlong)iVar10 * 0x10) != param_1) {
                iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
                if (iVar10 == -1) {
                  return Loaded;
                }
              }
              iVar10 = 0x158;
              pcVar8 = "!LocalActiveDataLayerNames.Contains(InDataLayerName)";
LAB_148a56f08:
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                (pcVar8,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                                 ,iVar10,L"");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                EVar5 = (*pcVar2)();
                return EVar5;
              }
            }
          }
          return Loaded;
        }
        iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  return Unloaded;
code_r0x000148a56b50:
  iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
  if (iVar10 == -1) goto LAB_148a56b5d;
  goto LAB_148a56b40;
code_r0x000148a56bbf:
  iVar10 = *(int *)(lVar1 + 8 + (longlong)iVar10 * 0x10);
  if (iVar10 == -1) goto LAB_148a56bc8;
  goto LAB_148a56bb0;
}

// GetEffectiveActiveDataLayerNames @ 148a57a40

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
AWorldDataLayers::GetEffectiveActiveDataLayerNames(AWorldDataLayers *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  
  pTVar1 = FWorldDataLayersEffectiveStates::GetAllEffectiveActiveDataLayerNames
                     (&this->EffectiveStates);
  return pTVar1;
}

// GetEffectiveLoadedDataLayerNames @ 148a57b90

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
AWorldDataLayers::GetEffectiveLoadedDataLayerNames(AWorldDataLayers *this)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar1;
  
  pTVar1 = FWorldDataLayersEffectiveStates::GetAllEffectiveLoadedDataLayerNames
                     (&this->EffectiveStates);
  return pTVar1;
}

// GetEffectiveStates @ 148a57d70

FWorldDataLayersEffectiveStates * __thiscall
AWorldDataLayers::GetEffectiveStates(AWorldDataLayers *this)

{
  code *pcVar1;
  bool bVar2;
  FWorldDataLayersEffectiveStates *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                       ,0x174,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FWorldDataLayersEffectiveStates *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->EffectiveStates;
}

// GetExternalDataLayerInstance @ 148a57f40

UExternalDataLayerInstance * __thiscall
AWorldDataLayers::GetExternalDataLayerInstance
          (AWorldDataLayers *this,UExternalDataLayerAsset *param_1)

{
  int iVar1;
  UExternalDataLayerInstance *pUVar2;
  FString *pFVar3;
  UDataLayerInstance **ppUVar4;
  UClass *pUVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (param_1 != (UExternalDataLayerAsset *)0x0) {
    pFVar3 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0)
    ;
    ppUVar4 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&this->AssetNameToInstance,pFVar3);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((ppUVar4 != (UDataLayerInstance **)0x0) &&
       (pUVar2 = (UExternalDataLayerInstance *)*ppUVar4, pUVar2 != (UExternalDataLayerInstance *)0x0
       )) {
      pUVar5 = UExternalDataLayerInstance::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar2;
      }
      pFVar3 = GetTypeName<UExternalDataLayerInstance>(&local_28);
      pwVar7 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UDataLayerInstance>
                         (&local_18,(UDataLayerInstance *)pUVar2);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
  }
  return (UExternalDataLayerInstance *)0x0;
}

// GetExternalDataLayerInstance @ 148a58020

UExternalDataLayerInstance * __thiscall
AWorldDataLayers::GetExternalDataLayerInstance
          (AWorldDataLayers *this,UExternalDataLayerAsset *param_1)

{
  int iVar1;
  UExternalDataLayerInstance *pUVar2;
  FString *pFVar3;
  UDataLayerInstance **ppUVar4;
  UClass *pUVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString FStack_28;
  FString FStack_18;
  
  if (param_1 != (UExternalDataLayerAsset *)0x0) {
    pFVar3 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_1,&FStack_28,(UObject *)0x0);
    ppUVar4 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
              ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                      *)&this->AssetNameToInstance,pFVar3);
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if ((ppUVar4 != (UDataLayerInstance **)0x0) &&
       (pUVar2 = (UExternalDataLayerInstance *)*ppUVar4, pUVar2 != (UExternalDataLayerInstance *)0x0
       )) {
      pUVar5 = UExternalDataLayerInstance::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar2;
      }
      pFVar3 = GetTypeName<UExternalDataLayerInstance>(&FStack_28);
      pwVar7 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UDataLayerInstance>
                         (&FStack_18,(UDataLayerInstance *)pUVar2);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
  }
  return (UExternalDataLayerInstance *)0x0;
}

// GetLifetimeReplicatedProps @ 148a59060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWorldDataLayers::GetLifetimeReplicatedProps
          (AWorldDataLayers *this,TArray<FLifetimeProperty,TSizedDefaultAllocator<32>_> *param_1)

{
  FRepPropertyDescriptor local_38;
  FDoRepLifetimeParams local_28;
  
  AActor::GetLifetimeReplicatedProps((AActor *)this,param_1);
  local_28.bIsPushBased = true;
  local_28.Condition = COND_None;
  local_28.RepNotifyCondition = REPNOTIFY_OnChanged;
  local_28.CreateAndRegisterReplicationFragmentFunction =
       (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
        *)0x0;
  local_38.RepIndex = 0xb;
  local_38.PropertyName = L"RepLoadedDataLayerNames";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 10;
  local_38.PropertyName = L"RepActiveDataLayerNames";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0xd;
  local_38.PropertyName = L"RepEffectiveLoadedDataLayerNames";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  local_38.RepIndex = 0xc;
  local_38.PropertyName = L"RepEffectiveActiveDataLayerNames";
  local_38.ArrayDim = 1;
  RegisterReplicatedLifetimeProperty(&local_38,param_1,&local_28);
  return;
}

// GetPrivateStaticClass @ 148a59620

UClass * __cdecl AWorldDataLayers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldDataLayers",
               &Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton,
               StaticRegisterNativesAWorldDataLayers,0x848,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldDataLayers>,
               InternalVTableHelperCtorCaller<AWorldDataLayers>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldDataLayers.InnerSingleton;
}

// GetRootExternalDataLayerInstance @ 148a5b0c0

UExternalDataLayerInstance * __thiscall
AWorldDataLayers::GetRootExternalDataLayerInstance(AWorldDataLayers *this)

{
  return (UExternalDataLayerInstance *)this->_padding_;
}

// InitializeDataLayerRuntimeStates @ 148a5cce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldDataLayers::InitializeDataLayerRuntimeStates(AWorldDataLayers *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  UWorld *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_b8;
  undefined8 local_b0;
  AWorldDataLayers *local_a8;
  ForAnyElementType *local_a0;
  code *local_98;
  AWorldDataLayers **local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  lVar6 = (**(code **)(this->_padding_ + 0x20))(&this->_padding_);
  if (lVar6 == 0) {
    if (((*(int *)&(this->ActiveDataLayerNames).Elements.field_0x8 !=
          *(int *)&(this->ActiveDataLayerNames).Elements.field_0x34) ||
        (*(int *)&(this->LoadedDataLayerNames).Elements.field_0x8 !=
         *(int *)&(this->LoadedDataLayerNames).Elements.field_0x34)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveDataLayerNames.IsEmpty() && LoadedDataLayerNames.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                           ,0x8c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = AActor::GetWorld((AActor *)this);
    bVar5 = UWorld::IsGameWorld(this_00);
    if (bVar5) {
      local_b8.Data = (FScriptContainerElement *)0x0;
      local_b0 = 0;
      lVar6 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
      uVar11 = *(int *)(lVar6 + 8) - *(int *)(lVar6 + 0x34);
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if (local_b0._4_4_ < (int)uVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar11,&local_b8,(int)local_b0,(int *)((longlong)&local_b0 + 4));
      }
      local_a0 = &local_b8;
      local_90 = &local_a8;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`AWorldDataLayers::InitializeDataLayerRuntimeStates'::__l15::<lambda_1>,bool,UDataLayerInstance_*>
                 ::Call;
      local_a8 = this;
      ForEachDataLayerInstance(this,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_98);
      AActor::FlushNetDormancy((AActor *)this);
      pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&this->ActiveDataLayerNames,&local_88);
      pTVar1 = &this->RepActiveDataLayerNames;
      if (pTVar1 != pTVar7) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepActiveDataLayerNames).ArrayNum = pTVar7->ArrayNum;
        (this->RepActiveDataLayerNames).ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&this->LoadedDataLayerNames,&local_78);
      pTVar1 = &this->RepLoadedDataLayerNames;
      if (pTVar1 != pTVar7) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepLoadedDataLayerNames).ArrayNum = pTVar7->ArrayNum;
        (this->RepLoadedDataLayerNames).ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      iVar4 = (int)local_b0;
      uVar9 = (ulonglong)(int)local_b0;
      pFVar2 = local_b8.Data + uVar9 * 8;
      FVar10.Data = local_b8.Data;
      while( true ) {
        if ((int)uVar9 != iVar4) {
          `TCheckedPointerIterator<UDataLayerInstance_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar10.Data == pFVar2) break;
        ResolveEffectiveRuntimeState(this,*(UDataLayerInstance **)FVar10.Data,false);
        uVar9 = local_b0 & 0xffffffff;
        FVar10.Data = FVar10.Data + 8;
      }
      pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&(this->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames,&local_68
                         );
      pTVar1 = &this->RepEffectiveActiveDataLayerNames;
      if (pTVar1 != pTVar7) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepEffectiveActiveDataLayerNames).ArrayNum = pTVar7->ArrayNum;
        (this->RepEffectiveActiveDataLayerNames).ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      pTVar8 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&(this->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames,&local_58
                         );
      pTVar7 = &this->RepEffectiveLoadedDataLayerNames;
      if (pTVar7 != pTVar8) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar7->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
        (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepEffectiveLoadedDataLayerNames).ArrayNum = pTVar8->ArrayNum;
        (this->RepEffectiveLoadedDataLayerNames).ArrayMax = pTVar8->ArrayMax;
        pTVar8->ArrayNum = 0;
        pTVar8->ArrayMax = 0;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if ((4 < (byte)LogWorldPartition._0_1_) &&
         (((this->RepEffectiveActiveDataLayerNames).ArrayNum != 0 ||
          ((this->RepEffectiveLoadedDataLayerNames).ArrayNum != 0)))) {
        JoinDataLayerShortNamesFromInstanceNames(&local_38,this,pTVar7);
        JoinDataLayerShortNamesFromInstanceNames(&local_48,this,pTVar1);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (local_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data);
      }
    }
  }
  return;
}

// IsExternalDataLayerWorldDataLayers @ 148a5ea80

bool __thiscall AWorldDataLayers::IsExternalDataLayerWorldDataLayers(AWorldDataLayers *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x20))();
  return lVar1 != 0;
}

// OnDataLayerManagerDeinitialized @ 148a5f840

void __thiscall AWorldDataLayers::OnDataLayerManagerDeinitialized(AWorldDataLayers *this)

{
  int *piVar1;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->ActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->LoadedDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->LocalActiveDataLayerNames)
  ;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->LocalLoadedDataLayerNames)
  ;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).LocalEffectiveActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).LocalEffectiveLoadedDataLayerNames);
  piVar1 = &(this->EffectiveStates).UpdateEpoch;
  *piVar1 = *piVar1 + 1;
  return;
}

// OnDataLayerManagerInitialized @ 148a5f8c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldDataLayers::OnDataLayerManagerInitialized(AWorldDataLayers *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  UWorld *this_00;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  undefined1 auStackX_8 [8];
  ForAnyElementType FStack_b8;
  undefined8 uStack_b0;
  AWorldDataLayers *pAStack_a8;
  ForAnyElementType *pFStack_a0;
  code *pcStack_98;
  AWorldDataLayers **ppAStack_90;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_88;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_78;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_68;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_58;
  FString FStack_48;
  FString FStack_38;
  
  lVar6 = (**(code **)(this->_padding_ + 0x20))(&this->_padding_);
  if (lVar6 == 0) {
    if (((*(int *)&(this->ActiveDataLayerNames).Elements.field_0x8 !=
          *(int *)&(this->ActiveDataLayerNames).Elements.field_0x34) ||
        (*(int *)&(this->LoadedDataLayerNames).Elements.field_0x8 !=
         *(int *)&(this->LoadedDataLayerNames).Elements.field_0x34)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveDataLayerNames.IsEmpty() && LoadedDataLayerNames.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                           ,0x8c,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = AActor::GetWorld((AActor *)this);
    bVar5 = UWorld::IsGameWorld(this_00);
    if (bVar5) {
      FStack_b8.Data = (FScriptContainerElement *)0x0;
      uStack_b0 = 0;
      lVar6 = (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
      uVar11 = *(int *)(lVar6 + 8) - *(int *)(lVar6 + 0x34);
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if (uStack_b0._4_4_ < (int)uVar11) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar11,&FStack_b8,(int)uStack_b0,(int *)((longlong)&uStack_b0 + 4));
      }
      pFStack_a0 = &FStack_b8;
      ppAStack_90 = &pAStack_a8;
      pcStack_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<`AWorldDataLayers::InitializeDataLayerRuntimeStates'::__l15::<lambda_1>,bool,UDataLayerInstance_*>
                   ::Call;
      pAStack_a8 = this;
      ForEachDataLayerInstance(this,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&pcStack_98)
      ;
      AActor::FlushNetDormancy((AActor *)this);
      pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&this->ActiveDataLayerNames,&TStack_88);
      pTVar1 = &this->RepActiveDataLayerNames;
      if (pTVar1 != pTVar7) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepActiveDataLayerNames).ArrayNum = pTVar7->ArrayNum;
        (this->RepActiveDataLayerNames).ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (TStack_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_88.AllocatorInstance.Data);
      }
      pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&this->LoadedDataLayerNames,&TStack_78);
      pTVar1 = &this->RepLoadedDataLayerNames;
      if (pTVar1 != pTVar7) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepLoadedDataLayerNames).ArrayNum = pTVar7->ArrayNum;
        (this->RepLoadedDataLayerNames).ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (TStack_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_78.AllocatorInstance.Data);
      }
      iVar4 = (int)uStack_b0;
      uVar9 = (ulonglong)(int)uStack_b0;
      pFVar2 = FStack_b8.Data + uVar9 * 8;
      FVar10.Data = FStack_b8.Data;
      while( true ) {
        if ((int)uVar9 != iVar4) {
          `TCheckedPointerIterator<UDataLayerInstance_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(auStackX_8);
        }
        if (FVar10.Data == pFVar2) break;
        ResolveEffectiveRuntimeState(this,*(UDataLayerInstance **)FVar10.Data,false);
        uVar9 = uStack_b0 & 0xffffffff;
        FVar10.Data = FVar10.Data + 8;
      }
      pTVar7 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&(this->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames,
                          &TStack_68);
      pTVar1 = &this->RepEffectiveActiveDataLayerNames;
      if (pTVar1 != pTVar7) {
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
        (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepEffectiveActiveDataLayerNames).ArrayNum = pTVar7->ArrayNum;
        (this->RepEffectiveActiveDataLayerNames).ArrayMax = pTVar7->ArrayMax;
        pTVar7->ArrayNum = 0;
        pTVar7->ArrayMax = 0;
      }
      if (TStack_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_68.AllocatorInstance.Data);
      }
      pTVar8 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                         (&(this->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames,
                          &TStack_58);
      pTVar7 = &this->RepEffectiveLoadedDataLayerNames;
      if (pTVar7 != pTVar8) {
        pFVar2 = (pTVar7->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar7->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
        (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->RepEffectiveLoadedDataLayerNames).ArrayNum = pTVar8->ArrayNum;
        (this->RepEffectiveLoadedDataLayerNames).ArrayMax = pTVar8->ArrayMax;
        pTVar8->ArrayNum = 0;
        pTVar8->ArrayMax = 0;
      }
      if (TStack_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_58.AllocatorInstance.Data);
      }
      if ((4 < (byte)LogWorldPartition._0_1_) &&
         (((this->RepEffectiveActiveDataLayerNames).ArrayNum != 0 ||
          ((this->RepEffectiveLoadedDataLayerNames).ArrayNum != 0)))) {
        JoinDataLayerShortNamesFromInstanceNames(&FStack_38,this,pTVar7);
        JoinDataLayerShortNamesFromInstanceNames(&FStack_48,this,pTVar1);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
        }
        if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
        }
      }
      if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b8.Data);
      }
    }
  }
  return;
}

// OnDataLayerRuntimeStateChanged @ 148a5f8d0

void __thiscall
AWorldDataLayers::OnDataLayerRuntimeStateChanged
          (AWorldDataLayers *this,UDataLayerInstance *param_1,EDataLayerRuntimeState param_2)

{
  UFunction *pUVar1;
  UDataLayerInstance *local_18;
  EDataLayerRuntimeState local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return;
}

// OnDataLayerRuntimeStateChanged_Implementation @ 148a5f920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
AWorldDataLayers::OnDataLayerRuntimeStateChanged_Implementation
          (AWorldDataLayers *this,UDataLayerInstance *param_1,EDataLayerRuntimeState param_2)

{
  int iVar1;
  bool bVar2;
  UWorldPartition *this_00;
  UDataLayerManager *pUVar3;
  longlong lVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  USubsystem *pUVar7;
  UDataLayerInstance *local_18;
  EDataLayerRuntimeState local_10;
  
  if (this == (AWorldDataLayers *)0x0) {
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) != 0) {
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    this_00 = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject((UObject *)this);
  }
  else {
    this_00 = (UWorldPartition *)0x0;
  }
  if (this_00 == (UWorldPartition *)0x0) {
    return;
  }
  pUVar3 = UWorldPartition::GetDataLayerManager(this_00);
  if (pUVar3 == (UDataLayerManager *)0x0) {
    return;
  }
  lVar4 = (**(code **)(pUVar3->_padding_ + 0x180))(pUVar3);
  if (lVar4 == 0) goto LAB_148a5fa26;
  pUVar5 = UDataLayerSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_148a5f9c5;
LAB_148a5f9f3:
    pUVar5 = (UClass *)0x0;
  }
  else {
    if (pUVar5 == (UClass *)0x0) goto LAB_148a5f9f3;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_148a5f9c5:
    pUVar6 = UDataLayerSubsystem::StaticClass();
    if (pUVar6 == (UClass *)0x0) goto LAB_148a5f9f3;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_148a5f9f3;
  }
  pUVar7 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)(lVar4 + 0xac0),pUVar5);
  if (pUVar7 != (USubsystem *)0x0) {
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7[1]._padding_,
               &local_18);
  }
LAB_148a5fa26:
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar3->OnDataLayerInstanceRuntimeStateChanged,&local_18);
  return;
}

// OnRep_ActiveDataLayerNames @ 148a5ff50

void __thiscall AWorldDataLayers::OnRep_ActiveDataLayerNames(AWorldDataLayers *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  this->DataLayersStateEpoch = this->DataLayersStateEpoch + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->ActiveDataLayerNames);
  local_18.DataPtr = (FName *)(this->RepActiveDataLayerNames).AllocatorInstance.Data;
  iVar1 = (this->RepActiveDataLayerNames).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (&this->ActiveDataLayerNames,&local_18);
  return;
}

// OnRep_EffectiveActiveDataLayerNames @ 148a5ffe0

void __thiscall AWorldDataLayers::OnRep_EffectiveActiveDataLayerNames(AWorldDataLayers *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  this->DataLayersStateEpoch = this->DataLayersStateEpoch + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames);
  local_18.DataPtr = (FName *)(this->RepEffectiveActiveDataLayerNames).AllocatorInstance.Data;
  iVar2 = (this->RepEffectiveActiveDataLayerNames).ArrayNum;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (&(this->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames,&local_18);
  piVar1 = &(this->EffectiveStates).UpdateEpoch;
  *piVar1 = *piVar1 + 1;
  return;
}

// OnRep_EffectiveLoadedDataLayerNames @ 148a60080

void __thiscall AWorldDataLayers::OnRep_EffectiveLoadedDataLayerNames(AWorldDataLayers *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  this->DataLayersStateEpoch = this->DataLayersStateEpoch + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames);
  local_18.DataPtr = (FName *)(this->RepEffectiveLoadedDataLayerNames).AllocatorInstance.Data;
  iVar2 = (this->RepEffectiveLoadedDataLayerNames).ArrayNum;
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar2;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (&(this->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames,&local_18);
  piVar1 = &(this->EffectiveStates).UpdateEpoch;
  *piVar1 = *piVar1 + 1;
  return;
}

// OnRep_LoadedDataLayerNames @ 148a60120

void __thiscall AWorldDataLayers::OnRep_LoadedDataLayerNames(AWorldDataLayers *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  this->DataLayersStateEpoch = this->DataLayersStateEpoch + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->LoadedDataLayerNames);
  local_18.DataPtr = (FName *)(this->RepLoadedDataLayerNames).AllocatorInstance.Data;
  iVar1 = (this->RepLoadedDataLayerNames).ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            (&this->LoadedDataLayerNames,&local_18);
  return;
}

// PostLoad @ 148a612f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldDataLayers::PostLoad(AWorldDataLayers *this)

{
  ULevel *this_00;
  UClass *pUVar1;
  UWorld *pUVar2;
  AWorldDataLayers *pAVar3;
  FName local_res8 [4];
  code *local_18;
  FName *local_10;
  
  AActor::PostLoad((AActor *)this);
  this_00 = AActor::GetLevel((AActor *)this);
  UObject::ConditionalPostLoad((UObject *)this_00);
  pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
  pAVar3 = UWorld::GetWorldDataLayers(pUVar2);
  if (pAVar3 == (AWorldDataLayers *)0x0) {
    ::FName::FName(local_res8,L"WorldDataLayers");
    if ((FName)this->_padding_ == local_res8[0]) {
      pUVar1 = Z_Construct_UClass_UWorld_NoRegister();
      pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar1);
      UWorld::SetWorldDataLayers(pUVar2,this);
    }
  }
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`AWorldDataLayers::PostLoad'::__l2::<lambda_1>,bool,UDataLayerInstance_*>
             ::Call;
  local_res8[0] = (FName)this;
  ForEachDataLayerInstance(this,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)&local_18);
  return;
}

// RemoveExternalDataLayerInstance @ 148a65690

bool __thiscall
AWorldDataLayers::RemoveExternalDataLayerInstance
          (AWorldDataLayers *this,UExternalDataLayerInstance *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  UDataLayerInstance *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TSet<TObjectPtr<UDataLayerInstance>,DefaultKeyFuncs<TObjectPtr<UDataLayerInstance>,0>,FDefaultSetAllocator>
  *pTVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  TArray<TObjectPtr<UDataLayerInstance>,TSizedDefaultAllocator<32>_> *pTVar23;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  lVar11 = (**(code **)(this->_padding_ + 0x20))();
  if ((lVar11 != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsExternalDataLayerWorldDataLayers()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                         ,0x1e1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pTVar23 = &this->TransientDataLayerInstances;
  pFVar4 = (pTVar23->AllocatorInstance).Data;
  for (pFVar17 = pFVar4;
      pFVar17 != pFVar4 + (longlong)(this->TransientDataLayerInstances).ArrayNum * 8;
      pFVar17 = pFVar17 + 8) {
    if (*(UExternalDataLayerInstance **)pFVar17 == (UExternalDataLayerInstance *)0x0) {
      bVar7 = param_1 == (UExternalDataLayerInstance *)0x0;
    }
    else {
      bVar7 = *(UExternalDataLayerInstance **)pFVar17 == param_1;
    }
    if (bVar7) {
      uVar16 = (uint)((longlong)pFVar17 - (longlong)pFVar4 >> 3);
      goto LAB_148a65729;
    }
  }
  uVar16 = 0xffffffff;
LAB_148a65729:
  if (uVar16 == 0xffffffff) {
    return false;
  }
  pTVar12 = GetDataLayerInstancesFromProvider((UDataLayerInstance *)param_1);
  iVar14 = *(int *)&(pTVar12->Elements).field_0x28;
  puVar1 = &(pTVar12->Elements).field_0x10;
  uVar9 = 1;
  iVar18 = 0;
  iVar20 = 0;
  iVar13 = 0;
  iVar10 = 0;
  if (iVar14 != 0) {
    puVar21 = *(uint **)&(pTVar12->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar15 = *puVar21;
    iVar20 = 0;
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) {
        iVar13 = *(int *)&(pTVar12->Elements).field_0x28;
        iVar10 = iVar14;
        goto LAB_148a657e5;
      }
      uVar15 = puVar21[lVar11 + 1];
    }
    iVar13 = *(int *)&(pTVar12->Elements).field_0x28;
    uVar9 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = iVar20 + -1 + local_res20;
    if (iVar13 < iVar10) {
      iVar10 = iVar14;
    }
  }
LAB_148a657e5:
  uVar15 = *(uint *)&(pTVar12->Elements).field_0x28;
  uVar22 = uVar15 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar9,iVar18);
  TStack_80.CurrentBitIndex = iVar10;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar15 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = iVar20;
  uStack_60 = CONCAT44(uStack_8c,
                       *(int *)&(pTVar12->Elements).field_0x8 -
                       *(int *)&(pTVar12->Elements).field_0x34);
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar13 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&(pTVar12->Elements).field_0x28;
  if (uVar15 != uVar9) {
    puVar19 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar14;
      uVar22 = uVar22 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_148a658f0;
      uVar15 = *(uint *)(puVar19 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar22;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_148a658f0:
  while( true ) {
    if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 !=
        (int)uStack_60) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_80.CurrentBitIndex == uVar15) &&
       (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar5 = *(UDataLayerInstance **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
    SetDataLayerRuntimeState(this,pUVar5,Unloaded,false);
    UpdateAccelerationTable(this,pUVar5,false);
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  uVar9 = 0;
  if ((int)uVar16 < (this->TransientDataLayerInstances).ArrayNum) {
    uVar9 = ~uVar16 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  iVar13 = (this->TransientDataLayerInstances).ArrayNum;
  pFVar4 = (pTVar23->AllocatorInstance).Data;
  iVar14 = ~uVar16 + iVar13;
  if (1 < iVar14) {
    iVar14 = 1;
  }
  if (iVar14 != 0) {
    memmove(pFVar4 + (longlong)(int)uVar16 * 8,pFVar4 + (longlong)(iVar13 - iVar14) * 8,
            (longlong)iVar14 << 3);
  }
  piVar2 = &(this->TransientDataLayerInstances).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar23->AllocatorInstance,(this->TransientDataLayerInstances).ArrayNum,
             &(this->TransientDataLayerInstances).ArrayMax);
  return true;
}

// ResetDataLayerRuntimeStates @ 148a67290

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldDataLayers::ResetDataLayerRuntimeStates(AWorldDataLayers *this,bool param_1)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->ActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->LoadedDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->LocalActiveDataLayerNames)
  ;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(&this->LocalLoadedDataLayerNames)
  ;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).LocalEffectiveActiveDataLayerNames);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            (&(this->EffectiveStates).LocalEffectiveLoadedDataLayerNames);
  piVar1 = &(this->EffectiveStates).UpdateEpoch;
  *piVar1 = *piVar1 + 1;
  if (param_1) {
    AActor::FlushNetDormancy((AActor *)this);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`AWorldDataLayers::ResetDataLayerRuntimeStates'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    FVar2.Data = ::Empty.AllocatorInstance.Data;
    pTVar4 = &this->RepActiveDataLayerNames;
    if (pTVar4 != &::Empty) {
      piVar1 = &(this->RepActiveDataLayerNames).ArrayMax;
      iVar3 = ::Empty.ArrayNum;
      (this->RepActiveDataLayerNames).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar1,&pTVar4->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar4->AllocatorInstance).Data,FVar2.Data,(longlong)iVar3 << 3);
        }
      }
    }
    FVar2.Data = ::Empty.AllocatorInstance.Data;
    pTVar4 = &this->RepLoadedDataLayerNames;
    if (pTVar4 != &::Empty) {
      piVar1 = &(this->RepLoadedDataLayerNames).ArrayMax;
      iVar3 = ::Empty.ArrayNum;
      (this->RepLoadedDataLayerNames).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar1,&pTVar4->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar4->AllocatorInstance).Data,FVar2.Data,(longlong)iVar3 << 3);
        }
      }
    }
    FVar2.Data = ::Empty.AllocatorInstance.Data;
    pTVar4 = &this->RepEffectiveActiveDataLayerNames;
    if (pTVar4 != &::Empty) {
      piVar1 = &(this->RepEffectiveActiveDataLayerNames).ArrayMax;
      iVar3 = ::Empty.ArrayNum;
      (this->RepEffectiveActiveDataLayerNames).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar3,*piVar1,&pTVar4->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar4->AllocatorInstance).Data,FVar2.Data,(longlong)iVar3 << 3);
        }
      }
    }
    FVar2.Data = ::Empty.AllocatorInstance.Data;
    pTVar4 = &this->RepEffectiveLoadedDataLayerNames;
    if (pTVar4 != &::Empty) {
      piVar1 = &(this->RepEffectiveLoadedDataLayerNames).ArrayMax;
      iVar3 = ::Empty.ArrayNum;
      (this->RepEffectiveLoadedDataLayerNames).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*piVar1,&pTVar4->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,FVar2.Data,(longlong)iVar3 << 3);
      }
    }
  }
  return;
}

// ResolveEffectiveRuntimeState @ 148a67690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AWorldDataLayers::ResolveEffectiveRuntimeState
          (AWorldDataLayers *this,UDataLayerInstance *param_1,bool param_2)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  UDataLayerInstance *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  EDataLayerRuntimeState EVar10;
  EDataLayerRuntimeState EVar11;
  FName *pFVar12;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar13;
  UPackage *pUVar14;
  FText *pFVar15;
  UFunction *pUVar16;
  longlong lVar17;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  AWorldDataLayers *local_res8;
  ENetMode local_res10;
  char local_res18;
  FName local_res20;
  FName local_e8;
  bool local_e0 [8];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_d8;
  FName local_d0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_c8;
  UDataLayerInstance *local_c0;
  EDataLayerRuntimeState local_b8;
  code *local_b0;
  AWorldDataLayers **local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_90;
  void *local_80 [2];
  FText local_70;
  FText local_60 [2];
  
  local_res18 = param_2;
  if ((param_1 == (UDataLayerInstance *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDataLayerInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                         ,0x184,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res10 = AActor::InternalGetNetMode((AActor *)this);
  cVar8 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
  cVar9 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  if ((cVar8 == '\0') && (cVar9 == '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  (**(code **)(param_1->_padding_ + 800))(param_1,&local_e8);
  EVar10 = GetDataLayerRuntimeStateByName(this,local_e8);
  pUVar3 = (param_1->Parent).field0_0x0.DebugPtr;
  FVar6 = local_e8;
  while ((pUVar3 != (UDataLayerInstance *)0x0 && (EVar10 != Unloaded))) {
    local_e8 = FVar6;
    cVar8 = (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3);
    EVar11 = EVar10;
    if (cVar8 != '\0') {
      pFVar12 = (FName *)(**(code **)(pUVar3->_padding_ + 800))(pUVar3,&local_d8);
      EVar11 = GetDataLayerRuntimeStateByName(this,*pFVar12);
      if (EVar10 < EVar11) {
        EVar11 = EVar10;
      }
    }
    pUVar3 = (pUVar3->Parent).field0_0x0.DebugPtr;
    EVar10 = EVar11;
    FVar6 = local_e8;
  }
  EVar11 = FWorldDataLayersEffectiveStates::GetDataLayerEffectiveRuntimeStateByName
                     (&this->EffectiveStates,FVar6);
  local_res8 = (AWorldDataLayers *)CONCAT71(local_res8._1_7_,EVar11);
  if (EVar11 == EVar10) {
    return;
  }
  lVar17 = 0x740;
  if (!bVar7) {
    lVar17 = 0x6a0;
  }
  local_d8 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             ((longlong)&this->_padding_ + lVar17);
  lVar17 = 0x6f0;
  if (!bVar7) {
    lVar17 = 0x650;
  }
  local_c8 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             ((longlong)&this->_padding_ + lVar17);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(local_d8,FVar6);
  this_00 = local_c8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(local_c8,FVar6);
  if (EVar10 == Loaded) {
    pFVar12 = &local_res20;
    this_00 = local_d8;
  }
  else {
    if (EVar10 != Activated) goto LAB_148a67832;
    pFVar12 = &local_d0;
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (this_00,pFVar12,local_e0);
LAB_148a67832:
  piVar1 = &(this->EffectiveStates).UpdateEpoch;
  *piVar1 = *piVar1 + 1;
  if ((!bVar7) && (local_res10 < NM_Client)) {
    AActor::FlushNetDormancy((AActor *)this);
    pTVar13 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                        (&(this->EffectiveStates).ReplicatedEffectiveActiveDataLayerNames,&local_a0)
    ;
    pTVar2 = &this->RepEffectiveActiveDataLayerNames;
    if (pTVar2 != pTVar13) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->RepEffectiveActiveDataLayerNames).ArrayNum = pTVar13->ArrayNum;
      (this->RepEffectiveActiveDataLayerNames).ArrayMax = pTVar13->ArrayMax;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    pTVar13 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                        (&(this->EffectiveStates).ReplicatedEffectiveLoadedDataLayerNames,&local_90)
    ;
    pTVar2 = &this->RepEffectiveLoadedDataLayerNames;
    if (pTVar2 != pTVar13) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
      (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->RepEffectiveLoadedDataLayerNames).ArrayNum = pTVar13->ArrayNum;
      (this->RepEffectiveLoadedDataLayerNames).ArrayMax = pTVar13->ArrayMax;
      pTVar13->ArrayNum = 0;
      pTVar13->ArrayMax = 0;
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  this->DataLayersStateEpoch = this->DataLayersStateEpoch + 1;
  if (local_res18 != '\0') {
    if (4 < (byte)LogWorldPartition._0_1_) {
      if (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton == (UEnum *)0x0) {
        pUVar14 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState,(UObject *)pUVar14,
                           L"EDataLayerRuntimeState");
      }
      pFVar15 = UEnum::GetDisplayNameTextByValue
                          (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton,local_60,
                           (ulonglong)EVar10);
      FText::ToString(pFVar15);
      if (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton == (UEnum *)0x0) {
        pUVar14 = Z_Construct_UPackage__Script_Engine();
        Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton =
             GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState,(UObject *)pUVar14,
                           L"EDataLayerRuntimeState");
      }
      pFVar15 = UEnum::GetDisplayNameTextByValue
                          (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton,&local_70
                           ,(ulonglong)local_res8 & 0xff);
      FText::ToString(pFVar15);
      (**(code **)(param_1->_padding_ + 0x2e0))(param_1,local_80);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_80[0] != (void *)0x0) {
        FMemory::Free(local_80[0]);
      }
      if (local_70.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
      }
      if (local_60[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
      }
    }
    local_c0 = param_1;
    local_b8 = EVar10;
    pUVar16 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_AWorldDataLayers_OnDataLayerRuntimeStateChanged);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar16,&local_c0);
  }
  local_a8 = &local_res8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`AWorldDataLayers::ResolveEffectiveRuntimeState'::__l17::<lambda_1>,bool,UDataLayerInstance_const_*>
             ::Call;
  local_res8 = this;
  UDataLayerInstance::ForEachChild
            (param_1,(TFunctionRef<bool___cdecl(UDataLayerInstance_const_*)> *)&local_b0);
  return;
}

// Serialize @ 148a67aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldDataLayers::Serialize(AWorldDataLayers *this,FArchive *param_1)

{
  int iVar1;
  bool abStackX_10 [24];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x29 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FUE5SpecialProjectStreamObjectVersion::GUID);
    if (3 < iVar1) {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        abStackX_10[0] = false;
      }
      else {
        abStackX_10[0] = true;
      }
      ::operator<<(param_1,abStackX_10);
      if (abStackX_10[0] != false) {
        ::operator<<(param_1,(FString *)&this->_padding_);
      }
    }
  }
  if (((*(longlong *)&param_1->field_0x68 != 0) &&
      (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) ||
     ((param_1->field_0x28 & 2) != 0)) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (0x95 < iVar1) {
      FActorInstanceGuid::Serialize(param_1,(AActor *)this);
    }
  }
  return;
}

// Serialize @ 148a67ab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldDataLayers::Serialize(AWorldDataLayers *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar1);
  return;
}

// SetDataLayerRuntimeState @ 148a684c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
AWorldDataLayers::SetDataLayerRuntimeState
          (AWorldDataLayers *this,UDataLayerInstance *param_1,EDataLayerRuntimeState param_2,
          bool param_3)

{
  bool bVar1;
  EDataLayerRuntimeState EVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  ENetMode EVar6;
  uint uVar7;
  FName *pFVar8;
  UEnum *pUVar9;
  FText *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  bool *pbVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar14;
  UPackage *pUVar15;
  undefined8 *puVar16;
  FStaticBasicLogRecord *pFVar17;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  wchar_t *pwVar21;
  undefined1 auStack_10b8 [32];
  FScriptContainerElement *local_1098;
  char local_1088;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1080;
  undefined1 local_1070 [16];
  FText local_1060;
  uchar local_1048 [4096];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x148a684dd;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_10b8;
  uVar18 = (ulonglong)param_2;
  if (param_1 == (UDataLayerInstance *)0x0) {
    return false;
  }
  local_1088 = param_3;
  pFVar8 = (FName *)(**(code **)(param_1->_padding_ + 800))(param_1,local_1070);
  EVar2 = GetDataLayerRuntimeStateByName(this,*pFVar8);
  uVar20 = (ulonglong)EVar2;
  cVar3 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  if (cVar3 == '\0') {
    if ((byte)LogWorldPartition._0_1_ < 6) {
      return false;
    }
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_1080);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_1080.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_1080.AllocatorInstance.Data);
    return false;
  }
  EVar6 = AActor::InternalGetNetMode((AActor *)this);
  cVar3 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
    if (EVar6 == NM_Client) {
      if (cVar3 == '\0') {
        if ((byte)LogWorldPartition._0_1_ < 6) {
          return false;
        }
        pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
        pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,&local_1060,uVar18);
        pFVar11 = FText::ToString(pFVar10);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
        pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,(FText *)local_1070,uVar20);
        FText::ToString(pFVar10);
        (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_1080);
        pFVar17 = &::LOG_Static;
      }
      else {
        if ((byte)LogWorldPartition._0_1_ < 6) {
          return false;
        }
        pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
        pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,&local_1060,uVar18);
        pFVar11 = FText::ToString(pFVar10);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
        pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,(FText *)local_1070,uVar20);
        FText::ToString(pFVar10);
        (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_1080);
        pFVar17 = &::LOG_Static;
      }
      goto LAB_148a686ae;
    }
  }
  else if ((EVar6 != NM_Standalone) && (EVar6 != NM_Client)) {
    if ((byte)LogWorldPartition._0_1_ < 6) {
      return false;
    }
    pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
    pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,&local_1060,uVar18);
    pFVar11 = FText::ToString(pFVar10);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
    pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,(FText *)local_1070,uVar20);
    FText::ToString(pFVar10);
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_1080);
    pFVar17 = &::LOG_Static;
LAB_148a686ae:
    local_1098 = (FScriptContainerElement *)pwVar19;
    UE::Logging::Private::BasicLog<6>(pFVar17,(FLogCategoryBase *)&LogWorldPartition);
    if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.AllocatorInstance.Data);
    }
    if ((ITextData *)local_1070._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1070._0_8_ + 0x10))();
    }
    if (local_1060.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1060.TextData.Reference + 0x10))();
    }
    return false;
  }
  if (EVar2 == param_2) goto LAB_148a68b64;
  EVar6 = AActor::InternalGetNetMode((AActor *)this);
  cVar3 = (**(code **)(param_1->_padding_ + 0x2c8))(param_1);
  cVar4 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
  if ((cVar3 == '\0') && (cVar4 == '\0')) {
    bVar1 = false;
    lVar12 = 0x540;
  }
  else {
    bVar1 = true;
    lVar12 = 0x5e0;
  }
  this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
            ((longlong)&this->_padding_ + lVar12);
  lVar12 = 0x590;
  if (!bVar1) {
    lVar12 = 0x4f0;
  }
  local_1070._0_8_ = (longlong)&this->_padding_ + lVar12;
  pFVar8 = (FName *)(**(code **)(param_1->_padding_ + 800))(param_1,&local_1060);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(this_00,*pFVar8);
  pFVar8 = (FName *)(**(code **)(param_1->_padding_ + 800))(param_1,&local_1060);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1070._0_8_,*pFVar8);
  if (param_2 == Loaded) {
    pbVar13 = (bool *)(**(code **)(param_1->_padding_ + 800))(param_1,local_1070);
LAB_148a6886f:
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (this_00,(FName *)&local_1060,pbVar13);
  }
  else if (param_2 == Activated) {
    pbVar13 = (bool *)(**(code **)(param_1->_padding_ + 800))(param_1,&local_1080);
    this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1070._0_8_;
    goto LAB_148a6886f;
  }
  if ((!bVar1) && (EVar6 < NM_Client)) {
    AActor::FlushNetDormancy((AActor *)this);
    pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                        (&this->ActiveDataLayerNames,&local_1080);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->RepActiveDataLayerNames,pTVar14);
    if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.AllocatorInstance.Data);
    }
    pTVar14 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
                        (&this->LoadedDataLayerNames,&local_1080);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->RepLoadedDataLayerNames,pTVar14);
    if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.AllocatorInstance.Data);
    }
  }
  this->DataLayersStateEpoch = this->DataLayersStateEpoch + 1;
  pwVar19 = L"";
  if (4 < (byte)LogWorldPartition._0_1_) {
    pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
    pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,&local_1060,uVar18);
    pFVar11 = FText::ToString(pFVar10);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
    pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,(FText *)local_1070,uVar20);
    FText::ToString(pFVar10);
    (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_1080);
    local_1098 = (FScriptContainerElement *)pwVar21;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.AllocatorInstance.Data);
    }
    if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1070._0_8_ !=
        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1070._0_8_ + 0x10))();
    }
    if (local_1060.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1060.TextData.Reference + 0x10))();
    }
  }
  if (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton == (UEnum *)0x0) {
    pUVar15 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerRuntimeState,(UObject *)pUVar15,
                       L"EDataLayerRuntimeState");
  }
  pFVar10 = UEnum::GetDisplayNameTextByValue
                      (Z_Registration_Info_UEnum_EDataLayerRuntimeState.OuterSingleton,
                       (FText *)local_1070,uVar18);
  FText::ToString(pFVar10);
  (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_1080);
  FCsvProfiler::RecordEventfInternal(0,L"DataLayer-%s-%s");
  if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1080.AllocatorInstance.Data);
  }
  if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1070._0_8_ !=
      (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1070._0_8_ + 0x10))();
  }
  if (-1 < BookmarkChannel->Enabled) {
    if (__BookmarkPoint286 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&__BookmarkPoint286,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                 ,0x11e,L"DataLayer-%s-%s");
      __BookmarkPoint286 = true;
    }
    pUVar9 = StaticEnum<enum_EDataLayerRuntimeState>();
    pFVar10 = UEnum::GetDisplayNameTextByValue(pUVar9,(FText *)local_1070,uVar18);
    pFVar11 = FText::ToString(pFVar10);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    puVar16 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_1080);
    if (*(int *)(puVar16 + 1) != 0) {
      pwVar19 = (wchar_t *)*puVar16;
    }
    uVar7 = CallstackTrace_GetCurrentId();
    uVar5 = FFormatArgsTrace::EncodeArguments<4096,wchar_t_const_*,wchar_t_const_*>
                      (&local_1048,pwVar19,pwVar21);
    if (uVar5 != 0) {
      FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint286,uVar7,uVar5,local_1048);
    }
    if (local_1080.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1080.AllocatorInstance.Data);
    }
    if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_1070._0_8_ !=
        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1070._0_8_ + 0x10))();
    }
  }
  ResolveEffectiveRuntimeState(this,param_1,true);
  param_3 = (bool)local_1088;
LAB_148a68b64:
  if (param_3 != false) {
    local_1070._8_8_ = &local_1080;
    local_1070._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`AWorldDataLayers::SetDataLayerRuntimeState'::__l124::<lambda_1>,bool,UDataLayerInstance_const_*>
         ::Call;
    local_1080.AllocatorInstance.Data = (FScriptContainerElement *)this;
    local_1080.ArrayNum._0_1_ = param_2;
    local_1080.ArrayNum._1_1_ = param_3;
    UDataLayerInstance::ForEachChild
              (param_1,(TFunctionRef<bool___cdecl(UDataLayerInstance_const_*)> *)local_1070);
  }
  return true;
}

// StaticRegisterNativesAWorldDataLayers @ 148a6a1f0

void __cdecl AWorldDataLayers::StaticRegisterNativesAWorldDataLayers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_AWorldDataLayers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAccelerationTable @ 148a6b970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AWorldDataLayers::UpdateAccelerationTable
          (AWorldDataLayers *this,UDataLayerInstance *param_1,bool param_2)

{
  UDataLayerInstance **ppUVar1;
  UDataLayerInstance *this_00;
  uint uVar2;
  undefined8 *puVar3;
  UClass *pUVar4;
  UObjectBaseUtility *this_01;
  FString *pFVar5;
  int iVar6;
  undefined7 in_register_00000081;
  wchar_t *pwVar7;
  UDataLayerInstance *local_res10;
  TPairInitializer<FName_&&,UDataLayerInstance_const_*_const_&> local_res18;
  FString *local_38;
  UDataLayerInstance **local_30;
  FString local_28;
  
  local_res10 = param_1;
  if (param_2) {
    local_38 = (FString *)(**(code **)(param_1->_padding_ + 800))(param_1,&local_res18.Value);
    local_30 = &local_res10;
    TSet<TTuple<FName,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,UDataLayerInstance_const_*_const_&>_>
              ((TSet<TTuple<FName,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
                *)&this->InstanceNameToInstance,&local_res18,(bool *)&local_38);
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(param_1->_padding_ + 800))
                       (param_1,&local_38,CONCAT71(in_register_00000081,param_2),param_1);
    ppUVar1 = (UDataLayerInstance **)*puVar3;
    local_res18.Value = ppUVar1;
    if (*(int *)&(this->InstanceNameToInstance).field_0x8 !=
        *(int *)&(this->InstanceNameToInstance).field_0x34) {
      uVar2 = ::GetTypeHash((FNameEntryId)(uint)ppUVar1);
      TSet<TTuple<FName,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
                           *)&this->InstanceNameToInstance,uVar2 + (int)((ulonglong)ppUVar1 >> 0x20)
                          ,(FName *)&local_res18.Value);
    }
  }
  this_00 = local_res10;
  if (local_res10 != (UDataLayerInstance *)0x0) {
    pUVar4 = UDataLayerInstanceWithAsset::StaticClass();
    iVar6 = (int)pUVar4->_padding_;
    if ((iVar6 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar6 * 8)
        == &pUVar4->_padding_)) {
      this_01 = (UObjectBaseUtility *)(**(code **)(this_00->_padding_ + 0x318))(this_00);
      if (this_01 == (UObjectBaseUtility *)0x0) {
        if ((byte)LogWorldPartition._0_1_ < 3) {
          return;
        }
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      }
      else {
        pFVar5 = UObjectBaseUtility::GetPathName(this_01,&local_28,(UObject *)0x0);
        if (param_2) {
          local_30 = &local_res10;
          local_38 = pFVar5;
          TSet<TTuple<FString,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_&&,UDataLayerInstance_const_*_const_&>_>
                    ((TSet<TTuple<FString,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
                      *)&this->AssetNameToInstance,
                     (TPairInitializer<FString_&&,UDataLayerInstance_const_*_const_&> *)&local_res18
                     ,(bool *)&local_38);
        }
        else if (*(int *)&(this->AssetNameToInstance).field_0x8 !=
                 *(int *)&(this->AssetNameToInstance).field_0x34) {
          iVar6 = (pFVar5->Data).ArrayNum;
          if (iVar6 == 0) {
            pwVar7 = L"";
            iVar6 = 0;
          }
          else {
            pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
            iVar6 = iVar6 + -1;
          }
          uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
          TSet<TTuple<FString,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FString>
                    ((TSet<TTuple<FString,UDataLayerInstance_const_*>,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>,FDefaultSetAllocator>
                      *)&this->AssetNameToInstance,uVar2,pFVar5);
        }
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ValidateGeneratedRepEnums @ 148a6c970

void __thiscall
AWorldDataLayers::ValidateGeneratedRepEnums
          (AWorldDataLayers *this,TArray<FRepRecord,TSizedDefaultAllocator<32>_> *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  int *piVar5;
  FName FVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&Name_RepActiveDataLayerNames,L"RepActiveDataLayerNames");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&Name_RepLoadedDataLayerNames,L"RepLoadedDataLayerNames");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&Name_RepEffectiveActiveDataLayerNames,L"RepEffectiveActiveDataLayerNames");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&Name_RepEffectiveLoadedDataLayerNames,L"RepEffectiveLoadedDataLayerNames");
    _Init_thread_footer(&::_TSS3);
  }
  if ((param_1->ArrayNum < 0xb) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xa0);
  bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  FVar4 = FVar6;
  if (bVar3) {
    FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  if (Name_RepActiveDataLayerNames == FVar4) {
    if ((param_1->ArrayNum < 0xc) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xb0);
    bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
    FVar4 = FVar6;
    if (bVar3) {
      FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
    }
    if (Name_RepLoadedDataLayerNames == FVar4) {
      if ((param_1->ArrayNum < 0xd) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xc0);
      bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
      FVar4 = FVar6;
      if (bVar3) {
        FVar4 = *(FName *)((longlong)pvVar1 + 0x20);
      }
      if (Name_RepEffectiveActiveDataLayerNames == FVar4) {
        if ((param_1->ArrayNum < 0xe) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar1 = *(void **)((param_1->AllocatorInstance).Data + 0xd0);
        bVar3 = IsThisNotNull(pvVar1,"FField::GetFName");
        if (bVar3) {
          FVar6 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (Name_RepEffectiveLoadedDataLayerNames == FVar6) {
          return;
        }
      }
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValid",
                     "C:\\Workspace\\ProjectDS\\Client\\Intermediate\\Build\\Win64\\ProjectDS\\Inc\\Engine\\UHT\\WorldDataLayers.gen.cpp"
                     ,0x24d,
                     L"UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWorldDataLayers"
                    );
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// _getUObject @ 148a6e580

UObject * __thiscall AWorldDataLayers::_getUObject(AWorldDataLayers *this)

{
  return (UObject *)&this[-1].LoadedDataLayerNames.HashSize;
}

// execOnDataLayerRuntimeStateChanged @ 148a702e0

void __cdecl
AWorldDataLayers::execOnDataLayerRuntimeStateChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,local_res10,local_res8[0]);
  return;
}

// execOnRep_ActiveDataLayerNames @ 148a703c0

void __cdecl
AWorldDataLayers::execOnRep_ActiveDataLayerNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[0x34].field_0x20 = *(int *)&param_1[0x34].field_0x20 + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x1f].field_0x18)
  ;
  local_18.DataPtr = *(FName **)&param_1[0x1e].field_0x20;
  iVar1 = *(int *)(param_1 + 0x1f);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x1f].field_0x18,
             &local_18);
  return;
}

// execOnRep_EffectiveActiveDataLayerNames @ 148a70460

void __cdecl
AWorldDataLayers::execOnRep_EffectiveActiveDataLayerNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[0x34].field_0x20 = *(int *)&param_1[0x34].field_0x20 + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x28].field_0x10)
  ;
  local_18.DataPtr = *(FName **)&param_1[0x27].field_0x18;
  iVar1 = *(int *)&param_1[0x27].field_0x20;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x28].field_0x10,
             &local_18);
  *(int *)&param_1[0x30].field_0x10 = *(int *)&param_1[0x30].field_0x10 + 1;
  return;
}

// execOnRep_EffectiveLoadedDataLayerNames @ 148a70510

void __cdecl
AWorldDataLayers::execOnRep_EffectiveLoadedDataLayerNames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[0x34].field_0x20 = *(int *)&param_1[0x34].field_0x20 + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x2a].field_0x10)
  ;
  local_18.DataPtr = *(FName **)(param_1 + 0x28);
  iVar1 = *(int *)&param_1[0x28].field_0x8;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x2a].field_0x10,
             &local_18);
  *(int *)&param_1[0x30].field_0x10 = *(int *)&param_1[0x30].field_0x10 + 1;
  return;
}

// execOnRep_LoadedDataLayerNames @ 148a705d0

void __cdecl
AWorldDataLayers::execOnRep_LoadedDataLayerNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uStack_1c;
  TArrayView<FName_const_,int> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[0x34].field_0x20 = *(int *)&param_1[0x34].field_0x20 + 1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x21].field_0x18)
  ;
  local_18.DataPtr = *(FName **)&param_1[0x1f].field_0x8;
  iVar1 = *(int *)&param_1[0x1f].field_0x10;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Append
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&param_1[0x21].field_0x18,
             &local_18);
  return;
}

