// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 4

// FAnimationPayloadData @ 14e67bd30

FAnimationPayloadData * __thiscall
UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
          (FAnimationPayloadData *this,FAnimationPayloadData *param_1)

{
  double dVar1;
  
  (this->SceneNodeUniqueID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneNodeUniqueID).Data.AllocatorInstance.Data =
       (param_1->SceneNodeUniqueID).Data.AllocatorInstance.Data;
  (param_1->SceneNodeUniqueID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SceneNodeUniqueID).Data.ArrayNum = (param_1->SceneNodeUniqueID).Data.ArrayNum;
  (this->SceneNodeUniqueID).Data.ArrayMax = (param_1->SceneNodeUniqueID).Data.ArrayMax;
  (param_1->SceneNodeUniqueID).Data.ArrayNum = 0;
  (param_1->SceneNodeUniqueID).Data.ArrayMax = 0;
  (this->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).AllocatorInstance.Data = (param_1->Curves).AllocatorInstance.Data;
  (param_1->Curves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Curves).ArrayNum = (param_1->Curves).ArrayNum;
  (this->Curves).ArrayMax = (param_1->Curves).ArrayMax;
  (param_1->Curves).ArrayNum = 0;
  (param_1->Curves).ArrayMax = 0;
  (this->InbetweenCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InbetweenCurveNames).AllocatorInstance.Data =
       (param_1->InbetweenCurveNames).AllocatorInstance.Data;
  (param_1->InbetweenCurveNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InbetweenCurveNames).ArrayNum = (param_1->InbetweenCurveNames).ArrayNum;
  (this->InbetweenCurveNames).ArrayMax = (param_1->InbetweenCurveNames).ArrayMax;
  (param_1->InbetweenCurveNames).ArrayNum = 0;
  (param_1->InbetweenCurveNames).ArrayMax = 0;
  (this->InbetweenFullWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InbetweenFullWeights).AllocatorInstance.Data =
       (param_1->InbetweenFullWeights).AllocatorInstance.Data;
  (param_1->InbetweenFullWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InbetweenFullWeights).ArrayNum = (param_1->InbetweenFullWeights).ArrayNum;
  (this->InbetweenFullWeights).ArrayMax = (param_1->InbetweenFullWeights).ArrayMax;
  (param_1->InbetweenFullWeights).ArrayNum = 0;
  (param_1->InbetweenFullWeights).ArrayMax = 0;
  (this->StepCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StepCurves).AllocatorInstance.Data = (param_1->StepCurves).AllocatorInstance.Data;
  (param_1->StepCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StepCurves).ArrayNum = (param_1->StepCurves).ArrayNum;
  (this->StepCurves).ArrayMax = (param_1->StepCurves).ArrayMax;
  (param_1->StepCurves).ArrayNum = 0;
  (param_1->StepCurves).ArrayMax = 0;
  this->BakeFrequency = param_1->BakeFrequency;
  this->RangeStartTime = param_1->RangeStartTime;
  dVar1 = param_1->RangeEndTime;
  (this->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->RangeEndTime = dVar1;
  (this->Transforms).AllocatorInstance.Data = (param_1->Transforms).AllocatorInstance.Data;
  (param_1->Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transforms).ArrayNum = (param_1->Transforms).ArrayNum;
  (this->Transforms).ArrayMax = (param_1->Transforms).ArrayMax;
  (param_1->Transforms).ArrayNum = 0;
  (param_1->Transforms).ArrayMax = 0;
  (this->PayloadKey).UniqueId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PayloadKey).UniqueId.Data.AllocatorInstance.Data =
       (param_1->PayloadKey).UniqueId.Data.AllocatorInstance.Data;
  (param_1->PayloadKey).UniqueId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PayloadKey).UniqueId.Data.ArrayNum = (param_1->PayloadKey).UniqueId.Data.ArrayNum;
  (this->PayloadKey).UniqueId.Data.ArrayMax = (param_1->PayloadKey).UniqueId.Data.ArrayMax;
  (param_1->PayloadKey).UniqueId.Data.ArrayNum = 0;
  (param_1->PayloadKey).UniqueId.Data.ArrayMax = 0;
  (this->PayloadKey).Type = (param_1->PayloadKey).Type;
  this->AdditionalSupportedType = param_1->AdditionalSupportedType;
  return this;
}

// FAnimationPayloadData @ 14e67be60

FAnimationPayloadData * __thiscall
UE::Interchange::FAnimationPayloadData::FAnimationPayloadData
          (FAnimationPayloadData *this,FAnimationPayloadData *param_1)

{
  TArray<FRichCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FInterchangeStepCurve,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FRichCurve *pFVar8;
  FScriptContainerElement *pFVar9;
  FInterchangeStepCurve *pFVar10;
  
  ::FString::FString(&this->SceneNodeUniqueID,&param_1->SceneNodeUniqueID);
  pTVar1 = &this->Curves;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Curves).ArrayMax;
  iVar7 = (param_1->Curves).ArrayNum;
  pFVar8 = (FRichCurve *)(param_1->Curves).AllocatorInstance.Data;
  (this->Curves).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FRichCurve,FRichCurve,int>((pTVar1->AllocatorInstance).Data,pFVar8,iVar7);
  }
  pTVar3 = &this->InbetweenCurveNames;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InbetweenCurveNames).ArrayMax;
  iVar7 = (param_1->InbetweenCurveNames).ArrayNum;
  pFVar9 = (param_1->InbetweenCurveNames).AllocatorInstance.Data;
  (this->InbetweenCurveNames).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FString,FString,int>((pTVar3->AllocatorInstance).Data,(FString *)pFVar9,iVar7);
  }
  pTVar4 = &this->InbetweenFullWeights;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InbetweenFullWeights).ArrayMax;
  iVar7 = (param_1->InbetweenFullWeights).ArrayNum;
  pFVar9 = (param_1->InbetweenFullWeights).AllocatorInstance.Data;
  (this->InbetweenFullWeights).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 2);
  }
  pTVar5 = &this->StepCurves;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->StepCurves).ArrayMax;
  iVar7 = (param_1->StepCurves).ArrayNum;
  pFVar10 = (FInterchangeStepCurve *)(param_1->StepCurves).AllocatorInstance.Data;
  (this->StepCurves).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar2);
    ConstructItems<FInterchangeStepCurve,FInterchangeStepCurve,int>
              ((pTVar5->AllocatorInstance).Data,pFVar10,iVar7);
  }
  pTVar6 = &this->Transforms;
  this->BakeFrequency = param_1->BakeFrequency;
  this->RangeStartTime = param_1->RangeStartTime;
  this->RangeEndTime = param_1->RangeEndTime;
  piVar2 = &(this->Transforms).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->Transforms).ArrayNum;
  pFVar9 = (param_1->Transforms).AllocatorInstance.Data;
  (this->Transforms).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x60);
  }
  ::FString::FString(&(this->PayloadKey).UniqueId,&(param_1->PayloadKey).UniqueId);
  (this->PayloadKey).Type = (param_1->PayloadKey).Type;
  this->AdditionalSupportedType = param_1->AdditionalSupportedType;
  return this;
}

// ~FAnimationPayloadData @ 14e691910

void __thiscall
UE::Interchange::FAnimationPayloadData::~FAnimationPayloadData(FAnimationPayloadData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PayloadKey).UniqueId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInterchangeStepCurve,int>
            ((FInterchangeStepCurve *)(this->StepCurves).AllocatorInstance.Data,
             (this->StepCurves).ArrayNum);
  pFVar1 = (this->StepCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InbetweenFullWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->InbetweenCurveNames).AllocatorInstance.Data,
             (this->InbetweenCurveNames).ArrayNum);
  pFVar1 = (this->InbetweenCurveNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRichCurve,int>
            ((FRichCurve *)(this->Curves).AllocatorInstance.Data,(this->Curves).ArrayNum);
  pFVar1 = (this->Curves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SceneNodeUniqueID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14e692150

FAnimationPayloadData * __thiscall
UE::Interchange::FAnimationPayloadData::operator=
          (FAnimationPayloadData *this,FAnimationPayloadData *param_1)

{
  TArray<FRichCurve,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FInterchangeStepCurve,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FRichCurve *pFVar8;
  FScriptContainerElement *pFVar9;
  FInterchangeStepCurve *pFVar10;
  
  ::FString::operator=(&this->SceneNodeUniqueID,&param_1->SceneNodeUniqueID);
  pTVar1 = &this->Curves;
  if (pTVar1 != &param_1->Curves) {
    DestructItems<FRichCurve,int>
              ((FRichCurve *)(pTVar1->AllocatorInstance).Data,(this->Curves).ArrayNum);
    iVar7 = (param_1->Curves).ArrayNum;
    piVar2 = &(this->Curves).ArrayMax;
    pFVar8 = (FRichCurve *)(param_1->Curves).AllocatorInstance.Data;
    (this->Curves).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,iVar7,*piVar2,&pTVar1->AllocatorInstance,iVar7,piVar2);
      ConstructItems<FRichCurve,FRichCurve,int>((pTVar1->AllocatorInstance).Data,pFVar8,iVar7);
    }
  }
  pTVar3 = &this->InbetweenCurveNames;
  if (pTVar3 != &param_1->InbetweenCurveNames) {
    DestructItems<FString,int>
              ((FString *)(pTVar3->AllocatorInstance).Data,(this->InbetweenCurveNames).ArrayNum);
    iVar7 = (param_1->InbetweenCurveNames).ArrayNum;
    piVar2 = &(this->InbetweenCurveNames).ArrayMax;
    pFVar9 = (param_1->InbetweenCurveNames).AllocatorInstance.Data;
    (this->InbetweenCurveNames).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,*piVar2,&pTVar3->AllocatorInstance,iVar7,piVar2);
      ConstructItems<FString,FString,int>((pTVar3->AllocatorInstance).Data,(FString *)pFVar9,iVar7);
    }
  }
  pTVar4 = &this->InbetweenFullWeights;
  if (pTVar4 != &param_1->InbetweenFullWeights) {
    iVar7 = (param_1->InbetweenFullWeights).ArrayNum;
    piVar2 = &(this->InbetweenFullWeights).ArrayMax;
    pFVar9 = (param_1->InbetweenFullWeights).AllocatorInstance.Data;
    (this->InbetweenFullWeights).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar7,*piVar2,&pTVar4->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 2);
      }
    }
  }
  pTVar5 = &this->StepCurves;
  if (pTVar5 != &param_1->StepCurves) {
    DestructItems<FInterchangeStepCurve,int>
              ((FInterchangeStepCurve *)(pTVar5->AllocatorInstance).Data,(this->StepCurves).ArrayNum
              );
    iVar7 = (param_1->StepCurves).ArrayNum;
    piVar2 = &(this->StepCurves).ArrayMax;
    pFVar10 = (FInterchangeStepCurve *)(param_1->StepCurves).AllocatorInstance.Data;
    (this->StepCurves).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar7,*piVar2,&pTVar5->AllocatorInstance,iVar7,piVar2);
      ConstructItems<FInterchangeStepCurve,FInterchangeStepCurve,int>
                ((pTVar5->AllocatorInstance).Data,pFVar10,iVar7);
    }
  }
  this->BakeFrequency = param_1->BakeFrequency;
  pTVar6 = &this->Transforms;
  this->RangeStartTime = param_1->RangeStartTime;
  this->RangeEndTime = param_1->RangeEndTime;
  if (pTVar6 != &param_1->Transforms) {
    iVar7 = (param_1->Transforms).ArrayNum;
    piVar2 = &(this->Transforms).ArrayMax;
    pFVar9 = (param_1->Transforms).AllocatorInstance.Data;
    (this->Transforms).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar7,*piVar2,&pTVar6->AllocatorInstance,iVar7,piVar2);
      if (iVar7 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar9,(longlong)iVar7 * 0x60);
      }
    }
  }
  ::FString::operator=(&(this->PayloadKey).UniqueId,&(param_1->PayloadKey).UniqueId);
  (this->PayloadKey).Type = (param_1->PayloadKey).Type;
  this->AdditionalSupportedType = param_1->AdditionalSupportedType;
  return this;
}

