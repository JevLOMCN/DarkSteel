// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FPCGStackHandle @ 149eed870

FPCGStackHandle * __thiscall
FPCGStackHandle::FPCGStackHandle
          (FPCGStackHandle *this,TSharedPtr<FPCGStackContext_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  (this->StackContext).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->StackContext).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->StackIndex = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// GetStack @ 149f05400

FPCGStack * __thiscall FPCGStackHandle::GetStack(FPCGStackHandle *this)

{
  int iVar1;
  FPCGStackContext *this_00;
  FPCGStack *pFVar2;
  
  this_00 = (this->StackContext).Object;
  if (((this_00 != (FPCGStackContext *)0x0) && (iVar1 = this->StackIndex, -1 < iVar1)) &&
     (iVar1 < (this_00->Stacks).ArrayNum)) {
    pFVar2 = FPCGStackContext::GetStack(this_00,iVar1);
    return pFVar2;
  }
  return (FPCGStack *)0x0;
}

// IsValid @ 149f08550

bool __thiscall FPCGStackHandle::IsValid(FPCGStackHandle *this)

{
  FPCGStackContext *pFVar1;
  
  pFVar1 = (this->StackContext).Object;
  if (((pFVar1 != (FPCGStackContext *)0x0) && (-1 < this->StackIndex)) &&
     (this->StackIndex < (pFVar1->Stacks).ArrayNum)) {
    return true;
  }
  return false;
}

