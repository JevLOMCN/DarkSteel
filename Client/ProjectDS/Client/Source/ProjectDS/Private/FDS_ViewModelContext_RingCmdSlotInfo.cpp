// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f5170

UScriptStruct * __cdecl FDS_ViewModelContext_RingCmdSlotInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RingCmdSlotInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RingCmdSlotInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_RingCmdSlotInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_RingCmdSlotInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RingCmdSlotInfo.OuterSingleton;
}

// ~FDS_ViewModelContext_RingCmdSlotInfo @ 14b5f7b50

void __thiscall
FDS_ViewModelContext_RingCmdSlotInfo::~FDS_ViewModelContext_RingCmdSlotInfo
          (FDS_ViewModelContext_RingCmdSlotInfo *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotInfoDoubleClickDelegate)
  ;
  pvVar1 = *(void **)&(this->OnClickSlotInfoDoubleClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotInfoDoubleClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickSlotInfoButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickSlotInfoButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSlotInfoButtonUpDelegate);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

