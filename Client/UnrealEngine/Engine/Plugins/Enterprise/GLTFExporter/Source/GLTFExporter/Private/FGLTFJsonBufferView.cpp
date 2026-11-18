// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61ac70

void __thiscall FGLTFJsonBufferView::WriteObject(FGLTFJsonBufferView *this,IGLTFJsonWriter *param_1)

{
  int iVar1;
  EGLTFJsonBufferTarget EVar2;
  FGLTFJsonBuffer *pFVar3;
  long64 lVar4;
  longlong lVar5;
  undefined4 uVar6;
  FString local_18;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_18,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = this->Buffer;
  ::FString::FString(&local_18,L"buffer");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  if (pFVar3 == (FGLTFJsonBuffer *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)pFVar3->_padding_;
  }
  (**(code **)(param_1->_padding_ + 0x30))(param_1,uVar6);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  lVar4 = this->ByteLength;
  ::FString::FString(&local_18,L"byteLength");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
  (**(code **)(param_1->_padding_ + 0x28))(param_1,lVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  lVar5 = this->ByteOffset;
  if (lVar5 != 0) {
    ::FString::FString(&local_18,L"byteOffset");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x28))(param_1,lVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = this->ByteStride;
  if (iVar1 != 0) {
    ::FString::FString(&local_18,L"byteStride");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  EVar2 = this->Target;
  if (EVar2 != None) {
    ::FString::FString(&local_18,L"target");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_18);
    (**(code **)(param_1->_padding_ + 0x30))(param_1,EVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

