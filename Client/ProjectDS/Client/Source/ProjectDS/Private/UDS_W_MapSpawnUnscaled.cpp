// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 105

// SetCurPanelMousePositionOffset_WrapperImpl @ 14b77d8d0

void __cdecl
UDS_W_MapSpawnUnscaled::SetCurPanelMousePositionOffset_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)param_2;
  local_18._s_0.Y = *(double *)((longlong)param_2 + 8);
  OnCurPanelMousePositionOffset(param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// SetCurLookIslandID_WrapperImpl @ 14b77d900

void __cdecl UDS_W_MapSpawnUnscaled::SetCurLookIslandID_WrapperImpl(void *param_1,void *param_2)

{
  OnCurLookIslandIDChanged(param_1,*(int *)param_2);
  return;
}

// SetCurLookIndoorGroupID_WrapperImpl @ 14b77d910

void __cdecl
UDS_W_MapSpawnUnscaled::SetCurLookIndoorGroupID_WrapperImpl(void *param_1,void *param_2)

{
  OnCurLookIndoorGroupIDChanged(param_1,*(int *)param_2);
  return;
}

// SetMapRotateAngle_WrapperImpl @ 14b77d920

void __cdecl UDS_W_MapSpawnUnscaled::SetMapRotateAngle_WrapperImpl(void *param_1,void *param_2)

{
  OnMapRotateAngle(param_1,*(float *)param_2);
  return;
}

// SetTextureScale_WrapperImpl @ 14b77d930

void __cdecl UDS_W_MapSpawnUnscaled::SetTextureScale_WrapperImpl(void *param_1,void *param_2)

{
  OnTextureScale(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14b77d940

UClass * __cdecl UDS_W_MapSpawnUnscaled::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_MapSpawnUnscaled.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_MapSpawnUnscaled",
               &Z_Registration_Info_UClass_UDS_W_MapSpawnUnscaled.InnerSingleton,
               StaticRegisterNativesUDS_W_MapSpawnUnscaled,0xb00,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_MapSpawnUnscaled>,
               InternalVTableHelperCtorCaller<UDS_W_MapSpawnUnscaled>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_MapSpawnUnscaled.InnerSingleton;
}

// UDS_W_MapSpawnUnscaled @ 14b781ea0

UDS_W_MapSpawnUnscaled * __thiscall
UDS_W_MapSpawnUnscaled::UDS_W_MapSpawnUnscaled(UDS_W_MapSpawnUnscaled *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->CurPanelMousePositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CurCharIslandID = 0;
  this->MapType = 0;
  this->CurLookIslandID = 0;
  this->CurLookIndoorGroupID = 0;
  (this->CurMapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->TextureScale = 5.0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 1024.0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x10 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x18 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x38 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x48 = 0;
  *(undefined8 *)&this->DetectionTargetInfosMap = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x8 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x20 = 0;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x28 = 0;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x34 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x40 = 0;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax = 0;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax = 0;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax = 0;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax = 0;
  (this->SpawnedNpc_ID_ListByAcceptableQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum = 0;
  (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayMax = 0;
  (this->ReferenceGlobalPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapIndoorStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapIndoorEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FirstPanelTranslation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MarkerObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkerObjectPath).AssetPath.PackageName.Number = 0;
  (this->MarkerObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkerObjectPath).AssetPath.AssetName.Number = 0;
  (this->MarkerObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkerObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->MarkerObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->PlayerIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PlayerIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->PlayerIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PlayerIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->PlayerIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlayerIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->PlayerIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->IconBtnObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->IconBtnObjectPath).AssetPath.PackageName.Number = 0;
  (this->IconBtnObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->IconBtnObjectPath).AssetPath.AssetName.Number = 0;
  (this->IconBtnObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IconBtnObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->IconBtnObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->IconAndTextObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->IconAndTextObjectPath).AssetPath.PackageName.Number = 0;
  (this->IconAndTextObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->IconAndTextObjectPath).AssetPath.AssetName.Number = 0;
  (this->IconAndTextObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IconAndTextObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->IconAndTextObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->TextOnlyObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->TextOnlyObjectPath).AssetPath.PackageName.Number = 0;
  (this->TextOnlyObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->TextOnlyObjectPath).AssetPath.AssetName.Number = 0;
  (this->TextOnlyObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextOnlyObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->TextOnlyObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->RangeOverIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->RangeOverIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->RangeOverIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->RangeOverIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->RangeOverIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RangeOverIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->RangeOverIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->WorldBossIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WorldBossIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->WorldBossIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WorldBossIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->WorldBossIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->WorldBossIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->QuestIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->QuestIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->QuestIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->QuestIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->QuestIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->QuestIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->QuestIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->DetectionObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DetectionObjectPath).AssetPath.PackageName.Number = 0;
  (this->DetectionObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DetectionObjectPath).AssetPath.AssetName.Number = 0;
  (this->DetectionObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetectionObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->DetectionObjectPath).SubPathString.Data.ArrayMax = 0;
  this->CurCharIndoorGroupID = 0;
  this->CurAngle = 0.0;
  this->DefaultWorldMapScale = 0.0;
  this->DefaultMiniMapScale = 0.0;
  this->IsObejctPathAllLoadComplete = false;
  this->IsNeedToRefreshIconList = false;
  this->IsIndoor = false;
  this->IsFirstPanelTranslationDataSet = false;
  this->IsFirstScaleChanged = false;
  this->IsMiniMapFirstOpen = true;
  this->IsFieldMap = true;
  this->IsContinent = false;
  return this;
}

// UDS_W_MapSpawnUnscaled @ 14b782150

UDS_W_MapSpawnUnscaled * __thiscall
UDS_W_MapSpawnUnscaled::UDS_W_MapSpawnUnscaled
          (UDS_W_MapSpawnUnscaled *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->CurPanelMousePositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->CurCharIslandID = 0;
  this->MapType = 0;
  this->CurLookIslandID = 0;
  this->CurLookIndoorGroupID = 0;
  (this->CurMapPositionOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  this->TextureScale = 5.0;
  this->OrthoWidth = 0.0;
  this->TextureSize = 1024.0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x10 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x18 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x38 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x48 = 0;
  *(undefined8 *)&this->DetectionTargetInfosMap = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x8 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x20 = 0;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x28 = 0;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x34 = 0;
  *(undefined8 *)&(this->DetectionTargetInfosMap).field_0x40 = 0;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax = 0;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax = 0;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax = 0;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = 0;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax = 0;
  (this->SpawnedNpc_ID_ListByAcceptableQuest).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum = 0;
  (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayMax = 0;
  (this->ReferenceGlobalPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapIndoorStartPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->MapIndoorEndPos).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->FirstPanelTranslation).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->OwnerMovementCore).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MarkerObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->MarkerObjectPath).AssetPath.PackageName.Number = 0;
  (this->MarkerObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->MarkerObjectPath).AssetPath.AssetName.Number = 0;
  (this->MarkerObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MarkerObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->MarkerObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->PlayerIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PlayerIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->PlayerIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PlayerIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->PlayerIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PlayerIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->PlayerIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->IconBtnObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->IconBtnObjectPath).AssetPath.PackageName.Number = 0;
  (this->IconBtnObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->IconBtnObjectPath).AssetPath.AssetName.Number = 0;
  (this->IconBtnObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IconBtnObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->IconBtnObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->IconAndTextObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->IconAndTextObjectPath).AssetPath.PackageName.Number = 0;
  (this->IconAndTextObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->IconAndTextObjectPath).AssetPath.AssetName.Number = 0;
  (this->IconAndTextObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->IconAndTextObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->IconAndTextObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->TextOnlyObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->TextOnlyObjectPath).AssetPath.PackageName.Number = 0;
  (this->TextOnlyObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->TextOnlyObjectPath).AssetPath.AssetName.Number = 0;
  (this->TextOnlyObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextOnlyObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->TextOnlyObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->RangeOverIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->RangeOverIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->RangeOverIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->RangeOverIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->RangeOverIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RangeOverIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->RangeOverIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->WorldBossIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->WorldBossIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->WorldBossIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->WorldBossIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->WorldBossIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WorldBossIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->WorldBossIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->QuestIconObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->QuestIconObjectPath).AssetPath.PackageName.Number = 0;
  (this->QuestIconObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->QuestIconObjectPath).AssetPath.AssetName.Number = 0;
  (this->QuestIconObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->QuestIconObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->QuestIconObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->DetectionObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->DetectionObjectPath).AssetPath.PackageName.Number = 0;
  (this->DetectionObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->DetectionObjectPath).AssetPath.AssetName.Number = 0;
  (this->DetectionObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DetectionObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->DetectionObjectPath).SubPathString.Data.ArrayMax = 0;
  this->CurCharIndoorGroupID = 0;
  this->CurAngle = 0.0;
  this->DefaultWorldMapScale = 0.0;
  this->DefaultMiniMapScale = 0.0;
  this->IsObejctPathAllLoadComplete = false;
  this->IsNeedToRefreshIconList = false;
  this->IsIndoor = false;
  this->IsFirstPanelTranslationDataSet = false;
  this->IsFirstScaleChanged = false;
  this->IsMiniMapFirstOpen = true;
  this->IsFieldMap = true;
  this->IsContinent = false;
  return this;
}

// ~UDS_W_MapSpawnUnscaled @ 14b783240

void __thiscall UDS_W_MapSpawnUnscaled::~UDS_W_MapSpawnUnscaled(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pFVar1 = (this->DetectionObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->QuestIconObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldBossIconObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RangeOverIconObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextOnlyObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IconAndTextObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IconBtnObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlayerIconObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MarkerObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnedNpc_ID_ListByAcceptableQuest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->DetectionTargetInfosMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DetectionTargetInfosMap);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b785210

IClassDescriptor * __thiscall
UDS_W_MapSpawnUnscaled::GetFieldNotificationDescriptor(UDS_W_MapSpawnUnscaled *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_MapSpawnUnscaled::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7860e0

UClass * __cdecl UDS_W_MapSpawnUnscaled::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_MapSpawnUnscaled.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_MapSpawnUnscaled",
               &Z_Registration_Info_UClass_UDS_W_MapSpawnUnscaled.InnerSingleton,
               StaticRegisterNativesUDS_W_MapSpawnUnscaled,0xb00,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_MapSpawnUnscaled>,
               InternalVTableHelperCtorCaller<UDS_W_MapSpawnUnscaled>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_MapSpawnUnscaled.InnerSingleton;
}

// StaticRegisterNativesUDS_W_MapSpawnUnscaled @ 14b7865c0

void __cdecl UDS_W_MapSpawnUnscaled::StaticRegisterNativesUDS_W_MapSpawnUnscaled(void)

{
  return;
}

// AsncLoadAsset @ 14c06b820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::AsncLoadAsset(UDS_W_MapSpawnUnscaled *this)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 _Src;
  FSharedReferencer<1> FVar6;
  char cVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  UAssetManager *pUVar11;
  FDS_ResourceMapIndexWidgetPathTableRow *pFVar12;
  UDS_LogManager *pUVar13;
  FString *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  size_t _Size;
  UDS_W_MapSpawnUnscaled *this_00;
  ulonglong uVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  undefined1 auStackY_308 [32];
  undefined1 local_2b8 [8];
  ForAnyElementType local_2b0;
  int local_2a8;
  undefined1 local_2a0 [24];
  undefined1 local_288 [8];
  undefined1 local_280 [8];
  FDelegateAllocation local_278;
  undefined1 local_268 [8];
  ForAnyElementType local_260;
  int local_258;
  UDS_W_MapSpawnUnscaled *local_250;
  undefined1 local_248 [8];
  FSharedReferencer<1> FStack_240;
  undefined1 local_238 [8];
  FDelegateAllocation local_230;
  FScriptContainerElement *local_220;
  ForAnyElementType local_218;
  uint local_210;
  int local_20c;
  undefined1 local_208 [24];
  FDelegateAllocation *local_1f0;
  uint local_1e8;
  source_location local_1d8;
  undefined8 local_1b8;
  FSharedReferencer<1> FStack_1b0;
  FString local_1a8;
  UDS_W_MapSpawnUnscaled *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FDestructionSentinel local_188;
  FDelegateAllocation *local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_168._padding_ = (longlong)OnIconBtnObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_ = (longlong)OnMarkerObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_ = (longlong)OnPlayerIconObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_ = (longlong)OnIconAndTextObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_ = (longlong)OnTextOnlyObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_ = (longlong)OnRangeOverIconObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_ = (longlong)OnWorldBossIconObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_ = (longlong)OnQuestIconObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  local_168._padding_ = (longlong)OnDetectionObjectLoaded;
  local_168._padding_._4_4_ = local_2b0.Data._4_4_;
  local_168._padding_._0_1_ = 4;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 6;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 1;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 3;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 5;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 7;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 8;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 9;
  local_168._padding_._0_4_ = 0;
  local_168._padding_._0_1_ = 10;
  local_168._padding_._0_4_ = 0;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,9,0,&local_218,9,&local_20c);
  *(ulonglong *)local_218.Data = CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_)
  ;
  *(longlong *)(local_218.Data + 8) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0x10) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  *(ulonglong *)(local_218.Data + 0x18) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  local_280 = (undefined1  [8])0x0;
  *(longlong *)(local_218.Data + 0x20) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0x28) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  local_278.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_278.DelegateSize = 0;
  *(ulonglong *)(local_218.Data + 0x30) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  *(longlong *)(local_218.Data + 0x38) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0x40) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  *(ulonglong *)(local_218.Data + 0x48) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  *(longlong *)(local_218.Data + 0x50) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0x58) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  *(ulonglong *)(local_218.Data + 0x60) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  *(longlong *)(local_218.Data + 0x68) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0x70) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  *(ulonglong *)(local_218.Data + 0x78) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  *(longlong *)(local_218.Data + 0x80) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0x88) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  *(ulonglong *)(local_218.Data + 0x90) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  *(longlong *)(local_218.Data + 0x98) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0xa0) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  *(ulonglong *)(local_218.Data + 0xa8) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  *(longlong *)(local_218.Data + 0xb0) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0xb8) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  *(ulonglong *)(local_218.Data + 0xc0) =
       CONCAT71(local_168._padding_._1_7_,(undefined1)local_168._padding_);
  *(longlong *)(local_218.Data + 200) = local_168._padding_;
  *(ulonglong *)(local_218.Data + 0xd0) =
       CONCAT44(local_168._padding_._4_4_,(undefined4)local_168._padding_);
  local_248 = (undefined1  [8])OnAllAsncLoadComplete;
  FStack_240.ReferenceController =
       (TReferenceControllerBase<1> *)((ulonglong)local_2b0.Data & 0xffffffff00000000);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
             (FWriteAccessScope *)local_208);
  local_1f0 = &local_278;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_278);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_MapSpawnUnscaled____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_W_MapSpawnUnscaled *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_250 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_W_MapSpawnUnscaled *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_250);
    puVar8[4] = local_248;
    puVar8[5] = FStack_240.ReferenceController;
  }
  if (local_208[0x10] == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_208._8_8_,(FDestructionSentinel *)local_208);
  }
  local_1b8 = 0;
  FStack_1b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
             (FReadAccessScope *)&local_1d8);
  if (((local_278.DelegateSize == 0) ||
      (local_278.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar7 = (**(code **)(*(longlong *)local_278.DelegateAllocator + 0x38))(), cVar7 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_1d8);
  if (!bVar5) goto LAB_14c06bdbd;
  local_2b8 = (undefined1  [8])0x0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = 0;
  local_268 = (undefined1  [8])0x0;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
             (FReadAccessScope *)&local_1d8);
  if ((local_278.DelegateSize != 0) &&
     (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_278.DelegateAllocator + 0x50))
              (local_278.DelegateAllocator,local_268);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_1d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
             (FWriteAccessScope *)local_2a0);
  iVar2 = local_258;
  FVar19.Data = local_260.Data;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  if (local_2a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2a0._8_8_,(FDestructionSentinel *)local_2a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
             (FWriteAccessScope *)local_2a0);
  if (local_2a8 == 0) {
LAB_14c06bc48:
    if (local_2b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data);
    }
  }
  else if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_2b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2b0,0,0,0x10);
    local_2a8 = 0;
    goto LAB_14c06bc48;
  }
  local_2b0.Data = FVar19.Data;
  local_2a8 = iVar2;
  if (local_2a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2a0._8_8_,(FDestructionSentinel *)local_2a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
             (FWriteAccessScope *)local_2a0);
  if ((local_258 != 0) && (local_260.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_260,0,0,0x10);
    local_258 = 0;
  }
  if (local_2a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2a0._8_8_,(FDestructionSentinel *)local_2a0);
  }
  if (local_260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_268);
  pTVar10 = ::operator_new(0x30);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar10 + 1) = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar10 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b8);
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15 = pTVar10;
  }
  local_248 = (undefined1  [8])0x0;
  FStack_240.ReferenceController = pTVar15;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1b0,&FStack_240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_240.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
             (FWriteAccessScope *)local_2a0);
  if ((local_2a8 != 0) &&
     ((TReferenceControllerBase<1> *)local_2b0.Data != (TReferenceControllerBase<1> *)0x0)) {
    (*(code *)**(undefined8 **)local_2b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2b0,0,0,0x10);
    local_2a8 = 0;
  }
  if (local_2a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2a0._8_8_,(FDestructionSentinel *)local_2a0);
  }
  if ((TReferenceControllerBase<1> *)local_2b0.Data != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2b8);
LAB_14c06bdbd:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
             (FWriteAccessScope *)local_2a0);
  if ((local_278.DelegateSize != 0) &&
     (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_278.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_278,0,0,0x10);
    local_278.DelegateSize = 0;
  }
  if (local_2a0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_2a0._8_8_,(FDestructionSentinel *)local_2a0);
  }
  if (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_278.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_280);
  pUVar11 = UAssetManager::Get();
  FVar6.ReferenceController = FStack_1b0.ReferenceController;
  uVar17 = (ulonglong)(int)local_210;
  this_00 = (UDS_W_MapSpawnUnscaled *)&pUVar11->StreamableManager;
  pFVar16 = local_218.Data + uVar17 * 0x18;
  local_1e8 = local_210;
  uVar18 = uVar17;
  FVar19.Data = local_218.Data;
  local_250 = this_00;
  local_220 = pFVar16;
  while( true ) {
    if ((int)uVar18 != (int)uVar17) {
      `TCheckedPointerIterator<`UDS_W_MapSpawnUnscaled::AsncLoadAsset'::__l2::FLoadInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_288);
    }
    if (FVar19.Data == pFVar16) break;
    pFVar12 = FDS_ResourceMapIndexWidgetPathTableRow::Get((ulonglong)(byte)*FVar19.Data,true);
    if (pFVar12 == (FDS_ResourceMapIndexWidgetPathTableRow *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      if (pUVar13 != (UDS_LogManager *)0x0) {
        pUVar13 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_W_MapSpawnUnscaled::AsncLoadAsset",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar13,1,Warning,local_168.Ptr,0x250,
                   L"MapIndexDisplayType %d tableRow is nullptr");
        pFVar16 = local_220;
        this_00 = local_250;
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
          pFVar16 = local_220;
          this_00 = local_250;
        }
      }
    }
    else {
      pFVar14 = FSoftObjectPath::ToString(&pFVar12->WidgetPath,(FString *)local_280);
      pFVar14 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_268,pFVar14,false);
      local_208._0_4_ = 0;
      local_208._4_4_ = 0;
      local_208._8_4_ = 0;
      local_208._12_4_ = 0;
      local_208._16_8_ = (FScriptContainerElement *)0x0;
      local_1f0 = (FDelegateAllocation *)0x0;
      local_248 = (undefined1  [8])(pFVar14->Data).AllocatorInstance.Data;
      iVar2 = (pFVar14->Data).ArrayNum;
      iStack_190 = iVar2 + -1;
      if (iVar2 == 0) {
        iStack_190 = 0;
      }
      FStack_240.ReferenceController =
           (TReferenceControllerBase<1> *)CONCAT44(uStack_18c,iStack_190);
      local_198 = (UDS_W_MapSpawnUnscaled *)local_248;
      FSoftObjectPath::SetPath((FSoftObjectPath *)local_208,(TStringView<wchar_t> *)local_248);
      if ((atomic<unsigned___int64>)local_268 != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_268);
      }
      if ((atomic<unsigned___int64>)local_280 != (atomic<unsigned___int64>)0x0) {
        FMemory::Free((void *)local_280);
      }
      uVar3 = *(undefined8 *)(FVar19.Data + 8);
      uVar4 = *(undefined8 *)(FVar19.Data + 0x10);
      local_2a0._0_4_ = 0x255;
      local_2a0._16_8_ = "void __cdecl UDS_W_MapSpawnUnscaled::AsncLoadAsset(void)";
      local_2a0._4_4_ = 0x15;
      local_2a0._8_8_ =
           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\View\\Minimap\\DS_W_MapSpawnUnscaled.cpp"
      ;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      local_238 = (undefined1  [8])0x0;
      local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_230.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                 (FWriteAccessScope *)&local_188);
      local_170 = &local_230;
      puVar8 = UE::Core::Private::DelegateAllocate(0x58,&local_230);
      _Src = local_208._16_8_;
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath__VFWN_EndOfRefs____6B_
        ;
        pFVar1 = (ForAnyElementType *)(puVar8 + 3);
        ((FName *)(puVar8 + 1))->ComparisonIndex = (FNameEntryId)local_208._0_4_;
        ((FName *)(puVar8 + 1))->Number = local_208._4_4_;
        ((FName *)(puVar8 + 2))->ComparisonIndex = (FNameEntryId)local_208._8_4_;
        ((FName *)(puVar8 + 2))->Number = local_208._12_4_;
        pFVar1->Data = (FScriptContainerElement *)0x0;
        _Size = (size_t)(int)local_1f0;
        *(int *)(puVar8 + 4) = (int)local_1f0;
        if ((int)local_1f0 == 0) {
          *(int *)((longlong)puVar8 + 0x24) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(int)local_1f0,0,pFVar1,(int)local_1f0,(int *)((longlong)puVar8 + 0x24));
          memcpy(pFVar1->Data,(void *)_Src,_Size);
        }
        puVar8[5] = local_1b8;
        puVar8[6] = FVar6.ReferenceController;
        if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar6.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[7] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_W_MapSpawnUnscaled____A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath__VFWN_EndOfRefs____6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_W_MapSpawnUnscaled *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[8] = 0;
        local_248 = (undefined1  [8])this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_W_MapSpawnUnscaled *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 8),(FObjectPtr)local_248);
        puVar8[9] = uVar3;
        puVar8[10] = uVar4;
        this_00 = local_250;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      local_1d8._Column = local_2a0._4_4_;
      local_1d8._Line = local_2a0._0_4_;
      local_1d8._File = (char *)local_2a0._8_8_;
      local_1d8._Function = (char *)local_2a0._16_8_;
      FStreamableManager::
      RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                ((FStreamableManager *)this_00,(TSharedPtr<FStreamableHandle,1> *)local_2b8,
                 (FSoftObjectPath *)local_208,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_238,0,false,false
                 ,&local_1a8,(FSourceLocation *)&local_1d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_2b0.Data);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                 (FWriteAccessScope *)local_2a0);
      if ((local_230.DelegateSize != 0) &&
         (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_230.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_230,0,0,0x10);
        local_230.DelegateSize = 0;
      }
      if (local_2a0[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_2a0._8_8_,(FDestructionSentinel *)local_2a0
                  );
      }
      if (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_230.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_238);
      pFVar16 = local_220;
      if ((FScriptContainerElement *)local_208._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_208._16_8_);
        pFVar16 = local_220;
      }
    }
    uVar18 = (ulonglong)local_210;
    FVar19.Data = FVar19.Data + 0x18;
    uVar17 = (ulonglong)local_1e8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  if (local_218.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data);
  }
  return;
}

// CheckIsNpcSpawnedAcceptableQuest @ 14c06e480

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckIsNpcSpawnedAcceptableQuest(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SpawnedNpc_ID_ListByAcceptableQuest).AllocatorInstance.Data;
  iVar2 = (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// CheckIsNpcSpawnedCompleteLocalQuest @ 14c06e4f0

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckIsNpcSpawnedCompleteLocalQuest
          (UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance.Data;
  iVar2 = (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// CheckIsNpcSpawnedCompleteMainQuest @ 14c06e560

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckIsNpcSpawnedCompleteMainQuest(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data;
  iVar2 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// CheckIsNpcSpawnedProgressLocalQuest @ 14c06e5d0

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckIsNpcSpawnedProgressLocalQuest
          (UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance.Data;
  iVar2 = (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// CheckIsNpcSpawnedProgressMainQuest @ 14c06e640

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckIsNpcSpawnedProgressMainQuest(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance.Data;
  iVar2 = (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 == param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// CheckMapSpawnTableSpawn @ 14c06ea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckMapSpawnTableSpawn
          (UDS_W_MapSpawnUnscaled *this,FDS_MapIndexSpawnTableRow *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  FDS_MapIndoorGroupTableRow *pFVar4;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar5;
  int iVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [8];
  ForAnyElementType local_170;
  int local_168;
  int local_164 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->IsIndoor == true) {
    pFVar4 = FDS_MapIndoorGroupTableRow::Get((longlong)this->CurLookIndoorGroupID,true);
    if (pFVar4 == (FDS_MapIndoorGroupTableRow *)0x0) {
      return false;
    }
    local_170.Data = (FScriptContainerElement *)0x0;
    bVar2 = false;
    pFVar1 = (pFVar4->ID_Zones).AllocatorInstance.Data;
    local_168 = (pFVar4->ID_Zones).ArrayNum;
    lVar7 = (longlong)local_168;
    if (local_168 == 0) {
      local_164[0] = 0;
      iVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_168,0,&local_170,local_168,local_164);
      memcpy(local_170.Data,pFVar1,lVar7 << 2);
      iVar3 = local_168;
    }
    pFVar1 = local_170.Data + (longlong)iVar3 * 4;
    FVar8.Data = local_170.Data;
    iVar6 = iVar3;
    while( true ) {
      if (iVar6 != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_178);
        iVar6 = local_168;
      }
      if (FVar8.Data == pFVar1) break;
      if (*(int *)FVar8.Data == param_1->ID_Zone) {
        bVar2 = true;
      }
      FVar8.Data = FVar8.Data + 4;
    }
    FVar8.Data = local_170.Data;
    if (bVar2) {
      if (local_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data);
      }
      return true;
    }
  }
  else {
    this_00 = UDS_WorldMapManager::GetInst();
    if (this_00 != (UDS_WorldMapManager *)0x0) {
      iVar3 = UDS_WorldMapManager::GetIslandIDByZoneID(this_00,param_1->ID_Zone);
      return iVar3 == this->CurLookIslandID;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_W_MapSpawnUnscaled::CheckMapSpawnTableSpawn",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x838,L"worldMapMgr is nullptr");
    FVar8.Data = (FScriptContainerElement *)local_158._padding_;
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return false;
}

// CheckSpawn @ 14c06ed10

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckSpawn(UDS_W_MapSpawnUnscaled *this,FDS_MapIndexBaseTableRow *param_1)

{
  if (((param_1 != (FDS_MapIndexBaseTableRow *)0x0) &&
      ((param_1->isShownInRadar != false || ((char)this->MapType != '\0')))) &&
     ((param_1->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) {
    if (this->IsIndoor == true) {
      return param_1->isShownInIndoorMap != false;
    }
    return true;
  }
  return false;
}

// CheckZoneInIndoorGroup @ 14c06ef40

bool __thiscall
UDS_W_MapSpawnUnscaled::CheckZoneInIndoorGroup(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FDS_MapIndoorGroupTableRow *pFVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  pFVar2 = FDS_MapIndoorGroupTableRow::Get((longlong)this->CurLookIndoorGroupID,true);
  if (pFVar2 == (FDS_MapIndoorGroupTableRow *)0x0) {
    return false;
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (pFVar2->ID_Zones).AllocatorInstance.Data;
  local_20 = (pFVar2->ID_Zones).ArrayNum;
  lVar7 = (longlong)local_20;
  if (local_20 == 0) {
    local_1c = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar7 << 2);
    iVar5 = local_20;
  }
  pFVar1 = local_28.Data + (longlong)iVar5 * 4;
  FVar4.Data = local_28.Data;
  iVar6 = iVar5;
  while( true ) {
    if (iVar6 != iVar5) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar6 = local_20;
    }
    if (FVar4.Data == pFVar1) break;
    if (*(int *)FVar4.Data == param_1) {
      bVar3 = true;
LAB_14c06f00d:
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      return bVar3;
    }
    FVar4.Data = FVar4.Data + 4;
  }
  bVar3 = false;
  goto LAB_14c06f00d;
}

// CheckZoneInIsland @ 14c06f050

bool __thiscall UDS_W_MapSpawnUnscaled::CheckZoneInIsland(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FDS_ZoneIslandTableRow *pFVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  pFVar2 = FDS_ZoneIslandTableRow::Get((longlong)this->CurLookIslandID,true);
  if (pFVar2 == (FDS_ZoneIslandTableRow *)0x0) {
    return false;
  }
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar1 = (pFVar2->ID_Zone).AllocatorInstance.Data;
  local_20 = (pFVar2->ID_Zone).ArrayNum;
  lVar7 = (longlong)local_20;
  if (local_20 == 0) {
    local_1c = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar7 << 2);
    iVar5 = local_20;
  }
  pFVar1 = local_28.Data + (longlong)iVar5 * 4;
  FVar4.Data = local_28.Data;
  iVar6 = iVar5;
  while( true ) {
    if (iVar6 != iVar5) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar6 = local_20;
    }
    if (FVar4.Data == pFVar1) break;
    if (*(int *)FVar4.Data == param_1) {
      bVar3 = true;
LAB_14c06f11d:
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      return bVar3;
    }
    FVar4.Data = FVar4.Data + 4;
  }
  bVar3 = false;
  goto LAB_14c06f11d;
}

// CreateBreachIconOnce @ 14c070090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateBreachIconOnce(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FDS_ViewModelContext_WorldMapBreachIconInfo *pFVar4;
  bool bVar5;
  FSoftObjectPath *pFVar6;
  UDS_UserWidget *pUVar7;
  UDS_LogManager *pUVar8;
  FDS_BreachBaseTableRow *pFVar9;
  FDS_MapIndexBaseTableRow *pFVar10;
  UCanvasPanelSlot *this_00;
  undefined1 auStackY_588 [32];
  FWeakObjectPtr local_558 [2];
  TSharedPtr<FDS_ViewModelContext_WorldMapBreachIconInfo,1> local_548;
  UDS_UserWidget *local_538;
  UDS_UserWidget *local_530;
  TVector2<double>_u_0 local_528;
  TVector2<double>_u_0 local_518;
  TSharedPtr<FDS_ViewModelContext,1> local_508;
  FSoftObjectPath local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_588;
  pFVar6 = FSoftObjectPath::FSoftObjectPath(&local_4f8,&this->IconBtnObjectPath);
  pUVar7 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar6);
  if (pUVar7 == (UDS_UserWidget *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_4d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4d8,"UDS_W_MapSpawnUnscaled::CreateBreachIconOnce",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_4d8.Ptr,0x622,L"loadedContentsWidget is nullptr.");
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
    }
  }
  else {
    pFVar9 = FDS_BreachBaseTableRow::Get((longlong)param_1,true);
    if (pFVar9 == (FDS_BreachBaseTableRow *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_3b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3b8,"UDS_W_MapSpawnUnscaled::CreateBreachIconOnce",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_3b8.Ptr,0x629,L"breachBaseTableRow is nullptr.");
        if ((void *)local_3b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3b8._padding_);
        }
      }
    }
    else {
      pFVar10 = FDS_MapIndexBaseTableRow::Get((ulonglong)pFVar9->MapIndex,true);
      if (pFVar10 == (FDS_MapIndexBaseTableRow *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_298._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_298,"UDS_W_MapSpawnUnscaled::CreateBreachIconOnce",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_298.Ptr,0x630,
                     L"breachIconmapIndexBaseTableRow is nullptr.");
          if ((void *)local_298._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_298._padding_);
          }
        }
      }
      else if ((((pFVar10->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
               ((pFVar10->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
              ((this->IsIndoor != true || (pFVar10->isShownInIndoorMap != false)))) {
        iVar1 = pFVar10->MapIndexPriority;
        dVar3 = (double)pFVar10->IconSpawnSize;
        this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar7);
        if (this_00 == (UCanvasPanelSlot *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_W_MapSpawnUnscaled::CreateBreachIconOnce",0x2c,Yes);
            UDS_LogManager::PrintLog(pUVar8,1,Warning,local_178.Ptr,0x641,L"canvasSlot is nullptr.")
            ;
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        else {
          local_528._8_4_ = SUB84(dVar3,0);
          local_528._s_0.X = dVar3;
          local_528._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_528._s_0);
          local_518._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
          local_518._s_0.Y = _UNK_150689678;
          UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_518._s_0);
          UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
          MakeContext<FDS_ViewModelContext_WorldMapBreachIconInfo>(&local_548);
          pFVar4 = local_548.Object;
          if (local_548.Object == (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_548.SharedReferenceCount.ReferenceController);
          }
          else {
            *(undefined4 *)&(local_548.Object)->_padding_ = 0x1a6;
            (local_548.Object)->_padding_ = (longlong)this_00;
            dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
            ((local_548.Object)->MapStartPos).field0_0x0._s_0.X =
                 (this->MapStartPos).field0_0x0._s_0.X;
            ((local_548.Object)->MapStartPos).field0_0x0._s_0.Y = dVar3;
            dVar3 = (pFVar9->Location).field0_0x0._s_0.Y;
            (local_548.Object)->_padding_ = (longlong)(pFVar9->Location).field0_0x0._s_0.X;
            (local_548.Object)->_padding_ = (longlong)dVar3;
            dVar3 = (pFVar9->Location).field0_0x0._s_0.Z;
            if ((local_548.Object == (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(float *)&pFVar4->_padding_ = (float)dVar3;
            dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
            (pFVar4->ReferencePosition).field0_0x0._s_0.X =
                 (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
            (pFVar4->ReferencePosition).field0_0x0._s_0.Y = dVar3;
            *(float *)&pFVar4->_padding_ = this->OrthoWidth;
            *(float *)((longlong)&pFVar4->_padding_ + 4) = this->TextureSize;
            *(bool *)&pFVar4->_padding_ = pFVar10->isShownHeight;
            *(int *)&pFVar4->_padding_ = pFVar10->MapIndexGroupID;
            *(uint *)((longlong)&pFVar4->_padding_ + 4) = (uint)pFVar10->ID;
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar4->_padding_,
                       &pFVar10->WorldMapZoomStep);
            local_538 = pUVar7;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            FWeakObjectPtr::operator=(&(pFVar4->Widget).WeakPtr,(FObjectPtr)&local_538);
            *(float *)((longlong)&pFVar4->_padding_ + 4) = this->TextureScale;
            local_508.Object = (FDS_ViewModelContext *)local_548.Object;
            local_508.SharedReferenceCount.ReferenceController =
                 local_548.SharedReferenceCount.ReferenceController;
            *(int *)((longlong)&pFVar4->_padding_ + 4) = -pFVar10->MapIndexPriority;
            *(int *)&pFVar4->_padding_ = this->MapType;
            pFVar4->IconID = pFVar10->ID_MapIndexIcon02;
            pFVar4->BreachBaseID = param_1;
            if (local_548.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            local_558[0].ObjectIndex = 0;
            local_558[0].ObjectSerialNumber = 0;
            local_530 = pUVar7;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            FWeakObjectPtr::operator=(local_558,(FObjectPtr)&local_530);
            DS_ViewModelTemplateUtil::BindViewModel
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_558[0],&local_508,false)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_548.SharedReferenceCount.ReferenceController);
          }
        }
      }
    }
  }
  return;
}

// CreateByMapIndexSpawnTable @ 14c070710

void __thiscall
UDS_W_MapSpawnUnscaled::CreateByMapIndexSpawnTable
          (UDS_W_MapSpawnUnscaled *this,FDS_MapIndexSpawnTableRow *param_1)

{
  EDS_MapIndexSpawnDisplayType EVar1;
  bool bVar2;
  
  EVar1 = param_1->MapIndexSpawnDisplayType;
  bVar2 = CheckMapSpawnTableSpawn(this,param_1);
  if (bVar2) {
    if (EVar1 == IconAndText_Btn) {
      CreateIconAndText(this,param_1);
      return;
    }
    if (EVar1 == IconOnly_Btn) {
      CreateIconOnlyBtn(this,param_1);
      return;
    }
    if (EVar1 == TextOnly_Btn) {
      CreateTextOnlyBtn(this,param_1);
    }
  }
  return;
}

// CreateDefaultIcon @ 14c078960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateDefaultIcon
          (UDS_W_MapSpawnUnscaled *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,float param_10,bool param_11,bool param_12)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  FSoftObjectPath *pFVar8;
  FWeakObjectPtr FVar9;
  UCanvasPanelSlot *this_00;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1b8 [2];
  TVector2<double>_u_0 local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FSoftObjectPath local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b8[0] = (FWeakObjectPtr)param_2;
  if (this->PanelMain == (UDS_CanvasPanel *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_W_MapSpawnUnscaled::CreateDefaultIcon",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,0xd14,L"panel main null");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    bVar6 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerMovementCore,(void *)0x0);
    if (!bVar6) {
      pFVar8 = FSoftObjectPath::FSoftObjectPath(&local_188,&this->IconBtnObjectPath);
      FVar9 = (FWeakObjectPtr)GetLoadedUserWidgetByFSoftObjectPath(this,pFVar8);
      if (FVar9 == (FWeakObjectPtr)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::CreateDefaultIcon",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_168.Ptr,0xd20,L"loadedContentsWidget is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (pFVar1 == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(pFVar1);
        return;
      }
      this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)FVar9);
      if (this_00 == (UCanvasPanelSlot *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::CreateDefaultIcon",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,0xd28,L"canvasSlot is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        local_1a8._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_1a8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_1a8._s_0);
        local_1a8._s_0.X = (double)___xmm_3fe00000000000003fe0000000000000;
        local_1a8._s_0.Y = (double)_UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_1a8._s_0);
        UCanvasPanelSlot::SetZOrder(this_00,-param_9);
        MakeContext<FDS_ViewModelContext_WorldMapIconInfo>
                  ((TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> *)&local_1a8._s_0);
        uVar5 = local_1a8._s_0.Y;
        uVar4 = local_1a8._s_0.X;
        if ((UDS_UserWidget *)local_1a8._s_0.X != (UDS_UserWidget *)0x0) {
          *(undefined4 *)((longlong)local_1a8._s_0.X + 0x18) = 0x1a4;
          *(UCanvasPanelSlot **)((longlong)local_1a8._s_0.X + 0x58) = this_00;
          dVar2 = (this->MapStartPos).field0_0x0._s_0.Y;
          *(double *)((longlong)local_1a8._s_0.X + 0x78) = (this->MapStartPos).field0_0x0._s_0.X;
          *(double *)((longlong)local_1a8._s_0.X + 0x80) = dVar2;
          lVar3 = *(longlong *)((longlong)local_1b8[0] + 8);
          *(longlong *)((longlong)local_1a8._s_0.X + 0x20) = *(longlong *)local_1b8[0];
          *(longlong *)((longlong)local_1a8._s_0.X + 0x28) = lVar3;
          *(float *)((longlong)local_1a8._s_0.X + 0x48) = param_10;
          dVar2 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          *(double *)((longlong)local_1a8._s_0.X + 0x88) =
               (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          *(double *)((longlong)local_1a8._s_0.X + 0x90) = dVar2;
          *(float *)((longlong)local_1a8._s_0.X + 0x40) = this->OrthoWidth;
          *(float *)((longlong)local_1a8._s_0.X + 0x44) = this->TextureSize;
          *(int *)((longlong)local_1a8._s_0.X + 0x98) = param_4;
          *(longlong *)((longlong)local_1a8._s_0.X + 0xa0) = (longlong)param_5;
          *(bool *)((longlong)local_1a8._s_0.X + 0x50) = param_12;
          *(bool *)((longlong)local_1a8._s_0.X + 0xc0) = param_11;
          *(int *)((longlong)local_1a8._s_0.X + 0x30) = param_7;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_1a8._s_0.X + 0x60),
                     param_1);
          *(int *)(uVar4 + 0xb0) = param_6;
          *(int *)(uVar4 + 0x34) = param_8;
          local_1b8[0] = FVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar9);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(uVar4 + 0x70),(FObjectPtr)local_1b8);
          *(float *)(uVar4 + 0x4c) = this->TextureScale;
          *(int *)(uVar4 + 0x3c) = -param_9;
          *(int *)(uVar4 + 0x38) = this->MapType;
          local_198.Object = (FDS_ViewModelContext *)local_1a8._s_0.X;
          local_198.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_1a8._s_0.Y;
          if ((TReferenceControllerBase<1> *)uVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)(uVar5 + 8) = (atomic<int>)((int)*(atomic<int> *)(uVar5 + 8) + 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar9);
          }
          local_1b8[0].ObjectIndex = 0;
          local_1b8[0].ObjectSerialNumber = 0;
          local_1a8._0_8_ = FVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar9);
          }
          FWeakObjectPtr::operator=(local_1b8,(FObjectPtr)&local_1a8);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1b8[0],&local_198,false);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)uVar5);
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (pFVar1 == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(pFVar1);
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CreateDetectionStuff @ 14c078dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateDetectionStuff
          (UDS_W_MapSpawnUnscaled *this,ulong64 param_1,FDS_PlayerSkillTargetInfo *param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FDS_PlayerSkillTargetInfo *pFVar4;
  bool bVar5;
  FSoftObjectPath *pFVar6;
  UDS_UserWidget *pUVar7;
  UDS_LogManager *pUVar8;
  FDS_MapIndexBaseTableRow *pFVar9;
  UCanvasPanelSlot *this_00;
  FDS_ViewModelContext_WorldMapIconInfo *this_01;
  TReferenceControllerBase<1> *pTVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_02;
  undefined1 auStackY_348 [32];
  FWeakObjectPtr local_318;
  FDS_PlayerSkillTargetInfo *local_310;
  ulong64 local_308;
  UDS_UserWidget *local_300;
  UDS_UserWidget *local_2f8;
  TSharedPtr<FDS_ViewModelContext,1> local_2f0;
  TVector2<double>_u_0 local_2d8;
  TSharedPtr<FDS_ViewModelContext,1> local_2c8;
  TVector2<double>_u_0 local_2b8;
  FSoftObjectPath local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_310 = param_2;
  local_308 = param_1;
  pFVar6 = FSoftObjectPath::FSoftObjectPath(&local_2a8,&this->DetectionObjectPath);
  pUVar7 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar6);
  if (pUVar7 == (UDS_UserWidget *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_288._padding_ = (longlong)pUVar7;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_W_MapSpawnUnscaled::CreateDetectionStuff",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_288.Ptr,0x48f,L"loadedContentsWidget is nullptr.");
      if ((UDS_UserWidget *)local_288._padding_ != (UDS_UserWidget *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    pFVar9 = FDS_MapIndexBaseTableRow::Get(0x27,true);
    if ((((pFVar9 != (FDS_MapIndexBaseTableRow *)0x0) &&
         ((pFVar9->isShownInRadar != false || ((char)this->MapType != '\0')))) &&
        ((pFVar9->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
       ((this->IsIndoor != true || (pFVar9->isShownInIndoorMap != false)))) {
      iVar1 = pFVar9->MapIndexPriority;
      dVar3 = (double)pFVar9->IconSpawnSize;
      this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar7);
      if (this_00 == (UCanvasPanelSlot *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::CreateDetectionStuff",0x2c,Yes);
          UDS_LogManager::PrintLog(pUVar8,1,Warning,local_168.Ptr,0x4a7,L"canvasSlot is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        local_2d8._8_4_ = SUB84(dVar3,0);
        local_2d8._s_0.X = dVar3;
        local_2d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_2d8._s_0);
        local_2b8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_2b8._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_2b8._s_0);
        UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
        this_01 = ::operator_new(0xd8);
        if (this_01 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
          this_01 = (FDS_ViewModelContext_WorldMapIconInfo *)0x0;
        }
        else {
          memset(this_01,0,0xd8);
          FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo(this_01);
          this_01[1]._padding_ = 0;
          this_01->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapDetectionIconInfo__6B_;
          *(undefined4 *)&this_01[1]._padding_ = 0;
          *(undefined1 *)((longlong)&this_01[1]._padding_ + 4) = 0;
        }
        pTVar10 = ::operator_new(0x20);
        if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
          pTVar10 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar10->SharedReferenceCount = (atomic<int>)0x1;
          pTVar10[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar10->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapDetectionIconInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar10->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext_WorldMapIconInfo **)&pTVar10[1].SharedReferenceCount = this_01;
        }
        if ((this_01 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar11 = FDS_ViewModelContext_WorldMapDetectionIconInfo::StaticStruct();
        this_01->_padding_ = (longlong)pUVar11;
        this_02 = UDS_ViewModelContextManager::GetInst();
        if (this_02 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_2f0.Object = (FDS_ViewModelContext *)this_01;
          local_2f0.SharedReferenceCount.ReferenceController = pTVar10;
          UDS_ViewModelContextManager::RegisterContext(this_02,&local_2f0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2f0.SharedReferenceCount.ReferenceController);
        }
        pFVar4 = local_310;
        *(undefined4 *)&this_01->_padding_ = 0x1a8;
        this_01->_padding_ = (longlong)this_00;
        dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
        (this_01->MapStartPos).field0_0x0._s_0.X = (this->MapStartPos).field0_0x0._s_0.X;
        (this_01->MapStartPos).field0_0x0._s_0.Y = dVar3;
        dVar3 = (local_310->Position).field0_0x0._s_0.Y;
        this_01->_padding_ = (longlong)(local_310->Position).field0_0x0._s_0.X;
        this_01->_padding_ = (longlong)dVar3;
        *(float *)&this_01->_padding_ = (float)(local_310->Position).field0_0x0._s_0.Z;
        dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
        (this_01->ReferencePosition).field0_0x0._s_0.X =
             (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
        (this_01->ReferencePosition).field0_0x0._s_0.Y = dVar3;
        *(float *)&this_01->_padding_ = this->OrthoWidth;
        this_01->IconID = pFVar9->MapIndexIcon;
        *(uint *)((longlong)&this_01->_padding_ + 4) = (uint)pFVar9->ID;
        *(float *)((longlong)&this_01->_padding_ + 4) = this->TextureSize;
        *(int *)&this_01->_padding_ = pFVar9->MapIndexGroupID;
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)&this_01->_padding_,
                   &pFVar9->WorldMapZoomStep);
        this_01[1]._padding_ = local_308;
        *(int *)&this_01[1]._padding_ = pFVar4->TableID;
        *(bool *)((longlong)&this_01[1]._padding_ + 4) = pFVar4->bIsStuff;
        local_300 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        FWeakObjectPtr::operator=(&(this_01->Widget).WeakPtr,(FObjectPtr)&local_300);
        *(bool *)&this_01->_padding_ = pFVar9->isShownHeight;
        *(float *)((longlong)&this_01->_padding_ + 4) = this->TextureScale;
        *(int *)((longlong)&this_01->_padding_ + 4) = -pFVar9->MapIndexPriority;
        *(int *)&this_01->_padding_ = this->MapType;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_2c8.Object = (FDS_ViewModelContext *)this_01;
        local_2c8.SharedReferenceCount.ReferenceController = pTVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        local_318.ObjectIndex = 0;
        local_318.ObjectSerialNumber = 0;
        local_2f8 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        FWeakObjectPtr::operator=(&local_318,(FObjectPtr)&local_2f8);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_318,&local_2c8,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10)
        ;
      }
    }
  }
  return;
}

// CreateDiscoverBreachIcon @ 14c079290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateDiscoverBreachIcon
          (UDS_W_MapSpawnUnscaled *this,FDS_BreachDetailInfo *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  FDS_ViewModelContext_WorldMapBreachIconInfo *pFVar5;
  bool bVar6;
  FSoftObjectPath *pFVar7;
  UDS_UserWidget *pUVar8;
  UDS_LogManager *pUVar9;
  FDS_BreachBaseTableRow *pFVar10;
  FDS_MapIndexBaseTableRow *pFVar11;
  UCanvasPanelSlot *this_00;
  int *piVar12;
  void *pvVar13;
  undefined1 auStackY_588 [32];
  FWeakObjectPtr local_558 [2];
  TSharedPtr<FDS_ViewModelContext_WorldMapBreachIconInfo,1> local_548;
  UDS_UserWidget *local_538;
  UDS_UserWidget *local_530;
  TVector2<double>_u_0 local_528;
  TVector2<double>_u_0 local_518;
  TSharedPtr<FDS_ViewModelContext,1> local_508;
  FSoftObjectPath local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_588;
  pFVar7 = FSoftObjectPath::FSoftObjectPath(&local_4f8,&this->IconBtnObjectPath);
  pUVar8 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar7);
  if (pUVar8 == (UDS_UserWidget *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_4d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4d8,"UDS_W_MapSpawnUnscaled::CreateDiscoverBreachIcon",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_4d8.Ptr,0x5de,L"loadedContentsWidget is nullptr.");
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
    }
    pFVar2 = (param_1->FirstPlayerName).Data.AllocatorInstance.Data;
    if (pFVar2 == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(pFVar2);
    return;
  }
  pFVar10 = FDS_BreachBaseTableRow::Get((longlong)param_1->BreachBaseID,true);
  if (pFVar10 == (FDS_BreachBaseTableRow *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c079494;
    pUVar9 = UDS_LogManager::GetInst();
    local_3b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3b8,"UDS_W_MapSpawnUnscaled::CreateDiscoverBreachIcon",0x30,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_3b8.Ptr,0x5e5,L"breachBaseTableRow is nullptr.")
    ;
    pvVar13 = (void *)local_3b8._padding_;
  }
  else {
    pFVar11 = FDS_MapIndexBaseTableRow::Get((ulonglong)pFVar10->MapIndex,true);
    if (pFVar11 != (FDS_MapIndexBaseTableRow *)0x0) {
      if ((((pFVar11->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
          ((pFVar11->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
         ((this->IsIndoor != true || (pFVar11->isShownInIndoorMap != false)))) {
        iVar1 = pFVar11->MapIndexPriority;
        dVar4 = (double)pFVar11->IconSpawnSize;
        this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar8);
        if (this_00 == (UCanvasPanelSlot *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_W_MapSpawnUnscaled::CreateDiscoverBreachIcon",0x30,Yes);
            UDS_LogManager::PrintLog(pUVar9,1,Warning,local_178.Ptr,0x5fd,L"canvasSlot is nullptr.")
            ;
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        else {
          local_528._8_4_ = SUB84(dVar4,0);
          local_528._s_0.X = dVar4;
          local_528._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_528._s_0);
          local_518._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
          local_518._s_0.Y = _UNK_150689678;
          UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_518._s_0);
          UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
          MakeContext<FDS_ViewModelContext_WorldMapBreachIconInfo>(&local_548);
          pFVar5 = local_548.Object;
          if (local_548.Object == (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_548.SharedReferenceCount.ReferenceController);
          }
          else {
            *(undefined4 *)&(local_548.Object)->_padding_ = 0x1a6;
            (local_548.Object)->_padding_ = (longlong)this_00;
            dVar4 = (this->MapStartPos).field0_0x0._s_0.Y;
            ((local_548.Object)->MapStartPos).field0_0x0._s_0.X =
                 (this->MapStartPos).field0_0x0._s_0.X;
            ((local_548.Object)->MapStartPos).field0_0x0._s_0.Y = dVar4;
            dVar4 = (pFVar10->Location).field0_0x0._s_0.Y;
            (local_548.Object)->_padding_ = (longlong)(pFVar10->Location).field0_0x0._s_0.X;
            (local_548.Object)->_padding_ = (longlong)dVar4;
            dVar4 = (pFVar10->Location).field0_0x0._s_0.Z;
            if ((local_548.Object == (FDS_ViewModelContext_WorldMapBreachIconInfo *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(float *)&pFVar5->_padding_ = (float)dVar4;
            dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
            (pFVar5->ReferencePosition).field0_0x0._s_0.X =
                 (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
            (pFVar5->ReferencePosition).field0_0x0._s_0.Y = dVar4;
            *(float *)&pFVar5->_padding_ = this->OrthoWidth;
            *(float *)((longlong)&pFVar5->_padding_ + 4) = this->TextureSize;
            *(bool *)&pFVar5->_padding_ = pFVar11->isShownHeight;
            *(int *)&pFVar5->_padding_ = pFVar11->MapIndexGroupID;
            *(uint *)((longlong)&pFVar5->_padding_ + 4) = (uint)pFVar11->ID;
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar5->_padding_,
                       &pFVar11->WorldMapZoomStep);
            local_538 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            FWeakObjectPtr::operator=(&(pFVar5->Widget).WeakPtr,(FObjectPtr)&local_538);
            *(float *)((longlong)&pFVar5->_padding_ + 4) = this->TextureScale;
            *(int *)((longlong)&pFVar5->_padding_ + 4) = -pFVar11->MapIndexPriority;
            bVar6 = FDS_BreachDetailInfo::IsEnoughTryCount(param_1);
            piVar12 = &pFVar11->ID_MapIndexIcon02;
            if (bVar6) {
              piVar12 = &pFVar11->MapIndexIcon;
            }
            pFVar5->IconID = *piVar12;
            *(int *)&pFVar5->_padding_ = this->MapType;
            pFVar5->BreachBaseID = param_1->BreachBaseID;
            local_508.Object = (FDS_ViewModelContext *)local_548.Object;
            local_508.SharedReferenceCount.ReferenceController =
                 local_548.SharedReferenceCount.ReferenceController;
            pFVar5->BreachEntityID = param_1->StuffPortalEntityID;
            if (local_548.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            local_558[0].ObjectIndex = 0;
            local_558[0].ObjectSerialNumber = 0;
            local_530 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            FWeakObjectPtr::operator=(local_558,(FObjectPtr)&local_530);
            DS_ViewModelTemplateUtil::BindViewModel
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_558[0],&local_508,false)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_548.SharedReferenceCount.ReferenceController);
          }
        }
        pFVar2 = (param_1->FirstPlayerName).Data.AllocatorInstance.Data;
        if (pFVar2 == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(pFVar2);
        return;
      }
      goto LAB_14c079494;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c079494;
    pUVar9 = UDS_LogManager::GetInst();
    local_298._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_298,"UDS_W_MapSpawnUnscaled::CreateDiscoverBreachIcon",0x30,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_298.Ptr,0x5ec,L"breachIconmapIndexBaseTableRow is nullptr.");
    pvVar13 = (void *)local_298._padding_;
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
LAB_14c079494:
  pFVar2 = (param_1->FirstPlayerName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CreateIconAndText @ 14c0797f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateIconAndText
          (UDS_W_MapSpawnUnscaled *this,FDS_MapIndexSpawnTableRow *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FDS_MapIndexSpawnTableRow *this_00;
  bool bVar4;
  FDS_MapIndexBaseTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  FSoftObjectPath *pFVar7;
  UDS_UserWidget *pUVar8;
  UCanvasPanelSlot *this_01;
  FDS_ViewModelContext_WorldMapIconInfo *this_02;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_03;
  FDS_StringWorldTableRow *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStackY_4b8 [32];
  FWeakObjectPtr local_488;
  FDS_MapIndexSpawnTableRow *local_480;
  UDS_UserWidget *local_478;
  TSharedPtr<FDS_ViewModelContext,1> local_470;
  FDS_Text local_458;
  TVector2<double>_u_0 local_408;
  TSharedPtr<FDS_ViewModelContext,1> local_3f8;
  TVector2<double>_u_0 local_3e8;
  FSoftObjectPath local_3d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_480 = param_1;
  pFVar5 = FDS_MapIndexBaseTableRow::Get((ulonglong)param_1->MapIndex,true);
  if (pFVar5 == (FDS_MapIndexBaseTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_3b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3b8,"UDS_W_MapSpawnUnscaled::CreateIconAndText",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_3b8.Ptr,0xc5f,L"mapIndexBaseTable nullptr");
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
    }
  }
  else if ((((pFVar5->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
           ((pFVar5->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
          ((this->IsIndoor != true || (pFVar5->isShownInIndoorMap != false)))) {
    pFVar7 = FSoftObjectPath::FSoftObjectPath(&local_3d8,&this->IconAndTextObjectPath);
    pUVar8 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar7);
    if (pUVar8 == (UDS_UserWidget *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_298._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_298,"UDS_W_MapSpawnUnscaled::CreateIconAndText",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_298.Ptr,0xc6b,L"loadedContentsWidget is nullptr.");
        if ((void *)local_298._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_298._padding_);
        }
      }
    }
    else {
      iVar1 = pFVar5->MapIndexPriority;
      dVar3 = (double)pFVar5->IconSpawnSize;
      this_01 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar8);
      if (this_01 == (UCanvasPanelSlot *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"UDS_W_MapSpawnUnscaled::CreateIconAndText",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,0xc77,L"canvasSlot is nullptr.");
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
        }
      }
      else {
        local_408._8_4_ = SUB84(dVar3,0);
        local_408._s_0.X = dVar3;
        local_408._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        UCanvasPanelSlot::SetSize(this_01,(TVector2<double> *)&local_408._s_0);
        local_3e8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_3e8._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_01,(TVector2<double> *)&local_3e8._s_0);
        UCanvasPanelSlot::SetZOrder(this_01,-iVar1);
        this_02 = ::operator_new(0x120);
        if (this_02 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
          this_02 = (FDS_ViewModelContext_WorldMapIconInfo *)0x0;
        }
        else {
          memset(this_02,0,0x120);
          FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo(this_02);
          this_02->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapIconAndTextInfo__6B_;
          *(undefined1 *)&this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          *(undefined4 *)&this_02[1]._padding_ = 0;
          *(undefined1 *)((longlong)&this_02[1]._padding_ + 4) = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
        }
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        pTVar9 = ::operator_new(0x20);
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapIconAndTextInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext_WorldMapIconInfo **)&pTVar9[1].SharedReferenceCount = this_02;
          pTVar12 = pTVar9;
        }
        if ((this_02 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar10 = FDS_ViewModelContext_WorldMapIconAndTextInfo::StaticStruct();
        this_02->_padding_ = (longlong)pUVar10;
        this_03 = UDS_ViewModelContextManager::GetInst();
        if (this_03 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_470.Object = (FDS_ViewModelContext *)this_02;
          local_470.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(this_03,&local_470);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_470.SharedReferenceCount.ReferenceController);
        }
        this_00 = local_480;
        *(undefined4 *)&this_02->_padding_ = 0x1ad;
        this_02->_padding_ = (longlong)this_01;
        this_02[1]._padding_ = (longlong)local_480->ID;
        dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
        (this_02->MapStartPos).field0_0x0._s_0.X = (this->MapStartPos).field0_0x0._s_0.X;
        (this_02->MapStartPos).field0_0x0._s_0.Y = dVar3;
        dVar3 = (local_480->Location).field0_0x0._s_0.Y;
        this_02->_padding_ = (longlong)(local_480->Location).field0_0x0._s_0.X;
        this_02->_padding_ = (longlong)dVar3;
        *(float *)&this_02->_padding_ = (float)(local_480->Location).field0_0x0._s_0.Z;
        dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
        (this_02->ReferencePosition).field0_0x0._s_0.X =
             (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
        (this_02->ReferencePosition).field0_0x0._s_0.Y = dVar3;
        *(float *)&this_02->_padding_ = this->OrthoWidth;
        *(float *)((longlong)&this_02->_padding_ + 4) = this->TextureSize;
        this_02->IconID = pFVar5->MapIndexIcon;
        this_02->IsWandering = false;
        *(bool *)&this_02->_padding_ = pFVar5->isShownHeight;
        *(int *)&this_02->_padding_ = pFVar5->MapIndexGroupID;
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)&this_02->_padding_,
                   &pFVar5->WorldMapZoomStep);
        *(uint *)((longlong)&this_02->_padding_ + 4) = (uint)pFVar5->ID;
        this_02[1]._padding_ = (longlong)this_00->ID;
        local_458.StringTableType = None;
        local_458.StringTableID = 0;
        local_458.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_458.StringEnumTableNameID.Number = 0;
        local_458.DateTime.Ticks = 0;
        local_458.TimeSpan.Ticks = 0;
        local_458.TimeExpressionType = None;
        local_458.IsExpression = false;
        local_458.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_458.UniqueString.Data.ArrayNum = 0;
        local_458.UniqueString.Data.ArrayMax = 0;
        local_458.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_458.FormatArgs.ArrayNum = 0;
        local_458.FormatArgs.ArrayMax = 0;
        pFVar11 = FDS_MapIndexSpawnTableRow::MapIndexNameTable(this_00);
        FDS_Text::SetTextFromStringTable(&local_458,pFVar11);
        FDS_Text::operator=((FDS_Text *)(this_02 + 1),&local_458);
        *(float *)((longlong)&this_02->_padding_ + 4) = this->TextureScale;
        *(int *)((longlong)&this_02->_padding_ + 4) = -pFVar5->MapIndexPriority;
        *(int *)&this_02->_padding_ = this->MapType;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_3f8.Object = (FDS_ViewModelContext *)this_02;
        local_3f8.SharedReferenceCount.ReferenceController = pTVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        local_488.ObjectIndex = 0;
        local_488.ObjectSerialNumber = 0;
        local_478 = pUVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        FWeakObjectPtr::operator=(&local_488,(FObjectPtr)&local_478);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_488,&local_3f8,false);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_458.FormatArgs.AllocatorInstance.Data,
                   local_458.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_458.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_458.FormatArgs.AllocatorInstance.Data);
        }
        if (local_458.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_458.UniqueString.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
    }
  }
  return;
}

// CreateIconOnlyBtn @ 14c079de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateIconOnlyBtn
          (UDS_W_MapSpawnUnscaled *this,FDS_MapIndexSpawnTableRow *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FDS_ViewModelContext_WorldMapIconInfo *pFVar4;
  bool bVar5;
  FDS_MapIndexBaseTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  FSoftObjectPath *pFVar8;
  UDS_UserWidget *pUVar9;
  UCanvasPanelSlot *this_00;
  undefined1 auStackY_458 [32];
  FWeakObjectPtr local_428 [2];
  TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> local_418;
  UDS_UserWidget *local_408;
  UDS_UserWidget *local_400;
  TVector2<double>_u_0 local_3f8;
  TVector2<double>_u_0 local_3e8;
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  FSoftObjectPath local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  pFVar6 = FDS_MapIndexBaseTableRow::Get((ulonglong)param_1->MapIndex,true);
  if (pFVar6 == (FDS_MapIndexBaseTableRow *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_W_MapSpawnUnscaled::CreateIconOnlyBtn",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_3a8.Ptr,0xca0,L"mapIndexBaseTable nullptr");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else if ((((pFVar6->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
           ((pFVar6->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
          ((this->IsIndoor != true || (pFVar6->isShownInIndoorMap != false)))) {
    pFVar8 = FSoftObjectPath::FSoftObjectPath(&local_3c8,&this->IconBtnObjectPath);
    pUVar9 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar8);
    if (pUVar9 == (UDS_UserWidget *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_W_MapSpawnUnscaled::CreateIconOnlyBtn",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_288.Ptr,0xcac,L"loadedContentsWidget is nullptr.");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else {
      iVar1 = pFVar6->MapIndexPriority;
      dVar3 = (double)pFVar6->IconSpawnSize;
      this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar9);
      if (this_00 == (UCanvasPanelSlot *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::CreateIconOnlyBtn",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,0xcb7,L"canvasSlot is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        local_3f8._8_4_ = SUB84(dVar3,0);
        local_3f8._s_0.X = dVar3;
        local_3f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_3f8._s_0);
        local_3e8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_3e8._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_3e8._s_0);
        UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
        MakeContext<FDS_ViewModelContext_WorldMapIconInfo>(&local_418);
        pFVar4 = local_418.Object;
        if (local_418.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_418.SharedReferenceCount.ReferenceController);
        }
        else {
          *(undefined4 *)&(local_418.Object)->_padding_ = 0x1a4;
          (local_418.Object)->_padding_ = (longlong)this_00;
          dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
          ((local_418.Object)->MapStartPos).field0_0x0._s_0.X =
               (this->MapStartPos).field0_0x0._s_0.X;
          ((local_418.Object)->MapStartPos).field0_0x0._s_0.Y = dVar3;
          dVar3 = (param_1->Location).field0_0x0._s_0.Y;
          (local_418.Object)->_padding_ = (longlong)(param_1->Location).field0_0x0._s_0.X;
          (local_418.Object)->_padding_ = (longlong)dVar3;
          dVar3 = (param_1->Location).field0_0x0._s_0.Z;
          if ((local_418.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(float *)&pFVar4->_padding_ = (float)dVar3;
          dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          (pFVar4->ReferencePosition).field0_0x0._s_0.X =
               (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          (pFVar4->ReferencePosition).field0_0x0._s_0.Y = dVar3;
          *(float *)&pFVar4->_padding_ = this->OrthoWidth;
          *(float *)((longlong)&pFVar4->_padding_ + 4) = this->TextureSize;
          pFVar4->IconID = pFVar6->MapIndexIcon;
          *(bool *)&pFVar4->_padding_ = pFVar6->isShownHeight;
          *(int *)&pFVar4->_padding_ = pFVar6->MapIndexGroupID;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar4->_padding_,
                     &pFVar6->WorldMapZoomStep);
          *(uint *)((longlong)&pFVar4->_padding_ + 4) = (uint)pFVar6->ID;
          pFVar4->MapIndexSpawnTableID = param_1->ID;
          local_408 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&(pFVar4->Widget).WeakPtr,(FObjectPtr)&local_408);
          *(float *)((longlong)&pFVar4->_padding_ + 4) = this->TextureScale;
          local_3d8.Object = (FDS_ViewModelContext *)local_418.Object;
          local_3d8.SharedReferenceCount.ReferenceController =
               local_418.SharedReferenceCount.ReferenceController;
          *(int *)((longlong)&pFVar4->_padding_ + 4) = -pFVar6->MapIndexPriority;
          *(int *)&pFVar4->_padding_ = this->MapType;
          if (local_418.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          local_428[0].ObjectIndex = 0;
          local_428[0].ObjectSerialNumber = 0;
          local_400 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(local_428,(FObjectPtr)&local_400);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_428[0],&local_3d8,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_418.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// CreateMainQuestProgressStateIcon @ 14c07a280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateMainQuestProgressStateIcon
          (UDS_W_MapSpawnUnscaled *this,EDS_MapIndexType param_1,int param_2,int param_3,
          TVector<double> *param_4,bool param_5)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FDS_ViewModelContext_WorldMapQuestIconInfo *pFVar6;
  bool bVar7;
  int iVar8;
  FSoftObjectPath *pFVar9;
  UDS_UserWidget *pUVar10;
  UDS_LogManager *pUVar11;
  FDS_MapIndexBaseTableRow *pFVar12;
  UCanvasPanelSlot *this_00;
  FDS_QuestObjectiveTableRow *pFVar13;
  FDS_QuestMainTableRow *pFVar14;
  FDS_QuestLocalTableRow *pFVar15;
  void *pvVar16;
  undefined1 auStackY_7d8 [32];
  FWeakObjectPtr local_7a0;
  TSharedPtr<FDS_ViewModelContext_WorldMapQuestIconInfo,1> local_798;
  UDS_UserWidget *local_788;
  UDS_UserWidget *local_780;
  TVector2<double>_u_0 local_778;
  TVector2<double>_u_0 local_768;
  TSharedPtr<FDS_ViewModelContext,1> local_758;
  FSoftObjectPath local_748;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_728;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_608;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  pFVar9 = FSoftObjectPath::FSoftObjectPath(&local_748,&this->QuestIconObjectPath);
  pUVar10 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar9);
  if (pUVar10 == (UDS_UserWidget *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_728._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_728,"UDS_W_MapSpawnUnscaled::CreateMainQuestProgressStateIcon",0x38,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_728.Ptr,0x6a8,L"loadedContentsWidget is nullptr.");
    if ((void *)local_728._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_728._padding_);
    return;
  }
  pFVar12 = FDS_MapIndexBaseTableRow::Get((ulonglong)param_1,true);
  if (pFVar12 == (FDS_MapIndexBaseTableRow *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_608._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_608,"UDS_W_MapSpawnUnscaled::CreateMainQuestProgressStateIcon",0x38,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_608.Ptr,0x6af,L"mapIndexBaseTableRow is nullptr.");
    if ((void *)local_608._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_608._padding_);
    return;
  }
  if ((pFVar12->isShownInRadar == false) && ((char)this->MapType == '\0')) {
    return;
  }
  if ((pFVar12->isShownInWorldMap == false) && ((char)this->MapType == '\x01')) {
    return;
  }
  if ((this->IsIndoor == true) && (pFVar12->isShownInIndoorMap == false)) {
    return;
  }
  iVar8 = pFVar12->MapIndexPriority;
  dVar4 = (double)pFVar12->IconSpawnSize;
  this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar10);
  if (this_00 == (UCanvasPanelSlot *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_W_MapSpawnUnscaled::CreateMainQuestProgressStateIcon",0x38,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_188.Ptr,0x6c1,L"canvasSlot is nullptr.");
    pvVar16 = (void *)local_188._padding_;
  }
  else {
    local_778._8_4_ = SUB84(dVar4,0);
    local_778._s_0.X = dVar4;
    local_778._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_778._s_0);
    local_768._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
    local_768._s_0.Y = _UNK_150689678;
    UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_768._s_0);
    UCanvasPanelSlot::SetZOrder(this_00,-iVar8);
    if (param_3 == 0) {
      if (param_5) {
        pFVar14 = FDS_QuestMainTableRow::Get((longlong)param_2,true);
        if (pFVar14 != (FDS_QuestMainTableRow *)0x0) {
          iVar8 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum;
          piVar1 = &(this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->SpawnedNPC_ID_ListByMainCompleteQuest).
                                      AllocatorInstance,piVar1);
          }
          (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = iVar8 + 1;
          *(int *)((this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data +
                  (longlong)iVar8 * 4) = pFVar14->ID_CompleteNpc;
          iVar8 = pFVar14->ID_CompleteNpc;
LAB_14c07a77d:
          MakeContext<FDS_ViewModelContext_WorldMapQuestIconInfo>(&local_798);
          pFVar6 = local_798.Object;
          if (local_798.Object == (FDS_ViewModelContext_WorldMapQuestIconInfo *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_798.SharedReferenceCount.ReferenceController);
            return;
          }
          *(undefined4 *)&(local_798.Object)->_padding_ = 0x1b2;
          (local_798.Object)->_padding_ = (longlong)this_00;
          dVar5 = (this->MapStartPos).field0_0x0._s_0.Y;
          dVar2 = (param_4->field0_0x0)._s_0.X;
          dVar4 = (param_4->field0_0x0)._s_0.Y;
          ((local_798.Object)->MapStartPos).field0_0x0._s_0.X =
               (this->MapStartPos).field0_0x0._s_0.X;
          ((local_798.Object)->MapStartPos).field0_0x0._s_0.Y = dVar5;
          (local_798.Object)->_padding_ = (longlong)dVar2;
          (local_798.Object)->_padding_ = (longlong)dVar4;
          dVar4 = (param_4->field0_0x0)._s_0.Z;
          if ((local_798.Object == (FDS_ViewModelContext_WorldMapQuestIconInfo *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(float *)&pFVar6->_padding_ = (float)dVar4;
          dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          pFVar6->_padding_ = (longlong)(this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          pFVar6->_padding_ = (longlong)dVar4;
          *(float *)&pFVar6->_padding_ = this->OrthoWidth;
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureSize;
          *(bool *)&pFVar6->_padding_ = pFVar12->isShownHeight;
          *(int *)&pFVar6->_padding_ = pFVar12->MapIndexGroupID;
          *(uint *)((longlong)&pFVar6->_padding_ + 4) = (uint)pFVar12->ID;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_,
                     &pFVar12->WorldMapZoomStep);
          local_788 = pUVar10;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar6->_padding_,(FObjectPtr)&local_788);
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureScale;
          local_758.Object = (FDS_ViewModelContext *)local_798.Object;
          local_758.SharedReferenceCount.ReferenceController =
               local_798.SharedReferenceCount.ReferenceController;
          *(int *)((longlong)&pFVar6->_padding_ + 4) = -pFVar12->MapIndexPriority;
          *(int *)&pFVar6->_padding_ = this->MapType;
          *(int *)&pFVar6->_padding_ = pFVar12->MapIndexIcon;
          pFVar6->QuestID = param_2;
          pFVar6->QuestObjectiveID = param_3;
          *(int *)&pFVar6->_padding_ = iVar8;
          if (local_798.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          local_7a0.ObjectIndex = 0;
          local_7a0.ObjectSerialNumber = 0;
          local_780 = pUVar10;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          FWeakObjectPtr::operator=(&local_7a0,(FObjectPtr)&local_780);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_7a0,&local_758,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_798.SharedReferenceCount.ReferenceController);
          return;
        }
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar11 = UDS_LogManager::GetInst();
        local_3c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3c8,"UDS_W_MapSpawnUnscaled::CreateMainQuestProgressStateIcon",0x38,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_3c8.Ptr,0x6e1,L"questMainTableRow is nullptr.");
        pvVar16 = (void *)local_3c8._padding_;
      }
      else {
        pFVar15 = FDS_QuestLocalTableRow::Get((longlong)param_2,true);
        if (pFVar15 != (FDS_QuestLocalTableRow *)0x0) {
          iVar8 = (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum;
          piVar1 = &(this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->SpawnedNPC_ID_ListByLocalCompleteQuest).
                                      AllocatorInstance,piVar1);
          }
          (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = iVar8 + 1;
          *(int *)((this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance.Data +
                  (longlong)iVar8 * 4) = pFVar15->ID_CompleteNpc;
          iVar8 = pFVar15->ID_CompleteNpc;
          goto LAB_14c07a77d;
        }
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar11 = UDS_LogManager::GetInst();
        local_2a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_2a8,"UDS_W_MapSpawnUnscaled::CreateMainQuestProgressStateIcon",0x38,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_2a8.Ptr,0x6ed,L"questLocalTableRow is nullptr.");
        pvVar16 = (void *)local_2a8._padding_;
      }
    }
    else {
      pFVar13 = FDS_QuestObjectiveTableRow::Get((longlong)param_3,true);
      if (pFVar13 != (FDS_QuestObjectiveTableRow *)0x0) {
        if (param_5) {
          iVar8 = (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum;
          piVar1 = &(this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->SpawnedNPC_ID_ListByMainProgressQuest).
                                      AllocatorInstance,piVar1);
          }
          (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = iVar8 + 1;
          *(int *)((this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance.Data +
                  (longlong)iVar8 * 4) = pFVar13->ID_ProgressNpc;
          iVar8 = pFVar13->ID_ProgressNpc;
        }
        else {
          iVar8 = (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum;
          piVar1 = &(this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&(this->SpawnedNPC_ID_ListByLocalProgressQuest).
                                      AllocatorInstance,piVar1);
          }
          (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = iVar8 + 1;
          *(int *)((this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance.Data +
                  (longlong)iVar8 * 4) = pFVar13->ID_ProgressNpc;
          iVar8 = pFVar13->ID_ProgressNpc;
        }
        goto LAB_14c07a77d;
      }
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar11 = UDS_LogManager::GetInst();
      local_4e8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4e8,"UDS_W_MapSpawnUnscaled::CreateMainQuestProgressStateIcon",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_4e8.Ptr,0x6cc,L"questObejctiveTableRow is nullptr");
      pvVar16 = (void *)local_4e8._padding_;
    }
  }
  if (pvVar16 != (void *)0x0) {
    FMemory::Free(pvVar16);
  }
  return;
}

// CreateMarker @ 14c07a9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateMarker
          (UDS_W_MapSpawnUnscaled *this,FDS_WorldMapMarkerInfo *param_1,
          FDS_MapIndexBaseTableRow *param_2,bool param_3,bool param_4)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  UDS_LogManager *pUVar10;
  FSoftObjectPath *pFVar11;
  FWeakObjectPtr FVar12;
  UCanvasPanelSlot *this_00;
  FWidgetTransform *pFVar13;
  FDS_WorldMapMarkerInfo *pFVar14;
  UDS_WorldMapEvent *pUVar15;
  undefined1 auStackY_2a8 [32];
  uint uVar16;
  wchar_t *pwVar17;
  TVector2<double>_u_0 local_268;
  FWeakObjectPtr local_258;
  TSharedPtr<FDS_ViewModelContext,1> local_248;
  FSoftObjectPath local_238;
  FDS_WorldMapMarkerInfo local_218;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1b8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_258 = (FWeakObjectPtr)UDS_WorldMapMarkerManager::GetInst();
  if (local_258 == (FWeakObjectPtr)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) goto LAB_14c07aaae;
    pUVar10 = UDS_LogManager::GetInst();
    local_1b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1b8,"UDS_W_MapSpawnUnscaled::CreateMarker",0x24,Yes);
    pwVar17 = L"worldMapMarkerMgr nullptr";
    uVar16 = 0x419;
  }
  else {
    pFVar11 = FSoftObjectPath::FSoftObjectPath(&local_238,&this->MarkerObjectPath);
    FVar12 = (FWeakObjectPtr)GetLoadedUserWidgetByFSoftObjectPath(this,pFVar11);
    if (FVar12 != (FWeakObjectPtr)0x0) {
      local_268._0_8_ = FVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar12);
      }
      FWeakObjectPtr::operator=(&(param_1->Widget).WeakPtr,(FObjectPtr)&local_268);
      iVar9 = param_2->MapIndexPriority;
      dVar3 = (double)param_2->IconSpawnSize;
      this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)FVar12);
      if (this_00 == (UCanvasPanelSlot *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          local_1b8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1b8,"UDS_W_MapSpawnUnscaled::CreateMarker",0x24,Yes);
          UDS_LogManager::PrintLog(pUVar10,1,Warning,local_1b8.Ptr,0x42f,L"canvasSlot is nullptr.");
          if ((void *)local_1b8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_1b8._padding_);
          }
        }
      }
      else {
        local_268._8_4_ = SUB84(dVar3,0);
        local_268._s_0.X = dVar3;
        local_268._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_268._s_0);
        local_268._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_268._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_268._s_0);
        UCanvasPanelSlot::SetZOrder(this_00,-iVar9);
        dVar5 = (double)this->TextureScale;
        dVar3 = __real_3ff0000000000000 / (double)this->OrthoWidth;
        dVar4 = ((this->ReferenceGlobalPosition).field0_0x0._s_0.X -
                (this->MapStartPos).field0_0x0._s_0.X) * dVar3 * (double)this->TextureSize;
        dVar6 = ((this->ReferenceGlobalPosition).field0_0x0._s_0.Y -
                (this->MapStartPos).field0_0x0._s_0.Y) * dVar3 * (double)this->TextureSize;
        dVar3 = (param_1->MakerVector2D).field0_0x0._s_0.X;
        dVar1 = (param_1->MakerVector2D).field0_0x0._s_0.Y;
        pFVar13 = UWidget::GetRenderTransform((UWidget *)this->PanelMain);
        local_268._s_0.X =
             ((dVar5 * (this->CurMapPositionOffset).field0_0x0._s_0.X + dVar4) -
             (dVar4 - dVar3) * dVar5) +
             ((this->FirstPanelTranslation).field0_0x0._s_0.X -
             (pFVar13->Translation).field0_0x0._s_0.X);
        local_268._s_0.Y =
             ((this->FirstPanelTranslation).field0_0x0._s_0.Y -
             (pFVar13->Translation).field0_0x0._s_0.Y) +
             ((dVar5 * (this->CurMapPositionOffset).field0_0x0._s_0.Y + dVar6) -
             (dVar6 - dVar1) * dVar5);
        UCanvasPanelSlot::SetPosition(this_00,(TVector2<double> *)&local_268._s_0);
        MakeContext<FDS_ViewModelContext_WorldMapMarkerInfo>
                  ((TSharedPtr<FDS_ViewModelContext_WorldMapMarkerInfo,1> *)&local_268._s_0);
        uVar8 = local_268._s_0.Y;
        uVar7 = local_268._s_0.X;
        if ((FWeakObjectPtr)local_268._s_0.X != (FWeakObjectPtr)0x0) {
          *(undefined4 *)((longlong)local_268._s_0.X + 0x18) = 0x1a2;
          pFVar14 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&local_218,param_1);
          iVar9 = UDS_WorldMapMarkerManager::GetMarkerIndex
                            ((UDS_WorldMapMarkerManager *)local_258,pFVar14);
          *(int *)(uVar7 + 0xf0) = iVar9;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(uVar7 + 0x60),
                     &param_2->WorldMapZoomStep);
          pFVar13 = UWidget::GetRenderTransform((UWidget *)this->PanelMain);
          dVar3 = (pFVar13->Translation).field0_0x0._s_0.Y;
          *(double *)(uVar7 + 0x110) = (pFVar13->Translation).field0_0x0._s_0.X;
          *(double *)(uVar7 + 0x118) = dVar3;
          *(int *)(uVar7 + 0x30) = param_2->MapIndexGroupID;
          *(uint *)(uVar7 + 0x34) = (uint)param_2->ID;
          *(int *)(uVar7 + 0xf4) = param_2->MapIndexIcon;
          dVar3 = (this->FirstPanelTranslation).field0_0x0._s_0.Y;
          *(double *)(uVar7 + 0x100) = (this->FirstPanelTranslation).field0_0x0._s_0.X;
          *(double *)(uVar7 + 0x108) = dVar3;
          dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          *(double *)(uVar7 + 0x80) = (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          *(double *)(uVar7 + 0x88) = dVar3;
          FDS_WorldMapMarkerInfo::operator=((FDS_WorldMapMarkerInfo *)(uVar7 + 0x90),param_1);
          dVar3 = (param_1->MarkerGlobalPos).field0_0x0._s_0.Y;
          *(double *)(uVar7 + 0x20) = (param_1->MarkerGlobalPos).field0_0x0._s_0.X;
          *(double *)(uVar7 + 0x28) = dVar3;
          *(bool *)(uVar7 + 0xf8) = param_4;
          *(UCanvasPanelSlot **)(uVar7 + 0x58) = this_00;
          dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
          *(double *)(uVar7 + 0x70) = (this->MapStartPos).field0_0x0._s_0.X;
          *(double *)(uVar7 + 0x78) = dVar3;
          *(float *)(uVar7 + 0x40) = this->OrthoWidth;
          *(float *)(uVar7 + 0x44) = this->TextureSize;
          *(float *)(uVar7 + 0x4c) = this->TextureScale;
          local_248.Object = (FDS_ViewModelContext *)local_268._s_0.X;
          local_248.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)local_268._s_0.Y;
          *(int *)(uVar7 + 0x3c) = -param_2->MapIndexPriority;
          *(int *)(uVar7 + 0x38) = this->MapType;
          *(bool *)(uVar7 + 0xf9) = param_3;
          if ((TReferenceControllerBase<1> *)uVar8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)(uVar8 + 8) = (atomic<int>)((int)*(atomic<int> *)(uVar8 + 8) + 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar12);
          }
          local_268._s_0.X = 0.0;
          local_258 = FVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)FVar12);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_268._s_0,(FObjectPtr)&local_258);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_268._s_0.X,&local_248,
                     false);
        }
        if ((param_3) &&
           (pUVar15 = UDS_WorldMapEvent::GetEvent(), pUVar15 != (UDS_WorldMapEvent *)0x0)) {
          FDS_EventDelegate<>::Broadcast(&pUVar15->RefrashMarkerListUIDelegate);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)uVar8);
      }
      pFVar2 = (param_1->Memo).Data.AllocatorInstance.Data;
      if (pFVar2 == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(pFVar2);
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) goto LAB_14c07aaae;
    pUVar10 = UDS_LogManager::GetInst();
    local_1b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1b8,"UDS_W_MapSpawnUnscaled::CreateMarker",0x24,Yes);
    pwVar17 = L"loadedContentsWidget is nullptr.";
    uVar16 = 0x420;
  }
  UDS_LogManager::PrintLog(pUVar10,1,Warning,local_1b8.Ptr,uVar16,pwVar17);
  if ((void *)local_1b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
LAB_14c07aaae:
  pFVar2 = (param_1->Memo).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// CreatePartyMemberIcon @ 14c07af90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreatePartyMemberIcon
          (UDS_W_MapSpawnUnscaled *this,FDS_PartyMemberInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  FDS_ViewModelContext_WorldMapPartyIconInfo *pFVar5;
  bool bVar6;
  FSoftObjectPath *pFVar7;
  UDS_UserWidget *pUVar8;
  UDS_LogManager *pUVar9;
  FDS_PartyRepo *pFVar10;
  long64 lVar11;
  FDS_MapIndexBaseTableRow *pFVar12;
  UCanvasPanelSlot *this_00;
  int iVar13;
  void *pvVar14;
  undefined1 auStackY_578 [32];
  FWeakObjectPtr local_548 [2];
  TSharedPtr<FDS_ViewModelContext_WorldMapPartyIconInfo,1> local_538;
  UDS_UserWidget *local_528;
  UDS_UserWidget *local_520;
  TVector2<double>_u_0 local_518;
  TVector2<double>_u_0 local_508;
  TSharedPtr<FDS_ViewModelContext,1> local_4f8;
  FSoftObjectPath local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_578;
  pFVar7 = FSoftObjectPath::FSoftObjectPath(&local_4e8,&this->IconBtnObjectPath);
  pUVar8 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar7);
  if (pUVar8 == (UDS_UserWidget *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c07b05f;
    pUVar9 = UDS_LogManager::GetInst();
    local_4c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4c8,"UDS_W_MapSpawnUnscaled::CreatePartyMemberIcon",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_4c8.Ptr,0x4cc,L"loadedContentsWidget is nullptr.");
    pvVar14 = (void *)local_4c8._padding_;
  }
  else {
    pFVar10 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar6 = FDS_PartyInfo::IsValid(&pFVar10->PartyInfo);
    if (bVar6) {
      pFVar10 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      lVar11 = FDS_PartyInfo::GetPartyLeaderUID(&pFVar10->PartyInfo);
      if ((param_1->PlayerUID == lVar11) ||
         (iVar13 = param_1->SlotIndex + 4, param_1->SlotIndex == 3)) {
        iVar13 = 3;
      }
      pFVar12 = FDS_MapIndexBaseTableRow::Get((longlong)iVar13,true);
      if (pFVar12 == (FDS_MapIndexBaseTableRow *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c07b4d1;
        pUVar9 = UDS_LogManager::GetInst();
        local_288._padding_ = (longlong)pFVar12;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_W_MapSpawnUnscaled::CreatePartyMemberIcon",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_288.Ptr,0x4dc,
                   L"partyMemeberMapindexBaseTableRow is nullptr.");
        pFVar12 = (FDS_MapIndexBaseTableRow *)local_288._padding_;
      }
      else {
        if ((((pFVar12->isShownInRadar == false) && ((char)this->MapType == '\0')) ||
            ((pFVar12->isShownInWorldMap == false && ((char)this->MapType == '\x01')))) ||
           ((this->IsIndoor == true && (pFVar12->isShownInIndoorMap == false)))) goto LAB_14c07b4d1;
        iVar13 = pFVar12->MapIndexPriority;
        dVar3 = (double)pFVar12->IconSpawnSize;
        this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar8);
        if (this_00 != (UCanvasPanelSlot *)0x0) {
          local_518._8_4_ = SUB84(dVar3,0);
          local_518._s_0.X = dVar3;
          local_518._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_518._s_0);
          local_508._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
          local_508._s_0.Y = _UNK_150689678;
          UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_508._s_0);
          UCanvasPanelSlot::SetZOrder(this_00,-iVar13);
          MakeContext<FDS_ViewModelContext_WorldMapPartyIconInfo>(&local_538);
          pFVar5 = local_538.Object;
          if (local_538.Object == (FDS_ViewModelContext_WorldMapPartyIconInfo *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_538.SharedReferenceCount.ReferenceController);
          }
          else {
            *(undefined4 *)&(local_538.Object)->_padding_ = 0x1a9;
            (local_538.Object)->_padding_ = (longlong)this_00;
            dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
            (local_538.Object)->_padding_ = (longlong)(this->MapStartPos).field0_0x0._s_0.X;
            (local_538.Object)->_padding_ = (longlong)dVar3;
            dVar3 = (param_1->Position).field0_0x0._s_0.Y;
            (local_538.Object)->_padding_ = (longlong)(param_1->Position).field0_0x0._s_0.X;
            (local_538.Object)->_padding_ = (longlong)dVar3;
            dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
            dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
            if ((local_538.Object == (FDS_ViewModelContext_WorldMapPartyIconInfo *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar5->_padding_ = (longlong)dVar3;
            pFVar5->_padding_ = (longlong)dVar4;
            *(uint *)((longlong)&pFVar5->_padding_ + 4) = (uint)pFVar12->ID;
            *(float *)&pFVar5->_padding_ = this->OrthoWidth;
            *(float *)((longlong)&pFVar5->_padding_ + 4) = this->TextureSize;
            *(bool *)&pFVar5->_padding_ = pFVar12->isShownHeight;
            *(float *)&pFVar5->_padding_ = (float)(param_1->Position).field0_0x0._s_0.Z;
            *(int *)&pFVar5->_padding_ = pFVar12->MapIndexGroupID;
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar5->_padding_,
                       &pFVar12->WorldMapZoomStep);
            *(int *)&pFVar5->_padding_ = pFVar12->MapIndexIcon;
            FDS_PartyMemberInfo::operator=(&pFVar5->PartyMemberInfo,param_1);
            local_528 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar5->_padding_,(FObjectPtr)&local_528);
            pFVar5->IsRaid = false;
            *(float *)((longlong)&pFVar5->_padding_ + 4) = this->TextureScale;
            *(int *)((longlong)&pFVar5->_padding_ + 4) = -pFVar12->MapIndexPriority;
            *(int *)&pFVar5->_padding_ = this->MapType;
            if (this->IsIndoor == true) {
              pFVar5->CurIslandID = 0;
              pFVar5->CurIndoorGroupID = this->CurLookIndoorGroupID;
            }
            else {
              pFVar5->CurIslandID = this->CurLookIslandID;
              pFVar5->CurIndoorGroupID = 0;
            }
            local_4f8.Object = (FDS_ViewModelContext *)local_538.Object;
            local_4f8.SharedReferenceCount.ReferenceController =
                 local_538.SharedReferenceCount.ReferenceController;
            if (local_538.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            local_548[0].ObjectIndex = 0;
            local_548[0].ObjectSerialNumber = 0;
            local_520 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            FWeakObjectPtr::operator=(local_548,(FObjectPtr)&local_520);
            DS_ViewModelTemplateUtil::BindViewModel
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_548[0],&local_4f8,false)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_538.SharedReferenceCount.ReferenceController);
          }
          goto LAB_14c07b4d1;
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c07b4d1;
        pUVar9 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_W_MapSpawnUnscaled::CreatePartyMemberIcon",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,0x4ee,L"canvasSlot is nullptr.");
        pFVar12 = (FDS_MapIndexBaseTableRow *)local_168._padding_;
      }
      if (pFVar12 != (FDS_MapIndexBaseTableRow *)0x0) {
        FMemory::Free(pFVar12);
      }
LAB_14c07b4d1:
      FDS_PartyMemberInfo::~FDS_PartyMemberInfo(param_1);
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c07b05f;
    pUVar9 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_W_MapSpawnUnscaled::CreatePartyMemberIcon",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_3a8.Ptr,0x4d2,L"GetPartyInfo IsValid false.");
    pvVar14 = (void *)local_3a8._padding_;
  }
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
LAB_14c07b05f:
  *(undefined4 *)&(param_1->Stats).field_0x48 = 0;
  pvVar14 = *(void **)&(param_1->Stats).field_0x40;
  if (pvVar14 != (void *)0x0) {
    FMemory::Free(pvVar14);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&param_1->Stats);
  pFVar1 = (param_1->Nickname).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CreatePhasingNPCIcon @ 14c07b520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreatePhasingNPCIcon
          (UDS_W_MapSpawnUnscaled *this,TVector<double> *param_1,long64 param_2,int param_3,
          FDS_NpcBaseTableRow *param_4)

{
  int iVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FDS_ViewModelContext_WorldMapIconInfo *pFVar6;
  bool bVar7;
  FSoftObjectPath *pFVar8;
  UDS_UserWidget *pUVar9;
  UDS_LogManager *pUVar10;
  FDS_MapIndexBaseTableRow *pFVar11;
  UCanvasPanelSlot *this_00;
  FDS_MapIndexBaseTableRow *pFVar12;
  undefined1 auStackY_468 [32];
  FWeakObjectPtr local_430;
  TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> local_428;
  ulong64 local_418;
  UDS_UserWidget *local_410;
  UDS_UserWidget *local_408 [2];
  TVector2<double>_u_0 local_3f8;
  TVector2<double>_u_0 local_3e8;
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  FSoftObjectPath local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  local_418 = param_2;
  pFVar8 = FSoftObjectPath::FSoftObjectPath(&local_3c8,&this->IconBtnObjectPath);
  pUVar9 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar8);
  if (pUVar9 == (UDS_UserWidget *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_W_MapSpawnUnscaled::CreatePhasingNPCIcon",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_3a8.Ptr,0x59e,L"loadedContentsWidget is nullptr.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else {
    pFVar11 = FDS_NpcBaseTableRow::MapIndexTable(param_4);
    pFVar11 = FDS_MapIndexBaseTableRow::Get((ulonglong)pFVar11->ID,true);
    if (pFVar11 == (FDS_MapIndexBaseTableRow *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_W_MapSpawnUnscaled::CreatePhasingNPCIcon",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_288.Ptr,0x5a5,
                   L"phasingActorIconmapIndexBaseTableRow is nullptr.");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else if ((((pFVar11->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
             ((pFVar11->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
            ((this->IsIndoor != true || (pFVar11->isShownInIndoorMap != false)))) {
      iVar1 = pFVar11->MapIndexPriority;
      dVar4 = (double)pFVar11->IconSpawnSize;
      this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar9);
      if (this_00 == (UCanvasPanelSlot *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::CreatePhasingNPCIcon",0x2c,Yes);
          UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0x5b7,L"canvasSlot is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        local_3f8._8_4_ = SUB84(dVar4,0);
        local_3f8._s_0.X = dVar4;
        local_3f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_3f8._s_0);
        local_3e8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_3e8._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_3e8._s_0);
        UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
        MakeContext<FDS_ViewModelContext_WorldMapIconInfo>(&local_428);
        pFVar6 = local_428.Object;
        if (local_428.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_428.SharedReferenceCount.ReferenceController);
        }
        else {
          dVar2 = (param_1->field0_0x0)._s_0.X;
          dVar4 = (param_1->field0_0x0)._s_0.Y;
          *(undefined4 *)&(local_428.Object)->_padding_ = 0x1a4;
          (local_428.Object)->_padding_ = (longlong)this_00;
          dVar5 = (this->MapStartPos).field0_0x0._s_0.Y;
          ((local_428.Object)->MapStartPos).field0_0x0._s_0.X =
               (this->MapStartPos).field0_0x0._s_0.X;
          ((local_428.Object)->MapStartPos).field0_0x0._s_0.Y = dVar5;
          (local_428.Object)->_padding_ = (longlong)dVar2;
          (local_428.Object)->_padding_ = (longlong)dVar4;
          dVar4 = (param_1->field0_0x0)._s_0.Z;
          if ((local_428.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(float *)&pFVar6->_padding_ = (float)dVar4;
          dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          (pFVar6->ReferencePosition).field0_0x0._s_0.X =
               (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          (pFVar6->ReferencePosition).field0_0x0._s_0.Y = dVar4;
          *(float *)&pFVar6->_padding_ = this->OrthoWidth;
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureSize;
          pFVar6->IconID = pFVar11->MapIndexIcon;
          pFVar6->SpawnTableID = (longlong)param_3;
          *(bool *)&pFVar6->_padding_ = pFVar11->isShownHeight;
          pFVar6->IsWandering = false;
          *(int *)&pFVar6->_padding_ = pFVar11->MapIndexGroupID;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_,
                     &pFVar11->WorldMapZoomStep);
          pFVar12 = FDS_NpcBaseTableRow::MapIndexTable(param_4);
          pFVar6->NpcBaseTableID = (uint)pFVar12->ID;
          *(uint *)((longlong)&pFVar6->_padding_ + 4) = (uint)pFVar11->ID;
          pFVar6->PhasingSpawnEntityID = local_418;
          local_410 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&(pFVar6->Widget).WeakPtr,(FObjectPtr)&local_410);
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureScale;
          local_3d8.Object = (FDS_ViewModelContext *)local_428.Object;
          local_3d8.SharedReferenceCount.ReferenceController =
               local_428.SharedReferenceCount.ReferenceController;
          *(int *)((longlong)&pFVar6->_padding_ + 4) = -pFVar11->MapIndexPriority;
          *(int *)&pFVar6->_padding_ = this->MapType;
          if (local_428.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_428.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          local_430.ObjectIndex = 0;
          local_430.ObjectSerialNumber = 0;
          local_408[0] = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&local_430,(FObjectPtr)local_408);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_430,&local_3d8,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_428.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// CreateQuestAcceptIcon @ 14c07ba00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateQuestAcceptIcon
          (UDS_W_MapSpawnUnscaled *this,int param_1,int param_2,TVector<double> *param_3)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FDS_ViewModelContext_WorldMapQuestIconInfo *pFVar6;
  bool bVar7;
  int iVar8;
  FSoftObjectPath *pFVar9;
  UDS_UserWidget *pUVar10;
  UDS_LogManager *pUVar11;
  FDS_MapIndexBaseTableRow *pFVar12;
  UCanvasPanelSlot *this_00;
  undefined1 auStackY_458 [32];
  FWeakObjectPtr local_420;
  TSharedPtr<FDS_ViewModelContext_WorldMapQuestIconInfo,1> local_418;
  UDS_UserWidget *local_408;
  UDS_UserWidget *local_400;
  TVector2<double>_u_0 local_3f8;
  TVector2<double>_u_0 local_3e8;
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  FSoftObjectPath local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  pFVar9 = FSoftObjectPath::FSoftObjectPath(&local_3c8,&this->QuestIconObjectPath);
  pUVar10 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar9);
  if (pUVar10 == (UDS_UserWidget *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_W_MapSpawnUnscaled::CreateQuestAcceptIcon",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_3a8.Ptr,0x717,L"loadedContentsWidget is nullptr.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else {
    pFVar12 = FDS_MapIndexBaseTableRow::Get(0x50,true);
    if (pFVar12 == (FDS_MapIndexBaseTableRow *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      if (pUVar11 != (UDS_LogManager *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_W_MapSpawnUnscaled::CreateQuestAcceptIcon",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar11,1,Warning,local_288.Ptr,0x71e,L"mapIndexBaseTableRow is nullptr.");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else if ((((pFVar12->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
             ((pFVar12->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
            ((this->IsIndoor != true || (pFVar12->isShownInIndoorMap != false)))) {
      iVar8 = pFVar12->MapIndexPriority;
      dVar4 = (double)pFVar12->IconSpawnSize;
      this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar10);
      if (this_00 == (UCanvasPanelSlot *)0x0) {
        pUVar11 = UDS_LogManager::GetInst();
        if (pUVar11 != (UDS_LogManager *)0x0) {
          pUVar11 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::CreateQuestAcceptIcon",0x2d,Yes);
          UDS_LogManager::PrintLog(pUVar11,1,Warning,local_168.Ptr,0x730,L"canvasSlot is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        local_3f8._8_4_ = SUB84(dVar4,0);
        local_3f8._s_0.X = dVar4;
        local_3f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_3f8._s_0);
        local_3e8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_3e8._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_3e8._s_0);
        UCanvasPanelSlot::SetZOrder(this_00,-iVar8);
        iVar8 = (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum;
        piVar1 = &(this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->SpawnedNpc_ID_ListByAcceptableQuest).AllocatorInstance,
                             piVar1);
        }
        (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum = iVar8 + 1;
        *(int *)((this->SpawnedNpc_ID_ListByAcceptableQuest).AllocatorInstance.Data +
                (longlong)iVar8 * 4) = param_2;
        MakeContext<FDS_ViewModelContext_WorldMapQuestIconInfo>(&local_418);
        pFVar6 = local_418.Object;
        if (local_418.Object == (FDS_ViewModelContext_WorldMapQuestIconInfo *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_418.SharedReferenceCount.ReferenceController);
        }
        else {
          dVar2 = (param_3->field0_0x0)._s_0.X;
          dVar4 = (param_3->field0_0x0)._s_0.Y;
          *(undefined4 *)&(local_418.Object)->_padding_ = 0x1b2;
          (local_418.Object)->_padding_ = (longlong)this_00;
          dVar5 = (this->MapStartPos).field0_0x0._s_0.Y;
          ((local_418.Object)->MapStartPos).field0_0x0._s_0.X =
               (this->MapStartPos).field0_0x0._s_0.X;
          ((local_418.Object)->MapStartPos).field0_0x0._s_0.Y = dVar5;
          (local_418.Object)->_padding_ = (longlong)dVar2;
          (local_418.Object)->_padding_ = (longlong)dVar4;
          dVar4 = (param_3->field0_0x0)._s_0.Z;
          if ((local_418.Object == (FDS_ViewModelContext_WorldMapQuestIconInfo *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(float *)&pFVar6->_padding_ = (float)dVar4;
          dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          pFVar6->_padding_ = (longlong)(this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          pFVar6->_padding_ = (longlong)dVar4;
          *(float *)&pFVar6->_padding_ = this->OrthoWidth;
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureSize;
          *(bool *)&pFVar6->_padding_ = pFVar12->isShownHeight;
          *(int *)&pFVar6->_padding_ = pFVar12->MapIndexGroupID;
          *(uint *)((longlong)&pFVar6->_padding_ + 4) = (uint)pFVar12->ID;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_,
                     &pFVar12->WorldMapZoomStep);
          local_408 = pUVar10;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar6->_padding_,(FObjectPtr)&local_408);
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureScale;
          local_3d8.Object = (FDS_ViewModelContext *)local_418.Object;
          local_3d8.SharedReferenceCount.ReferenceController =
               local_418.SharedReferenceCount.ReferenceController;
          *(int *)((longlong)&pFVar6->_padding_ + 4) = -pFVar12->MapIndexPriority;
          *(int *)&pFVar6->_padding_ = this->MapType;
          *(int *)&pFVar6->_padding_ = pFVar12->MapIndexIcon;
          pFVar6->QuestID = param_1;
          *(int *)&pFVar6->_padding_ = param_2;
          if (local_418.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          local_420.ObjectIndex = 0;
          local_420.ObjectSerialNumber = 0;
          local_400 = pUVar10;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          FWeakObjectPtr::operator=(&local_420,(FObjectPtr)&local_400);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_420,&local_3d8,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_418.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// CreateQuestBoardIcon @ 14c07bee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateQuestBoardIcon
          (UDS_W_MapSpawnUnscaled *this,long64 param_1,TVector<double> *param_2)

{
  int iVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  FDS_ViewModelContext_WorldMapIconInfo *pFVar6;
  bool bVar7;
  FSoftObjectPath *pFVar8;
  UDS_UserWidget *pUVar9;
  UDS_LogManager *pUVar10;
  FDS_MapIndexBaseTableRow *pFVar11;
  UCanvasPanelSlot *this_00;
  undefined1 auStackY_458 [32];
  FWeakObjectPtr local_428 [2];
  TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> local_418;
  UDS_UserWidget *local_408;
  UDS_UserWidget *local_400;
  TVector2<double>_u_0 local_3f8;
  TVector2<double>_u_0 local_3e8;
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  FSoftObjectPath local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_458;
  pFVar8 = FSoftObjectPath::FSoftObjectPath(&local_3c8,&this->IconBtnObjectPath);
  pUVar9 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar8);
  if (pUVar9 == (UDS_UserWidget *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_W_MapSpawnUnscaled::CreateQuestBoardIcon",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_3a8.Ptr,0x756,L"loadedContentsWidget is nullptr.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  else {
    pFVar11 = FDS_MapIndexBaseTableRow::Get(0x57,true);
    if (pFVar11 == (FDS_MapIndexBaseTableRow *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_W_MapSpawnUnscaled::CreateQuestBoardIcon",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_288.Ptr,0x75d,L"mapIndexBaseTableRow is nullptr.");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
    else if ((((pFVar11->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
             ((pFVar11->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
            ((this->IsIndoor != true || (pFVar11->isShownInIndoorMap != false)))) {
      iVar1 = pFVar11->MapIndexPriority;
      dVar4 = (double)pFVar11->IconSpawnSize;
      this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar9);
      if (this_00 == (UCanvasPanelSlot *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 != (UDS_LogManager *)0x0) {
          pUVar10 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::CreateQuestBoardIcon",0x2c,Yes);
          UDS_LogManager::PrintLog(pUVar10,1,Warning,local_168.Ptr,0x76f,L"canvasSlot is nullptr.");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        local_3f8._8_4_ = SUB84(dVar4,0);
        local_3f8._s_0.X = dVar4;
        local_3f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_3f8._s_0);
        local_3e8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_3e8._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_3e8._s_0);
        UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
        MakeContext<FDS_ViewModelContext_WorldMapIconInfo>(&local_418);
        pFVar6 = local_418.Object;
        if (local_418.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_418.SharedReferenceCount.ReferenceController);
        }
        else {
          dVar2 = (param_2->field0_0x0)._s_0.X;
          dVar4 = (param_2->field0_0x0)._s_0.Y;
          *(undefined4 *)&(local_418.Object)->_padding_ = 0x1a4;
          (local_418.Object)->_padding_ = (longlong)this_00;
          dVar5 = (this->MapStartPos).field0_0x0._s_0.Y;
          ((local_418.Object)->MapStartPos).field0_0x0._s_0.X =
               (this->MapStartPos).field0_0x0._s_0.X;
          ((local_418.Object)->MapStartPos).field0_0x0._s_0.Y = dVar5;
          (local_418.Object)->_padding_ = (longlong)dVar2;
          (local_418.Object)->_padding_ = (longlong)dVar4;
          dVar4 = (param_2->field0_0x0)._s_0.Z;
          if ((local_418.Object == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(float *)&pFVar6->_padding_ = (float)dVar4;
          dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          (pFVar6->ReferencePosition).field0_0x0._s_0.X =
               (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          (pFVar6->ReferencePosition).field0_0x0._s_0.Y = dVar4;
          *(float *)&pFVar6->_padding_ = this->OrthoWidth;
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureSize;
          pFVar6->IconID = pFVar11->MapIndexIcon;
          *(bool *)&pFVar6->_padding_ = pFVar11->isShownHeight;
          pFVar6->IsWandering = false;
          *(int *)&pFVar6->_padding_ = pFVar11->MapIndexGroupID;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar6->_padding_,
                     &pFVar11->WorldMapZoomStep);
          *(uint *)((longlong)&pFVar6->_padding_ + 4) = (uint)pFVar11->ID;
          local_408 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&(pFVar6->Widget).WeakPtr,(FObjectPtr)&local_408);
          *(float *)((longlong)&pFVar6->_padding_ + 4) = this->TextureScale;
          local_3d8.Object = (FDS_ViewModelContext *)local_418.Object;
          local_3d8.SharedReferenceCount.ReferenceController =
               local_418.SharedReferenceCount.ReferenceController;
          *(int *)((longlong)&pFVar6->_padding_ + 4) = -pFVar11->MapIndexPriority;
          *(int *)&pFVar6->_padding_ = this->MapType;
          pFVar6->QuestBoardID = param_1;
          if (local_418.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_418.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          local_428[0].ObjectIndex = 0;
          local_428[0].ObjectSerialNumber = 0;
          local_400 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(local_428,(FObjectPtr)&local_400);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_428[0],&local_3d8,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_418.SharedReferenceCount.ReferenceController);
        }
      }
    }
  }
  return;
}

// CreateRaidPartyMemberIcon @ 14c07c380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateRaidPartyMemberIcon
          (UDS_W_MapSpawnUnscaled *this,FDS_RaidPartyMemberInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  FDS_ViewModelContext_WorldMapPartyIconInfo *pFVar5;
  bool bVar6;
  FSoftObjectPath *pFVar7;
  UDS_UserWidget *pUVar8;
  UDS_LogManager *pUVar9;
  FDS_RaidPartyRepo *pFVar10;
  FDS_MapIndexBaseTableRow *pFVar11;
  UCanvasPanelSlot *this_00;
  uint uVar12;
  int iVar13;
  undefined1 auStackY_578 [32];
  FWeakObjectPtr local_548 [2];
  TSharedPtr<FDS_ViewModelContext_WorldMapPartyIconInfo,1> local_538;
  UDS_UserWidget *local_528;
  UDS_UserWidget *local_520;
  TVector2<double>_u_0 local_518;
  TVector2<double>_u_0 local_508;
  TSharedPtr<FDS_ViewModelContext,1> local_4f8;
  FSoftObjectPath local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_578;
  pFVar7 = FSoftObjectPath::FSoftObjectPath(&local_4e8,&this->IconBtnObjectPath);
  pUVar8 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar7);
  if (pUVar8 == (UDS_UserWidget *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c07c450;
    pUVar9 = UDS_LogManager::GetInst();
    local_4c8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4c8,"UDS_W_MapSpawnUnscaled::CreateRaidPartyMemberIcon",0x31,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_4c8.Ptr,0x51b,L"loadedContentsWidget is nullptr.");
    pFVar11 = (FDS_MapIndexBaseTableRow *)local_4c8._padding_;
  }
  else {
    pFVar10 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar6 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar10);
    if (bVar6) {
      pFVar10 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      uVar12 = 0x30;
      if (param_1->PlayerUID != (pFVar10->RaidPartyInfo).LeaderUID) {
        uVar12 = param_1->SlotIndex;
      }
      iVar13 = 0x30;
      if (uVar12 != 0x30) {
        iVar13 = uVar12 + 0x30;
      }
      pFVar11 = FDS_MapIndexBaseTableRow::Get((longlong)iVar13,true);
      if (pFVar11 != (FDS_MapIndexBaseTableRow *)0x0) {
        if ((((pFVar11->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
            ((pFVar11->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
           ((this->IsIndoor != true || (pFVar11->isShownInIndoorMap != false)))) {
          iVar13 = pFVar11->MapIndexPriority;
          dVar3 = (double)pFVar11->IconSpawnSize;
          this_00 = UCanvasPanel::AddChildToCanvas
                              ((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar8);
          if (this_00 == (UCanvasPanelSlot *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            if (pUVar9 != (UDS_LogManager *)0x0) {
              pUVar9 = UDS_LogManager::GetInst();
              local_168._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_168,"UDS_W_MapSpawnUnscaled::CreateRaidPartyMemberIcon",0x31,Yes);
              UDS_LogManager::PrintLog
                        (pUVar9,1,Warning,local_168.Ptr,0x53d,L"canvasSlot is nullptr.");
              if ((void *)local_168._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_168._padding_);
              }
            }
          }
          else {
            local_518._8_4_ = SUB84(dVar3,0);
            local_518._s_0.X = dVar3;
            local_518._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_518._s_0);
            local_508._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
            local_508._s_0.Y = _UNK_150689678;
            UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_508._s_0);
            UCanvasPanelSlot::SetZOrder(this_00,-iVar13);
            MakeContext<FDS_ViewModelContext_WorldMapPartyIconInfo>(&local_538);
            pFVar5 = local_538.Object;
            if (local_538.Object == (FDS_ViewModelContext_WorldMapPartyIconInfo *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_538.SharedReferenceCount.ReferenceController);
            }
            else {
              *(undefined4 *)&(local_538.Object)->_padding_ = 0x1a9;
              (local_538.Object)->_padding_ = (longlong)this_00;
              dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
              (local_538.Object)->_padding_ = (longlong)(this->MapStartPos).field0_0x0._s_0.X;
              (local_538.Object)->_padding_ = (longlong)dVar3;
              dVar3 = (param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Y;
              (local_538.Object)->_padding_ =
                   (longlong)(param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.X;
              (local_538.Object)->_padding_ = (longlong)dVar3;
              dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
              dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
              if ((local_538.Object == (FDS_ViewModelContext_WorldMapPartyIconInfo *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar5->_padding_ = (longlong)dVar3;
              pFVar5->_padding_ = (longlong)dVar4;
              *(uint *)((longlong)&pFVar5->_padding_ + 4) = (uint)pFVar11->ID;
              *(float *)&pFVar5->_padding_ = this->OrthoWidth;
              *(float *)((longlong)&pFVar5->_padding_ + 4) = this->TextureSize;
              *(bool *)&pFVar5->_padding_ = pFVar11->isShownHeight;
              *(float *)&pFVar5->_padding_ =
                   (float)(param_1->RaidPartyMemberSyncData).Position.field0_0x0._s_0.Z;
              *(int *)&pFVar5->_padding_ = pFVar11->MapIndexGroupID;
              TArray<int,TSizedDefaultAllocator<32>_>::operator=
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar5->_padding_,
                         &pFVar11->WorldMapZoomStep);
              *(int *)&pFVar5->_padding_ = pFVar11->MapIndexIcon;
              FDS_RaidPartyMemberInfo::operator=(&pFVar5->RaidPartyMemberInfo,param_1);
              local_528 = pUVar8;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar8);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar5->_padding_,(FObjectPtr)&local_528)
              ;
              *(float *)((longlong)&pFVar5->_padding_ + 4) = this->TextureScale;
              pFVar5->IsRaid = true;
              *(int *)((longlong)&pFVar5->_padding_ + 4) = -pFVar11->MapIndexPriority;
              *(int *)&pFVar5->_padding_ = this->MapType;
              if (this->IsIndoor == true) {
                pFVar5->CurIslandID = 0;
                pFVar5->CurIndoorGroupID = this->CurLookIndoorGroupID;
              }
              else {
                pFVar5->CurIslandID = this->CurLookIslandID;
                pFVar5->CurIndoorGroupID = 0;
              }
              local_4f8.Object = (FDS_ViewModelContext *)local_538.Object;
              local_4f8.SharedReferenceCount.ReferenceController =
                   local_538.SharedReferenceCount.ReferenceController;
              if (local_538.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_538.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar8);
              }
              local_548[0].ObjectIndex = 0;
              local_548[0].ObjectSerialNumber = 0;
              local_520 = pUVar8;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar8);
              }
              FWeakObjectPtr::operator=(local_548,(FObjectPtr)&local_520);
              DS_ViewModelTemplateUtil::BindViewModel
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_548[0],&local_4f8,
                         false);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_538.SharedReferenceCount.ReferenceController);
            }
          }
        }
        FDS_RaidPartyMemberInfo::~FDS_RaidPartyMemberInfo(param_1);
        return;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c07c450;
      pUVar9 = UDS_LogManager::GetInst();
      local_288._padding_ = (longlong)pFVar11;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_W_MapSpawnUnscaled::CreateRaidPartyMemberIcon",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_288.Ptr,0x52b,
                 L"partyMemeberMapindexBaseTableRow is nullptr.");
      pFVar11 = (FDS_MapIndexBaseTableRow *)local_288._padding_;
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) goto LAB_14c07c450;
      pUVar9 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_W_MapSpawnUnscaled::CreateRaidPartyMemberIcon",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_3a8.Ptr,0x521,L"IsValidRaidPartyInfo false.");
      pFVar11 = (FDS_MapIndexBaseTableRow *)local_3a8._padding_;
    }
  }
  if (pFVar11 != (FDS_MapIndexBaseTableRow *)0x0) {
    FMemory::Free(pFVar11);
  }
LAB_14c07c450:
  FDS_RaidPartyMemberSyncData::~FDS_RaidPartyMemberSyncData(&param_1->RaidPartyMemberSyncData);
  pFVar1 = (param_1->NickName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// CreateTextOnlyBtn @ 14c07c900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateTextOnlyBtn
          (UDS_W_MapSpawnUnscaled *this,FDS_MapIndexSpawnTableRow *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  FDS_MapIndexSpawnTableRow *this_00;
  bool bVar4;
  FDS_MapIndexBaseTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  FSoftObjectPath *pFVar7;
  UDS_UserWidget *pUVar8;
  UCanvasPanelSlot *this_01;
  FDS_ViewModelContext_WorldMapIconInfo *this_02;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_03;
  FDS_StringWorldTableRow *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 auStackY_4b8 [32];
  FWeakObjectPtr local_488;
  FDS_MapIndexSpawnTableRow *local_480;
  UDS_UserWidget *local_478;
  TSharedPtr<FDS_ViewModelContext,1> local_470;
  FDS_Text local_458;
  TVector2<double>_u_0 local_408;
  TSharedPtr<FDS_ViewModelContext,1> local_3f8;
  TVector2<double>_u_0 local_3e8;
  FSoftObjectPath local_3d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_480 = param_1;
  pFVar5 = FDS_MapIndexBaseTableRow::Get((ulonglong)param_1->MapIndex,true);
  if (pFVar5 == (FDS_MapIndexBaseTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_3b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3b8,"UDS_W_MapSpawnUnscaled::CreateTextOnlyBtn",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_3b8.Ptr,0xcdc,L"mapIndexBaseTable nullptr");
      if ((void *)local_3b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3b8._padding_);
      }
    }
  }
  else if ((((pFVar5->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
           ((pFVar5->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
          ((this->IsIndoor != true || (pFVar5->isShownInIndoorMap != false)))) {
    pFVar7 = FSoftObjectPath::FSoftObjectPath(&local_3d8,&this->TextOnlyObjectPath);
    pUVar8 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar7);
    if (pUVar8 == (UDS_UserWidget *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_298._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_298,"UDS_W_MapSpawnUnscaled::CreateTextOnlyBtn",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_298.Ptr,0xce8,L"loadedContentsWidget is nullptr.");
        if ((void *)local_298._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_298._padding_);
        }
      }
    }
    else {
      iVar1 = pFVar5->MapIndexPriority;
      dVar3 = (double)pFVar5->IconSpawnSize;
      this_01 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar8);
      if (this_01 == (UCanvasPanelSlot *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_178._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_178,"UDS_W_MapSpawnUnscaled::CreateTextOnlyBtn",0x29,Yes);
          UDS_LogManager::PrintLog(pUVar6,1,Warning,local_178.Ptr,0xcf4,L"canvasSlot is nullptr.");
          if ((void *)local_178._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_178._padding_);
          }
        }
      }
      else {
        local_408._8_4_ = SUB84(dVar3,0);
        local_408._s_0.X = dVar3;
        local_408._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        UCanvasPanelSlot::SetSize(this_01,(TVector2<double> *)&local_408._s_0);
        local_3e8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
        local_3e8._s_0.Y = _UNK_150689678;
        UCanvasPanelSlot::SetAlignment(this_01,(TVector2<double> *)&local_3e8._s_0);
        UCanvasPanelSlot::SetZOrder(this_01,-iVar1);
        this_02 = ::operator_new(0x118);
        if (this_02 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
          this_02 = (FDS_ViewModelContext_WorldMapIconInfo *)0x0;
        }
        else {
          memset(this_02,0,0x118);
          FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo(this_02);
          this_02->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapTextOnlyInfo__6B_;
          *(undefined1 *)&this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          *(undefined4 *)&this_02[1]._padding_ = 0;
          *(undefined1 *)((longlong)&this_02[1]._padding_ + 4) = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
          this_02[1]._padding_ = 0;
        }
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        pTVar9 = ::operator_new(0x20);
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          pTVar9->SharedReferenceCount = (atomic<int>)0x1;
          pTVar9[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar9->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapTextOnlyInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar9->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext_WorldMapIconInfo **)&pTVar9[1].SharedReferenceCount = this_02;
          pTVar12 = pTVar9;
        }
        if ((this_02 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar10 = FDS_ViewModelContext_WorldMapTextOnlyInfo::StaticStruct();
        this_02->_padding_ = (longlong)pUVar10;
        this_03 = UDS_ViewModelContextManager::GetInst();
        if (this_03 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_470.Object = (FDS_ViewModelContext *)this_02;
          local_470.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(this_03,&local_470);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_470.SharedReferenceCount.ReferenceController);
        }
        this_00 = local_480;
        *(undefined4 *)&this_02->_padding_ = 0x1ae;
        this_02->_padding_ = (longlong)this_01;
        dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
        (this_02->MapStartPos).field0_0x0._s_0.X = (this->MapStartPos).field0_0x0._s_0.X;
        (this_02->MapStartPos).field0_0x0._s_0.Y = dVar3;
        dVar3 = (local_480->Location).field0_0x0._s_0.Y;
        this_02->_padding_ = (longlong)(local_480->Location).field0_0x0._s_0.X;
        this_02->_padding_ = (longlong)dVar3;
        dVar3 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
        (this_02->ReferencePosition).field0_0x0._s_0.X =
             (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
        (this_02->ReferencePosition).field0_0x0._s_0.Y = dVar3;
        *(float *)&this_02->_padding_ = this->OrthoWidth;
        *(float *)((longlong)&this_02->_padding_ + 4) = this->TextureSize;
        *(int *)&this_02->_padding_ = pFVar5->MapIndexGroupID;
        TArray<int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)&this_02->_padding_,
                   &pFVar5->WorldMapZoomStep);
        local_458.StringTableType = None;
        local_458.StringTableID = 0;
        local_458.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_458.StringEnumTableNameID.Number = 0;
        local_458.DateTime.Ticks = 0;
        local_458.TimeSpan.Ticks = 0;
        local_458.TimeExpressionType = None;
        local_458.IsExpression = false;
        local_458.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_458.UniqueString.Data.ArrayNum = 0;
        local_458.UniqueString.Data.ArrayMax = 0;
        local_458.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_458.FormatArgs.ArrayNum = 0;
        local_458.FormatArgs.ArrayMax = 0;
        pFVar11 = FDS_MapIndexSpawnTableRow::MapIndexNameTable(this_00);
        FDS_Text::SetTextFromStringTable(&local_458,pFVar11);
        FDS_Text::operator=((FDS_Text *)(this_02 + 1),&local_458);
        *(float *)((longlong)&this_02->_padding_ + 4) = this->TextureScale;
        *(int *)((longlong)&this_02->_padding_ + 4) = -pFVar5->MapIndexPriority;
        *(int *)&this_02->_padding_ = this->MapType;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_3f8.Object = (FDS_ViewModelContext *)this_02;
        local_3f8.SharedReferenceCount.ReferenceController = pTVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        local_488.ObjectIndex = 0;
        local_488.ObjectSerialNumber = 0;
        local_478 = pUVar8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        FWeakObjectPtr::operator=(&local_488,(FObjectPtr)&local_478);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_488,&local_3f8,false);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_458.FormatArgs.AllocatorInstance.Data,
                   local_458.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_458.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_458.FormatArgs.AllocatorInstance.Data);
        }
        if (local_458.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_458.UniqueString.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
    }
  }
  return;
}

// CreateWarpDevice @ 14c07cea0

void __thiscall
UDS_W_MapSpawnUnscaled::CreateWarpDevice
          (UDS_W_MapSpawnUnscaled *this,UCanvasPanelSlot *param_1,FDS_WarpDeviceIconData *param_2,
          FDS_MapIndexBaseTableRow *param_3,UDS_UserWidget *param_4)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined8 uVar8;
  bool bVar9;
  FDS_ViewModelContext_WorldMapIconInfo *this_00;
  TReferenceControllerBase<1> *pTVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_01;
  TReferenceControllerBase<1> *pTVar12;
  FWeakObjectPtr local_48;
  UDS_UserWidget *local_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  this_00 = ::operator_new(0xf8);
  if (this_00 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) {
    this_00 = (FDS_ViewModelContext_WorldMapIconInfo *)0x0;
  }
  else {
    memset(this_00,0,0xf8);
    FDS_ViewModelContext_WorldMapIconInfo::FDS_ViewModelContext_WorldMapIconInfo(this_00);
    this_00->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapWarpIconInfo__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this_00[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this_00[1]._padding_ = uVar8;
    this_00[1]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = ::operator_new(0x20);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapWarpIconInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext_WorldMapIconInfo **)&pTVar10[1].SharedReferenceCount = this_00;
    pTVar12 = pTVar10;
  }
  if ((this_00 == (FDS_ViewModelContext_WorldMapIconInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar11 = FDS_ViewModelContext_WorldMapWarpIconInfo::StaticStruct();
  this_00->_padding_ = (longlong)pUVar11;
  this_01 = UDS_ViewModelContextManager::GetInst();
  if (this_01 != (UDS_ViewModelContextManager *)0x0) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = (FDS_ViewModelContext *)this_00;
    local_38.SharedReferenceCount.ReferenceController = pTVar12;
    UDS_ViewModelContextManager::RegisterContext(this_01,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  dVar2 = (param_2->SpawnPosition).field0_0x0._s_0.X;
  dVar1 = (param_2->SpawnPosition).field0_0x0._s_0.Y;
  *(undefined4 *)&this_00->_padding_ = 0x1a7;
  this_00->_padding_ = (longlong)dVar2;
  this_00->_padding_ = (longlong)dVar1;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)&this_00->_padding_,
             &param_3->WorldMapZoomStep);
  dVar1 = (param_2->SpawnPosition).field0_0x0._s_0.Z;
  *(int *)&this_00->_padding_ = param_3->MapIndexGroupID;
  *(uint *)((longlong)&this_00->_padding_ + 4) = (uint)param_3->ID;
  *(bool *)&this_00->_padding_ = param_3->isShownHeight;
  *(float *)&this_00->_padding_ = (float)dVar1;
  dVar1 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
  lVar4 = param_2->StuffTableID;
  lVar5 = param_2->WarpLoactionID;
  (this_00->ReferencePosition).field0_0x0._s_0.X = (this->ReferenceGlobalPosition).field0_0x0._s_0.X
  ;
  (this_00->ReferencePosition).field0_0x0._s_0.Y = dVar1;
  lVar6 = param_2->StuffWarpDeviceID;
  dVar1 = (param_2->SpawnPosition).field0_0x0._s_0.X;
  this_00[1]._padding_ = lVar4;
  this_00[1]._padding_ = lVar5;
  dVar2 = (param_2->SpawnPosition).field0_0x0._s_0.Y;
  dVar7 = (param_2->SpawnPosition).field0_0x0._s_0.Z;
  this_00[1]._padding_ = lVar6;
  this_00[1]._padding_ = (longlong)dVar1;
  this_00[1]._padding_ = (longlong)dVar2;
  this_00[1]._padding_ = (longlong)dVar7;
  this_00->_padding_ = (longlong)param_1;
  *(float *)((longlong)&this_00->_padding_ + 4) = this->TextureSize;
  dVar1 = (this->MapStartPos).field0_0x0._s_0.Y;
  (this_00->MapStartPos).field0_0x0._s_0.X = (this->MapStartPos).field0_0x0._s_0.X;
  (this_00->MapStartPos).field0_0x0._s_0.Y = dVar1;
  *(float *)&this_00->_padding_ = this->OrthoWidth;
  *(float *)((longlong)&this_00->_padding_ + 4) = this->TextureScale;
  *(int *)((longlong)&this_00->_padding_ + 4) = -param_3->MapIndexPriority;
  *(int *)&this_00->_padding_ = this->MapType;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = (FDS_ViewModelContext *)this_00;
  local_28.SharedReferenceCount.ReferenceController = pTVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_40 = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_40);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_48,&local_28,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// CreateWorldBossIcon @ 14c07d150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::CreateWorldBossIcon(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FName *this_00;
  UStruct *pUVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  TVector2<double> TVar5;
  bool bVar6;
  FSoftObjectPath *pFVar7;
  UDS_UserWidget *pUVar8;
  UDS_LogManager *pUVar9;
  FDS_MapIndexBaseTableRow *pFVar10;
  UCanvasPanelSlot *this_01;
  FDS_ViewModelContext *_Dst;
  TReferenceControllerBase<1> *pTVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_02;
  TReferenceControllerBase<1> *pTVar13;
  undefined1 auStackY_598 [32];
  FWeakObjectPtr local_560;
  undefined8 local_558;
  FDS_WorldBossTableRow *local_550;
  UDS_UserWidget *local_548;
  UDS_UserWidget *local_540;
  TSharedPtr<FDS_ViewModelContext,1> local_538;
  TVector2<double>_u_0 local_528;
  TSharedPtr<FDS_ViewModelContext,1> local_518;
  TVector2<double>_u_0 local_508;
  FSoftObjectPath local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_598;
  pFVar7 = FSoftObjectPath::FSoftObjectPath(&local_4f8,&this->WorldBossIconObjectPath);
  pUVar8 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar7);
  if (pUVar8 == (UDS_UserWidget *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_4d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4d8,"UDS_W_MapSpawnUnscaled::CreateWorldBossIcon",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_4d8.Ptr,0x665,L"loadedContentsWidget is nullptr.");
      if ((void *)local_4d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._padding_);
      }
    }
  }
  else {
    local_550 = FDS_WorldBossTableRow::Get((longlong)param_1,true);
    if (local_550 == (FDS_WorldBossTableRow *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_3b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3b8,"UDS_W_MapSpawnUnscaled::CreateWorldBossIcon",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_3b8.Ptr,0x66c,L"worldBossTableRow is nullptr.");
        if ((void *)local_3b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3b8._padding_);
        }
      }
    }
    else {
      pFVar10 = FDS_MapIndexBaseTableRow::Get(0x29,true);
      if (pFVar10 == (FDS_MapIndexBaseTableRow *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 != (UDS_LogManager *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          local_298._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_298,"UDS_W_MapSpawnUnscaled::CreateWorldBossIcon",0x2b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar9,1,Warning,local_298.Ptr,0x673,
                     L"worldBossIconMapIndexBaseTableRow is nullptr.");
          if ((void *)local_298._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_298._padding_);
          }
        }
      }
      else if ((((pFVar10->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
               ((pFVar10->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
              ((this->IsIndoor != true || (pFVar10->isShownInIndoorMap != false)))) {
        iVar2 = pFVar10->MapIndexPriority;
        dVar4 = (double)pFVar10->IconSpawnSize;
        this_01 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar8);
        if (this_01 == (UCanvasPanelSlot *)0x0) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 != (UDS_LogManager *)0x0) {
            pUVar9 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_W_MapSpawnUnscaled::CreateWorldBossIcon",0x2b,Yes);
            UDS_LogManager::PrintLog(pUVar9,1,Warning,local_178.Ptr,0x685,L"canvasSlot is nullptr.")
            ;
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        else {
          local_528._8_4_ = SUB84(dVar4,0);
          local_528._s_0.X = dVar4;
          local_528._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          UCanvasPanelSlot::SetSize(this_01,(TVector2<double> *)&local_528._s_0);
          local_508._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
          local_508._s_0.Y = _UNK_150689678;
          UCanvasPanelSlot::SetAlignment(this_01,(TVector2<double> *)&local_508._s_0);
          UCanvasPanelSlot::SetZOrder(this_01,-iVar2);
          _Dst = ::operator_new(0xa8);
          if (_Dst == (FDS_ViewModelContext *)0x0) {
            _Dst = (FDS_ViewModelContext *)0x0;
          }
          else {
            memset(_Dst,0,0xa8);
            TVar5 = UE::Math::TVector2<double>::ZeroVector;
            this_00 = &_Dst[3].ViewModelName;
            _Dst[2]._padding_ = 0;
            ((TVector2<double>_u_0 *)(_Dst + 1))->_s_0 = (TVector2<double>_u_0_s_0)TVar5.field0_0x0;
            _Dst[2].DerivedStaticStruct = (UStruct *)0x0;
            _Dst->_padding_ = (longlong)&___7FDS_ViewModelContext_WorldMapWorldBossIconInfo__6B_;
            this_00->ComparisonIndex = 0;
            this_00->Number = 0;
            local_558 = 0;
            FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_558);
            _Dst[3].ViewModelTemplateKey = None;
            ((TVector2<double>_u_0 *)(_Dst + 4))->_s_0 =
                 (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
            TVar5 = UE::Math::TVector2<double>::ZeroVector;
            *(undefined4 *)&_Dst[5]._padding_ = 0;
            *(TVector2<double>_u_0 *)&_Dst[4].ViewModelName =
                 (TVector2<double>_u_0_s_0)TVar5.field0_0x0;
          }
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          pTVar11 = ::operator_new(0x20);
          if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
            pTVar11->SharedReferenceCount = (atomic<int>)0x1;
            pTVar11[1]._padding_ = (longlong)ViewModelContextDeleter;
            pTVar11->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_WorldMapWorldBossIconInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            pTVar11->WeakReferenceCount = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pTVar11[1].SharedReferenceCount = _Dst;
            pTVar13 = pTVar11;
          }
          if ((_Dst == (FDS_ViewModelContext *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar12 = FDS_ViewModelContext_WorldMapWorldBossIconInfo::StaticStruct();
          _Dst->DerivedStaticStruct = (UStruct *)pUVar12;
          this_02 = UDS_ViewModelContextManager::GetInst();
          if (this_02 != (UDS_ViewModelContextManager *)0x0) {
            if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_538.Object = _Dst;
            local_538.SharedReferenceCount.ReferenceController = pTVar13;
            UDS_ViewModelContextManager::RegisterContext(this_02,&local_538);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_538.SharedReferenceCount.ReferenceController);
          }
          _Dst->ViewModelTemplateKey = W_WorldMapWorldBossIcon;
          *(UCanvasPanelSlot **)&_Dst[2].ViewModelTemplateKey = this_01;
          pUVar1 = (UStruct *)(this->MapStartPos).field0_0x0._s_0.Y;
          _Dst[4]._padding_ = (longlong)(this->MapStartPos).field0_0x0._s_0.X;
          _Dst[4].DerivedStaticStruct = pUVar1;
          pUVar1 = (UStruct *)(local_550->Location).field0_0x0._s_0.Y;
          _Dst[1]._padding_ = (longlong)(local_550->Location).field0_0x0._s_0.X;
          _Dst[1].DerivedStaticStruct = pUVar1;
          *(float *)&_Dst[2].DerivedStaticStruct = (float)(local_550->Location).field0_0x0._s_0.Z;
          dVar4 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
          _Dst[4].ViewModelName = (FName)(this->ReferenceGlobalPosition).field0_0x0._s_0.X;
          *(double *)&_Dst[4].ViewModelTemplateKey = dVar4;
          *(float *)&_Dst[2]._padding_ = this->OrthoWidth;
          *(float *)((longlong)&_Dst[2]._padding_ + 4) = this->TextureSize;
          *(bool *)&_Dst[2].ViewModelName.ComparisonIndex.Value = pFVar10->isShownHeight;
          _Dst[1].ViewModelName.ComparisonIndex.Value = pFVar10->MapIndexGroupID;
          _Dst[1].ViewModelName.Number = (uint)pFVar10->ID;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(_Dst + 3),
                     &pFVar10->WorldMapZoomStep);
          local_548 = pUVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)&_Dst[3].ViewModelName,(FObjectPtr)&local_548)
          ;
          *(float *)((longlong)&_Dst[2].DerivedStaticStruct + 4) = this->TextureScale;
          *(int *)&_Dst[1].field_0x1c = -pFVar10->MapIndexPriority;
          _Dst[1].ViewModelTemplateKey = this->MapType;
          _Dst[3].ViewModelTemplateKey = pFVar10->MapIndexIcon;
          *(int *)&_Dst[5]._padding_ = param_1;
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_518.Object = _Dst;
          local_518.SharedReferenceCount.ReferenceController = pTVar13;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          local_560.ObjectIndex = 0;
          local_560.ObjectSerialNumber = 0;
          local_540 = pUVar8;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          FWeakObjectPtr::operator=(&local_560,(FObjectPtr)&local_540);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_560,&local_518,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
        }
      }
    }
  }
  return;
}

// GetLoadedUserWidgetByFSoftObjectPath @ 14c087a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_UserWidget * __thiscall
UDS_W_MapSpawnUnscaled::GetLoadedUserWidgetByFSoftObjectPath
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UDS_GameInstance *this_00;
  UDS_LogManager *pUVar5;
  FName FVar6;
  UWorld *pUVar7;
  UDS_UserWidget *this_01;
  undefined1 auStackY_188 [32];
  uint uVar8;
  wchar_t *pwVar9;
  UObject *local_158;
  undefined1 local_150 [264];
  UDS_GameInstance *local_48;
  TObjectPtr<UObject>_u_0 local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar3 = FSoftObjectPath::ResolveObject(param_1);
  if (pUVar3 == (UObject *)0x0) {
LAB_14c087a70:
    pUVar3 = FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_14c087ab1;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14c087c02;
    pUVar5 = UDS_LogManager::GetInst();
    local_48 = (UDS_GameInstance *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_150 + 8),
               "UDS_W_MapSpawnUnscaled::GetLoadedUserWidgetByFSoftObjectPath",0x3c,Yes);
    pwVar9 = L"InSoftObjectPath class nullptr";
    uVar8 = 0x37a;
  }
  else {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14c087a70;
LAB_14c087ab1:
    this_00 = UDS_GameInstance::GetInst();
    if (this_00 != (UDS_GameInstance *)0x0) {
      FVar6 = DS_Util::GetUniqueClassName((UClass *)local_150);
      FVar6 = *(FName *)FVar6;
      local_158 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      pUVar7 = UGameInstance::GetWorld((UGameInstance *)this_00);
      this_01 = CreateWidget<UDS_UserWidget,UWorld_*>
                          (pUVar7,(TSubclassOf<UUserWidget>)&local_158,FVar6);
      UWidget::SetRenderTransformAngle
                ((UWidget *)this_01,
                 (float)((uint)this->CurAngle ^ __xmm_80000000800000008000000080000000));
      pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
      if (pFVar2 == (FScriptContainerElement *)0x0) {
        return this_01;
      }
      FMemory::Free(pFVar2);
      return this_01;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14c087c02;
    pUVar5 = UDS_LogManager::GetInst();
    local_48 = this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_150 + 8),
               "UDS_W_MapSpawnUnscaled::GetLoadedUserWidgetByFSoftObjectPath",0x3c,Yes);
    pwVar9 = L"gameInst is nullptr.";
    uVar8 = 0x382;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,(wchar_t *)local_40.DebugPtr,uVar8,pwVar9);
  if (local_48 != (UDS_GameInstance *)0x0) {
    FMemory::Free(local_48);
  }
LAB_14c087c02:
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (UDS_UserWidget *)0x0;
}

// GetPartyMemberMapIndexBaseTableRow @ 14c088930

FDS_MapIndexBaseTableRow * __thiscall
UDS_W_MapSpawnUnscaled::GetPartyMemberMapIndexBaseTableRow(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  int iVar1;
  FDS_MapIndexBaseTableRow *pFVar2;
  
  iVar1 = param_1 + 4;
  if (param_1 == 3) {
    iVar1 = 3;
  }
  pFVar2 = FDS_MapIndexBaseTableRow::Get((longlong)iVar1,true);
  return pFVar2;
}

// GetRaidPartyMemberMapIndexBaseTableRow @ 14c088960

FDS_MapIndexBaseTableRow * __thiscall
UDS_W_MapSpawnUnscaled::GetRaidPartyMemberMapIndexBaseTableRow
          (UDS_W_MapSpawnUnscaled *this,int param_1)

{
  FDS_MapIndexBaseTableRow *pFVar1;
  int iVar2;
  
  iVar2 = 0x30;
  if (param_1 != 0x30) {
    iVar2 = param_1 + 0x30;
  }
  pFVar1 = FDS_MapIndexBaseTableRow::Get((longlong)iVar2,true);
  return pFVar1;
}

// InitTextureScale @ 14c08c500

void __thiscall UDS_W_MapSpawnUnscaled::InitTextureScale(UDS_W_MapSpawnUnscaled *this)

{
  if (this->MapType == 0) {
    if (this->IsMiniMapFirstOpen == true) {
      this->IsMiniMapFirstOpen = false;
      this->TextureScale = this->DefaultMiniMapScale;
      return;
    }
  }
  else if (this->MapType == 1) {
    this->TextureScale = this->DefaultWorldMapScale;
  }
  return;
}

// InitialiizeMapData @ 14c08d990

void __thiscall
UDS_W_MapSpawnUnscaled::InitialiizeMapData(UDS_W_MapSpawnUnscaled *this,bool param_1)

{
  int iVar1;
  
  iVar1 = this->MapType;
  this->IsFirstPanelTranslationDataSet = true;
  this->IsFirstScaleChanged = false;
  this->IsIndoor = param_1;
  (this->CurMapPositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (iVar1 == 0) {
    if (this->IsMiniMapFirstOpen == true) {
      this->IsMiniMapFirstOpen = false;
      this->TextureScale = this->DefaultMiniMapScale;
      return;
    }
  }
  else if (iVar1 == 1) {
    this->TextureScale = this->DefaultWorldMapScale;
  }
  return;
}

// NativeConstruct @ 14c090be0

void __thiscall UDS_W_MapSpawnUnscaled::NativeConstruct(UDS_W_MapSpawnUnscaled *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar1 = ::FName::FName(local_res8,"Panel_Main");
  UDS_UserWidget::BindWidget<UDS_CanvasPanel>((UDS_UserWidget *)this,&this->PanelMain,*pFVar1);
  return;
}

// NativeDestruct @ 14c090e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::NativeDestruct(UDS_W_MapSpawnUnscaled *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMVVMView *pUVar5;
  UClass *pUVar6;
  FTimerManager *this_00;
  FTimerData *pFVar7;
  FObjectPtr_u_0 *this_01;
  
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 != (UMVVMView *)0x0) {
    iVar2 = (pUVar5->Sources).ArrayNum;
    this_01 = (FObjectPtr_u_0 *)(pUVar5->Sources).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = this_01 + (longlong)iVar2 * 3;
    for (; this_01 != pFVar1; this_01 = this_01 + 3) {
      if (this_01->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar6);
        if ((bVar4) && (this_01->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_01->Handle + 0x2b8))();
        }
      }
    }
  }
  if (this->_padding_ != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar7 = FTimerManager::FindTimer(this_00,(FTimerHandle *)&this->_padding_);
    if (pFVar7 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)this->_padding_);
    }
    this->_padding_ = 0;
  }
  UCommonUserWidget::NativeDestruct((UCommonUserWidget *)this);
  return;
}

// OnAllAsncLoadComplete @ 14c091ed0

void __thiscall UDS_W_MapSpawnUnscaled::OnAllAsncLoadComplete(UDS_W_MapSpawnUnscaled *this)

{
  double dVar1;
  bool bVar2;
  UDS_MovementCore *pUVar3;
  TVector<double> *pTVar4;
  TVector2<double>_u_0 local_58;
  TVector<double> local_48;
  TVector<double> local_30;
  
  this->IsObejctPathAllLoadComplete = true;
  bVar2 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMovementCore,(void *)0x0);
  if (!bVar2) {
    pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,&local_48);
    dVar1 = (pTVar4->field0_0x0)._s_0.Y;
    pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
    pTVar4 = UDS_MovementCore::GetActorLocation(pUVar3,&local_30);
    local_58._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    local_58._s_0.Y = dVar1;
    UpdatePanelMainPosition(this,(TVector2<double> *)&local_58._s_0);
  }
  if (this->IsNeedToRefreshIconList == true) {
    RefrashIconList(this);
    return;
  }
  return;
}

// OnChangedBreachDetailInfo @ 14c092190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnChangedBreachDetailInfo
          (UDS_W_MapSpawnUnscaled *this,FDS_BreachDetailInfo *param_1,
          EDS_BreachInfoChangeType param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<__int64_const_,int_const_> *this_00;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UDS_WorldMapEvent *pUVar11;
  UDS_WorldMapManager *this_01;
  UDS_LogManager *pUVar12;
  FDS_BreachBaseTableRow *pFVar13;
  FDS_MapIndexBaseTableRow *pFVar14;
  FDS_BreachDetailInfo *pFVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStackY_1e8 [32];
  FDestructionSentinel local_1b8;
  FDS_BreachDetailInfo local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar11 = UDS_WorldMapEvent::GetEvent();
  if ((pUVar11 != (UDS_WorldMapEvent *)0x0) && (this->MapType != 0)) {
    if (param_2 == Added) {
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar11->DeleteBreachDelegate,(longlong)param_1->BreachBaseID);
      pFVar15 = FDS_BreachDetailInfo::FDS_BreachDetailInfo(&local_1a0,param_1);
      CreateDiscoverBreachIcon(this,pFVar15);
    }
    else if (param_2 == Updated) {
      pFVar13 = FDS_BreachBaseTableRow::Get((longlong)param_1->BreachBaseID,true);
      if ((pFVar13 != (FDS_BreachBaseTableRow *)0x0) &&
         (pFVar14 = FDS_MapIndexBaseTableRow::Get((ulonglong)pFVar13->MapIndex,true),
         pFVar14 != (FDS_MapIndexBaseTableRow *)0x0)) {
        bVar7 = FDS_BreachDetailInfo::IsEnoughTryCount(param_1);
        iVar2 = param_1->BreachBaseID;
        iVar3 = (&pFVar14->MapIndexIcon)[(ulonglong)bVar7 ^ 1];
        this_00 = &pUVar11->BreachIconUpdateDelegate;
        bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
        if (bVar7) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_1b8);
          puVar1 = &(pUVar11->BreachIconUpdateDelegate).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar7 = false;
          uVar16 = *(int *)&(pUVar11->BreachIconUpdateDelegate).Delegate.field_0x10 - 1;
          if (-1 < (int)uVar16) {
            lVar17 = (longlong)(int)uVar16 << 4;
            bVar7 = false;
            do {
              uVar10 = 0;
              if ((int)uVar16 < *(int *)&(pUVar11->BreachIconUpdateDelegate).Delegate.field_0x10) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar4 = *(longlong *)&(pUVar11->BreachIconUpdateDelegate).Delegate.field_0x8;
              if (((*(int *)(lVar17 + 8 + lVar4) == 0) ||
                  (plVar5 = *(longlong **)(lVar17 + lVar4), plVar5 == (longlong *)0x0)) ||
                 (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,(longlong)iVar2,iVar3), cVar9 == '\0'
                 )) {
                bVar7 = true;
              }
              lVar17 = lVar17 + -0x10;
              uVar16 = uVar16 - 1;
            } while (-1 < (int)uVar16);
          }
          puVar1 = &(pUVar11->BreachIconUpdateDelegate).Delegate.field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar7) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
          }
          if (local_1b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
          }
        }
      }
    }
    else if (param_2 == Removed) {
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar11->DeleteBreachDelegate,(longlong)param_1->BreachBaseID);
      this_01 = UDS_WorldMapManager::GetInst();
      if (this_01 == (UDS_WorldMapManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_W_MapSpawnUnscaled::OnChangedBreachDetailInfo",0x31,Yes);
          UDS_LogManager::PrintLog(pUVar12,1,Warning,local_158.Ptr,0x8c0,L"worldMapMng is nullptr.")
          ;
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else {
        bVar7 = UDS_WorldMapManager::BreachInfoContain(this_01,param_1->BreachBaseID);
        if (bVar7) {
          CreateBreachIconOnce(this,param_1->BreachBaseID);
        }
      }
    }
  }
  return;
}

// OnChangedPlayerSkillTargetInfo @ 14c0928e0

void __thiscall
UDS_W_MapSpawnUnscaled::OnChangedPlayerSkillTargetInfo
          (UDS_W_MapSpawnUnscaled *this,EDS_PlayerSkillType *param_1,
          FDS_PlayerSkillTargetInfo *param_2,EDS_PlayerSkillTargetInfoChangeType *param_3)

{
  UDS_WorldMapEvent *pUVar1;
  TPairInitializer<unsigned___int64_const_&,FDS_PlayerSkillTargetInfo_const_&> local_res10;
  FDS_PlayerSkillTargetInfo *local_58;
  FDS_PlayerSkillTargetInfo *local_50;
  FDS_PlayerSkillTargetInfo local_48;
  
  if (*param_1 == Detection) {
    if (*param_3 == Added) {
      local_58 = param_2;
      local_50 = param_2;
      TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FDS_PlayerSkillTargetInfo_const_&>_>
                ((TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
                  *)&this->DetectionTargetInfosMap,&local_res10,(bool *)&local_58);
      local_48.EntityID = param_2->EntityID;
      local_48.bIsStuff = param_2->bIsStuff;
      local_48._9_3_ = *(undefined3 *)&param_2->field_0x9;
      local_48.TableID = param_2->TableID;
      local_48.ZoneID = param_2->ZoneID;
      local_48._20_4_ = *(undefined4 *)&param_2->field_0x14;
      local_48.Position.field0_0x0._s_0.X = (param_2->Position).field0_0x0._s_0.X;
      local_48.Position.field0_0x0._s_0.Y = (param_2->Position).field0_0x0._s_0.Y;
      local_48.Position.field0_0x0._s_0.Z = (param_2->Position).field0_0x0._s_0.Z;
      local_48.EndTime = param_2->EndTime;
      CreateDetectionStuff(this,param_2->EntityID,&local_48);
    }
    else if (*param_3 == Removed) {
      pUVar1 = UDS_WorldMapEvent::GetEvent();
      if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
        local_res10.Key = (ulong64 *)param_2->EntityID;
        FDS_FilteredEventDelegate<__int64_const_>::Broadcast
                  (&pUVar1->DeleteDetectionStuffDelegate,(long64 *)&local_res10);
      }
      local_res10.Key = (ulong64 *)param_2->EntityID;
      if (*(int *)&(this->DetectionTargetInfosMap).field_0x8 !=
          *(int *)&(this->DetectionTargetInfosMap).field_0x34) {
        TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
                    *)&this->DetectionTargetInfosMap,
                   (int)((ulonglong)local_res10.Key >> 0x20) * 0x17 + (int)local_res10.Key,
                   (ulong64 *)&local_res10);
        return;
      }
    }
  }
  return;
}

// OnCloseInit @ 14c093640

void __thiscall UDS_W_MapSpawnUnscaled::OnCloseInit(UDS_W_MapSpawnUnscaled *this)

{
  bool bVar1;
  UDS_ZoneManager *pUVar2;
  UDS_PhasingManager *pUVar3;
  UDS_EntityManager *pUVar4;
  UDS_PartyEvent *pUVar5;
  UDS_DungeonEvent *pUVar6;
  UObject *pUVar7;
  UDS_WorldMapEvent *pUVar8;
  UDS_WorldBossEvent *pUVar9;
  UDS_QuestEvent *pUVar10;
  FWeakObjectPtr local_res10 [3];
  
  UDS_UserWidget::OnCloseInit((UDS_UserWidget *)this);
  pUVar2 = UDS_ZoneManager::GetInst();
  if (pUVar2 != (UDS_ZoneManager *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar2->IslandIdChangeDelegate,(UObject *)this);
  }
  pUVar3 = UDS_PhasingManager::GetInst();
  if (pUVar3 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->PhasingStartOrEndDelegate,this);
  }
  pUVar4 = UDS_EntityManager::GetInst();
  if (pUVar4 != (UDS_EntityManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnSpawnEntityEvent,
               this);
  }
  pUVar5 = UDS_PartyEvent::GetEvent();
  if (pUVar5 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5->OnJoinedPartyMember,
               this);
  }
  pUVar6 = UDS_DungeonEvent::GetEvent();
  if (pUVar6 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnJoinedRaidParty,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnJoinedRaidPartyMember,this);
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar7 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0xf].field_0x10,this);
    pUVar7 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0xc].field_0x18,this);
  }
  pUVar8 = UDS_WorldMapEvent::GetEvent();
  if (pUVar8 != (UDS_WorldMapEvent *)0x0) {
    FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapSpawnUnscaled>
              (&pUVar8->ReferencePosChangeDelegate,this);
    FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>::
    Remove<UDS_W_MapSpawnUnscaled>(&pUVar8->MousePosByMakerCreateDelegate,this);
    FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
    ::Remove<UDS_W_MapSpawnUnscaled>(&pUVar8->ChangeMapPositionOffsetDelegate,this);
    FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
    Remove<UDS_W_MapSpawnUnscaled>(&pUVar8->IndoorDataChanageDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->RangeOverIconSpawnDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->RefrashMapAllIconDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->IsContinentDelegate,
               this);
    if (this->MapType == 0) {
      FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapSpawnUnscaled>
                (&pUVar8->MiniMapMarkerDataRefrashDelegate,this);
    }
    FDS_EventDelegate<>::Broadcast(&pUVar8->OnCloseInitDelegate);
  }
  pUVar9 = UDS_WorldBossEvent::GetEvent();
  if (pUVar9 != (UDS_WorldBossEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar9->OnChangedWorldBossStatus,this);
  }
  pUVar10 = UDS_QuestEvent::GetEvent();
  if (pUVar10 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar10->OnChanedQuestDelegate
               ,this);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this);
  return;
}

// OnCreateRangeOverIcon @ 14c0938a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnCreateRangeOverIcon
          (UDS_W_MapSpawnUnscaled *this,long64 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  atomic<int> aVar5;
  FSoftObjectPath *pFVar6;
  UDS_UserWidget *pUVar7;
  UDS_LogManager *pUVar8;
  FDS_MapIndexBaseTableRow *pFVar9;
  UCanvasPanelSlot *this_00;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  undefined1 auStackY_468 [32];
  FWeakObjectPtr local_438;
  undefined8 local_430;
  UDS_UserWidget *local_428;
  UDS_UserWidget *local_420;
  TSharedPtr<FDS_ViewModelContext,1> local_418;
  TVector2<double>_u_0 local_408;
  TSharedPtr<FDS_ViewModelContext,1> local_3f8;
  TVector2<double>_u_0 local_3e8;
  FSoftObjectPath local_3d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_468;
  if (this->MapType != 0) {
    pFVar6 = FSoftObjectPath::FSoftObjectPath(&local_3d8,&this->RangeOverIconObjectPath);
    pUVar7 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar6);
    if (pUVar7 == (UDS_UserWidget *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_3b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3b8,"UDS_W_MapSpawnUnscaled::OnCreateRangeOverIcon",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_3b8.Ptr,0x570,L"loadedContentsWidget is nullptr.");
        if ((void *)local_3b8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3b8._padding_);
        }
      }
    }
    else {
      pFVar9 = FDS_MapIndexBaseTableRow::Get((longlong)param_2,true);
      if (pFVar9 == (FDS_MapIndexBaseTableRow *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_298._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_298,"UDS_W_MapSpawnUnscaled::OnCreateRangeOverIcon",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_298.Ptr,0x577,
                     L"rangeOverIconmapIndexBaseTableRow is nullptr.");
          if ((void *)local_298._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_298._padding_);
          }
        }
      }
      else if ((((pFVar9->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
               ((pFVar9->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
              ((this->IsIndoor != true || (pFVar9->isShownInIndoorMap != false)))) {
        iVar1 = pFVar9->MapIndexPriority;
        dVar3 = (double)pFVar9->IconSpawnSize;
        this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar7);
        if (this_00 == (UCanvasPanelSlot *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_W_MapSpawnUnscaled::OnCreateRangeOverIcon",0x2d,Yes);
            UDS_LogManager::PrintLog(pUVar8,1,Warning,local_178.Ptr,0x588,L"canvasSlot is nullptr.")
            ;
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
        else {
          local_408._8_4_ = SUB84(dVar3,0);
          local_408._s_0.X = dVar3;
          local_408._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
          UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_408._s_0);
          local_3e8._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
          local_3e8._s_0.Y = _UNK_150689678;
          UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_3e8._s_0);
          UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
          pFVar10 = ::operator_new(0x40);
          pFVar13 = (FDS_ViewModelContext *)0x0;
          pFVar12 = pFVar13;
          if (pFVar10 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar10->field_0x1c = 0;
            *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
            ((atomic<int> *)&pFVar10[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
            *(undefined8 *)&pFVar10->DerivedStaticStruct = 0;
            (pFVar10->ViewModelName).ComparisonIndex = 0;
            (pFVar10->ViewModelName).Number = 0;
            pFVar10->ViewModelTemplateKey = None;
            pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_RangeOverIconInfo__6B_;
            *(atomic<int> *)&pFVar10[1].DerivedStaticStruct = (atomic<int>)0x0;
            pFVar10[1].ViewModelName.ComparisonIndex = 0;
            pFVar10[1].ViewModelName.Number = 0;
            *(undefined8 *)&pFVar10[1].ViewModelTemplateKey = 0;
            local_430 = 0;
            FWeakObjectPtr::operator=
                      ((FWeakObjectPtr *)&pFVar10[1].ViewModelTemplateKey,(FObjectPtr)&local_430);
            pFVar12 = pFVar10;
          }
          pFVar10 = ::operator_new(0x20);
          if (pFVar10 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar10->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_RangeOverIconInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar12;
            pFVar13 = pFVar10;
          }
          if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar11 = FDS_ViewModelContext_RangeOverIconInfo::StaticStruct();
          *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar11;
          this_01 = UDS_ViewModelContextManager::GetInst();
          if (this_01 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar13 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar13->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_418.Object = pFVar12;
            local_418.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar13;
            UDS_ViewModelContextManager::RegisterContext(this_01,&local_418);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_418.SharedReferenceCount.ReferenceController);
          }
          pFVar12->ViewModelTemplateKey = W_WorldMapRangeOverIcon;
          *(UCanvasPanelSlot **)&pFVar12[1].ViewModelName.ComparisonIndex = this_00;
          pFVar12[1]._padding_ = param_1;
          aVar5._1_3_ = 0;
          aVar5._0_1_ = pFVar9->ID;
          *(atomic<int> *)&pFVar12[1].DerivedStaticStruct = aVar5;
          local_428 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          FWeakObjectPtr::operator=
                    ((FWeakObjectPtr *)&pFVar12[1].ViewModelTemplateKey,(FObjectPtr)&local_428);
          if (pFVar13 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar13->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_3f8.Object = pFVar12;
          local_3f8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar13;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          local_438.ObjectIndex = 0;
          local_438.ObjectSerialNumber = 0;
          local_420 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          FWeakObjectPtr::operator=(&local_438,(FObjectPtr)&local_420);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_438,&local_3f8,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar13);
        }
      }
    }
  }
  return;
}

// OnCurLookIndoorGroupIDChanged @ 14c093d50

void __thiscall
UDS_W_MapSpawnUnscaled::OnCurLookIndoorGroupIDChanged(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  FDS_MapIndoorGroupTableRow *pFVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector2<double>_u_0 local_18;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = this->MapType;
  this->CurLookIndoorGroupID = param_1;
  this->IsIndoor = true;
  this->IsFirstPanelTranslationDataSet = true;
  this->IsFirstScaleChanged = false;
  (this->CurMapPositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (iVar2 == 0) {
    if (this->IsMiniMapFirstOpen != true) goto LAB_14c093db6;
    this->IsMiniMapFirstOpen = false;
    fVar4 = this->DefaultMiniMapScale;
  }
  else {
    if (iVar2 != 1) goto LAB_14c093db6;
    fVar4 = this->DefaultWorldMapScale;
  }
  this->TextureScale = fVar4;
LAB_14c093db6:
  pFVar5 = FDS_MapIndoorGroupTableRow::Get((longlong)param_1,true);
  if (pFVar5 != (FDS_MapIndoorGroupTableRow *)0x0) {
    iVar2 = pFVar5->TextureOrthoWidth;
    this->OrthoWidth = (float)iVar2;
    dVar7 = (pFVar5->StartPosition).field0_0x0._s_0.X;
    dVar1 = (pFVar5->StartPosition).field0_0x0._s_0.Y;
    dVar8 = (double)iVar2;
    dVar6 = dVar7 - (pFVar5->EndPosition).field0_0x0._s_0.X;
    if (dVar8 < (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      (this->MapStartPos).field0_0x0._s_0.X = dVar7;
      (this->MapStartPos).field0_0x0._s_0.Y = dVar1;
      dVar7 = (pFVar5->EndPosition).field0_0x0._s_0.Y;
      dVar8 = (pFVar5->EndPosition).field0_0x0._s_0.X;
    }
    else {
      (this->MapStartPos).field0_0x0._s_0.X = dVar7 - dVar8;
      (this->MapStartPos).field0_0x0._s_0.Y = dVar1 - dVar8;
      dVar7 = (pFVar5->StartPosition).field0_0x0._s_0.Y;
      (this->MapIndoorStartPos).field0_0x0._s_0.X = (pFVar5->StartPosition).field0_0x0._s_0.X;
      (this->MapIndoorStartPos).field0_0x0._s_0.Y = dVar7;
      dVar7 = (pFVar5->EndPosition).field0_0x0._s_0.Y;
      (this->MapIndoorEndPos).field0_0x0._s_0.X = (pFVar5->EndPosition).field0_0x0._s_0.X;
      (this->MapIndoorEndPos).field0_0x0._s_0.Y = dVar7;
      dVar7 = dVar8 + (pFVar5->EndPosition).field0_0x0._s_0.Y;
      dVar8 = dVar8 + (pFVar5->EndPosition).field0_0x0._s_0.X;
    }
    (this->MapEndPos).field0_0x0._s_0.X = dVar8;
    (this->MapEndPos).field0_0x0._s_0.Y = dVar7;
    OnRecalculatePlayerPosChange(this);
    bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      (&this->OwnerMovementCore,(void *)0x0);
    if (!bVar3) {
      local_18._s_0.X = (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
      local_18._s_0.Y = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
      UpdatePanelMainPosition(this,(TVector2<double> *)&local_18._s_0);
    }
    if (this->IsObejctPathAllLoadComplete == true) {
      RefrashIconList(this);
      return;
    }
    this->IsNeedToRefreshIconList = true;
  }
  return;
}

// OnCurLookIslandIDChanged @ 14c094680

void __thiscall
UDS_W_MapSpawnUnscaled::OnCurLookIslandIDChanged(UDS_W_MapSpawnUnscaled *this,int param_1)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  float fVar4;
  FDS_ZoneIslandTableRow *pFVar5;
  TVector2<double>_u_0 local_18;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = this->MapType;
  this->CurLookIslandID = param_1;
  this->IsIndoor = false;
  this->IsFirstPanelTranslationDataSet = true;
  this->IsFirstScaleChanged = false;
  (this->CurMapPositionOffset).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (iVar1 == 0) {
    if (this->IsMiniMapFirstOpen != true) goto LAB_14c0946e6;
    this->IsMiniMapFirstOpen = false;
    fVar4 = this->DefaultMiniMapScale;
  }
  else {
    if (iVar1 != 1) goto LAB_14c0946e6;
    fVar4 = this->DefaultWorldMapScale;
  }
  this->TextureScale = fVar4;
LAB_14c0946e6:
  pFVar5 = FDS_ZoneIslandTableRow::GetRef((longlong)param_1,true);
  dVar2 = (double)pFVar5->_padding_;
  (this->MapStartPos).field0_0x0._s_0.X = (double)pFVar5->_padding_;
  (this->MapStartPos).field0_0x0._s_0.Y = dVar2;
  dVar2 = (double)pFVar5->_padding_;
  (this->MapEndPos).field0_0x0._s_0.X = (double)pFVar5->_padding_;
  (this->MapEndPos).field0_0x0._s_0.Y = dVar2;
  this->OrthoWidth = (float)pFVar5->TextureOrthoWidth;
  OnRecalculatePlayerPosChange(this);
  bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMovementCore,(void *)0x0);
  if (!bVar3) {
    local_18._s_0.X = (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
    local_18._s_0.Y = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
    UpdatePanelMainPosition(this,(TVector2<double> *)&local_18._s_0);
  }
  if (this->IsObejctPathAllLoadComplete != true) {
    this->IsNeedToRefreshIconList = true;
    return;
  }
  RefrashIconList(this);
  return;
}

// OnCurMapPositionOffset @ 14c094aa0

void __thiscall
UDS_W_MapSpawnUnscaled::OnCurMapPositionOffset
          (UDS_W_MapSpawnUnscaled *this,float param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  TVector2<double>_u_0 local_18;
  
  if ((char)this->MapType == '\x01') {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    local_18._s_0.X = (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
    local_18._s_0.Y = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
    (this->CurMapPositionOffset).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->CurMapPositionOffset).field0_0x0._s_0.Y = dVar1;
    UpdatePanelMainPosition(this,(TVector2<double> *)&local_18._s_0);
  }
  return;
}

// OnCurPanelMousePositionOffset @ 14c094ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c094efd) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnCurPanelMousePositionOffset
          (UDS_W_MapSpawnUnscaled *this,TVector2<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar15;
  long64 lVar16;
  UDS_WorldMapEvent *pUVar17;
  FDS_MapIndexBaseTableRow *pFVar18;
  void *_Src;
  double dVar19;
  undefined1 auStackY_2c8 [32];
  double dStack_258;
  double dStack_238;
  FWeakObjectPtr local_230;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_228;
  FDS_WorldMapMarkerInfo local_210;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (this->IsContinent == true) {
    return;
  }
  if (this->IsFieldMap == false) {
    return;
  }
  dVar2 = (param_1->field0_0x0)._s_0.X;
  if ((dVar2 == UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X) &&
     (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y == (param_1->field0_0x0)._s_0.Y)) {
    return;
  }
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar15 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_W_MapSpawnUnscaled::OnCurPanelMousePositionOffset",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar15,1,Warning,local_1a8.Ptr,0x133,L"worldMapMarkerMgr nullptr");
    _Src = (void *)local_1a8._padding_;
  }
  else {
    iVar12 = DS_CommonDataHelper::MapMarkerMaxCount();
    iVar13 = UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoCount(this_00);
    if (iVar12 <= iVar13) {
      local_228._0_8_ = 0;
      local_228._8_8_ = 0;
      local_228._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x447b5,Alert_None_01,&local_228);
      return;
    }
    bVar11 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                       (&this->OwnerMovementCore,(void *)0x0);
    if (bVar11) {
      return;
    }
    dVar3 = (this->MapStartPos).field0_0x0._s_0.X;
    dVar4 = (this->MapStartPos).field0_0x0._s_0.Y;
    dVar9 = __real_3ff0000000000000 / (double)this->TextureScale;
    dVar19 = (double)this->OrthoWidth;
    dVar8 = (double)this->TextureSize;
    dVar7 = __real_3ff0000000000000 / dVar8;
    dVar10 = (dVar3 - dVar19 * (this->FirstPanelTranslation).field0_0x0._s_0.X * dVar7) +
             (dVar9 * dVar2 - (this->CurMapPositionOffset).field0_0x0._s_0.X) * dVar19 * dVar7;
    dVar7 = (dVar9 * (param_1->field0_0x0)._s_0.Y - (this->CurMapPositionOffset).field0_0x0._s_0.Y)
            * dVar19 * dVar7 +
            (dVar4 - dVar19 * (this->FirstPanelTranslation).field0_0x0._s_0.Y * dVar7);
    dVar2 = (dVar10 - dVar3) * (__real_3ff0000000000000 / dVar19) * dVar8;
    dVar8 = (dVar7 - dVar4) * (__real_3ff0000000000000 / dVar19) * dVar8;
    pUVar15 = UDS_LogManager::GetInst();
    if (pUVar15 != (UDS_LogManager *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      ::FString::PrintfImpl((FString *)&local_228,L"X=%3.3f Y=%3.3f");
      local_1a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1a8,"UDS_W_MapSpawnUnscaled::OnCurPanelMousePositionOffset",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar15,1,Warning,local_1a8.Ptr,0x14b,
                 L"Marker Spawn OnCurPanelMousePositionOffset markerPosition %s");
      if ((void *)local_1a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1a8._padding_);
      }
      if ((void *)local_228._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_228._0_8_);
      }
    }
    iVar13 = 0;
    iVar12 = 0;
    local_230.ObjectIndex = 0;
    local_230.ObjectSerialNumber = 0;
    local_228._0_8_ = (void *)0x0;
    FWeakObjectPtr::operator=(&local_230,(FObjectPtr)&local_228);
    lVar16 = UDS_WorldMapMarkerManager::GetAutoIncrementKey(this_00);
    if (this->IsIndoor == true) {
      iVar12 = this->CurLookIndoorGroupID;
    }
    else {
      iVar13 = this->CurLookIslandID;
    }
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = dVar10;
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    dVar3 = (this->CurMapPositionOffset).field0_0x0._s_0.X;
    dVar4 = (this->CurMapPositionOffset).field0_0x0._s_0.Y;
    auVar6._8_4_ = SUB84(dVar8,0);
    auVar6._0_8_ = dVar2;
    auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    fVar1 = this->TextureScale;
    ::FString::FString((FString *)&local_228,"");
    _Src = (void *)local_228._0_8_;
    local_210.Floor = 0;
    local_210.Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.key = lVar16;
    local_210.IslandID = iVar13;
    local_210.IndoorGroupID = iVar12;
    local_210.SavedScale = fVar1;
    if (local_228._8_4_ == 0) {
      local_210.Memo.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_228._8_4_,0,(ForAnyElementType *)&local_210.Memo,local_228._8_4_,
                 &local_210.Memo.Data.ArrayMax);
      memcpy(local_210.Memo.Data.AllocatorInstance.Data,_Src,(longlong)(int)local_228._8_4_ * 2);
    }
    dStack_258 = auVar5._8_8_;
    local_210.Widget.WeakPtr = local_230;
    local_210.MarkerGlobalPos.field0_0x0._s_0.Y = dStack_258;
    dStack_238 = auVar6._8_8_;
    local_210.MakerVector2D.field0_0x0._s_0.Y = dStack_238;
    local_210.MarkerGlobalPos.field0_0x0._s_0.X = dVar10;
    local_210.CurMapPositionOffset.field0_0x0._s_0.X = dVar3;
    local_210.CurMapPositionOffset.field0_0x0._s_0.Y = dVar4;
    local_210.MakerVector2D.field0_0x0._s_0.X = dVar2;
    UDS_WorldMapMarkerManager::AddWorldMapMakerInfo(this_00,&local_210);
    pUVar17 = UDS_WorldMapEvent::GetEvent();
    if (pUVar17 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<>::Broadcast(&pUVar17->MarkerCountDelegate);
    }
    local_210.Floor = 0;
    local_210.Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_228._8_4_ == 0) {
      local_210.Memo.Data.ArrayMax = 0;
      local_210.key = lVar16;
      local_210.IslandID = iVar13;
      local_210.IndoorGroupID = iVar12;
      local_210.SavedScale = fVar1;
    }
    else {
      local_210.key = lVar16;
      local_210.IslandID = iVar13;
      local_210.IndoorGroupID = iVar12;
      local_210.SavedScale = fVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_228._8_4_,0,(ForAnyElementType *)&local_210.Memo,local_228._8_4_,
                 &local_210.Memo.Data.ArrayMax);
      memcpy(local_210.Memo.Data.AllocatorInstance.Data,_Src,(longlong)(int)local_228._8_4_ * 2);
    }
    local_210.Widget.WeakPtr = local_230;
    local_210.MarkerGlobalPos.field0_0x0._s_0.Y = dStack_258;
    local_210.MakerVector2D.field0_0x0._s_0.Y = dStack_238;
    local_210.MarkerGlobalPos.field0_0x0._s_0.X = dVar10;
    local_210.CurMapPositionOffset.field0_0x0._s_0.X = dVar3;
    local_210.CurMapPositionOffset.field0_0x0._s_0.Y = dVar4;
    local_210.MakerVector2D.field0_0x0._s_0.X = dVar2;
    iVar14 = UDS_WorldMapMarkerManager::GetMarkerIndex(this_00,&local_210);
    pFVar18 = FDS_MapIndexBaseTableRow::Get((longlong)iVar14 + 0x1d,true);
    if (pFVar18 != (FDS_MapIndexBaseTableRow *)0x0) {
      local_210.Floor = 0;
      local_210.Memo.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_228._8_4_ == 0) {
        local_210.Memo.Data.ArrayMax = 0;
        local_210.key = lVar16;
        local_210.IslandID = iVar13;
        local_210.IndoorGroupID = iVar12;
        local_210.SavedScale = fVar1;
      }
      else {
        local_210.key = lVar16;
        local_210.IslandID = iVar13;
        local_210.IndoorGroupID = iVar12;
        local_210.SavedScale = fVar1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_228._8_4_,0,(ForAnyElementType *)&local_210.Memo,local_228._8_4_,
                   &local_210.Memo.Data.ArrayMax);
        memcpy(local_210.Memo.Data.AllocatorInstance.Data,_Src,(longlong)(int)local_228._8_4_ * 2);
      }
      local_210.MarkerGlobalPos.field0_0x0._s_0.Y = dStack_258;
      local_210.Widget.WeakPtr = local_230;
      local_210.MakerVector2D.field0_0x0._s_0.Y = dStack_238;
      local_210.MarkerGlobalPos.field0_0x0._s_0.X = dVar10;
      local_210.CurMapPositionOffset.field0_0x0._s_0.X = dVar3;
      local_210.CurMapPositionOffset.field0_0x0._s_0.Y = dVar4;
      local_210.MakerVector2D.field0_0x0._s_0.X = dVar2;
      CreateMarker(this,&local_210,pFVar18,true,false);
    }
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}

// OnDetectionObjectLoaded @ 14c0953c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnDetectionObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  ForAnyElementType _Src;
  int iVar5;
  UDS_LogManager *pUVar6;
  FString *pFVar7;
  FUtf8String *pFVar8;
  size_t _Size;
  undefined1 auStackY_208 [32];
  FSoftObjectPath local_1c8;
  FString local_1a8;
  TStringView<wchar_t> local_198;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14c0955b0;
    pUVar6 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(param_1,&local_1a8);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_W_MapSpawnUnscaled::OnDetectionObjectLoaded",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x21c,L"Invalid InDetectionObejctPath : %s");
    FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
      FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar7 = FSoftObjectPath::ToString(param_1,&local_178);
    pFVar7 = FWN_SoftObjectUtils::GetObjectPath(&local_188,pFVar7,false);
    local_1c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.PackageName.Number = 0;
    local_1c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.AssetName.Number = 0;
    local_1c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.SubPathString.Data.ArrayNum = 0;
    local_1c8.SubPathString.Data.ArrayMax = 0;
    local_1a8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    iVar2 = (pFVar7->Data).ArrayNum;
    local_1a8.Data.ArrayNum = iVar2 + -1;
    if (iVar2 == 0) {
      local_1a8.Data.ArrayNum = 0;
    }
    local_198._12_4_ = local_1a8.Data.ArrayMax;
    local_198.Size = local_1a8.Data.ArrayNum;
    local_198.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_1c8,&local_198);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    _Src.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    (this->DetectionObjectPath).AssetPath.PackageName = local_1c8.AssetPath.PackageName;
    (this->DetectionObjectPath).AssetPath.AssetName = local_1c8.AssetPath.AssetName;
    pFVar8 = &(this->DetectionObjectPath).SubPathString;
    FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    if (pFVar8 != &local_1c8.SubPathString) {
      iVar5 = local_1c8.SubPathString.Data.ArrayNum;
      _Size = (size_t)local_1c8.SubPathString.Data.ArrayNum;
      piVar1 = &(this->DetectionObjectPath).SubPathString.Data.ArrayMax;
      iVar2 = *piVar1;
      (this->DetectionObjectPath).SubPathString.Data.ArrayNum =
           local_1c8.SubPathString.Data.ArrayNum;
      if ((local_1c8.SubPathString.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1c8.SubPathString.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar8,
                   local_1c8.SubPathString.Data.ArrayNum,piVar1);
        FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        if (iVar5 != 0) {
          memcpy((pFVar8->Data).AllocatorInstance.Data,_Src.Data,_Size);
          FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_14c0955b0:
  pFVar3 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnIconAndTextObjectLoaded @ 14c095960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnIconAndTextObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(param_1,&local_158);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_MapSpawnUnscaled::OnIconAndTextObjectLoaded",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x199,L"Invalid IconAndTextObjectPath : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FSoftObjectPath::operator=(&this->IconAndTextObjectPath,param_1);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnIconBtnObjectLoaded @ 14c095ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnIconBtnObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  UDS_LogManager *pUVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auStackY_198 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(param_1,&local_158);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_MapSpawnUnscaled::OnIconBtnObjectLoaded",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_148.Ptr,0x1da,L"Invalid InIconBtnObjectPath : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((this->IconBtnObjectPath).AssetPath.PackageName != (FName)0x0) {
      pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
      goto LAB_14c095bcd;
    }
    FSoftObjectPath::operator=(&this->IconBtnObjectPath,param_1);
  }
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
LAB_14c095bcd:
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnIndoorDataChanged @ 14c095c00

void __thiscall
UDS_W_MapSpawnUnscaled::OnIndoorDataChanged
          (UDS_W_MapSpawnUnscaled *this,bool param_1,int param_2,int param_3)

{
  this->CurCharIndoorGroupID = param_2;
  this->CurLookIndoorGroupID = param_3;
  return;
}

// OnMainCharChanged @ 14c096670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnMainCharChanged
          (UDS_W_MapSpawnUnscaled *this,FDS_EntityBase *param_1,FDS_EntityBase *param_2)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr local_res20;
  undefined1 local_18 [16];
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res20);
    pFVar3 = (FWeakObjectPtr *)
             (**(code **)(*(longlong *)&pUVar2[0x29].field_0x10 + 0x78))
                       (&pUVar2[0x29].field_0x10,local_18);
    (this->OwnerMovementCore).WeakPtr = *pFVar3;
  }
  return;
}

// OnMapRefrash @ 14c096800

void __thiscall UDS_W_MapSpawnUnscaled::OnMapRefrash(UDS_W_MapSpawnUnscaled *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_WorldMapEvent *pUVar5;
  longlong lVar6;
  uint uVar7;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  UPanelWidget::GetAllChildren((UPanelWidget *)this->PanelMain,&TStack_18);
  uVar7 = 0;
  if (0 < TStack_18.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < TStack_18.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)(TStack_18.AllocatorInstance.Data + lVar6) + 0x2d0))();
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < TStack_18.ArrayNum);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance,0,piVar1);
  }
  pUVar5 = UDS_WorldMapEvent::GetEvent();
  if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar5->OnCloseInitDelegate);
  }
  if (this->IsFieldMap == true) {
    SpawnIconsForFieldMap(this);
  }
  else {
    SpawnPhasingActorIcon(this);
    SpawnPartyIcon(this);
    SpawnDungeonPartyIcon(this);
    SpawnIconByMapIndexSpawnTable(this);
    if ((char)this->MapType == '\x01') {
      SpawnPlayerIcon(this);
    }
  }
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return;
}

// OnMapRotateAngle @ 14c096810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::OnMapRotateAngle(UDS_W_MapSpawnUnscaled *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UDS_LogManager *pUVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStackY_188 [32];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->PanelMain == (UDS_CanvasPanel *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_W_MapSpawnUnscaled::OnMapRotateAngle",0x28,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0xd4c,L"panel main null");
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
  }
  else {
    this->CurAngle = param_1;
    UPanelWidget::GetAllChildren((UPanelWidget *)this->PanelMain,&local_158);
    uVar5 = 0;
    if (0 < local_158.ArrayNum) {
      fVar7 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < local_158.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UWidget::SetRenderTransformAngle
                  (*(UWidget **)(local_158.AllocatorInstance.Data + lVar6),fVar7);
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < local_158.ArrayNum);
    }
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

// OnMarkerObjectLoaded @ 14c096e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnMarkerObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  UDS_LogManager *pUVar1;
  FScriptContainerElement *pFVar2;
  undefined1 auStackY_198 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(param_1,&local_158);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_MapSpawnUnscaled::OnMarkerObjectLoaded",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_148.Ptr,0x1ca,L"Invalid InMarkerObjectPath : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((this->MarkerObjectPath).AssetPath.PackageName != (FName)0x0) {
      pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
      goto LAB_14c096f4d;
    }
    FSoftObjectPath::operator=(&this->MarkerObjectPath,param_1);
  }
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
LAB_14c096f4d:
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnMiniMapMarkerRefrash @ 14c0970a0

void __thiscall UDS_W_MapSpawnUnscaled::OnMiniMapMarkerRefrash(UDS_W_MapSpawnUnscaled *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_WorldMapEvent *pUVar5;
  longlong lVar6;
  uint uVar7;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  UPanelWidget::GetAllChildren((UPanelWidget *)this->PanelMain,&TStack_18);
  uVar7 = 0;
  if (0 < TStack_18.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < TStack_18.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)(TStack_18.AllocatorInstance.Data + lVar6) + 0x2d0))();
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < TStack_18.ArrayNum);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance,0,piVar1);
  }
  pUVar5 = UDS_WorldMapEvent::GetEvent();
  if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar5->OnCloseInitDelegate);
  }
  if (this->IsFieldMap == true) {
    SpawnIconsForFieldMap(this);
  }
  else {
    SpawnPhasingActorIcon(this);
    SpawnPartyIcon(this);
    SpawnDungeonPartyIcon(this);
    SpawnIconByMapIndexSpawnTable(this);
    if ((char)this->MapType == '\x01') {
      SpawnPlayerIcon(this);
    }
  }
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return;
}

// OnOpenInit @ 14c097430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::OnOpenInit(UDS_W_MapSpawnUnscaled *this)

{
  int *piVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  UDS_ZoneManager *pUVar5;
  UDS_LogManager *pUVar6;
  UDS_PhasingManager *this_00;
  UDS_EntityManager *pUVar7;
  UDS_PartyEvent *pUVar8;
  UDS_DungeonEvent *pUVar9;
  UDS_WorldMapEvent *pUVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar11;
  UDS_WorldBossEvent *pUVar12;
  UDS_QuestEvent *pUVar13;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [56];
  int local_170;
  TArray<float,TSizedDefaultAllocator<32>_> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  UDS_UserWidget::OnOpenInit((UDS_UserWidget *)this);
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)(local_1a8 + 0x28),
                     (void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1a8 + 0x28));
    pFVar4 = (FWeakObjectPtr *)(**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x78))();
    (this->OwnerMovementCore).WeakPtr = *pFVar4;
  }
  pUVar5 = UDS_ZoneManager::GetInst();
  if (pUVar5 == (UDS_ZoneManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_W_MapSpawnUnscaled::OnOpenInit",0x22,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_158.Ptr,0x61,L"worldmapZoomStepCommonDataTableRow nullptr");
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    DS_CommonDataHelper::MinimapDefaultScale(&local_168);
    if (1 < local_168.ArrayNum) {
      this->DefaultMiniMapScale = *(float *)(local_168.AllocatorInstance.Data + 4);
    }
    DS_CommonDataHelper::WorldmapDefaultScale
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(local_1a8 + 0x30));
    if (1 < local_170) {
      this->DefaultWorldMapScale = *(float *)(local_1a8._48_8_ + 4);
    }
    this->IsFirstScaleChanged = false;
    this->IsMiniMapFirstOpen = true;
    this->IsObejctPathAllLoadComplete = false;
    this->IsNeedToRefreshIconList = false;
    this->IsContinent = false;
    this->CurCharIslandID = pUVar5->IslandID;
    piVar1 = &(this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax;
    (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax;
    (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax;
    (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax;
    (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance,0,piVar1);
    }
    UDS_PlayerData::GetMainPlayerData();
    bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)(local_1a8 + 0x20),
                       (void *)0x0);
    if (bVar2) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_W_MapSpawnUnscaled::OnOpenInit",0x22,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x80,L"playerData is nullptr.");
        if ((FScriptContainerElement *)local_158._padding_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    else {
      local_1a8._8_4_ = 0;
      local_1a8._0_8_ = OnChangedPlayerSkillTargetInfo;
      local_1a8._24_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
      local_1a8._16_8_ = OnChangedPlayerSkillTargetInfo;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1a8 + 0x20));
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_W_MapSpawnUnscaled>
                (&pUVar3[0xf].field_0x10,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_e6585b4b *)this);
      local_1a8._8_4_ = 0;
      local_1a8._0_8_ = OnChangedBreachDetailInfo;
      local_1a8._24_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
      local_1a8._16_8_ = OnChangedBreachDetailInfo;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1a8 + 0x20));
      TMulticastDelegateRegistration<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_W_MapSpawnUnscaled>
                (&pUVar3[0xc].field_0x18,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_2c2afe95 *)this);
      this_00 = UDS_PhasingManager::GetInst();
      if (this_00 != (UDS_PhasingManager *)0x0) {
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnPhasingStartOrEndDelegate;
        local_1a8._24_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
        local_1a8._16_8_ = OnPhasingStartOrEndDelegate;
        TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                    *)&this_00->PhasingStartOrEndDelegate,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_22c66401 *)this);
      }
      bVar2 = UDS_PhasingManager::IsPhasingInProgress(this_00);
      this->IsFieldMap = !bVar2;
      pUVar7 = UDS_EntityManager::GetInst();
      if (pUVar7 != (UDS_EntityManager *)0x0) {
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnSpawnEntity;
        local_1a8._24_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
        local_1a8._16_8_ = OnSpawnEntity;
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar7->OnSpawnEntityEvent,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_503fb64b *)this);
      }
      pUVar8 = UDS_PartyEvent::GetEvent();
      if (pUVar8 != (UDS_PartyEvent *)0x0) {
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnPartyJoinEvent;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->OnJoinedParty,this
                  );
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar8->OnJoinedParty,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_f374b607 *)this);
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnPartyMemberJoinEvent;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar8->OnJoinedPartyMember,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>
                    *)&pUVar8->OnJoinedPartyMember,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_c3adf236 *)this);
      }
      pUVar9 = UDS_DungeonEvent::GetEvent();
      if (pUVar9 != (UDS_DungeonEvent *)0x0) {
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnRaidPartyJoinEvent;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9->OnJoinedRaidParty,
                   this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar9->OnJoinedRaidParty,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_f374b607 *)this);
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnRaidPartyMemberJoinEvent;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar9->OnJoinedRaidPartyMember,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>
                    *)&pUVar9->OnJoinedRaidPartyMember,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_c3adf236 *)this);
      }
      pUVar10 = UDS_WorldMapEvent::GetEvent();
      if (pUVar10 != (UDS_WorldMapEvent *)0x0) {
        FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapSpawnUnscaled>
                  (&pUVar10->ReferencePosChangeDelegate,this);
        FDS_FilteredEventDelegate<int_const_,UE::Math::TVector2<double>_>::
        Remove<UDS_W_MapSpawnUnscaled>(&pUVar10->MousePosByMakerCreateDelegate,this);
        FDS_FilteredEventDelegate<int_const_,float_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
        ::Remove<UDS_W_MapSpawnUnscaled>(&pUVar10->ChangeMapPositionOffsetDelegate,this);
        FDS_FilteredEventDelegate<int_const_,bool_const_,int_const_,int_const_>::
        Remove<UDS_W_MapSpawnUnscaled>(&pUVar10->IndoorDataChanageDelegate,this);
        local_1a8._0_8_ = OnRecalculatePlayerPosChange;
        local_1a8._8_4_ = 0;
        pTVar11 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                              *)&(pUVar10->ReferencePosChangeDelegate).Subscriptions,this->MapType,
                             &this->MapType);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar11,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                    *)pTVar11,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_f374b607 *)this);
        piVar1 = &this->MapType;
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnCurPanelMousePositionOffset;
        pTVar11 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  TMapBase<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                              *)&(pUVar10->MousePosByMakerCreateDelegate).Subscriptions,*piVar1,
                             piVar1);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar11,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
        ::AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                    *)pTVar11,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_05fbb149 *)this);
        local_1a8._0_8_ = OnCurMapPositionOffset;
        local_1a8._8_4_ = 0;
        pTVar11 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
                              *)&(pUVar10->ChangeMapPositionOffsetDelegate).Subscriptions,*piVar1,
                             piVar1);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar11,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
        ::AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                    *)pTVar11,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_118043dc *)this);
        local_1a8._0_8_ = OnIndoorDataChanged;
        local_1a8._8_4_ = 0;
        pTVar11 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                  TMapBase<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>_>
                  ::FindOrAddImpl<int_const_&>
                            ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>_>
                              *)&(pUVar10->IndoorDataChanageDelegate).Subscriptions,*piVar1,piVar1);
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar11,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>
                    *)pTVar11,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_5113c5cd *)this);
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnCreateRangeOverIcon;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar10->RangeOverIconSpawnDelegate,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(__int64,int),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(__int64,int),FDefaultDelegateUserPolicy>
                    *)&pUVar10->RangeOverIconSpawnDelegate,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_9b583490 *)this);
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnMapRefrash;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar10->RefrashMapAllIconDelegate,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pUVar10->RefrashMapAllIconDelegate,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_f374b607 *)this);
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnSetContinentValue;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar10->IsContinentDelegate,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
        AddUObject<UDS_W_MapSpawnUnscaled>
                  ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                   &pUVar10->IsContinentDelegate,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_6b8ba4eb *)this);
        if (*piVar1 == 0) {
          FDS_FilteredEventDelegate<int_const_>::Remove<UDS_W_MapSpawnUnscaled>
                    (&pUVar10->MiniMapMarkerDataRefrashDelegate,this);
          local_1a8._0_8_ = OnMiniMapMarkerRefrash;
          local_1a8._8_4_ = 0;
          pTVar11 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
                    TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                    ::FindOrAddImpl<int_const_&>
                              ((TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
                                *)&(pUVar10->MiniMapMarkerDataRefrashDelegate).Subscriptions,*piVar1
                               ,piVar1);
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar11,this);
          local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
          local_1a8._16_8_ = local_1a8._0_8_;
          TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
          AddUObject<UDS_W_MapSpawnUnscaled>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                      *)pTVar11,(UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_f374b607 *)this);
        }
      }
      pUVar12 = UDS_WorldBossEvent::GetEvent();
      if (pUVar12 != (UDS_WorldBossEvent *)0x0) {
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnWorldBossStatusChange;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar12->OnChangedWorldBossStatus,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_WorldBossSpawnStatus_const_&,int),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_W_MapSpawnUnscaled>
                  (&pUVar12->OnChangedWorldBossStatus,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_6ffaa690 *)this);
      }
      pUVar13 = UDS_QuestEvent::GetEvent();
      if (pUVar13 != (UDS_QuestEvent *)0x0) {
        local_1a8._8_4_ = 0;
        local_1a8._0_8_ = OnQuestChanged;
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &pUVar13->OnChanedQuestDelegate,this);
        local_1a8._24_8_ = CONCAT44(local_1a8._12_4_,local_1a8._8_4_);
        local_1a8._16_8_ = local_1a8._0_8_;
        TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_W_MapSpawnUnscaled>
                  (&pUVar13->OnChanedQuestDelegate,(UDS_W_MapSpawnUnscaled *)local_1a8,
                   (pmf_bc793417 *)this);
      }
      local_1a8._8_4_ = 0;
      local_1a8._0_8_ = OnMainCharChanged;
      local_1a8._24_8_ = (ulonglong)(uint)local_1a8._12_4_ << 0x20;
      local_1a8._16_8_ = OnMainCharChanged;
      TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_W_MapSpawnUnscaled>
                ((TMulticastDelegateRegistration<void___cdecl(FDS_EntityBase_*,FDS_EntityBase_*),FDefaultDelegateUserPolicy>
                  *)&ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,
                 (UDS_W_MapSpawnUnscaled *)local_1a8,(pmf_b329d75d *)this);
      AsncLoadAsset(this);
    }
    if ((void *)local_1a8._48_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._48_8_);
    }
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return;
}

// OnPartyJoinEvent @ 14c098310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::OnPartyJoinEvent(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDS_PartyRepo *pFVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_PartyMemberInfo *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_238 [32];
  FWeakObjectPtr FStack_208;
  FDS_PartyMemberInfo FStack_200;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  bVar3 = FDS_PartyInfo::IsValid(&pFVar6->PartyInfo);
  if (bVar3) {
    UDS_PlayerData::GetMainPlayerData();
    bVar3 = FWeakObjectPtr::IsValid(&FStack_208);
    if (bVar3) {
      iVar4 = (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum;
      uVar10 = 0;
      if (0 < iVar4) {
        lVar11 = 0;
        do {
          if ((-1 < (int)uVar10) && ((int)uVar10 < iVar4)) {
            if (((int)uVar10 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(longlong *)((pFVar6->PartyInfo).PartyMemberInfos.AllocatorInstance.Data + lVar11)
                != 0) {
              uVar5 = 0;
              if ((int)uVar10 < (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum) {
                uVar5 = ~uVar10 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (pFVar6->PartyInfo).PartyMemberInfos.AllocatorInstance.Data;
              pUVar8 = FWeakObjectPtr::Get(&FStack_208);
              if (*(longlong *)(pFVar1 + lVar11) != *(longlong *)&pUVar8[6].field_0x8) {
                uVar5 = 0;
                if ((int)uVar10 < (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar9 = FDS_PartyMemberInfo::FDS_PartyMemberInfo
                                   (&FStack_200,
                                    (FDS_PartyMemberInfo *)
                                    ((pFVar6->PartyInfo).PartyMemberInfos.AllocatorInstance.Data +
                                    lVar11));
                CreatePartyMemberIcon(this,pFVar9);
              }
            }
          }
          iVar4 = (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum;
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0xa8;
        } while ((int)uVar10 < iVar4);
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,"UDS_W_MapSpawnUnscaled::SpawnPartyIcon",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_158.Ptr,0xaa5,L"myPlayerData is Invalid");
        if ((void *)TStack_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_158._padding_);
        }
      }
    }
  }
  return;
}

// OnPartyMemberJoinEvent @ 14c098500

void __thiscall
UDS_W_MapSpawnUnscaled::OnPartyMemberJoinEvent(UDS_W_MapSpawnUnscaled *this,long64 param_1)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_PartyMemberInfo *pFVar3;
  FDS_PartyMemberInfo local_b8;
  
  pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  pFVar3 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar2->PartyInfo,param_1);
  bVar1 = FDS_PartyMemberInfo::IsValid(pFVar3);
  if (bVar1) {
    pFVar3 = FDS_PartyMemberInfo::FDS_PartyMemberInfo(&local_b8,pFVar3);
    CreatePartyMemberIcon(this,pFVar3);
  }
  return;
}

// OnPhasingStartOrEndDelegate @ 14c0986c0

void __thiscall
UDS_W_MapSpawnUnscaled::OnPhasingStartOrEndDelegate(UDS_W_MapSpawnUnscaled *this,bool *param_1)

{
  this->IsFieldMap = *param_1 == false;
  RefrashIconList(this);
  return;
}

// OnPlayerIconObjectLoaded @ 14c0986e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnPlayerIconObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(param_1,&local_158);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_MapSpawnUnscaled::OnPlayerIconObjectLoaded",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x1e9,L"Invalid PlayerIconObjectPath : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FSoftObjectPath::operator=(&this->PlayerIconObjectPath,param_1);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnQuestChanged @ 14c0988f0

void __thiscall
UDS_W_MapSpawnUnscaled::OnQuestChanged
          (UDS_W_MapSpawnUnscaled *this,int param_1,EDS_QuestDataType param_2)

{
  EDS_QuestType EVar1;
  
  EVar1 = UDS_QuestManager::GetQuestType(param_1);
  if ((EVar1 != Main) && (EVar1 != Local)) {
    return;
  }
  RefrashIconList(this);
  return;
}

// OnQuestIconObjectLoaded @ 14c098930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnQuestIconObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  ForAnyElementType _Src;
  int iVar5;
  UDS_LogManager *pUVar6;
  FString *pFVar7;
  FUtf8String *pFVar8;
  size_t _Size;
  undefined1 auStackY_208 [32];
  FSoftObjectPath local_1c8;
  FString local_1a8;
  TStringView<wchar_t> local_198;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14c098b20;
    pUVar6 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(param_1,&local_1a8);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_W_MapSpawnUnscaled::OnQuestIconObjectLoaded",0x2f,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x20f,L"Invalid InQuestIconObjectPath : %s");
    FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
      FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar7 = FSoftObjectPath::ToString(param_1,&local_178);
    pFVar7 = FWN_SoftObjectUtils::GetObjectPath(&local_188,pFVar7,false);
    local_1c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.PackageName.Number = 0;
    local_1c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.AssetName.Number = 0;
    local_1c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.SubPathString.Data.ArrayNum = 0;
    local_1c8.SubPathString.Data.ArrayMax = 0;
    local_1a8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    iVar2 = (pFVar7->Data).ArrayNum;
    local_1a8.Data.ArrayNum = iVar2 + -1;
    if (iVar2 == 0) {
      local_1a8.Data.ArrayNum = 0;
    }
    local_198._12_4_ = local_1a8.Data.ArrayMax;
    local_198.Size = local_1a8.Data.ArrayNum;
    local_198.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_1c8,&local_198);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    _Src.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    (this->QuestIconObjectPath).AssetPath.PackageName = local_1c8.AssetPath.PackageName;
    (this->QuestIconObjectPath).AssetPath.AssetName = local_1c8.AssetPath.AssetName;
    pFVar8 = &(this->QuestIconObjectPath).SubPathString;
    FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    if (pFVar8 != &local_1c8.SubPathString) {
      iVar5 = local_1c8.SubPathString.Data.ArrayNum;
      _Size = (size_t)local_1c8.SubPathString.Data.ArrayNum;
      piVar1 = &(this->QuestIconObjectPath).SubPathString.Data.ArrayMax;
      iVar2 = *piVar1;
      (this->QuestIconObjectPath).SubPathString.Data.ArrayNum =
           local_1c8.SubPathString.Data.ArrayNum;
      if ((local_1c8.SubPathString.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1c8.SubPathString.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar8,
                   local_1c8.SubPathString.Data.ArrayNum,piVar1);
        FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        if (iVar5 != 0) {
          memcpy((pFVar8->Data).AllocatorInstance.Data,_Src.Data,_Size);
          FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_14c098b20:
  pFVar3 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnRaidPartyJoinEvent @ 14c098b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::OnRaidPartyJoinEvent(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDS_RaidPartyRepo *this_00;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_RaidPartyMemberInfo *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_2f8 [32];
  FWeakObjectPtr FStack_2c8;
  FDS_RaidPartyMemberInfo FStack_2c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_158;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
  if (bVar3) {
    UDS_PlayerData::GetMainPlayerData();
    bVar3 = FWeakObjectPtr::IsValid(&FStack_2c8);
    if (bVar3) {
      iVar4 = (this_00->RaidPartyInfo).Members.ArrayNum;
      uVar10 = 0;
      if (0 < iVar4) {
        lVar11 = 0;
        do {
          if ((-1 < (int)uVar10) && ((int)uVar10 < iVar4)) {
            uVar9 = ~uVar10 >> 0x1f;
            if (((int)uVar10 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(longlong *)((this_00->RaidPartyInfo).Members.AllocatorInstance.Data + lVar11 + 8)
                != 0) {
              uVar5 = 0;
              if ((int)uVar10 < (this_00->RaidPartyInfo).Members.ArrayNum) {
                uVar5 = uVar9;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (this_00->RaidPartyInfo).Members.AllocatorInstance.Data;
              pUVar7 = FWeakObjectPtr::Get(&FStack_2c8);
              if (*(longlong *)(pFVar1 + lVar11 + 8) != *(longlong *)&pUVar7[6].field_0x8) {
                uVar5 = 0;
                if ((int)uVar10 < (this_00->RaidPartyInfo).Members.ArrayNum) {
                  uVar5 = uVar9;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((this_00->RaidPartyInfo).Members.AllocatorInstance.Data[lVar11 + 0x2c] ==
                    (FScriptContainerElement)0x4) {
                  uVar5 = 0;
                  if ((int)uVar10 < (this_00->RaidPartyInfo).Members.ArrayNum) {
                    uVar5 = uVar9;
                  }
                  if ((uVar5 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar8 = FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
                                     (&FStack_2c0,
                                      (FDS_RaidPartyMemberInfo *)
                                      ((this_00->RaidPartyInfo).Members.AllocatorInstance.Data +
                                      (longlong)(int)uVar10 * 0x160));
                  CreateRaidPartyMemberIcon(this,pFVar8);
                }
              }
            }
          }
          iVar4 = (this_00->RaidPartyInfo).Members.ArrayNum;
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x160;
        } while ((int)uVar10 < iVar4);
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        TStack_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_158,"UDS_W_MapSpawnUnscaled::SpawnDungeonPartyIcon",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,TStack_158.Ptr,0xac6,L"myPlayerData is Invalid");
        if ((void *)TStack_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_158._padding_);
        }
      }
    }
  }
  return;
}

// OnRaidPartyMemberJoinEvent @ 14c098d40

void __thiscall
UDS_W_MapSpawnUnscaled::OnRaidPartyMemberJoinEvent(UDS_W_MapSpawnUnscaled *this,long64 param_1)

{
  FDS_RaidPartyRepo *this_00;
  FDS_RaidPartyMemberInfo *pFVar1;
  FDS_RaidPartyMemberInfo local_168;
  
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar1 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(this_00,param_1);
  if (pFVar1->MemberState == DungeonInPlay) {
    pFVar1 = FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo(&local_168,pFVar1);
    CreateRaidPartyMemberIcon(this,pFVar1);
  }
  return;
}

// OnRangeOverIconObjectLoaded @ 14c098ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnRangeOverIconObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  ForAnyElementType _Src;
  int iVar5;
  UDS_LogManager *pUVar6;
  FString *pFVar7;
  FUtf8String *pFVar8;
  size_t _Size;
  undefined1 auStackY_208 [32];
  FSoftObjectPath local_1c8;
  FString local_1a8;
  TStringView<wchar_t> local_198;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14c0990d0;
    pUVar6 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(param_1,&local_1a8);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_W_MapSpawnUnscaled::OnRangeOverIconObjectLoaded",0x33,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x1f5,L"Invalid InRangeOverIconObjectPath : %s");
    FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
      FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar7 = FSoftObjectPath::ToString(param_1,&local_178);
    pFVar7 = FWN_SoftObjectUtils::GetObjectPath(&local_188,pFVar7,false);
    local_1c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.PackageName.Number = 0;
    local_1c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.AssetName.Number = 0;
    local_1c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.SubPathString.Data.ArrayNum = 0;
    local_1c8.SubPathString.Data.ArrayMax = 0;
    local_1a8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    iVar2 = (pFVar7->Data).ArrayNum;
    local_1a8.Data.ArrayNum = iVar2 + -1;
    if (iVar2 == 0) {
      local_1a8.Data.ArrayNum = 0;
    }
    local_198._12_4_ = local_1a8.Data.ArrayMax;
    local_198.Size = local_1a8.Data.ArrayNum;
    local_198.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_1c8,&local_198);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    _Src.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    (this->RangeOverIconObjectPath).AssetPath.PackageName = local_1c8.AssetPath.PackageName;
    (this->RangeOverIconObjectPath).AssetPath.AssetName = local_1c8.AssetPath.AssetName;
    pFVar8 = &(this->RangeOverIconObjectPath).SubPathString;
    FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    if (pFVar8 != &local_1c8.SubPathString) {
      iVar5 = local_1c8.SubPathString.Data.ArrayNum;
      _Size = (size_t)local_1c8.SubPathString.Data.ArrayNum;
      piVar1 = &(this->RangeOverIconObjectPath).SubPathString.Data.ArrayMax;
      iVar2 = *piVar1;
      (this->RangeOverIconObjectPath).SubPathString.Data.ArrayNum =
           local_1c8.SubPathString.Data.ArrayNum;
      if ((local_1c8.SubPathString.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1c8.SubPathString.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar8,
                   local_1c8.SubPathString.Data.ArrayNum,piVar1);
        FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        if (iVar5 != 0) {
          memcpy((pFVar8->Data).AllocatorInstance.Data,_Src.Data,_Size);
          FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_14c0990d0:
  pFVar3 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnRecalculatePlayerPosChange @ 14c099110

void __thiscall UDS_W_MapSpawnUnscaled::OnRecalculatePlayerPosChange(UDS_W_MapSpawnUnscaled *this)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  UDS_MovementCore *pUVar4;
  TVector<double> *pTVar5;
  double dVar6;
  double dVar7;
  TVector<double> local_48;
  TVector<double> local_30;
  
  bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMovementCore,(void *)0x0);
  if (!bVar3) {
    if (this->IsIndoor == true) {
      bVar3 = this->CurLookIndoorGroupID == this->CurCharIndoorGroupID;
    }
    else {
      bVar3 = this->CurCharIslandID == this->CurLookIslandID;
    }
    if (bVar3) {
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
      pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,&local_48);
      dVar1 = (pTVar5->field0_0x0)._s_0.Y;
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get(&(this->OwnerMovementCore).WeakPtr);
      pTVar5 = UDS_MovementCore::GetActorLocation(pUVar4,&local_30);
      (this->ReferenceGlobalPosition).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      (this->ReferenceGlobalPosition).field0_0x0._s_0.Y = dVar1;
      return;
    }
    if (this->IsIndoor == true) {
      dVar1 = (this->MapIndoorStartPos).field0_0x0._s_0.Y;
      dVar2 = (this->MapIndoorStartPos).field0_0x0._s_0.X;
      dVar6 = dVar1 - (this->MapIndoorEndPos).field0_0x0._s_0.Y;
      dVar7 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
              __real_3fe0000000000000;
      dVar6 = dVar2 - (this->MapIndoorEndPos).field0_0x0._s_0.X;
      (this->ReferenceGlobalPosition).field0_0x0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
           __real_3fe0000000000000 + dVar2;
      (this->ReferenceGlobalPosition).field0_0x0._s_0.Y = dVar7 + dVar1;
      return;
    }
    dVar1 = (this->MapStartPos).field0_0x0._s_0.Y;
    dVar2 = (this->MapStartPos).field0_0x0._s_0.X;
    dVar6 = ((this->MapEndPos).field0_0x0._s_0.Y - dVar1) * __real_3fe0000000000000;
    (this->ReferenceGlobalPosition).field0_0x0._s_0.X =
         ((this->MapEndPos).field0_0x0._s_0.X - dVar2) * __real_3fe0000000000000 + dVar2;
    (this->ReferenceGlobalPosition).field0_0x0._s_0.Y = dVar6 + dVar1;
  }
  return;
}

// OnSetContinentValue @ 14c099470

void __thiscall
UDS_W_MapSpawnUnscaled::OnSetContinentValue(UDS_W_MapSpawnUnscaled *this,bool param_1)

{
  this->IsContinent = param_1;
  return;
}

// OnSpawnEntity @ 14c09bd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::OnSpawnEntity(UDS_W_MapSpawnUnscaled *this,ulong64 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_EntityManager *this_00;
  UDS_LogManager *pUVar6;
  UDS_PhasingManager *this_01;
  FDS_EntityBase *pFVar7;
  FDS_NpcBaseTableRow *pFVar8;
  UDS_MovementCore *this_02;
  ForAnyElementType FVar9;
  undefined1 auStackY_568 [32];
  undefined1 local_528 [8];
  FWeakObjectPtr local_520;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_518;
  ulong64 *local_508;
  TVector<double>_u_0 local_500;
  TVector<double>_u_0 local_4e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_568;
  if (this->IsFieldMap != true) {
    local_508 = param_1;
    this_00 = UDS_EntityManager::GetInst();
    if (this_00 == (UDS_EntityManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_4c8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4c8,"UDS_W_MapSpawnUnscaled::OnSpawnEntity",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_4c8.Ptr,0x8da,L"entityMgr is nullptr.");
        if ((void *)local_4c8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_4c8._padding_);
        }
      }
    }
    else {
      this_01 = UDS_PhasingManager::GetInst();
      if (this_01 == (UDS_PhasingManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_3a8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_3a8,"UDS_W_MapSpawnUnscaled::OnSpawnEntity",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_3a8.Ptr,0x8e1,L"phasingMgr is nullptr.");
        local_518.AllocatorInstance.Data = (FScriptContainerElement *)local_3a8._padding_;
      }
      else {
        pFVar7 = UDS_EntityManager::FindEntityBase(this_00,*param_1);
        if (pFVar7 != (FDS_EntityBase *)0x0) {
          if (pFVar7->EntityType != NPC) {
            return;
          }
          iVar5 = UDS_PhasingManager::GetPhasingIDInProgress(this_01);
          FDS_NpcSpawnTableRow::GetByPhasingBaseID(&local_518,(longlong)iVar5);
          iVar5 = local_518.ArrayNum;
          pFVar1 = local_518.AllocatorInstance.Data + (longlong)local_518.ArrayNum * 8;
          FVar9.Data = local_518.AllocatorInstance.Data;
          do {
            if (local_518.ArrayNum != iVar5) {
              local_528[0] = 0;
              `TCheckedPointerIterator<FDS_NpcSpawnTableRow_const_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_528);
            }
            if (FVar9.Data == pFVar1) goto LAB_14c09c13b;
            lVar2 = *(longlong *)FVar9.Data;
            if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == pFVar7->SpawnTableID)) {
              if (*(int *)(lVar2 + 0x28) < 1) {
                pUVar6 = UDS_LogManager::GetInst();
                if (pUVar6 != (UDS_LogManager *)0x0) {
                  pUVar6 = UDS_LogManager::GetInst();
                  local_168._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_168,"UDS_W_MapSpawnUnscaled::OnSpawnEntity",0x25,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar6,1,Warning,local_168.Ptr,0x8fd,L"====npcSpawnTableRow ID = %d");
                  if ((void *)local_168._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_168._padding_);
                  }
                }
                goto LAB_14c09c13b;
              }
              if (*(char *)(lVar2 + 0xc4) == '\0') goto LAB_14c09c13b;
              if ((*(int *)(lVar2 + 0x28) < 1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar8 = FDS_NpcBaseTableRow::Get((longlong)**(int **)(lVar2 + 0x20),true);
              if (pFVar8 == (FDS_NpcBaseTableRow *)0x0) goto LAB_14c09c13b;
              (**(code **)(pFVar7->_padding_ + 0x78))(pFVar7);
              bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_520,
                                 (void *)0x0);
              if (!bVar4) {
                this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_520);
                UDS_MovementCore::GetActorLocation(this_02,(TVector<double> *)&local_500._s_0);
                local_4e8._s_0.X = local_500._s_0.X;
                local_4e8._s_0.Y = local_500._s_0.Y;
                local_4e8._s_0.Z = local_500._s_0.Z;
                CreatePhasingNPCIcon
                          (this,(TVector<double> *)&local_4e8._s_0,*local_508,pFVar7->SpawnTableID,
                           pFVar8);
              }
            }
            FVar9.Data = FVar9.Data + 8;
          } while( true );
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_W_MapSpawnUnscaled::OnSpawnEntity",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_288.Ptr,0x8e8,L"entityBase is nullptr.");
        local_518.AllocatorInstance.Data = (FScriptContainerElement *)local_288._padding_;
      }
LAB_14c09c13b:
      if (local_518.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// OnTextOnlyObjectLoaded @ 14c09c180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnTextOnlyObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  FScriptContainerElement *pFVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_198 [32];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      FSoftObjectPath::ToString(param_1,&local_158);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_MapSpawnUnscaled::OnTextOnlyObjectLoaded",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x1a4,L"Invalid InTextOnlyObjectPath : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FSoftObjectPath::operator=(&this->TextOnlyObjectPath,param_1);
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnTextureScale @ 14c09c2d0

void __thiscall UDS_W_MapSpawnUnscaled::OnTextureScale(UDS_W_MapSpawnUnscaled *this,float param_1)

{
  if (this->IsFirstScaleChanged == false) {
    this->IsFirstScaleChanged = true;
    return;
  }
  this->TextureScale = param_1;
  return;
}

// OnWorldBossIconObjectLoaded @ 14c09e2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::OnWorldBossIconObjectLoaded
          (UDS_W_MapSpawnUnscaled *this,FSoftObjectPath *param_1,FWN_EndOfRefs *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  ForAnyElementType _Src;
  int iVar5;
  UDS_LogManager *pUVar6;
  FString *pFVar7;
  FUtf8String *pFVar8;
  size_t _Size;
  undefined1 auStackY_208 [32];
  FSoftObjectPath local_1c8;
  FString local_1a8;
  TStringView<wchar_t> local_198;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_1->AssetPath).PackageName == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14c09e4c0;
    pUVar6 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(param_1,&local_1a8);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_W_MapSpawnUnscaled::OnWorldBossIconObjectLoaded",0x33,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x202,L"Invalid InWorldBossIconObjectPath : %s");
    FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
      FVar4.Data = local_1a8.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar7 = FSoftObjectPath::ToString(param_1,&local_178);
    pFVar7 = FWN_SoftObjectUtils::GetObjectPath(&local_188,pFVar7,false);
    local_1c8.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.PackageName.Number = 0;
    local_1c8.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_1c8.AssetPath.AssetName.Number = 0;
    local_1c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.SubPathString.Data.ArrayNum = 0;
    local_1c8.SubPathString.Data.ArrayMax = 0;
    local_1a8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    iVar2 = (pFVar7->Data).ArrayNum;
    local_1a8.Data.ArrayNum = iVar2 + -1;
    if (iVar2 == 0) {
      local_1a8.Data.ArrayNum = 0;
    }
    local_198._12_4_ = local_1a8.Data.ArrayMax;
    local_198.Size = local_1a8.Data.ArrayNum;
    local_198.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_1c8,&local_198);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    _Src.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    (this->WorldBossIconObjectPath).AssetPath.PackageName = local_1c8.AssetPath.PackageName;
    (this->WorldBossIconObjectPath).AssetPath.AssetName = local_1c8.AssetPath.AssetName;
    pFVar8 = &(this->WorldBossIconObjectPath).SubPathString;
    FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
    if (pFVar8 != &local_1c8.SubPathString) {
      iVar5 = local_1c8.SubPathString.Data.ArrayNum;
      _Size = (size_t)local_1c8.SubPathString.Data.ArrayNum;
      piVar1 = &(this->WorldBossIconObjectPath).SubPathString.Data.ArrayMax;
      iVar2 = *piVar1;
      (this->WorldBossIconObjectPath).SubPathString.Data.ArrayNum =
           local_1c8.SubPathString.Data.ArrayNum;
      if ((local_1c8.SubPathString.Data.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_1c8.SubPathString.Data.ArrayNum,iVar2,(ForAnyElementType *)pFVar8,
                   local_1c8.SubPathString.Data.ArrayNum,piVar1);
        FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        if (iVar5 != 0) {
          memcpy((pFVar8->Data).AllocatorInstance.Data,_Src.Data,_Size);
          FVar4.Data = local_1c8.SubPathString.Data.AllocatorInstance.Data;
        }
      }
    }
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
LAB_14c09e4c0:
  pFVar3 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnWorldBossStatusChange @ 14c09e500

void __thiscall
UDS_W_MapSpawnUnscaled::OnWorldBossStatusChange
          (UDS_W_MapSpawnUnscaled *this,EDS_WorldBossSpawnStatus *param_1,int param_2)

{
  UDS_WorldMapEvent *pUVar1;
  
  if (*param_1 == NotSpawned) {
    pUVar1 = UDS_WorldMapEvent::GetEvent();
    if (pUVar1 != (UDS_WorldMapEvent *)0x0) {
      FDS_EventDelegate<__int64_const_>::Broadcast
                (&pUVar1->DeleteWorldBossIconDelegate,(longlong)param_2);
      return;
    }
  }
  else if (*param_1 == Spawned) {
    CreateWorldBossIcon(this,param_2);
    return;
  }
  return;
}

// ProcessQuestCompleteCreateIcon @ 14c09ead0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::ProcessQuestCompleteCreateIcon
          (UDS_W_MapSpawnUnscaled *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FDS_QuestLocalTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  FDS_QuestMainTableRow *pFVar8;
  ulonglong uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b6 [2];
  uint local_1b4;
  double local_1b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1a8;
  TVector<double>_u_0 local_198;
  FScriptContainerElement *local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b4 = param_1->ArrayNum;
  uVar9 = (ulonglong)(int)local_1b4;
  pFVar12 = (param_1->AllocatorInstance).Data;
  local_178 = pFVar12 + uVar9 * 4;
  local_1a8 = param_1;
  do {
    pFVar1 = local_178;
    if (local_1a8->ArrayNum != (int)uVar9) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b6);
    }
    if (pFVar12 == pFVar1) {
      pFVar12 = (local_1a8->AllocatorInstance).Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      return;
    }
    iVar3 = *(int *)pFVar12;
    iVar10 = 0;
    local_198._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_198._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (param_2) {
      pFVar8 = FDS_QuestMainTableRow::Get((longlong)iVar3,true);
      if (pFVar8 != (FDS_QuestMainTableRow *)0x0) {
        local_198._s_0.X = (pFVar8->CompleteCoordinate).field0_0x0._s_0.X;
        local_198._s_0.Y = (pFVar8->CompleteCoordinate).field0_0x0._s_0.Y;
        iVar10 = pFVar8->ID_CompleteZone;
        uVar2 = *(undefined8 *)((longlong)&(pFVar8->CompleteCoordinate).field0_0x0 + 0x10);
        uVar13 = (undefined4)uVar2;
        uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
LAB_14c09ece3:
        local_1b0 = (double)CONCAT44(uVar14,uVar13);
      }
      if (this->IsIndoor == true) {
        bVar5 = CheckZoneInIndoorGroup(this,iVar10);
      }
      else {
        bVar5 = CheckZoneInIsland(this,iVar10);
      }
      if (bVar5 != false) {
        local_198._s_0.Z = local_1b0;
        CreateMainQuestProgressStateIcon
                  (this,!param_2 * '\x02' + QuestMainComplete,iVar3,0,
                   (TVector<double> *)&local_198._s_0,param_2);
      }
    }
    else {
      pFVar6 = FDS_QuestLocalTableRow::Get((longlong)iVar3,true);
      if (pFVar6 == (FDS_QuestLocalTableRow *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = (longlong)pFVar6;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::ProcessQuestCompleteCreateIcon",0x36,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_168.Ptr,0x322,L"questLocalTableRow is nullptr.");
          if ((FDS_QuestLocalTableRow *)local_168._padding_ != (FDS_QuestLocalTableRow *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
      else {
        pFVar11 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data;
        iVar10 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum;
        iVar4 = pFVar6->ID_CompleteNpc;
        pFVar1 = pFVar11 + (longlong)iVar10 * 4;
        while( true ) {
          if ((this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum != iVar10) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1b6);
          }
          if (pFVar11 == pFVar1) {
            pFVar11 = (this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance.Data;
            iVar10 = (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum;
            iVar4 = pFVar6->ID_CompleteNpc;
            pFVar1 = pFVar11 + (longlong)iVar10 * 4;
            goto LAB_14c09ec80;
          }
          if (*(int *)pFVar11 == iVar4) break;
          pFVar11 = pFVar11 + 4;
        }
      }
    }
LAB_14c09ed3e:
    pFVar12 = pFVar12 + 4;
    uVar9 = (ulonglong)local_1b4;
  } while( true );
LAB_14c09ec80:
  if ((this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum != iVar10) {
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b6);
  }
  if (pFVar11 == pFVar1) {
    local_198._s_0.X = (pFVar6->CompleteCoordinate).field0_0x0._s_0.X;
    local_198._s_0.Y = (pFVar6->CompleteCoordinate).field0_0x0._s_0.Y;
    iVar10 = pFVar6->ID_CompleteZone;
    uVar2 = *(undefined8 *)((longlong)&(pFVar6->CompleteCoordinate).field0_0x0 + 0x10);
    uVar13 = (undefined4)uVar2;
    uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    goto LAB_14c09ece3;
  }
  if (*(int *)pFVar11 == iVar4) goto LAB_14c09ed3e;
  pFVar11 = pFVar11 + 4;
  goto LAB_14c09ec80;
}

// ProcessQuestProgressCreateIcon @ 14c09edd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::ProcessQuestProgressCreateIcon
          (UDS_W_MapSpawnUnscaled *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  int iVar1;
  bool bVar2;
  FDS_QuestMainTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_QuestLocalTableRow *pFVar5;
  FDS_QuestBaseTableRow *pFVar6;
  FDS_QuestObjectiveTableRow *pFVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 auStackY_208 [32];
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 local_1c7 [7];
  FScriptContainerElement *local_1c0;
  ForAnyElementType local_1b8;
  int local_1b0;
  int local_1ac [2];
  uint local_1a4;
  FScriptContainerElement *local_1a0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_198;
  TVector<double>_u_0 local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_1a4 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_1a4;
  pFVar12 = pFVar14 + uVar8 * 4;
  local_1c0 = pFVar12;
  local_198 = param_1;
  do {
    local_1a0 = pFVar14;
    if (local_198->ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1c7);
    }
    if (pFVar14 == pFVar12) {
      pFVar12 = (local_198->AllocatorInstance).Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      return;
    }
    iVar1 = *(int *)pFVar14;
    lVar15 = (longlong)iVar1;
    if (param_2) {
      pFVar3 = FDS_QuestMainTableRow::Get(lVar15,true);
      if (pFVar3 == (FDS_QuestMainTableRow *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::ProcessQuestProgressCreateIcon",0x36,Yes);
          pwVar17 = L"questMainTableRow is nullptr.";
          uVar16 = 0x2cf;
          goto LAB_14c09eec0;
        }
      }
      else {
        pFVar11 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data;
        iVar9 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum;
        iVar10 = pFVar3->ID_CompleteNpc;
        pFVar14 = pFVar11 + (longlong)iVar9 * 4;
        while( true ) {
          if ((this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum != iVar9) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1c7);
          }
          if (pFVar11 == pFVar14) goto LAB_14c09eff8;
          pFVar12 = local_1c0;
          if (*(int *)pFVar11 == iVar10) break;
          pFVar11 = pFVar11 + 4;
        }
      }
    }
    else {
      pFVar5 = FDS_QuestLocalTableRow::Get(lVar15,true);
      if (pFVar5 == (FDS_QuestLocalTableRow *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_168._padding_ = (longlong)pFVar5;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_W_MapSpawnUnscaled::ProcessQuestProgressCreateIcon",0x36,Yes);
          pwVar17 = L"questLocalTableRow is nullptr.";
          uVar16 = 0x2de;
LAB_14c09eec0:
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_168.Ptr,uVar16,pwVar17);
          pFVar12 = local_1c0;
          if ((FDS_QuestLocalTableRow *)local_168._padding_ != (FDS_QuestLocalTableRow *)0x0) {
            FMemory::Free((void *)local_168._padding_);
            pFVar12 = local_1c0;
          }
        }
      }
      else {
        pFVar11 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance.Data;
        iVar9 = (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum;
        iVar10 = pFVar5->ID_CompleteNpc;
        pFVar14 = pFVar11 + (longlong)iVar9 * 4;
        while( true ) {
          if ((this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum != iVar9) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_1c7);
          }
          if (pFVar11 == pFVar14) break;
          pFVar12 = local_1c0;
          if (*(int *)pFVar11 == iVar10) goto LAB_14c09f132;
          pFVar11 = pFVar11 + 4;
        }
        bVar2 = CheckIsNpcSpawnedCompleteLocalQuest(this,pFVar5->ID_CompleteNpc);
        pFVar12 = local_1c0;
        if ((!bVar2) &&
           (bVar2 = CheckIsNpcSpawnedProgressMainQuest(this,pFVar5->ID_CompleteNpc),
           pFVar12 = local_1c0, !bVar2)) {
LAB_14c09eff8:
          pFVar6 = FDS_QuestBaseTableRow::Get(lVar15,true);
          pFVar12 = local_1c0;
          if (pFVar6 != (FDS_QuestBaseTableRow *)0x0) {
            local_1b8.Data = (FScriptContainerElement *)0x0;
            local_1b0 = (pFVar6->ID_QuestObjectiveId).ArrayNum;
            lVar15 = (longlong)local_1b0;
            pFVar12 = (pFVar6->ID_QuestObjectiveId).AllocatorInstance.Data;
            if (local_1b0 == 0) {
              local_1ac[0] = 0;
              iVar9 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_1b0,0,&local_1b8,local_1b0,local_1ac);
              memcpy(local_1b8.Data,pFVar12,lVar15 << 2);
              iVar9 = local_1b0;
            }
            pFVar12 = local_1b8.Data + (longlong)iVar9 * 4;
            FVar13.Data = local_1b8.Data;
            iVar10 = iVar9;
            while( true ) {
              if (iVar10 != iVar9) {
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_1c7);
              }
              if (FVar13.Data == pFVar12) break;
              iVar10 = *(int *)FVar13.Data;
              pFVar7 = FDS_QuestObjectiveTableRow::Get((longlong)iVar10,true);
              if ((pFVar7 != (FDS_QuestObjectiveTableRow *)0x0) &&
                 (pFVar7->IsProgressMapIconVisible != false)) {
                if (this->IsIndoor == true) {
                  bVar2 = CheckZoneInIndoorGroup(this,pFVar7->ID_ProgressZone);
                }
                else {
                  bVar2 = CheckZoneInIsland(this,pFVar7->ID_ProgressZone);
                }
                if (bVar2 != false) {
                  local_188._s_0.X = (pFVar7->ProgressCoordinate).field0_0x0._s_0.X;
                  local_188._s_0.Y = (pFVar7->ProgressCoordinate).field0_0x0._s_0.Y;
                  local_188._s_0.Z = (pFVar7->ProgressCoordinate).field0_0x0._s_0.Z;
                  CreateMainQuestProgressStateIcon
                            (this,QuestProgressLocation,iVar1,iVar10,
                             (TVector<double> *)&local_188._s_0,param_2);
                }
              }
              FVar13.Data = FVar13.Data + 4;
              iVar10 = local_1b0;
            }
            pFVar12 = local_1c0;
            if (local_1b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data);
              pFVar12 = local_1c0;
            }
          }
        }
      }
    }
LAB_14c09f132:
    pFVar14 = local_1a0 + 4;
    uVar8 = (ulonglong)local_1a4;
  } while( true );
}

// RefrashIconList @ 14c09f930

void __thiscall UDS_W_MapSpawnUnscaled::RefrashIconList(UDS_W_MapSpawnUnscaled *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_WorldMapEvent *pUVar5;
  longlong lVar6;
  uint uVar7;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_18;
  
  UPanelWidget::GetAllChildren((UPanelWidget *)this->PanelMain,&local_18);
  uVar7 = 0;
  if (0 < local_18.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < local_18.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)(local_18.AllocatorInstance.Data + lVar6) + 0x2d0))();
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < local_18.ArrayNum);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance,0,piVar1);
  }
  pUVar5 = UDS_WorldMapEvent::GetEvent();
  if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar5->OnCloseInitDelegate);
  }
  if (this->IsFieldMap == true) {
    SpawnIconsForFieldMap(this);
  }
  else {
    SpawnPhasingActorIcon(this);
    SpawnPartyIcon(this);
    SpawnDungeonPartyIcon(this);
    SpawnIconByMapIndexSpawnTable(this);
    if ((char)this->MapType == '\x01') {
      SpawnPlayerIcon(this);
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// RefreshIconIfReady @ 14c0a0140

void __thiscall UDS_W_MapSpawnUnscaled::RefreshIconIfReady(UDS_W_MapSpawnUnscaled *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_WorldMapEvent *pUVar5;
  longlong lVar6;
  uint uVar7;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (this->IsObejctPathAllLoadComplete != true) {
    this->IsNeedToRefreshIconList = true;
    return;
  }
  UPanelWidget::GetAllChildren((UPanelWidget *)this->PanelMain,&TStack_18);
  uVar7 = 0;
  if (0 < TStack_18.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < TStack_18.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)(TStack_18.AllocatorInstance.Data + lVar6) + 0x2d0))();
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < TStack_18.ArrayNum);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByMainCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByMainCompleteQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalProgressQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalProgressQuest).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayMax;
  (this->SpawnedNPC_ID_ListByLocalCompleteQuest).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SpawnedNPC_ID_ListByLocalCompleteQuest).AllocatorInstance,0,piVar1);
  }
  pUVar5 = UDS_WorldMapEvent::GetEvent();
  if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar5->OnCloseInitDelegate);
  }
  if (this->IsFieldMap == true) {
    SpawnIconsForFieldMap(this);
  }
  else {
    SpawnPhasingActorIcon(this);
    SpawnPartyIcon(this);
    SpawnDungeonPartyIcon(this);
    SpawnIconByMapIndexSpawnTable(this);
    if ((char)this->MapType == '\x01') {
      SpawnPlayerIcon(this);
    }
  }
  if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_18.AllocatorInstance.Data);
  }
  return;
}

// SetupCanvasPanelSlot @ 14c0a1ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::SetupCanvasPanelSlot
          (UDS_W_MapSpawnUnscaled *this,UDS_UserWidget *param_1,TVector2<double> *param_2,
          int param_3,UCanvasPanelSlot **param_4)

{
  UCanvasPanelSlot *this_00;
  TVector2<double>_u_0 local_18;
  
  this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)param_1);
  *param_4 = this_00;
  if (this_00 != (UCanvasPanelSlot *)0x0) {
    local_18._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_18._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_18._s_0);
    local_18._s_0.X = ___xmm_3fe00000000000003fe0000000000000;
    local_18._s_0.Y = _UNK_150689678;
    UCanvasPanelSlot::SetAlignment(*param_4,(TVector2<double> *)&local_18._s_0);
    UCanvasPanelSlot::SetZOrder(*param_4,-param_3);
  }
  return;
}

// SpawnBreachIconOnce @ 14c0a8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnBreachIconOnce(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UDS_W_MapSpawnUnscaled *this_00;
  bool bVar3;
  int iVar4;
  UDS_WorldMapManager *this_01;
  UDS_LogManager *pUVar5;
  FDS_MapIndoorGroupTableRow *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FDS_ZoneIslandTableRow *pFVar8;
  UDS_PlayerData *this_02;
  void *pvVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  ForAnyElementType FVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStackY_568 [32];
  undefined1 local_528;
  undefined1 local_527 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_520;
  undefined1 local_510 [8];
  ForAnyElementType local_508;
  int local_500;
  int local_4fc;
  ForAnyElementType local_4f8;
  int local_4f0;
  int local_4ec;
  FWeakObjectPtr local_4e8;
  UDS_W_MapSpawnUnscaled *local_4e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_4d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_4e0 = this;
  this_01 = UDS_WorldMapManager::GetInst();
  if (this_01 == (UDS_WorldMapManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_W_MapSpawnUnscaled::SpawnBreachIconOnce",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_4b8.Ptr,0xb4e,L"worldMapMng is nullptr.");
    FVar11.Data = (FScriptContainerElement *)local_4b8._padding_;
    goto LAB_14c0a8668;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_4e8,(void *)0x0);
  if (bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"UDS_W_MapSpawnUnscaled::SpawnBreachIconOnce",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_398.Ptr,0xb55,L"playerData is nullptr.");
    FVar11.Data = (FScriptContainerElement *)local_398._padding_;
    goto LAB_14c0a8668;
  }
  if (this_01->IsBreachDataAllLoad == false) {
    return;
  }
  local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.ArrayNum = 0;
  local_520.ArrayMax = 0;
  if (this->IsIndoor == true) {
    pFVar6 = FDS_MapIndoorGroupTableRow::Get((longlong)this->CurLookIndoorGroupID,true);
    if (pFVar6 != (FDS_MapIndoorGroupTableRow *)0x0) {
      local_508.Data = (FScriptContainerElement *)0x0;
      local_500 = (pFVar6->ID_Zones).ArrayNum;
      lVar15 = (longlong)local_500;
      pFVar1 = (pFVar6->ID_Zones).AllocatorInstance.Data;
      if (local_500 == 0) {
        local_4fc = 0;
        iVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_500,0,&local_508,local_500,&local_4fc);
        memcpy(local_508.Data,pFVar1,lVar15 << 2);
        iVar13 = local_500;
      }
      pFVar1 = local_508.Data + (longlong)iVar13 * 4;
      FVar11.Data = local_508.Data;
      iVar14 = iVar13;
      while( true ) {
        if (iVar14 != iVar13) {
          local_528 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_528)
          ;
        }
        FVar12.Data = local_508.Data;
        if (FVar11.Data == pFVar1) break;
        pTVar7 = UDS_WorldMapManager::GetBreachInfoArray(this_01,&local_4d8,*(int *)FVar11.Data);
        if ((&local_520 == pTVar7) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar14 = pTVar7->ArrayNum;
        if (iVar14 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar14,&local_520.AllocatorInstance,&local_520.ArrayNum,
                             &local_520.ArrayMax);
          memmove(local_520.AllocatorInstance.Data + (longlong)iVar4 * 4,
                  (pTVar7->AllocatorInstance).Data,(longlong)iVar14 << 2);
          pTVar7->ArrayNum = 0;
        }
        if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d8.AllocatorInstance.Data);
        }
        FVar11.Data = FVar11.Data + 4;
        iVar14 = local_500;
      }
LAB_14c0a8994:
      if (FVar12.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar12.Data);
      }
      this_00 = local_4e0;
      iVar13 = local_520.ArrayNum;
      uVar10 = (ulonglong)local_520.ArrayNum;
      pFVar1 = local_520.AllocatorInstance.Data + uVar10 * 4;
      FVar12.Data = local_520.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar10 != iVar13) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_510);
        }
        FVar11.Data = local_520.AllocatorInstance.Data;
        if (FVar12.Data == pFVar1) break;
        iVar14 = *(int *)FVar12.Data;
        this_02 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_4e8);
        bVar3 = UDS_PlayerData::IsContainBreachDetailInfo(this_02,iVar14);
        if (!bVar3) {
          CreateBreachIconOnce(this_00,iVar14);
        }
        uVar10 = local_520._8_8_ & 0xffffffff;
        FVar12.Data = FVar12.Data + 4;
      }
      goto LAB_14c0a8668;
    }
    pUVar5 = UDS_LogManager::GetInst();
    FVar11.Data = local_520.AllocatorInstance.Data;
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14c0a8668;
    pUVar5 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_W_MapSpawnUnscaled::SpawnBreachIconOnce",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_278.Ptr,0xb66,L"mapIndoorGroupTableRow is nullptr.");
    pvVar9 = (void *)local_278._padding_;
  }
  else {
    pFVar8 = FDS_ZoneIslandTableRow::Get((longlong)this->CurLookIslandID,true);
    if (pFVar8 != (FDS_ZoneIslandTableRow *)0x0) {
      local_4f8.Data = (FScriptContainerElement *)0x0;
      local_4f0 = (pFVar8->ID_Zone).ArrayNum;
      lVar15 = (longlong)local_4f0;
      pFVar1 = (pFVar8->ID_Zone).AllocatorInstance.Data;
      if (local_4f0 == 0) {
        local_4ec = 0;
        iVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_4f0,0,&local_4f8,local_4f0,&local_4ec);
        memcpy(local_4f8.Data,pFVar1,lVar15 << 2);
        iVar13 = local_4f0;
      }
      pFVar1 = local_4f8.Data + (longlong)iVar13 * 4;
      FVar11.Data = local_4f8.Data;
      iVar14 = iVar13;
      while( true ) {
        if (iVar14 != iVar13) {
          local_527[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_527);
        }
        FVar12.Data = local_4f8.Data;
        if (FVar11.Data == pFVar1) break;
        pTVar7 = UDS_WorldMapManager::GetBreachInfoArray(this_01,&local_4c8,*(int *)FVar11.Data);
        if ((&local_520 == pTVar7) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar14 = pTVar7->ArrayNum;
        if (iVar14 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar14,&local_520.AllocatorInstance,&local_520.ArrayNum,
                             &local_520.ArrayMax);
          memmove(local_520.AllocatorInstance.Data + (longlong)iVar4 * 4,
                  (pTVar7->AllocatorInstance).Data,(longlong)iVar14 << 2);
          pTVar7->ArrayNum = 0;
        }
        if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4c8.AllocatorInstance.Data);
        }
        FVar11.Data = FVar11.Data + 4;
        iVar14 = local_4f0;
      }
      goto LAB_14c0a8994;
    }
    pUVar5 = UDS_LogManager::GetInst();
    FVar11.Data = local_520.AllocatorInstance.Data;
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14c0a8668;
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_W_MapSpawnUnscaled::SpawnBreachIconOnce",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0xb75,L"zoneIslandTableRow is nullptr.")
    ;
    pvVar9 = (void *)local_158._padding_;
  }
  FVar11.Data = local_520.AllocatorInstance.Data;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
    FVar11.Data = local_520.AllocatorInstance.Data;
  }
LAB_14c0a8668:
  if (FVar11.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar11.Data);
  }
  return;
}

// SpawnDetectionStuff @ 14c0a8a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnDetectionStuff(UDS_W_MapSpawnUnscaled *this)

{
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *pTVar1;
  ulonglong uVar2;
  ulong64 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  UDS_LogManager *pUVar12;
  UObject *pUVar13;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *pTVar14;
  FDS_MapIndoorGroupTableRow *pFVar15;
  UDS_WorldMapManager *this_00;
  undefined1 *puVar16;
  longlong lVar17;
  void *pvVar18;
  int iVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  uint *puVar23;
  longlong lVar24;
  undefined1 auStackY_608 [32];
  uint local_5c8;
  undefined1 local_5c4;
  undefined1 local_5c3 [3];
  ForAnyElementType local_5c0;
  int local_5b8;
  int local_5b4;
  FWeakObjectPtr local_5b0;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *local_5a8;
  int iStack_5a0;
  uint uStack_59c;
  undefined1 *local_598;
  undefined4 uStack_590;
  int iStack_58c;
  int local_588;
  int iStack_584;
  int iStack_580;
  undefined4 uStack_57c;
  int local_578;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *local_570;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_568;
  undefined8 uStack_548;
  FDS_PlayerSkillTargetInfo local_538;
  FDS_PlayerSkillTargetInfo local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_608;
  UDS_PlayerData::GetData((ulong64)&local_5b0,UDS_PlayerData::MainPlayerEntityID,false);
  bVar10 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_5b0,(void *)0x0);
  if (bVar10) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_W_MapSpawnUnscaled::SpawnDetectionStuff",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_4b8.Ptr,0xa64,L"playerData is nullptr.");
    if ((void *)local_4b8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_4b8._padding_);
    return;
  }
  pTVar1 = &this->DetectionTargetInfosMap;
  TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>,FDefaultSetAllocator>
           *)pTVar1);
  pUVar13 = FWeakObjectPtr::Get(&local_5b0);
  if (*(int *)&pUVar13[0xd].field_0x18 == *(int *)&pUVar13[0xe].field_0x1c) {
    return;
  }
  puVar16 = *(undefined1 **)(pUVar13 + 0xf);
  if (*(undefined1 **)(pUVar13 + 0xf) == (undefined1 *)0x0) {
    puVar16 = &pUVar13[0xe].field_0x20;
  }
  iVar11 = *(int *)(puVar16 + (ulonglong)(*(int *)&pUVar13[0xf].field_0x8 - 1U & 0xc) * 4);
  if (iVar11 == -1) {
    return;
  }
  lVar17 = *(longlong *)&pUVar13[0xd].field_0x10;
  while (*(char *)((longlong)iVar11 * 0x60 + lVar17) != '\f') {
    iVar11 = *(int *)((longlong)iVar11 * 0x60 + 0x58 + lVar17);
    if (iVar11 == -1) {
      return;
    }
  }
  pTVar14 = TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
            ::FindChecked(&pUVar13[0xd].field_0x10,Detection);
  if (pTVar1 != pTVar14) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->DetectionTargetInfosMap).field_0x38,
               (int *)&(this->DetectionTargetInfosMap).field_0x48,
               (ForElementType<FSetElementId> *)&pTVar14->field_0x38,*(int *)&pTVar14->field_0x48);
    iVar11 = *(int *)(&pTVar14->field_0x0 + 8);
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)pTVar1,iVar11);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar11,(ForAnyElementType *)pTVar1,
               (int *)&(this->DetectionTargetInfosMap).field_0x8,
               (int *)&(this->DetectionTargetInfosMap).field_0xc);
    puVar16 = &(this->DetectionTargetInfosMap).field_0x10;
    *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x30 =
         *(undefined4 *)(&pTVar14->field_0x0 + 0x30);
    *(undefined4 *)&(this->DetectionTargetInfosMap).field_0x34 =
         *(undefined4 *)(&pTVar14->field_0x0 + 0x34);
    if ((TBitArray<FDefaultBitArrayAllocator> *)puVar16 !=
        (TBitArray<FDefaultBitArrayAllocator> *)(&pTVar14->field_0x0 + 0x10)) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar16,
                 (TBitArray<FDefaultBitArrayAllocator> *)(&pTVar14->field_0x0 + 0x10));
    }
    if (iVar11 != 0) {
      memcpy(*(void **)&pTVar1->field_0x0,*(void **)&pTVar14->field_0x0,(longlong)iVar11 * 0x48);
    }
  }
  iVar11 = *(int *)&(this->DetectionTargetInfosMap).field_0x28;
  iStack_5a0 = 0;
  uStack_59c = 1;
  local_588 = 0;
  iStack_58c = local_588;
  if (iVar11 != 0) {
    puVar23 = *(uint **)&(this->DetectionTargetInfosMap).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)&(this->DetectionTargetInfosMap).field_0x10;
    }
    uVar20 = *puVar23;
    local_588 = 0;
    iStack_5a0 = 0;
    while (uVar20 == 0) {
      lVar17 = (longlong)iStack_5a0;
      local_588 = local_588 + 0x20;
      iStack_5a0 = iStack_5a0 + 1;
      iStack_58c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_5a0) goto LAB_14c0a8ca4;
      uVar20 = puVar23[lVar17 + 1];
    }
    uStack_59c = -uVar20 & uVar20;
    uVar2 = (ulonglong)uStack_59c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_578 = (int)lVar17;
    iStack_58c = local_588 + -1 + local_578;
    if (iVar11 < iStack_58c) {
      iStack_58c = iVar11;
    }
  }
LAB_14c0a8ca4:
  local_598 = &(this->DetectionTargetInfosMap).field_0x10;
  local_5c8 = *(uint *)&(this->DetectionTargetInfosMap).field_0x28;
  uVar20 = local_5c8 & 0xffffffe0;
  iStack_580 = *(int *)&(this->DetectionTargetInfosMap).field_0x8 -
               *(int *)&(this->DetectionTargetInfosMap).field_0x34;
  uStack_590 = 0xffffffff;
  TStack_568._padding_ = CONCAT44(uStack_59c,iStack_5a0);
  TStack_568.CurrentBitIndex = iStack_58c;
  TStack_568.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)local_5c8 >> 5;
  TStack_568._28_4_ = iStack_58c;
  TStack_568.BaseBitIndex = local_588;
  uStack_548 = CONCAT44(uStack_57c,iStack_580);
  local_5a8 = pTVar1;
  iStack_584 = iStack_58c;
  local_570 = pTVar1;
  TStack_568.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_598;
  if ((((int)local_5c8 < 0) || (iVar11 < (int)local_5c8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->DetectionTargetInfosMap).field_0x28;
  if (local_5c8 != uVar6) {
    puVar16 = *(undefined1 **)&(this->DetectionTargetInfosMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->DetectionTargetInfosMap).field_0x10;
    }
    uVar22 = -1 << ((byte)local_5c8 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar19 * 4);
    while (uVar22 == 0) {
      lVar17 = (longlong)iVar19;
      uVar20 = uVar20 + 0x20;
      iVar19 = iVar19 + 1;
      local_5c8 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14c0a8dd0;
      uVar22 = *(uint *)(puVar16 + lVar17 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_5c8 = (int)lVar17 + -1 + uVar20;
    if ((int)uVar6 < (int)local_5c8) {
      local_5c8 = uVar6;
    }
  }
LAB_14c0a8dd0:
  do {
    pTVar1 = local_570;
    if (*(int *)(&local_570->field_0x0 + 8) - *(int *)(&local_570->field_0x0 + 0x34) !=
        (int)uStack_548) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_PlayerSkillTargetInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5c4);
    }
    lVar17 = (longlong)TStack_568.CurrentBitIndex;
    if (((TStack_568.CurrentBitIndex == local_5c8) &&
        (TStack_568.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->DetectionTargetInfosMap).field_0x10)) &&
       (pTVar1 == &this->DetectionTargetInfosMap)) {
      return;
    }
    lVar7 = *(longlong *)&pTVar1->field_0x0;
    if (this->IsIndoor == true) {
      if (this->CurLookIndoorGroupID == 0) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar12 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_W_MapSpawnUnscaled::SpawnDetectionStuff",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_278.Ptr,0xa75,L"SpawnDetectionStuff indoorGorupID =0");
        pvVar18 = (void *)local_278._padding_;
        goto LAB_14c0a90fa;
      }
      pFVar15 = FDS_MapIndoorGroupTableRow::Get((longlong)this->CurLookIndoorGroupID,true);
      if (pFVar15 == (FDS_MapIndoorGroupTableRow *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_398._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_398,"UDS_W_MapSpawnUnscaled::SpawnDetectionStuff",0x2b,Yes);
          UDS_LogManager::PrintLog
                    (pUVar12,1,Warning,local_398.Ptr,0xa7c,L"mapIndoorGroupTableRow is nullptr.");
          if ((void *)local_398._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_398._padding_);
          }
        }
      }
      else {
        local_5c0.Data = (FScriptContainerElement *)0x0;
        local_5b8 = (pFVar15->ID_Zones).ArrayNum;
        lVar24 = (longlong)local_5b8;
        pFVar8 = (pFVar15->ID_Zones).AllocatorInstance.Data;
        if (local_5b8 == 0) {
          local_5b4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_5b8,0,&local_5c0,local_5b8,&local_5b4);
          memcpy(local_5c0.Data,pFVar8,lVar24 << 2);
        }
        iVar11 = local_5b8;
        pFVar8 = local_5c0.Data + (longlong)local_5b8 * 4;
        FVar21.Data = local_5c0.Data;
        while( true ) {
          if (local_5b8 != iVar11) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_5c3);
          }
          if (FVar21.Data == pFVar8) break;
          if (*(int *)FVar21.Data == *(int *)(lVar7 + 0x18 + lVar17 * 0x48)) {
            puVar3 = (ulong64 *)(lVar7 + 8 + lVar17 * 0x48);
            local_538.EntityID = *puVar3;
            local_538._8_8_ = puVar3[1];
            puVar4 = (undefined8 *)(lVar7 + 0x18 + lVar17 * 0x48);
            local_538._16_8_ = *puVar4;
            local_538.Position.field0_0x0._s_0.X = (double)puVar4[1];
            pdVar5 = (double *)(lVar7 + 0x28 + lVar17 * 0x48);
            local_538.Position.field0_0x0._s_0.Y = *pdVar5;
            local_538.Position.field0_0x0._s_0.Z = pdVar5[1];
            local_538.EndTime = *(double *)(lVar7 + 0x38 + lVar17 * 0x48);
            CreateDetectionStuff(this,*(ulong64 *)(lVar7 + lVar17 * 0x48),&local_538);
          }
          FVar21.Data = FVar21.Data + 4;
        }
        if (local_5c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5c0.Data);
        }
      }
    }
    else {
      this_00 = UDS_WorldMapManager::GetInst();
      if (this_00 == (UDS_WorldMapManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_W_MapSpawnUnscaled::SpawnDetectionStuff",0x2b,Yes);
          UDS_LogManager::PrintLog(pUVar12,1,Warning,local_158.Ptr,0xa8d,L"worldMapMgr is nullptr");
          pvVar18 = (void *)local_158._padding_;
LAB_14c0a90fa:
          if (pvVar18 != (void *)0x0) {
            FMemory::Free(pvVar18);
          }
        }
        return;
      }
      iVar11 = UDS_WorldMapManager::GetIslandIDByZoneID
                         (this_00,*(int *)(lVar7 + 0x18 + lVar17 * 0x48));
      if (this->CurLookIslandID == iVar11) {
        puVar3 = (ulong64 *)(lVar7 + 8 + lVar17 * 0x48);
        local_4f8.EntityID = *puVar3;
        local_4f8._8_8_ = puVar3[1];
        puVar4 = (undefined8 *)(lVar7 + 0x18 + lVar17 * 0x48);
        local_4f8._16_8_ = *puVar4;
        local_4f8.Position.field0_0x0._s_0.X = (double)puVar4[1];
        pdVar5 = (double *)(lVar7 + 0x28 + lVar17 * 0x48);
        local_4f8.Position.field0_0x0._s_0.Y = *pdVar5;
        local_4f8.Position.field0_0x0._s_0.Z = pdVar5[1];
        local_4f8.EndTime = *(double *)(lVar7 + 0x38 + lVar17 * 0x48);
        CreateDetectionStuff(this,*(ulong64 *)(lVar7 + lVar17 * 0x48),&local_4f8);
      }
    }
    TStack_568.UnvisitedBitMask = TStack_568.UnvisitedBitMask & ~TStack_568._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_568);
  } while( true );
}

// SpawnDiscoverBreachIcon @ 14c0a9150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnDiscoverBreachIcon(UDS_W_MapSpawnUnscaled *this)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [8];
  FWeakObjectPtr local_2b0;
  undefined8 local_2a8;
  ulong64 local_2a0;
  uint local_298;
  FString local_290;
  ulong64 local_280;
  uint local_278;
  uint local_274;
  double local_270;
  int local_268;
  EDS_TicketType local_264;
  int local_260;
  longlong *local_258;
  uint uStack_250;
  uint uStack_24c;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  uint local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  int local_228;
  longlong *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  FDS_BreachDetailInfo local_1f0;
  undefined1 local_1a8 [32];
  uint *local_188;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
  int local_174;
  ForElementType<FSetElementId> local_168;
  int local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  UDS_PlayerData::GetMainPlayerData();
  bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_2b0,(void *)0x0);
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_W_MapSpawnUnscaled::SpawnDiscoverBreachIcon",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0xb3c,L"playerData is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar6 = FWeakObjectPtr::Get(&local_2b0);
    local_17c = 0x80;
    local_1a8._0_8_ = 0;
    local_1a8._8_8_ = 0;
    local_188 = (uint *)0x0;
    uVar12 = 0;
    local_180 = 0;
    local_178 = 0xffffffff;
    local_174 = 0;
    local_168 = (ForElementType<FSetElementId>)0x0;
    local_160 = 0;
    TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
                 *)local_1a8,
                (TSet<TTuple<unsigned___int64,FDS_BreachDetailInfo>,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>,FDefaultSetAllocator>
                 *)&pUVar6[10].field_0x18);
    uVar10 = local_180;
    uStack_24c = 1;
    local_238 = 0;
    uStack_23c = uVar12;
    if (local_180 != 0) {
      puVar13 = (uint *)(local_1a8 + 0x10);
      if (local_188 != (uint *)0x0) {
        puVar13 = local_188;
      }
      uVar14 = *puVar13;
      local_238 = 0;
      uVar12 = 0;
      while (uVar14 == 0) {
        lVar8 = (longlong)(int)uVar12;
        local_238 = local_238 + 0x20;
        uVar12 = uVar12 + 1;
        uStack_23c = local_180;
        if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
        goto LAB_14c0a9300;
        uVar14 = puVar13[lVar8 + 1];
      }
      uStack_24c = -uVar14 & uVar14;
      uVar1 = (ulonglong)uStack_24c * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_228 = (int)lVar8;
      uStack_23c = (local_238 - 1) + local_228;
      if ((int)local_180 < (int)uStack_23c) {
        uStack_23c = local_180;
      }
    }
LAB_14c0a9300:
    local_258 = (longlong *)local_1a8;
    local_248 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10);
    uVar14 = local_180 & 0xffffffe0;
    iStack_230 = local_1a8._8_4_ - local_174;
    uStack_240 = 0xffffffff;
    TStack_218.CurrentBitIndex = uStack_23c;
    TStack_218.UnvisitedBitMask = 0xffffffff;
    TStack_218._padding_ = CONCAT44(uStack_24c,uVar12);
    iVar9 = (int)local_180 >> 5;
    TStack_218._28_4_ = uStack_23c;
    TStack_218.BaseBitIndex = local_238;
    uStack_1f8 = CONCAT44(uStack_22c,iStack_230);
    bVar7 = (byte)local_180;
    uStack_250 = uVar12;
    uStack_234 = uStack_23c;
    local_220 = local_258;
    TStack_218.Array = local_248;
    if (((int)local_180 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar10 != local_180) {
      puVar13 = (uint *)(local_1a8 + 0x10);
      if (local_188 != (uint *)0x0) {
        puVar13 = local_188;
      }
      uVar12 = -1 << (bVar7 & 0x1f) & puVar13[iVar9];
      while (uVar12 == 0) {
        lVar8 = (longlong)iVar9;
        uVar14 = uVar14 + 0x20;
        iVar9 = iVar9 + 1;
        uVar10 = local_180;
        if ((int)((local_180 - 1) + ((int)(local_180 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14c0a93fc;
        uVar12 = puVar13[lVar8 + 1];
      }
      uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar10 = (int)lVar8 + -1 + uVar14;
      if ((int)local_180 < (int)uVar10) {
        uVar10 = local_180;
      }
    }
LAB_14c0a93fc:
    while( true ) {
      plVar3 = local_220;
      if ((int)local_220[1] - *(int *)((longlong)local_220 + 0x34) != (int)uStack_1f8) {
        `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2b8);
      }
      if (((TStack_218.CurrentBitIndex == uVar10) &&
          (TStack_218.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10))) &&
         (plVar3 == (longlong *)local_1a8)) break;
      lVar8 = *plVar3;
      lVar11 = (longlong)TStack_218.CurrentBitIndex * 0x58;
      local_2a8 = *(undefined8 *)(lVar11 + lVar8);
      local_2a0 = *(ulong64 *)(lVar11 + 8 + lVar8);
      local_298 = *(uint *)(lVar11 + 0x10 + lVar8);
      ::FString::FString(&local_290,(FString *)(lVar8 + 0x18 + lVar11));
      local_280 = *(ulong64 *)(lVar11 + 0x28 + lVar8);
      local_278 = *(uint *)(lVar11 + 0x30 + lVar8);
      local_274 = *(uint *)(lVar11 + 0x34 + lVar8);
      local_270 = *(double *)(lVar11 + 0x38 + lVar8);
      local_268 = *(int *)(lVar11 + 0x40 + lVar8);
      local_264 = *(EDS_TicketType *)(lVar11 + 0x44 + lVar8);
      local_260 = *(int *)(lVar11 + 0x48 + lVar8);
      local_1f0.StuffPortalEntityID = local_2a0;
      local_1f0.RewardGrade = local_298;
      ::FString::FString(&local_1f0.FirstPlayerName,&local_290);
      local_1f0.FinderEntityID = local_280;
      local_1f0.CurrentTryCount = local_278;
      local_1f0.MaxTryCount = local_274;
      local_1f0.BreachBaseID = local_268;
      local_1f0.NeedTicketType = local_264;
      local_1f0.NeedTicketValue = local_260;
      local_1f0.LifeEndTime = local_270;
      CreateDiscoverBreachIcon(this,&local_1f0);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
    }
    local_160 = 0;
    if (local_168 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_168);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FDS_BreachDetailInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1a8);
  }
  return;
}

// SpawnDungeonPartyIcon @ 14c0a95a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnDungeonPartyIcon(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDS_RaidPartyRepo *this_00;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  FDS_RaidPartyMemberInfo *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_2f8 [32];
  FWeakObjectPtr local_2c8;
  FDS_RaidPartyMemberInfo local_2c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  this_00 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_00);
  if (bVar3) {
    UDS_PlayerData::GetMainPlayerData();
    bVar3 = FWeakObjectPtr::IsValid(&local_2c8);
    if (bVar3) {
      iVar4 = (this_00->RaidPartyInfo).Members.ArrayNum;
      uVar10 = 0;
      if (0 < iVar4) {
        lVar11 = 0;
        do {
          if ((-1 < (int)uVar10) && ((int)uVar10 < iVar4)) {
            uVar9 = ~uVar10 >> 0x1f;
            if (((int)uVar10 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(longlong *)((this_00->RaidPartyInfo).Members.AllocatorInstance.Data + lVar11 + 8)
                != 0) {
              uVar5 = 0;
              if ((int)uVar10 < (this_00->RaidPartyInfo).Members.ArrayNum) {
                uVar5 = uVar9;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (this_00->RaidPartyInfo).Members.AllocatorInstance.Data;
              pUVar7 = FWeakObjectPtr::Get(&local_2c8);
              if (*(longlong *)(pFVar1 + lVar11 + 8) != *(longlong *)&pUVar7[6].field_0x8) {
                uVar5 = 0;
                if ((int)uVar10 < (this_00->RaidPartyInfo).Members.ArrayNum) {
                  uVar5 = uVar9;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if ((this_00->RaidPartyInfo).Members.AllocatorInstance.Data[lVar11 + 0x2c] ==
                    (FScriptContainerElement)0x4) {
                  uVar5 = 0;
                  if ((int)uVar10 < (this_00->RaidPartyInfo).Members.ArrayNum) {
                    uVar5 = uVar9;
                  }
                  if ((uVar5 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  pFVar8 = FDS_RaidPartyMemberInfo::FDS_RaidPartyMemberInfo
                                     (&local_2c0,
                                      (FDS_RaidPartyMemberInfo *)
                                      ((this_00->RaidPartyInfo).Members.AllocatorInstance.Data +
                                      (longlong)(int)uVar10 * 0x160));
                  CreateRaidPartyMemberIcon(this,pFVar8);
                }
              }
            }
          }
          iVar4 = (this_00->RaidPartyInfo).Members.ArrayNum;
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0x160;
        } while ((int)uVar10 < iVar4);
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_W_MapSpawnUnscaled::SpawnDungeonPartyIcon",0x2d,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xac6,L"myPlayerData is Invalid");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

// SpawnIconByMapIndexSpawnTable @ 14c0a98a0

void __thiscall UDS_W_MapSpawnUnscaled::SpawnIconByMapIndexSpawnTable(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  EDS_MapIndexSpawnDisplayType EVar2;
  FDS_MapIndexSpawnTableRow *pFVar3;
  int iVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [8];
  TArray<FDS_MapIndexSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  FDS_MapIndexSpawnTableRow::GetAll(&local_28);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar6.Data = local_28.AllocatorInstance.Data;
LAB_14c0a98e0:
  do {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<FDS_MapIndexSpawnTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar6.Data == pFVar1) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    pFVar3 = *(FDS_MapIndexSpawnTableRow **)FVar6.Data;
    if (pFVar3 != (FDS_MapIndexSpawnTableRow *)0x0) {
      EVar2 = pFVar3->MapIndexSpawnDisplayType;
      bVar5 = CheckMapSpawnTableSpawn(this,pFVar3);
      if (bVar5) {
        if (EVar2 == IconAndText_Btn) {
          CreateIconAndText(this,pFVar3);
          FVar6.Data = FVar6.Data + 8;
          goto LAB_14c0a98e0;
        }
        if (EVar2 == IconOnly_Btn) {
          CreateIconOnlyBtn(this,pFVar3);
          FVar6.Data = FVar6.Data + 8;
          goto LAB_14c0a98e0;
        }
        if (EVar2 == TextOnly_Btn) {
          CreateTextOnlyBtn(this,pFVar3);
        }
      }
    }
    FVar6.Data = FVar6.Data + 8;
  } while( true );
}

// SpawnIconsForFieldMap @ 14c0a9990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnIconsForFieldMap(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UDS_WorldBossManager *this_00;
  UDS_LogManager *pUVar5;
  TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_1c8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  undefined1 local_198 [8];
  TArray<FDS_StuffQuestBoardTableRow_const_*,TSizedDefaultAllocator<32>_> local_190;
  TVector<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((char)this->MapType == '\x01') {
    SpawnPlayerIcon(this);
    SpawnSharedMarker(this);
  }
  this_00 = UDS_WorldBossManager::GetInst();
  if (this_00 == (UDS_WorldBossManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14c0a9b4a;
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_W_MapSpawnUnscaled::SpawnWorldBossIcon",0x2a,Yes);
    pwVar10 = L"worldBossManager is nullptr";
    uVar9 = 0xb8f;
  }
  else {
    if (this->IsIndoor == true) goto LAB_14c0a9b4a;
    pTVar6 = UDS_WorldBossManager::GetStateInfoArrayByIslandNumber(this_00,this->CurLookIslandID);
    if (pTVar6 != (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar2 = pTVar6->ArrayNum;
      pFVar7 = (pTVar6->AllocatorInstance).Data;
      pFVar1 = pFVar7 + (longlong)iVar2 * 0x18;
      while( true ) {
        if (pTVar6->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FDS_WorldBossStateInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_198);
        }
        if (pFVar7 == pFVar1) break;
        if (pFVar7[4] == (FScriptContainerElement)0x3) {
          CreateWorldBossIcon(this,*(int *)pFVar7);
        }
        pFVar7 = pFVar7 + 0x18;
      }
      goto LAB_14c0a9b4a;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) goto LAB_14c0a9b4a;
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = (longlong)pTVar6;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_W_MapSpawnUnscaled::SpawnWorldBossIcon",0x2a,Yes);
    pwVar10 = L"worldBossStateInfoArray is nullptr";
    uVar9 = 0xb9b;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,uVar9,pwVar10);
  if ((TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)local_158._padding_ !=
      (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14c0a9b4a:
  SpawnQuestStateIcon(this);
  SpawnQuestAcceptIcon(this);
  SpawnNPCIcon(this);
  FDS_StuffQuestBoardTableRow::GetAll(&local_190);
  iVar2 = local_190.ArrayNum;
  pFVar1 = local_190.AllocatorInstance.Data + (longlong)local_190.ArrayNum * 8;
  FVar8.Data = local_190.AllocatorInstance.Data;
  while( true ) {
    if (local_190.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_StuffQuestBoardTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_198);
    }
    if (FVar8.Data == pFVar1) break;
    lVar3 = *(longlong *)FVar8.Data;
    if (lVar3 != 0) {
      if (this->IsIndoor == true) {
        bVar4 = CheckZoneInIndoorGroup(this,*(int *)(lVar3 + 0x24));
      }
      else {
        bVar4 = CheckZoneInIsland(this,*(int *)(lVar3 + 0x24));
      }
      if (bVar4 != false) {
        local_178._s_0.X = *(double *)(lVar3 + 0x28);
        local_178._s_0.Y = *(double *)(lVar3 + 0x30);
        local_178._s_0.Z = *(double *)(lVar3 + 0x38);
        CreateQuestBoardIcon(this,(longlong)*(int *)(lVar3 + 8),(TVector<double> *)&local_178._s_0);
      }
    }
    FVar8.Data = FVar8.Data + 8;
  }
  if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.AllocatorInstance.Data);
  }
  SpawnMarker(this);
  SpawnWarpDevice(this);
  SpawnDetectionStuff(this);
  SpawnDungeonPartyIcon(this);
  SpawnPartyIcon(this);
  SpawnDiscoverBreachIcon(this);
  SpawnBreachIconOnce(this);
  SpawnIconByMapIndexSpawnTable(this);
  return;
}

// SpawnIconsForNonFieldMap @ 14c0a9c80

void __thiscall UDS_W_MapSpawnUnscaled::SpawnIconsForNonFieldMap(UDS_W_MapSpawnUnscaled *this)

{
  SpawnPhasingActorIcon(this);
  SpawnPartyIcon(this);
  SpawnDungeonPartyIcon(this);
  SpawnIconByMapIndexSpawnTable(this);
  if ((char)this->MapType == '\x01') {
    SpawnPlayerIcon(this);
    return;
  }
  return;
}

// SpawnMarker @ 14c0a9cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnMarker(UDS_W_MapSpawnUnscaled *this)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UDS_WorldMapMarkerManager *this_00;
  UDS_LogManager *pUVar5;
  FDS_MapIndexBaseTableRow *pFVar6;
  FScriptContainerElement *pFVar7;
  FDS_WorldMapMarkerInfo *pFVar8;
  double dVar9;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [8];
  TArray<FDS_WorldMapMarkerInfo,TSizedDefaultAllocator<32>_> local_240;
  long64 local_228;
  int local_220;
  int local_21c;
  int local_218;
  float local_214;
  FString local_210;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  double dStack_1d8;
  FWeakObjectPtr local_1d0;
  FDS_WorldMapMarkerInfo local_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_00 = UDS_WorldMapMarkerManager::GetInst();
  if (this_00 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_W_MapSpawnUnscaled::SpawnMarker",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_168.Ptr,0x954,L"worldMapMarkerMgr is nullptr");
    local_240.AllocatorInstance.Data = (FScriptContainerElement *)local_168._padding_;
  }
  else {
    UDS_WorldMapMarkerManager::GetWorldMapMarkerInfoArray(this_00,&local_240);
    iVar2 = local_240.ArrayNum;
    dVar1 = __real_3ff0000000000000;
    pFVar7 = local_240.AllocatorInstance.Data + 0xc;
    pFVar8 = (FDS_WorldMapMarkerInfo *)
             (local_240.AllocatorInstance.Data + (longlong)local_240.ArrayNum * 0x60);
    while( true ) {
      if (local_240.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FDS_WorldMapMarkerInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_248);
      }
      if ((FDS_WorldMapMarkerInfo *)(pFVar7 + -0xc) == pFVar8) break;
      local_228 = ((FDS_WorldMapMarkerInfo *)(pFVar7 + -0xc))->key;
      local_214 = *(float *)(pFVar7 + 8);
      local_220 = *(int *)(pFVar7 + -4);
      local_21c = *(int *)pFVar7;
      local_218 = *(int *)(pFVar7 + 4);
      ::FString::FString(&local_210,(FString *)(pFVar7 + 0xc));
      local_200 = *(double *)(pFVar7 + 0x1c);
      dStack_1f8 = *(double *)(pFVar7 + 0x24);
      local_1d0 = *(FWeakObjectPtr *)(pFVar7 + 0x4c);
      local_1f0 = *(double *)(pFVar7 + 0x2c);
      dStack_1e8 = *(double *)(pFVar7 + 0x34);
      local_1e0 = *(double *)(pFVar7 + 0x3c);
      dStack_1d8 = *(double *)(pFVar7 + 0x44);
      bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        (&this->OwnerMovementCore,(void *)0x0);
      if (!bVar3) {
        if (this->IsIndoor == true) {
          if (local_218 == this->CurLookIndoorGroupID) {
LAB_14c0a9e84:
            local_1c8.key = local_228;
            local_1c8.IslandID = local_21c;
            local_1c8.IndoorGroupID = local_218;
            local_1c8.Floor = local_220;
            local_1c8.SavedScale = local_214;
            ::FString::FString(&local_1c8.Memo,&local_210);
            local_1c8.Widget.WeakPtr = local_1d0;
            local_1c8.MarkerGlobalPos.field0_0x0._s_0.X = local_200;
            local_1c8.MarkerGlobalPos.field0_0x0._s_0.Y = dStack_1f8;
            local_1c8.CurMapPositionOffset.field0_0x0._s_0.X = local_1f0;
            local_1c8.CurMapPositionOffset.field0_0x0._s_0.Y = dStack_1e8;
            local_1c8.MakerVector2D.field0_0x0._s_0.X = local_1e0;
            local_1c8.MakerVector2D.field0_0x0._s_0.Y = dStack_1d8;
            iVar4 = UDS_WorldMapMarkerManager::GetMarkerIndex(this_00,&local_1c8);
            pFVar6 = FDS_MapIndexBaseTableRow::Get((longlong)iVar4 + 0x1d,true);
            if (pFVar6 == (FDS_MapIndexBaseTableRow *)0x0) {
              pUVar5 = UDS_LogManager::GetInst();
              if (pUVar5 != (UDS_LogManager *)0x0) {
                pUVar5 = UDS_LogManager::GetInst();
                local_168._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_168,"UDS_W_MapSpawnUnscaled::SpawnMarker",0x23,Yes);
                UDS_LogManager::PrintLog
                          (pUVar5,1,Warning,local_168.Ptr,0x971,
                           L"markerMapIndexBaseTableRow nullptr");
                if ((FDS_WorldMapMarkerInfo *)local_168._padding_ != (FDS_WorldMapMarkerInfo *)0x0)
                {
                  FMemory::Free((void *)local_168._padding_);
                }
              }
            }
            else if ((((pFVar6->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
                     ((pFVar6->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
                    ((this->IsIndoor != true || (pFVar6->isShownInIndoorMap != false)))) {
              local_1c8.key = local_228;
              local_1c8.Floor = local_220;
              local_1c8.IslandID = local_21c;
              dVar9 = dVar1 / (double)this->OrthoWidth;
              local_1c8.IndoorGroupID = local_218;
              local_1e0 = (local_200 - (this->MapStartPos).field0_0x0._s_0.X) * dVar9 *
                          (double)this->TextureSize;
              dStack_1d8 = (dStack_1f8 - (this->MapStartPos).field0_0x0._s_0.Y) * dVar9 *
                           (double)this->TextureSize;
              local_1c8.SavedScale = local_214;
              ::FString::FString(&local_1c8.Memo,&local_210);
              local_1c8.MarkerGlobalPos.field0_0x0._s_0.X = local_200;
              local_1c8.MarkerGlobalPos.field0_0x0._s_0.Y = dStack_1f8;
              local_1c8.Widget.WeakPtr = local_1d0;
              local_1c8.CurMapPositionOffset.field0_0x0._s_0.X = local_1f0;
              local_1c8.CurMapPositionOffset.field0_0x0._s_0.Y = dStack_1e8;
              local_1c8.MakerVector2D.field0_0x0._s_0.X = local_1e0;
              local_1c8.MakerVector2D.field0_0x0._s_0.Y = dStack_1d8;
              CreateMarker(this,&local_1c8,pFVar6,false,false);
            }
          }
        }
        else if (local_21c == this->CurLookIslandID) goto LAB_14c0a9e84;
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      pFVar7 = pFVar7 + 0x60;
    }
    DestructItems<FDS_WorldMapMarkerInfo,int>
              ((FDS_WorldMapMarkerInfo *)local_240.AllocatorInstance.Data,local_240.ArrayNum);
  }
  if ((FDS_WorldMapMarkerInfo *)local_240.AllocatorInstance.Data != (FDS_WorldMapMarkerInfo *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
  return;
}

// SpawnNPCIcon @ 14c0aa0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnNPCIcon(UDS_W_MapSpawnUnscaled *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  UDS_WorldMapManager *this_00;
  UDS_LogManager *pUVar12;
  FDS_MapIndoorGroupTableRow *pFVar13;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar14;
  FDS_NpcBaseTableRow *pFVar15;
  FDS_MapIndexBaseTableRow *pFVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  ForAnyElementType FVar23;
  undefined1 auStackY_728 [32];
  undefined1 local_6b8;
  undefined1 local_6b7;
  undefined1 local_6b6;
  FIdentityFunctor local_6b5 [5];
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_6b0;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_6a0;
  int local_690;
  FScriptContainerElement *local_688;
  uint local_680;
  int local_67c;
  int local_678;
  uint local_674;
  TArray<int,TSizedDefaultAllocator<32>_> local_670;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_660;
  TVector2<double>_u_0 local_648;
  TVector2<double>_u_0 local_638;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_628;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_618;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_728;
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    return;
  }
  local_6b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b0.ArrayNum = 0;
  local_6b0.ArrayMax = 0;
  if (this->IsIndoor == true) {
    if (this->CurLookIndoorGroupID == 0) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_618._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_618,"UDS_W_MapSpawnUnscaled::SpawnNPCIcon",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_618.Ptr,0x39a,L"SpawnNPCIcon indoorGorupID =0");
        if ((void *)local_618._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_618._padding_);
        }
      }
      goto LAB_14c0aa86e;
    }
    pFVar13 = FDS_MapIndoorGroupTableRow::Get((longlong)this->CurLookIndoorGroupID,true);
    if (pFVar13 == (FDS_MapIndoorGroupTableRow *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      if (pUVar12 != (UDS_LogManager *)0x0) {
        pUVar12 = UDS_LogManager::GetInst();
        local_4f8._padding_ = (longlong)pFVar13;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_4f8,"UDS_W_MapSpawnUnscaled::SpawnNPCIcon",0x24,Yes);
        UDS_LogManager::PrintLog
                  (pUVar12,1,Warning,local_4f8.Ptr,0x3a1,L"mapIndoorGroupTableRow is nullptr.");
        if ((FDS_MapIndoorGroupTableRow *)local_4f8._padding_ != (FDS_MapIndoorGroupTableRow *)0x0)
        {
          FMemory::Free((void *)local_4f8._padding_);
        }
      }
      goto LAB_14c0aa86e;
    }
    pFVar21 = (pFVar13->ID_Zones).AllocatorInstance.Data;
    iVar22 = (pFVar13->ID_Zones).ArrayNum;
    local_688 = pFVar21 + (longlong)iVar22 * 4;
    while( true ) {
      pFVar19 = local_688;
      if ((pFVar13->ID_Zones).ArrayNum != iVar22) {
        local_6b8 = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_6b8);
      }
      if (pFVar21 == pFVar19) break;
      iVar5 = *(int *)pFVar21;
      pTVar14 = UDS_WorldMapManager::GetIndoorMapNpcSpawnTableArray(this_00,&local_660,iVar5);
      iVar11 = pTVar14->ArrayNum;
      if (local_660.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_660.AllocatorInstance.Data);
      }
      if (iVar11 < 1) {
        pUVar12 = UDS_LogManager::GetInst();
        if (pUVar12 != (UDS_LogManager *)0x0) {
          pUVar12 = UDS_LogManager::GetInst();
          local_3d8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3d8,"UDS_W_MapSpawnUnscaled::SpawnNPCIcon",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar12,1,Warning,local_3d8.Ptr,0x3a9,
                     L"GetIndoorMapNpcSpawnTableArray is empty.");
          FVar17.Data = (FScriptContainerElement *)local_3d8._padding_;
          goto LAB_14c0aa407;
        }
      }
      else {
        pTVar14 = UDS_WorldMapManager::GetIndoorMapNpcSpawnTableArray(this_00,&local_6a0,iVar5);
        if ((&local_6b0 == pTVar14) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x986,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar5 = pTVar14->ArrayNum;
        FVar17.Data = local_6a0.AllocatorInstance.Data;
        if (iVar5 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,iVar5,&local_6b0.AllocatorInstance,&local_6b0.ArrayNum,
                              &local_6b0.ArrayMax);
          memmove(local_6b0.AllocatorInstance.Data + (longlong)iVar11 * 8,
                  (pTVar14->AllocatorInstance).Data,(longlong)iVar5 << 3);
          pTVar14->ArrayNum = 0;
          FVar17.Data = local_6a0.AllocatorInstance.Data;
        }
LAB_14c0aa407:
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
      }
      pFVar21 = pFVar21 + 4;
    }
  }
  else {
    pTVar14 = UDS_WorldMapManager::GetWorldMapNpcSpawnTableArray
                        (this_00,&local_628,this->CurLookIslandID);
    TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>::
    Append<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>(&local_6b0,pTVar14);
    if (local_628.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_628.AllocatorInstance.Data);
    }
  }
  if (0 < local_6b0.ArrayNum) {
    AlgoImpl::
    IntroSortInternal<FDS_NpcSpawnTableRow_const_*,int,FIdentityFunctor,TDereferenceWrapper<FDS_NpcSpawnTableRow_const_*,_UDS_W_MapSpawnUnscaled::SpawnNPCIcon_::__l2::<lambda_1>_>_>
              ((FDS_NpcSpawnTableRow **)local_6b0.AllocatorInstance.Data,local_6b0.ArrayNum,
               local_6b5[0],(<lambda_1> *)local_6b5);
    uVar18 = (ulonglong)local_6b0.ArrayNum;
    iVar22 = 0;
    local_6a0.AllocatorInstance.Data = local_6b0.AllocatorInstance.Data + uVar18 * 8;
    local_690 = 0;
    local_674 = local_6b0.ArrayNum;
    FVar17.Data = local_6a0.AllocatorInstance.Data;
    FVar23.Data = local_6b0.AllocatorInstance.Data;
LAB_14c0aa538:
    do {
      local_688 = FVar23.Data;
      if (local_6b0.ArrayNum != (int)uVar18) {
        local_6b7 = 0;
        `TCheckedPointerIterator<FDS_NpcSpawnTableRow_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_6b7);
      }
      if (FVar23.Data == FVar17.Data) goto LAB_14c0aa86e;
      lVar7 = *(longlong *)FVar23.Data;
      if ((*(int *)(lVar7 + 8) != 0) && (*(char *)(lVar7 + 0xc4) != '\0')) {
        if (*(int *)(lVar7 + 0x28) < 1) {
          pUVar12 = UDS_LogManager::GetInst();
          if (pUVar12 != (UDS_LogManager *)0x0) {
            pUVar12 = UDS_LogManager::GetInst();
            local_198._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_198,"UDS_W_MapSpawnUnscaled::SpawnNPCIcon",0x24,Yes);
            UDS_LogManager::PrintLog(pUVar12,1,Warning,local_198.Ptr,0x3d5,L"====spawnData ID = %d")
            ;
            FVar17.Data = local_6a0.AllocatorInstance.Data;
            if ((void *)local_198._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_198._padding_);
              FVar23.Data = local_688 + 8;
              uVar18 = (ulonglong)local_674;
              FVar17.Data = local_6a0.AllocatorInstance.Data;
              goto LAB_14c0aa538;
            }
          }
        }
        else {
          iVar5 = **(int **)(lVar7 + 0x20);
          bVar10 = CheckIsNpcSpawnedProgressMainQuest(this,iVar5);
          if ((((!bVar10) && (bVar10 = CheckIsNpcSpawnedProgressLocalQuest(this,iVar5), !bVar10)) &&
              (bVar10 = CheckIsNpcSpawnedCompleteMainQuest(this,iVar5), !bVar10)) &&
             (bVar10 = CheckIsNpcSpawnedCompleteLocalQuest(this,iVar5), !bVar10)) {
            pFVar19 = (this->SpawnedNpc_ID_ListByAcceptableQuest).AllocatorInstance.Data;
            iVar11 = (this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum;
            pFVar21 = pFVar19 + (longlong)iVar11 * 4;
            while( true ) {
              if ((this->SpawnedNpc_ID_ListByAcceptableQuest).ArrayNum != iVar11) {
                local_6b6 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_6b6);
              }
              if (pFVar19 == pFVar21) break;
              FVar17.Data = local_6a0.AllocatorInstance.Data;
              if (*(int *)pFVar19 == iVar5) goto LAB_14c0aa83c;
              pFVar19 = pFVar19 + 4;
            }
            pFVar15 = FDS_NpcBaseTableRow::Get((longlong)iVar5,true);
            FVar17.Data = local_6a0.AllocatorInstance.Data;
            if ((((((pFVar15 != (FDS_NpcBaseTableRow *)0x0) && (pFVar15->MapIndex != None)) &&
                  ((pFVar16 = FDS_MapIndexBaseTableRow::Get((ulonglong)pFVar15->MapIndex,true),
                   FVar17.Data = local_6a0.AllocatorInstance.Data,
                   pFVar16 != (FDS_MapIndexBaseTableRow *)0x0 &&
                   (iVar5 = pFVar16->MapIndexGroupID, 0 < iVar5)))) &&
                 ((pFVar16->isShownInRadar != false || ((char)this->MapType != '\0')))) &&
                ((pFVar16->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) &&
               ((this->IsIndoor != true || (pFVar16->isShownInIndoorMap != false)))) {
              local_67c = pFVar15->ID;
              local_670.ArrayNum = (pFVar16->WorldMapZoomStep).ArrayNum;
              lVar20 = (longlong)local_670.ArrayNum;
              iVar11 = pFVar16->MapIndexPriority;
              local_678 = pFVar16->MapIndexIcon;
              dVar1 = *(double *)(lVar7 + 0x58);
              bVar10 = pFVar16->isShownHeight;
              local_660.AllocatorInstance.Data = (pFVar16->WorldMapZoomStep).AllocatorInstance.Data;
              dVar2 = *(double *)(lVar7 + 0x48);
              dVar3 = *(double *)(lVar7 + 0x50);
              bVar4 = *(bool *)(lVar7 + 0x80);
              iVar6 = *(int *)(lVar7 + 8);
              local_680 = (uint)pFVar16->ID;
              local_670.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              dVar9 = (double)pFVar16->IconSpawnSize;
              if (local_670.ArrayNum == 0) {
                local_670.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_670.ArrayNum,0,&local_670.AllocatorInstance,local_670.ArrayNum,
                           &local_670.ArrayMax);
                memcpy(local_670.AllocatorInstance.Data,local_660.AllocatorInstance.Data,lVar20 << 2
                      );
              }
              local_648._8_4_ = SUB84(dVar9,0);
              local_648._s_0.X = dVar9;
              local_648._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              local_638._s_0.X = dVar2;
              local_638._s_0.Y = dVar3;
              CreateDefaultIcon(this,&local_670,(TVector2<double> *)&local_638._s_0,
                                (TVector2<double> *)&local_648._s_0,local_678,iVar6,local_67c,iVar5,
                                local_680,iVar22 + iVar11,(float)dVar1,bVar4,bVar10);
              iVar22 = local_690 + 1;
              FVar17.Data = local_6a0.AllocatorInstance.Data;
              local_690 = iVar22;
            }
          }
        }
      }
LAB_14c0aa83c:
      uVar18 = (ulonglong)local_674;
      FVar23.Data = local_688 + 8;
    } while( true );
  }
  pUVar12 = UDS_LogManager::GetInst();
  if (pUVar12 != (UDS_LogManager *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    local_2b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_2b8,"UDS_W_MapSpawnUnscaled::SpawnNPCIcon",0x24,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_2b8.Ptr,0x3b6,L"Npc SpawnCount Zero");
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
  }
LAB_14c0aa86e:
  if (local_6b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.AllocatorInstance.Data);
  }
  return;
}

// SpawnPartyIcon @ 14c0aa8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnPartyIcon(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDS_PartyRepo *pFVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_PartyMemberInfo *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_238 [32];
  FWeakObjectPtr local_208;
  FDS_PartyMemberInfo local_200;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  bVar3 = FDS_PartyInfo::IsValid(&pFVar6->PartyInfo);
  if (bVar3) {
    UDS_PlayerData::GetMainPlayerData();
    bVar3 = FWeakObjectPtr::IsValid(&local_208);
    if (bVar3) {
      iVar4 = (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum;
      uVar10 = 0;
      if (0 < iVar4) {
        lVar11 = 0;
        do {
          if ((-1 < (int)uVar10) && ((int)uVar10 < iVar4)) {
            if (((int)uVar10 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(longlong *)((pFVar6->PartyInfo).PartyMemberInfos.AllocatorInstance.Data + lVar11)
                != 0) {
              uVar5 = 0;
              if ((int)uVar10 < (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum) {
                uVar5 = ~uVar10 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (pFVar6->PartyInfo).PartyMemberInfos.AllocatorInstance.Data;
              pUVar8 = FWeakObjectPtr::Get(&local_208);
              if (*(longlong *)(pFVar1 + lVar11) != *(longlong *)&pUVar8[6].field_0x8) {
                uVar5 = 0;
                if ((int)uVar10 < (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum) {
                  uVar5 = ~uVar10 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar9 = FDS_PartyMemberInfo::FDS_PartyMemberInfo
                                   (&local_200,
                                    (FDS_PartyMemberInfo *)
                                    ((pFVar6->PartyInfo).PartyMemberInfos.AllocatorInstance.Data +
                                    lVar11));
                CreatePartyMemberIcon(this,pFVar9);
              }
            }
          }
          iVar4 = (pFVar6->PartyInfo).PartyMemberInfos.ArrayNum;
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 0xa8;
        } while ((int)uVar10 < iVar4);
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_W_MapSpawnUnscaled::SpawnPartyIcon",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0xaa5,L"myPlayerData is Invalid");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

// SpawnPhasingActorIcon @ 14c0aab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnPhasingActorIcon(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  UDS_W_MapSpawnUnscaled *this_00;
  bool bVar4;
  int iVar5;
  UDS_EntityManager *this_01;
  UDS_PhasingManager *this_02;
  ulonglong uVar6;
  FDS_EntityBase *pFVar7;
  UDS_LogManager *pUVar8;
  FDS_NpcBaseTableRow *pFVar9;
  UDS_MovementCore *this_03;
  ForAnyElementType FVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_238 [32];
  undefined1 local_1f8;
  undefined1 local_1f7 [3];
  uint local_1f4;
  FWeakObjectPtr local_1f0;
  ulong64 local_1e8;
  UDS_EntityManager *local_1e0;
  UDS_PhasingManager *local_1d8;
  FScriptContainerElement *local_1d0;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_1b8;
  UDS_W_MapSpawnUnscaled *local_1a8;
  FScriptContainerElement *local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1a8 = this;
  this_01 = UDS_EntityManager::GetInst();
  if ((this_01 != (UDS_EntityManager *)0x0) &&
     (local_1e0 = this_01, this_02 = UDS_PhasingManager::GetInst(),
     this_02 != (UDS_PhasingManager *)0x0)) {
    local_1d8 = this_02;
    UDS_EntityManager::GetEntityIDArray(this_01,&local_1b8,NPC);
    local_1f4 = local_1b8.ArrayNum;
    uVar6 = (ulonglong)(int)local_1f4;
    local_1a0 = local_1b8.AllocatorInstance.Data + uVar6 * 8;
    FVar12.Data = local_1b8.AllocatorInstance.Data;
LAB_14c0aac20:
    pFVar1 = local_1a0;
    local_1d0 = FVar12.Data;
    if (local_1b8.ArrayNum != (int)uVar6) {
      local_1f8 = 0;
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1f8);
    }
    if (FVar12.Data != pFVar1) {
      uVar11 = *(ulong64 *)FVar12.Data;
      local_1e8 = uVar11;
      pFVar7 = UDS_EntityManager::FindEntityBase(this_01,uVar11);
      if (pFVar7 != (FDS_EntityBase *)0x0) {
        iVar5 = UDS_PhasingManager::GetPhasingIDInProgress(this_02);
        FDS_NpcSpawnTableRow::GetByPhasingBaseID(&local_1c8,(longlong)iVar5);
        this_00 = local_1a8;
        iVar5 = local_1c8.ArrayNum;
        pFVar1 = local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayNum * 8;
        FVar10.Data = local_1c8.AllocatorInstance.Data;
LAB_14c0aac88:
        do {
          if (local_1c8.ArrayNum != iVar5) {
            local_1f7[0] = 0;
            `TCheckedPointerIterator<FDS_NpcSpawnTableRow_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1f7);
          }
          FVar12.Data = local_1d0;
          if (FVar10.Data == pFVar1) goto LAB_14c0aae21;
          lVar2 = *(longlong *)FVar10.Data;
          if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == pFVar7->SpawnTableID)) {
            if (*(int *)(lVar2 + 0x28) < 1) {
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"UDS_W_MapSpawnUnscaled::SpawnPhasingActorIcon",0x2d,Yes);
                UDS_LogManager::PrintLog
                          (pUVar8,1,Warning,local_158.Ptr,0xb0e,L"====npcSpawnTableRow ID = %d");
                uVar11 = local_1e8;
                if ((void *)local_158._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_158._padding_);
                  uVar11 = local_1e8;
                }
              }
            }
            else if (*(char *)(lVar2 + 0xc4) != '\0') {
              if ((*(int *)(lVar2 + 0x28) < 1) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar9 = FDS_NpcBaseTableRow::Get((longlong)**(int **)(lVar2 + 0x20),true);
              if (pFVar9 != (FDS_NpcBaseTableRow *)0x0) {
                (**(code **)(pFVar7->_padding_ + 0x78))(pFVar7);
                bVar4 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_1f0,
                                   (void *)0x0);
                if (!bVar4) {
                  this_03 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1f0);
                  UDS_MovementCore::GetActorLocation(this_03,(TVector<double> *)&local_198._s_0);
                  local_178._s_0.X = local_198._s_0.X;
                  local_178._s_0.Y = local_198._s_0.Y;
                  local_178._s_0.Z = local_198._s_0.Z;
                  CreatePhasingNPCIcon
                            (this_00,(TVector<double> *)&local_178._s_0,uVar11,pFVar7->SpawnTableID,
                             pFVar9);
                  FVar10.Data = FVar10.Data + 8;
                  goto LAB_14c0aac88;
                }
              }
            }
          }
          FVar10.Data = FVar10.Data + 8;
        } while( true );
      }
      goto LAB_14c0aae3f;
    }
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
  }
  return;
LAB_14c0aae21:
  this_01 = local_1e0;
  this_02 = local_1d8;
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
    this_01 = local_1e0;
    this_02 = local_1d8;
  }
LAB_14c0aae3f:
  FVar12.Data = FVar12.Data + 8;
  uVar6 = (ulonglong)local_1f4;
  goto LAB_14c0aac20;
}

// SpawnPlayerIcon @ 14c0aaec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnPlayerIcon(UDS_W_MapSpawnUnscaled *this)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  FSoftObjectPath *pFVar7;
  UDS_UserWidget *pUVar8;
  FDS_MapIndexBaseTableRow *pFVar9;
  UCanvasPanelSlot *this_00;
  undefined1 auStackY_1f8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  TVector2<double>_u_0 local_1b8;
  FWeakObjectPtr local_1a8 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FSoftObjectPath local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerMovementCore,(void *)0x0);
  if (bVar5) {
    return;
  }
  if ((this->PlayerIconObjectPath).AssetPath.PackageName == (FName)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&this->PlayerIconObjectPath,(FString *)&local_1b8._s_0);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_W_MapSpawnUnscaled::SpawnPlayerIcon",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_168.Ptr,0x9c6,L"Invalid PlayerIconObjectPath : %s");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  else {
    pFVar7 = FSoftObjectPath::FSoftObjectPath(&local_188,&this->PlayerIconObjectPath);
    pUVar8 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar7);
    if (pUVar8 == (UDS_UserWidget *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_W_MapSpawnUnscaled::SpawnPlayerIcon",0x27,Yes);
      pwVar11 = L"loadedContentsWidget is nullptr.";
      uVar10 = 0x9cd;
    }
    else {
      pFVar9 = FDS_MapIndexBaseTableRow::Get(1,true);
      if (pFVar9 != (FDS_MapIndexBaseTableRow *)0x0) {
        if (this->IsIndoor == true) {
          if (pFVar9->isShownInIndoorMap == false) {
            return;
          }
          bVar5 = this->CurCharIndoorGroupID == this->CurLookIndoorGroupID;
        }
        else {
          bVar5 = this->CurCharIslandID == this->CurLookIslandID;
        }
        if (!bVar5) {
          return;
        }
        iVar1 = pFVar9->MapIndexPriority;
        dVar2 = (double)pFVar9->IconSpawnSize;
        this_00 = UCanvasPanel::AddChildToCanvas((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar8);
        if (this_00 != (UCanvasPanelSlot *)0x0) {
          local_1b8._8_4_ = SUB84(dVar2,0);
          local_1b8._s_0.X = dVar2;
          local_1b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          UCanvasPanelSlot::SetSize(this_00,(TVector2<double> *)&local_1b8._s_0);
          local_1b8._s_0.X = (double)___xmm_3fe00000000000003fe0000000000000;
          local_1b8._s_0.Y = (double)_UNK_150689678;
          UCanvasPanelSlot::SetAlignment(this_00,(TVector2<double> *)&local_1b8._s_0);
          UCanvasPanelSlot::SetZOrder(this_00,-iVar1);
          MakeContext<FDS_ViewModelContext_WorldMapIconInfo>
                    ((TSharedPtr<FDS_ViewModelContext_WorldMapIconInfo,1> *)&local_1b8._s_0);
          uVar4 = local_1b8._s_0.Y;
          uVar3 = local_1b8._s_0.X;
          if ((UDS_UserWidget *)local_1b8._s_0.X != (UDS_UserWidget *)0x0) {
            *(undefined4 *)((longlong)local_1b8._s_0.X + 0x18) = 0x1a3;
            *(UCanvasPanelSlot **)((longlong)local_1b8._s_0.X + 0x58) = this_00;
            dVar2 = (this->MapStartPos).field0_0x0._s_0.Y;
            *(double *)((longlong)local_1b8._s_0.X + 0x78) = (this->MapStartPos).field0_0x0._s_0.X;
            *(double *)((longlong)local_1b8._s_0.X + 0x80) = dVar2;
            dVar2 = (this->ReferenceGlobalPosition).field0_0x0._s_0.Y;
            *(double *)((longlong)local_1b8._s_0.X + 0x88) =
                 (this->ReferenceGlobalPosition).field0_0x0._s_0.X;
            *(double *)((longlong)local_1b8._s_0.X + 0x90) = dVar2;
            *(float *)((longlong)local_1b8._s_0.X + 0x40) = this->OrthoWidth;
            *(uint *)((longlong)local_1b8._s_0.X + 0x34) = (uint)pFVar9->ID;
            *(float *)((longlong)local_1b8._s_0.X + 0x44) = this->TextureSize;
            *(int *)((longlong)local_1b8._s_0.X + 0x30) = pFVar9->MapIndexGroupID;
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)
                       ((longlong)local_1b8._s_0.X + 0x60),&pFVar9->WorldMapZoomStep);
            *(float *)(uVar3 + 0x4c) = this->TextureScale;
            *(int *)(uVar3 + 0x38) = this->MapType;
            local_198.Object = (FDS_ViewModelContext *)local_1b8._s_0.X;
            local_198.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)local_1b8._s_0.Y;
            if ((TReferenceControllerBase<1> *)uVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *(atomic<int> *)(uVar4 + 8) = (atomic<int>)((int)*(atomic<int> *)(uVar4 + 8) + 1);
              UNLOCK();
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            local_1a8[0].ObjectIndex = 0;
            local_1a8[0].ObjectSerialNumber = 0;
            local_1b8._0_8_ = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            FWeakObjectPtr::operator=(local_1a8,(FObjectPtr)&local_1b8);
            DS_ViewModelTemplateUtil::BindViewModel
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_1a8[0],&local_198,false)
            ;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar4);
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_W_MapSpawnUnscaled::SpawnPlayerIcon",0x27,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x9f4,L"canvasSlot is nullptr.");
        if ((void *)local_168._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_168._padding_);
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_W_MapSpawnUnscaled::SpawnPlayerIcon",0x27,Yes);
      pwVar11 = L"playerIconMapIndexBaseTableRow is nullptr.";
      uVar10 = 0x9d4;
    }
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,uVar10,pwVar11);
    local_1b8._s_0.X = (double)local_168._padding_;
  }
  if ((void *)local_1b8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_1b8._s_0.X);
  }
  return;
}

// SpawnQuestAcceptIcon @ 14c0ab350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnQuestAcceptIcon(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  bool bVar3;
  UDS_QuestManager *this_00;
  UDS_LogManager *pUVar4;
  int iVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  TArray<FDS_QuestLocalTableRow_const_*,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_190;
  TVector<double>_u_0 local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 == (UDS_QuestManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_W_MapSpawnUnscaled::SpawnQuestAcceptIcon",0x2c,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0xbf2,L"questMgr is nullptr");
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    FDS_QuestLocalTableRow::GetAll(&local_1a0);
    iVar5 = local_1a0.ArrayNum;
    pFVar1 = local_1a0.AllocatorInstance.Data + (longlong)iVar5 * 8;
    FVar7.Data = local_1a0.AllocatorInstance.Data;
    while( true ) {
      if (local_1a0.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FDS_QuestLocalTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a8);
      }
      if (FVar7.Data == pFVar1) break;
      lVar2 = *(longlong *)FVar7.Data;
      if (lVar2 == 0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_W_MapSpawnUnscaled::SpawnQuestAcceptIcon",0x2c,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_158.Ptr,0xbfc,L"questLocalTableRow is nullptr");
          FVar6.Data = (FScriptContainerElement *)local_158._padding_;
LAB_14c0ab582:
          if (FVar6.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar6.Data);
          }
        }
      }
      else {
        if (this->IsIndoor == true) {
          bVar3 = CheckZoneInIndoorGroup(this,*(int *)(lVar2 + 0x44));
        }
        else {
          bVar3 = CheckZoneInIsland(this,*(int *)(lVar2 + 0x44));
        }
        if ((((bVar3 != false) &&
             (bVar3 = CheckIsNpcSpawnedProgressMainQuest(this,*(int *)(lVar2 + 0x3c)), !bVar3)) &&
            (bVar3 = CheckIsNpcSpawnedProgressLocalQuest(this,*(int *)(lVar2 + 0x3c)), !bVar3)) &&
           ((bVar3 = CheckIsNpcSpawnedCompleteMainQuest(this,*(int *)(lVar2 + 0x3c)), !bVar3 &&
            (bVar3 = CheckIsNpcSpawnedCompleteLocalQuest(this,*(int *)(lVar2 + 0x3c)), !bVar3)))) {
          UDS_QuestManager::GetNpcQuestList(this_00,&local_190,*(int *)(lVar2 + 0x3c),AbleAccept);
          FVar6.Data = local_190.AllocatorInstance.Data;
          if (0 < local_190.ArrayNum) {
            local_178._s_0.X = *(double *)(lVar2 + 0x48);
            local_178._s_0.Y = *(double *)(lVar2 + 0x50);
            local_178._s_0.Z = *(double *)(lVar2 + 0x58);
            CreateQuestAcceptIcon
                      (this,*(int *)(lVar2 + 8),*(int *)(lVar2 + 0x3c),
                       (TVector<double> *)&local_178._s_0);
            FVar6.Data = local_190.AllocatorInstance.Data;
          }
          goto LAB_14c0ab582;
        }
      }
      FVar7.Data = FVar7.Data + 8;
    }
  }
  if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.AllocatorInstance.Data);
  }
  return;
}

// SpawnQuestBoardIcon @ 14c0ab5f0

void __thiscall UDS_W_MapSpawnUnscaled::SpawnQuestBoardIcon(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  undefined1 local_res10 [8];
  TArray<FDS_StuffQuestBoardTableRow_const_*,TSizedDefaultAllocator<32>_> local_48;
  TVector<double>_u_0 local_38;
  
  FDS_StuffQuestBoardTableRow::GetAll(&local_48);
  iVar3 = local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar5.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_StuffQuestBoardTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar5.Data;
    if (lVar2 != 0) {
      if (this->IsIndoor == true) {
        bVar4 = CheckZoneInIndoorGroup(this,*(int *)(lVar2 + 0x24));
      }
      else {
        bVar4 = CheckZoneInIsland(this,*(int *)(lVar2 + 0x24));
      }
      if (bVar4 != false) {
        local_38._s_0.X = *(double *)(lVar2 + 0x28);
        local_38._s_0.Y = *(double *)(lVar2 + 0x30);
        local_38._s_0.Z = *(double *)(lVar2 + 0x38);
        CreateQuestBoardIcon(this,(longlong)*(int *)(lVar2 + 8),(TVector<double> *)&local_38._s_0);
      }
    }
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// SpawnQuestStateIcon @ 14c0ab6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnQuestStateIcon(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  UDS_QuestManager *pUVar5;
  UDS_LogManager *pUVar6;
  UObject *pUVar7;
  int iVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8 [8];
  TArray<EDS_QuestType,TSizedDefaultAllocator<32>_> local_1d0;
  ForAnyElementType local_1c0;
  undefined8 local_1b8;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  ForAnyElementType local_190;
  undefined8 local_188;
  TArray<int,TSizedDefaultAllocator<32>_> local_180;
  TArray<int,TSizedDefaultAllocator<32>_> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar5 = UDS_QuestManager::GetInst();
  if (pUVar5 == (UDS_QuestManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_W_MapSpawnUnscaled::SpawnQuestStateIcon",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0xbad,L"questMng is nullptr.");
    local_170.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    local_1d8[0] = 1;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_1d0.AllocatorInstance,1,&local_1d0.ArrayMax);
    memcpy(local_1d0.AllocatorInstance.Data,local_1d8,1);
    UDS_QuestManager::GetQuestListByInProgress(&local_170,&local_1d0,false);
    local_1d8[0] = 2;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,1,0,&local_1d0.AllocatorInstance,1,&local_1d0.ArrayMax);
    memcpy(local_1d0.AllocatorInstance.Data,local_1d8,1);
    UDS_QuestManager::GetQuestListByInProgress(&local_180,&local_1d0,false);
    iVar8 = local_170.ArrayNum;
    local_190.Data = (FScriptContainerElement *)0x0;
    local_188 = 0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    pFVar1 = local_170.AllocatorInstance.Data + (longlong)iVar8 * 4;
    local_198 = 0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    FVar9.Data = local_170.AllocatorInstance.Data;
    while( true ) {
      if (local_170.ArrayNum != iVar8) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1d8);
      }
      if (FVar9.Data == pFVar1) break;
      uVar2 = *(undefined4 *)FVar9.Data;
      UDS_QuestManager::GetQuestData((int)&local_1d0);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1d0);
      if (bVar3) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1d0);
        if (pUVar7[2].field_0x19 == '\0') {
          iVar4 = (int)local_188;
          if ((int)local_188 == local_188._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_190,(int *)((longlong)&local_188 + 4));
          }
          local_188 = CONCAT44(local_188._4_4_,iVar4 + 1);
          *(undefined4 *)(local_190.Data + (longlong)iVar4 * 4) = uVar2;
          goto LAB_14c0ab925;
        }
        if (pUVar7[2].field_0x19 != '\x01') goto LAB_14c0ab925;
        iVar4 = (int)local_1a8;
        if ((int)local_1a8 == local_1a8._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_1b0,(int *)((longlong)&local_1a8 + 4));
        }
        FVar9.Data = FVar9.Data + 4;
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar4 + 1);
        *(undefined4 *)(local_1b0.Data + (longlong)iVar4 * 4) = uVar2;
      }
      else {
LAB_14c0ab925:
        FVar9.Data = FVar9.Data + 4;
      }
    }
    iVar8 = local_180.ArrayNum;
    pFVar1 = local_180.AllocatorInstance.Data + (longlong)iVar8 * 4;
    FVar9.Data = local_180.AllocatorInstance.Data;
    while( true ) {
      if (local_180.ArrayNum != iVar8) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1d8);
      }
      _Src.Data = local_1b0.Data;
      if (FVar9.Data == pFVar1) break;
      uVar2 = *(undefined4 *)FVar9.Data;
      UDS_QuestManager::GetQuestData((int)&local_1d0);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1d0);
      if (bVar3) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1d0);
        if (pUVar7[2].field_0x19 == '\0') {
          iVar4 = (int)local_198;
          if ((int)local_198 == local_198._4_4_) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1a0,(int *)((longlong)&local_198 + 4));
          }
          local_198 = CONCAT44(local_198._4_4_,iVar4 + 1);
          *(undefined4 *)(local_1a0.Data + (longlong)iVar4 * 4) = uVar2;
          goto LAB_14c0ab9f9;
        }
        if (pUVar7[2].field_0x19 != '\x01') goto LAB_14c0ab9f9;
        iVar4 = (int)local_1b8;
        if ((int)local_1b8 == local_1b8._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_1c0,(int *)((longlong)&local_1b8 + 4));
        }
        FVar9.Data = FVar9.Data + 4;
        local_1b8 = CONCAT44(local_1b8._4_4_,iVar4 + 1);
        *(undefined4 *)(local_1c0.Data + (longlong)iVar4 * 4) = uVar2;
      }
      else {
LAB_14c0ab9f9:
        FVar9.Data = FVar9.Data + 4;
      }
    }
    lVar10 = (longlong)(int)local_1a8;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = (int)local_1a8;
    if ((int)local_1a8 == 0) {
      local_1d0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_1a8,0,&local_1d0.AllocatorInstance,(int)local_1a8,
                 &local_1d0.ArrayMax);
      memcpy(local_1d0.AllocatorInstance.Data,_Src.Data,lVar10 << 2);
    }
    ProcessQuestCompleteCreateIcon(this,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1d0,true);
    FVar9.Data = local_1c0.Data;
    lVar10 = (longlong)(int)local_1b8;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = (int)local_1b8;
    if ((int)local_1b8 == 0) {
      local_1d0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_1b8,0,&local_1d0.AllocatorInstance,(int)local_1b8,
                 &local_1d0.ArrayMax);
      memcpy(local_1d0.AllocatorInstance.Data,FVar9.Data,lVar10 << 2);
    }
    ProcessQuestCompleteCreateIcon(this,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1d0,false)
    ;
    FVar9.Data = local_190.Data;
    lVar10 = (longlong)(int)local_188;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = (int)local_188;
    if ((int)local_188 == 0) {
      local_1d0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_188,0,&local_1d0.AllocatorInstance,(int)local_188,
                 &local_1d0.ArrayMax);
      memcpy(local_1d0.AllocatorInstance.Data,FVar9.Data,lVar10 << 2);
    }
    ProcessQuestProgressCreateIcon(this,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1d0,true);
    FVar9.Data = local_1a0.Data;
    lVar10 = (longlong)(int)local_198;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = (int)local_198;
    if ((int)local_198 == 0) {
      local_1d0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_198,0,&local_1d0.AllocatorInstance,(int)local_198,
                 &local_1d0.ArrayMax);
      memcpy(local_1d0.AllocatorInstance.Data,FVar9.Data,lVar10 << 2);
    }
    ProcessQuestProgressCreateIcon(this,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1d0,false)
    ;
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    if (local_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data);
    }
    if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.AllocatorInstance.Data);
    }
  }
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

// SpawnSharedMarker @ 14c0abc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnSharedMarker(UDS_W_MapSpawnUnscaled *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  UDS_WorldMapMarkerManager *pUVar4;
  UDS_LogManager *pUVar5;
  FDS_MapIndexBaseTableRow *pFVar6;
  FDS_WorldMapMarkerInfo *pFVar7;
  bool bVar8;
  double dVar9;
  undefined1 auStackY_1c8 [32];
  FDS_WorldMapMarkerInfo local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar4 = UDS_WorldMapMarkerManager::GetInst();
  if (pUVar4 == (UDS_WorldMapMarkerManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_W_MapSpawnUnscaled::SpawnSharedMarker",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x98b,L"worldMapMarkerMgr nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if ((UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X !=
            (pUVar4->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.X) ||
          (UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y !=
           (pUVar4->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.Y)) {
    pFVar6 = FDS_MapIndexBaseTableRow::Get(0x22,true);
    if (pFVar6 == (FDS_MapIndexBaseTableRow *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)pFVar6;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_W_MapSpawnUnscaled::SpawnSharedMarker",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x998,L"linkMarkerMapIndexBaseTableRow nullptr");
        if ((FDS_MapIndexBaseTableRow *)local_138._padding_ != (FDS_MapIndexBaseTableRow *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else if (((pFVar6->isShownInRadar != false) || ((char)this->MapType != '\0')) &&
            ((pFVar6->isShownInWorldMap != false || ((char)this->MapType != '\x01')))) {
      if (this->IsIndoor == true) {
        if (pFVar6->isShownInIndoorMap == false) {
          return;
        }
        bVar8 = (pUVar4->SharedMarkInfo).IndoorGroupID == this->CurLookIndoorGroupID;
      }
      else {
        bVar8 = (pUVar4->SharedMarkInfo).IslandID == this->CurLookIslandID;
      }
      if (bVar8) {
        dVar2 = (pUVar4->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.Y;
        dVar3 = (this->MapStartPos).field0_0x0._s_0.Y;
        fVar1 = this->TextureSize;
        dVar9 = __real_3ff0000000000000 / (double)this->OrthoWidth;
        (pUVar4->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.X =
             ((pUVar4->SharedMarkInfo).MarkerGlobalPos.field0_0x0._s_0.X -
             (this->MapStartPos).field0_0x0._s_0.X) * dVar9 * (double)fVar1;
        (pUVar4->SharedMarkInfo).MakerVector2D.field0_0x0._s_0.Y =
             (dVar2 - dVar3) * dVar9 * (double)fVar1;
        pFVar7 = FDS_WorldMapMarkerInfo::FDS_WorldMapMarkerInfo(&local_198,&pUVar4->SharedMarkInfo);
        CreateMarker(this,pFVar7,pFVar6,true,true);
      }
    }
  }
  return;
}

// SpawnWarpDevice @ 14c0abed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnWarpDevice(UDS_W_MapSpawnUnscaled *this)

{
  float fVar1;
  double dVar2;
  long64 lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long64 lVar7;
  long64 lVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  UDS_LogManager *pUVar12;
  UDS_GameInstance *pUVar13;
  UDS_WorldMapManager *this_00;
  FDS_MapIndexBaseTableRow *pFVar14;
  TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *pTVar15;
  FScriptContainerElement *pFVar16;
  FSoftObjectPath *pFVar17;
  UDS_UserWidget *pUVar18;
  UCanvasPanelSlot *this_01;
  FScriptContainerElement *pFVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStackY_288 [32];
  uint uVar25;
  wchar_t *pwVar26;
  TVector2<double>_u_0 local_238;
  FScriptContainerElement *local_228;
  TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> local_220;
  TVector2<double>_u_0 local_208;
  FDS_WarpDeviceIconData local_1f8;
  FSoftObjectPath local_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar11 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                     (&this->OwnerMovementCore,(void *)0x0);
  if (bVar11) {
    return;
  }
  if ((this->IconBtnObjectPath).AssetPath.PackageName == (FName)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    FSoftObjectPath::ToString(&this->IconBtnObjectPath,(FString *)&local_238._s_0);
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_W_MapSpawnUnscaled::SpawnWarpDevice",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar12,1,Warning,local_1a8.Ptr,0xa14,L"Invalid IconBtnObjectPath : %s");
    if ((void *)local_1a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1a8._padding_);
    }
    if ((void *)local_238._s_0.X == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_238._s_0.X);
    return;
  }
  pUVar13 = UDS_GameInstance::GetInst();
  if (pUVar13 == (UDS_GameInstance *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_W_MapSpawnUnscaled::SpawnWarpDevice",0x27,Yes);
    UDS_LogManager::PrintLog(pUVar12,1,Warning,local_1a8.Ptr,0xa1b,L"gameInst is nullptr.");
    if ((void *)local_1a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1a8._padding_);
    return;
  }
  this_00 = UDS_WorldMapManager::GetInst();
  if (this_00 == (UDS_WorldMapManager *)0x0) {
    return;
  }
  pFVar14 = FDS_MapIndexBaseTableRow::Get(0x2e,true);
  if (pFVar14 == (FDS_MapIndexBaseTableRow *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar12 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_W_MapSpawnUnscaled::SpawnWarpDevice",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar12,1,Warning,local_1a8.Ptr,0xa28,L"warpDeviceMapIndexBaseTable is nullptr.");
    if ((void *)local_1a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1a8._padding_);
    return;
  }
  pFVar19 = (FScriptContainerElement *)0x0;
  iVar20 = 0;
  local_228 = (FScriptContainerElement *)0x0;
  if (((pFVar14->isShownInRadar != false) || (pFVar21 = pFVar19, (char)this->MapType != '\0')) &&
     ((pFVar21 = (FScriptContainerElement *)0x0, pFVar14->isShownInWorldMap != false ||
      ((char)this->MapType != '\x01')))) {
    if (this->IsIndoor == true) {
      if (pFVar14->isShownInIndoorMap == false) goto LAB_14c0ac450;
      pTVar15 = UDS_WorldMapManager::GetIndoorMapWarpDeviceIconDatas
                          (this_00,(TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *)
                                   &local_238._s_0,this->CurLookIndoorGroupID);
    }
    else {
      pTVar15 = UDS_WorldMapManager::GetWorldMapWarpDeviceIconDatas
                          (this_00,(TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *)
                                   &local_238._s_0,this->CurLookIslandID);
    }
    if (&local_220 != pTVar15) {
      pFVar19 = (pTVar15->AllocatorInstance).Data;
      (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar20 = pTVar15->ArrayNum;
      pTVar15->ArrayNum = 0;
      pTVar15->ArrayMax = 0;
      local_228 = pFVar19;
    }
    if ((void *)local_238._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_238._s_0.X);
    }
    dVar10 = _UNK_150689678;
    dVar9 = ___xmm_3fe00000000000003fe0000000000000;
    pFVar21 = pFVar19;
    if (0 < iVar20) {
      pFVar16 = pFVar19 + (longlong)iVar20 * 0x30;
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      for (; pFVar21 = local_228, pFVar19 != pFVar16; pFVar19 = pFVar19 + 0x30) {
        lVar3 = *(long64 *)(pFVar19 + 0x10);
        dVar4 = *(double *)(pFVar19 + 0x18);
        lVar7 = *(long64 *)pFVar19;
        lVar8 = *(long64 *)(pFVar19 + 8);
        dVar5 = *(double *)(pFVar19 + 0x20);
        dVar6 = *(double *)(pFVar19 + 0x28);
        if (((dVar4 != (double)uVar24) || (dVar5 != (double)uVar23)) || (dVar6 != (double)uVar22)) {
          pFVar17 = FSoftObjectPath::FSoftObjectPath(&local_1c8,&this->IconBtnObjectPath);
          pUVar18 = GetLoadedUserWidgetByFSoftObjectPath(this,pFVar17);
          if (pUVar18 == (UDS_UserWidget *)0x0) {
            pUVar12 = UDS_LogManager::GetInst();
            uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            if (pUVar12 != (UDS_LogManager *)0x0) {
              pUVar12 = UDS_LogManager::GetInst();
              local_1a8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_1a8,"UDS_W_MapSpawnUnscaled::SpawnWarpDevice",0x27,Yes);
              pwVar26 = L"loadedContentsWidget is nullptr.";
              uVar25 = 0xa4b;
LAB_14c0ac3c0:
              UDS_LogManager::PrintLog(pUVar12,1,Warning,local_1a8.Ptr,uVar25,pwVar26);
              uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              if ((void *)local_1a8._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_1a8._padding_);
                uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              }
            }
          }
          else {
            fVar1 = pFVar14->IconSpawnSize;
            iVar20 = pFVar14->MapIndexPriority;
            this_01 = UCanvasPanel::AddChildToCanvas
                                ((UCanvasPanel *)this->PanelMain,(UWidget *)pUVar18);
            if (this_01 == (UCanvasPanelSlot *)0x0) {
              pUVar12 = UDS_LogManager::GetInst();
              uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              if (pUVar12 != (UDS_LogManager *)0x0) {
                pUVar12 = UDS_LogManager::GetInst();
                local_1a8._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_1a8,"UDS_W_MapSpawnUnscaled::SpawnWarpDevice",0x27,Yes);
                pwVar26 = L"canvasSlot is nullptr.";
                uVar25 = 0xa57;
                goto LAB_14c0ac3c0;
              }
            }
            else {
              dVar2 = (double)fVar1;
              local_238._8_4_ = SUB84(dVar2,0);
              local_238._s_0.X = dVar2;
              local_238._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
              UCanvasPanelSlot::SetSize(this_01,(TVector2<double> *)&local_238._s_0);
              local_208._s_0.X = dVar9;
              local_208._s_0.Y = dVar10;
              UCanvasPanelSlot::SetAlignment(this_01,(TVector2<double> *)&local_208._s_0);
              UCanvasPanelSlot::SetZOrder(this_01,-iVar20);
              local_1f8.StuffTableID = lVar7;
              local_1f8.WarpLoactionID = lVar8;
              local_1f8.StuffWarpDeviceID = lVar3;
              local_1f8.SpawnPosition.field0_0x0._s_0.X = dVar4;
              local_1f8.SpawnPosition.field0_0x0._s_0.Y = dVar5;
              local_1f8.SpawnPosition.field0_0x0._s_0.Z = dVar6;
              CreateWarpDevice(this,this_01,&local_1f8,pFVar14,pUVar18);
              uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
          }
        }
      }
    }
  }
LAB_14c0ac450:
  if (pFVar21 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar21);
  }
  return;
}

// SpawnWorldBossIcon @ 14c0ac4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MapSpawnUnscaled::SpawnWorldBossIcon(UDS_W_MapSpawnUnscaled *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_WorldBossManager *this_00;
  UDS_LogManager *pUVar3;
  TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_WorldBossManager::GetInst();
  if (this_00 == (UDS_WorldBossManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_W_MapSpawnUnscaled::SpawnWorldBossIcon",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0xb8f,L"worldBossManager is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if (this->IsIndoor != true) {
    pTVar4 = UDS_WorldBossManager::GetStateInfoArrayByIslandNumber(this_00,this->CurLookIslandID);
    if (pTVar4 == (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = (longlong)pTVar4;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_W_MapSpawnUnscaled::SpawnWorldBossIcon",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_148.Ptr,0xb9b,L"worldBossStateInfoArray is nullptr");
        if ((TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)local_148._padding_ !=
            (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      iVar2 = pTVar4->ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
      while( true ) {
        if (pTVar4->ArrayNum != iVar2) {
          `TCheckedPointerIterator<FDS_WorldBossStateInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_158);
        }
        if (pFVar5 == pFVar1) break;
        if (pFVar5[4] == (FScriptContainerElement)0x3) {
          CreateWorldBossIcon(this,*(int *)pFVar5);
        }
        pFVar5 = pFVar5 + 0x18;
      }
    }
  }
  return;
}

// UpdatePanelMainPosition @ 14c0afb00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MapSpawnUnscaled::UpdatePanelMainPosition
          (UDS_W_MapSpawnUnscaled *this,TVector2<double> *param_1)

{
  UDS_CanvasPanel *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UDS_WorldMapEvent *pUVar5;
  longlong local_res8 [4];
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58 [5];
  
  this_00 = this->PanelMain;
  dVar4 = (double)this->TextureSize;
  dVar3 = __real_3ff0000000000000 / (double)this->OrthoWidth;
  if (this_00 != (UDS_CanvasPanel *)0x0) {
    dVar1 = (this->MapStartPos).field0_0x0._s_0.Y -
            ((param_1->field0_0x0)._s_0.Y - (this->CurMapPositionOffset).field0_0x0._s_0.Y);
    dVar2 = ((this->MapStartPos).field0_0x0._s_0.X -
            ((param_1->field0_0x0)._s_0.X - (this->CurMapPositionOffset).field0_0x0._s_0.X)) * dVar3
            * dVar4;
    if (this->IsFirstPanelTranslationDataSet == true) {
      this->IsFirstPanelTranslationDataSet = false;
      (this->FirstPanelTranslation).field0_0x0._s_0.X = dVar2;
      local_68._s_0.Y = dVar1 * dVar3 * dVar4;
      (this->FirstPanelTranslation).field0_0x0._s_0.Y = local_68._s_0.Y;
      local_68._s_0.X = dVar2;
      UWidget::SetRenderTranslation((UWidget *)this_00,(TVector2<double> *)&local_68._s_0);
    }
    pUVar5 = UDS_WorldMapEvent::GetEvent();
    if (pUVar5 != (UDS_WorldMapEvent *)0x0) {
      local_res8[0] = (longlong)this->MapType;
      local_58[0]._0_8_ = (this->FirstPanelTranslation).field0_0x0._s_0.X;
      local_58[0]._8_8_ = (this->FirstPanelTranslation).field0_0x0._s_0.Y;
      local_68._s_0.Y = dVar1 * dVar3 * dVar4;
      local_68._s_0.X = dVar2;
      FDS_FilteredEventDelegate<__int64_const_,UE::Math::TVector2<double>_const_,UE::Math::TVector2<double>_const_>
      ::Broadcast(&pUVar5->ChangedPanelTranslationDelegate,local_res8,
                  (TVector2<double> *)&local_58[0]._s_0,(TVector2<double> *)&local_68._s_0);
    }
  }
  return;
}

