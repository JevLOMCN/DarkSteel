// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 7

// DestroyObject @ 146d14c70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FViewDebugInfo::FPrimitiveInfo_const_,1>::
DestroyObject(TIntrusiveReferenceController<FViewDebugInfo::FPrimitiveInfo_const_,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPrimitiveLODStats,int>
            (*(FPrimitiveLODStats **)((this->ObjectStorage).Pad + 0x38),
             *(int *)((this->ObjectStorage).Pad + 0x40));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 146d14cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
              *this)

{
  SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
  ~SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
            ((SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)&this->ObjectStorage
            );
  return;
}

// DestroyObject @ 146d14cd0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
              *this)

{
  STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
  ~STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
            ((STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)&this->ObjectStorage
            );
  return;
}

// DestroyObject @ 146d14ce0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
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

// DestroyObject @ 146d14d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDrawPrimitiveDebugger,1>::DestroyObject
          (TIntrusiveReferenceController<SDrawPrimitiveDebugger,1> *this)

{
  SDrawPrimitiveDebugger::~SDrawPrimitiveDebugger((SDrawPrimitiveDebugger *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146d14d40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDrawPrimitiveDebuggerListViewRow,1>::
DestroyObject(TIntrusiveReferenceController<SDrawPrimitiveDebuggerListViewRow,1> *this)

{
  SDrawPrimitiveDebuggerListViewRow::~SDrawPrimitiveDebuggerListViewRow
            ((SDrawPrimitiveDebuggerListViewRow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146d14d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SPrimitiveDebuggerDetailView,1>::DestroyObject
          (TIntrusiveReferenceController<SPrimitiveDebuggerDetailView,1> *this)

{
  SPrimitiveDebuggerDetailView::~SPrimitiveDebuggerDetailView
            ((SPrimitiveDebuggerDetailView *)&this->ObjectStorage);
  return;
}

