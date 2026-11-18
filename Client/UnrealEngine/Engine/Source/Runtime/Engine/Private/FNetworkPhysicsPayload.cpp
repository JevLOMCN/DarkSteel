// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 1482c7e40

UScriptStruct * __cdecl FNetworkPhysicsPayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsPayload.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsPayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsPayload,(UObject *)pUVar1,
                         L"NetworkPhysicsPayload");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsPayload.OuterSingleton;
}

// InterpolateData @ 1482c7e80

void __thiscall
FNetworkPhysicsPayload::InterpolateData
          (FNetworkPhysicsPayload *this,FNetworkPhysicsPayload *param_1,
          FNetworkPhysicsPayload *param_2,float param_3)

{
  return;
}

// MergeData @ 1482c7e90

void __thiscall
FNetworkPhysicsPayload::MergeData(FNetworkPhysicsPayload *this,FNetworkPhysicsPayload *param_1)

{
  return;
}

// DecayData @ 1482c7ea0

void __thiscall FNetworkPhysicsPayload::DecayData(FNetworkPhysicsPayload *this,float param_1)

{
  return;
}

// CompareData @ 1482c7ec0

bool __thiscall
FNetworkPhysicsPayload::CompareData(FNetworkPhysicsPayload *this,FNetworkPhysicsPayload *param_1)

{
  return true;
}

// DebugData @ 1482c7ed0

FString * __thiscall
FNetworkPhysicsPayload::DebugData(FNetworkPhysicsPayload *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__," - DebugData() not implemented - ");
  return __return_storage_ptr__;
}

// DebugData @ 1482c7f00

FString * __thiscall
FNetworkPhysicsPayload::DebugData(FNetworkPhysicsPayload *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__," - DebugData() not implemented - ");
  return __return_storage_ptr__;
}

// DoInterpolateData @ 1482c7f30

void __thiscall
FNetworkPhysicsPayload::DoInterpolateData
          (FNetworkPhysicsPayload *this,FNetworkPhysicsPayload *param_1,
          FNetworkPhysicsPayload *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001482c7f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// ~FNetworkPhysicsPayload @ 1482dd940

void __thiscall FNetworkPhysicsPayload::~FNetworkPhysicsPayload(FNetworkPhysicsPayload *this)

{
  this->_padding_ = (longlong)&___7FNetworkPhysicsPayload__6B_;
  return;
}

