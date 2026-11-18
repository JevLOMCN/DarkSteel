// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b695980

UScriptStruct * __cdecl FDS_ViewModelContext_MiniGame_KeyTimeAttack::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MiniGame_KeyTimeAttack.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MiniGame_KeyTimeAttack.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_MiniGame_KeyTimeAttack,
                         (UObject *)pUVar1,L"DS_ViewModelContext_MiniGame_KeyTimeAttack");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_MiniGame_KeyTimeAttack.
         OuterSingleton;
}

// ~FDS_ViewModelContext_MiniGame_KeyTimeAttack @ 14b69a3b0

void __thiscall
FDS_ViewModelContext_MiniGame_KeyTimeAttack::~FDS_ViewModelContext_MiniGame_KeyTimeAttack
          (FDS_ViewModelContext_MiniGame_KeyTimeAttack *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->params).FailDel);
  pvVar1 = *(void **)&(this->params).FailDel.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->params).FailDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->params).SuccessDel);
  pvVar1 = *(void **)&(this->params).SuccessDel.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->params).SuccessDel);
  this->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
  return;
}

