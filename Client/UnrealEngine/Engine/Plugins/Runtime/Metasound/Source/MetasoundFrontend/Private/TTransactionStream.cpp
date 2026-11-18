// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> @ 14ad95ef0

TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> * __thiscall
Metasound::Frontend::TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>::
TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction>
          (TTransactionStream<Metasound::Frontend::FInterfaceRegistryTransaction> *this,
          TSharedRef<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction>,1>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *lpCriticalSection;
  uint uVar2;
  uint local_res8 [2];
  
  (this->Buffer).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Buffer).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  lpCriticalSection = (this->Buffer).Object;
  this->ReaderHandle = 0xffffffff;
  if (lpCriticalSection !=
      (TTransactionBuffer<Metasound::Frontend::FInterfaceRegistryTransaction> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = lpCriticalSection->CurrentReaderHandle;
    lpCriticalSection->CurrentReaderHandle = local_res8[0] + 1;
    TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::
    Emplace<unsigned_int_const_&,int_const_&>
              (&lpCriticalSection->ReaderPositions,local_res8,
               &lpCriticalSection->NumRemovedTransactions);
    uVar2 = local_res8[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->ReaderHandle = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> @ 14ae57730

TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> * __thiscall
Metasound::Frontend::TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>::
TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction>
          (TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *this,
          TSharedRef<Metasound::Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>,1>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *lpCriticalSection;
  uint uVar2;
  uint local_res8 [2];
  
  (this->Buffer).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Buffer).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  lpCriticalSection = (this->Buffer).Object;
  this->ReaderHandle = 0xffffffff;
  if (lpCriticalSection !=
      (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8[0] = lpCriticalSection->CurrentReaderHandle;
    lpCriticalSection->CurrentReaderHandle = local_res8[0] + 1;
    TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::
    Emplace<unsigned_int_const_&,int_const_&>
              (&lpCriticalSection->ReaderPositions,local_res8,
               &lpCriticalSection->NumRemovedTransactions);
    uVar2 = local_res8[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->ReaderHandle = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

