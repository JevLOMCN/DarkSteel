// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 6

// StaticClass @ 149483560

UClass * __cdecl AWN_PrefabStamp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PrefabStamp",
               &Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton,
               StaticRegisterNativesAWN_PrefabStamp,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_PrefabStamp>,
               InternalVTableHelperCtorCaller<AWN_PrefabStamp>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton;
}

// AWN_PrefabStamp @ 14948ca20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_PrefabStamp * __thiscall
AWN_PrefabStamp::AWN_PrefabStamp(AWN_PrefabStamp *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_PrefabStamp__6B_;
  *(undefined8 *)&(this->StampComps).Elements = 0;
  *(undefined8 *)&(this->StampComps).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StampComps).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StampComps).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StampComps).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StampComps).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StampComps).Elements.field_0x30 = 0xffffffff;
  (this->StampComps).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StampComps).HashSize = 0;
  return this;
}

// AWN_PrefabStamp @ 14948ca90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_PrefabStamp * __thiscall
AWN_PrefabStamp::AWN_PrefabStamp(AWN_PrefabStamp *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7AWN_PrefabStamp__6B_;
  *(undefined8 *)&(this->StampComps).Elements = 0;
  *(undefined8 *)&(this->StampComps).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StampComps).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StampComps).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StampComps).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StampComps).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StampComps).Elements.field_0x30 = 0xffffffff;
  (this->StampComps).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StampComps).HashSize = 0;
  return this;
}

// ~AWN_PrefabStamp @ 14948fe70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_PrefabStamp::~AWN_PrefabStamp(AWN_PrefabStamp *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7AWN_PrefabStamp__6B_;
  (this->StampComps).HashSize = 0;
  FVar1 = (this->StampComps).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StampComps).Elements);
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1610

UClass * __cdecl AWN_PrefabStamp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PrefabStamp",
               &Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton,
               StaticRegisterNativesAWN_PrefabStamp,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_PrefabStamp>,
               InternalVTableHelperCtorCaller<AWN_PrefabStamp>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton;
}

// StaticRegisterNativesAWN_PrefabStamp @ 1494ae1b0

void __cdecl AWN_PrefabStamp::StaticRegisterNativesAWN_PrefabStamp(void)

{
  return;
}

