// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// FGridLabelData @ 14d8b5f10

FGridLabelData * __thiscall
SSampledSequenceValueGridOverlay::FGridLabelData::FGridLabelData
          (FGridLabelData *this,FGridLabelData *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FText *pFVar4;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->LabelTexts).ArrayMax;
  (this->LabelTexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->LabelTexts).ArrayNum;
  pFVar4 = (FText *)(param_1->LabelTexts).AllocatorInstance.Data;
  (this->LabelTexts).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FText,FText,int>((this->LabelTexts).AllocatorInstance.Data,pFVar4,iVar3);
  }
  pTVar2 = &this->LabelCoordinates;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LabelCoordinates).ArrayMax;
  iVar3 = (param_1->LabelCoordinates).ArrayNum;
  _Src = (param_1->LabelCoordinates).AllocatorInstance.Data;
  (this->LabelCoordinates).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
  }
  return this;
}

