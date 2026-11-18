// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FStreamingLevelsToConsiderIterationScope @ 1489b9530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Private::World::FStreamingLevelsToConsiderIterationScope::
~FStreamingLevelsToConsiderIterationScope(FStreamingLevelsToConsiderIterationScope *this)

{
  int iVar1;
  FStreamingLevelsToConsider *this_00;
  FScriptContainerElement *pFVar2;
  ULevelStreaming *pUVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  TObjectPtr<ULevelStreaming>_u_0 local_res8;
  
  this_00 = this->StreamingLevelsToConsider;
  this_00->StreamingLevelsBeingConsidered = this_00->StreamingLevelsBeingConsidered + -1;
  if (this_00->StreamingLevelsBeingConsidered < 1) {
    if (0 < (this_00->LevelsToProcess).Pairs.ArrayNum) {
      pFVar2 = (this_00->LevelsToProcess).Pairs.AllocatorInstance.Data;
      (this_00->LevelsToProcess).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar1 = (this_00->LevelsToProcess).Pairs.ArrayNum;
      (this_00->LevelsToProcess).Pairs.ArrayNum = 0;
      (this_00->LevelsToProcess).Pairs.ArrayMax = 0;
      for (pFVar5 = pFVar2; pFVar5 != pFVar2 + (longlong)iVar1 * 0x10; pFVar5 = pFVar5 + 0x10) {
        pUVar3 = *(ULevelStreaming **)pFVar5;
        if ((pUVar3 != (ULevelStreaming *)0x0) &&
           ((bVar4 = FStreamingLevelsToConsider::Remove(this_00,pUVar3), bVar4 ||
            (pFVar5[8] == (FScriptContainerElement)0x0)))) {
          FStreamingLevelsToConsider::Add_Internal(this_00,pUVar3,true);
        }
      }
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    local_res8.DebugPtr = (ULevelStreaming *)0x0;
    TArray<TObjectPtr<ULevelStreaming>,TSizedDefaultAllocator<32>_>::Remove
              (&this_00->StreamingLevels,(TObjectPtr<ULevelStreaming> *)&local_res8.ObjectPtr);
  }
  return;
}

