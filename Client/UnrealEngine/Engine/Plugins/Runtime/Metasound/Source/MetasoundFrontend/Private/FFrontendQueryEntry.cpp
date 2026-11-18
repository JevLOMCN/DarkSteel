// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// FFrontendQueryEntry @ 14ae58070

FFrontendQueryEntry * __thiscall
Metasound::FFrontendQueryEntry::FFrontendQueryEntry
          (FFrontendQueryEntry *this,FFrontendQueryEntry *param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FFrontendQueryEntry *pFVar7;
  
  uVar3 = (param_1->ID).B;
  uVar4 = (param_1->ID).C;
  uVar5 = (param_1->ID).D;
  (this->ID).A = (param_1->ID).A;
  (this->ID).B = uVar3;
  (this->ID).C = uVar4;
  (this->ID).D = uVar5;
  bVar1 = (param_1->Value).TypeIndex;
  (this->Value).TypeIndex = bVar1;
  if (4 < bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FFrontendQueryEntry *)(*pcVar2)();
      return pFVar7;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(&this->Value,&param_1->Value);
  this->Score = param_1->Score;
  return this;
}

