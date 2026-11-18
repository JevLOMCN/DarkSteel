// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// GetFirstObjectParam @ 14a8bac20

UObject * __thiscall FChooserEvaluationContext::GetFirstObjectParam(FChooserEvaluationContext *this)

{
  UObject *pUVar1;
  
  if (0 < (this->ObjectParams).ArrayNum) {
    pUVar1 = *(UObject **)(this->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    return pUVar1;
  }
  return (UObject *)0x0;
}

// operator= @ 14a8e3200

FChooserEvaluationContext * __thiscall
FChooserEvaluationContext::operator=
          (FChooserEvaluationContext *this,FChooserEvaluationContext *param_1)

{
  int *piVar1;
  TArray<FChooserEvaluationInputObject,TFixedAllocator<4>_> *pTVar2;
  int iVar3;
  bool bVar4;
  undefined7 uVar5;
  ForElementType<FStructView> _Dst;
  ForElementType<FStructView> _Src;
  
  bVar4 = (param_1->DebuggingInfo).bCurrentDebugTarget;
  uVar5 = *(undefined7 *)&(param_1->DebuggingInfo).field_0x9;
  (this->DebuggingInfo).CurrentChooser = (param_1->DebuggingInfo).CurrentChooser;
  (this->DebuggingInfo).bCurrentDebugTarget = bVar4;
  *(undefined7 *)&(this->DebuggingInfo).field_0x9 = uVar5;
  if (this != param_1) {
    _Src = (param_1->Params).AllocatorInstance.SecondaryData;
    piVar1 = &(this->Params).ArrayMax;
    iVar3 = (param_1->Params).ArrayNum;
    if (_Src == (ForElementType<FStructView>)0x0) {
      _Src = (ForElementType<FStructView>)&param_1->Params;
    }
    (this->Params).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStructView>_>
                (0x10,8,iVar3,*piVar1,&(this->Params).AllocatorInstance,iVar3,piVar1);
      _Dst = (this->Params).AllocatorInstance.SecondaryData;
      if (iVar3 != 0) {
        if (_Dst == (ForElementType<FStructView>)0x0) {
          _Dst = (ForElementType<FStructView>)&this->Params;
        }
        memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 4);
      }
    }
  }
  pTVar2 = &this->ObjectParams;
  if (pTVar2 != &param_1->ObjectParams) {
    iVar3 = (param_1->ObjectParams).ArrayNum;
    piVar1 = &(this->ObjectParams).ArrayMax;
    (this->ObjectParams).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TFixedAllocator<4>::ForElementType<FChooserEvaluationInputObject>_>
                (8,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      ConstructItems<FChooserEvaluationInputObject,FChooserEvaluationInputObject,int>
                (pTVar2,(FChooserEvaluationInputObject *)&param_1->ObjectParams,iVar3);
    }
  }
  return this;
}

