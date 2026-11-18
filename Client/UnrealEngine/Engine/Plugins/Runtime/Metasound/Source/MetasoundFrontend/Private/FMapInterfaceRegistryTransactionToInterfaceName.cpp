// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7be10

FFrontendQueryKey * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceRegistryTransactionToInterfaceName::Map
          (FMapInterfaceRegistryTransactionToInterfaceName *this,
          FFrontendQueryKey *__return_storage_ptr__,FFrontendQueryEntry *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FFrontendQueryKey *pFVar5;
  FMetasoundFrontendVersion *pFVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(param_1->Value).TypeIndex;
  if (4 < uVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573178>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0x46,"InEntry.Value.IsType<FInterfaceRegistryTransaction>()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar5;
    }
    (__return_storage_ptr__->Key).TypeIndex = '\0';
    __return_storage_ptr__->Hash = 0xffffffff;
    return __return_storage_ptr__;
  }
  if ((param_1->Value).TypeIndex != '\x03') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FFrontendQueryKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar6 = FInterfaceRegistryTransaction::GetInterfaceVersion
                     ((FInterfaceRegistryTransaction *)&param_1->Value);
  (__return_storage_ptr__->Key)._padding_ = (longlong)pFVar6->Name;
  (__return_storage_ptr__->Key).TypeIndex = '\x03';
  FVar1 = pFVar6->Name;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  __return_storage_ptr__->Hash = uVar4 + FVar1.Number;
  return __return_storage_ptr__;
}

