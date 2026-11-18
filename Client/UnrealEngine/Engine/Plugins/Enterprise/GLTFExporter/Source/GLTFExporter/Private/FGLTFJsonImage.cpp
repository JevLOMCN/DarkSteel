// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61b210

void __thiscall FGLTFJsonImage::WriteObject(FGLTFJsonImage *this,IGLTFJsonWriter *param_1)

{
  EGLTFJsonMimeType EVar1;
  FGLTFJsonBufferView *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
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
  if (1 < (this->URI).Data.ArrayNum) {
    ::FString::FString(&local_48,L"uri");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_48);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->URI);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  EVar1 = this->MimeType;
  if (EVar1 != None) {
    ::FString::FString(&local_38,L"mimeType");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_38);
    if (EVar1 == PNG) {
      pwVar6 = L"image/png";
    }
    else if (EVar1 == JPEG) {
      pwVar6 = L"image/jpeg";
    }
    else {
      pwVar6 = L"";
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFJsonUtilities.cpp"
                         ,0x33,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pcVar3 = *(code **)(param_1->_padding_ + 0x18);
    pFVar5 = ::FString::FString(&local_18,pwVar6);
    (*pcVar3)(param_1,pFVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = this->BufferView;
  if (pFVar2 != (FGLTFJsonBufferView *)0x0) {
    ::FString::FString(&local_28,L"bufferView");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,(int)pFVar2->_padding_);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

