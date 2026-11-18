// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Settings
// Functions: 13

// GetContainerNames @ 142692d80

void __thiscall
FSettingsModule::GetContainerNames
          (FSettingsModule *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FName,TSharedPtr<FSettingsContainer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,TSharedPtr<FSettingsContainer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>_>
              *)&this->ContainerNamesToContainers,param_1);
  return;
}

// GetContainer @ 142692d90

TSharedPtr<ISettingsContainer,1> * __thiscall
FSettingsModule::GetContainer
          (FSettingsModule *this,TSharedPtr<ISettingsContainer,1> *__return_storage_ptr__,
          FName *param_1)

{
  TTuple<FName,TSharedPtr<FSettingsContainer,1>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  ISettingsContainer *pIVar3;
  
  pTVar1 = TSet<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>,FDefaultSetAllocator>
                   *)&this->ContainerNamesToContainers,*param_1);
  if (pTVar1 == (TTuple<FName,TSharedPtr<FSettingsContainer,1>_> *)0x0) {
    pTVar2 = (TReferenceControllerBase<1> *)0x0;
    pIVar3 = (ISettingsContainer *)0x0;
  }
  else {
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar1->field_0x10;
    pIVar3 = *(ISettingsContainer **)&pTVar1->field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  __return_storage_ptr__->Object = pIVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// RegisterSettings @ 142692df0

TSharedPtr<ISettingsSection,1> * __thiscall
FSettingsModule::RegisterSettings
          (FSettingsModule *this,TSharedPtr<ISettingsSection,1> *__return_storage_ptr__,
          FName *param_1,FName *param_2,FName *param_3,FText *param_4,FText *param_5,
          TWeakObjectPtr<UObject,FWeakObjectPtr> *param_6)

{
  TSharedRef<FSettingsContainer,1> *pTVar1;
  TSharedRef<FSettingsContainer,1> local_18;
  
  pTVar1 = FindOrAddContainer(this,&local_18,param_1);
  FSettingsContainer::AddSection
            (pTVar1->Object,__return_storage_ptr__,param_2,param_3,param_4,param_5,param_6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RegisterSettings @ 142692e70

TSharedPtr<ISettingsSection,1> * __thiscall
FSettingsModule::RegisterSettings
          (FSettingsModule *this,TSharedPtr<ISettingsSection,1> *__return_storage_ptr__,
          FName *param_1,FName *param_2,FName *param_3,FText *param_4,FText *param_5,
          TSharedRef<SWidget,1> *param_6)

{
  TSharedRef<FSettingsContainer,1> *pTVar1;
  TSharedRef<FSettingsContainer,1> local_18;
  
  pTVar1 = FindOrAddContainer(this,&local_18,param_1);
  FSettingsContainer::AddSection
            (pTVar1->Object,__return_storage_ptr__,param_2,param_3,param_4,param_5,param_6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RegisterViewer @ 142692ef0

void __thiscall
FSettingsModule::RegisterViewer(FSettingsModule *this,FName *param_1,ISettingsViewer *param_2)

{
  TPairInitializer<FName_const_&,ISettingsViewer_*_&&> local_res8 [2];
  FName *local_18;
  ISettingsViewer ***local_10;
  
  local_10 = &local_res8[0].Value;
  local_res8[0].Value = (ISettingsViewer **)param_2;
  local_18 = param_1;
  TSet<TTuple<FName,ISettingsViewer_*>,TDefaultMapHashableKeyFuncs<FName,ISettingsViewer_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,ISettingsViewer_*_&&>_>
            ((TSet<TTuple<FName,ISettingsViewer_*>,TDefaultMapHashableKeyFuncs<FName,ISettingsViewer_*,0>,FDefaultSetAllocator>
              *)&this->ContainerNamesToViewers,local_res8,(bool *)&local_18);
  return;
}

// ShowViewer @ 142692f30

void __thiscall
FSettingsModule::ShowViewer(FSettingsModule *this,FName *param_1,FName *param_2,FName *param_3)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  
  FVar2 = *param_1;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->ContainerNamesToViewers).field_0x8 !=
      *(int *)&(this->ContainerNamesToViewers).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ContainerNamesToViewers).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ContainerNamesToViewers).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ContainerNamesToViewers).field_0x48 - 1U &
                              FVar2.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->ContainerNamesToViewers + (longlong)iVar4 * 0x18;
        if (*(FName *)(*(longlong *)&this->ContainerNamesToViewers + (longlong)iVar4 * 0x18) ==
            FVar2) {
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          if (puVar5 == (undefined8 *)0x0) {
            return;
          }
          (*(code *)**(undefined8 **)*puVar5)((undefined8 *)*puVar5,param_2,param_3);
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return;
}

// UnregisterViewer @ 142693000

void __thiscall FSettingsModule::UnregisterViewer(FSettingsModule *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8;
  
  FVar1 = *param_1;
  if (*(int *)&(this->ContainerNamesToViewers).field_0x8 !=
      *(int *)&(this->ContainerNamesToViewers).field_0x34) {
    local_res8 = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,ISettingsViewer_*>,TDefaultMapHashableKeyFuncs<FName,ISettingsViewer_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,ISettingsViewer_*>,TDefaultMapHashableKeyFuncs<FName,ISettingsViewer_*,0>,FDefaultSetAllocator>
                         *)&this->ContainerNamesToViewers,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

// UnregisterSettings @ 142693050

void __thiscall
FSettingsModule::UnregisterSettings
          (FSettingsModule *this,FName *param_1,FName *param_2,FName *param_3)

{
  FSettingsContainer *this_00;
  TTuple<FName,TSharedPtr<FSettingsContainer,1>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar1 = TSet<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>,FDefaultSetAllocator>
                   *)&this->ContainerNamesToContainers,*param_1);
  if (pTVar1 == (TTuple<FName,TSharedPtr<FSettingsContainer,1>_> *)0x0) {
    pTVar2 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar1->field_0x10;
    this_00 = *(FSettingsContainer **)&pTVar1->field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FSettingsContainer *)0x0) {
      FSettingsContainer::RemoveSection(this_00,param_2,param_3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// OnContainerAdded @ 1426930c0

TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> * __thiscall
FSettingsModule::OnContainerAdded(FSettingsModule *this)

{
  return &this->ContainerAddedDelegate;
}

// StartupModule @ 1426930d0

void __thiscall FSettingsModule::StartupModule(FSettingsModule *this)

{
  code *pcVar1;
  FText *pFVar2;
  FText *pFVar3;
  FDelegateHandle FVar4;
  FName local_res8;
  <lambda_1> local_res10;
  TSharedRef<FSettingsContainer,1> local_68;
  TSharedRef<FSettingsContainer,1> local_58;
  FText local_48;
  FText local_38;
  
  ::FName::FName(&local_res8,"Editor");
  FindOrAddContainer(this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pcVar1 = *(code **)(local_58.Object)->_padding_;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"EditorPreferencesSubMenuToolTip",
                      L"Configure the behavior and features of this Editor");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"FSettingsModule",L"EditorPreferencesSubMenuLabel",
                      L"Editor Preferences");
  (*pcVar1)(local_58.Object,pFVar3,pFVar2,&local_res8);
  if (local_68.Object != (FSettingsContainer *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pcVar1 = *(code **)((local_58.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"FSettingsModule",L"EditorGeneralCategoryDescription",
                      L"General Editor settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"EditorGeneralCategoryName",L"General");
  ::FName::FName(&local_res8,"General");
  (*pcVar1)(local_58.Object,&local_res8,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.Object != (FSettingsContainer *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  pcVar1 = *(code **)((local_58.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"FSettingsModule",L"EditorLevelEditorCategoryDescription",
                      L"Level Editor settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"EditorLevelEditorCategoryName",L"Level Editor")
  ;
  ::FName::FName(&local_res8,"LevelEditor");
  (*pcVar1)(local_58.Object,&local_res8,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.Object != (FSettingsContainer *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  pcVar1 = *(code **)((local_58.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"FSettingsModule",
                      L"EditorContentEditorsCategoryDescription",L"Content editors settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"EditorContentEditorsCategoryName",
                      L"Content Editors");
  ::FName::FName(&local_res8,"ContentEditors");
  (*pcVar1)(local_58.Object,&local_res8,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.Object != (FSettingsContainer *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  pcVar1 = *(code **)((local_58.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"FSettingsModule",L"EditorPrivacyCategoryDescription",
                      L"Privacy settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"EditorPrivacyCategoryName",L"Privacy");
  ::FName::FName(&local_res8,"Privacy");
  (*pcVar1)(local_58.Object,&local_res8,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.Object != (FSettingsContainer *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  pcVar1 = *(code **)((local_58.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"FSettingsModule",L"EditorPluginsCategoryDescription",
                      L"Plugins settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"EditorPluginsCategoryName",L"Plugins");
  ::FName::FName(&local_res8,"Plugins");
  (*pcVar1)(local_58.Object,&local_res8,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.Object != (FSettingsContainer *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  pcVar1 = *(code **)((local_58.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_68,L"FSettingsModule",L"EditorAdvancedCategoryDescription",
                      L"Advanced editor settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"EditorAdvancedCategoryName",L"Advanced");
  ::FName::FName(&local_res8,"Advanced");
  (*pcVar1)(local_58.Object,&local_res8,pFVar3,pFVar2);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_68.Object != (FSettingsContainer *)0x0) {
    (**(code **)((local_68.Object)->_padding_ + 0x10))();
  }
  ::FName::FName(&local_res8,"Project");
  FindOrAddContainer(this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pcVar1 = *(code **)(local_68.Object)->_padding_;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FSettingsModule",L"ProjectSettingsSubMenuToolTip",
                      L"Change the settings of the currently loaded project");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"ProjectSettingsSubMenuLabel",
                      L"Project Settings");
  (*pcVar1)(local_68.Object,pFVar3,pFVar2,&local_res8);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pcVar1 = *(code **)((local_68.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"ProjectProjectCategoryDescription",
                      L"Project settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FSettingsModule",L"ProjectProjectCategoryName",L"Project");
  ::FName::FName(&local_res8,"Project");
  (*pcVar1)(local_68.Object,&local_res8,pFVar3,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pcVar1 = *(code **)((local_68.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"ProjectGameCategoryDescription",
                      L"Game settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FSettingsModule",L"ProjectGameCategoryName",L"Game");
  ::FName::FName(&local_res8,"Game");
  (*pcVar1)(local_68.Object,&local_res8,pFVar3,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pcVar1 = *(code **)((local_68.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"ProjectEngineCategoryDescription",
                      L"Project settings specific to the engine");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FSettingsModule",L"ProjectEngineCategoryName",L"Engine");
  ::FName::FName(&local_res8,"Engine");
  (*pcVar1)(local_68.Object,&local_res8,pFVar3,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pcVar1 = *(code **)((local_68.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"ProjectEditorCategoryDescription",
                      L"Project settings specific to the editor");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FSettingsModule",L"ProjectEditorCategoryName",L"Editor");
  ::FName::FName(&local_res8,"Editor");
  (*pcVar1)(local_68.Object,&local_res8,pFVar3,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pcVar1 = *(code **)((local_68.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"ProjectPlatformsCategoryDescription",
                      L"Platform settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FSettingsModule",L"ProjectPlatformsCategoryName",L"Platforms");
  ::FName::FName(&local_res8,"Platforms");
  (*pcVar1)(local_68.Object,&local_res8,pFVar3,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pcVar1 = *(code **)((local_68.Object)->_padding_ + 8);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"FSettingsModule",L"ProjectPluginsCategoryDescription",
                      L"Plugins settings");
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FSettingsModule",L"ProjectPluginsCategoryName",L"Plugins");
  ::FName::FName(&local_res8,"Plugins");
  (*pcVar1)(local_68.Object,&local_res8,pFVar3,pFVar2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  local_res8 = (FName)this;
  FVar4 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddLambda<_FSettingsModule::StartupModule_::__l2::<lambda_1>_>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreUObjectDelegates::ReloadReinstancingCompleteDelegate,&local_res10);
                    /* WARNING: Load size is inaccurate */
  (this->OnReloadHandle).ID = *FVar4.ID;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// ShutdownModule @ 1426938c0

void __thiscall FSettingsModule::ShutdownModule(FSettingsModule *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ForAnyElementType *this_00;
  ulonglong uVar8;
  FDestructionSentinel local_38;
  
  uVar1 = (this->OnReloadHandle).ID;
  if (uVar1 == 0) {
    (this->OnReloadHandle).ID = 0;
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreUObjectDelegates::ReloadReinstancingCompleteDelegate,
             (FWriteAccessScope *)&local_38);
  uVar7 = 0;
  uVar8 = uVar7;
  if (0 < (int)FCoreUObjectDelegates::ReloadReinstancingCompleteDelegate._16_4_) {
    do {
      uVar6 = (uint)uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (int)FCoreUObjectDelegates::ReloadReinstancingCompleteDelegate._16_4_) {
        uVar4 = ~uVar6 >> 0x1f;
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
      this_00 = (ForAnyElementType *)
                (FCoreUObjectDelegates::ReloadReinstancingCompleteDelegate._8_8_ + uVar8);
      if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)) &&
         (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(), *puVar5 == uVar1))
      {
        if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)this_00->Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
          *(undefined4 *)&this_00[1].Data = 0;
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FCoreUObjectDelegates::ReloadReinstancingCompleteDelegate,false);
        break;
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 0x10;
    } while ((int)(uVar6 + 1) <
             (int)FCoreUObjectDelegates::ReloadReinstancingCompleteDelegate._16_4_);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  (this->OnReloadHandle).ID = 0;
  return;
}

// FindOrAddContainer @ 142698640

TSharedRef<FSettingsContainer,1> * __thiscall
FSettingsModule::FindOrAddContainer
          (FSettingsModule *this,TSharedRef<FSettingsContainer,1> *__return_storage_ptr__,
          FName *param_1)

{
  FName FVar1;
  uint uVar2;
  TSharedPtr<FSettingsContainer,1> *this_00;
  FSettingsContainer *pFVar3;
  TRawPtrProxy<FSettingsContainer> local_res8;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TSharedPtr<FSettingsContainer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TSharedPtr<FSettingsContainer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FSettingsContainer,1>,0>_>
                        *)&this->ContainerNamesToContainers,uVar2 + FVar1.Number,param_1);
  if (this_00->Object == (FSettingsContainer *)0x0) {
    pFVar3 = ::operator_new(0x118);
    local_res8.Object = (FSettingsContainer *)0x0;
    if (pFVar3 != (FSettingsContainer *)0x0) {
      *(undefined8 *)&pFVar3->Categories = 0;
      pFVar3->_padding_ = (longlong)&___7FSettingsContainer__6B_;
      *(undefined8 *)&(pFVar3->Categories).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->Categories).field_0x20 = 0;
      *(undefined4 *)&(pFVar3->Categories).field_0x28 = 0;
      *(undefined4 *)&(pFVar3->Categories).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar3->Categories).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar3->Categories).field_0x34 = 0;
      *(undefined8 *)&(pFVar3->Categories).field_0x40 = 0;
      *(undefined4 *)&(pFVar3->Categories).field_0x48 = 0;
      FText::FText(&pFVar3->Description);
      FText::FText(&pFVar3->DisplayName);
      (pFVar3->IconName).ComparisonIndex = 0;
      (pFVar3->IconName).Number = 0;
      pFVar3->Name = *param_1;
      *(undefined8 *)&pFVar3->CategorySortPriorities = 0;
      *(undefined8 *)&(pFVar3->CategorySortPriorities).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->CategorySortPriorities).field_0x20 = 0;
      *(undefined4 *)&(pFVar3->CategorySortPriorities).field_0x28 = 0;
      *(undefined4 *)&(pFVar3->CategorySortPriorities).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar3->CategorySortPriorities).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar3->CategorySortPriorities).field_0x34 = 0;
      *(undefined8 *)&(pFVar3->CategorySortPriorities).field_0x40 = 0;
      *(undefined4 *)&(pFVar3->CategorySortPriorities).field_0x48 = 0;
      *(undefined8 *)&pFVar3->CategoryModifiedDelegate = 0;
      *(undefined8 *)&(pFVar3->CategoryModifiedDelegate).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->CategoryModifiedDelegate).field_0x10 = 0;
      *(undefined8 *)&(pFVar3->CategoryModifiedDelegate).field_0x18 = 2;
      *(undefined8 *)&pFVar3->SectionRemovedDelegate = 0;
      *(undefined8 *)&(pFVar3->SectionRemovedDelegate).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->SectionRemovedDelegate).field_0x10 = 0;
      *(undefined8 *)&(pFVar3->SectionRemovedDelegate).field_0x18 = 2;
      local_res8.Object = pFVar3;
    }
    TSharedPtr<FSettingsContainer,1>::operator=<FSettingsContainer>(this_00,&local_res8);
    TMulticastDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (&this->ContainerAddedDelegate,param_1);
  }
  TSharedPtr<FSettingsContainer,1>::ToSharedRef(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ReinstancingComplete @ 142699db0

void __thiscall FSettingsModule::ReinstancingComplete(FSettingsModule *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  IReload *pIVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pIVar8 = GetActiveReloadInterface();
  if (pIVar8 != (IReload *)0x0) {
    iVar3 = *(int *)&(this->ContainerNamesToContainers).field_0x28;
    iVar12 = 0;
    iVar14 = 0;
    uVar6 = 1;
    puVar1 = &(this->ContainerNamesToContainers).field_0x10;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->ContainerNamesToContainers).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142699e7d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar7 = local_res18 + -1 + iVar14;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_142699e7d:
    uVar11 = *(uint *)&(this->ContainerNamesToContainers).field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,iVar12);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->ContainerNamesToContainers).field_0x8 -
                         *(int *)&(this->ContainerNamesToContainers).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&(this->ContainerNamesToContainers).field_0x28;
    if (uVar11 != uVar6) {
      puVar13 = *(undefined1 **)&(this->ContainerNamesToContainers).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_142699f90;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res20 = (int)lVar9;
      uVar11 = local_res20 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_142699f90:
    while( true ) {
      if (*(int *)&(this->ContainerNamesToContainers).field_0x8 -
          *(int *)&(this->ContainerNamesToContainers).field_0x34 != (int)uStack_40) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FSettingsContainer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar9 = *(longlong *)&this->ContainerNamesToContainers +
              (longlong)TStack_60.CurrentBitIndex * 0x20;
      if ((*(longlong *)(lVar9 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FSettingsContainer::ReinstancingComplete(*(FSettingsContainer **)(lVar9 + 8),pIVar8);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

