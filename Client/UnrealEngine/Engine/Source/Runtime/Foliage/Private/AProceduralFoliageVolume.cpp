// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 7

// StaticClass @ 145ecfa90

UClass * __cdecl AProceduralFoliageVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageVolume",
               &Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton,
               StaticRegisterNativesAProceduralFoliageVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AProceduralFoliageVolume>,
               InternalVTableHelperCtorCaller<AProceduralFoliageVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton;
}

// AProceduralFoliageVolume @ 145ed8310

AProceduralFoliageVolume * __thiscall
AProceduralFoliageVolume::AProceduralFoliageVolume
          (AProceduralFoliageVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  (this->ProceduralComponent).field0_0x0.DebugPtr = (UProceduralFoliageComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionActorLoaderInterface__;
  return this;
}

// AProceduralFoliageVolume @ 145ed8350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AProceduralFoliageVolume * __thiscall
AProceduralFoliageVolume::AProceduralFoliageVolume
          (AProceduralFoliageVolume *this,FObjectInitializer *param_1)

{
  FName FVar1;
  UPrimitiveComponent *this_00;
  FName *pFVar2;
  UClass *pUVar3;
  UProceduralFoliageComponent *pUVar4;
  FName local_res8;
  
  AVolume::AVolume((AVolume *)this,param_1);
  (this->ProceduralComponent).field0_0x0.DebugPtr = (UProceduralFoliageComponent *)0x0;
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&_vftable__for__IWorldPartitionActorLoaderInterface__;
  pFVar2 = ::FName::FName(&local_res8,L"ProceduralFoliageComponent");
  FVar1 = *pFVar2;
  pUVar3 = UProceduralFoliageComponent::StaticClass();
  pUVar4 = (UProceduralFoliageComponent *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UProceduralFoliageComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ProceduralComponent).field0_0x0.DebugPtr = pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar4->SpawningVolume).field0_0x0.DebugPtr = (AVolume *)this;
  this_00 = (UPrimitiveComponent *)this->_padding_;
  if (this_00 != (UPrimitiveComponent *)0x0) {
    (**(code **)(*(longlong *)this_00 + 0x790))(this_00);
    (**(code **)(*(longlong *)this_00 + 0x9f8))(this_00);
    UPrimitiveComponent::SetGenerateOverlapEvents(this_00,false);
  }
  return this;
}

// ~AProceduralFoliageVolume @ 145ed9fb0

void __thiscall AProceduralFoliageVolume::~AProceduralFoliageVolume(AProceduralFoliageVolume *this)

{
  this->_padding_ = (longlong)&_vftable__for__AVolume__;
  this->_padding_ = (longlong)&___7IWorldPartitionActorLoaderInterface__6B_;
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 145ee4d90

UClass * __cdecl AProceduralFoliageVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageVolume",
               &Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton,
               StaticRegisterNativesAProceduralFoliageVolume,0x308,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AProceduralFoliageVolume>,
               InternalVTableHelperCtorCaller<AProceduralFoliageVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageVolume.InnerSingleton;
}

// StaticRegisterNativesAProceduralFoliageVolume @ 145eecfd0

void __cdecl AProceduralFoliageVolume::StaticRegisterNativesAProceduralFoliageVolume(void)

{
  return;
}

// _getUObject @ 145eef310

UObject * __thiscall AProceduralFoliageVolume::_getUObject(AProceduralFoliageVolume *this)

{
  return (UObject *)&this[-1]._padding_;
}

