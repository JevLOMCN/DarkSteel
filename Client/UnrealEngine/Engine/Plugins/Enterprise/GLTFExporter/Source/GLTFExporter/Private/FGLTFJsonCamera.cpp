// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61ae30

void __thiscall FGLTFJsonCamera::WriteObject(FGLTFJsonCamera *this,IGLTFJsonWriter *param_1)

{
  EGLTFJsonCameraType EVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_58,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_58);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  EVar1 = this->Type;
  ::FString::FString(&local_48,L"type");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_48);
  if (EVar1 == Orthographic) {
    pwVar5 = L"orthographic";
  }
  else if (EVar1 == Perspective) {
    pwVar5 = L"perspective";
  }
  else {
    pwVar5 = L"";
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pcVar2 = *(code **)(param_1->_padding_ + 0x18);
  pFVar4 = ::FString::FString(&local_18,pwVar5);
  (*pcVar2)(param_1,pFVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this->Type == Orthographic) {
    ::FString::FString(&local_28,L"orthographic");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)((this->Orthographic)._padding_ + 8))(&this->Orthographic,param_1);
    local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    if (this->Type != Perspective) {
      return;
    }
    ::FString::FString(&local_38,L"perspective");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    (**(code **)((this->Perspective)._padding_ + 8))(&this->Perspective,param_1);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

