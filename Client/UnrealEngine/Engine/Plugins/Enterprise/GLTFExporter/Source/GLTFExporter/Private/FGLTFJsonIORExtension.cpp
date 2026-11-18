// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61b190

void __thiscall
FGLTFJsonIORExtension::WriteObject(FGLTFJsonIORExtension *this,IGLTFJsonWriter *param_1)

{
  float fVar1;
  float fVar2;
  FString local_28 [2];
  
  fVar1 = this->Value;
  fVar2 = (float)((uint)(fVar1 - __real_3fc00000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->DefaultTolerance <= fVar2 && fVar2 != param_1->DefaultTolerance) {
    ::FString::FString(local_28,L"ior");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,local_28);
    (**(code **)(param_1->_padding_ + 0x20))(param_1,fVar1);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

