// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146e77fc0

UClass * __cdecl UAISenseEvent_Hearing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent_Hearing",
               &Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton,
               StaticRegisterNativesUAISenseEvent_Hearing,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseEvent_Hearing>,
               InternalVTableHelperCtorCaller<UAISenseEvent_Hearing>,local_res8,
               UAISenseEvent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton;
}

// UAISenseEvent_Hearing @ 146e80ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAISenseEvent_Hearing * __thiscall
UAISenseEvent_Hearing::UAISenseEvent_Hearing(UAISenseEvent_Hearing *this,FVTableHelper *param_1)

{
  UAISenseEvent::UAISenseEvent((UAISenseEvent *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseEvent_Hearing__6B_;
  FAINoiseEvent::FAINoiseEvent(&this->Event);
  return this;
}

// ~UAISenseEvent_Hearing @ 146e81d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISenseEvent_Hearing::~UAISenseEvent_Hearing(UAISenseEvent_Hearing *this)

{
  this->_padding_ = (longlong)&___7UAISenseEvent_Hearing__6B_;
  UAISenseEvent::~UAISenseEvent((UAISenseEvent *)this);
  return;
}

// GetPrivateStaticClass @ 146e8f1a0

UClass * __cdecl UAISenseEvent_Hearing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISenseEvent_Hearing",
               &Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton,
               StaticRegisterNativesUAISenseEvent_Hearing,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UAISenseEvent_Hearing>,
               InternalVTableHelperCtorCaller<UAISenseEvent_Hearing>,local_res8,
               UAISenseEvent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISenseEvent_Hearing.InnerSingleton;
}

// StaticRegisterNativesUAISenseEvent_Hearing @ 146ea0180

void __cdecl UAISenseEvent_Hearing::StaticRegisterNativesUAISenseEvent_Hearing(void)

{
  return;
}

// UAISenseEvent_Hearing @ 146f94310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAISenseEvent_Hearing * __thiscall
UAISenseEvent_Hearing::UAISenseEvent_Hearing
          (UAISenseEvent_Hearing *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISenseEvent_Hearing__6B_;
  (this->Event).Age = 0.0;
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->Event).NoiseLocation.field0_0x0._s_0.X = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  (this->Event).NoiseLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->Event).NoiseLocation.field0_0x0._s_0.Z = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  (this->Event).Instigator.field0_0x0.DebugPtr = (AActor *)0x0;
  (this->Event).Loudness = 1.0;
  (this->Event).MaxRange = 0.0;
  (this->Event).Tag.ComparisonIndex = 0;
  (this->Event).Tag.Number = 0;
  (this->Event).TeamIdentifier.TeamID = FGenericTeamId::NoTeam.TeamID;
  return this;
}

// GetSenseID @ 146fb4bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAINamedID<FAISenseCounter> * __thiscall
UAISenseEvent_Hearing::GetSenseID
          (UAISenseEvent_Hearing *this,FAINamedID<FAISenseCounter> *__return_storage_ptr__)

{
  UObject *pUVar1;
  undefined4 uVar2;
  UClass *this_00;
  
  this_00 = UAISense_Hearing::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  __return_storage_ptr__->Index = pUVar1[1].field_0x14;
  uVar2 = *(undefined4 *)&pUVar1[1].field_0x1c;
  (__return_storage_ptr__->Name).ComparisonIndex =
       (FNameEntryId)*(undefined4 *)&pUVar1[1].field_0x18;
  (__return_storage_ptr__->Name).Number = uVar2;
  return __return_storage_ptr__;
}

