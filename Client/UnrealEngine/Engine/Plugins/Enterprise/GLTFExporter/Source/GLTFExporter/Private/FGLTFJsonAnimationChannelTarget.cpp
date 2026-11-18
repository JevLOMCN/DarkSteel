// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61a2a0

void __thiscall
FGLTFJsonAnimationChannelTarget::WriteObject
          (FGLTFJsonAnimationChannelTarget *this,IGLTFJsonWriter *param_1)

{
  EGLTFJsonTargetPath EVar1;
  FGLTFJsonNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = this->Node;
  ::FString::FString(&local_38,L"node");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
  if (pFVar2 == (FGLTFJsonNode *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)pFVar2->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  EVar1 = this->Path;
  ::FString::FString(&local_28,L"path");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
  if (EVar1 == Translation) {
    pwVar7 = L"translation";
  }
  else if (EVar1 == Rotation) {
    pwVar7 = L"rotation";
  }
  else if (EVar1 == Scale) {
    pwVar7 = L"scale";
  }
  else if (EVar1 == Weights) {
    pwVar7 = L"weights";
  }
  else {
    pwVar7 = L"";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                       ,0x78,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pcVar3 = *(code **)(param_1->_padding_ + 0x18);
  pFVar5 = ::FString::FString(&local_18,pwVar7);
  (*pcVar3)(param_1,pFVar5);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

