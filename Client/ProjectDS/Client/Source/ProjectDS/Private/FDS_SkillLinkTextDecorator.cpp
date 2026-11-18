// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// Supports @ 14b597900

bool __thiscall
FDS_SkillLinkTextDecorator::Supports
          (FDS_SkillLinkTextDecorator *this,FTextRunParseResults *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FDS_StringUiID local_18;
  
  local_18.ID = 0xc5ad;
  local_18._padding_ = (longlong)&___7FDS_StringUiID__6B_;
  pFVar3 = FDS_StringUiID::Str(&local_18);
  iVar2 = (param_1->Name).Data.ArrayNum;
  iVar1 = (pFVar3->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar1 + iVar2 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->Name).Data.AllocatorInstance.Data,
                       (wchar_t *)(pFVar3->Data).AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

