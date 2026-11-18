// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// FFilterClassesByInputVertexDataType @ 14ae57f00

FFilterClassesByInputVertexDataType * __thiscall
Metasound::FFilterClassesByInputVertexDataType::FFilterClassesByInputVertexDataType
          (FFilterClassesByInputVertexDataType *this,FName *param_1)

{
  this->_padding_ = (longlong)&___7FFilterClassesByInputVertexDataType_Metasound__6B_;
  this->InputVertexTypeName = *param_1;
  return this;
}

// Filter @ 14ae70f90

bool __thiscall
Metasound::FFilterClassesByInputVertexDataType::Filter
          (FFilterClassesByInputVertexDataType *this,FFrontendQueryEntry *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMetasoundFrontendClassInterface *pFVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(param_1->Value).TypeIndex;
  if (4 < uVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendClass,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEntry.Value.IsType<FMetasoundFrontendClass>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuerySteps.cpp"
                       ,0xd2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((param_1->Value).TypeIndex != '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar5 = FMetasoundFrontendClass::GetDefaultInterface((FMetasoundFrontendClass *)&param_1->Value);
  pFVar6 = (pFVar5->Inputs).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(pFVar5->Inputs).ArrayNum * 0x48;
  if (pFVar6 != pFVar1) {
    do {
      if (*(FName *)(pFVar6 + 8) == this->InputVertexTypeName) goto LAB_14ae71071;
      pFVar6 = pFVar6 + 0x48;
    } while (pFVar6 != pFVar1);
  }
  pFVar6 = (FScriptContainerElement *)0x0;
LAB_14ae71071:
  return pFVar6 != (FScriptContainerElement *)0x0;
}

