// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// FAnyDataReference @ 14b2a60d0

FAnyDataReference * __thiscall
Metasound::FAnyDataReference::FAnyDataReference(FAnyDataReference *this,FAnyDataReference *param_1)

{
  EDataReferenceAccessType EVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  
  EVar1 = param_1->AccessType;
  pIVar2 = (param_1->DataRefPtr).Ptr;
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  this->AccessType = EVar1;
  (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,&this->DataRefPtr);
  if ((this->DataRefPtr).Ptr == (IDataReference *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAnyDataReference *)(*pcVar3)();
      return pFVar5;
    }
  }
  if (EVar1 == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAnyDataReference *)(*pcVar3)();
      return pFVar5;
    }
  }
  this->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  return this;
}

