// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 51

// StaticClass @ 148a2aaa0

UClass * __cdecl UDataLayerSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerSubsystem",
               &Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton,
               StaticRegisterNativesUDataLayerSubsystem,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerSubsystem>,
               InternalVTableHelperCtorCaller<UDataLayerSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton;
}

// GetDataLayerInstance<FName> @ 148a3ae30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerSubsystem::GetDataLayerInstance<FName>
          (UDataLayerSubsystem *this,FName *param_1,ULevel *param_2)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  UClass *pUVar2;
  AWorldDataLayers *this_01;
  UDataLayerInstance *pUVar3;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar1 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2);
    this_01 = UWorld::GetWorldDataLayers(pUVar1);
    if (this_01 != (AWorldDataLayers *)0x0) {
      pUVar3 = AWorldDataLayers::GetDataLayerInstance(this_01,param_1);
      return pUVar3;
    }
  }
  return (UDataLayerInstance *)0x0;
}

// UDataLayerSubsystem @ 148a42af0

UDataLayerSubsystem * __thiscall
UDataLayerSubsystem::UDataLayerSubsystem(UDataLayerSubsystem *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this_00 = &(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UDataLayerSubsystem__6B_;
  *(undefined8 *)&this->OnDataLayerRuntimeStateChanged = 0;
  *(undefined8 *)&(this->OnDataLayerRuntimeStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataLayerRuntimeStateChanged).field_0x10 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UDataLayerSubsystem @ 148a42b50

UDataLayerSubsystem * __thiscall UDataLayerSubsystem::UDataLayerSubsystem(UDataLayerSubsystem *this)

{
  undefined1 *this_00;
  
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this_00 = &(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UDataLayerSubsystem__6B_;
  *(undefined8 *)&this->OnDataLayerRuntimeStateChanged = 0;
  *(undefined8 *)&(this->OnDataLayerRuntimeStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataLayerRuntimeStateChanged).field_0x10 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UDataLayerSubsystem @ 148a44800

void __thiscall UDataLayerSubsystem::~UDataLayerSubsystem(UDataLayerSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataLayerSubsystem__6B_;
  pvVar1 = *(void **)&(this->DataLayerLoadingPolicyClass).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->OnDataLayerRuntimeStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataLayerRuntimeStateChanged);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// DoesSupportWorldType @ 148a50680

bool __thiscall UDataLayerSubsystem::DoesSupportWorldType(UDataLayerSubsystem *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UWorldSubsystem::DoesSupportWorldType((UWorldSubsystem *)this,param_1);
  if (((!bVar1) && (param_1 != Inactive)) && (param_1 != EditorPreview)) {
    return false;
  }
  return true;
}

// DrawDataLayersStatus @ 148a51400

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
UDataLayerSubsystem::DrawDataLayersStatus
          (UDataLayerSubsystem *this,UCanvas *param_1,TVector2<double> *param_2)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    UDataLayerManager::DrawDataLayersStatus(this_00,param_1,param_2);
  }
  return;
}

// DumpDataLayers @ 148a519f0

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
UDataLayerSubsystem::DumpDataLayers(UDataLayerSubsystem *this,FOutputDevice *param_1)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    UDataLayerManager::DumpDataLayers(this_00,param_1);
    return;
  }
  return;
}

// GetDataLayer @ 148a551f0

UDataLayerInstance * __thiscall
UDataLayerSubsystem::GetDataLayer(UDataLayerSubsystem *this,FActorDataLayer *param_1)

{
  UDataLayerInstance *pUVar1;
  
  pUVar1 = GetDataLayerFromName(this,param_1->Name);
  return pUVar1;
}

// GetDataLayerEffectiveRuntimeState @ 148a55200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerEffectiveRuntimeState
          (UDataLayerSubsystem *this,FActorDataLayer *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  UClass *pUVar3;
  AWorldDataLayers *this_01;
  UDataLayerInstance *pUVar4;
  
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 == (UDataLayerManager *)0x0) {
    return Unloaded;
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
  this_01 = UWorld::GetWorldDataLayers(pUVar2);
  if (this_01 != (AWorldDataLayers *)0x0) {
    pUVar4 = AWorldDataLayers::GetDataLayerInstance(this_01,&param_1->Name);
    EVar1 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this_00,pUVar4);
    return EVar1;
  }
  EVar1 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState
                    (this_00,(UDataLayerInstance *)0x0);
  return EVar1;
}

// GetDataLayerEffectiveRuntimeState @ 148a55290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerEffectiveRuntimeState
          (UDataLayerSubsystem *this,UDataLayerInstance *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 != (UDataLayerManager *)0x0) {
    EVar1 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this_00,param_1);
    return EVar1;
  }
  return Unloaded;
}

// GetDataLayerEffectiveRuntimeStateByLabel @ 148a552d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerEffectiveRuntimeStateByLabel
          (UDataLayerSubsystem *this,FName *param_1)

{
  EDataLayerRuntimeState EVar1;
  UDataLayerInstance *pUVar2;
  UWorld *pUVar3;
  UDataLayerManager *this_00;
  
  pUVar2 = GetDataLayerFromLabel(this,*param_1);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar3);
  if (this_00 != (UDataLayerManager *)0x0) {
    EVar1 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this_00,pUVar2);
    return EVar1;
  }
  return Unloaded;
}

// GetDataLayerEffectiveRuntimeStateByName @ 148a55790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerEffectiveRuntimeStateByName
          (UDataLayerSubsystem *this,FName *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  UClass *pUVar3;
  AWorldDataLayers *this_01;
  UDataLayerInstance *pUVar4;
  
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 == (UDataLayerManager *)0x0) {
    return Unloaded;
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
  this_01 = UWorld::GetWorldDataLayers(pUVar2);
  if (this_01 != (AWorldDataLayers *)0x0) {
    pUVar4 = AWorldDataLayers::GetDataLayerInstance(this_01,param_1);
    EVar1 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this_00,pUVar4);
    return EVar1;
  }
  EVar1 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState
                    (this_00,(UDataLayerInstance *)0x0);
  return EVar1;
}

// GetDataLayerFromLabel @ 148a55980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerSubsystem::GetDataLayerFromLabel(UDataLayerSubsystem *this,FName param_1)

{
  UDataLayerInstance *pUVar1;
  UWorld *this_00;
  AWorldDataLayers *this_01;
  FString *this_02;
  FString *this_03;
  FScriptContainerElement *pFVar2;
  FName local_res10;
  UDataLayerInstance *local_res18;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_01 = UWorld::GetWorldDataLayers(this_00);
  if (this_01 != (AWorldDataLayers *)0x0) {
    this_02 = ::FName::ToString(&local_res10,&local_18);
    this_03 = ::FString::TrimStartAndEnd(this_02,(FString *)local_38);
    ::FString::Replace(this_03,(FString *)local_48,L"\"",L"",IgnoreCase);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    pFVar2 = (this_02->Data).AllocatorInstance.Data;
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
    local_res18 = (UDataLayerInstance *)0x0;
    local_48._8_8_ = &local_res18;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`AWorldDataLayers::GetDataLayerFromLabel'::__l2::<lambda_1>,bool,UDataLayerInstance_*>
         ::Call;
    local_38._8_8_ = local_48;
    AWorldDataLayers::ForEachDataLayerInstance
              (this_01,(TFunctionRef<bool___cdecl(UDataLayerInstance_*)> *)local_38);
    pUVar1 = local_res18;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return pUVar1;
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerFromName @ 148a55ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerSubsystem::GetDataLayerFromName(UDataLayerSubsystem *this,FName param_1)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  UClass *pUVar2;
  AWorldDataLayers *pAVar3;
  UDataLayerInstance **ppUVar4;
  FWeakObjectPtr *this_01;
  UDataLayerInstance *pUVar5;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar1 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2);
    pAVar3 = UWorld::GetWorldDataLayers(pUVar1);
    if ((pAVar3 != (AWorldDataLayers *)0x0) && (param_1 != (FName)0x0)) {
      ppUVar4 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                        *)&pAVar3->InstanceNameToInstance,param_1);
      if (ppUVar4 != (UDataLayerInstance **)0x0) {
        return *ppUVar4;
      }
      this_01 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                 ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                         *)&pAVar3->DeprecatedDataLayerNameToDataLayerInstance,param_1)->WeakPtr;
      if (this_01 != (FWeakObjectPtr *)0x0) {
        pUVar5 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_01);
        return pUVar5;
      }
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceEffectiveRuntimeState @ 148a55e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerInstanceEffectiveRuntimeState
          (UDataLayerSubsystem *this,UDataLayerAsset *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  UDataLayerInstance *pUVar3;
  UDataLayerAsset *local_res10 [3];
  
  local_res10[0] = param_1;
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar3 = UDataLayerManager::GetDataLayerInstance<UDataLayerAsset_const_*>(this_00,local_res10);
    EVar1 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this_00,pUVar3);
    return EVar1;
  }
  return Unloaded;
}

// GetDataLayerInstanceFromAsset @ 148a55f60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerSubsystem::GetDataLayerInstanceFromAsset
          (UDataLayerSubsystem *this,UDataLayerAsset *param_1)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  UDataLayerInstance *pUVar2;
  UDataLayerAsset *local_res10 [3];
  
  local_res10[0] = param_1;
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar2 = UDataLayerManager::GetDataLayerInstance<UDataLayerAsset_const_*>(this_00,local_res10);
    return pUVar2;
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceFromAssetName @ 148a56090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerInstance * __thiscall
UDataLayerSubsystem::GetDataLayerInstanceFromAssetName(UDataLayerSubsystem *this,FName *param_1)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  UClass *pUVar2;
  AWorldDataLayers *pAVar3;
  FString *pFVar4;
  UDataLayerInstance **ppUVar5;
  FString local_18;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar1 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2);
    pAVar3 = UWorld::GetWorldDataLayers(pUVar1);
    if ((pAVar3 != (AWorldDataLayers *)0x0) && (*param_1 != (FName)0x0)) {
      pFVar4 = ::FName::ToString(param_1,&local_18);
      ppUVar5 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                        *)&pAVar3->AssetNameToInstance,pFVar4);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (ppUVar5 != (UDataLayerInstance **)0x0) {
        return *ppUVar5;
      }
    }
  }
  return (UDataLayerInstance *)0x0;
}

// GetDataLayerInstanceRuntimeState @ 148a56410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerInstanceRuntimeState
          (UDataLayerSubsystem *this,UDataLayerAsset *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  UDataLayerInstance *pUVar3;
  UDataLayerAsset *local_res10 [3];
  
  local_res10[0] = param_1;
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar3 = UDataLayerManager::GetDataLayerInstance<UDataLayerAsset_const_*>(this_00,local_res10);
    EVar1 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,pUVar3);
    return EVar1;
  }
  return Unloaded;
}

// GetDataLayerRuntimeState @ 148a569a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerRuntimeState(UDataLayerSubsystem *this,FActorDataLayer *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  UClass *pUVar3;
  AWorldDataLayers *this_01;
  UDataLayerInstance *pUVar4;
  
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 == (UDataLayerManager *)0x0) {
    return Unloaded;
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
  this_01 = UWorld::GetWorldDataLayers(pUVar2);
  if (this_01 != (AWorldDataLayers *)0x0) {
    pUVar4 = AWorldDataLayers::GetDataLayerInstance(this_01,&param_1->Name);
    EVar1 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,pUVar4);
    return EVar1;
  }
  EVar1 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,(UDataLayerInstance *)0x0);
  return EVar1;
}

// GetDataLayerRuntimeState @ 148a56a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerRuntimeState(UDataLayerSubsystem *this,UDataLayerInstance *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 != (UDataLayerManager *)0x0) {
    EVar1 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,param_1);
    return EVar1;
  }
  return Unloaded;
}

// GetDataLayerRuntimeStateByLabel @ 148a56a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerRuntimeStateByLabel(UDataLayerSubsystem *this,FName *param_1)

{
  EDataLayerRuntimeState EVar1;
  UDataLayerInstance *pUVar2;
  UWorld *pUVar3;
  UDataLayerManager *this_00;
  
  pUVar2 = GetDataLayerFromLabel(this,*param_1);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar3);
  if (this_00 != (UDataLayerManager *)0x0) {
    EVar1 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,pUVar2);
    return EVar1;
  }
  return Unloaded;
}

// GetDataLayerRuntimeStateByName @ 148a56f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerRuntimeState __thiscall
UDataLayerSubsystem::GetDataLayerRuntimeStateByName(UDataLayerSubsystem *this,FName *param_1)

{
  EDataLayerRuntimeState EVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  UClass *pUVar3;
  AWorldDataLayers *this_01;
  UDataLayerInstance *pUVar4;
  
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 == (UDataLayerManager *)0x0) {
    return Unloaded;
  }
  pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
  this_01 = UWorld::GetWorldDataLayers(pUVar2);
  if (this_01 != (AWorldDataLayers *)0x0) {
    pUVar4 = AWorldDataLayers::GetDataLayerInstance(this_01,param_1);
    EVar1 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,pUVar4);
    return EVar1;
  }
  EVar1 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,(UDataLayerInstance *)0x0);
  return EVar1;
}

// GetEffectiveActiveDataLayerNames @ 148a57b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UDataLayerSubsystem::GetEffectiveActiveDataLayerNames(UDataLayerSubsystem *this)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDataLayerSubsystem::GetEffectiveActiveDataLayerNames'::__l2::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    pTVar2 = UDataLayerManager::GetEffectiveActiveDataLayerNames(this_00);
    return pTVar2;
  }
  return &::Empty;
}

// GetEffectiveLoadedDataLayerNames @ 148a57c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
UDataLayerSubsystem::GetEffectiveLoadedDataLayerNames(UDataLayerSubsystem *this)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDataLayerSubsystem::GetEffectiveLoadedDataLayerNames'::__l2::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    pTVar2 = UDataLayerManager::GetEffectiveLoadedDataLayerNames(this_00);
    return pTVar2;
  }
  return &::Empty;
}

// GetPrivateStaticClass @ 148a5a620

UClass * __cdecl UDataLayerSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataLayerSubsystem",
               &Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton,
               StaticRegisterNativesUDataLayerSubsystem,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataLayerSubsystem>,
               InternalVTableHelperCtorCaller<UDataLayerSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataLayerSubsystem.InnerSingleton;
}

// IsAnyDataLayerInEffectiveRuntimeState @ 148a5dfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDataLayerSubsystem::IsAnyDataLayerInEffectiveRuntimeState
          (UDataLayerSubsystem *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          EDataLayerRuntimeState param_2)

{
  code *pcVar1;
  FName *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  UWorld *pUVar6;
  UDataLayerManager *this_00;
  TArrayView<FName_const_,int> *pTVar7;
  UClass *pUVar8;
  AWorldDataLayers *pAVar9;
  FWorldDataLayersEffectiveStates *pFVar10;
  TArrayView<FName_const_,int> local_38;
  TArrayView<FName_const_,int> local_28 [2];
  
  pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar6);
  if (this_00 == (UDataLayerManager *)0x0) {
    return false;
  }
  pTVar7 = TArrayView<FName_const_,int>::
           TArrayView<FName_const_,int><TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_>
                     (local_28,param_1);
  pFVar10 = &EmptyStates;
  pFVar2 = pTVar7->DataPtr;
  uVar3._0_4_ = pTVar7->ArrayNum;
  uVar3._4_4_ = *(undefined4 *)&pTVar7->field_0xc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FWorldDataLayersEffectiveStates::FWorldDataLayersEffectiveStates(&EmptyStates);
      atexit(`UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState'::__l2::
             _dynamic_atexit_destructor_for__EmptyStates__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
  pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar8);
  pAVar9 = UWorld::GetWorldDataLayers(pUVar6);
  if (pAVar9 != (AWorldDataLayers *)0x0) {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\WorldDataLayers.cpp"
                         ,0x174,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    pFVar10 = &pAVar9->EffectiveStates;
  }
  local_38.DataPtr = pFVar2;
  local_38._8_8_ = uVar3;
  bVar4 = UDataLayerManager::IsAnyDataLayerInEffectiveRuntimeState(&local_38,param_2,pFVar10);
  return bVar4;
}

// SetDataLayerInstanceRuntimeState @ 148a68450

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
UDataLayerSubsystem::SetDataLayerInstanceRuntimeState
          (UDataLayerSubsystem *this,UDataLayerAsset *param_1,EDataLayerRuntimeState param_2,
          bool param_3)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  UDataLayerInstance *pUVar2;
  UDataLayerAsset *local_res10;
  
  local_res10 = param_1;
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar2 = UDataLayerManager::GetDataLayerInstance<UDataLayerAsset_const_*>(this_00,&local_res10);
    UDataLayerManager::SetDataLayerInstanceRuntimeState(this_00,pUVar2,param_2,param_3);
  }
  return;
}

// SetDataLayerRuntimeState @ 148a68cf0

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
UDataLayerSubsystem::SetDataLayerRuntimeState
          (UDataLayerSubsystem *this,FActorDataLayer *param_1,EDataLayerRuntimeState param_2,
          bool param_3)

{
  UWorld *pUVar1;
  UDataLayerManager *pUVar2;
  UClass *pUVar3;
  AWorldDataLayers *this_00;
  UDataLayerInstance *pUVar4;
  FString local_18;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  pUVar2 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (pUVar2 != (UDataLayerManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar1 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar2,pUVar3);
    this_00 = UWorld::GetWorldDataLayers(pUVar1);
    if ((this_00 == (AWorldDataLayers *)0x0) ||
       (pUVar4 = AWorldDataLayers::GetDataLayerInstance(this_00,&param_1->Name),
       pUVar4 == (UDataLayerInstance *)0x0)) {
      if (2 < (byte)LogWorldPartition._0_1_) {
        ::FName::ToString(&param_1->Name,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      pUVar2 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
      if (pUVar2 != (UDataLayerManager *)0x0) {
        UDataLayerManager::SetDataLayerInstanceRuntimeState(pUVar2,pUVar4,param_2,param_3);
      }
    }
  }
  return;
}

// SetDataLayerRuntimeState @ 148a68e00

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
UDataLayerSubsystem::SetDataLayerRuntimeState
          (UDataLayerSubsystem *this,UDataLayerInstance *param_1,EDataLayerRuntimeState param_2,
          bool param_3)

{
  UWorld *pUVar1;
  UDataLayerManager *this_00;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar1);
  if (this_00 != (UDataLayerManager *)0x0) {
    UDataLayerManager::SetDataLayerInstanceRuntimeState(this_00,param_1,param_2,param_3);
  }
  return;
}

// SetDataLayerRuntimeStateByLabel @ 148a68e60

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
UDataLayerSubsystem::SetDataLayerRuntimeStateByLabel
          (UDataLayerSubsystem *this,FName *param_1,EDataLayerRuntimeState param_2,bool param_3)

{
  UDataLayerInstance *pUVar1;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  FString local_18;
  
  pUVar1 = GetDataLayerFromLabel(this,*param_1);
  if (pUVar1 == (UDataLayerInstance *)0x0) {
    if (2 < (byte)LogWorldPartition._0_1_) {
      ::FName::ToString(param_1,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
    if (this_00 != (UDataLayerManager *)0x0) {
      UDataLayerManager::SetDataLayerInstanceRuntimeState(this_00,pUVar1,param_2,param_3);
    }
  }
  return;
}

// StaticRegisterNativesUDataLayerSubsystem @ 148a6a470

void __cdecl UDataLayerSubsystem::StaticRegisterNativesUDataLayerSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UDataLayerSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetActiveDataLayerNames @ 148a6e650

void __cdecl
UDataLayerSubsystem::execGetActiveDataLayerNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  void *pvVar1;
  
  pvVar1 = ThreadLocalStoragePointer;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetActiveDataLayerNames(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetActiveDataLayerNames(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetActiveDataLayerNames(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UDataLayerSubsystem::GetActiveDataLayerNames'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetActiveDataLayerNames(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (param_3,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                     &`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetActiveDataLayerNames(void)const___ptr64'
                      ::__l2::EmptySet);
  return;
}

// execGetDataLayer @ 148a6e8d0

void __cdecl UDataLayerSubsystem::execGetDataLayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDataLayerInstance *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetDataLayerFromName((UDataLayerSubsystem *)param_1,*pFVar3);
  *(UDataLayerInstance **)param_3 = pUVar2;
  return;
}

// execGetDataLayerEffectiveRuntimeState @ 148a6e980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDataLayerRuntimeState EVar2;
  UWorld *pUVar3;
  UDataLayerManager *this;
  UClass *pUVar4;
  AWorldDataLayers *this_00;
  UDataLayerInstance *pUVar5;
  FName *pFVar6;
  FName local_res10;
  
  pUVar5 = (UDataLayerInstance *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar6 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar6 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar3);
  if (this == (UDataLayerManager *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar3 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    this_00 = UWorld::GetWorldDataLayers(pUVar3);
    if (this_00 != (AWorldDataLayers *)0x0) {
      pUVar5 = AWorldDataLayers::GetDataLayerInstance(this_00,pFVar6);
    }
    EVar2 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this,pUVar5);
    *(EDataLayerRuntimeState *)param_3 = EVar2;
  }
  return;
}

// execGetDataLayerEffectiveRuntimeStateByLabel @ 148a6ea80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerEffectiveRuntimeStateByLabel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDataLayerRuntimeState EVar2;
  UDataLayerInstance *pUVar3;
  UWorld *pUVar4;
  UDataLayerManager *this;
  FName *pFVar5;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar5 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetDataLayerFromLabel((UDataLayerSubsystem *)param_1,*pFVar5);
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar4);
  if (this == (UDataLayerManager *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    EVar2 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this,pUVar3);
    *(EDataLayerRuntimeState *)param_3 = EVar2;
  }
  return;
}

// execGetDataLayerFromLabel @ 148a6eb60

void __cdecl
UDataLayerSubsystem::execGetDataLayerFromLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDataLayerInstance *pUVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetDataLayerFromLabel((UDataLayerSubsystem *)param_1,local_res10);
  *(UDataLayerInstance **)param_3 = pUVar2;
  return;
}

// execGetDataLayerFromName @ 148a6ec00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerFromName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UWorld *pUVar3;
  UDataLayerManager *this;
  UClass *pUVar4;
  AWorldDataLayers *pAVar5;
  UDataLayerInstance **ppUVar6;
  FWeakObjectPtr *this_00;
  UDataLayerInstance *pUVar7;
  FName local_res10;
  
  pUVar7 = (UDataLayerInstance *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar3);
  if (this != (UDataLayerManager *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar3 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar4);
    pAVar5 = UWorld::GetWorldDataLayers(pUVar3);
    if ((pAVar5 != (AWorldDataLayers *)0x0) && (FVar2 != (FName)0x0)) {
      ppUVar6 = TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FName,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UDataLayerInstance_const_*,0>_>
                        *)&pAVar5->InstanceNameToInstance,FVar2);
      if (ppUVar6 == (UDataLayerInstance **)0x0) {
        this_00 = &TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                   ::Find((TMapBase<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UDataLayerInstance,FWeakObjectPtr>,0>_>
                           *)&pAVar5->DeprecatedDataLayerNameToDataLayerInstance,FVar2)->WeakPtr;
        pUVar7 = (UDataLayerInstance *)0x0;
        if (this_00 != (FWeakObjectPtr *)0x0) {
          pUVar7 = (UDataLayerInstance *)FWeakObjectPtr::Get(this_00);
        }
      }
      else {
        pUVar7 = *ppUVar6;
      }
    }
  }
  *(UDataLayerInstance **)param_3 = pUVar7;
  return;
}

// execGetDataLayerInstanceEffectiveRuntimeState @ 148a6eed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerInstanceEffectiveRuntimeState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  EDataLayerRuntimeState EVar2;
  UWorld *pUVar3;
  UDataLayerManager *this_00;
  UClass *pUVar4;
  AWorldDataLayers *pAVar5;
  FString *pFVar6;
  UDataLayerInstance **ppUVar7;
  UDataLayerInstance *pUVar8;
  UObjectBaseUtility *local_res10;
  FString local_28;
  
  pUVar8 = (UDataLayerInstance *)0x0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar3);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar3 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
    pAVar5 = UWorld::GetWorldDataLayers(pUVar3);
    if ((pAVar5 != (AWorldDataLayers *)0x0) && (this != (UObjectBaseUtility *)0x0)) {
      pFVar6 = UObjectBaseUtility::GetPathName(this,&local_28,(UObject *)0x0);
      ppUVar7 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                        *)&pAVar5->AssetNameToInstance,pFVar6);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (ppUVar7 != (UDataLayerInstance **)0x0) {
        pUVar8 = *ppUVar7;
      }
    }
    EVar2 = UDataLayerManager::GetDataLayerInstanceEffectiveRuntimeState(this_00,pUVar8);
    *(EDataLayerRuntimeState *)param_3 = EVar2;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDataLayerInstanceFromAsset @ 148a6f100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerInstanceFromAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UWorld *pUVar2;
  UDataLayerManager *this_00;
  UClass *pUVar3;
  AWorldDataLayers *pAVar4;
  FString *pFVar5;
  UDataLayerInstance **ppUVar6;
  UDataLayerInstance *pUVar7;
  UObjectBaseUtility *local_res10;
  FString local_18;
  
  pUVar7 = (UDataLayerInstance *)0x0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar2);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar2 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
    pAVar4 = UWorld::GetWorldDataLayers(pUVar2);
    if ((pAVar4 != (AWorldDataLayers *)0x0) && (this != (UObjectBaseUtility *)0x0)) {
      pFVar5 = UObjectBaseUtility::GetPathName(this,&local_18,(UObject *)0x0);
      ppUVar6 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                        *)&pAVar4->AssetNameToInstance,pFVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      pUVar7 = (UDataLayerInstance *)0x0;
      if (ppUVar6 != (UDataLayerInstance **)0x0) {
        pUVar7 = *ppUVar6;
      }
    }
  }
  *(UDataLayerInstance **)param_3 = pUVar7;
  return;
}

// execGetDataLayerInstanceRuntimeState @ 148a6f410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerInstanceRuntimeState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  EDataLayerRuntimeState EVar2;
  UWorld *pUVar3;
  UDataLayerManager *this_00;
  UClass *pUVar4;
  AWorldDataLayers *pAVar5;
  FString *pFVar6;
  UDataLayerInstance **ppUVar7;
  UDataLayerInstance *pUVar8;
  UObjectBaseUtility *local_res10;
  FString local_28;
  
  pUVar8 = (UDataLayerInstance *)0x0;
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar3);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar4 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar3 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar4);
    pAVar5 = UWorld::GetWorldDataLayers(pUVar3);
    if ((pAVar5 != (AWorldDataLayers *)0x0) && (this != (UObjectBaseUtility *)0x0)) {
      pFVar6 = UObjectBaseUtility::GetPathName(this,&local_28,(UObject *)0x0);
      ppUVar7 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                        *)&pAVar5->AssetNameToInstance,pFVar6);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (ppUVar7 != (UDataLayerInstance **)0x0) {
        pUVar8 = *ppUVar7;
      }
    }
    EVar2 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this_00,pUVar8);
    *(EDataLayerRuntimeState *)param_3 = EVar2;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDataLayerRuntimeState @ 148a6f6f0

void __cdecl
UDataLayerSubsystem::execGetDataLayerRuntimeState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDataLayerRuntimeState EVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = GetDataLayerRuntimeState((UDataLayerSubsystem *)param_1,(FActorDataLayer *)pFVar3);
  *(EDataLayerRuntimeState *)param_3 = EVar2;
  return;
}

// execGetDataLayerRuntimeStateByLabel @ 148a6f7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerRuntimeStateByLabel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDataLayerRuntimeState EVar2;
  UDataLayerInstance *pUVar3;
  UWorld *pUVar4;
  UDataLayerManager *this;
  FName *pFVar5;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar5 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetDataLayerFromLabel((UDataLayerSubsystem *)param_1,*pFVar5);
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar4);
  if (this == (UDataLayerManager *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    EVar2 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this,pUVar3);
    *(EDataLayerRuntimeState *)param_3 = EVar2;
  }
  return;
}

// execGetDataLayerState @ 148a6f910

void __cdecl
UDataLayerSubsystem::execGetDataLayerState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDataLayerRuntimeState EVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar2 = GetDataLayerRuntimeState((UDataLayerSubsystem *)param_1,(FActorDataLayer *)pFVar3);
  *(EDataLayerRuntimeState *)param_3 = EVar2;
  return;
}

// execGetDataLayerStateByLabel @ 148a6f9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execGetDataLayerStateByLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDataLayerRuntimeState EVar2;
  UDataLayerInstance *pUVar3;
  UWorld *pUVar4;
  UDataLayerManager *this;
  FName *pFVar5;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar5 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetDataLayerFromLabel((UDataLayerSubsystem *)param_1,*pFVar5);
  pUVar4 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar4);
  if (this == (UDataLayerManager *)0x0) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    EVar2 = UDataLayerManager::GetDataLayerInstanceRuntimeState(this,pUVar3);
    *(EDataLayerRuntimeState *)param_3 = EVar2;
  }
  return;
}

// execGetLoadedDataLayerNames @ 148a6fd70

void __cdecl
UDataLayerSubsystem::execGetLoadedDataLayerNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  void *pvVar1;
  
  pvVar1 = ThreadLocalStoragePointer;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetLoadedDataLayerNames(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetLoadedDataLayerNames(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetLoadedDataLayerNames(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UDataLayerSubsystem::GetLoadedDataLayerNames'::__l2::
             _dynamic_atexit_destructor_for__EmptySet__);
      _Init_thread_footer(&`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetLoadedDataLayerNames(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (param_3,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                     &`public:_class_TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_const&___ptr64___cdecl_UDataLayerSubsystem::GetLoadedDataLayerNames(void)const___ptr64'
                      ::__l2::EmptySet);
  return;
}

// execSetDataLayerInstanceRuntimeState @ 148a708a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDataLayerSubsystem::execSetDataLayerInstanceRuntimeState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  EDataLayerRuntimeState EVar4;
  UObjectBaseUtility *this;
  bool bVar5;
  UWorld *pUVar6;
  UDataLayerManager *this_00;
  UClass *pUVar7;
  AWorldDataLayers *pAVar8;
  FString *pFVar9;
  UDataLayerInstance **ppUVar10;
  longlong lVar11;
  UDataLayerInstance *pUVar12;
  bool bVar13;
  EDataLayerRuntimeState local_res10 [16];
  int local_res20 [2];
  UObjectBaseUtility *local_48;
  FString local_40;
  
  pUVar12 = (UDataLayerInstance *)0x0;
  local_48 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = Unloaded;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this = local_48;
  EVar4 = local_res10[0];
  bVar13 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)param_1);
  this_00 = UDataLayerManager::GetDataLayerManager<UWorld>(pUVar6);
  if (this_00 != (UDataLayerManager *)0x0) {
    pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar6 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar7);
    pAVar8 = UWorld::GetWorldDataLayers(pUVar6);
    if (pAVar8 != (AWorldDataLayers *)0x0) {
      if (this != (UObjectBaseUtility *)0x0) {
        pFVar9 = UObjectBaseUtility::GetPathName(this,&local_40,(UObject *)0x0);
        ppUVar10 = TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                   ::Find((TMapBase<FString,UDataLayerInstance_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UDataLayerInstance_const_*,0>_>
                           *)&pAVar8->AssetNameToInstance,pFVar9);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
        if (ppUVar10 != (UDataLayerInstance **)0x0) {
          pUVar12 = *ppUVar10;
        }
      }
      if (pUVar12 != (UDataLayerInstance *)0x0) {
        lVar11 = (**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12);
        if (lVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetOuterWorld()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\DataLayerInstance.cpp"
                             ,0x3b,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pUVar6 = (UWorld *)(**(code **)(pUVar12->_padding_ + 0x2b0))(pUVar12);
        pAVar8 = UWorld::GetWorldDataLayers(pUVar6);
        AWorldDataLayers::SetDataLayerRuntimeState(pAVar8,pUVar12,EVar4,bVar13);
        return;
      }
    }
    if (1 < (byte)LogWorldPartition._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    }
  }
  return;
}

// execSetDataLayerRuntimeState @ 148a70cc0

void __cdecl
UDataLayerSubsystem::execSetDataLayerRuntimeState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  EDataLayerRuntimeState local_res10 [16];
  int local_res20 [2];
  FName local_28 [2];
  
  local_28[0].ComparisonIndex.Value = 0;
  local_28[0].Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = Unloaded;
  pFVar2 = local_28;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDataLayerRuntimeState
            ((UDataLayerSubsystem *)param_1,(FActorDataLayer *)pFVar2,local_res10[0],
             local_res20[0] != 0);
  return;
}

// execSetDataLayerRuntimeStateByLabel @ 148a70df0

void __cdecl
UDataLayerSubsystem::execSetDataLayerRuntimeStateByLabel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  EDataLayerRuntimeState local_res10 [16];
  int local_res20 [2];
  FName local_28 [2];
  
  local_28[0].ComparisonIndex.Value = 0;
  local_28[0].Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = Unloaded;
  pFVar2 = local_28;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDataLayerRuntimeStateByLabel
            ((UDataLayerSubsystem *)param_1,pFVar2,local_res10[0],local_res20[0] != 0);
  return;
}

// execSetDataLayerState @ 148a70f20

void __cdecl
UDataLayerSubsystem::execSetDataLayerState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  EDataLayerRuntimeState local_res10 [16];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Unloaded;
  pFVar2 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDataLayerRuntimeState
            ((UDataLayerSubsystem *)param_1,(FActorDataLayer *)pFVar2,local_res10[0],false);
  return;
}

// execSetDataLayerStateByLabel @ 148a71000

void __cdecl
UDataLayerSubsystem::execSetDataLayerStateByLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName *pFVar2;
  EDataLayerRuntimeState local_res10 [16];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Unloaded;
  pFVar2 = &local_res20;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar2 = (FName *)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDataLayerRuntimeStateByLabel((UDataLayerSubsystem *)param_1,pFVar2,local_res10[0],false);
  return;
}

