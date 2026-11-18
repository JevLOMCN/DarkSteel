// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 5

// StartupModule @ 14d8298a0

void __thiscall FAdvancedWidgetsModule::StartupModule(FAdvancedWidgetsModule *this)

{
  TUniquePtr<UE::PropertyViewer::FPropertyValueFactory,TDefaultDelete<UE::PropertyViewer::FPropertyValueFactory>_>
  *pTVar1;
  FPropertyValueFactoryImpl *pFVar2;
  FPropertyValueFactory *pFVar3;
  FPropertyValueFactory *pFVar4;
  longlong local_18 [2];
  
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::Create();
  pFVar3 = ::operator_new(8);
  if (pFVar3 == (FPropertyValueFactory *)0x0) {
    pFVar3 = (FPropertyValueFactory *)0x0;
  }
  else {
    pFVar3 = UE::PropertyViewer::FPropertyValueFactory::FPropertyValueFactory(pFVar3);
  }
  pTVar1 = &this->PropertyValueFactory;
  if (pTVar1 == (TUniquePtr<UE::PropertyViewer::FPropertyValueFactory,TDefaultDelete<UE::PropertyViewer::FPropertyValueFactory>_>
                 *)local_18) {
    if (pFVar3 == (FPropertyValueFactory *)0x0) {
      return;
    }
    pFVar2 = (pFVar3->Impl).Ptr;
    pFVar4 = pFVar3;
    if (pFVar2 != (FPropertyValueFactoryImpl *)0x0) {
      (**(code **)&pFVar2[-1].RegisteredFieldEditor.field_0x40)
                (&pFVar2[-1].RegisteredFieldEditor.field_0x40);
    }
  }
  else {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar3;
    if (pFVar4 == (FPropertyValueFactory *)0x0) {
      return;
    }
    pFVar2 = (pFVar4->Impl).Ptr;
    if (pFVar2 != (FPropertyValueFactoryImpl *)0x0) {
      (**(code **)&pFVar2[-1].RegisteredFieldEditor.field_0x40)
                (&pFVar2[-1].RegisteredFieldEditor.field_0x40);
    }
  }
  ::operator_delete(pFVar4,8);
  return;
}

// ShutdownModule @ 14d829940

void __thiscall FAdvancedWidgetsModule::ShutdownModule(FAdvancedWidgetsModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *pFVar5;
  FName aFStackX_8 [4];
  
  if (UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr == (FSlateStyleSet *)0x0) {
    return;
  }
  pFVar5 = (FName *)(**(code **)((UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr)->
                                 _padding_ + 8))();
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)(pFVar5->ComparisonIndex).Value);
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlateStyleName.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateStyleRegistry.cpp"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1 = *pFVar5;
  if (FSlateStyleRegistry::SlateStyleRepository._8_4_ !=
      FSlateStyleRegistry::SlateStyleRepository._52_4_) {
    aFStackX_8[0] = FVar1;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,ISlateStyle_const_*>,TDefaultMapHashableKeyFuncs<FName,ISlateStyle_const_*,0>,FDefaultSetAllocator>
                         *)&FSlateStyleRegistry::SlateStyleRepository,FVar1.Number + uVar4,
                        aFStackX_8);
  }
  return;
}

// GetModule @ 14d869230

FAdvancedWidgetsModule * __cdecl FAdvancedWidgetsModule::GetModule(void)

{
  FName FVar1;
  FModuleManager *this;
  FAdvancedWidgetsModule *pFVar2;
  
  FVar1 = UE::AdvancedWidgets::Private::NAME_AdvancedWidgets;
  this = FModuleManager::Get();
  pFVar2 = (FAdvancedWidgetsModule *)FModuleManager::LoadModuleChecked(this,FVar1);
  return pFVar2;
}

// GetModulePtr @ 14d869260

FAdvancedWidgetsModule * __cdecl FAdvancedWidgetsModule::GetModulePtr(void)

{
  FAdvancedWidgetsModule *pFVar1;
  
  pFVar1 = (FAdvancedWidgetsModule *)
           FModuleManager::GetModulePtr_Internal(UE::AdvancedWidgets::Private::NAME_AdvancedWidgets)
  ;
  return pFVar1;
}

// GetPropertyValueFactory @ 14d86bc30

FPropertyValueFactory * __thiscall
FAdvancedWidgetsModule::GetPropertyValueFactory(FAdvancedWidgetsModule *this)

{
  return (this->PropertyValueFactory).Ptr;
}

