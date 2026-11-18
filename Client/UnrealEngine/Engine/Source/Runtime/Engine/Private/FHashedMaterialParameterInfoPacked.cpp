// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 147f2f640

FHashedMaterialParameterInfoPacked * __thiscall
FHashedMaterialParameterInfoPacked::operator=
          (FHashedMaterialParameterInfoPacked *this,FMemoryImageMaterialParameterInfo *param_1)

{
  code *pcVar1;
  FNameEntryId FVar2;
  bool bVar3;
  FHashedMaterialParameterInfoPacked *pFVar4;
  
  if (0xffff < param_1->Index + 0x8000U) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InInfo.Index >= std::numeric_limits<int16>::min()) && (InInfo.Index <= std::numeric_limits<int16>::max())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                       ,0x5d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHashedMaterialParameterInfoPacked *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (3 < (param_1->Association).Value) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InInfo.Association <= 3",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialInstanceSupport.h"
                       ,0x5e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHashedMaterialParameterInfoPacked *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar2.Value = (param_1->Name).DisplayIndex.Value;
  (this->Name).ComparisonIndex = (FNameEntryId)(param_1->Name).ComparisonIndex.Value;
  (this->Name).DisplayIndex = (FNameEntryId)FVar2.Value;
  (this->Name).Number = (param_1->Name).Number;
  this->Index = (short)param_1->Index;
  this->Association = (ushort)(param_1->Association).Value;
  return this;
}

