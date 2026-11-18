// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 148aa6cd0

UClass * __cdecl AWorldPartitionMiniMap::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionMiniMap",
               &Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton,
               StaticRegisterNativesAWorldPartitionMiniMap,0x390,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldPartitionMiniMap>,
               InternalVTableHelperCtorCaller<AWorldPartitionMiniMap>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton;
}

// AWorldPartitionMiniMap @ 148ab32d0

AWorldPartitionMiniMap * __thiscall
AWorldPartitionMiniMap::AWorldPartitionMiniMap(AWorldPartitionMiniMap *this,FVTableHelper *param_1)

{
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AWorldPartitionMiniMap__6B_;
  (this->MiniMapTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  *(undefined8 *)&(this->ExcludedDataLayers).Elements = 0;
  *(undefined8 *)&(this->ExcludedDataLayers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludedDataLayers).Elements.field_0x20 = 0;
  (this->MiniMapWorldBounds).IsValid = '\0';
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x30 = 0xffffffff;
  (this->ExcludedDataLayers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludedDataLayers).HashSize = 0;
  this->MiniMapTileSize_DEPRECATED = 0;
  return this;
}

// AWorldPartitionMiniMap @ 148ab3350

AWorldPartitionMiniMap * __thiscall
AWorldPartitionMiniMap::AWorldPartitionMiniMap
          (AWorldPartitionMiniMap *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Sprite");
  FVar1 = *pFVar2;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  AInfo::AInfo((AInfo *)this,param_1);
  this->_padding_ = (longlong)&___7AWorldPartitionMiniMap__6B_;
  (this->MiniMapWorldBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->MiniMapWorldBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->MiniMapWorldBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->MiniMapWorldBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->MiniMapWorldBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->MiniMapWorldBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->MiniMapWorldBounds).IsValid = '\0';
  (this->MiniMapWorldBounds).Pad[0] = '\0';
  (this->MiniMapWorldBounds).Pad[1] = '\0';
  (this->MiniMapWorldBounds).Pad[2] = '\0';
  (this->MiniMapWorldBounds).Pad[3] = '\0';
  (this->MiniMapWorldBounds).Pad[4] = '\0';
  (this->MiniMapWorldBounds).Pad[5] = '\0';
  (this->MiniMapWorldBounds).Pad[6] = '\0';
  (this->MiniMapTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  *(undefined8 *)&(this->ExcludedDataLayers).Elements = 0;
  *(undefined8 *)&(this->ExcludedDataLayers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExcludedDataLayers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExcludedDataLayers).Elements.field_0x34 = 0;
  (this->ExcludedDataLayers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExcludedDataLayers).HashSize = 0;
  (this->CaptureSource).Value = '\0';
  this->WorldUnitsPerPixel = 0x32;
  this->BuilderCellSize = 0x19000;
  this->CaptureWarmupFrames = 5;
  this->MiniMapTileSize_DEPRECATED = 0;
  return this;
}

// ~AWorldPartitionMiniMap @ 148ab6f70

void __thiscall AWorldPartitionMiniMap::~AWorldPartitionMiniMap(AWorldPartitionMiniMap *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7AWorldPartitionMiniMap__6B_;
  (this->ExcludedDataLayers).HashSize = 0;
  FVar1 = (this->ExcludedDataLayers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerAsset>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UDataLayerAsset>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExcludedDataLayers).Elements);
  AInfo::~AInfo((AInfo *)this);
  return;
}

// GetPrivateStaticClass @ 148acecc0

UClass * __cdecl AWorldPartitionMiniMap::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionMiniMap",
               &Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton,
               StaticRegisterNativesAWorldPartitionMiniMap,0x390,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWorldPartitionMiniMap>,
               InternalVTableHelperCtorCaller<AWorldPartitionMiniMap>,local_res8,AInfo::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWorldPartitionMiniMap.InnerSingleton;
}

// IsEditorOnly @ 148ad43a0

bool __thiscall AWorldPartitionMiniMap::IsEditorOnly(AWorldPartitionMiniMap *this)

{
  return true;
}

// PostLoad @ 148ad6070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWorldPartitionMiniMap::PostLoad(AWorldPartitionMiniMap *this)

{
  UTexture2D *this_00;
  int iVar1;
  int iVar2;
  
  AActor::PostLoad((AActor *)this);
  iVar2 = this->MiniMapTileSize_DEPRECATED;
  if (iVar2 != 0) {
    this->MiniMapTileSize_DEPRECATED = 0;
    iVar1 = (int)(0x19000 / (longlong)iVar2);
    iVar2 = 100000;
    if (iVar1 < 100000) {
      iVar2 = iVar1;
    }
    iVar1 = 10;
    if (10 < iVar2) {
      iVar1 = iVar2;
    }
    this->WorldUnitsPerPixel = iVar1;
  }
  this_00 = (this->MiniMapTexture).field0_0x0.DebugPtr;
  if (this_00 != (UTexture2D *)0x0) {
    UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_TextExportTransient);
    return;
  }
  return;
}

// StaticRegisterNativesAWorldPartitionMiniMap @ 148adb7d0

void __cdecl AWorldPartitionMiniMap::StaticRegisterNativesAWorldPartitionMiniMap(void)

{
  return;
}

