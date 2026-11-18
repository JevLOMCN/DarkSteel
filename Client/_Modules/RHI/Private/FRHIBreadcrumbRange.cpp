// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Enumerate @ 145cdad40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FOuter * __thiscall
FRHIBreadcrumbRange::Enumerate
          (FRHIBreadcrumbRange *this,FOuter *__return_storage_ptr__,ERHIPipeline param_1)

{
  code *pcVar1;
  FRHIBreadcrumbNode *pFVar2;
  FRHIBreadcrumbNode *pFVar3;
  bool bVar4;
  FOuter *pFVar5;
  
  if ((this->First == (FRHIBreadcrumbNode *)0x0) != (this->Last == (FRHIBreadcrumbNode *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!First == !Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x27b,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FOuter *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar2 = this->First;
  pFVar3 = this->Last;
  __return_storage_ptr__->Pipeline = param_1;
  (__return_storage_ptr__->Range).First = pFVar2;
  (__return_storage_ptr__->Range).Last = pFVar3;
  return __return_storage_ptr__;
}

