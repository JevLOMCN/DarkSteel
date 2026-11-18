// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FMovieSceneCompiledDataEntry @ 1460933c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneCompiledDataEntry * __thiscall
FMovieSceneCompiledDataEntry::FMovieSceneCompiledDataEntry
          (FMovieSceneCompiledDataEntry *this,FMovieSceneCompiledDataEntry *param_1)

{
  TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (param_1->CompiledSignature).B;
  uVar5 = (param_1->CompiledSignature).C;
  uVar6 = (param_1->CompiledSignature).D;
  pTVar1 = &this->DeterminismFences;
  piVar2 = &(this->DeterminismFences).ArrayMax;
  (this->CompiledSignature).A = (param_1->CompiledSignature).A;
  (this->CompiledSignature).B = uVar4;
  (this->CompiledSignature).C = uVar5;
  (this->CompiledSignature).D = uVar6;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->DeterminismFences).ArrayNum;
  _Src = (param_1->DeterminismFences).AllocatorInstance.Data;
  (this->DeterminismFences).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->SequenceKey = param_1->SequenceKey;
  (this->DataID).Value = (param_1->DataID).Value;
  this->AccumulatedFlags = param_1->AccumulatedFlags;
  this->AllocatedMask = param_1->AllocatedMask;
  this->AccumulatedMask = param_1->AccumulatedMask;
  this->CompiledFlags = param_1->CompiledFlags;
  return this;
}

// FMovieSceneCompiledDataEntry @ 146093490

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneCompiledDataEntry * __thiscall
FMovieSceneCompiledDataEntry::FMovieSceneCompiledDataEntry(FMovieSceneCompiledDataEntry *this)

{
  FMovieSceneCompiledSequenceFlagStruct *pFVar1;
  
  pFVar1->bParentSequenceRequiresLowerFence = '\0';
  pFVar1->bParentSequenceRequiresUpperFence = '\0';
  (this->CompiledSignature).A = 0;
  (this->CompiledSignature).B = 0;
  (this->CompiledSignature).C = 0;
  (this->CompiledSignature).D = 0;
  (this->DeterminismFences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeterminismFences).ArrayNum = 0;
  (this->DeterminismFences).ArrayMax = 0;
  (this->SequenceKey).ObjectIndex = 0;
  (this->SequenceKey).ObjectSerialNumber = 0;
  this->AccumulatedFlags = None;
  this->AccumulatedMask = None;
  (this->DataID).Value = -1;
  return this;
}

// GetSequence @ 1460d0210

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
FMovieSceneCompiledDataEntry::GetSequence(FMovieSceneCompiledDataEntry *this)

{
  int iVar1;
  UMovieSceneSequence *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_res8;
  FString local_28;
  FString local_18;
  
  local_res8.ObjectIndex = (this->SequenceKey).ObjectIndex;
  local_res8.ObjectSerialNumber = (this->SequenceKey).ObjectSerialNumber;
  pUVar2 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&local_res8);
  if (pUVar2 == (UMovieSceneSequence *)0x0) {
    pUVar2 = (UMovieSceneSequence *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneSequence>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

