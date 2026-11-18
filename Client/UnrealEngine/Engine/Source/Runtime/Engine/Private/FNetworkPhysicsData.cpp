// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticStruct @ 1482ca2d0

UScriptStruct * __cdecl FNetworkPhysicsData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsData,(UObject *)pUVar1,
                         L"NetworkPhysicsData");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsData.OuterSingleton;
}

// ApplyData @ 1482ca400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkPhysicsData::ApplyData(FNetworkPhysicsData *this,UActorComponent *param_1)

{
  return;
}

// BuildData @ 1482ca410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNetworkPhysicsData::BuildData(FNetworkPhysicsData *this,UActorComponent *param_1)

{
  return;
}

// InterpolateData @ 1482ca420

void __thiscall
FNetworkPhysicsData::InterpolateData
          (FNetworkPhysicsData *this,FNetworkPhysicsData *param_1,FNetworkPhysicsData *param_2)

{
  return;
}

// DecayData @ 1482ca430

void __thiscall FNetworkPhysicsData::DecayData(FNetworkPhysicsData *this,float param_1)

{
  return;
}

// MergeData @ 1482ca440

void __thiscall
FNetworkPhysicsData::MergeData(FNetworkPhysicsData *this,FNetworkPhysicsData *param_1)

{
  return;
}

// ValidateData @ 1482ca490

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
FNetworkPhysicsData::ValidateData(FNetworkPhysicsData *this,UActorComponent *param_1)

{
  return;
}

// CompareData @ 1482ca4a0

bool __thiscall
FNetworkPhysicsData::CompareData(FNetworkPhysicsData *this,FNetworkPhysicsData *param_1)

{
  return true;
}

// DebugData @ 1482ca4b0

FString * __thiscall
FNetworkPhysicsData::DebugData(FNetworkPhysicsData *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__," - DebugData() not implemented - ");
  return __return_storage_ptr__;
}

// DoInterpolateData @ 1482ca4e0

void __thiscall
FNetworkPhysicsData::DoInterpolateData
          (FNetworkPhysicsData *this,FNetworkPhysicsPayload *param_1,FNetworkPhysicsPayload *param_2
          )

{
                    /* WARNING: Could not recover jumptable at 0x0001482ca4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x50))();
  return;
}

// MergeData @ 1482ca4f0

void __thiscall
FNetworkPhysicsData::MergeData(FNetworkPhysicsData *this,FNetworkPhysicsPayload *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001482ca4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x58))();
  return;
}

// CompareData @ 1482ca500

bool __thiscall
FNetworkPhysicsData::CompareData(FNetworkPhysicsData *this,FNetworkPhysicsPayload *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001482ca503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x68))();
  return (bool)uVar1;
}

// ~FNetworkPhysicsData @ 1482dd900

void __thiscall FNetworkPhysicsData::~FNetworkPhysicsData(FNetworkPhysicsData *this)

{
  UObject *pUVar1;
  
  pUVar1 = (this->ImplementationComponent).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->ImplementationComponent).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7FNetworkPhysicsPayload__6B_;
  return;
}

