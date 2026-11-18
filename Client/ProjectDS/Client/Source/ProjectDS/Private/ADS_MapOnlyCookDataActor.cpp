// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4ef8b0

UClass * __cdecl ADS_MapOnlyCookDataActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_MapOnlyCookDataActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MapOnlyCookDataActor",
               &Z_Registration_Info_UClass_ADS_MapOnlyCookDataActor.InnerSingleton,
               StaticRegisterNativesADS_MapOnlyCookDataActor,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_MapOnlyCookDataActor>,
               InternalVTableHelperCtorCaller<ADS_MapOnlyCookDataActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_MapOnlyCookDataActor.InnerSingleton;
}

// ADS_MapOnlyCookDataActor @ 14b4f0f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_MapOnlyCookDataActor * __thiscall
ADS_MapOnlyCookDataActor::ADS_MapOnlyCookDataActor
          (ADS_MapOnlyCookDataActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_MapOnlyCookDataActor__6B_;
  *(undefined8 *)&this->MapDataTable = 0;
  *(undefined8 *)&(this->MapDataTable).field_0x8 = 0;
  *(undefined8 *)&(this->MapDataTable).field_0x20 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x28 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapDataTable).field_0x34 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapDataTable).field_0x40 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x48 = 0;
  return this;
}

// ADS_MapOnlyCookDataActor @ 14b4f0f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_MapOnlyCookDataActor * __thiscall
ADS_MapOnlyCookDataActor::ADS_MapOnlyCookDataActor
          (ADS_MapOnlyCookDataActor *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_MapOnlyCookDataActor__6B_;
  *(undefined8 *)&this->MapDataTable = 0;
  *(undefined8 *)&(this->MapDataTable).field_0x8 = 0;
  *(undefined8 *)&(this->MapDataTable).field_0x20 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x28 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->MapDataTable).field_0x34 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MapDataTable).field_0x40 = 0;
  *(undefined4 *)&(this->MapDataTable).field_0x48 = 0;
  return this;
}

// ~ADS_MapOnlyCookDataActor @ 14b4f1840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_MapOnlyCookDataActor::~ADS_MapOnlyCookDataActor(ADS_MapOnlyCookDataActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ADS_MapOnlyCookDataActor__6B_;
  *(undefined4 *)&(this->MapDataTable).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MapDataTable).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_TableType,UDataTable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_TableType,UDataTable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->MapDataTable);
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b4f21a0

UClass * __cdecl ADS_MapOnlyCookDataActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_MapOnlyCookDataActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MapOnlyCookDataActor",
               &Z_Registration_Info_UClass_ADS_MapOnlyCookDataActor.InnerSingleton,
               StaticRegisterNativesADS_MapOnlyCookDataActor,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_MapOnlyCookDataActor>,
               InternalVTableHelperCtorCaller<ADS_MapOnlyCookDataActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_MapOnlyCookDataActor.InnerSingleton;
}

// StaticRegisterNativesADS_MapOnlyCookDataActor @ 14b4f26e0

void __cdecl ADS_MapOnlyCookDataActor::StaticRegisterNativesADS_MapOnlyCookDataActor(void)

{
  return;
}

