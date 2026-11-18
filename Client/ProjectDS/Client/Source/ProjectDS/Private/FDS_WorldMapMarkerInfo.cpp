// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// operator= @ 14b5f80e0

FDS_WorldMapMarkerInfo * __thiscall
FDS_WorldMapMarkerInfo::operator=(FDS_WorldMapMarkerInfo *this,FDS_WorldMapMarkerInfo *param_1)

{
  double dVar1;
  
  this->key = param_1->key;
  this->Floor = param_1->Floor;
  this->IslandID = param_1->IslandID;
  this->IndoorGroupID = param_1->IndoorGroupID;
  this->SavedScale = param_1->SavedScale;
  ::FString::operator=(&this->Memo,&param_1->Memo);
  dVar1 = (param_1->MarkerGlobalPos).field0_0x0._s_0.Y;
  (this->MarkerGlobalPos).field0_0x0._s_0.X = (param_1->MarkerGlobalPos).field0_0x0._s_0.X;
  (this->MarkerGlobalPos).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->CurMapPositionOffset).field0_0x0._s_0.Y;
  (this->CurMapPositionOffset).field0_0x0._s_0.X = (param_1->CurMapPositionOffset).field0_0x0._s_0.X
  ;
  (this->CurMapPositionOffset).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->MakerVector2D).field0_0x0._s_0.Y;
  (this->MakerVector2D).field0_0x0._s_0.X = (param_1->MakerVector2D).field0_0x0._s_0.X;
  (this->MakerVector2D).field0_0x0._s_0.Y = dVar1;
  (this->Widget).WeakPtr = (param_1->Widget).WeakPtr;
  return this;
}

// StaticStruct @ 14b76a670

UScriptStruct * __cdecl FDS_WorldMapMarkerInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_WorldMapMarkerInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_WorldMapMarkerInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_WorldMapMarkerInfo,(UObject *)pUVar1,
                         L"DS_WorldMapMarkerInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_WorldMapMarkerInfo.OuterSingleton;
}

// FDS_WorldMapMarkerInfo @ 14bb4c940

FDS_WorldMapMarkerInfo * __thiscall
FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo
          (FDS_WorldMapMarkerInfo *this,FDS_WorldMapMarkerInfo *param_1)

{
  double dVar1;
  
  this->key = param_1->key;
  this->Floor = param_1->Floor;
  this->IslandID = param_1->IslandID;
  this->IndoorGroupID = param_1->IndoorGroupID;
  this->SavedScale = param_1->SavedScale;
  ::FString::FString(&this->Memo,&param_1->Memo);
  dVar1 = (param_1->MarkerGlobalPos).field0_0x0._s_0.Y;
  (this->MarkerGlobalPos).field0_0x0._s_0.X = (param_1->MarkerGlobalPos).field0_0x0._s_0.X;
  (this->MarkerGlobalPos).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->CurMapPositionOffset).field0_0x0._s_0.Y;
  (this->CurMapPositionOffset).field0_0x0._s_0.X = (param_1->CurMapPositionOffset).field0_0x0._s_0.X
  ;
  (this->CurMapPositionOffset).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->MakerVector2D).field0_0x0._s_0.Y;
  (this->MakerVector2D).field0_0x0._s_0.X = (param_1->MakerVector2D).field0_0x0._s_0.X;
  (this->MakerVector2D).field0_0x0._s_0.Y = dVar1;
  (this->Widget).WeakPtr = (param_1->Widget).WeakPtr;
  return this;
}

