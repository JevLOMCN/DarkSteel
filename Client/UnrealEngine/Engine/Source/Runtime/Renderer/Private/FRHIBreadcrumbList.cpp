// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Append @ 14473f630

void __thiscall FRHIBreadcrumbList::Append(FRHIBreadcrumbList *this,FRHIBreadcrumbNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (FRHIBreadcrumbNode *)0x0) || (param_1 == FRHIBreadcrumbNode::Sentinel)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node && Node != FRHIBreadcrumbNode::Sentinel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x192,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->ListLink != (FRHIBreadcrumbNode *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Node->ListLink",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->First == (FRHIBreadcrumbNode *)0x0) {
    this->First = param_1;
  }
  if (this->Last != (FRHIBreadcrumbNode *)0x0) {
    this->Last->ListLink = param_1;
  }
  this->Last = param_1;
  return;
}

