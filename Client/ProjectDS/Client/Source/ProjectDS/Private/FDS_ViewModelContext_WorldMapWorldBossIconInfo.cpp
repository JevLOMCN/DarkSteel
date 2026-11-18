// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f2260

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapWorldBossIconInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapWorldBossIconInfo.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapWorldBossIconInfo.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapWorldBossIconInfo,
                           (UObject *)pUVar1,L"DS_ViewModelContext_WorldMapWorldBossIconInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapWorldBossIconInfo.
         OuterSingleton;
}

// FDS_ViewModelContext_WorldMapWorldBossIconInfo @ 14b5f7630

FDS_ViewModelContext_WorldMapWorldBossIconInfo * __thiscall
FDS_ViewModelContext_WorldMapWorldBossIconInfo::FDS_ViewModelContext_WorldMapWorldBossIconInfo
          (FDS_ViewModelContext_WorldMapWorldBossIconInfo *this)

{
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_IconInfo__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(TVector2<double>_u_0 *)&this->_padding_ = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapWorldBossIconInfo__6B_;
  local_res8 = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)&local_res8);
  this->IconID = 0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->WorldBossTID = 0;
  (this->ReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

