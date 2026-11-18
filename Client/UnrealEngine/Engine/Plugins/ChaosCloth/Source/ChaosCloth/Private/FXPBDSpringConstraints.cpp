// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// ~FXPBDSpringConstraints @ 14dba0560

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::~FXPBDSpringConstraints(FXPBDSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FXPBDSpringConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdasDamping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DampingRatio).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DampingRatio).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// Init @ 14dc02590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::Softs::FXPBDSpringConstraints::Init(FXPBDSpringConstraints *this)

{
  int *piVar1;
  
  piVar1 = &(this->Lambdas).ArrayMax;
  (this->Lambdas).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,piVar1);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->Lambdas,(int)this->_padding_,Default);
  piVar1 = &(this->LambdasDamping).ArrayMax;
  (this->LambdasDamping).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,piVar1);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->LambdasDamping,(int)this->_padding_,Default);
  return;
}

