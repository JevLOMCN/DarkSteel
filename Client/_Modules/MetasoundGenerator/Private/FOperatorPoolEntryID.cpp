// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 2

// FOperatorPoolEntryID @ 14b2a71e0

FOperatorPoolEntryID * __thiscall
Metasound::FOperatorPoolEntryID::FOperatorPoolEntryID
          (FOperatorPoolEntryID *this,FGuid *param_1,FOperatorSettings *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->OperatorID).A = param_1->A;
  (this->OperatorID).B = uVar1;
  (this->OperatorID).C = uVar2;
  (this->OperatorID).D = uVar3;
  fVar4 = param_2->TargetBlockRate;
  fVar5 = param_2->ActualBlockRate;
  iVar6 = param_2->NumFramesPerBlock;
  (this->OperatorSettings).SampleRate = param_2->SampleRate;
  (this->OperatorSettings).TargetBlockRate = fVar4;
  (this->OperatorSettings).ActualBlockRate = fVar5;
  (this->OperatorSettings).NumFramesPerBlock = iVar6;
  return this;
}

// ToString @ 14b2b8c00

FString * __thiscall
Metasound::FOperatorPoolEntryID::ToString
          (FOperatorPoolEntryID *this,FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  FOperatorSettings::ToString(&this->OperatorSettings,&local_18);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FGuid::AppendString(&this->OperatorID,&local_28,Digits);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

