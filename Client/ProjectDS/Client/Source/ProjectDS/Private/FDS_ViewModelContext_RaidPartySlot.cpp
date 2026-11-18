// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5e6560

UScriptStruct * __cdecl FDS_ViewModelContext_RaidPartySlot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RaidPartySlot.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RaidPartySlot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_RaidPartySlot,
                         (UObject *)pUVar1,L"DS_ViewModelContext_RaidPartySlot");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RaidPartySlot.OuterSingleton;
}

// ~FDS_ViewModelContext_RaidPartySlot @ 14b5e99c0

void __thiscall
FDS_ViewModelContext_RaidPartySlot::~FDS_ViewModelContext_RaidPartySlot
          (FDS_ViewModelContext_RaidPartySlot *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnChangeBtnClickDelegate);
  pvVar1 = *(void **)&(this->OnChangeBtnClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeBtnClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAddBtnClickDelegate);
  pvVar1 = *(void **)&(this->OnAddBtnClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddBtnClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickSlotButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotButtonUpDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate);
  pvVar1 = *(void **)&(this->OnDropModeChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropModeChangeDelegate);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

