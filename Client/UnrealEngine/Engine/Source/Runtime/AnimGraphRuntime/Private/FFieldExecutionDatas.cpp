// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator= @ 14640cff0

FFieldExecutionDatas * __thiscall
FFieldExecutionDatas::operator=(FFieldExecutionDatas *this,FFieldExecutionDatas *param_1)

{
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->SamplePositions,&param_1->SamplePositions);
  TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->SampleIndices,&param_1->SampleIndices);
  pTVar1 = this->ParticleHandles;
  if (pTVar1 != param_1->ParticleHandles) {
    iVar7 = param_1->ParticleHandles[0].ArrayNum;
    piVar2 = &this->ParticleHandles[0].ArrayMax;
    pFVar9 = param_1->ParticleHandles[0].AllocatorInstance.Data;
    this->ParticleHandles[0].ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,*piVar2,&pTVar1->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 3);
      }
    }
  }
  pTVar1 = this->ParticleHandles + 1;
  if (pTVar1 != param_1->ParticleHandles + 1) {
    iVar7 = param_1->ParticleHandles[1].ArrayNum;
    piVar2 = &this->ParticleHandles[1].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->ParticleHandles[1].AllocatorInstance.Data;
    this->ParticleHandles[1].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,iVar8,&pTVar1->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 3);
      }
    }
  }
  pTVar3 = this->FieldOutputs;
  if (pTVar3 != param_1->FieldOutputs) {
    iVar7 = param_1->FieldOutputs[0].ArrayNum;
    piVar2 = &this->FieldOutputs[0].ArrayMax;
    pFVar9 = param_1->FieldOutputs[0].AllocatorInstance.Data;
    this->FieldOutputs[0].ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,*piVar2,&pTVar3->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x18);
      }
    }
  }
  pTVar3 = this->FieldOutputs + 1;
  if (pTVar3 != param_1->FieldOutputs + 1) {
    iVar7 = param_1->FieldOutputs[1].ArrayNum;
    piVar2 = &this->FieldOutputs[1].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->FieldOutputs[1].AllocatorInstance.Data;
    this->FieldOutputs[1].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,iVar8,&pTVar3->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x18);
      }
    }
  }
  pTVar3 = this->FieldOutputs + 2;
  if (pTVar3 != param_1->FieldOutputs + 2) {
    iVar7 = param_1->FieldOutputs[2].ArrayNum;
    piVar2 = &this->FieldOutputs[2].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->FieldOutputs[2].AllocatorInstance.Data;
    this->FieldOutputs[2].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,iVar8,&pTVar3->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x18);
      }
    }
  }
  pTVar3 = this->FieldOutputs + 3;
  if (pTVar3 != param_1->FieldOutputs + 3) {
    iVar7 = param_1->FieldOutputs[3].ArrayNum;
    piVar2 = &this->FieldOutputs[3].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->FieldOutputs[3].AllocatorInstance.Data;
    this->FieldOutputs[3].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,iVar8,&pTVar3->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x18);
      }
    }
  }
  pTVar3 = this->VectorResults;
  if (pTVar3 != param_1->VectorResults) {
    iVar7 = param_1->VectorResults[0].ArrayNum;
    piVar2 = &this->VectorResults[0].ArrayMax;
    pFVar9 = param_1->VectorResults[0].AllocatorInstance.Data;
    this->VectorResults[0].ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,*piVar2,&pTVar3->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x18);
      }
    }
  }
  pTVar3 = this->VectorResults + 1;
  if (pTVar3 != param_1->VectorResults + 1) {
    iVar7 = param_1->VectorResults[1].ArrayNum;
    piVar2 = &this->VectorResults[1].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->VectorResults[1].AllocatorInstance.Data;
    this->VectorResults[1].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar7,iVar8,&pTVar3->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x18);
      }
    }
  }
  pTVar4 = this->ScalarResults;
  if (pTVar4 != param_1->ScalarResults) {
    iVar7 = param_1->ScalarResults[0].ArrayNum;
    piVar2 = &this->ScalarResults[0].ArrayMax;
    pFVar9 = param_1->ScalarResults[0].AllocatorInstance.Data;
    this->ScalarResults[0].ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,*piVar2,&pTVar4->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 2);
      }
    }
  }
  pTVar4 = this->ScalarResults + 1;
  if (pTVar4 != param_1->ScalarResults + 1) {
    iVar7 = param_1->ScalarResults[1].ArrayNum;
    piVar2 = &this->ScalarResults[1].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->ScalarResults[1].AllocatorInstance.Data;
    this->ScalarResults[1].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,iVar8,&pTVar4->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 2);
      }
    }
  }
  pTVar5 = this->IntegerResults;
  if (pTVar5 != param_1->IntegerResults) {
    iVar7 = param_1->IntegerResults[0].ArrayNum;
    piVar2 = &this->IntegerResults[0].ArrayMax;
    pFVar9 = param_1->IntegerResults[0].AllocatorInstance.Data;
    this->IntegerResults[0].ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,*piVar2,&pTVar5->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 2);
      }
    }
  }
  pTVar5 = this->IntegerResults + 1;
  if (pTVar5 != param_1->IntegerResults + 1) {
    iVar7 = param_1->IntegerResults[1].ArrayNum;
    piVar2 = &this->IntegerResults[1].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->IntegerResults[1].AllocatorInstance.Data;
    this->IntegerResults[1].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,iVar8,&pTVar5->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 2);
      }
    }
  }
  pTVar6 = this->IndexResults;
  if (pTVar6 != param_1->IndexResults) {
    iVar7 = param_1->IndexResults[0].ArrayNum;
    piVar2 = &this->IndexResults[0].ArrayMax;
    pFVar9 = param_1->IndexResults[0].AllocatorInstance.Data;
    this->IndexResults[0].ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar7,*piVar2,&pTVar6->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 3);
      }
    }
  }
  pTVar6 = this->IndexResults + 1;
  if (pTVar6 != param_1->IndexResults + 1) {
    iVar7 = param_1->IndexResults[1].ArrayNum;
    piVar2 = &this->IndexResults[1].ArrayMax;
    iVar8 = *piVar2;
    pFVar9 = param_1->IndexResults[1].AllocatorInstance.Data;
    this->IndexResults[1].ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar7,iVar8,&pTVar6->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 3);
      }
    }
  }
  return this;
}

