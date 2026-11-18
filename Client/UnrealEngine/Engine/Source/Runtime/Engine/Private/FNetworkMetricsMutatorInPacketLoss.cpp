// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148076a90

UScriptStruct * __cdecl FNetworkMetricsMutatorInPacketLoss::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorInPacketLoss.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorInPacketLoss.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutatorInPacketLoss,
                         (UObject *)pUVar1,L"NetworkMetricsMutatorInPacketLoss");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorInPacketLoss.OuterSingleton;
}

// FNetworkMetricsMutatorInPacketLoss @ 148089480

FNetworkMetricsMutatorInPacketLoss * __thiscall
FNetworkMetricsMutatorInPacketLoss::FNetworkMetricsMutatorInPacketLoss
          (FNetworkMetricsMutatorInPacketLoss *this)

{
  uint uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x2c = 2;
  *(undefined ***)this = &___7FNetworkMetricsMutatorInPacketLoss__6B_;
  this->field_0x38 = 1;
  this->field_0x48 = 1;
  uVar1 = UE::Net::Metric::InLostPacketsFoundPerFrame.Number;
  *(uint *)&this->field_0x50 = UE::Net::Metric::InLostPacketsFoundPerFrame.ComparisonIndex.Value;
  *(uint *)&this->field_0x54 = uVar1;
  uVar1 = UE::Net::Metric::InPacketsPerFrame.Number;
  *(uint *)&this->field_0x58 = UE::Net::Metric::InPacketsPerFrame.ComparisonIndex.Value;
  *(uint *)&this->field_0x5c = uVar1;
  return this;
}

// GetNameInternal @ 1480a6180

FName __thiscall
FNetworkMetricsMutatorInPacketLoss::GetNameInternal(FNetworkMetricsMutatorInPacketLoss *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"InPacketLoss");
  return in_RDX;
}

