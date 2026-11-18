// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FFilterClassesByClassID @ 14ae57ee0

FFilterClassesByClassID * __thiscall
Metasound::FFilterClassesByClassID::FFilterClassesByClassID
          (FFilterClassesByClassID *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1->A;
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  this->_padding_ = (longlong)&___7FFilterClassesByClassID_Metasound__6B_;
  (this->ClassID).A = uVar1;
  (this->ClassID).B = uVar2;
  (this->ClassID).C = uVar3;
  (this->ClassID).D = uVar4;
  return this;
}

// Filter @ 14ae70f10

bool __thiscall
Metasound::FFilterClassesByClassID::Filter
          (FFilterClassesByClassID *this,FFrontendQueryEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((param_1->Value).TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return ((*(uint *)((longlong)&(param_1->Value)._padding_ + 4) == (this->ClassID).D &&
          (uint)(param_1->Value)._padding_ == (this->ClassID).C) &&
         *(uint *)((longlong)&(param_1->Value)._padding_ + 4) == (this->ClassID).B) &&
         (uint)(param_1->Value)._padding_ == (this->ClassID).A;
}

