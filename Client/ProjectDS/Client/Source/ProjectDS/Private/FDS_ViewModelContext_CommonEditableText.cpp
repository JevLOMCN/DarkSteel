// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5e59f0

UScriptStruct * __cdecl FDS_ViewModelContext_CommonEditableText::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonEditableText.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonEditableText.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_CommonEditableText,
                         (UObject *)pUVar1,L"DS_ViewModelContext_CommonEditableText");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_CommonEditableText.OuterSingleton;
}

// ~FDS_ViewModelContext_CommonEditableText @ 14b5e9680

void __thiscall
FDS_ViewModelContext_CommonEditableText::~FDS_ViewModelContext_CommonEditableText
          (FDS_ViewModelContext_CommonEditableText *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTextChangedDelegate);
  pvVar1 = *(void **)&(this->OnTextChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTextChangedDelegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DefaultText).FormatArgs.AllocatorInstance.Data,
             (this->DefaultText).FormatArgs.ArrayNum);
  pFVar2 = (this->DefaultText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DefaultText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

