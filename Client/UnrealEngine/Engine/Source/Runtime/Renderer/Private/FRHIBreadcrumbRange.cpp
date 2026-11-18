// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InsertAfter @ 14477c6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHIBreadcrumbRange::InsertAfter
          (FRHIBreadcrumbRange *this,FRHIBreadcrumbRange *param_1,FRHIBreadcrumbNode *param_2,
          ERHIPipeline param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FRHIBreadcrumbNode *pFVar4;
  FRHIBreadcrumbNode *pFVar5;
  longlong lVar6;
  
  if ((param_1->First == (FRHIBreadcrumbNode *)0x0) != (param_1->Last == (FRHIBreadcrumbNode *)0x0))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Other.First == !Other.Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,500,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->First == (FRHIBreadcrumbNode *)0x0) != (this->Last == (FRHIBreadcrumbNode *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!First == !Last",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                       ,0x1f5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->First != (FRHIBreadcrumbNode *)0x0) {
    lVar6 = 0x20;
    if ((param_3 == Graphics) || (lVar3 = 0x20, param_3 != AsyncCompute)) {
      lVar3 = 0x18;
    }
    if (*(longlong *)((longlong)(param_1->Last->NextPtrs).Elements + lVar3 + -0x18) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Other.Last->GetNextPtr(Pipeline)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                         ,0x1fe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_2 == (FRHIBreadcrumbNode *)0x0) {
      if ((param_3 == Graphics) || (param_3 != AsyncCompute)) {
        lVar6 = 0x18;
      }
      *(FRHIBreadcrumbNode **)((longlong)(param_1->Last->NextPtrs).Elements + lVar6 + -0x18) =
           this->First;
      bVar2 = this->Last == (FRHIBreadcrumbNode *)0x0;
      this->First = param_1->First;
    }
    else {
      if (this->First == (FRHIBreadcrumbNode *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("First",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                           ,0x210,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((param_3 == Graphics) || (param_3 != AsyncCompute)) {
        pFVar5 = (param_2->NextPtrs).Elements[0];
        if ((param_3 == Graphics) || (param_3 != AsyncCompute)) {
          (param_2->NextPtrs).Elements[0] = param_1->First;
          pFVar4 = param_1->Last;
          if ((param_3 == Graphics) || (param_3 != AsyncCompute)) {
            lVar6 = 0x18;
          }
        }
        else {
          (param_2->NextPtrs).Elements[1] = param_1->First;
          pFVar4 = param_1->Last;
        }
      }
      else {
        pFVar5 = (param_2->NextPtrs).Elements[1];
        (param_2->NextPtrs).Elements[1] = param_1->First;
        pFVar4 = param_1->Last;
      }
      *(FRHIBreadcrumbNode **)((longlong)(pFVar4->NextPtrs).Elements + lVar6 + -0x18) = pFVar5;
      bVar2 = this->Last == param_2;
    }
    if (bVar2) {
      this->Last = param_1->Last;
    }
  }
  return;
}

