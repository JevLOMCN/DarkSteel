// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61ba10

void __thiscall
FGLTFJsonLightIESInstance::WriteObject(FGLTFJsonLightIESInstance *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  FGLTFJsonLightIES *pFVar2;
  undefined4 uVar3;
  float fVar4;
  FString local_28 [2];
  
  fVar1 = this->Multiplier;
  fVar4 = (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->DefaultTolerance <= fVar4 && fVar4 != param_1->DefaultTolerance) {
    ::FString::FString(local_28,L"multiplier");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = this->LightIES;
  ::FString::FString(local_28,L"light");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
  if (pFVar2 == (FGLTFJsonLightIES *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (undefined4)pFVar2->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar3);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

