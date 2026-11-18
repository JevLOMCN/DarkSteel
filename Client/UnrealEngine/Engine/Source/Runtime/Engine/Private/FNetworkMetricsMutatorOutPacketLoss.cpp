// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 148076870

UScriptStruct * __cdecl FNetworkMetricsMutatorOutPacketLoss::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss,
                         (UObject *)pUVar1,L"NetworkMetricsMutatorOutPacketLoss");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkMetricsMutatorOutPacketLoss.OuterSingleton;
}

// FNetworkMetricsMutatorOutPacketLoss @ 1480894e0

FNetworkMetricsMutatorOutPacketLoss * __thiscall
FNetworkMetricsMutatorOutPacketLoss::FNetworkMetricsMutatorOutPacketLoss
          (FNetworkMetricsMutatorOutPacketLoss *this)

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
  *(undefined ***)this = &___7FNetworkMetricsMutatorOutPacketLoss__6B_;
  this->field_0x38 = 1;
  this->field_0x48 = 1;
  uVar1 = UE::Net::Metric::OutLostPacketsFoundPerFrame.Number;
  *(uint *)&this->field_0x50 = UE::Net::Metric::OutLostPacketsFoundPerFrame.ComparisonIndex.Value;
  *(uint *)&this->field_0x54 = uVar1;
  uVar1 = UE::Net::Metric::OutPacketsPerFrame.Number;
  *(uint *)&this->field_0x58 = UE::Net::Metric::OutPacketsPerFrame.ComparisonIndex.Value;
  *(uint *)&this->field_0x5c = uVar1;
  return this;
}

// GetNameInternal @ 1480a61b0

FName __thiscall
FNetworkMetricsMutatorOutPacketLoss::GetNameInternal(FNetworkMetricsMutatorOutPacketLoss *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"OutPacketLoss");
  return in_RDX;
}

