// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 3

// FRHIDrawStatsCategory @ 145c87690

FRHIDrawStatsCategory * __thiscall
FRHIDrawStatsCategory::FRHIDrawStatsCategory(FRHIDrawStatsCategory *this,FName param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FRHIDrawStatsCategory *pFVar5;
  
  this->Name = param_1;
  iVar2 = Manager.NumCategory;
  iVar3 = Manager.NumCategory + 1;
  this->Index = Manager.NumCategory;
  Manager.NumCategory = iVar3;
  if (0x1e < (uint)iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < MAX_DRAWCALL_CATEGORY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHI.cpp"
                       ,0x94,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FRHIDrawStatsCategory *)(*pcVar1)();
      return pFVar5;
    }
  }
  if (this->Index < 0x1f) {
    Manager.Array.Elements[this->Index] = this;
  }
  return this;
}

// FRHIDrawStatsCategory @ 145c87700

FRHIDrawStatsCategory * __thiscall
FRHIDrawStatsCategory::FRHIDrawStatsCategory(FRHIDrawStatsCategory *this)

{
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->Index = 0xffffffff;
  return this;
}

// GetManager @ 145caa360

FManager * __cdecl FRHIDrawStatsCategory::GetManager(void)

{
  return &Manager;
}

