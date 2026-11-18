// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// FSubdivideParameters @ 14cc1c0f0

FSubdivideParameters * __thiscall
DisplaceMeshToolLocals::FSubdivideParameters::FSubdivideParameters
          (FSubdivideParameters *this,FSubdivideParameters *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *_Src;
  
  this->SubdivisionsCount = param_1->SubdivisionsCount;
  (this->WeightMap).Object = (param_1->WeightMap).Object;
  pTVar5 = (param_1->WeightMap).SharedReferenceCount.ReferenceController;
  (this->WeightMap).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->SelectedTriangles;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SelectedTriangles).ArrayMax;
  iVar4 = (param_1->SelectedTriangles).ArrayNum;
  _Src = (param_1->SelectedTriangles).AllocatorInstance.Data;
  (this->SelectedTriangles).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
  }
  (this->SelectionType).bIsSet = false;
  bVar3 = (param_1->SelectionType).bIsSet;
  (this->SelectionType).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->SelectionType).TypedValue = (param_1->SelectionType).TypedValue;
  }
  (this->ActiveMaterialID).bIsSet = false;
  bVar3 = (param_1->ActiveMaterialID).bIsSet;
  (this->ActiveMaterialID).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->ActiveMaterialID).TypedValue = (param_1->ActiveMaterialID).TypedValue;
  }
  return this;
}

