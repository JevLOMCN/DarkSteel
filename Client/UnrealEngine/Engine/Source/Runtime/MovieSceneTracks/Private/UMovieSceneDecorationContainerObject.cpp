// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// FindDecoration<UMovieSceneSectionAnchorsDecoration> @ 1465be420

UMovieSceneSectionAnchorsDecoration * __thiscall
UMovieSceneDecorationContainerObject::FindDecoration<UMovieSceneSectionAnchorsDecoration>
          (UMovieSceneDecorationContainerObject *this)

{
  int iVar1;
  UMovieSceneSectionAnchorsDecoration *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  TObjectPtr<UClass>_u_0 local_res8;
  FString local_28;
  FString local_18;
  
  local_res8.DebugPtr = Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8.DebugPtr != (UClass *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
  }
  pUVar2 = (UMovieSceneSectionAnchorsDecoration *)
           FMovieSceneDecorationContainer::FindDecoration
                     (&this->Decorations,(TSubclassOf<UObject> *)&local_res8.ObjectPtr);
  if (pUVar2 == (UMovieSceneSectionAnchorsDecoration *)0x0) {
    pUVar2 = (UMovieSceneSectionAnchorsDecoration *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMovieSceneSectionAnchorsDecoration_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneSectionAnchorsDecoration>(&local_28);
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

