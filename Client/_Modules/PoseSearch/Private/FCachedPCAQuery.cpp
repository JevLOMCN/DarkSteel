// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// FCachedPCAQuery @ 14a8aaf20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FCachedPCAQuery * __thiscall
UE::PoseSearch::FCachedPCAQuery::FCachedPCAQuery(FCachedPCAQuery *this,UPoseSearchDatabase *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FCachedPCAQuery *pFVar4;
  FSearchIndex *this_00;
  
  (this->Values).AllocatorInstance.Data = (float *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  if (param_1 == (UPoseSearchDatabase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDatabase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchContext.cpp"
                       ,0x2fc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCachedPCAQuery *)(*pcVar1)();
      return pFVar4;
    }
  }
  this->Database = param_1;
  this_00 = UPoseSearchDatabase::GetSearchIndex(param_1);
  iVar3 = FSearchIndex::GetNumberOfPrincipalComponents(this_00);
  TArray<float,TMemStackAllocator<16>_>::SetNumZeroed(&this->Values,iVar3,Default);
  return this;
}

