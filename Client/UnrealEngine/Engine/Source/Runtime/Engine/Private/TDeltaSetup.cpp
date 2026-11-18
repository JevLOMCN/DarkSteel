// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetWriter @ 147daa7f0

FWriter * __thiscall
TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_>::GetWriter
          (TDeltaSetup<FRenderTransform,FInstanceAttributeTracker::FDeltaRange<1>_> *this,
          FWriter *__return_storage_ptr__)

{
  code *pcVar1;
  FInstanceAttributeTracker *pFVar2;
  undefined3 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined3 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FWriter *pFVar10;
  
  if ((this->bIsEnabled != false) && (this->DeltaDataArray->ArrayNum != 0)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsEnabled || DeltaDataArray.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\InstanceData\\InstanceUpdateChangeSet.h"
                       ,0x113,L"");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FWriter *)(*pcVar1)();
      return pFVar10;
    }
  }
  bVar9 = (this->Delta).bFullUpdate;
  uVar3 = *(undefined3 *)&(this->Delta).field_0x1;
  iVar4 = (this->Delta).NumItems;
  pFVar2 = (this->Delta).Tracker;
  iVar5 = this->ElementStride;
  bVar6 = this->bIsEnabled;
  uVar7 = *(undefined3 *)&this->field_0x1d;
  (__return_storage_ptr__->Setup).DeltaDataArray = this->DeltaDataArray;
  (__return_storage_ptr__->Setup).Delta.bFullUpdate = bVar9;
  *(undefined3 *)&(__return_storage_ptr__->Setup).Delta.field_0x1 = uVar3;
  (__return_storage_ptr__->Setup).Delta.NumItems = iVar4;
  iVar4 = this->NumInstances;
  uVar8 = *(undefined4 *)&this->field_0x24;
  (__return_storage_ptr__->Setup).Delta.Tracker = pFVar2;
  (__return_storage_ptr__->Setup).ElementStride = iVar5;
  (__return_storage_ptr__->Setup).bIsEnabled = bVar6;
  *(undefined3 *)&(__return_storage_ptr__->Setup).field_0x1d = uVar7;
  (__return_storage_ptr__->Setup).NumInstances = iVar4;
  *(undefined4 *)&(__return_storage_ptr__->Setup).field_0x24 = uVar8;
  return __return_storage_ptr__;
}

