// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~FStatDefinition @ 14ef76f00

void __thiscall UE::Online::FStatDefinition::~FStatDefinition(FStatDefinition *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->DefaultValue).VariantData.TypeIndex;
  if (3 < uVar4) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->DefaultValue);
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

