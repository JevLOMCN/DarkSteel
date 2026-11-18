// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~Params @ 14ee254c0

void __thiscall UE::Online::FAuthLogin::Params::~Params(Params *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  DestructItems<FString,int>
            ((FString *)(this->Scopes).AllocatorInstance.Data,(this->Scopes).ArrayNum);
  pFVar1 = (this->Scopes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  uVar4 = (ulonglong)(this->CredentialsToken).TypeIndex;
  if (1 < uVar4) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,UE::Online::FExternalAuthToken>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->CredentialsToken);
  pFVar1 = (this->CredentialsId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

