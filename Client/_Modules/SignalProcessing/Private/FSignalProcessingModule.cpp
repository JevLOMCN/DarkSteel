// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// StartupModule @ 1444e89c0

void __thiscall Audio::FSignalProcessingModule::StartupModule(FSignalProcessingModule *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FName FVar3;
  FSignalProcessingModule *pFVar4;
  
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  FVar3 = IFFTAlgorithmFactory::GetModularFeatureName();
  pFVar4 = (FSignalProcessingModule *)&this->UniformPartitionConvolutionFactory;
  if (this == (FSignalProcessingModule *)&DAT_fffffffffffffff8) {
    pFVar4 = (FSignalProcessingModule *)0x0;
  }
  (*pcVar1)(pIVar2,*(undefined8 *)FVar3,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  FVar3 = IConvolutionAlgorithmFactory::GetModularFeatureName();
  pFVar4 = this + 1;
  if (this == (FSignalProcessingModule *)0xfffffffffffffff0) {
    pFVar4 = (FSignalProcessingModule *)0x0;
  }
  (*pcVar1)(pIVar2,*(undefined8 *)FVar3,pFVar4);
  return;
}

// ShutdownModule @ 1444e8a60

void __thiscall Audio::FSignalProcessingModule::ShutdownModule(FSignalProcessingModule *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FName FVar3;
  FSignalProcessingModule *pFVar4;
  
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  FVar3 = IFFTAlgorithmFactory::GetModularFeatureName();
  pFVar4 = (FSignalProcessingModule *)&this->UniformPartitionConvolutionFactory;
  if (this == (FSignalProcessingModule *)&DAT_fffffffffffffff8) {
    pFVar4 = (FSignalProcessingModule *)0x0;
  }
  (*pcVar1)(pIVar2,*(undefined8 *)FVar3,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  FVar3 = IConvolutionAlgorithmFactory::GetModularFeatureName();
  pFVar4 = this + 1;
  if (this == (FSignalProcessingModule *)0xfffffffffffffff0) {
    pFVar4 = (FSignalProcessingModule *)0x0;
  }
  (*pcVar1)(pIVar2,*(undefined8 *)FVar3,pFVar4);
  return;
}

