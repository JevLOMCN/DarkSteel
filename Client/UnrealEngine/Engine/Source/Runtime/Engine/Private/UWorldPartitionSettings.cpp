// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148aaada0

UClass * __cdecl UWorldPartitionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionSettings",
               &Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton,
               StaticRegisterNativesUWorldPartitionSettings,0xb0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton;
}

// UWorldPartitionSettings @ 148ab5f80

UWorldPartitionSettings * __thiscall
UWorldPartitionSettings::UWorldPartitionSettings
          (UWorldPartitionSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->NewMapsDataLayersLogicOperator = Or;
  this->bNewMapsEnableWorldPartition = false;
  this->_padding_ = (longlong)&___7UWorldPartitionSettings__6B_;
  (this->EditorHashDefaultClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RuntimeHashDefaultClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PropertyOverridePolicy).field0_0x0.DebugPtr = (UWorldPartitionPropertyOverridePolicy *)0x0;
  *(undefined8 *)&this->UnsupportedActorClassesPerHLODLayerType = 0;
  *(undefined8 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x8 = 0;
  *(undefined8 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x20 = 0;
  this->bNewMapsEnableWorldPartitionStreaming = true;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x28 = 0;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x34 = 0;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x40 = 0;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x48 = 0;
  this->bShouldEDLPackagesInheritWorldChunkAssignmentsDuringCook = true;
  return this;
}

// UWorldPartitionSettings @ 148ab6000

UWorldPartitionSettings * __thiscall
UWorldPartitionSettings::UWorldPartitionSettings
          (UWorldPartitionSettings *this,FObjectInitializer *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->NewMapsDataLayersLogicOperator = Or;
  this->bNewMapsEnableWorldPartition = false;
  this->_padding_ = (longlong)&___7UWorldPartitionSettings__6B_;
  (this->EditorHashDefaultClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RuntimeHashDefaultClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->PropertyOverridePolicy).field0_0x0.DebugPtr = (UWorldPartitionPropertyOverridePolicy *)0x0;
  *(undefined8 *)&this->UnsupportedActorClassesPerHLODLayerType = 0;
  *(undefined8 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x8 = 0;
  *(undefined8 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x20 = 0;
  this->bNewMapsEnableWorldPartitionStreaming = true;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x28 = 0;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x2c = 0x80;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x34 = 0;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x40 = 0;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x48 = 0;
  this->bShouldEDLPackagesInheritWorldChunkAssignmentsDuringCook = true;
  return this;
}

// ~UWorldPartitionSettings @ 148ab7800

void __thiscall UWorldPartitionSettings::~UWorldPartitionSettings(UWorldPartitionSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWorldPartitionSettings__6B_;
  *(undefined4 *)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UnsupportedActorClassesPerHLODLayerType).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EHLODLayerType,FHLODLayerTypeUnsupportedActorClasses>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EHLODLayerType,FHLODLayerTypeUnsupportedActorClasses>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->UnsupportedActorClassesPerHLODLayerType);
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 148acfd90

UClass * __cdecl UWorldPartitionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionSettings",
               &Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton,
               StaticRegisterNativesUWorldPartitionSettings,0xb0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UWorldPartitionSettings>,
               InternalVTableHelperCtorCaller<UWorldPartitionSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionSettings.InnerSingleton;
}

// StaticRegisterNativesUWorldPartitionSettings @ 148adb970

void __cdecl UWorldPartitionSettings::StaticRegisterNativesUWorldPartitionSettings(void)

{
  return;
}

