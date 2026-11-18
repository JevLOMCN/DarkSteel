// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 1

// operator<FName,FGameplayTagSource>_TTuple<FName,FGameplayTagSource> @ 146ac3c30

TTuple<FName,FGameplayTagSource> * __thiscall
TPairInitializer<FName_const_&,FGameplayTagSource_&&>::
operator<FName,FGameplayTagSource>_TTuple<FName,FGameplayTagSource>
          (TPairInitializer<FName_const_&,FGameplayTagSource_&&> *this,
          TTuple<FName,FGameplayTagSource> *__return_storage_ptr__)

{
  FGameplayTagSource *pFVar1;
  UGameplayTagsList *pUVar2;
  URestrictedGameplayTagsList *pUVar3;
  uint uVar4;
  
  pFVar1 = this->Value;
  uVar4 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  uVar4 = (pFVar1->SourceName).Number;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->SourceName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  __return_storage_ptr__->field_0x10 = pFVar1->SourceType;
  pUVar2 = (pFVar1->SourceTagList).field0_0x0.DebugPtr;
  *(UGameplayTagsList **)&__return_storage_ptr__->field_0x18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UGameplayTagsList *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar3 = (pFVar1->SourceRestrictedTagList).field0_0x0.DebugPtr;
  *(URestrictedGameplayTagsList **)&__return_storage_ptr__->field_0x20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (URestrictedGameplayTagsList *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return __return_storage_ptr__;
}

