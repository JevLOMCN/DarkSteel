// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Map @ 14ae7c4b0

FFrontendQueryKey * __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FMapNodeRegistrationEventsToClassAndMajorVersion::Map
          (FMapNodeRegistrationEventsToClassAndMajorVersion *this,
          FFrontendQueryKey *__return_storage_ptr__,FFrontendQueryEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  FFrontendQueryKey *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(param_1->Value).TypeIndex;
  if (4 < uVar4) {
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
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) != '\0') {
    if ((param_1->Value).TypeIndex != '\x01') {
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
    CreateKeyFromFullClassNameAndMajorVersion
              (__return_storage_ptr__,
               (FMetasoundFrontendClassName *)((longlong)&(param_1->Value)._padding_ + 4),
               (int)(param_1->Value)._padding_);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Key).TypeIndex = '\0';
  __return_storage_ptr__->Hash = 0xffffffff;
  return __return_storage_ptr__;
}

