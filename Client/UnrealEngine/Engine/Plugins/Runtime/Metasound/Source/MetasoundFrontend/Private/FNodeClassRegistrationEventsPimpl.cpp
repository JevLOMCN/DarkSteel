// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// ~FNodeClassRegistrationEventsPimpl @ 14ae5c2e0

void __thiscall
Metasound::FNodeClassRegistrationEventsPimpl::~FNodeClassRegistrationEventsPimpl
          (FNodeClassRegistrationEventsPimpl *this)

{
  uint uVar1;
  TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *pTVar2;
  TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *this_00;
  
  pTVar2 = (this->TransactionStream).Ptr;
  if (pTVar2 != (TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
    uVar1 = pTVar2->ReaderHandle;
    this_00 = (pTVar2->Buffer).Object;
    if (this_00 == (TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    TSortedMap<unsigned_int,int,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>::Remove
              (&this_00->ReaderPositions,uVar1);
    Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::
    RemoveTransactionsStreamedToAllReaders(this_00);
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->Buffer).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar2,0x18);
  }
  return;
}

// operator() @ 14ae5de80

void __thiscall
`Metasound::FNodeClassRegistrationEventsPimpl::Stream'::__l2::<lambda_1>::operator()
          (void *this,FNodeClassRegistryTransaction *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FName FVar3;
  undefined8 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar2 = *(ForAnyElementType **)this;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  iVar5 = *(int *)&pFVar2[1].Data;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x898,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar6 = pFVar2->Data + (longlong)iVar5 * 0x98;
  *pFVar6 = (FScriptContainerElement)param_1->Type;
  FVar3 = (param_1->NodeClassInfo).ClassName.Name;
  *(FName *)(pFVar6 + 4) = (param_1->NodeClassInfo).ClassName.Namespace;
  *(FName *)(pFVar6 + 0xc) = FVar3;
  *(FName *)(pFVar6 + 0x14) = (param_1->NodeClassInfo).ClassName.Variant;
  pFVar6[0x1c] = (FScriptContainerElement)(param_1->NodeClassInfo).Type;
  uVar4 = *(undefined8 *)&(param_1->NodeClassInfo).AssetClassID.C;
  *(undefined8 *)(pFVar6 + 0x20) = *(undefined8 *)&(param_1->NodeClassInfo).AssetClassID;
  *(undefined8 *)(pFVar6 + 0x28) = uVar4;
  FVar3 = (param_1->NodeClassInfo).AssetPath.AssetName;
  *(FName *)(pFVar6 + 0x30) = (param_1->NodeClassInfo).AssetPath.PackageName;
  *(FName *)(pFVar6 + 0x38) = FVar3;
  *(FMetasoundFrontendVersionNumber *)(pFVar6 + 0x40) = (param_1->NodeClassInfo).Version;
  *(ulong64 *)(pFVar6 + 0x48) = param_1->Timestamp;
  pFVar6[0x90] = (FScriptContainerElement)0x1;
  return;
}

// Stream @ 14ae8aaf0

void __thiscall
Metasound::FNodeClassRegistrationEventsPimpl::Stream
          (FNodeClassRegistrationEventsPimpl *this,
          TArray<TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *pTVar1;
  
  pTVar1 = (this->TransactionStream).Ptr;
  if (pTVar1 != (TTransactionStream<Metasound::Frontend::FNodeClassRegistryTransaction> *)0x0) {
    Frontend::TTransactionBuffer<Metasound::Frontend::FNodeClassRegistryTransaction>::
    StreamTransactions<_Metasound::FNodeClassRegistrationEventsPimpl::Stream_::__l2::<lambda_1>_>
              ((pTVar1->Buffer).Object,pTVar1->ReaderHandle,(<lambda_1>)param_1);
    return;
  }
  return;
}

