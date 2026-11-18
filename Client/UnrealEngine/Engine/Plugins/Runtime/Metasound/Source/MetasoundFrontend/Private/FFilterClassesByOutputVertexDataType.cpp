// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FFilterClassesByOutputVertexDataType @ 14ae57f20

FFilterClassesByOutputVertexDataType * __thiscall
Metasound::FFilterClassesByOutputVertexDataType::FFilterClassesByOutputVertexDataType
          (FFilterClassesByOutputVertexDataType *this,FName *param_1)

{
  this->_padding_ = (longlong)&___7FFilterClassesByOutputVertexDataType_Metasound__6B_;
  this->OutputVertexTypeName = *param_1;
  return this;
}

// Filter @ 14ae71090

bool __thiscall
Metasound::FFilterClassesByOutputVertexDataType::Filter
          (FFilterClassesByOutputVertexDataType *this,FFrontendQueryEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMetasoundFrontendClassInterface *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
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
  pFVar4 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)&param_1->Value);
  pFVar5 = (pFVar4->Outputs).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)(pFVar4->Outputs).ArrayNum * 0x34;
  if (pFVar5 != pFVar6) {
    do {
      if (*(FName *)(pFVar5 + 8) == this->OutputVertexTypeName) goto LAB_14ae71101;
      pFVar5 = pFVar5 + 0x34;
    } while (pFVar5 != pFVar6);
  }
  pFVar5 = (FScriptContainerElement *)0x0;
LAB_14ae71101:
  return pFVar5 != (FScriptContainerElement *)0x0;
}

