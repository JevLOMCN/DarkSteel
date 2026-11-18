// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 1

// FindSystem<UTemplateSequencePropertyScalingInstantiatorSystem> @ 14ac67b10

/* WARNING: Enum "Type": Some values do not have unique names */

UTemplateSequencePropertyScalingInstantiatorSystem * __thiscall
UMovieSceneEntitySystemLinker::FindSystem<UTemplateSequencePropertyScalingInstantiatorSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UTemplateSequencePropertyScalingInstantiatorSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UTemplateSequencePropertyScalingInstantiatorSystem *)
           FindSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 == (UTemplateSequencePropertyScalingInstantiatorSystem *)0x0) {
    pUVar2 = (UTemplateSequencePropertyScalingInstantiatorSystem *)0x0;
  }
  else {
    pUVar3 = UTemplateSequencePropertyScalingInstantiatorSystem::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UTemplateSequencePropertyScalingInstantiatorSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

