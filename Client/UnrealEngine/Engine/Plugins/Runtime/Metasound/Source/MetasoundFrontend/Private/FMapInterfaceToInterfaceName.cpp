// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7c110

FFrontendQueryKey * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapInterfaceToInterfaceName::Map
          (FMapInterfaceToInterfaceName *this,FFrontendQueryKey *__return_storage_ptr__,
          FFrontendQueryEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FFrontendQueryKey *pFVar4;
  int iVar5;
  ulonglong uVar7;
  longlong lVar6;
  
  uVar7 = (ulonglong)(param_1->Value).TypeIndex;
  lVar6 = 0;
  iVar5 = 0;
  if ((4 < uVar7) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FFrontendQueryKey *)(*pcVar1)();
    return pFVar4;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendInterface,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573013>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0xeb,"InEntry.Value.IsType<FMetasoundFrontendInterface>()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFrontendQueryKey *)(*pcVar1)();
      return pFVar4;
    }
  }
  else {
    if (((param_1->Value).TypeIndex != '\x04') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FFrontendQueryKey *)(*pcVar1)();
      return pFVar4;
    }
    lVar6 = (param_1->Value)._padding_;
    iVar5 = (int)((ulonglong)lVar6 >> 0x20);
  }
  (__return_storage_ptr__->Key)._padding_ = lVar6;
  (__return_storage_ptr__->Key).TypeIndex = '\x03';
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
  __return_storage_ptr__->Hash = uVar3 + iVar5;
  return __return_storage_ptr__;
}

