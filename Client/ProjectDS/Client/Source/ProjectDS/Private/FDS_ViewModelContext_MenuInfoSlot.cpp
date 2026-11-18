// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f5390

UScriptStruct * __cdecl FDS_ViewModelContext_MenuInfoSlot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MenuInfoSlot.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MenuInfoSlot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_MenuInfoSlot,
                         (UObject *)pUVar1,L"DS_ViewModelContext_MenuInfoSlot");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MenuInfoSlot.OuterSingleton;
}

// ~FDS_ViewModelContext_MenuInfoSlot @ 14b5f7950

void __thiscall
FDS_ViewModelContext_MenuInfoSlot::~FDS_ViewModelContext_MenuInfoSlot
          (FDS_ViewModelContext_MenuInfoSlot *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickMenuInfoDoubleClickDelegate)
  ;
  pvVar1 = *(void **)&(this->OnClickMenuInfoDoubleClickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickMenuInfoDoubleClickDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickMenuInfoButtonUpDelegate);
  pvVar1 = *(void **)&(this->OnClickMenuInfoButtonUpDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickMenuInfoButtonUpDelegate);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

