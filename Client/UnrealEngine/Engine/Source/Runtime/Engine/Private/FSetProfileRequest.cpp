// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSetProfileRequest @ 1475a56a0

FSetProfileRequest * __thiscall
FSetProfileRequest::FSetProfileRequest(FSetProfileRequest *this,FSetProfileRequest *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  uVar6 = (param_1->ProfileStack).Layers.Elements[0].Number;
  uVar7 = (param_1->ProfileStack).Layers.Elements[1].ComparisonIndex.Value;
  uVar8 = (param_1->ProfileStack).Layers.Elements[1].Number;
  pTVar1 = &this->LODIndices;
  piVar2 = &(this->LODIndices).ArrayMax;
  (this->ProfileStack).Layers.Elements[0].ComparisonIndex.Value =
       (param_1->ProfileStack).Layers.Elements[0].ComparisonIndex.Value;
  (this->ProfileStack).Layers.Elements[0].Number = uVar6;
  (this->ProfileStack).Layers.Elements[1].ComparisonIndex.Value = uVar7;
  (this->ProfileStack).Layers.Elements[1].Number = uVar8;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->LODIndices).ArrayNum;
  _Src = (param_1->LODIndices).AllocatorInstance.Data;
  (this->LODIndices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  lVar4 = *(longlong *)&param_1->Callback;
  *(longlong *)&this->Callback = lVar4;
  *(undefined8 *)&(this->Callback).field_0x28 = 0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)&(param_1->Callback).field_0x28;
    puVar9 = (undefined8 *)&(param_1->Callback).field_0x10;
    if (puVar5 != (undefined8 *)0x0) {
      puVar9 = puVar5;
    }
    (**(code **)*puVar9)();
  }
  (this->IdentifyingObject).WeakPtr = (param_1->IdentifyingObject).WeakPtr;
  (this->WeakSkeletalMesh).WeakPtr = (param_1->WeakSkeletalMesh).WeakPtr;
  this->ExpectedResidentLODs = param_1->ExpectedResidentLODs;
  return this;
}

