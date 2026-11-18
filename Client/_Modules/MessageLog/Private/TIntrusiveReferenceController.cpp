// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 15

// DestroyObject @ 142bee340

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<IMessageLogListing,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<TSharedPtr<IMessageLogListing,1>_>,1> *this)

{
  SListView<TSharedPtr<IMessageLogListing,1>_>::~SListView<TSharedPtr<IMessageLogListing,1>_>
            ((SListView<TSharedPtr<IMessageLogListing,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee350

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedRef<FMessageFilter,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedRef<FMessageFilter,1>_>,1> *this)

{
  SListView<TSharedRef<FMessageFilter,1>_>::~SListView<TSharedRef<FMessageFilter,1>_>
            ((SListView<TSharedRef<FMessageFilter,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee360

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedRef<FTokenizedMessage,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedRef<FTokenizedMessage,1>_>,1> *this)

{
  SListView<TSharedRef<FTokenizedMessage,1>_>::~SListView<TSharedRef<FTokenizedMessage,1>_>
            ((SListView<TSharedRef<FTokenizedMessage,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee370

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<IMessageLogListing,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedPtr<IMessageLogListing,1>_>,1> *this)

{
  STableRow<TSharedPtr<IMessageLogListing,1>_>::~STableRow<TSharedPtr<IMessageLogListing,1>_>
            ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee380

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedRef<FMessageFilter,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedRef<FMessageFilter,1>_>,1> *this)

{
  STableRow<TSharedRef<FMessageFilter,1>_>::~STableRow<TSharedRef<FMessageFilter,1>_>
            ((STableRow<TSharedRef<FMessageFilter,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee390

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedRef<FTokenizedMessage,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedRef<FTokenizedMessage,1>_>,1> *this)

{
  STableRow<TSharedRef<FTokenizedMessage,1>_>::~STableRow<TSharedRef<FTokenizedMessage,1>_>
            ((STableRow<TSharedRef<FTokenizedMessage,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee3a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<IMessageLogListing,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<IMessageLogListing,1>_>,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142bee3f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FMessageFilter,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FMessageFilter,1>_>,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142bee440

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FTokenizedMessage,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FTokenizedMessage,1>_>,1>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142bee490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SHeaderRow,1>::DestroyObject
          (TIntrusiveReferenceController<SHeaderRow,1> *this)

{
  SHeaderRow::~SHeaderRow((SHeaderRow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee4a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLog,1>::DestroyObject
          (TIntrusiveReferenceController<SMessageLog,1> *this)

{
  SMessageLog::~SMessageLog((SMessageLog *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee4b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLogCategoryListRow,1>::DestroyObject
          (TIntrusiveReferenceController<SMessageLogCategoryListRow,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x460));
  (this->ObjectStorage).Pad[0x450] = '\0';
  (this->ObjectStorage).Pad[0x451] = '\0';
  (this->ObjectStorage).Pad[0x452] = '\0';
  (this->ObjectStorage).Pad[0x453] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x448);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x408));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<IMessageLogListing,1>_>::~STableRow<TSharedPtr<IMessageLogListing,1>_>
            ((STableRow<TSharedPtr<IMessageLogListing,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee520

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLogListing,1>::DestroyObject
          (TIntrusiveReferenceController<SMessageLogListing,1> *this)

{
  SMessageLogListing::~SMessageLogListing((SMessageLogListing *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee530

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMessageLogMessageListRow,1>::DestroyObject
          (TIntrusiveReferenceController<SMessageLogMessageListRow,1> *this)

{
  SMessageLogMessageListRow::~SMessageLogMessageListRow
            ((SMessageLogMessageListRow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142bee540

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollBorder,1>::DestroyObject
          (TIntrusiveReferenceController<SScrollBorder,1> *this)

{
  SScrollBorder::~SScrollBorder((SScrollBorder *)&this->ObjectStorage);
  return;
}

