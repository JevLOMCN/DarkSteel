// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5e2300

UScriptStruct * __cdecl FDS_ViewModelContext_CommonCheckText::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonCheckText.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonCheckText.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_CommonCheckText,
                         (UObject *)pUVar1,L"DS_ViewModelContext_CommonCheckText");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonCheckText.OuterSingleton;
}

// ~FDS_ViewModelContext_CommonCheckText @ 14b5e9600

void __thiscall
FDS_ViewModelContext_CommonCheckText::~FDS_ViewModelContext_CommonCheckText
          (FDS_ViewModelContext_CommonCheckText *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDelegateChangedCheckState);
  pvVar1 = *(void **)&(this->OnDelegateChangedCheckState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDelegateChangedCheckState);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CheckTextName).FormatArgs.AllocatorInstance.Data,
             (this->CheckTextName).FormatArgs.ArrayNum);
  pFVar2 = (this->CheckTextName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CheckTextName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

