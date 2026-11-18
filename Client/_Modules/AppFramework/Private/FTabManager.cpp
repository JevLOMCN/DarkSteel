// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// NewLayout @ 142fed670

TSharedRef<FTabManager::FLayout,1> * __cdecl
FTabManager::NewLayout(TSharedRef<FTabManager::FLayout,1> *__return_storage_ptr__,FName param_1)

{
  FLayout *pFVar1;
  TRawPtrProxy<FTabManager::FLayout> local_res8;
  
  pFVar1 = ::operator_new(0x38);
  local_res8.Object = (FLayout *)0x0;
  if (pFVar1 != (FLayout *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    (pFVar1->PrimaryArea).Object = (FArea *)0x0;
    (pFVar1->PrimaryArea).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar1->Areas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->Areas).ArrayNum = 0;
    (pFVar1->Areas).ArrayMax = 0;
    pFVar1->LayoutName = param_1;
    local_res8.Object = pFVar1;
  }
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// NewArea @ 143038cb0

TSharedRef<FTabManager::FArea,1> * __cdecl
FTabManager::NewArea
          (TSharedRef<FTabManager::FArea,1> *__return_storage_ptr__,float param_1,float param_2)

{
  FArea *pFVar1;
  TRawPtrProxy<FTabManager::FArea> local_res8 [4];
  
  pFVar1 = ::operator_new(0x98);
  local_res8[0].Object = (FArea *)0x0;
  if (pFVar1 != (FArea *)0x0) {
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    *(undefined4 *)&pFVar1->_padding_ = 0x3f800000;
    *(undefined4 *)&pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = 0;
    pFVar1->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
    pFVar1->WindowPlacement = Placement_Automatic;
    (pFVar1->UnscaledWindowPosition).field0_0x0._s_0.X = 0.0;
    (pFVar1->UnscaledWindowPosition).field0_0x0._s_0.Y = 0.0;
    (pFVar1->UnscaledWindowSize).field0_0x0._s_0.X = (double)param_1;
    (pFVar1->UnscaledWindowSize).field0_0x0._s_0.Y = (double)param_2;
    pFVar1->bIsMaximized = false;
    (pFVar1->ExtensionId).ComparisonIndex = 0;
    (pFVar1->ExtensionId).Number = 0;
    (pFVar1->ActivePanelDrawerTab).TabId.TabType.ComparisonIndex = 0;
    (pFVar1->ActivePanelDrawerTab).TabId.TabType.Number = 0;
    (pFVar1->ActivePanelDrawerTab).TabId.InstanceId = -1;
    (pFVar1->ActivePanelDrawerTab).TabId.Flags = SaveLayout;
    (pFVar1->ActivePanelDrawerTab).Size.MainContentCoefficient = 0.75;
    (pFVar1->ActivePanelDrawerTab).Size.PanelDrawerCoefficient = 0.25;
    (pFVar1->InactivePanelDrawerTabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->InactivePanelDrawerTabs).ArrayNum = 0;
    (pFVar1->InactivePanelDrawerTabs).ArrayMax = 0;
    local_res8[0].Object = pFVar1;
  }
  TSharedRef<FTabManager::FArea,1>::TSharedRef<FTabManager::FArea,1><FTabManager::FArea>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

