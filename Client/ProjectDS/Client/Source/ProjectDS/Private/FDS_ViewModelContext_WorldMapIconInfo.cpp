// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// StaticStruct @ 14b5f2100

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapIconInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIconInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIconInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapIconInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_WorldMapIconInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapIconInfo.OuterSingleton;
}

// FDS_ViewModelContext_WorldMapIconInfo @ 14b5f70a0

FDS_ViewModelContext_WorldMapIconInfo * __thiscall
FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo
          (FDS_ViewModelContext_WorldMapIconInfo *this)

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
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapIconInfo__6B_;
  local_res8 = 0;
  (this->Widget).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Widget).WeakPtr,(FObjectPtr)&local_res8);
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->IconID = 0;
  this->SpawnTableID = 0;
  (this->ReferencePosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->QuestBoardID = 0;
  this->NpcBaseTableID = 0;
  this->MapIndexSpawnTableID = 0;
  this->PhasingSpawnEntityID = 0;
  this->IsWandering = false;
  return this;
}

// operator= @ 14b5f8030

FDS_ViewModelContext_WorldMapIconInfo * __thiscall
FDS_ViewModelContext_WorldMapIconInfo::operator=
          (FDS_ViewModelContext_WorldMapIconInfo *this,
          FDS_ViewModelContext_WorldMapIconInfo *param_1)

{
  double dVar1;
  
  FDS_ViewModelContext_IconInfo::operator=
            ((FDS_ViewModelContext_IconInfo *)this,(FDS_ViewModelContext_IconInfo *)param_1);
  (this->Widget).WeakPtr = (param_1->Widget).WeakPtr;
  dVar1 = (param_1->MapStartPos).field0_0x0._s_0.Y;
  (this->MapStartPos).field0_0x0._s_0.X = (param_1->MapStartPos).field0_0x0._s_0.X;
  (this->MapStartPos).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->ReferencePosition).field0_0x0._s_0.Y;
  (this->ReferencePosition).field0_0x0._s_0.X = (param_1->ReferencePosition).field0_0x0._s_0.X;
  (this->ReferencePosition).field0_0x0._s_0.Y = dVar1;
  this->IconID = param_1->IconID;
  this->SpawnTableID = param_1->SpawnTableID;
  this->QuestBoardID = param_1->QuestBoardID;
  this->NpcBaseTableID = param_1->NpcBaseTableID;
  this->MapIndexSpawnTableID = param_1->MapIndexSpawnTableID;
  this->PhasingSpawnEntityID = param_1->PhasingSpawnEntityID;
  this->IsWandering = param_1->IsWandering;
  return this;
}

