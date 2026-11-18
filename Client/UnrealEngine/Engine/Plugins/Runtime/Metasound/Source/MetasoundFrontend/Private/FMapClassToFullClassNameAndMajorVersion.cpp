// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7bc10

FFrontendQueryKey * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapClassToFullClassNameAndMajorVersion::Map
          (FMapClassToFullClassNameAndMajorVersion *this,FFrontendQueryKey *__return_storage_ptr__,
          FFrontendQueryEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFrontendQueryKey *pFVar3;
  FMetasoundFrontendVersionNumber *pFVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (4 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFrontendQueryKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendClass,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5349767403691573217>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendSearchEngineCore.cpp"
                       ,0x1f,"InEntry.Value.IsType<FMetasoundFrontendClass>()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFrontendQueryKey *)(*pcVar1)();
      return pFVar3;
    }
    (__return_storage_ptr__->Key).TypeIndex = '\0';
    __return_storage_ptr__->Hash = 0xffffffff;
    return __return_storage_ptr__;
  }
  if ((param_1->Value).TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FFrontendQueryKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = FMetasoundFrontendClassMetadata::GetVersion
                     ((FMetasoundFrontendClassMetadata *)&(param_1->Value)._padding_);
  CreateKeyFromFullClassNameAndMajorVersion
            (__return_storage_ptr__,(FMetasoundFrontendClassName *)&(param_1->Value)._padding_,
             pFVar4->Major);
  return __return_storage_ptr__;
}

