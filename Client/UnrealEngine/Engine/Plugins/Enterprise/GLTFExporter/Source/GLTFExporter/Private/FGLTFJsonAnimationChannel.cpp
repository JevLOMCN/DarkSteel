// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61a1e0

void __thiscall
FGLTFJsonAnimationChannel::WriteObject(FGLTFJsonAnimationChannel *this,IGLTFJsonWriter *param_1)

{
  FGLTFJsonAnimationSampler *pFVar1;
  undefined4 uVar2;
  FString local_18;
  
  pFVar1 = this->Sampler;
  ::FString::FString(&local_18,L"sampler");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  if (pFVar1 == (FGLTFJsonAnimationSampler *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (undefined4)pFVar1->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"target");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)((this->Target)._padding_ + 8))(&this->Target,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

