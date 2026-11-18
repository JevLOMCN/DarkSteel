// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// WriteObject @ 14e61a0b0

void __thiscall FGLTFJsonAnimation::WriteObject(FGLTFJsonAnimation *this,IGLTFJsonWriter *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FString local_28;
  
  if (1 < (this->Name).Data.ArrayNum) {
    ::FString::FString(&local_28,L"name");
    (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
    (**(code **)(param_1->_padding_ + 0x18))(param_1,&this->Name);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_28,L"channels");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
  (**(code **)(param_1->_padding_ + 0x58))(param_1);
  iVar2 = (this->Channels).ArrayNum;
  pFVar3 = (this->Channels).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FGLTFJsonAnimationChannel_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,param_1);
    pFVar3 = pFVar3 + 0x28;
  }
  (**(code **)(param_1->_padding_ + 0x60))(param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_28,L"samplers");
  (**(code **)(param_1->_padding_ + 0x40))(param_1,&local_28);
  (**(code **)((this->Samplers)._padding_ + 8))(&this->Samplers,param_1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

