// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Filter @ 14ae71180

/* WARNING: Enum "EMetasoundFrontendClassAccessFlags": Some values do not have unique names */

bool __thiscall
Metasound::Frontend::SearchEngineQuerySteps::FRemoveDeprecatedClasses::Filter
          (FRemoveDeprecatedClasses *this,FFrontendQueryEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EMetasoundFrontendClassAccessFlags EVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Value).TypeIndex;
  if (4 < uVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FMetasoundFrontendClass,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
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
    EVar4 = FMetasoundFrontendClassMetadata::GetAccessFlags
                      ((FMetasoundFrontendClassMetadata *)&(param_1->Value)._padding_);
    return (bool)(~(byte)EVar4 & 1);
  }
  return true;
}

