// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Transform @ 14ae8c910

void __thiscall
Metasound::Frontend::SearchEngineQuerySteps::
FTransformInterfaceRegistryTransactionToInterfaceVersion::Transform
          (FTransformInterfaceRegistryTransactionToInterfaceVersion *this,
          TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
          *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FMetasoundFrontendVersion *pFVar4;
  FName local_18;
  FMetasoundFrontendVersionNumber FStack_10;
  
  bVar1 = param_1->TypeIndex;
  local_18.ComparisonIndex.Value = 0;
  local_18.Number = 0;
  FStack_10.Major = 1;
  FStack_10.Minor = 0;
  if (4 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573003>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0xf5,"InValue.IsType<FInterfaceRegistryTransaction>()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (param_1->TypeIndex != '\x03') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = FInterfaceRegistryTransaction::GetInterfaceVersion
                       ((FInterfaceRegistryTransaction *)param_1);
    local_18 = pFVar4->Name;
    FStack_10 = pFVar4->Number;
  }
  bVar1 = param_1->TypeIndex;
  if (4 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(param_1);
  param_1->_padding_ = (longlong)local_18;
  param_1->_padding_ = (longlong)FStack_10;
  param_1->TypeIndex = '\0';
  return;
}

