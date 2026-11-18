// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f4c40

UScriptStruct * __cdecl FDS_ViewModelContext_RingCmd::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RingCmd.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RingCmd.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_RingCmd,(UObject *)pUVar1,
                         L"DS_ViewModelContext_RingCmd");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_RingCmd.OuterSingleton;
}

// ~FDS_ViewModelContext_RingCmd @ 14b5f7ac0

void __thiscall
FDS_ViewModelContext_RingCmd::~FDS_ViewModelContext_RingCmd(FDS_ViewModelContext_RingCmd *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnHoverRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnHoverRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHoverRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDoubleClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnDoubleClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDoubleClickRingMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickRingMenuDelegate);
  pvVar1 = *(void **)&(this->OnClickRingMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickRingMenuDelegate);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

