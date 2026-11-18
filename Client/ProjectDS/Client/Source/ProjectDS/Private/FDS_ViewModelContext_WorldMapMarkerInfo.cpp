// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f2060

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapMarkerInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerInfo,
                         (UObject *)pUVar1,L"DS_ViewModelContext_WorldMapMarkerInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerInfo.OuterSingleton;
}

// FDS_ViewModelContext_WorldMapMarkerInfo @ 14b5f7220

FDS_ViewModelContext_WorldMapMarkerInfo * __thiscall
FDS_ViewModelContext_WorldMapMarkerInfo::FDS_ViewModelContext_WorldMapMarkerInfo
          (FDS_ViewModelContext_WorldMapMarkerInfo *this)

{
  TVector2<double> TVar1;
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
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
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapMarkerInfo__6B_;
  local_res8 = 0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->ReferencePosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapMarkerInfo).key = 0;
  (this->WorldMapMarkerInfo).Floor = 0;
  (this->WorldMapMarkerInfo).IslandID = 0;
  (this->WorldMapMarkerInfo).IndoorGroupID = 0;
  (this->WorldMapMarkerInfo).SavedScale = 0.0;
  (this->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayNum = 0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayMax = 0;
  (this->WorldMapMarkerInfo).MarkerGlobalPos.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapMarkerInfo).CurMapPositionOffset.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldMapMarkerInfo).MakerVector2D.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  this_00 = &(this->WorldMapMarkerInfo).Widget;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  this->Index = 0;
  this->iconID = 0;
  this->IsSharedMarker = false;
  this->IsNewCreate = false;
  (this->FirstPanelTranslation).field0_0x0._s_0.X = 0.0;
  (this->FirstPanelTranslation).field0_0x0._s_0.Y = 0.0;
  (this->CurPanelTranslation).field0_0x0._s_0.X = 0.0;
  (this->CurPanelTranslation).field0_0x0._s_0.Y = 0.0;
  return this;
}

