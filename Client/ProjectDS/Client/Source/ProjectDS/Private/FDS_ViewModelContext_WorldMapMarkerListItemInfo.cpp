// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b5f2d40

UScriptStruct * __cdecl FDS_ViewModelContext_WorldMapMarkerListItemInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerListItemInfo.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerListItemInfo.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerListItemInfo
                           ,(UObject *)pUVar1,L"DS_ViewModelContext_WorldMapMarkerListItemInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_WorldMapMarkerListItemInfo.
         OuterSingleton;
}

// FDS_ViewModelContext_WorldMapMarkerListItemInfo @ 14b5f7330

FDS_ViewModelContext_WorldMapMarkerListItemInfo * __thiscall
FDS_ViewModelContext_WorldMapMarkerListItemInfo::FDS_ViewModelContext_WorldMapMarkerListItemInfo
          (FDS_ViewModelContext_WorldMapMarkerListItemInfo *this)

{
  TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapMarkerListItemInfo__6B_;
  (this->WorldMapMarkerInfo).key = 0;
  (this->WorldMapMarkerInfo).Floor = 0;
  (this->WorldMapMarkerInfo).IslandID = 0;
  (this->WorldMapMarkerInfo).IndoorGroupID = 0;
  (this->WorldMapMarkerInfo).SavedScale = 0.0;
  (this->WorldMapMarkerInfo).Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayNum = 0;
  (this->WorldMapMarkerInfo).Memo.Data.ArrayMax = 0;
  local_res8 = 0;
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
  return this;
}

