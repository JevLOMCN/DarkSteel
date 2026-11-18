// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FBreadcrumbState @ 145c858c0

FBreadcrumbState * __thiscall
FRHICommandListBase::FBreadcrumbState::FBreadcrumbState
          (FBreadcrumbState *this,FBreadcrumbState *param_1)

{
  bool bVar1;
  FRHIBreadcrumbNode *pFVar2;
  
  pFVar2 = param_1->Current;
  (this->Latest).bIsSet = false;
  this->Current = pFVar2;
  bVar1 = (param_1->Latest).bIsSet;
  (this->Latest).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Latest).TypedValue = (param_1->Latest).TypedValue;
  }
  this->Prev = param_1->Prev;
  pFVar2 = (param_1->Range).Last;
  (this->Range).First = (param_1->Range).First;
  (this->Range).Last = pFVar2;
  return this;
}

// ~FBreadcrumbState @ 145c8a700

void __thiscall FRHICommandListExecutor::FBreadcrumbState::~FBreadcrumbState(FBreadcrumbState *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Last).AllocatorRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Current).AllocatorRef.SharedReferenceCount.ReferenceController);
  return;
}

