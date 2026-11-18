// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator= @ 14640a660

FAnimExtractContext * __thiscall
FAnimExtractContext::operator=(FAnimExtractContext *this,FAnimExtractContext *param_1)

{
  TArray<FPoseCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  undefined3 uVar7;
  
  this->CurrentTime = param_1->CurrentTime;
  this->bExtractRootMotion = param_1->bExtractRootMotion;
  fVar6 = (param_1->DeltaTimeRecord).Previous;
  (this->DeltaTimeRecord).Delta = (param_1->DeltaTimeRecord).Delta;
  (this->DeltaTimeRecord).Previous = fVar6;
  uVar7 = *(undefined3 *)&(param_1->DeltaTimeRecord).field_0x9;
  pTVar1 = &this->PoseCurves;
  (this->DeltaTimeRecord).bPreviousIsValid = (param_1->DeltaTimeRecord).bPreviousIsValid;
  *(undefined3 *)&(this->DeltaTimeRecord).field_0x9 = uVar7;
  this->bLooping = param_1->bLooping;
  if (pTVar1 != &param_1->PoseCurves) {
    iVar4 = (param_1->PoseCurves).ArrayNum;
    piVar2 = &(this->PoseCurves).ArrayMax;
    pFVar5 = (param_1->PoseCurves).AllocatorInstance.Data;
    (this->PoseCurves).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 4);
      }
    }
  }
  pTVar3 = &this->BonesRequired;
  if (pTVar3 != &param_1->BonesRequired) {
    iVar4 = (param_1->BonesRequired).ArrayNum;
    piVar2 = &(this->BonesRequired).ArrayMax;
    pFVar5 = (param_1->BonesRequired).AllocatorInstance.Data;
    (this->BonesRequired).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
      }
    }
  }
  if (&param_1->InterpolationOverride != &this->InterpolationOverride) {
    if ((param_1->InterpolationOverride).bIsSet == false) {
      if ((this->InterpolationOverride).bIsSet != false) {
        (this->InterpolationOverride).bIsSet = false;
        return this;
      }
    }
    else {
      (this->InterpolationOverride).TypedValue = (param_1->InterpolationOverride).TypedValue;
      (this->InterpolationOverride).bIsSet = true;
    }
  }
  return this;
}

