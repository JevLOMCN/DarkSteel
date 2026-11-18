// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 4

// FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask @ 14e4d7980

FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask * __thiscall
FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask::
FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask
          (FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask *this,USkeletalMesh *param_1)

{
  (this->SkeletalMesh).field0_0x0.DebugPtr = param_1;
  *(undefined8 *)&this->ReimportAlternateSkinWeightDelegate = 0;
  this->_padding_ = (longlong)&___7FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask__6B_;
  *(undefined8 *)&(this->ReimportAlternateSkinWeightDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ReimportAlternateSkinWeightDelegate).field_0x10 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ReImportAlternateSkinWeightsLods).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReImportAlternateSkinWeightsLods).ArrayNum = 0;
  (this->ReImportAlternateSkinWeightsLods).ArrayMax = 0;
  return this;
}

// ~FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask @ 14e4da8e0

void __thiscall
FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask::
~FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask
          (FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask__6B_;
  pFVar1 = (this->ReImportAlternateSkinWeightsLods).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReimportAlternateSkinWeightDelegate
            );
  pvVar2 = *(void **)&(this->ReimportAlternateSkinWeightDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReimportAlternateSkinWeightDelegate);
  return;
}

// AddLodToReimportAlternate @ 14e4e2300

bool __thiscall
FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask::AddLodToReimportAlternate
          (FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask *this,int param_1)

{
  USkeletalMesh *pUVar1;
  char cVar2;
  int local_res10 [6];
  
  pUVar1 = (this->SkeletalMesh).field0_0x0.DebugPtr;
  if (pUVar1 != (USkeletalMesh *)0x0) {
    local_res10[0] = param_1;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x440))();
    if (cVar2 != '\0') {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                (&this->ReImportAlternateSkinWeightsLods,local_res10);
      return true;
    }
  }
  return false;
}

// Execute @ 14e4eb6a0

void __thiscall
FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask::Execute
          (FInterchangeSkeletalMeshAlternateSkinWeightPostImportTask *this)

{
  return;
}

