// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// operator= @ 1445a9b10

TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_> * __thiscall
TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_>::operator=
          (TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_> *this,
          TUniquePtr<UE::IoStore::FOnDemandToc,TDefaultDelete<UE::IoStore::FOnDemandToc>_> *param_1)

{
  FOnDemandToc *this_00;
  
  if (this != param_1) {
    this_00 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FOnDemandToc *)0x0;
    if (this_00 != (FOnDemandToc *)0x0) {
      UE::IoStore::FOnDemandToc::~FOnDemandToc(this_00);
      ::operator_delete(this_00,0xa0);
    }
    return this;
  }
  return this;
}

// operator= @ 1445a9b70

TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_> *
__thiscall
TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>::
operator=(TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
          *this,TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
                *param_1)

{
  FConnectionPool *this_00;
  
  if (this != param_1) {
    this_00 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FConnectionPool *)0x0;
    if (this_00 != (FConnectionPool *)0x0) {
      UE::IoStore::HTTP::FConnectionPool::~FConnectionPool(this_00);
      ::operator_delete(this_00,8);
    }
    return this;
  }
  return this;
}

