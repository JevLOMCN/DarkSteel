// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 7

// DestroyObject @ 146b13570

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>::
DestroyObject(TIntrusiveReferenceController<FSourceControlFileStatusMonitor::FSourceControlFileStatus,1>
              *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x60] = '\0';
  (this->ObjectStorage).Pad[0x61] = '\0';
  (this->ObjectStorage).Pad[0x62] = '\0';
  (this->ObjectStorage).Pad[99] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TDelegate<void___cdecl(FString_const_&,ISourceControlState_const_*),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x18));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 146b135c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<FAssetData,TSizedDefaultAllocator<32>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TArray<FAssetData,TSizedDefaultAllocator<32>_>,1> *this)

{
  void *pvVar1;
  
  DestructItems<FAssetData,int>
            (*(FAssetData **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 146b13600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDefaultRevisionControlStyle,1>::DestroyObject
          (TIntrusiveReferenceController<FDefaultRevisionControlStyle,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FDefaultRevisionControlStyle__6B_;
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b13620

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSourceControlFileStatusMonitor,1>::
DestroyObject(TIntrusiveReferenceController<FSourceControlFileStatusMonitor,1> *this)

{
  FSourceControlFileStatusMonitor::~FSourceControlFileStatusMonitor
            ((FSourceControlFileStatusMonitor *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b13630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSourceControlLogin,1>::DestroyObject
          (TIntrusiveReferenceController<SSourceControlLogin,1> *this)

{
  SSourceControlLogin::~SSourceControlLogin((SSourceControlLogin *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b13640

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSourceControlPicker,1>::DestroyObject
          (TIntrusiveReferenceController<SSourceControlPicker,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 146b13650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSourceControlProgress,1>::DestroyObject
          (TIntrusiveReferenceController<SSourceControlProgress,1> *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x2f0));
  SBorder::~SBorder((SBorder *)&this->ObjectStorage);
  return;
}

