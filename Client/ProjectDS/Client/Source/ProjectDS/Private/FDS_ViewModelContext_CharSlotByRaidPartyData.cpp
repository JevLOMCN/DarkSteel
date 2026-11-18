// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5d5740

UScriptStruct * __cdecl FDS_ViewModelContext_CharSlotByRaidPartyData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CharSlotByRaidPartyData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CharSlotByRaidPartyData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_CharSlotByRaidPartyData,
                         (UObject *)pUVar1,L"DS_ViewModelContext_CharSlotByRaidPartyData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CharSlotByRaidPartyData.
         OuterSingleton;
}

// ~FDS_ViewModelContext_CharSlotByRaidPartyData @ 14b5d9fd0

void __thiscall
FDS_ViewModelContext_CharSlotByRaidPartyData::~FDS_ViewModelContext_CharSlotByRaidPartyData
          (FDS_ViewModelContext_CharSlotByRaidPartyData *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ChangeClickDel);
  pvVar1 = *(void **)&(this->ChangeClickDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeClickDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AddClickDel);
  pvVar1 = *(void **)&(this->AddClickDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AddClickDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDropModeChangeDelegate);
  pvVar1 = *(void **)&(this->OnDropModeChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDropModeChangeDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickSlotButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotButtonUpDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RaidPartySlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

